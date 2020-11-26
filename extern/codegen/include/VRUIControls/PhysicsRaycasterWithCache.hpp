// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Ray
#include "UnityEngine/Ray.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Autogenerated type: VRUIControls.PhysicsRaycasterWithCache
  class PhysicsRaycasterWithCache : public ::Il2CppObject {
    public:
    // Nested type: VRUIControls::PhysicsRaycasterWithCache::CachedRaycast
    struct CachedRaycast;
    // Autogenerated type: VRUIControls.PhysicsRaycasterWithCache/CachedRaycast
    struct CachedRaycast : public System::ValueType {
      public:
      // public readonly System.Boolean wasHit
      // Offset: 0x0
      bool wasHit;
      // public readonly UnityEngine.Ray ray
      // Offset: 0x4
      UnityEngine::Ray ray;
      // public readonly UnityEngine.RaycastHit hitInfo
      // Offset: 0x1C
      UnityEngine::RaycastHit hitInfo;
      // public readonly System.Single maxDistance
      // Offset: 0x48
      float maxDistance;
      // public readonly System.Int32 layerMask
      // Offset: 0x4C
      int layerMask;
      // Creating value type constructor for type: CachedRaycast
      constexpr CachedRaycast(bool wasHit_ = {}, UnityEngine::Ray ray_ = {}, UnityEngine::RaycastHit hitInfo_ = {}, float maxDistance_ = {}, int layerMask_ = {}) noexcept : wasHit{wasHit_}, ray{ray_}, hitInfo{hitInfo_}, maxDistance{maxDistance_}, layerMask{layerMask_} {}
      // public System.Void .ctor(System.Boolean wasHit, UnityEngine.Ray ray, UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
      // Offset: 0xCB5CA0
      // ABORTED: conflicts with another method.  CachedRaycast(bool wasHit, UnityEngine::Ray ray, UnityEngine::RaycastHit hitInfo, float maxDistance, int layerMask);
    }; // VRUIControls.PhysicsRaycasterWithCache/CachedRaycast
    // private readonly System.Collections.Generic.List`1<VRUIControls.PhysicsRaycasterWithCache/CachedRaycast> _cachedRaycasts
    // Offset: 0x10
    System::Collections::Generic::List_1<VRUIControls::PhysicsRaycasterWithCache::CachedRaycast>* cachedRaycasts;
    // private System.Int32 _lastFrameCount
    // Offset: 0x18
    int lastFrameCount;
    // public System.Boolean Raycast(UnityEngine.Ray ray, out UnityEngine.RaycastHit hitInfo, System.Single maxDistance, System.Int32 layerMask)
    // Offset: 0x198F8A0
    bool Raycast(UnityEngine::Ray ray, UnityEngine::RaycastHit& hitInfo, float maxDistance, int layerMask);
    // public System.Void .ctor()
    // Offset: 0x198FD44
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PhysicsRaycasterWithCache* New_ctor();
  }; // VRUIControls.PhysicsRaycasterWithCache
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::PhysicsRaycasterWithCache*, "VRUIControls", "PhysicsRaycasterWithCache");
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::PhysicsRaycasterWithCache::CachedRaycast, "VRUIControls", "PhysicsRaycasterWithCache/CachedRaycast");
#pragma pack(pop)
