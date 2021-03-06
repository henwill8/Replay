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
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: FloatSO
  class FloatSO;
  // Forward declaring type: BoolSO
  class BoolSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: VRRenderingParamsSetup
  // [] Offset: FFFFFFFF
  class VRRenderingParamsSetup : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::VRRenderingParamsSetup::SceneType
    struct SceneType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: VRRenderingParamsSetup/SceneType
    // [] Offset: FFFFFFFF
    struct SceneType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: SceneType
      constexpr SceneType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public VRRenderingParamsSetup/SceneType Undefined
      static constexpr const int Undefined = 0;
      // Get static field: static public VRRenderingParamsSetup/SceneType Undefined
      static GlobalNamespace::VRRenderingParamsSetup::SceneType _get_Undefined();
      // Set static field: static public VRRenderingParamsSetup/SceneType Undefined
      static void _set_Undefined(GlobalNamespace::VRRenderingParamsSetup::SceneType value);
      // static field const value: static public VRRenderingParamsSetup/SceneType Menu
      static constexpr const int Menu = 1;
      // Get static field: static public VRRenderingParamsSetup/SceneType Menu
      static GlobalNamespace::VRRenderingParamsSetup::SceneType _get_Menu();
      // Set static field: static public VRRenderingParamsSetup/SceneType Menu
      static void _set_Menu(GlobalNamespace::VRRenderingParamsSetup::SceneType value);
      // static field const value: static public VRRenderingParamsSetup/SceneType Game
      static constexpr const int Game = 2;
      // Get static field: static public VRRenderingParamsSetup/SceneType Game
      static GlobalNamespace::VRRenderingParamsSetup::SceneType _get_Game();
      // Set static field: static public VRRenderingParamsSetup/SceneType Game
      static void _set_Game(GlobalNamespace::VRRenderingParamsSetup::SceneType value);
    }; // VRRenderingParamsSetup/SceneType
    #pragma pack(pop)
    static check_size<sizeof(VRRenderingParamsSetup::SceneType), 0 + sizeof(int)> __GlobalNamespace_VRRenderingParamsSetup_SceneTypeSizeCheck;
    static_assert(sizeof(VRRenderingParamsSetup::SceneType) == 0x4);
    // private FloatSO _vrResolutionScale
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::FloatSO* vrResolutionScale;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // private FloatSO _menuVRResolutionScaleMultiplier
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::FloatSO* menuVRResolutionScaleMultiplier;
    // Field size check
    static_assert(sizeof(GlobalNamespace::FloatSO*) == 0x8);
    // private BoolSO _useFixedFoveatedRenderingDuringGameplay
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BoolSO* useFixedFoveatedRenderingDuringGameplay;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BoolSO*) == 0x8);
    // private VRRenderingParamsSetup/SceneType _sceneType
    // Size: 0x4
    // Offset: 0x30
    GlobalNamespace::VRRenderingParamsSetup::SceneType sceneType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VRRenderingParamsSetup::SceneType) == 0x4);
    // Padding between fields: sceneType and: vrPlatformHelper
    char __padding3[0x4] = {};
    // [InjectAttribute] Offset: 0xD235E0
    // private IVRPlatformHelper _vrPlatformHelper
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IVRPlatformHelper* vrPlatformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // Creating value type constructor for type: VRRenderingParamsSetup
    VRRenderingParamsSetup(GlobalNamespace::FloatSO* vrResolutionScale_ = {}, GlobalNamespace::FloatSO* menuVRResolutionScaleMultiplier_ = {}, GlobalNamespace::BoolSO* useFixedFoveatedRenderingDuringGameplay_ = {}, GlobalNamespace::VRRenderingParamsSetup::SceneType sceneType_ = {}, GlobalNamespace::IVRPlatformHelper* vrPlatformHelper_ = {}) noexcept : vrResolutionScale{vrResolutionScale_}, menuVRResolutionScaleMultiplier{menuVRResolutionScaleMultiplier_}, useFixedFoveatedRenderingDuringGameplay{useFixedFoveatedRenderingDuringGameplay_}, sceneType{sceneType_}, vrPlatformHelper{vrPlatformHelper_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void OnEnable()
    // Offset: 0x22548F0
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x2254BE4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRRenderingParamsSetup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::VRRenderingParamsSetup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRRenderingParamsSetup*, creationType>()));
    }
  }; // VRRenderingParamsSetup
  #pragma pack(pop)
  static check_size<sizeof(VRRenderingParamsSetup), 56 + sizeof(GlobalNamespace::IVRPlatformHelper*)> __GlobalNamespace_VRRenderingParamsSetupSizeCheck;
  static_assert(sizeof(VRRenderingParamsSetup) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRRenderingParamsSetup*, "", "VRRenderingParamsSetup");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRRenderingParamsSetup::SceneType, "", "VRRenderingParamsSetup/SceneType");
