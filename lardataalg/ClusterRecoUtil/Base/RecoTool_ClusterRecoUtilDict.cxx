// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RecoTool_ClusterRecoUtilDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "ClusterParamsAlg.h"
#include "ClusterParams.h"
#include "CRUException.h"
#include "CRUHelper.h"
#include "Polygon2D.h"

// Header files passed via #pragma extra_include

namespace cluster {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *cluster_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("cluster", 0 /*version*/, "ClusterParams.h", 28,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &cluster_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *cluster_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *Polygon2D_Dictionary();
   static void Polygon2D_TClassManip(TClass*);
   static void *new_Polygon2D(void *p = 0);
   static void *newArray_Polygon2D(Long_t size, void *p);
   static void delete_Polygon2D(void *p);
   static void deleteArray_Polygon2D(void *p);
   static void destruct_Polygon2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Polygon2D*)
   {
      ::Polygon2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Polygon2D));
      static ::ROOT::TGenericClassInfo 
         instance("Polygon2D", "Polygon2D.h", 37,
                  typeid(::Polygon2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &Polygon2D_Dictionary, isa_proxy, 4,
                  sizeof(::Polygon2D) );
      instance.SetNew(&new_Polygon2D);
      instance.SetNewArray(&newArray_Polygon2D);
      instance.SetDelete(&delete_Polygon2D);
      instance.SetDeleteArray(&deleteArray_Polygon2D);
      instance.SetDestructor(&destruct_Polygon2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Polygon2D*)
   {
      return GenerateInitInstanceLocal((::Polygon2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::Polygon2D*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *Polygon2D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Polygon2D*)0x0)->GetClass();
      Polygon2D_TClassManip(theClass);
   return theClass;
   }

   static void Polygon2D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLcluster_params_Dictionary();
   static void clustercLcLcluster_params_TClassManip(TClass*);
   static void *new_clustercLcLcluster_params(void *p = 0);
   static void *newArray_clustercLcLcluster_params(Long_t size, void *p);
   static void delete_clustercLcLcluster_params(void *p);
   static void deleteArray_clustercLcLcluster_params(void *p);
   static void destruct_clustercLcLcluster_params(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::cluster_params*)
   {
      ::cluster::cluster_params *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::cluster_params));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::cluster_params", "ClusterParams.h", 51,
                  typeid(::cluster::cluster_params), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLcluster_params_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::cluster_params) );
      instance.SetNew(&new_clustercLcLcluster_params);
      instance.SetNewArray(&newArray_clustercLcLcluster_params);
      instance.SetDelete(&delete_clustercLcLcluster_params);
      instance.SetDeleteArray(&deleteArray_clustercLcLcluster_params);
      instance.SetDestructor(&destruct_clustercLcLcluster_params);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::cluster_params*)
   {
      return GenerateInitInstanceLocal((::cluster::cluster_params*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::cluster_params*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLcluster_params_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::cluster_params*)0x0)->GetClass();
      clustercLcLcluster_params_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLcluster_params_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLClusterParamsAlg_Dictionary();
   static void clustercLcLClusterParamsAlg_TClassManip(TClass*);
   static void *new_clustercLcLClusterParamsAlg(void *p = 0);
   static void *newArray_clustercLcLClusterParamsAlg(Long_t size, void *p);
   static void delete_clustercLcLClusterParamsAlg(void *p);
   static void deleteArray_clustercLcLClusterParamsAlg(void *p);
   static void destruct_clustercLcLClusterParamsAlg(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::ClusterParamsAlg*)
   {
      ::cluster::ClusterParamsAlg *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::ClusterParamsAlg));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::ClusterParamsAlg", "ClusterParamsAlg.h", 31,
                  typeid(::cluster::ClusterParamsAlg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLClusterParamsAlg_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::ClusterParamsAlg) );
      instance.SetNew(&new_clustercLcLClusterParamsAlg);
      instance.SetNewArray(&newArray_clustercLcLClusterParamsAlg);
      instance.SetDelete(&delete_clustercLcLClusterParamsAlg);
      instance.SetDeleteArray(&deleteArray_clustercLcLClusterParamsAlg);
      instance.SetDestructor(&destruct_clustercLcLClusterParamsAlg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::ClusterParamsAlg*)
   {
      return GenerateInitInstanceLocal((::cluster::ClusterParamsAlg*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::ClusterParamsAlg*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLClusterParamsAlg_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::ClusterParamsAlg*)0x0)->GetClass();
      clustercLcLClusterParamsAlg_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLClusterParamsAlg_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLCRUException_Dictionary();
   static void clustercLcLCRUException_TClassManip(TClass*);
   static void *new_clustercLcLCRUException(void *p = 0);
   static void *newArray_clustercLcLCRUException(Long_t size, void *p);
   static void delete_clustercLcLCRUException(void *p);
   static void deleteArray_clustercLcLCRUException(void *p);
   static void destruct_clustercLcLCRUException(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::CRUException*)
   {
      ::cluster::CRUException *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::CRUException));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::CRUException", "CRUException.h", 25,
                  typeid(::cluster::CRUException), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLCRUException_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::CRUException) );
      instance.SetNew(&new_clustercLcLCRUException);
      instance.SetNewArray(&newArray_clustercLcLCRUException);
      instance.SetDelete(&delete_clustercLcLCRUException);
      instance.SetDeleteArray(&deleteArray_clustercLcLCRUException);
      instance.SetDestructor(&destruct_clustercLcLCRUException);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::CRUException*)
   {
      return GenerateInitInstanceLocal((::cluster::CRUException*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::CRUException*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLCRUException_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::CRUException*)0x0)->GetClass();
      clustercLcLCRUException_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLCRUException_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLCRUHelper_Dictionary();
   static void clustercLcLCRUHelper_TClassManip(TClass*);
   static void *new_clustercLcLCRUHelper(void *p = 0);
   static void *newArray_clustercLcLCRUHelper(Long_t size, void *p);
   static void delete_clustercLcLCRUHelper(void *p);
   static void deleteArray_clustercLcLCRUHelper(void *p);
   static void destruct_clustercLcLCRUHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::CRUHelper*)
   {
      ::cluster::CRUHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::CRUHelper));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::CRUHelper", "CRUHelper.h", 33,
                  typeid(::cluster::CRUHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLCRUHelper_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::CRUHelper) );
      instance.SetNew(&new_clustercLcLCRUHelper);
      instance.SetNewArray(&newArray_clustercLcLCRUHelper);
      instance.SetDelete(&delete_clustercLcLCRUHelper);
      instance.SetDeleteArray(&deleteArray_clustercLcLCRUHelper);
      instance.SetDestructor(&destruct_clustercLcLCRUHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::CRUHelper*)
   {
      return GenerateInitInstanceLocal((::cluster::CRUHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::CRUHelper*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLCRUHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::CRUHelper*)0x0)->GetClass();
      clustercLcLCRUHelper_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLCRUHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_Polygon2D(void *p) {
      return  p ? new(p) ::Polygon2D : new ::Polygon2D;
   }
   static void *newArray_Polygon2D(Long_t nElements, void *p) {
      return p ? new(p) ::Polygon2D[nElements] : new ::Polygon2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_Polygon2D(void *p) {
      delete ((::Polygon2D*)p);
   }
   static void deleteArray_Polygon2D(void *p) {
      delete [] ((::Polygon2D*)p);
   }
   static void destruct_Polygon2D(void *p) {
      typedef ::Polygon2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Polygon2D

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLcluster_params(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::cluster_params : new ::cluster::cluster_params;
   }
   static void *newArray_clustercLcLcluster_params(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::cluster_params[nElements] : new ::cluster::cluster_params[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLcluster_params(void *p) {
      delete ((::cluster::cluster_params*)p);
   }
   static void deleteArray_clustercLcLcluster_params(void *p) {
      delete [] ((::cluster::cluster_params*)p);
   }
   static void destruct_clustercLcLcluster_params(void *p) {
      typedef ::cluster::cluster_params current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::cluster_params

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLClusterParamsAlg(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::ClusterParamsAlg : new ::cluster::ClusterParamsAlg;
   }
   static void *newArray_clustercLcLClusterParamsAlg(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::ClusterParamsAlg[nElements] : new ::cluster::ClusterParamsAlg[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLClusterParamsAlg(void *p) {
      delete ((::cluster::ClusterParamsAlg*)p);
   }
   static void deleteArray_clustercLcLClusterParamsAlg(void *p) {
      delete [] ((::cluster::ClusterParamsAlg*)p);
   }
   static void destruct_clustercLcLClusterParamsAlg(void *p) {
      typedef ::cluster::ClusterParamsAlg current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::ClusterParamsAlg

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLCRUException(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::CRUException : new ::cluster::CRUException;
   }
   static void *newArray_clustercLcLCRUException(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::CRUException[nElements] : new ::cluster::CRUException[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLCRUException(void *p) {
      delete ((::cluster::CRUException*)p);
   }
   static void deleteArray_clustercLcLCRUException(void *p) {
      delete [] ((::cluster::CRUException*)p);
   }
   static void destruct_clustercLcLCRUException(void *p) {
      typedef ::cluster::CRUException current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::CRUException

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLCRUHelper(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::CRUHelper : new ::cluster::CRUHelper;
   }
   static void *newArray_clustercLcLCRUHelper(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::CRUHelper[nElements] : new ::cluster::CRUHelper[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLCRUHelper(void *p) {
      delete ((::cluster::CRUHelper*)p);
   }
   static void deleteArray_clustercLcLCRUHelper(void *p) {
      delete [] ((::cluster::CRUHelper*)p);
   }
   static void destruct_clustercLcLCRUHelper(void *p) {
      typedef ::cluster::CRUHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::CRUHelper

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 214,
                  typeid(vector<unsigned short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned short>*)0x0)->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete ((vector<unsigned short>*)p);
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] ((vector<unsigned short>*)p);
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace ROOT {
   static TClass *vectorlEpairlEfloatcOfloatgRsPgR_Dictionary();
   static void vectorlEpairlEfloatcOfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEfloatcOfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEfloatcOfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEfloatcOfloatgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEfloatcOfloatgRsPgR(void *p);
   static void destruct_vectorlEpairlEfloatcOfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<float,float> >*)
   {
      vector<pair<float,float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<float,float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<float,float> >", -2, "vector", 214,
                  typeid(vector<pair<float,float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEfloatcOfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<float,float> >) );
      instance.SetNew(&new_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEfloatcOfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<float,float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pair<float,float> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEfloatcOfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<float,float> >*)0x0)->GetClass();
      vectorlEpairlEfloatcOfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEfloatcOfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<float,float> > : new vector<pair<float,float> >;
   }
   static void *newArray_vectorlEpairlEfloatcOfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<float,float> >[nElements] : new vector<pair<float,float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      delete ((vector<pair<float,float> >*)p);
   }
   static void deleteArray_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      delete [] ((vector<pair<float,float> >*)p);
   }
   static void destruct_vectorlEpairlEfloatcOfloatgRsPgR(void *p) {
      typedef vector<pair<float,float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<float,float> >

namespace ROOT {
   static TClass *vectorlElarutilcLcLPxPointgR_Dictionary();
   static void vectorlElarutilcLcLPxPointgR_TClassManip(TClass*);
   static void *new_vectorlElarutilcLcLPxPointgR(void *p = 0);
   static void *newArray_vectorlElarutilcLcLPxPointgR(Long_t size, void *p);
   static void delete_vectorlElarutilcLcLPxPointgR(void *p);
   static void deleteArray_vectorlElarutilcLcLPxPointgR(void *p);
   static void destruct_vectorlElarutilcLcLPxPointgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larutil::PxPoint>*)
   {
      vector<larutil::PxPoint> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larutil::PxPoint>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larutil::PxPoint>", -2, "vector", 214,
                  typeid(vector<larutil::PxPoint>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElarutilcLcLPxPointgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<larutil::PxPoint>) );
      instance.SetNew(&new_vectorlElarutilcLcLPxPointgR);
      instance.SetNewArray(&newArray_vectorlElarutilcLcLPxPointgR);
      instance.SetDelete(&delete_vectorlElarutilcLcLPxPointgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarutilcLcLPxPointgR);
      instance.SetDestructor(&destruct_vectorlElarutilcLcLPxPointgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larutil::PxPoint> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larutil::PxPoint>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarutilcLcLPxPointgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larutil::PxPoint>*)0x0)->GetClass();
      vectorlElarutilcLcLPxPointgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarutilcLcLPxPointgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarutilcLcLPxPointgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<larutil::PxPoint> : new vector<larutil::PxPoint>;
   }
   static void *newArray_vectorlElarutilcLcLPxPointgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<larutil::PxPoint>[nElements] : new vector<larutil::PxPoint>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarutilcLcLPxPointgR(void *p) {
      delete ((vector<larutil::PxPoint>*)p);
   }
   static void deleteArray_vectorlElarutilcLcLPxPointgR(void *p) {
      delete [] ((vector<larutil::PxPoint>*)p);
   }
   static void destruct_vectorlElarutilcLcLPxPointgR(void *p) {
      typedef vector<larutil::PxPoint> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larutil::PxPoint>

namespace ROOT {
   static TClass *vectorlElarutilcLcLPxHitgR_Dictionary();
   static void vectorlElarutilcLcLPxHitgR_TClassManip(TClass*);
   static void *new_vectorlElarutilcLcLPxHitgR(void *p = 0);
   static void *newArray_vectorlElarutilcLcLPxHitgR(Long_t size, void *p);
   static void delete_vectorlElarutilcLcLPxHitgR(void *p);
   static void deleteArray_vectorlElarutilcLcLPxHitgR(void *p);
   static void destruct_vectorlElarutilcLcLPxHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larutil::PxHit>*)
   {
      vector<larutil::PxHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larutil::PxHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larutil::PxHit>", -2, "vector", 214,
                  typeid(vector<larutil::PxHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlElarutilcLcLPxHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larutil::PxHit>) );
      instance.SetNew(&new_vectorlElarutilcLcLPxHitgR);
      instance.SetNewArray(&newArray_vectorlElarutilcLcLPxHitgR);
      instance.SetDelete(&delete_vectorlElarutilcLcLPxHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarutilcLcLPxHitgR);
      instance.SetDestructor(&destruct_vectorlElarutilcLcLPxHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larutil::PxHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larutil::PxHit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarutilcLcLPxHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larutil::PxHit>*)0x0)->GetClass();
      vectorlElarutilcLcLPxHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarutilcLcLPxHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarutilcLcLPxHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<larutil::PxHit> : new vector<larutil::PxHit>;
   }
   static void *newArray_vectorlElarutilcLcLPxHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<larutil::PxHit>[nElements] : new vector<larutil::PxHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarutilcLcLPxHitgR(void *p) {
      delete ((vector<larutil::PxHit>*)p);
   }
   static void deleteArray_vectorlElarutilcLcLPxHitgR(void *p) {
      delete [] ((vector<larutil::PxHit>*)p);
   }
   static void destruct_vectorlElarutilcLcLPxHitgR(void *p) {
      typedef vector<larutil::PxHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larutil::PxHit>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 214,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 214,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlEconstsPlarutilcLcLPxHitmUgR_Dictionary();
   static void vectorlEconstsPlarutilcLcLPxHitmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPlarutilcLcLPxHitmUgR(void *p = 0);
   static void *newArray_vectorlEconstsPlarutilcLcLPxHitmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPlarutilcLcLPxHitmUgR(void *p);
   static void deleteArray_vectorlEconstsPlarutilcLcLPxHitmUgR(void *p);
   static void destruct_vectorlEconstsPlarutilcLcLPxHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const larutil::PxHit*>*)
   {
      vector<const larutil::PxHit*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const larutil::PxHit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const larutil::PxHit*>", -2, "vector", 214,
                  typeid(vector<const larutil::PxHit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPlarutilcLcLPxHitmUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<const larutil::PxHit*>) );
      instance.SetNew(&new_vectorlEconstsPlarutilcLcLPxHitmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPlarutilcLcLPxHitmUgR);
      instance.SetDelete(&delete_vectorlEconstsPlarutilcLcLPxHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPlarutilcLcLPxHitmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPlarutilcLcLPxHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const larutil::PxHit*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<const larutil::PxHit*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPlarutilcLcLPxHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<const larutil::PxHit*>*)0x0)->GetClass();
      vectorlEconstsPlarutilcLcLPxHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPlarutilcLcLPxHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPlarutilcLcLPxHitmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const larutil::PxHit*> : new vector<const larutil::PxHit*>;
   }
   static void *newArray_vectorlEconstsPlarutilcLcLPxHitmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<const larutil::PxHit*>[nElements] : new vector<const larutil::PxHit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPlarutilcLcLPxHitmUgR(void *p) {
      delete ((vector<const larutil::PxHit*>*)p);
   }
   static void deleteArray_vectorlEconstsPlarutilcLcLPxHitmUgR(void *p) {
      delete [] ((vector<const larutil::PxHit*>*)p);
   }
   static void destruct_vectorlEconstsPlarutilcLcLPxHitmUgR(void *p) {
      typedef vector<const larutil::PxHit*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<const larutil::PxHit*>

namespace ROOT {
   static TClass *vectorlEclustercLcLcluster_paramsgR_Dictionary();
   static void vectorlEclustercLcLcluster_paramsgR_TClassManip(TClass*);
   static void *new_vectorlEclustercLcLcluster_paramsgR(void *p = 0);
   static void *newArray_vectorlEclustercLcLcluster_paramsgR(Long_t size, void *p);
   static void delete_vectorlEclustercLcLcluster_paramsgR(void *p);
   static void deleteArray_vectorlEclustercLcLcluster_paramsgR(void *p);
   static void destruct_vectorlEclustercLcLcluster_paramsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<cluster::cluster_params>*)
   {
      vector<cluster::cluster_params> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<cluster::cluster_params>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<cluster::cluster_params>", -2, "vector", 214,
                  typeid(vector<cluster::cluster_params>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEclustercLcLcluster_paramsgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<cluster::cluster_params>) );
      instance.SetNew(&new_vectorlEclustercLcLcluster_paramsgR);
      instance.SetNewArray(&newArray_vectorlEclustercLcLcluster_paramsgR);
      instance.SetDelete(&delete_vectorlEclustercLcLcluster_paramsgR);
      instance.SetDeleteArray(&deleteArray_vectorlEclustercLcLcluster_paramsgR);
      instance.SetDestructor(&destruct_vectorlEclustercLcLcluster_paramsgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<cluster::cluster_params> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<cluster::cluster_params>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEclustercLcLcluster_paramsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<cluster::cluster_params>*)0x0)->GetClass();
      vectorlEclustercLcLcluster_paramsgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEclustercLcLcluster_paramsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEclustercLcLcluster_paramsgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<cluster::cluster_params> : new vector<cluster::cluster_params>;
   }
   static void *newArray_vectorlEclustercLcLcluster_paramsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<cluster::cluster_params>[nElements] : new vector<cluster::cluster_params>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEclustercLcLcluster_paramsgR(void *p) {
      delete ((vector<cluster::cluster_params>*)p);
   }
   static void deleteArray_vectorlEclustercLcLcluster_paramsgR(void *p) {
      delete [] ((vector<cluster::cluster_params>*)p);
   }
   static void destruct_vectorlEclustercLcLcluster_paramsgR(void *p) {
      typedef vector<cluster::cluster_params> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<cluster::cluster_params>

namespace ROOT {
   static TClass *vectorlEclustercLcLParamsAlgBasemUgR_Dictionary();
   static void vectorlEclustercLcLParamsAlgBasemUgR_TClassManip(TClass*);
   static void *new_vectorlEclustercLcLParamsAlgBasemUgR(void *p = 0);
   static void *newArray_vectorlEclustercLcLParamsAlgBasemUgR(Long_t size, void *p);
   static void delete_vectorlEclustercLcLParamsAlgBasemUgR(void *p);
   static void deleteArray_vectorlEclustercLcLParamsAlgBasemUgR(void *p);
   static void destruct_vectorlEclustercLcLParamsAlgBasemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<cluster::ParamsAlgBase*>*)
   {
      vector<cluster::ParamsAlgBase*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<cluster::ParamsAlgBase*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<cluster::ParamsAlgBase*>", -2, "vector", 214,
                  typeid(vector<cluster::ParamsAlgBase*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEclustercLcLParamsAlgBasemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<cluster::ParamsAlgBase*>) );
      instance.SetNew(&new_vectorlEclustercLcLParamsAlgBasemUgR);
      instance.SetNewArray(&newArray_vectorlEclustercLcLParamsAlgBasemUgR);
      instance.SetDelete(&delete_vectorlEclustercLcLParamsAlgBasemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEclustercLcLParamsAlgBasemUgR);
      instance.SetDestructor(&destruct_vectorlEclustercLcLParamsAlgBasemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<cluster::ParamsAlgBase*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<cluster::ParamsAlgBase*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEclustercLcLParamsAlgBasemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<cluster::ParamsAlgBase*>*)0x0)->GetClass();
      vectorlEclustercLcLParamsAlgBasemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEclustercLcLParamsAlgBasemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEclustercLcLParamsAlgBasemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<cluster::ParamsAlgBase*> : new vector<cluster::ParamsAlgBase*>;
   }
   static void *newArray_vectorlEclustercLcLParamsAlgBasemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<cluster::ParamsAlgBase*>[nElements] : new vector<cluster::ParamsAlgBase*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEclustercLcLParamsAlgBasemUgR(void *p) {
      delete ((vector<cluster::ParamsAlgBase*>*)p);
   }
   static void deleteArray_vectorlEclustercLcLParamsAlgBasemUgR(void *p) {
      delete [] ((vector<cluster::ParamsAlgBase*>*)p);
   }
   static void destruct_vectorlEclustercLcLParamsAlgBasemUgR(void *p) {
      typedef vector<cluster::ParamsAlgBase*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<cluster::ParamsAlgBase*>

namespace ROOT {
   static TClass *vectorlEclustercLcLClusterParamsAlggR_Dictionary();
   static void vectorlEclustercLcLClusterParamsAlggR_TClassManip(TClass*);
   static void *new_vectorlEclustercLcLClusterParamsAlggR(void *p = 0);
   static void *newArray_vectorlEclustercLcLClusterParamsAlggR(Long_t size, void *p);
   static void delete_vectorlEclustercLcLClusterParamsAlggR(void *p);
   static void deleteArray_vectorlEclustercLcLClusterParamsAlggR(void *p);
   static void destruct_vectorlEclustercLcLClusterParamsAlggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<cluster::ClusterParamsAlg>*)
   {
      vector<cluster::ClusterParamsAlg> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<cluster::ClusterParamsAlg>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<cluster::ClusterParamsAlg>", -2, "vector", 214,
                  typeid(vector<cluster::ClusterParamsAlg>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEclustercLcLClusterParamsAlggR_Dictionary, isa_proxy, 4,
                  sizeof(vector<cluster::ClusterParamsAlg>) );
      instance.SetNew(&new_vectorlEclustercLcLClusterParamsAlggR);
      instance.SetNewArray(&newArray_vectorlEclustercLcLClusterParamsAlggR);
      instance.SetDelete(&delete_vectorlEclustercLcLClusterParamsAlggR);
      instance.SetDeleteArray(&deleteArray_vectorlEclustercLcLClusterParamsAlggR);
      instance.SetDestructor(&destruct_vectorlEclustercLcLClusterParamsAlggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<cluster::ClusterParamsAlg> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<cluster::ClusterParamsAlg>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEclustercLcLClusterParamsAlggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<cluster::ClusterParamsAlg>*)0x0)->GetClass();
      vectorlEclustercLcLClusterParamsAlggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEclustercLcLClusterParamsAlggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEclustercLcLClusterParamsAlggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<cluster::ClusterParamsAlg> : new vector<cluster::ClusterParamsAlg>;
   }
   static void *newArray_vectorlEclustercLcLClusterParamsAlggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<cluster::ClusterParamsAlg>[nElements] : new vector<cluster::ClusterParamsAlg>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEclustercLcLClusterParamsAlggR(void *p) {
      delete ((vector<cluster::ClusterParamsAlg>*)p);
   }
   static void deleteArray_vectorlEclustercLcLClusterParamsAlggR(void *p) {
      delete [] ((vector<cluster::ClusterParamsAlg>*)p);
   }
   static void destruct_vectorlEclustercLcLClusterParamsAlggR(void *p) {
      typedef vector<cluster::ClusterParamsAlg> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<cluster::ClusterParamsAlg>

namespace {
  void TriggerDictionaryInitialization_libRecoTool_ClusterRecoUtil_Impl() {
    static const char* headers[] = {
"ClusterParamsAlg.h",
"ClusterParams.h",
"CRUException.h",
"CRUHelper.h",
"Polygon2D.h",
0
    };
    static const char* includePaths[] = {
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/core",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/RecoTool",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/RecoTool/FANN/include",
"/products/root/v6_06_04b/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/scratch/lsimons/LArLite_LArSoft_Int/larlite/UserDev/RecoTool/ClusterRecoUtil/Base/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libRecoTool_ClusterRecoUtil dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$ClusterParamsAlg.h")))  Polygon2D;
namespace larutil{class __attribute__((annotate("$clingAutoload$ClusterParamsAlg.h")))  PxHit;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterParamsAlg.h")))  cluster_params;}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterParamsAlg.h")))  ClusterParamsAlg;}
namespace cluster{class __attribute__((annotate("$clingAutoload$CRUException.h")))  CRUException;}
namespace cluster{class __attribute__((annotate("$clingAutoload$CRUHelper.h")))  CRUHelper;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRecoTool_ClusterRecoUtil dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "ClusterParamsAlg.h"
#include "ClusterParams.h"
#include "CRUException.h"
#include "CRUHelper.h"
#include "Polygon2D.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Polygon2D", payloadCode, "@",
"cluster::CRUException", payloadCode, "@",
"cluster::CRUHelper", payloadCode, "@",
"cluster::ClusterParamsAlg", payloadCode, "@",
"cluster::cluster_params", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRecoTool_ClusterRecoUtil",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRecoTool_ClusterRecoUtil_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRecoTool_ClusterRecoUtil_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRecoTool_ClusterRecoUtil() {
  TriggerDictionaryInitialization_libRecoTool_ClusterRecoUtil_Impl();
}
