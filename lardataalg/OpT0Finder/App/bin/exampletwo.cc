//
// Example C++ routine to run instantiate your sample class
//

#include "Analysis/ana_processor.h"
//#include "DataFormat/event_ass.h"

#include "lardataalg/OpT0Finder/App/UBT0Finder.h"
#include "lardataalg/OpT0Finder/Algorithms/NPtFilter.h"
#include "lardataalg/OpT0Finder/Algorithms/MaxNPEWindow.h"
#include "lardataalg/OpT0Finder/Algorithms/TimeCompatMatch.h"
#include "lardataalg/OpT0Finder/Algorithms/PhotonLibHypothesis.h"
#include "lardataalg/OpT0Finder/Algorithms/QLLMatch.h"
#include "lardataalg/OpT0Finder/Algorithms/QWeightPoint.h"
#include "lardataalg/OpT0Finder/Algorithms/CommonAmps.h"
#include "lardataalg/OpT0Finder/Algorithms/LightPath.h"
#include "lardataalg/OpT0Finder/Base/OpT0FinderException.h"

// Shared libraries
#include "larcorealg/Geometry/ChannelMapStandardAlg.h"
#include "larcorealg/DetectorInfo/LArPropertiesStandardTestHelpers.h"
#include "larcorealg/DetectorInfo/DetectorClocksStandardTestHelpers.h"
#include "larcorealg/DetectorInfo/DetectorPropertiesStandard.h"
#include "larcorealg/DetectorInfo/DetectorPropertiesStandardTestHelpers.h"

// framework libraries
#include "fhiclcpp/ParameterSet.h"
#include "fhiclcpp/intermediate_table.h"
#include "fhiclcpp/make_ParameterSet.h"
#include "fhiclcpp/parse.h"
#include "messagefacility/MessageLogger/MessageLogger.h"

// CET libraries
#include "cetlib/filesystem.h" // cet::is_absolute_filepath()
#include "cetlib/filepath_maker.h"
#include "cetlib/search_path.h"

#include <iostream>
#include <string>
#include <memory> // std::unique_ptr<>

//------------------------------------------------------------------------------
//---  FHiCL file configuration
//---

namespace details {
  // Class to implement FHiCL file search.
  // This is badly ripped off from ART, but we need to stay out of it
  // so I have to replicate that functionality.
  // I used the same class name.
  class FirstAbsoluteOrLookupWithDotPolicy: public cet::filepath_maker {
      public:
    FirstAbsoluteOrLookupWithDotPolicy(std::string const& paths):
      first(true), after_paths(paths)
      {}
    
    virtual std::string operator() (std::string const& filename);
    
    void reset() { first = true; }
    
      private:
    bool first; ///< whether we are waiting for the first query
    cet::search_path after_paths; ///< path for the other queries
    
  }; // class FirstAbsoluteOrLookupWithDotPolicy


  std::string FirstAbsoluteOrLookupWithDotPolicy::operator()
    (std::string const &filename)
  {
    if (first) {
      first = false;
      if (cet::is_absolute_filepath(filename)) return filename;
      return cet::search_path("./:" + after_paths.to_string())
        .find_file(filename);
    } else {
      return after_paths.find_file(filename);
    }
  } // FirstAbsoluteOrLookupWithDotPolicy::operator()

} // namespace details


fhicl::ParameterSet ParseConfiguration(std::string configPath) {
    
  char const* fhiclEnv = getenv("FHICL_FILE_PATH");
  std::string search_path = fhiclEnv? std::string(fhiclEnv) + ":": ".:";
  details::FirstAbsoluteOrLookupWithDotPolicy policy(search_path);
  
  // parse a configuration file; obtain intermediate form
  fhicl::intermediate_table table;
  fhicl::parse_document(configPath, policy, table);
  
  // translate into a parameter set
  fhicl::ParameterSet pset;
  fhicl::make_ParameterSet(table, pset);
  
  return pset;
  
} // ParseConfiguration()

void SetupMessageFacility
  (fhicl::ParameterSet const& pset, std::string appl_name /* = "" */)
  {
    auto mf_pset = pset.get<fhicl::ParameterSet>("services.message", {});
   
    mf::StartMessageFacility(mf::MessageFacilityService::SingleThread, mf_pset);
    if (!appl_name.empty()) mf::SetApplicationName(appl_name);

    mf::SetContext("Initialization");
    mf::LogInfo("MessageFacility") << "MessageFacility started.";
    mf::SetModuleName("main");
  } // SetupMessageFacility()

  template <class ChannelMapClass = geo::ChannelMapStandardAlg>
  std::unique_ptr<geo::GeometryCore> SetupGeometry
    (fhicl::ParameterSet const& config)
  {
    //
    // create the new geometry service provider
    //
    auto new_geom = std::make_unique<geo::GeometryCore>(config);
  
    //
    // find the location of the GDML files
    //
    std::string const RelativePath
    = config.get< std::string>("RelativePath", "");
  
    std::string
      GDMLFileName = RelativePath + config.get<std::string>("GDML"),
      ROOTFileName = RelativePath + config.get<std::string>("ROOT");
  
    // Search all reasonable locations for the geometry file;
    // we see if by any chance art's FW_SEARCH_PATH directory is set and try
    // there;
    // if not, we do expect the path to be complete enough for ROOT to cope.
    cet::search_path sp("FW_SEARCH_PATH");
  
    std::string ROOTfile;
    if (!sp.find_file(ROOTFileName, ROOTfile)) ROOTfile = ROOTFileName;
  
    // we really don't care of GDML file, since we are not going to run Geant4
    std::string GDMLfile;
    if (!sp.find_file(GDMLFileName, GDMLfile))
      mf::LogWarning("CreateNewGeometry") << "GDML file not found.";
  
    // initialize the geometry with the files we have found
    new_geom->LoadGeometryFile(GDMLfile, ROOTfile);
  
    //
    // create the new channel map
    //
    fhicl::ParameterSet SortingParameters
      = config.get<fhicl::ParameterSet>("SortingParameters", {});
    std::shared_ptr<geo::ChannelMapAlg> pChannelMap
      (new ChannelMapClass(SortingParameters));
  
    // connect the channel map with the geometry, that shares ownership
    // (we give up ours at the end of this method)
    new_geom->ApplyChannelMap(pChannelMap);
  
    return new_geom;
  } // SetupGeometry()



