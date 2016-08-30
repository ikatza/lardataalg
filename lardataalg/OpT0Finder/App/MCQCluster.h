/**
 * \file MCQCluster.h
 *
 * \ingroup App
 * 
 * \brief Class def header for a class MCQCluster
 *
 * @author kazuhiro
 */

/** \addtogroup App

    @{*/
#ifndef MCINTERACTION_H
#define MCINTERACTION_H

#include <iostream>

#include "DataFormat/mctrack.h"
#include "DataFormat/mcshower.h"

#include "lardataobj/MCBase/MCTrack.h"
#include "lardataobj/MCBase/MCShower.h"

#include "lardataalg/OpT0Finder/Base/OpT0FinderTypes.h"
#include "lardataalg/OpT0Finder/Base/BaseAlgorithm.h"
#include "lardataalg/OpT0Finder/Algorithms/LightPath.h"

//#include "FhiclLite/PSet.h"
#include "fhiclcpp/ParameterSet.h"

namespace flashana {
  /**
     \class MCQCluster
     User defined class MCQCluster ... these comments are used to generate
     doxygen documentation!
  */
  class MCQCluster : public flashana::BaseAlgorithm {
    
  public:
    
    /// Default constructor
    MCQCluster(const std::string name="MCQCluster");
    
    /// Default destructor
    ~MCQCluster(){}

//    void Configure(const ::fcllite::PSet &pset);

    void Configure(const ::fhicl::ParameterSet &pset){
      _light_yield = pset.get<double>("LightYield");
      _step_size   = pset.get<double>("StepSize");
      _use_light_path = pset.get<bool>("UseLightPath");
    };

    void Construct( const larlite::event_mctrack&,
                    const larlite::event_mcshower& );
//    void Construct( const std::vector<sim::MCTrack>&,
//                    const std::vector<sim::MCShower>& );

    const std::vector<flashana::QCluster_t>& QClusters() const;

    const flashana::QCluster_t& QCluster(size_t) const;

    size_t MCTrack2QCluster(size_t) const;

    size_t MCShower2QCluster(size_t) const;

    bool UseXshift(bool use) { _use_xshift = use; return _use_xshift;}
     
    const flashana::MCSource_t& MCObjectID(size_t) const;

    void SetUseLightPath ( bool use_light_path ) { _use_light_path = use_light_path ; } 

    #ifndef __CINT__
    void Swap(std::vector<flashana::QCluster_t>&&,
	      std::vector<flashana::MCSource_t>&&);
    #endif

//    void PassDriftVelocity(const double PassedDriftVelocity) { DriftVelocity = PassedDriftVelocity; }

  private:

    // DriftVelocity Information
//    double DriftVelocity; 
 
    flashana::MCSource_t Identify( const unsigned int,
				   const larlite::event_mctrack&,
				   const larlite::event_mcshower& ) const;
//    flashana::MCSource_t Identify( const unsigned int,
//				   const std::vector<sim::MCTrack>&,
//				   const std::vector<sim::MCShower>& ) const;

    mutable int _n;
    
    double _light_yield;
    double _step_size;
    bool _use_xshift;
    std::vector<flashana::QCluster_t> _qcluster_v;
    std::vector<size_t> _mctrack_2_qcluster;
    std::vector<size_t> _mcshower_2_qcluster;
    std::vector<flashana::MCSource_t> _qcluster_2_mcobject;

    flashana::LightPath _lightpath_clustering ;
    bool _use_light_path ;

  };
}

#endif
/** @} */ // end of doxygen group 

