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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: VisualEffectsController
  // [] Offset: FFFFFFFF
  class VisualEffectsController : public UnityEngine::MonoBehaviour {
    public:
    // private BoolSO _depthTextureEnabled
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BoolSO* depthTextureEnabled;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // Creating value type constructor for type: VisualEffectsController
    VisualEffectsController(GlobalNamespace::BoolSO* depthTextureEnabled_ = {}) noexcept : depthTextureEnabled{depthTextureEnabled_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String kDepthTextureEnabledKeyword
    static constexpr const char* kDepthTextureEnabledKeyword = "DEPTH_TEXTURE_ENABLED";
    // Get static field: static private System.String kDepthTextureEnabledKeyword
    static ::Il2CppString* _get_kDepthTextureEnabledKeyword();
    // Set static field: static private System.String kDepthTextureEnabledKeyword
    static void _set_kDepthTextureEnabledKeyword(::Il2CppString* value);
    // protected System.Void Awake()
    // Offset: 0x2254BEC
    void Awake();
    // protected System.Void OnPreRender()
    // Offset: 0x2254C70
    void OnPreRender();
    // private System.Void SetShaderKeyword(System.String keyword, System.Boolean value)
    // Offset: 0x2254CF0
    void SetShaderKeyword(::Il2CppString* keyword, bool value);
    // public System.Void .ctor()
    // Offset: 0x2254D04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisualEffectsController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VisualEffectsController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisualEffectsController*, creationType>()));
    }
  }; // VisualEffectsController
  #pragma pack(pop)
  static check_size<sizeof(VisualEffectsController), 24 + sizeof(GlobalNamespace::BoolSO*)> __GlobalNamespace_VisualEffectsControllerSizeCheck;
  static_assert(sizeof(VisualEffectsController) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VisualEffectsController*, "", "VisualEffectsController");
