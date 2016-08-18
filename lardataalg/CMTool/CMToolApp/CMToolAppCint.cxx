// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CMToolAppCint

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
#include "ClusterMatcher.h"
#include "ClusterMerger.h"
#include "ClusterViewerAlgo.h"
#include "ClusterViewer.h"
#include "CMergeHelper.h"
#include "CMToolApp-TypeDef.h"
#include "FuzzyClusterShower.h"
#include "HitCluster.h"
#include "MatchViewer.h"
#include "MergeViewer.h"
#include "PFPartMerger.h"
#include "ViewerException.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *cmtoolcLcLCMergeHelper_Dictionary();
   static void cmtoolcLcLCMergeHelper_TClassManip(TClass*);
   static void *new_cmtoolcLcLCMergeHelper(void *p = 0);
   static void *newArray_cmtoolcLcLCMergeHelper(Long_t size, void *p);
   static void delete_cmtoolcLcLCMergeHelper(void *p);
   static void deleteArray_cmtoolcLcLCMergeHelper(void *p);
   static void destruct_cmtoolcLcLCMergeHelper(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cmtool::CMergeHelper*)
   {
      ::cmtool::CMergeHelper *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cmtool::CMergeHelper));
      static ::ROOT::TGenericClassInfo 
         instance("cmtool::CMergeHelper", "CMTool/CMToolApp/CMergeHelper.h", 26,
                  typeid(::cmtool::CMergeHelper), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &cmtoolcLcLCMergeHelper_Dictionary, isa_proxy, 4,
                  sizeof(::cmtool::CMergeHelper) );
      instance.SetNew(&new_cmtoolcLcLCMergeHelper);
      instance.SetNewArray(&newArray_cmtoolcLcLCMergeHelper);
      instance.SetDelete(&delete_cmtoolcLcLCMergeHelper);
      instance.SetDeleteArray(&deleteArray_cmtoolcLcLCMergeHelper);
      instance.SetDestructor(&destruct_cmtoolcLcLCMergeHelper);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cmtool::CMergeHelper*)
   {
      return GenerateInitInstanceLocal((::cmtool::CMergeHelper*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cmtool::CMergeHelper*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *cmtoolcLcLCMergeHelper_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cmtool::CMergeHelper*)0x0)->GetClass();
      cmtoolcLcLCMergeHelper_TClassManip(theClass);
   return theClass;
   }

   static void cmtoolcLcLCMergeHelper_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLClusterViewerAlgo_Dictionary();
   static void clustercLcLClusterViewerAlgo_TClassManip(TClass*);
   static void *new_clustercLcLClusterViewerAlgo(void *p = 0);
   static void *newArray_clustercLcLClusterViewerAlgo(Long_t size, void *p);
   static void delete_clustercLcLClusterViewerAlgo(void *p);
   static void deleteArray_clustercLcLClusterViewerAlgo(void *p);
   static void destruct_clustercLcLClusterViewerAlgo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::ClusterViewerAlgo*)
   {
      ::cluster::ClusterViewerAlgo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::ClusterViewerAlgo));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::ClusterViewerAlgo", "CMTool/CMToolApp/ClusterViewerAlgo.h", 33,
                  typeid(::cluster::ClusterViewerAlgo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLClusterViewerAlgo_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::ClusterViewerAlgo) );
      instance.SetNew(&new_clustercLcLClusterViewerAlgo);
      instance.SetNewArray(&newArray_clustercLcLClusterViewerAlgo);
      instance.SetDelete(&delete_clustercLcLClusterViewerAlgo);
      instance.SetDeleteArray(&deleteArray_clustercLcLClusterViewerAlgo);
      instance.SetDestructor(&destruct_clustercLcLClusterViewerAlgo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::ClusterViewerAlgo*)
   {
      return GenerateInitInstanceLocal((::cluster::ClusterViewerAlgo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::ClusterViewerAlgo*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLClusterViewerAlgo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::ClusterViewerAlgo*)0x0)->GetClass();
      clustercLcLClusterViewerAlgo_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLClusterViewerAlgo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *clustercLcLViewerException_Dictionary();
   static void clustercLcLViewerException_TClassManip(TClass*);
   static void *new_clustercLcLViewerException(void *p = 0);
   static void *newArray_clustercLcLViewerException(Long_t size, void *p);
   static void delete_clustercLcLViewerException(void *p);
   static void deleteArray_clustercLcLViewerException(void *p);
   static void destruct_clustercLcLViewerException(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::cluster::ViewerException*)
   {
      ::cluster::ViewerException *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::cluster::ViewerException));
      static ::ROOT::TGenericClassInfo 
         instance("cluster::ViewerException", "CMTool/CMToolApp/ViewerException.h", 25,
                  typeid(::cluster::ViewerException), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &clustercLcLViewerException_Dictionary, isa_proxy, 4,
                  sizeof(::cluster::ViewerException) );
      instance.SetNew(&new_clustercLcLViewerException);
      instance.SetNewArray(&newArray_clustercLcLViewerException);
      instance.SetDelete(&delete_clustercLcLViewerException);
      instance.SetDeleteArray(&deleteArray_clustercLcLViewerException);
      instance.SetDestructor(&destruct_clustercLcLViewerException);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::cluster::ViewerException*)
   {
      return GenerateInitInstanceLocal((::cluster::ViewerException*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::cluster::ViewerException*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *clustercLcLViewerException_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::cluster::ViewerException*)0x0)->GetClass();
      clustercLcLViewerException_TClassManip(theClass);
   return theClass;
   }

   static void clustercLcLViewerException_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLClusterViewer_Dictionary();
   static void larlitecLcLClusterViewer_TClassManip(TClass*);
   static void *new_larlitecLcLClusterViewer(void *p = 0);
   static void *newArray_larlitecLcLClusterViewer(Long_t size, void *p);
   static void delete_larlitecLcLClusterViewer(void *p);
   static void deleteArray_larlitecLcLClusterViewer(void *p);
   static void destruct_larlitecLcLClusterViewer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::ClusterViewer*)
   {
      ::larlite::ClusterViewer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::ClusterViewer));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::ClusterViewer", "CMTool/CMToolApp/ClusterViewer.h", 34,
                  typeid(::larlite::ClusterViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLClusterViewer_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::ClusterViewer) );
      instance.SetNew(&new_larlitecLcLClusterViewer);
      instance.SetNewArray(&newArray_larlitecLcLClusterViewer);
      instance.SetDelete(&delete_larlitecLcLClusterViewer);
      instance.SetDeleteArray(&deleteArray_larlitecLcLClusterViewer);
      instance.SetDestructor(&destruct_larlitecLcLClusterViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::ClusterViewer*)
   {
      return GenerateInitInstanceLocal((::larlite::ClusterViewer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::ClusterViewer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLClusterViewer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::ClusterViewer*)0x0)->GetClass();
      larlitecLcLClusterViewer_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLClusterViewer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLClusterViewercLcLcluster_unique_id_Dictionary();
   static void larlitecLcLClusterViewercLcLcluster_unique_id_TClassManip(TClass*);
   static void *new_larlitecLcLClusterViewercLcLcluster_unique_id(void *p = 0);
   static void *newArray_larlitecLcLClusterViewercLcLcluster_unique_id(Long_t size, void *p);
   static void delete_larlitecLcLClusterViewercLcLcluster_unique_id(void *p);
   static void deleteArray_larlitecLcLClusterViewercLcLcluster_unique_id(void *p);
   static void destruct_larlitecLcLClusterViewercLcLcluster_unique_id(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::ClusterViewer::cluster_unique_id*)
   {
      ::larlite::ClusterViewer::cluster_unique_id *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::ClusterViewer::cluster_unique_id));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::ClusterViewer::cluster_unique_id", "CMTool/CMToolApp/ClusterViewer.h", 59,
                  typeid(::larlite::ClusterViewer::cluster_unique_id), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLClusterViewercLcLcluster_unique_id_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::ClusterViewer::cluster_unique_id) );
      instance.SetNew(&new_larlitecLcLClusterViewercLcLcluster_unique_id);
      instance.SetNewArray(&newArray_larlitecLcLClusterViewercLcLcluster_unique_id);
      instance.SetDelete(&delete_larlitecLcLClusterViewercLcLcluster_unique_id);
      instance.SetDeleteArray(&deleteArray_larlitecLcLClusterViewercLcLcluster_unique_id);
      instance.SetDestructor(&destruct_larlitecLcLClusterViewercLcLcluster_unique_id);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::ClusterViewer::cluster_unique_id*)
   {
      return GenerateInitInstanceLocal((::larlite::ClusterViewer::cluster_unique_id*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::ClusterViewer::cluster_unique_id*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLClusterViewercLcLcluster_unique_id_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::ClusterViewer::cluster_unique_id*)0x0)->GetClass();
      larlitecLcLClusterViewercLcLcluster_unique_id_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLClusterViewercLcLcluster_unique_id_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLMergeViewer_Dictionary();
   static void larlitecLcLMergeViewer_TClassManip(TClass*);
   static void *new_larlitecLcLMergeViewer(void *p = 0);
   static void *newArray_larlitecLcLMergeViewer(Long_t size, void *p);
   static void delete_larlitecLcLMergeViewer(void *p);
   static void deleteArray_larlitecLcLMergeViewer(void *p);
   static void destruct_larlitecLcLMergeViewer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::MergeViewer*)
   {
      ::larlite::MergeViewer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::MergeViewer));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::MergeViewer", "CMTool/CMToolApp/MergeViewer.h", 27,
                  typeid(::larlite::MergeViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLMergeViewer_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::MergeViewer) );
      instance.SetNew(&new_larlitecLcLMergeViewer);
      instance.SetNewArray(&newArray_larlitecLcLMergeViewer);
      instance.SetDelete(&delete_larlitecLcLMergeViewer);
      instance.SetDeleteArray(&deleteArray_larlitecLcLMergeViewer);
      instance.SetDestructor(&destruct_larlitecLcLMergeViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::MergeViewer*)
   {
      return GenerateInitInstanceLocal((::larlite::MergeViewer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::MergeViewer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLMergeViewer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::MergeViewer*)0x0)->GetClass();
      larlitecLcLMergeViewer_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLMergeViewer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLClusterMerger_Dictionary();
   static void larlitecLcLClusterMerger_TClassManip(TClass*);
   static void *new_larlitecLcLClusterMerger(void *p = 0);
   static void *newArray_larlitecLcLClusterMerger(Long_t size, void *p);
   static void delete_larlitecLcLClusterMerger(void *p);
   static void deleteArray_larlitecLcLClusterMerger(void *p);
   static void destruct_larlitecLcLClusterMerger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::ClusterMerger*)
   {
      ::larlite::ClusterMerger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::ClusterMerger));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::ClusterMerger", "CMTool/CMToolApp/ClusterMerger.h", 27,
                  typeid(::larlite::ClusterMerger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLClusterMerger_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::ClusterMerger) );
      instance.SetNew(&new_larlitecLcLClusterMerger);
      instance.SetNewArray(&newArray_larlitecLcLClusterMerger);
      instance.SetDelete(&delete_larlitecLcLClusterMerger);
      instance.SetDeleteArray(&deleteArray_larlitecLcLClusterMerger);
      instance.SetDestructor(&destruct_larlitecLcLClusterMerger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::ClusterMerger*)
   {
      return GenerateInitInstanceLocal((::larlite::ClusterMerger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::ClusterMerger*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLClusterMerger_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::ClusterMerger*)0x0)->GetClass();
      larlitecLcLClusterMerger_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLClusterMerger_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLPFPartMerger_Dictionary();
   static void larlitecLcLPFPartMerger_TClassManip(TClass*);
   static void *new_larlitecLcLPFPartMerger(void *p = 0);
   static void *newArray_larlitecLcLPFPartMerger(Long_t size, void *p);
   static void delete_larlitecLcLPFPartMerger(void *p);
   static void deleteArray_larlitecLcLPFPartMerger(void *p);
   static void destruct_larlitecLcLPFPartMerger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::PFPartMerger*)
   {
      ::larlite::PFPartMerger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::PFPartMerger));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::PFPartMerger", "CMTool/CMToolApp/PFPartMerger.h", 36,
                  typeid(::larlite::PFPartMerger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLPFPartMerger_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::PFPartMerger) );
      instance.SetNew(&new_larlitecLcLPFPartMerger);
      instance.SetNewArray(&newArray_larlitecLcLPFPartMerger);
      instance.SetDelete(&delete_larlitecLcLPFPartMerger);
      instance.SetDeleteArray(&deleteArray_larlitecLcLPFPartMerger);
      instance.SetDestructor(&destruct_larlitecLcLPFPartMerger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::PFPartMerger*)
   {
      return GenerateInitInstanceLocal((::larlite::PFPartMerger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::PFPartMerger*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLPFPartMerger_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::PFPartMerger*)0x0)->GetClass();
      larlitecLcLPFPartMerger_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLPFPartMerger_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLClusterMatcher_Dictionary();
   static void larlitecLcLClusterMatcher_TClassManip(TClass*);
   static void *new_larlitecLcLClusterMatcher(void *p = 0);
   static void *newArray_larlitecLcLClusterMatcher(Long_t size, void *p);
   static void delete_larlitecLcLClusterMatcher(void *p);
   static void deleteArray_larlitecLcLClusterMatcher(void *p);
   static void destruct_larlitecLcLClusterMatcher(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::ClusterMatcher*)
   {
      ::larlite::ClusterMatcher *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::ClusterMatcher));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::ClusterMatcher", "CMTool/CMToolApp/ClusterMatcher.h", 28,
                  typeid(::larlite::ClusterMatcher), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLClusterMatcher_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::ClusterMatcher) );
      instance.SetNew(&new_larlitecLcLClusterMatcher);
      instance.SetNewArray(&newArray_larlitecLcLClusterMatcher);
      instance.SetDelete(&delete_larlitecLcLClusterMatcher);
      instance.SetDeleteArray(&deleteArray_larlitecLcLClusterMatcher);
      instance.SetDestructor(&destruct_larlitecLcLClusterMatcher);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::ClusterMatcher*)
   {
      return GenerateInitInstanceLocal((::larlite::ClusterMatcher*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::ClusterMatcher*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLClusterMatcher_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::ClusterMatcher*)0x0)->GetClass();
      larlitecLcLClusterMatcher_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLClusterMatcher_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLMatchViewer_Dictionary();
   static void larlitecLcLMatchViewer_TClassManip(TClass*);
   static void *new_larlitecLcLMatchViewer(void *p = 0);
   static void *newArray_larlitecLcLMatchViewer(Long_t size, void *p);
   static void delete_larlitecLcLMatchViewer(void *p);
   static void deleteArray_larlitecLcLMatchViewer(void *p);
   static void destruct_larlitecLcLMatchViewer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::MatchViewer*)
   {
      ::larlite::MatchViewer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::MatchViewer));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::MatchViewer", "CMTool/CMToolApp/MatchViewer.h", 27,
                  typeid(::larlite::MatchViewer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLMatchViewer_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::MatchViewer) );
      instance.SetNew(&new_larlitecLcLMatchViewer);
      instance.SetNewArray(&newArray_larlitecLcLMatchViewer);
      instance.SetDelete(&delete_larlitecLcLMatchViewer);
      instance.SetDeleteArray(&deleteArray_larlitecLcLMatchViewer);
      instance.SetDestructor(&destruct_larlitecLcLMatchViewer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::MatchViewer*)
   {
      return GenerateInitInstanceLocal((::larlite::MatchViewer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::MatchViewer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLMatchViewer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::MatchViewer*)0x0)->GetClass();
      larlitecLcLMatchViewer_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLMatchViewer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLFuzzyClusterShower_Dictionary();
   static void larlitecLcLFuzzyClusterShower_TClassManip(TClass*);
   static void *new_larlitecLcLFuzzyClusterShower(void *p = 0);
   static void *newArray_larlitecLcLFuzzyClusterShower(Long_t size, void *p);
   static void delete_larlitecLcLFuzzyClusterShower(void *p);
   static void deleteArray_larlitecLcLFuzzyClusterShower(void *p);
   static void destruct_larlitecLcLFuzzyClusterShower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::FuzzyClusterShower*)
   {
      ::larlite::FuzzyClusterShower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::FuzzyClusterShower));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::FuzzyClusterShower", "CMTool/CMToolApp/FuzzyClusterShower.h", 35,
                  typeid(::larlite::FuzzyClusterShower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLFuzzyClusterShower_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::FuzzyClusterShower) );
      instance.SetNew(&new_larlitecLcLFuzzyClusterShower);
      instance.SetNewArray(&newArray_larlitecLcLFuzzyClusterShower);
      instance.SetDelete(&delete_larlitecLcLFuzzyClusterShower);
      instance.SetDeleteArray(&deleteArray_larlitecLcLFuzzyClusterShower);
      instance.SetDestructor(&destruct_larlitecLcLFuzzyClusterShower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::FuzzyClusterShower*)
   {
      return GenerateInitInstanceLocal((::larlite::FuzzyClusterShower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::FuzzyClusterShower*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLFuzzyClusterShower_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::FuzzyClusterShower*)0x0)->GetClass();
      larlitecLcLFuzzyClusterShower_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLFuzzyClusterShower_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLHitCluster_Dictionary();
   static void larlitecLcLHitCluster_TClassManip(TClass*);
   static void *new_larlitecLcLHitCluster(void *p = 0);
   static void *newArray_larlitecLcLHitCluster(Long_t size, void *p);
   static void delete_larlitecLcLHitCluster(void *p);
   static void deleteArray_larlitecLcLHitCluster(void *p);
   static void destruct_larlitecLcLHitCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::HitCluster*)
   {
      ::larlite::HitCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::HitCluster));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::HitCluster", "CMTool/CMToolApp/HitCluster.h", 30,
                  typeid(::larlite::HitCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &larlitecLcLHitCluster_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::HitCluster) );
      instance.SetNew(&new_larlitecLcLHitCluster);
      instance.SetNewArray(&newArray_larlitecLcLHitCluster);
      instance.SetDelete(&delete_larlitecLcLHitCluster);
      instance.SetDeleteArray(&deleteArray_larlitecLcLHitCluster);
      instance.SetDestructor(&destruct_larlitecLcLHitCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::HitCluster*)
   {
      return GenerateInitInstanceLocal((::larlite::HitCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::HitCluster*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLHitCluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::HitCluster*)0x0)->GetClass();
      larlitecLcLHitCluster_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLHitCluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_cmtoolcLcLCMergeHelper(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cmtool::CMergeHelper : new ::cmtool::CMergeHelper;
   }
   static void *newArray_cmtoolcLcLCMergeHelper(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cmtool::CMergeHelper[nElements] : new ::cmtool::CMergeHelper[nElements];
   }
   // Wrapper around operator delete
   static void delete_cmtoolcLcLCMergeHelper(void *p) {
      delete ((::cmtool::CMergeHelper*)p);
   }
   static void deleteArray_cmtoolcLcLCMergeHelper(void *p) {
      delete [] ((::cmtool::CMergeHelper*)p);
   }
   static void destruct_cmtoolcLcLCMergeHelper(void *p) {
      typedef ::cmtool::CMergeHelper current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cmtool::CMergeHelper

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLClusterViewerAlgo(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::ClusterViewerAlgo : new ::cluster::ClusterViewerAlgo;
   }
   static void *newArray_clustercLcLClusterViewerAlgo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::ClusterViewerAlgo[nElements] : new ::cluster::ClusterViewerAlgo[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLClusterViewerAlgo(void *p) {
      delete ((::cluster::ClusterViewerAlgo*)p);
   }
   static void deleteArray_clustercLcLClusterViewerAlgo(void *p) {
      delete [] ((::cluster::ClusterViewerAlgo*)p);
   }
   static void destruct_clustercLcLClusterViewerAlgo(void *p) {
      typedef ::cluster::ClusterViewerAlgo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::ClusterViewerAlgo

namespace ROOT {
   // Wrappers around operator new
   static void *new_clustercLcLViewerException(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::ViewerException : new ::cluster::ViewerException;
   }
   static void *newArray_clustercLcLViewerException(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::cluster::ViewerException[nElements] : new ::cluster::ViewerException[nElements];
   }
   // Wrapper around operator delete
   static void delete_clustercLcLViewerException(void *p) {
      delete ((::cluster::ViewerException*)p);
   }
   static void deleteArray_clustercLcLViewerException(void *p) {
      delete [] ((::cluster::ViewerException*)p);
   }
   static void destruct_clustercLcLViewerException(void *p) {
      typedef ::cluster::ViewerException current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::cluster::ViewerException

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLClusterViewer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::ClusterViewer : new ::larlite::ClusterViewer;
   }
   static void *newArray_larlitecLcLClusterViewer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::ClusterViewer[nElements] : new ::larlite::ClusterViewer[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLClusterViewer(void *p) {
      delete ((::larlite::ClusterViewer*)p);
   }
   static void deleteArray_larlitecLcLClusterViewer(void *p) {
      delete [] ((::larlite::ClusterViewer*)p);
   }
   static void destruct_larlitecLcLClusterViewer(void *p) {
      typedef ::larlite::ClusterViewer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::ClusterViewer

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLClusterViewercLcLcluster_unique_id(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::ClusterViewer::cluster_unique_id : new ::larlite::ClusterViewer::cluster_unique_id;
   }
   static void *newArray_larlitecLcLClusterViewercLcLcluster_unique_id(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::ClusterViewer::cluster_unique_id[nElements] : new ::larlite::ClusterViewer::cluster_unique_id[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLClusterViewercLcLcluster_unique_id(void *p) {
      delete ((::larlite::ClusterViewer::cluster_unique_id*)p);
   }
   static void deleteArray_larlitecLcLClusterViewercLcLcluster_unique_id(void *p) {
      delete [] ((::larlite::ClusterViewer::cluster_unique_id*)p);
   }
   static void destruct_larlitecLcLClusterViewercLcLcluster_unique_id(void *p) {
      typedef ::larlite::ClusterViewer::cluster_unique_id current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::ClusterViewer::cluster_unique_id

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLMergeViewer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::MergeViewer : new ::larlite::MergeViewer;
   }
   static void *newArray_larlitecLcLMergeViewer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::MergeViewer[nElements] : new ::larlite::MergeViewer[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLMergeViewer(void *p) {
      delete ((::larlite::MergeViewer*)p);
   }
   static void deleteArray_larlitecLcLMergeViewer(void *p) {
      delete [] ((::larlite::MergeViewer*)p);
   }
   static void destruct_larlitecLcLMergeViewer(void *p) {
      typedef ::larlite::MergeViewer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::MergeViewer

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLClusterMerger(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::ClusterMerger : new ::larlite::ClusterMerger;
   }
   static void *newArray_larlitecLcLClusterMerger(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::ClusterMerger[nElements] : new ::larlite::ClusterMerger[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLClusterMerger(void *p) {
      delete ((::larlite::ClusterMerger*)p);
   }
   static void deleteArray_larlitecLcLClusterMerger(void *p) {
      delete [] ((::larlite::ClusterMerger*)p);
   }
   static void destruct_larlitecLcLClusterMerger(void *p) {
      typedef ::larlite::ClusterMerger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::ClusterMerger

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLPFPartMerger(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::PFPartMerger : new ::larlite::PFPartMerger;
   }
   static void *newArray_larlitecLcLPFPartMerger(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::PFPartMerger[nElements] : new ::larlite::PFPartMerger[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLPFPartMerger(void *p) {
      delete ((::larlite::PFPartMerger*)p);
   }
   static void deleteArray_larlitecLcLPFPartMerger(void *p) {
      delete [] ((::larlite::PFPartMerger*)p);
   }
   static void destruct_larlitecLcLPFPartMerger(void *p) {
      typedef ::larlite::PFPartMerger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::PFPartMerger

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLClusterMatcher(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::ClusterMatcher : new ::larlite::ClusterMatcher;
   }
   static void *newArray_larlitecLcLClusterMatcher(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::ClusterMatcher[nElements] : new ::larlite::ClusterMatcher[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLClusterMatcher(void *p) {
      delete ((::larlite::ClusterMatcher*)p);
   }
   static void deleteArray_larlitecLcLClusterMatcher(void *p) {
      delete [] ((::larlite::ClusterMatcher*)p);
   }
   static void destruct_larlitecLcLClusterMatcher(void *p) {
      typedef ::larlite::ClusterMatcher current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::ClusterMatcher

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLMatchViewer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::MatchViewer : new ::larlite::MatchViewer;
   }
   static void *newArray_larlitecLcLMatchViewer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::MatchViewer[nElements] : new ::larlite::MatchViewer[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLMatchViewer(void *p) {
      delete ((::larlite::MatchViewer*)p);
   }
   static void deleteArray_larlitecLcLMatchViewer(void *p) {
      delete [] ((::larlite::MatchViewer*)p);
   }
   static void destruct_larlitecLcLMatchViewer(void *p) {
      typedef ::larlite::MatchViewer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::MatchViewer

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLFuzzyClusterShower(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::FuzzyClusterShower : new ::larlite::FuzzyClusterShower;
   }
   static void *newArray_larlitecLcLFuzzyClusterShower(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::FuzzyClusterShower[nElements] : new ::larlite::FuzzyClusterShower[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLFuzzyClusterShower(void *p) {
      delete ((::larlite::FuzzyClusterShower*)p);
   }
   static void deleteArray_larlitecLcLFuzzyClusterShower(void *p) {
      delete [] ((::larlite::FuzzyClusterShower*)p);
   }
   static void destruct_larlitecLcLFuzzyClusterShower(void *p) {
      typedef ::larlite::FuzzyClusterShower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::FuzzyClusterShower

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLHitCluster(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::HitCluster : new ::larlite::HitCluster;
   }
   static void *newArray_larlitecLcLHitCluster(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::larlite::HitCluster[nElements] : new ::larlite::HitCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLHitCluster(void *p) {
      delete ((::larlite::HitCluster*)p);
   }
   static void deleteArray_larlitecLcLHitCluster(void *p) {
      delete [] ((::larlite::HitCluster*)p);
   }
   static void destruct_larlitecLcLHitCluster(void *p) {
      typedef ::larlite::HitCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::HitCluster

namespace ROOT {
   static TClass *vectorlEvectorlETH2DmUgRsPgR_Dictionary();
   static void vectorlEvectorlETH2DmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETH2DmUgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlETH2DmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETH2DmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETH2DmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlETH2DmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TH2D*> >*)
   {
      vector<vector<TH2D*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TH2D*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TH2D*> >", -2, "vector", 214,
                  typeid(vector<vector<TH2D*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETH2DmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<TH2D*> >) );
      instance.SetNew(&new_vectorlEvectorlETH2DmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETH2DmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETH2DmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETH2DmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETH2DmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TH2D*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<TH2D*> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETH2DmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TH2D*> >*)0x0)->GetClass();
      vectorlEvectorlETH2DmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETH2DmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETH2DmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH2D*> > : new vector<vector<TH2D*> >;
   }
   static void *newArray_vectorlEvectorlETH2DmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH2D*> >[nElements] : new vector<vector<TH2D*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETH2DmUgRsPgR(void *p) {
      delete ((vector<vector<TH2D*> >*)p);
   }
   static void deleteArray_vectorlEvectorlETH2DmUgRsPgR(void *p) {
      delete [] ((vector<vector<TH2D*> >*)p);
   }
   static void destruct_vectorlEvectorlETH2DmUgRsPgR(void *p) {
      typedef vector<vector<TH2D*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TH2D*> >

namespace ROOT {
   static TClass *vectorlEvectorlETGraphmUgRsPgR_Dictionary();
   static void vectorlEvectorlETGraphmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETGraphmUgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlETGraphmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETGraphmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETGraphmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlETGraphmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TGraph*> >*)
   {
      vector<vector<TGraph*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TGraph*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TGraph*> >", -2, "vector", 214,
                  typeid(vector<vector<TGraph*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETGraphmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<TGraph*> >) );
      instance.SetNew(&new_vectorlEvectorlETGraphmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETGraphmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETGraphmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETGraphmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETGraphmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TGraph*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<TGraph*> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETGraphmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TGraph*> >*)0x0)->GetClass();
      vectorlEvectorlETGraphmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETGraphmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETGraphmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TGraph*> > : new vector<vector<TGraph*> >;
   }
   static void *newArray_vectorlEvectorlETGraphmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TGraph*> >[nElements] : new vector<vector<TGraph*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETGraphmUgRsPgR(void *p) {
      delete ((vector<vector<TGraph*> >*)p);
   }
   static void deleteArray_vectorlEvectorlETGraphmUgRsPgR(void *p) {
      delete [] ((vector<vector<TGraph*> >*)p);
   }
   static void destruct_vectorlEvectorlETGraphmUgRsPgR(void *p) {
      typedef vector<vector<TGraph*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TGraph*> >

namespace ROOT {
   static TClass *vectorlEpairlEdoublecOdoublegRsPgR_Dictionary();
   static void vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEdoublecOdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_vectorlEpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_vectorlEpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<double,double> >*)
   {
      vector<pair<double,double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<double,double> >", -2, "vector", 214,
                  typeid(vector<pair<double,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<double,double> >) );
      instance.SetNew(&new_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEdoublecOdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<double,double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pair<double,double> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<double,double> >*)0x0)->GetClass();
      vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<double,double> > : new vector<pair<double,double> >;
   }
   static void *newArray_vectorlEpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<double,double> >[nElements] : new vector<pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      delete ((vector<pair<double,double> >*)p);
   }
   static void deleteArray_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] ((vector<pair<double,double> >*)p);
   }
   static void destruct_vectorlEpairlEdoublecOdoublegRsPgR(void *p) {
      typedef vector<pair<double,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<double,double> >

namespace ROOT {
   static TClass *vectorlEcmtoolcLcLCMergeManagergR_Dictionary();
   static void vectorlEcmtoolcLcLCMergeManagergR_TClassManip(TClass*);
   static void *new_vectorlEcmtoolcLcLCMergeManagergR(void *p = 0);
   static void *newArray_vectorlEcmtoolcLcLCMergeManagergR(Long_t size, void *p);
   static void delete_vectorlEcmtoolcLcLCMergeManagergR(void *p);
   static void deleteArray_vectorlEcmtoolcLcLCMergeManagergR(void *p);
   static void destruct_vectorlEcmtoolcLcLCMergeManagergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<cmtool::CMergeManager>*)
   {
      vector<cmtool::CMergeManager> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<cmtool::CMergeManager>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<cmtool::CMergeManager>", -2, "vector", 214,
                  typeid(vector<cmtool::CMergeManager>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEcmtoolcLcLCMergeManagergR_Dictionary, isa_proxy, 0,
                  sizeof(vector<cmtool::CMergeManager>) );
      instance.SetNew(&new_vectorlEcmtoolcLcLCMergeManagergR);
      instance.SetNewArray(&newArray_vectorlEcmtoolcLcLCMergeManagergR);
      instance.SetDelete(&delete_vectorlEcmtoolcLcLCMergeManagergR);
      instance.SetDeleteArray(&deleteArray_vectorlEcmtoolcLcLCMergeManagergR);
      instance.SetDestructor(&destruct_vectorlEcmtoolcLcLCMergeManagergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<cmtool::CMergeManager> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<cmtool::CMergeManager>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEcmtoolcLcLCMergeManagergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<cmtool::CMergeManager>*)0x0)->GetClass();
      vectorlEcmtoolcLcLCMergeManagergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEcmtoolcLcLCMergeManagergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEcmtoolcLcLCMergeManagergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<cmtool::CMergeManager> : new vector<cmtool::CMergeManager>;
   }
   static void *newArray_vectorlEcmtoolcLcLCMergeManagergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<cmtool::CMergeManager>[nElements] : new vector<cmtool::CMergeManager>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEcmtoolcLcLCMergeManagergR(void *p) {
      delete ((vector<cmtool::CMergeManager>*)p);
   }
   static void deleteArray_vectorlEcmtoolcLcLCMergeManagergR(void *p) {
      delete [] ((vector<cmtool::CMergeManager>*)p);
   }
   static void destruct_vectorlEcmtoolcLcLCMergeManagergR(void *p) {
      typedef vector<cmtool::CMergeManager> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<cmtool::CMergeManager>

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = 0);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 526,
                  typeid(vector<bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<bool>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)0x0)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace ROOT {
   static TClass *vectorlETH2DmUgR_Dictionary();
   static void vectorlETH2DmUgR_TClassManip(TClass*);
   static void *new_vectorlETH2DmUgR(void *p = 0);
   static void *newArray_vectorlETH2DmUgR(Long_t size, void *p);
   static void delete_vectorlETH2DmUgR(void *p);
   static void deleteArray_vectorlETH2DmUgR(void *p);
   static void destruct_vectorlETH2DmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH2D*>*)
   {
      vector<TH2D*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH2D*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH2D*>", -2, "vector", 214,
                  typeid(vector<TH2D*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH2DmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH2D*>) );
      instance.SetNew(&new_vectorlETH2DmUgR);
      instance.SetNewArray(&newArray_vectorlETH2DmUgR);
      instance.SetDelete(&delete_vectorlETH2DmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH2DmUgR);
      instance.SetDestructor(&destruct_vectorlETH2DmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH2D*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TH2D*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH2DmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH2D*>*)0x0)->GetClass();
      vectorlETH2DmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH2DmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH2DmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2D*> : new vector<TH2D*>;
   }
   static void *newArray_vectorlETH2DmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2D*>[nElements] : new vector<TH2D*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH2DmUgR(void *p) {
      delete ((vector<TH2D*>*)p);
   }
   static void deleteArray_vectorlETH2DmUgR(void *p) {
      delete [] ((vector<TH2D*>*)p);
   }
   static void destruct_vectorlETH2DmUgR(void *p) {
      typedef vector<TH2D*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH2D*>

namespace ROOT {
   static TClass *vectorlETGraphmUgR_Dictionary();
   static void vectorlETGraphmUgR_TClassManip(TClass*);
   static void *new_vectorlETGraphmUgR(void *p = 0);
   static void *newArray_vectorlETGraphmUgR(Long_t size, void *p);
   static void delete_vectorlETGraphmUgR(void *p);
   static void deleteArray_vectorlETGraphmUgR(void *p);
   static void destruct_vectorlETGraphmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TGraph*>*)
   {
      vector<TGraph*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TGraph*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TGraph*>", -2, "vector", 214,
                  typeid(vector<TGraph*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETGraphmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TGraph*>) );
      instance.SetNew(&new_vectorlETGraphmUgR);
      instance.SetNewArray(&newArray_vectorlETGraphmUgR);
      instance.SetDelete(&delete_vectorlETGraphmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETGraphmUgR);
      instance.SetDestructor(&destruct_vectorlETGraphmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TGraph*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TGraph*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETGraphmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TGraph*>*)0x0)->GetClass();
      vectorlETGraphmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETGraphmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETGraphmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGraph*> : new vector<TGraph*>;
   }
   static void *newArray_vectorlETGraphmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TGraph*>[nElements] : new vector<TGraph*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETGraphmUgR(void *p) {
      delete ((vector<TGraph*>*)p);
   }
   static void deleteArray_vectorlETGraphmUgR(void *p) {
      delete [] ((vector<TGraph*>*)p);
   }
   static void destruct_vectorlETGraphmUgR(void *p) {
      typedef vector<TGraph*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TGraph*>

namespace ROOT {
   static TClass *maplEunsignedsPshortcOlarlitecLcLsimchgR_Dictionary();
   static void maplEunsignedsPshortcOlarlitecLcLsimchgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p = 0);
   static void *newArray_maplEunsignedsPshortcOlarlitecLcLsimchgR(Long_t size, void *p);
   static void delete_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p);
   static void deleteArray_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p);
   static void destruct_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned short,larlite::simch>*)
   {
      map<unsigned short,larlite::simch> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned short,larlite::simch>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned short,larlite::simch>", -2, "map", 96,
                  typeid(map<unsigned short,larlite::simch>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPshortcOlarlitecLcLsimchgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned short,larlite::simch>) );
      instance.SetNew(&new_maplEunsignedsPshortcOlarlitecLcLsimchgR);
      instance.SetNewArray(&newArray_maplEunsignedsPshortcOlarlitecLcLsimchgR);
      instance.SetDelete(&delete_maplEunsignedsPshortcOlarlitecLcLsimchgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPshortcOlarlitecLcLsimchgR);
      instance.SetDestructor(&destruct_maplEunsignedsPshortcOlarlitecLcLsimchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned short,larlite::simch> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<unsigned short,larlite::simch>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPshortcOlarlitecLcLsimchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned short,larlite::simch>*)0x0)->GetClass();
      maplEunsignedsPshortcOlarlitecLcLsimchgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPshortcOlarlitecLcLsimchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned short,larlite::simch> : new map<unsigned short,larlite::simch>;
   }
   static void *newArray_maplEunsignedsPshortcOlarlitecLcLsimchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned short,larlite::simch>[nElements] : new map<unsigned short,larlite::simch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p) {
      delete ((map<unsigned short,larlite::simch>*)p);
   }
   static void deleteArray_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p) {
      delete [] ((map<unsigned short,larlite::simch>*)p);
   }
   static void destruct_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p) {
      typedef map<unsigned short,larlite::simch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned short,larlite::simch>

namespace ROOT {
   static TClass *maplEunsignedsPintcOunsignedsPintgR_Dictionary();
   static void maplEunsignedsPintcOunsignedsPintgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPintcOunsignedsPintgR(void *p = 0);
   static void *newArray_maplEunsignedsPintcOunsignedsPintgR(Long_t size, void *p);
   static void delete_maplEunsignedsPintcOunsignedsPintgR(void *p);
   static void deleteArray_maplEunsignedsPintcOunsignedsPintgR(void *p);
   static void destruct_maplEunsignedsPintcOunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned int,unsigned int>*)
   {
      map<unsigned int,unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned int,unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned int,unsigned int>", -2, "map", 96,
                  typeid(map<unsigned int,unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEunsignedsPintcOunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned int,unsigned int>) );
      instance.SetNew(&new_maplEunsignedsPintcOunsignedsPintgR);
      instance.SetNewArray(&newArray_maplEunsignedsPintcOunsignedsPintgR);
      instance.SetDelete(&delete_maplEunsignedsPintcOunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPintcOunsignedsPintgR);
      instance.SetDestructor(&destruct_maplEunsignedsPintcOunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned int,unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<unsigned int,unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPintcOunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned int,unsigned int>*)0x0)->GetClass();
      maplEunsignedsPintcOunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPintcOunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPintcOunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,unsigned int> : new map<unsigned int,unsigned int>;
   }
   static void *newArray_maplEunsignedsPintcOunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<unsigned int,unsigned int>[nElements] : new map<unsigned int,unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPintcOunsignedsPintgR(void *p) {
      delete ((map<unsigned int,unsigned int>*)p);
   }
   static void deleteArray_maplEunsignedsPintcOunsignedsPintgR(void *p) {
      delete [] ((map<unsigned int,unsigned int>*)p);
   }
   static void destruct_maplEunsignedsPintcOunsignedsPintgR(void *p) {
      typedef map<unsigned int,unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned int,unsigned int>

namespace {
  void TriggerDictionaryInitialization_liblardataalg_CMToolApp_Impl() {
    static const char* headers[] = {
"ClusterMatcher.h",
"ClusterMerger.h",
"ClusterViewerAlgo.h",
"ClusterViewer.h",
"CMergeHelper.h",
"CMToolApp-TypeDef.h",
"FuzzyClusterShower.h",
"HitCluster.h",
"MatchViewer.h",
"MergeViewer.h",
"PFPartMerger.h",
"ViewerException.h",
0
    };
    static const char* includePaths[] = {
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/core",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/RecoTool",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/RecoTool/FANN/include",
"/home/lsimons/scratch/LArLite_LArSoft_Int/larlite/UserDev/lardataalg/ClusterRecoUtil/Alg",
"/products/root/v6_06_04b/Linux64bit+2.6-2.12-e10-prof/include",
"/scratch/lsimons/LArLite_LArSoft_Int/larlite/UserDev/lardataalg/lardataalg/CMTool/CMToolApp/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "liblardataalg_CMToolApp dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace cmtool{class __attribute__((annotate("$clingAutoload$ClusterMerger.h")))  CMergeHelper;}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterViewerAlgo.h")))  ClusterViewerAlgo;}
namespace cluster{class __attribute__((annotate("$clingAutoload$ClusterViewerAlgo.h")))  ViewerException;}
namespace larlite{class __attribute__((annotate("$clingAutoload$ClusterViewer.h")))  ClusterViewer;}
namespace larlite{class __attribute__((annotate("$clingAutoload$CMToolApp-TypeDef.h")))  MergeViewer;}
namespace larlite{class __attribute__((annotate("$clingAutoload$ClusterMerger.h")))  ClusterMerger;}
namespace larlite{class __attribute__((annotate("$clingAutoload$PFPartMerger.h")))  PFPartMerger;}
namespace larlite{class __attribute__((annotate("$clingAutoload$ClusterMatcher.h")))  ClusterMatcher;}
namespace larlite{class __attribute__((annotate("$clingAutoload$CMToolApp-TypeDef.h")))  MatchViewer;}
namespace larlite{class __attribute__((annotate("$clingAutoload$CMToolApp-TypeDef.h")))  FuzzyClusterShower;}
namespace larlite{class __attribute__((annotate("$clingAutoload$HitCluster.h")))  HitCluster;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "liblardataalg_CMToolApp dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "ClusterMatcher.h"
#include "ClusterMerger.h"
#include "ClusterViewerAlgo.h"
#include "ClusterViewer.h"
#include "CMergeHelper.h"
#include "CMToolApp-TypeDef.h"
#include "FuzzyClusterShower.h"
#include "HitCluster.h"
#include "MatchViewer.h"
#include "MergeViewer.h"
#include "PFPartMerger.h"
#include "ViewerException.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"cluster::ClusterViewerAlgo", payloadCode, "@",
"cluster::ViewerException", payloadCode, "@",
"cmtool::CMergeHelper", payloadCode, "@",
"larlite::ClusterMatcher", payloadCode, "@",
"larlite::ClusterMerger", payloadCode, "@",
"larlite::ClusterViewer", payloadCode, "@",
"larlite::ClusterViewer::cluster_unique_id", payloadCode, "@",
"larlite::FuzzyClusterShower", payloadCode, "@",
"larlite::HitCluster", payloadCode, "@",
"larlite::MatchViewer", payloadCode, "@",
"larlite::MergeViewer", payloadCode, "@",
"larlite::PFPartMerger", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("liblardataalg_CMToolApp",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_liblardataalg_CMToolApp_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_liblardataalg_CMToolApp_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_liblardataalg_CMToolApp() {
  TriggerDictionaryInitialization_liblardataalg_CMToolApp_Impl();
}
