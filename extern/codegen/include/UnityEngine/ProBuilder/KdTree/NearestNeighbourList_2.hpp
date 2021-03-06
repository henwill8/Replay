// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Forward declaring type: PriorityQueue`2<TItem, TPriority>
  template<typename TItem, typename TPriority>
  class PriorityQueue_2;
  // Forward declaring type: ITypeMath`1<T>
  template<typename T>
  class ITypeMath_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.NearestNeighbourList`2
  // [] Offset: FFFFFFFF
  template<typename TItem, typename TDistance>
  class NearestNeighbourList_2 : public ::Il2CppObject {
    public:
    // private UnityEngine.ProBuilder.KdTree.PriorityQueue`2<TItem,TDistance> queue
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>* queue;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>*) == 0x8);
    // private UnityEngine.ProBuilder.KdTree.ITypeMath`1<TDistance> distanceMath
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* distanceMath;
    // Field size check
    static_assert(sizeof(UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>*) == 0x8);
    // private System.Int32 maxCapacity
    // Size: 0x4
    // Offset: 0x0
    int maxCapacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NearestNeighbourList_2
    NearestNeighbourList_2(UnityEngine::ProBuilder::KdTree::PriorityQueue_2<TItem, TDistance>* queue_ = {}, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* distanceMath_ = {}, int maxCapacity_ = {}) noexcept : queue{queue_}, distanceMath{distanceMath_}, maxCapacity{maxCapacity_} {}
    // public System.Void .ctor(System.Int32 maxCapacity, UnityEngine.ProBuilder.KdTree.ITypeMath`1<TDistance> distanceMath)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NearestNeighbourList_2<TItem, TDistance>* New_ctor(int maxCapacity, UnityEngine::ProBuilder::KdTree::ITypeMath_1<TDistance>* distanceMath) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NearestNeighbourList_2<TItem, TDistance>*, creationType>(maxCapacity, distanceMath)));
    }
    // public System.Int32 get_MaxCapacity()
    // Offset: 0xFFFFFFFF
    int get_MaxCapacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2::get_MaxCapacity");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_MaxCapacity", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2::get_Count");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Count", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Boolean Add(TItem item, TDistance distance)
    // Offset: 0xFFFFFFFF
    bool Add(TItem item, TDistance distance) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2::Add");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(item, distance)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, item, distance);
    }
    // public TDistance GetFurtherestDistance()
    // Offset: 0xFFFFFFFF
    TDistance GetFurtherestDistance() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2::GetFurtherestDistance");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetFurtherestDistance", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<TDistance, false>(this, ___internal__method);
    }
    // public TItem RemoveFurtherest()
    // Offset: 0xFFFFFFFF
    TItem RemoveFurtherest() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2::RemoveFurtherest");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "RemoveFurtherest", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<TItem, false>(this, ___internal__method);
    }
    // public System.Boolean get_IsCapacityReached()
    // Offset: 0xFFFFFFFF
    bool get_IsCapacityReached() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2::get_IsCapacityReached");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_IsCapacityReached", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
    }
  }; // UnityEngine.ProBuilder.KdTree.NearestNeighbourList`2
  // Could not write size check! Type: UnityEngine.ProBuilder.KdTree.NearestNeighbourList`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::ProBuilder::KdTree::NearestNeighbourList_2, "UnityEngine.ProBuilder.KdTree", "NearestNeighbourList`2");
