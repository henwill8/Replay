// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.DepthTextureMode
#include "UnityEngine/DepthTextureMode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: EnableDepthTextureMode
  // [] Offset: FFFFFFFF
  class EnableDepthTextureMode : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.DepthTextureMode _depthTextureMode
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::DepthTextureMode depthTextureMode;
    // Field size check
    static_assert(sizeof(UnityEngine::DepthTextureMode) == 0x4);
    // Creating value type constructor for type: EnableDepthTextureMode
    EnableDepthTextureMode(UnityEngine::DepthTextureMode depthTextureMode_ = {}) noexcept : depthTextureMode{depthTextureMode_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x104F338
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x104F39C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableDepthTextureMode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnableDepthTextureMode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableDepthTextureMode*, creationType>()));
    }
  }; // EnableDepthTextureMode
  #pragma pack(pop)
  static check_size<sizeof(EnableDepthTextureMode), 24 + sizeof(UnityEngine::DepthTextureMode)> __GlobalNamespace_EnableDepthTextureModeSizeCheck;
  static_assert(sizeof(EnableDepthTextureMode) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableDepthTextureMode*, "", "EnableDepthTextureMode");
