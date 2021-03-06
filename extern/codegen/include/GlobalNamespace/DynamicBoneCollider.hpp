// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: DynamicBoneColliderBase
#include "GlobalNamespace/DynamicBoneColliderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: DynamicBoneCollider
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: D26218
  class DynamicBoneCollider : public GlobalNamespace::DynamicBoneColliderBase {
    public:
    // public System.Single m_Radius
    // Size: 0x4
    // Offset: 0x2C
    float m_Radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_Height
    // Size: 0x4
    // Offset: 0x30
    float m_Height;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: DynamicBoneCollider
    DynamicBoneCollider(float m_Radius_ = {}, float m_Height_ = {}) noexcept : m_Radius{m_Radius_}, m_Height{m_Height_} {}
    // private System.Void OnValidate()
    // Offset: 0x22B4C78
    void OnValidate();
    // static private System.Void OutsideSphere(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 sphereCenter, System.Single sphereRadius)
    // Offset: 0x22B4F68
    static void OutsideSphere(UnityEngine::Vector3& particlePosition, float particleRadius, UnityEngine::Vector3 sphereCenter, float sphereRadius);
    // static private System.Void InsideSphere(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 sphereCenter, System.Single sphereRadius)
    // Offset: 0x22B50FC
    static void InsideSphere(UnityEngine::Vector3& particlePosition, float particleRadius, UnityEngine::Vector3 sphereCenter, float sphereRadius);
    // static private System.Void OutsideCapsule(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 capsuleP0, UnityEngine.Vector3 capsuleP1, System.Single capsuleRadius)
    // Offset: 0x22B52A0
    static void OutsideCapsule(UnityEngine::Vector3& particlePosition, float particleRadius, UnityEngine::Vector3 capsuleP0, UnityEngine::Vector3 capsuleP1, float capsuleRadius);
    // static private System.Void InsideCapsule(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius, UnityEngine.Vector3 capsuleP0, UnityEngine.Vector3 capsuleP1, System.Single capsuleRadius)
    // Offset: 0x22B56DC
    static void InsideCapsule(UnityEngine::Vector3& particlePosition, float particleRadius, UnityEngine::Vector3 capsuleP0, UnityEngine::Vector3 capsuleP1, float capsuleRadius);
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x22B5AEC
    void OnDrawGizmosSelected();
    // public override System.Void Collide(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius)
    // Offset: 0x22B4D10
    // Implemented from: DynamicBoneColliderBase
    // Base method: System.Void DynamicBoneColliderBase::Collide(ref UnityEngine.Vector3 particlePosition, System.Single particleRadius)
    void Collide(UnityEngine::Vector3& particlePosition, float particleRadius);
    // public System.Void .ctor()
    // Offset: 0x22B5CD4
    // Implemented from: DynamicBoneColliderBase
    // Base method: System.Void DynamicBoneColliderBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DynamicBoneCollider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DynamicBoneCollider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DynamicBoneCollider*, creationType>()));
    }
  }; // DynamicBoneCollider
  #pragma pack(pop)
  static check_size<sizeof(DynamicBoneCollider), 48 + sizeof(float)> __GlobalNamespace_DynamicBoneColliderSizeCheck;
  static_assert(sizeof(DynamicBoneCollider) == 0x34);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DynamicBoneCollider*, "", "DynamicBoneCollider");
