#ifndef LARLITE_UNITTEST1_CXX
#define LARLITE_UNITTEST1_CXX

#include "UnitTest1.h"
#include "larcorealg/GeoAlgo/GeoAlgo.h"
#include "larcorealg/GeoAlgo/GeoLineSegment.h"
//#include "LArUtil/Geometry.h"
#include "lardataalg/OpT0Finder/Base/OpT0FinderTypes.h"

#include <time.h>

namespace larlite {

  UnitTest1::UnitTest1()
  {
    _name = "UnitTest1";
    _fout = 0;
  }

  bool UnitTest1::initialize() { 

//    srand( (unsigned)time( NULL ) );
    srand( 5 );
    return true; 
  }

  bool UnitTest1::analyze(storage_manager* storage) {

    _mgr.Reset();

   float x1 = float( rand() % 256350 ) / 1000 ;
   float y1 = float( rand() % 116000 - 116000) / 1000 ;
   float z1 = float( rand() % 1036800 ) / 1000 ;
   
   float x2 = float( rand() % 256350 ) / 1000 ;
   float y2 = float( rand() % 116000 - 116000 ) /1000 ;
   float z2 = float( rand() % 1036800 ) / 1000 ;

   //float x1 = 4.951 ; 
   //float y1 = -74.943;
   //float z1 = 1016.57;

   //float x2 = 23.293;
   //float y2 = -23.579;
   //float z2 = 705.523;

   float length = sqrt(pow(x1-x2,2) + pow(y1-y2,2) + pow(z1-z2,2));
   //float step_size = 2 ; //will get broken up into 0.5cm pieces inside lightpath
   //int steps = int(length / step_size) + 1;  
   int steps = 20; 

   float dx = (x2 - x1) / (steps - 1); 
   float dy = (y2 - y1) / (steps - 1); 
   float dz = (z2 - z1) / (steps - 1); 

   ::geoalgo::Trajectory mctraj;
   mctraj.emplace_back(::geoalgo::Vector(x1,y1,z1));

   ::flashana::QCluster_t tpc_obj;

   //std::cout<<"N steps are :"<<steps <<std::endl ;
   //std::cout<<"Direction is: "<<dx<<", "<<dy<<", "<<dz<<std::endl ;
   std::cout<<"Start and end: ("<<x1<<", "<<y1<<", "<<z1<<")->("<<x2<<", "<<y2<<", "<<z2<<")"<<std::endl ;
   
   for(int step_index=1; step_index< steps ; step_index++ ){  
     
     float new_x = x1 + step_index * dx ;
     float new_y = y1 + step_index * dy ;
     float new_z = z1 + step_index * dz ;
     std::cout<<"New x y z " <<new_x<<", "<<new_y<<", "<<new_z<<std::endl;
   
     auto pt1 = mctraj[step_index-1] ;
     ::geoalgo::Vector pt2(new_x,new_y,new_z);
     ::flashana::QPoint_t q_pt ;

     ::geoalgo::Vector mid_pt((pt1 + pt2) / 2.);
      q_pt.x = mid_pt[0];
      q_pt.y = mid_pt[1];
      q_pt.z = mid_pt[2];
      q_pt.q = 2.07 * 29000 * ( length / (steps - 1) );
      
      tpc_obj.emplace_back(q_pt);

     if( step_index < steps - 1 )
       mctraj.emplace_back(::geoalgo::Vector(new_x,new_y,new_z));
     else
       mctraj.emplace_back(::geoalgo::Vector(x2,y2,z2));
     }

    _mgr.Emplace(std::move(tpc_obj));

    flashana::Flash_t flash;

    if(flash.pe_v.empty())
      flash.pe_v.resize(32); // 32 = geo->NOpDets()
     
    _plh.FillEstimate(tpc_obj,flash);

    //for(int i =0 ; i < flash.pe_v.size(); i ++)
    //  std::cout<<"PE at PMT "<<i<<", "<<flash.pe_v[i]<<std::endl; 

    double vis_pe_sum = std::accumulate(std::begin(flash.pe_v),std::end(flash.pe_v),0.0);

    std::vector<double> opdetz {951.862,911.065,989.711,865.599,990.356,951.865,911.94,751.883,711.073,796.208,664.203,751.906,711.274,540.93,500.134,585.284,453.095,540.617,500.22,328.212,287.977,373.839,242.014,328.341,287.639,128.355,87.7605,51.1015,173.743,50.4745,128.18,87.8695};

    float weight_z = 0.0;

    for(size_t pmt_index=0; pmt_index < 32; ++pmt_index) // 32 = geo->NOpDets()
      weight_z += opdetz[pmt_index] * flash.pe_v[pmt_index] / vis_pe_sum;

    flash.z = weight_z ; 
    _mgr.Emplace(std::move(flash));

    auto const res = _mgr.Match();

    for( auto const & r : res)
      std::cout<<"Final Score: "<<r.score<<std::endl ;
      
    return true;
  }

  bool UnitTest1::finalize() {
    if (_fout) { _fout->cd(); }
    return true;
  }

}
#endif