int main(int argc, char** argv){

  if(argc<2) {

    std::cerr
      << std::endl
      << Form("Usage 1: %s $INPUT_ROOT_FILE",argv[0]) << std::endl
      << Form("Usage 2: %s $INPUT_ROOT_FILE $TDIRECTORY_NAME",argv[0]) << std::endl
      << std::endl;

    return 1;
  }

  std::cout << "\nThis is \"Analysis\" package simple test routine.\n\n";

  // Create ana_processor instance
  larlite::ana_processor my_proc;

  // Set input root file
  my_proc.add_input_file(argv[1]);

  // Specify input TDirectory name if given
  my_proc.add_input_file(argv[2]);

  // Specify IO mode
  my_proc.set_io_mode(larlite::storage_manager::kREAD);

  // Specify output root file name
  my_proc.set_ana_output_file("ana.root");

  // Make the fhicl parameter set from the flashmatch.fcl
//  fhicl::ParameterSet pset;
//  cet::filepath_lookup_nonabsolute fpm("LARLITE_USERDEVDIR");
//  make_ParameterSet("lardataalg/lardataalg/OpT0Finder/App/mac/flashmatchtwo.fcl", fpm, pset);
  std::string configPath = "/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/lardataalg/lardataalg/OpT0Finder/App/mac/flashmatchtwo.fcl";
  //
  // parse the FHiCL configuration for this demo
  //
  fhicl::ParameterSet pset = ParseConfiguration(configPath);
 
  //
  // initialise message facility for this demo
  //
  SetupMessageFacility(pset, "DetectorPropertiesStandardInit");
    
  //
  // initialise depending service providers
  //
  
  // GeometryCore
  std::unique_ptr<geo::GeometryCore> geom = SetupGeometry
    (pset.get<fhicl::ParameterSet>("services.Geometry"));
  
  // LArProperties
  std::unique_ptr<detinfo::LArProperties> larProp
    = testing::setupProvider<detinfo::LArPropertiesStandard>
    (pset.get<fhicl::ParameterSet>("services.LArPropertiesService"));
  
  // DetectorProperties
  std::unique_ptr<detinfo::DetectorClocks> detClocks
    = testing::setupProvider<detinfo::DetectorClocksStandard>
    (pset.get<fhicl::ParameterSet>("services.DetectorClocksService"));
 
  //
  // initialise DetectorPropertiesStandard
  //
  detinfo::DetectorPropertiesStandard::providers_type dependingOn
    (geom.get(), larProp.get(), detClocks.get());
  std::unique_ptr<detinfo::DetectorProperties> detProp
    = testing::setupProvider<detinfo::DetectorPropertiesStandard>(
    pset.get<fhicl::ParameterSet>("services.DetectorPropertiesService"),
    dependingOn
    );
  
  // Attach a template process
  larlite::UBT0Finder *my_unit = new larlite::UBT0Finder();
  my_unit->SetEDiff(10.);
  my_unit->UseMC(true);
  my_unit->SetROStart(-3200.);
  my_unit->SetROEnd(3200.);
  my_unit->SetTrigTime(0.);
  my_unit->UseBNBCorrectnessWindow(false);
  my_unit->UseLightPathWithMC(false);
  my_unit->PassGeometry(*geom);
  my_unit->PassDetectorProp(*detProp);

  size_t temp = my_proc.add_process( my_unit ); //new larlite::UBT0Finder());

  // TPC Filter Algo
  my_unit->Manager().SetAlgo(new flashana::NPtFilter());
  // PMT Filter Algo
  my_unit->Manager().SetAlgo(new flashana::MaxNPEWindow());
  // Match Prohibit Algo
  my_unit->Manager().SetAlgo(new flashana::TimeCompatMatch());
  // Hypothesis Algo
  my_unit->Manager().SetAlgo(new flashana::PhotonLibHypothesis());
  // Match Algo
  //my_unit.Manager().SetAlgo( new flashana::QLLMatch.GetME() )
  my_unit->Manager().SetAlgo( new flashana::QWeightPoint()   );
  //my_unit.Manager().SetAlgo( new flashana::CommonAmps()      )

  //
  // Other algorithms
  //
  //my_unit.Manager().AddCustomAlgo( new flashana::LightPath() )
  //cet::filepath_maker fpm;
 
  //
  // access something out of DetectorPropertiesStandard
  //
  
  mf::LogVerbatim("DetectorPropertiesStandardInit")
    << "The drift velocity at default temperature ("
    << detProp->Temperature() << " K) and electric field ("
    << detProp->Efield() << " kV/cm) is "
    << detProp->DriftVelocity() << " mm/us";

  my_unit->Manager().Configure( pset );
  my_unit->Manager().TimeCompatConfig( detProp );

  std::cout
    << std::endl
    << "Finished configuring ana_processor. Start event loop!"<< std::endl
    << std::endl;

  // Let's run it.
  my_proc.run(0,50);
  // done!
  //

  std::cout << "\nFinished running ana_processor event loop!\n\n";

  return 0;
}
