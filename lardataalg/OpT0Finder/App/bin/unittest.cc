//
// Example C++ routine to run instantiate your sample class
//

#include "cetlib/filepath_maker.h"
#include "fhiclcpp/ParameterSet.h"
#include "fhiclcpp/make_ParameterSet.h"

#include "Analysis/ana_processor.h"
//#include "DataFormat/event_ass.h"

#include <iostream>

#include "lardataalg/OpT0Finder/App/UnitTest1.h"
#include "lardataalg/OpT0Finder/Algorithms/NPtFilter.h"
#include "lardataalg/OpT0Finder/Algorithms/MaxNPEWindow.h"
#include "lardataalg/OpT0Finder/Algorithms/TimeCompatMatch.h"
#include "lardataalg/OpT0Finder/Algorithms/PhotonLibHypothesis.h"
#include "lardataalg/OpT0Finder/Algorithms/QLLMatch.h"
#include "lardataalg/OpT0Finder/Algorithms/QWeightPoint.h"
#include "lardataalg/OpT0Finder/Algorithms/CommonAmps.h"
#include "lardataalg/OpT0Finder/Algorithms/LightPath.h"
#include "lardataalg/OpT0Finder/Base/OpT0FinderTypes.h"

#include "larcorealg/GeoAlgo/GeoAlgo.h"
#include "larcorealg/GeoAlgo/GeoLineSegment.h"

#include <time.h>

int main(int argc, char** argv){
  if(argc<2) {

    std::cout
      << std::endl << "\nNot nuff files"
      << std::endl;
  }
  
  std::cout << "\nThis is \"Analysis\" package simple test routine.\n\n";

  // Create ana_processor instance
  larlite::ana_processor my_proc;

  // Set input root file
  my_proc.add_input_file(argv[1]);

   // Specify IO mode
  my_proc.set_io_mode(larlite::storage_manager::kREAD);
  
  // Specify output root file name
  my_proc.set_ana_output_file("ana.root");

  larlite::UnitTest1 *my_unit = new larlite::UnitTest1();

  size_t temp = my_proc.add_process( my_unit ); //new larlite::UBT0Finder());

  

  // TPC Filter Algo
  my_unit->Manager().SetAlgo(new flashana::NPtFilter());
  // PMT Filter Algo
  //my_unit->Manager().SetAlgo(new flashana::MaxNPEWindow());
  // Match Prohibit Algo
  //my_unit->Manager().SetAlgo(new flashana::TimeCompatMatch());
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

  // Make the fhicl parameter set from the flashmatch.fcl
  fhicl::ParameterSet pset;
  cet::filepath_lookup_nonabsolute fpm("LARLITE_USERDEVDIR");
  make_ParameterSet("lardataalg/lardataalg/OpT0Finder/App/mac/flashmatch.fcl", fpm, pset);

  my_unit->Manager().Configure( pset );

  std::cout
    << std::endl
    << "Finished configuring ana_processor. Start event loop!"<< std::endl
    << std::endl;

  // Let's run it.
  my_proc.run(0,5);
  // done!
  //

  std::cout << "\nFinished running ana_processor event loop!\n\n";

  return 0;
}
