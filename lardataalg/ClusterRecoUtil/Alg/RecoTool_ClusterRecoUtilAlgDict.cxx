// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RecoTool_ClusterRecoUtilAlgDict

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
#include "ClusterParamsAna.h"
#include "DefaultParamsAlg.h"
#include "FillGeomParams.h"
#include "FillPolygon.h"
#include "FindShoweringPoint.h"
#include "GetAverages.h"
#include "GetRoughStartPoint.h"
#include "InformedStartPoint.h"
#include "ParamsAlgBase.h"
#include "RefineStartPoints.h"
#include "SelectStartPoint.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *clustercLcLParamsAlgBase_Dictionary();
   static void clustercLcLParamsAlgBase_TClassManip(TClass*);
   static void delete_clustercLcLParamsAlgBase(void *p);
   static void deleteArray_clustercLcLParamsAlgBase(void *p);
   static void destruct_clustercLcLParamsAlgBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::ParamsAlgBase*)
   {
      ::cluster::ParamsAlgBase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::ParamsAlgBase));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::ParamsAlgBase", "ParamsAlgBase.h", 29,
                  typeid(::cluster::ParamsAlgBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLParamsAlgBase_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::ParamsAlgBase) );
      instance.SetDelete(&delete_clustercLcLParamsAlgBase);
      instance.SetDeleteArray(&deleteArray_clustercLcLParamsAlgBase);
      instance.SetDestructor(&destruct_clustercLcLParamsAlgBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::ParamsAlgBase*)
   {
      return GenerateInitInstanceLocal((::cluster::ParamsAlgBase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::ParamsAlgBase*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLParamsAlgBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::ParamsAlgBase*)0x0)->GetClass();
      clustercLcLParamsAlgBase_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLParamsAlgBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLGetAverages_Dictionary();
   static void clustercLcLGetAverages_TClassManip(TClass*);
   static void *new_clustercLcLGetAverages(void *p = 0);
   static void *newArray_clustercLcLGetAverages(Long_t size, void *p);
   static void delete_clustercLcLGetAverages(void *p);
   static void deleteArray_clustercLcLGetAverages(void *p);
   static void destruct_clustercLcLGetAverages(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::GetAverages*)
   {
      ::cluster::GetAverages *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::GetAverages));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::GetAverages", "GetAverages.h", 27,
                  typeid(::cluster::GetAverages), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLGetAverages_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::GetAverages) );
      instance.SetNew(&new_clustercLcLGetAverages);
      instance.SetNewArray(&newArray_clustercLcLGetAverages);
      instance.SetDelete(&delete_clustercLcLGetAverages);
      instance.SetDeleteArray(&deleteArray_clustercLcLGetAverages);
      instance.SetDestructor(&destruct_clustercLcLGetAverages);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::GetAverages*)
   {
      return GenerateInitInstanceLocal((::cluster::GetAverages*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::GetAverages*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLGetAverages_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::GetAverages*)0x0)->GetClass();
      clustercLcLGetAverages_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLGetAverages_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLFillPolygon_Dictionary();
   static void clustercLcLFillPolygon_TClassManip(TClass*);
   static void *new_clustercLcLFillPolygon(void *p = 0);
   static void *newArray_clustercLcLFillPolygon(Long_t size, void *p);
   static void delete_clustercLcLFillPolygon(void *p);
   static void deleteArray_clustercLcLFillPolygon(void *p);
   static void destruct_clustercLcLFillPolygon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::FillPolygon*)
   {
      ::cluster::FillPolygon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::FillPolygon));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::FillPolygon", "FillPolygon.h", 27,
                  typeid(::cluster::FillPolygon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLFillPolygon_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::FillPolygon) );
      instance.SetNew(&new_clustercLcLFillPolygon);
      instance.SetNewArray(&newArray_clustercLcLFillPolygon);
      instance.SetDelete(&delete_clustercLcLFillPolygon);
      instance.SetDeleteArray(&deleteArray_clustercLcLFillPolygon);
      instance.SetDestructor(&destruct_clustercLcLFillPolygon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::FillPolygon*)
   {
      return GenerateInitInstanceLocal((::cluster::FillPolygon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::FillPolygon*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLFillPolygon_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::FillPolygon*)0x0)->GetClass();
      clustercLcLFillPolygon_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLFillPolygon_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLRefineStartPoints_Dictionary();
   static void clustercLcLRefineStartPoints_TClassManip(TClass*);
   static void *new_clustercLcLRefineStartPoints(void *p = 0);
   static void *newArray_clustercLcLRefineStartPoints(Long_t size, void *p);
   static void delete_clustercLcLRefineStartPoints(void *p);
   static void deleteArray_clustercLcLRefineStartPoints(void *p);
   static void destruct_clustercLcLRefineStartPoints(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::RefineStartPoints*)
   {
      ::cluster::RefineStartPoints *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::RefineStartPoints));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::RefineStartPoints", "RefineStartPoints.h", 29,
                  typeid(::cluster::RefineStartPoints), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLRefineStartPoints_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::RefineStartPoints) );
      instance.SetNew(&new_clustercLcLRefineStartPoints);
      instance.SetNewArray(&newArray_clustercLcLRefineStartPoints);
      instance.SetDelete(&delete_clustercLcLRefineStartPoints);
      instance.SetDeleteArray(&deleteArray_clustercLcLRefineStartPoints);
      instance.SetDestructor(&destruct_clustercLcLRefineStartPoints);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::RefineStartPoints*)
   {
      return GenerateInitInstanceLocal((::cluster::RefineStartPoints*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::RefineStartPoints*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLRefineStartPoints_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::RefineStartPoints*)0x0)->GetClass();
      clustercLcLRefineStartPoints_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLRefineStartPoints_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLGetRoughStartPoint_Dictionary();
   static void clustercLcLGetRoughStartPoint_TClassManip(TClass*);
   static void *new_clustercLcLGetRoughStartPoint(void *p = 0);
   static void *newArray_clustercLcLGetRoughStartPoint(Long_t size, void *p);
   static void delete_clustercLcLGetRoughStartPoint(void *p);
   static void deleteArray_clustercLcLGetRoughStartPoint(void *p);
   static void destruct_clustercLcLGetRoughStartPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::GetRoughStartPoint*)
   {
      ::cluster::GetRoughStartPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::GetRoughStartPoint));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::GetRoughStartPoint", "GetRoughStartPoint.h", 27,
                  typeid(::cluster::GetRoughStartPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLGetRoughStartPoint_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::GetRoughStartPoint) );
      instance.SetNew(&new_clustercLcLGetRoughStartPoint);
      instance.SetNewArray(&newArray_clustercLcLGetRoughStartPoint);
      instance.SetDelete(&delete_clustercLcLGetRoughStartPoint);
      instance.SetDeleteArray(&deleteArray_clustercLcLGetRoughStartPoint);
      instance.SetDestructor(&destruct_clustercLcLGetRoughStartPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::GetRoughStartPoint*)
   {
      return GenerateInitInstanceLocal((::cluster::GetRoughStartPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::GetRoughStartPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLGetRoughStartPoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::GetRoughStartPoint*)0x0)->GetClass();
      clustercLcLGetRoughStartPoint_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLGetRoughStartPoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLInformedStartPoint_Dictionary();
   static void clustercLcLInformedStartPoint_TClassManip(TClass*);
   static void *new_clustercLcLInformedStartPoint(void *p = 0);
   static void *newArray_clustercLcLInformedStartPoint(Long_t size, void *p);
   static void delete_clustercLcLInformedStartPoint(void *p);
   static void deleteArray_clustercLcLInformedStartPoint(void *p);
   static void destruct_clustercLcLInformedStartPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::InformedStartPoint*)
   {
      ::cluster::InformedStartPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::InformedStartPoint));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::InformedStartPoint", "InformedStartPoint.h", 37,
                  typeid(::cluster::InformedStartPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLInformedStartPoint_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::InformedStartPoint) );
      instance.SetNew(&new_clustercLcLInformedStartPoint);
      instance.SetNewArray(&newArray_clustercLcLInformedStartPoint);
      instance.SetDelete(&delete_clustercLcLInformedStartPoint);
      instance.SetDeleteArray(&deleteArray_clustercLcLInformedStartPoint);
      instance.SetDestructor(&destruct_clustercLcLInformedStartPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::InformedStartPoint*)
   {
      return GenerateInitInstanceLocal((::cluster::InformedStartPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::InformedStartPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLInformedStartPoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::InformedStartPoint*)0x0)->GetClass();
      clustercLcLInformedStartPoint_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLInformedStartPoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLSelectStartPoint_Dictionary();
   static void clustercLcLSelectStartPoint_TClassManip(TClass*);
   static void *new_clustercLcLSelectStartPoint(void *p = 0);
   static void *newArray_clustercLcLSelectStartPoint(Long_t size, void *p);
   static void delete_clustercLcLSelectStartPoint(void *p);
   static void deleteArray_clustercLcLSelectStartPoint(void *p);
   static void destruct_clustercLcLSelectStartPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::SelectStartPoint*)
   {
      ::cluster::SelectStartPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::SelectStartPoint));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::SelectStartPoint", "SelectStartPoint.h", 27,
                  typeid(::cluster::SelectStartPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLSelectStartPoint_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::SelectStartPoint) );
      instance.SetNew(&new_clustercLcLSelectStartPoint);
      instance.SetNewArray(&newArray_clustercLcLSelectStartPoint);
      instance.SetDelete(&delete_clustercLcLSelectStartPoint);
      instance.SetDeleteArray(&deleteArray_clustercLcLSelectStartPoint);
      instance.SetDestructor(&destruct_clustercLcLSelectStartPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::SelectStartPoint*)
   {
      return GenerateInitInstanceLocal((::cluster::SelectStartPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::SelectStartPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLSelectStartPoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::SelectStartPoint*)0x0)->GetClass();
      clustercLcLSelectStartPoint_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLSelectStartPoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLFindShoweringPoint_Dictionary();
   static void clustercLcLFindShoweringPoint_TClassManip(TClass*);
   static void *new_clustercLcLFindShoweringPoint(void *p = 0);
   static void *newArray_clustercLcLFindShoweringPoint(Long_t size, void *p);
   static void delete_clustercLcLFindShoweringPoint(void *p);
   static void deleteArray_clustercLcLFindShoweringPoint(void *p);
   static void destruct_clustercLcLFindShoweringPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::FindShoweringPoint*)
   {
      ::cluster::FindShoweringPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::FindShoweringPoint));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::FindShoweringPoint", "FindShoweringPoint.h", 27,
                  typeid(::cluster::FindShoweringPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLFindShoweringPoint_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::FindShoweringPoint) );
      instance.SetNew(&new_clustercLcLFindShoweringPoint);
      instance.SetNewArray(&newArray_clustercLcLFindShoweringPoint);
      instance.SetDelete(&delete_clustercLcLFindShoweringPoint);
      instance.SetDeleteArray(&deleteArray_clustercLcLFindShoweringPoint);
      instance.SetDestructor(&destruct_clustercLcLFindShoweringPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::FindShoweringPoint*)
   {
      return GenerateInitInstanceLocal((::cluster::FindShoweringPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::FindShoweringPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLFindShoweringPoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::FindShoweringPoint*)0x0)->GetClass();
      clustercLcLFindShoweringPoint_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLFindShoweringPoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLDefaultParamsAlg_Dictionary();
   static void clustercLcLDefaultParamsAlg_TClassManip(TClass*);
   static void *new_clustercLcLDefaultParamsAlg(void *p = 0);
   static void *newArray_clustercLcLDefaultParamsAlg(Long_t size, void *p);
   static void delete_clustercLcLDefaultParamsAlg(void *p);
   static void deleteArray_clustercLcLDefaultParamsAlg(void *p);
   static void destruct_clustercLcLDefaultParamsAlg(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::DefaultParamsAlg*)
   {
      ::cluster::DefaultParamsAlg *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::DefaultParamsAlg));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::DefaultParamsAlg", "DefaultParamsAlg.h", 35,
                  typeid(::cluster::DefaultParamsAlg), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLDefaultParamsAlg_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::DefaultParamsAlg) );
      instance.SetNew(&new_clustercLcLDefaultParamsAlg);
      instance.SetNewArray(&newArray_clustercLcLDefaultParamsAlg);
      instance.SetDelete(&delete_clustercLcLDefaultParamsAlg);
      instance.SetDeleteArray(&deleteArray_clustercLcLDefaultParamsAlg);
      instance.SetDestructor(&destruct_clustercLcLDefaultParamsAlg);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::DefaultParamsAlg*)
   {
      return GenerateInitInstanceLocal((::cluster::DefaultParamsAlg*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::DefaultParamsAlg*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLDefaultParamsAlg_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::DefaultParamsAlg*)0x0)->GetClass();
      clustercLcLDefaultParamsAlg_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLDefaultParamsAlg_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLClusterParamsAna_Dictionary();
   static void clustercLcLClusterParamsAna_TClassManip(TClass*);
   static void *new_clustercLcLClusterParamsAna(void *p = 0);
   static void *newArray_clustercLcLClusterParamsAna(Long_t size, void *p);
   static void delete_clustercLcLClusterParamsAna(void *p);
   static void deleteArray_clustercLcLClusterParamsAna(void *p);
   static void destruct_clustercLcLClusterParamsAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::ClusterParamsAna*)
   {
      ::cluster::ClusterParamsAna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::ClusterParamsAna));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::ClusterParamsAna", "ClusterParamsAna.h", 28,
                  typeid(::cluster::ClusterParamsAna), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLClusterParamsAna_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::ClusterParamsAna) );
      instance.SetNew(&new_clustercLcLClusterParamsAna);
      instance.SetNewArray(&newArray_clustercLcLClusterParamsAna);
      instance.SetDelete(&delete_clustercLcLClusterParamsAna);
      instance.SetDeleteArray(&deleteArray_clustercLcLClusterParamsAna);
      instance.SetDestructor(&destruct_clustercLcLClusterParamsAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::ClusterParamsAna*)
   {
      return GenerateInitInstanceLocal((::cluster::ClusterParamsAna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::ClusterParamsAna*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLClusterParamsAna_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::ClusterParamsAna*)0x0)->GetClass();
      clustercLcLClusterParamsAna_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLClusterParamsAna_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_clustercLcLParamsAlgBase(void *p) {
      delete ((::cluster::ParamsAlgBase*)p);
   }
   static void deleteArray_clustercLcLParamsAlgBase(void *p) {
      delete [] ((::cluster::ParamsAlgBase*)p);
   }
   static void destruct_clustercLcLParamsAlgBase(void *p) {
      typedef ::cluster::ParamsAlgBase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::ParamsAlgBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLGetAverages(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::GetAverages : new ::cluster::GetAverages;
   }
   static void *newArray_clustercLcLGetAverages(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::GetAverages[nElements] : new ::cluster::GetAverages[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLGetAverages(void *p) {
      delete ((::cluster::GetAverages*)p);
   }
   static void deleteArray_clustercLcLGetAverages(void *p) {
      delete [] ((::cluster::GetAverages*)p);
   }
   static void destruct_clustercLcLGetAverages(void *p) {
      typedef ::cluster::GetAverages current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::GetAverages

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLFillPolygon(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::FillPolygon : new ::cluster::FillPolygon;
   }
   static void *newArray_clustercLcLFillPolygon(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::FillPolygon[nElements] : new ::cluster::FillPolygon[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLFillPolygon(void *p) {
      delete ((::cluster::FillPolygon*)p);
   }
   static void deleteArray_clustercLcLFillPolygon(void *p) {
      delete [] ((::cluster::FillPolygon*)p);
   }
   static void destruct_clustercLcLFillPolygon(void *p) {
      typedef ::cluster::FillPolygon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::FillPolygon

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLRefineStartPoints(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::RefineStartPoints : new ::cluster::RefineStartPoints;
   }
   static void *newArray_clustercLcLRefineStartPoints(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::RefineStartPoints[nElements] : new ::cluster::RefineStartPoints[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLRefineStartPoints(void *p) {
      delete ((::cluster::RefineStartPoints*)p);
   }
   static void deleteArray_clustercLcLRefineStartPoints(void *p) {
      delete [] ((::cluster::RefineStartPoints*)p);
   }
   static void destruct_clustercLcLRefineStartPoints(void *p) {
      typedef ::cluster::RefineStartPoints current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::RefineStartPoints

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLGetRoughStartPoint(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::GetRoughStartPoint : new ::cluster::GetRoughStartPoint;
   }
   static void *newArray_clustercLcLGetRoughStartPoint(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::GetRoughStartPoint[nElements] : new ::cluster::GetRoughStartPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLGetRoughStartPoint(void *p) {
      delete ((::cluster::GetRoughStartPoint*)p);
   }
   static void deleteArray_clustercLcLGetRoughStartPoint(void *p) {
      delete [] ((::cluster::GetRoughStartPoint*)p);
   }
   static void destruct_clustercLcLGetRoughStartPoint(void *p) {
      typedef ::cluster::GetRoughStartPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::GetRoughStartPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLInformedStartPoint(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::InformedStartPoint : new ::cluster::InformedStartPoint;
   }
   static void *newArray_clustercLcLInformedStartPoint(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::InformedStartPoint[nElements] : new ::cluster::InformedStartPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLInformedStartPoint(void *p) {
      delete ((::cluster::InformedStartPoint*)p);
   }
   static void deleteArray_clustercLcLInformedStartPoint(void *p) {
      delete [] ((::cluster::InformedStartPoint*)p);
   }
   static void destruct_clustercLcLInformedStartPoint(void *p) {
      typedef ::cluster::InformedStartPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::InformedStartPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLSelectStartPoint(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::SelectStartPoint : new ::cluster::SelectStartPoint;
   }
   static void *newArray_clustercLcLSelectStartPoint(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::SelectStartPoint[nElements] : new ::cluster::SelectStartPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLSelectStartPoint(void *p) {
      delete ((::cluster::SelectStartPoint*)p);
   }
   static void deleteArray_clustercLcLSelectStartPoint(void *p) {
      delete [] ((::cluster::SelectStartPoint*)p);
   }
   static void destruct_clustercLcLSelectStartPoint(void *p) {
      typedef ::cluster::SelectStartPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::SelectStartPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLFindShoweringPoint(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::FindShoweringPoint : new ::cluster::FindShoweringPoint;
   }
   static void *newArray_clustercLcLFindShoweringPoint(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::FindShoweringPoint[nElements] : new ::cluster::FindShoweringPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLFindShoweringPoint(void *p) {
      delete ((::cluster::FindShoweringPoint*)p);
   }
   static void deleteArray_clustercLcLFindShoweringPoint(void *p) {
      delete [] ((::cluster::FindShoweringPoint*)p);
   }
   static void destruct_clustercLcLFindShoweringPoint(void *p) {
      typedef ::cluster::FindShoweringPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::FindShoweringPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLDefaultParamsAlg(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::DefaultParamsAlg : new ::cluster::DefaultParamsAlg;
   }
   static void *newArray_clustercLcLDefaultParamsAlg(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::DefaultParamsAlg[nElements] : new ::cluster::DefaultParamsAlg[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLDefaultParamsAlg(void *p) {
      delete ((::cluster::DefaultParamsAlg*)p);
   }
   static void deleteArray_clustercLcLDefaultParamsAlg(void *p) {
      delete [] ((::cluster::DefaultParamsAlg*)p);
   }
   static void destruct_clustercLcLDefaultParamsAlg(void *p) {
      typedef ::cluster::DefaultParamsAlg current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::DefaultParamsAlg

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLClusterParamsAna(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::ClusterParamsAna : new ::cluster::ClusterParamsAna;
   }
   static void *newArray_clustercLcLClusterParamsAna(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::ClusterParamsAna[nElements] : new ::cluster::ClusterParamsAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLClusterParamsAna(void *p) {
      delete ((::cluster::ClusterParamsAna*)p);
   }
   static void deleteArray_clustercLcLClusterParamsAna(void *p) {
      delete [] ((::cluster::ClusterParamsAna*)p);
   }
   static void destruct_clustercLcLClusterParamsAna(void *p) {
      typedef ::cluster::ClusterParamsAna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::ClusterParamsAna

namespace ROOT {
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary();
   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p);
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<float> >*)
   {
      vector<vector<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<float> >", -2, "vector", 214,
                  typeid(vector<vector<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<float> >) );
      instance.SetNew(&new_vectorlEvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<float> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<float> >*)0x0)->GetClass();
      vectorlEvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> > : new vector<vector<float> >;
   }
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> >[nElements] : new vector<vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete ((vector<vector<float> >*)p);
   }
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete [] ((vector<vector<float> >*)p);
   }
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p) {
      typedef vector<vector<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<float> >

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
   static TClass *vectorlETH1FmUgR_Dictionary();
   static void vectorlETH1FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH1FmUgR(void *p = 0);
   static void *newArray_vectorlETH1FmUgR(Long_t size, void *p);
   static void delete_vectorlETH1FmUgR(void *p);
   static void deleteArray_vectorlETH1FmUgR(void *p);
   static void destruct_vectorlETH1FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1F*>*)
   {
      vector<TH1F*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1F*>", -2, "vector", 214,
                  typeid(vector<TH1F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1F*>) );
      instance.SetNew(&new_vectorlETH1FmUgR);
      instance.SetNewArray(&newArray_vectorlETH1FmUgR);
      instance.SetDelete(&delete_vectorlETH1FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1FmUgR);
      instance.SetDestructor(&destruct_vectorlETH1FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1F*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TH1F*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1F*>*)0x0)->GetClass();
      vectorlETH1FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*> : new vector<TH1F*>;
   }
   static void *newArray_vectorlETH1FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*>[nElements] : new vector<TH1F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1FmUgR(void *p) {
      delete ((vector<TH1F*>*)p);
   }
   static void deleteArray_vectorlETH1FmUgR(void *p) {
      delete [] ((vector<TH1F*>*)p);
   }
   static void destruct_vectorlETH1FmUgR(void *p) {
      typedef vector<TH1F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1F*>

namespace {
  void TriggerDictionaryInitialization_libRecoTool_ClusterRecoUtilAlg_Impl() {
    static const char* headers[] = {
"ClusterParamsAna.h",
"DefaultParamsAlg.h",
"FillGeomParams.h",
"FillPolygon.h",
"FindShoweringPoint.h",
"GetAverages.h",
"GetRoughStartPoint.h",
"InformedStartPoint.h",
"ParamsAlgBase.h",
"RefineStartPoints.h",
"SelectStartPoint.h",
0
    };
    static const char* includePaths[] = {
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/core",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/RecoTool",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/RecoTool/FANN/include",
"../Base",
"/products/root/v6_06_04b/Linux64bit+2.6-2.12-e10-nu-prof/include",
"/scratch/lsimons/LArLite_LArSoft_Int/larlite/UserDev/RecoTool/lardataalg/ClusterRecoUtil/Alg/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libRecoTool_ClusterRecoUtilAlg dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterParamsAna.h")))  ParamsAlgBase;}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterParamsAna.h")))  GetAverages;}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterParamsAna.h")))  FillPolygon;}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterParamsAna.h")))  RefineStartPoints;}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterParamsAna.h")))  GetRoughStartPoint;}
namespace cluster{class __attribute__((annotate("$clingAutoload$InformedStartPoint.h")))  InformedStartPoint;}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterParamsAna.h")))  SelectStartPoint;}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterParamsAna.h")))  FindShoweringPoint;}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterParamsAna.h")))  DefaultParamsAlg;}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterParamsAna.h")))  ClusterParamsAna;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRecoTool_ClusterRecoUtilAlg dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "ClusterParamsAna.h"
#include "DefaultParamsAlg.h"
#include "FillGeomParams.h"
#include "FillPolygon.h"
#include "FindShoweringPoint.h"
#include "GetAverages.h"
#include "GetRoughStartPoint.h"
#include "InformedStartPoint.h"
#include "ParamsAlgBase.h"
#include "RefineStartPoints.h"
#include "SelectStartPoint.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"cluster::ClusterParamsAna", payloadCode, "@",
"cluster::DefaultParamsAlg", payloadCode, "@",
"cluster::FillPolygon", payloadCode, "@",
"cluster::FindShoweringPoint", payloadCode, "@",
"cluster::GetAverages", payloadCode, "@",
"cluster::GetRoughStartPoint", payloadCode, "@",
"cluster::InformedStartPoint", payloadCode, "@",
"cluster::ParamsAlgBase", payloadCode, "@",
"cluster::RefineStartPoints", payloadCode, "@",
"cluster::SelectStartPoint", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRecoTool_ClusterRecoUtilAlg",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRecoTool_ClusterRecoUtilAlg_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRecoTool_ClusterRecoUtilAlg_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRecoTool_ClusterRecoUtilAlg() {
  TriggerDictionaryInitialization_libRecoTool_ClusterRecoUtilAlg_Impl();
}
