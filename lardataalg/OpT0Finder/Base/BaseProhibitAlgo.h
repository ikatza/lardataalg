/**
 * \file BaseProhibitAlgo.h
 *
 * \ingroup Base
 * 
 * \brief Class def header for a class BaseProhibitAlgo
 *
 * @author david caratelli
 */

/** \addtogroup Base

    @{*/
#ifndef OPT0FINDER_BASEPROHIBITALGO_H
#define OPT0FINDER_BASEPROHIBITALGO_H

#include "BaseAlgorithm.h"
#include "larcorealg/DetectorInfo/DetectorPropertiesStandard.h"
#include <memory> // std::unique_ptr<>

namespace flashana {
  /**
     \class BaseProhibitAlgo
     Algorithm base class for prohibiting the match
     between a charge cluster and a flash \n
  */
  class BaseProhibitAlgo : public BaseAlgorithm{
    
  public:
    
    /// Default constructor
    BaseProhibitAlgo(const std::string name="noname") : BaseAlgorithm(kMatchProhibit,name)
    {}
 
    /// Default destructor
    virtual ~BaseProhibitAlgo(){}
    
    /**
     * @brief CORE FUNCTION: determines if a flash and cluster are at all compatible (bool return)
     */
    virtual bool MatchCompatible(const QCluster_t& clus, const Flash_t& flash) = 0;

    // Haha, this is a gross hack! Need to pass shared service provider to TimeCompatMatch Algorithm only.
    virtual void SpecialTimeCompatMatchConfig( const std::unique_ptr<detinfo::DetectorProperties> &detProp ){};
    
  };
}

#endif
/** @} */ // end of doxygen group 

