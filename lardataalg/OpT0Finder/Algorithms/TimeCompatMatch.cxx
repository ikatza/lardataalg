#ifndef OPT0FINDER_TIMECOMPATMATCH_CXX
#define OPT0FINDER_TIMECOMPATMATCH_CXX

#include "TimeCompatMatch.h"

// Shared libraries
#include "lardataalg/OpT0Finder/Base/OpT0FinderException.h"

//#include "LArUtil/GeometryUtilities.h"
//#include "LArUtil/DetectorProperties.h"

#include "larcorealg/DetectorInfo/LArProperties.h"

#include <cmath>
#include <sstream>
#include <memory> // std::unique_ptr<>
#include "fhiclcpp/ParameterSet.h"
namespace flashana {

  TimeCompatMatch::TimeCompatMatch(const std::string name)
    : BaseProhibitAlgo(name)
  {
    _frame_drift_time = 2300.; // usec
  }

  //void TimeCompatMatch::Configure(const ::fcllite::PSet &pset)
  void TimeCompatMatch::Configure(const ::fhicl::ParameterSet &pset)
  { 
     std::cout << "\n\nIn TimeCompatMatch::Configure()\n";

    _frame_drift_time = pset.get<double>("FrameDriftTime");
    _t2cm = pset.get<double>("TimeToCm");
    _ROrate = pset.get<double>("TickPeriod"); //ns

    std::cout << "\n_t2cm is: " << _t2cm;
    std::cout << "\n_ROrate is: " << _ROrate << "\n";
  }

  void TimeCompatMatch::SpecialTimeCompatMatchConfig(const std::unique_ptr<detinfo::DetectorProperties> &detProp)
  { 
    std::cout << "\n\nIn TimeCompatMatch::SpecialTimeCompatMatchConfig()\n";
    _ROrate = detProp->SamplingRate();
    std::cout << "\nDriftVelocity = " << detProp->DriftVelocity(detProp->Efield(), detProp->Temperature());
    std::cout << "\ndetProp->Efield() = " << detProp->Efield();
    std::cout << "\ndetProp->Temperature() = " << detProp->Temperature();
    _t2cm = detProp->SamplingRate() / 1000.0 * detProp->DriftVelocity(detProp->Efield(), detProp->Temperature());
    
    std::cout << "\n_t2cm is: " << _t2cm;
    std::cout << "\n_ROrate is: " << _ROrate << "\n";
  }

  bool TimeCompatMatch::MatchCompatible(const QCluster_t& clus, const Flash_t& flash)
  {


    _frame_drift_time = 2319 ;

    if(clus.empty()) return false; 

    // get time of flash
    auto flash_time = flash.time;

    // get time of cluster by looking at the range of x-positions
    double clus_x_min =  1036.; // cm
    double clus_x_max = -1036.;    // cm
    for (auto const& pt : clus){
      if (pt.x > clus_x_max) { clus_x_max = pt.x; }
      if (pt.x < clus_x_min) { clus_x_min = pt.x; }
    }

    // convert both quantities to time (usec)
    double clus_t_min = (clus_x_min/_t2cm)*(_ROrate/1000.); // us
    double clus_t_max = (clus_x_max/_t2cm)*(_ROrate/1000.); // us

    // find the largest distance in time between the flash
    // and the cluster's time
    // if the cluster's time is more than a drift-window larger
    // then the flash -> impossible coincidence
    if ( fabs(clus_t_max - flash_time) > _frame_drift_time ){
//      std::cout<<"Failed clus t min, max: "<<clus_t_min<<", "<<clus_t_max<<", "<<flash_time<<", "<<_frame_drift_time<<std::endl;
      return false;
      }
    // if the cluster comes before the flash entirely ->
    // impossible match
    if ( (clus_t_min+20.) < flash_time) {
  //    std::cout<<"min failur! "<<clus_t_min+20.<<", "<<flash_time<<", "<<std::endl; 
      return false;
      }
    
    return true;
  }


}
#endif
