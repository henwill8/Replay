// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody2D
  class Rigidbody2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SleepRigidbody2DWhenInvisible
  // [] Offset: FFFFFFFF
  class SleepRigidbody2DWhenInvisible : public UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.Rigidbody2D _rigidbody2D
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Rigidbody2D* rigidbody2D;
    // Field size check
    static_assert(sizeof(UnityEngine::Rigidbody2D*) == 0x8);
    // Creating value type constructor for type: SleepRigidbody2DWhenInvisible
    SleepRigidbody2DWhenInvisible(UnityEngine::Rigidbody2D* rigidbody2D_ = {}) noexcept : rigidbody2D{rigidbody2D_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x229C014
    void Awake();
    // protected System.Void OnBecameInvisible()
    // Offset: 0x229C018
    void OnBecameInvisible();
    // public System.Void .ctor()
    // Offset: 0x229C034
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SleepRigidbody2DWhenInvisible* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SleepRigidbody2DWhenInvisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SleepRigidbody2DWhenInvisible*, creationType>()));
    }
  }; // SleepRigidbody2DWhenInvisible
  #pragma pack(pop)
  static check_size<sizeof(SleepRigidbody2DWhenInvisible), 24 + sizeof(UnityEngine::Rigidbody2D*)> __GlobalNamespace_SleepRigidbody2DWhenInvisibleSizeCheck;
  static_assert(sizeof(SleepRigidbody2DWhenInvisible) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SleepRigidbody2DWhenInvisible*, "", "SleepRigidbody2DWhenInvisible");
