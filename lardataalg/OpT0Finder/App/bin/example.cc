//
// Example C++ routine to run instantiate your sample class
//

#include "Analysis/ana_processor.h"
//#include "DataFormat/event_ass.h"

#include <iostream>

#include "cetlib/filepath_maker.h"
#include "fhiclcpp/ParameterSet.h"
#include "fhiclcpp/make_ParameterSet.h"

#include "lardataalg/OpT0Finder/App/UBT0Finder.h"
#include "lardataalg/OpT0Finder/Algorithms/NPtFilter.h"
#include "lardataalg/OpT0Finder/Algorithms/MaxNPEWindow.h"
#include "lardataalg/OpT0Finder/Algorithms/TimeCompatMatch.h"
#include "lardataalg/OpT0Finder/Algorithms/PhotonLibHypothesis.h"
#include "lardataalg/OpT0Finder/Algorithms/QLLMatch.h"
#include "lardataalg/OpT0Finder/Algorithms/QWeightPoint.h"
#include "lardataalg/OpT0Finder/Algorithms/CommonAmps.h"
#include "lardataalg/OpT0Finder/Algorithms/LightPath.h"

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


  // Attach a template process
  larlite::UBT0Finder *my_unit = new larlite::UBT0Finder();
  my_unit->SetEDiff(10.);
  my_unit->UseMC(true);
  my_unit->SetROStart(-3200.);
  my_unit->SetROEnd(3200.);
  my_unit->SetTrigTime(0.);
  my_unit->UseBNBCorrectnessWindow(false);
  my_unit->UseLightPathWithMC(false);

 size_t temp = my_proc.add_process( my_unit ); //new larlite::UBT0Finder()); CAUSES A SEGMENTATION FAULT FROM HERE FORWARD

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

  // Make the fhicl parameter set from the flashmatch.fcl
  fhicl::ParameterSet pset;
  cet::filepath_lookup_nonabsolute fpm("LARLITE_USERDEVDIR");
  make_ParameterSet("lardataalg/lardataalg/OpT0Finder/App/mac/flashmatchtwo.fcl", fpm, pset);

  my_unit->Manager().Configure( pset );

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
