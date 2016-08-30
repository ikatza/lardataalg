/**
 * \file UnitTest1.h
 *
 * \ingroup App
 * 
 * \brief Class def header for a class UnitTest1
 *
 * @author ariana Hackenburg 
 */

/** \addtogroup App

    @{*/

#ifndef LARLITE_UNITTEST1_H
#define LARLITE_UNITTEST1_H

#include "Analysis/ana_base.h"
#include "MCQCluster.h"
#include "lardataalg/OpT0Finder/Base/FlashMatchManager.h"
#include "lardataalg/OpT0Finder/Algorithms/LightPath.h"
#include "lardataalg/OpT0Finder/Algorithms/PhotonLibHypothesis.h"
#include <TTree.h>
#include <TH2D.h>

namespace larlite {
  /**
     \class UnitTest1
     User custom analysis class made by SHELL_USER_NAME
   */
  class UnitTest1 : public ana_base{
  
  public:

    UnitTest1();

    virtual ~UnitTest1(){}

    virtual bool initialize();

    virtual bool analyze(storage_manager* storage);

    virtual bool finalize();

    ::flashana::FlashMatchManager& Manager() { return _mgr;}

  protected:

    ::flashana::FlashMatchManager _mgr;
    ::flashana::LightPath _lp;

    ::flashana::PhotonLibHypothesis _plh ;

  };
}
#endif

//**************************************************************************
// 
// For Analysis framework documentation, read Manual.pdf here:
//
// http://microboone-docdb.fnal.gov:8080/cgi-bin/ShowDocument?docid=3183
//
//**************************************************************************

/** @} */ // end of doxygen group 
