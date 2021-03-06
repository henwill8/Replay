// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: Valve.VR.VRTextureBounds_t
#include "Valve/VR/VRTextureBounds_t.hpp"
// Including type: SteamVR_Utils/RigidTransform
#include "GlobalNamespace/SteamVR_Utils_RigidTransform.hpp"
// Including type: Valve.VR.ETextureType
#include "Valve/VR/ETextureType.hpp"
// Including type: Valve.VR.TrackedDevicePose_t
#include "Valve/VR/TrackedDevicePose_t.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: CVRSystem
  class CVRSystem;
  // Forward declaring type: CVRCompositor
  class CVRCompositor;
  // Forward declaring type: CVROverlay
  class CVROverlay;
  // Forward declaring type: EVRInitError
  struct EVRInitError;
  // Forward declaring type: ETrackedDeviceProperty
  struct ETrackedDeviceProperty;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x54
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR
  // [] Offset: FFFFFFFF
  class SteamVR : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xCFC190
    // private Valve.VR.CVRSystem <hmd>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    Valve::VR::CVRSystem* hmd;
    // Field size check
    static_assert(sizeof(Valve::VR::CVRSystem*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCFC1A0
    // private Valve.VR.CVRCompositor <compositor>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    Valve::VR::CVRCompositor* compositor;
    // Field size check
    static_assert(sizeof(Valve::VR::CVRCompositor*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCFC1B0
    // private Valve.VR.CVROverlay <overlay>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    Valve::VR::CVROverlay* overlay;
    // Field size check
    static_assert(sizeof(Valve::VR::CVROverlay*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCFC1F0
    // private System.Single <sceneWidth>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float sceneWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCFC200
    // private System.Single <sceneHeight>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    float sceneHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCFC210
    // private System.Single <aspect>k__BackingField
    // Size: 0x4
    // Offset: 0x30
    float aspect;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCFC220
    // private System.Single <fieldOfView>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    float fieldOfView;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xCFC230
    // private UnityEngine.Vector2 <tanHalfFov>k__BackingField
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Vector2 tanHalfFov;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCFC240
    // private Valve.VR.VRTextureBounds_t[] <textureBounds>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::Array<Valve::VR::VRTextureBounds_t>* textureBounds;
    // Field size check
    static_assert(sizeof(::Array<Valve::VR::VRTextureBounds_t>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCFC250
    // private SteamVR_Utils/RigidTransform[] <eyes>k__BackingField
    // Size: 0x8
    // Offset: 0x48
    ::Array<GlobalNamespace::SteamVR_Utils::RigidTransform>* eyes;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::SteamVR_Utils::RigidTransform>*) == 0x8);
    // public Valve.VR.ETextureType textureType
    // Size: 0x4
    // Offset: 0x50
    Valve::VR::ETextureType textureType;
    // Field size check
    static_assert(sizeof(Valve::VR::ETextureType) == 0x4);
    // Creating value type constructor for type: SteamVR
    SteamVR(Valve::VR::CVRSystem* hmd_ = {}, Valve::VR::CVRCompositor* compositor_ = {}, Valve::VR::CVROverlay* overlay_ = {}, float sceneWidth_ = {}, float sceneHeight_ = {}, float aspect_ = {}, float fieldOfView_ = {}, UnityEngine::Vector2 tanHalfFov_ = {}, ::Array<Valve::VR::VRTextureBounds_t>* textureBounds_ = {}, ::Array<GlobalNamespace::SteamVR_Utils::RigidTransform>* eyes_ = {}, Valve::VR::ETextureType textureType_ = {}) noexcept : hmd{hmd_}, compositor{compositor_}, overlay{overlay_}, sceneWidth{sceneWidth_}, sceneHeight{sceneHeight_}, aspect{aspect_}, fieldOfView{fieldOfView_}, tanHalfFov{tanHalfFov_}, textureBounds{textureBounds_}, eyes{eyes_}, textureType{textureType_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private System.Boolean _enabled
    static bool _get__enabled();
    // Set static field: static private System.Boolean _enabled
    static void _set__enabled(bool value);
    // Get static field: static private SteamVR _instance
    static GlobalNamespace::SteamVR* _get__instance();
    // Set static field: static private SteamVR _instance
    static void _set__instance(GlobalNamespace::SteamVR* value);
    // [CompilerGeneratedAttribute] Offset: 0xCFC1C0
    // Get static field: static private System.Boolean <initializing>k__BackingField
    static bool _get_$initializing$k__BackingField();
    // Set static field: static private System.Boolean <initializing>k__BackingField
    static void _set_$initializing$k__BackingField(bool value);
    // [CompilerGeneratedAttribute] Offset: 0xCFC1D0
    // Get static field: static private System.Boolean <calibrating>k__BackingField
    static bool _get_$calibrating$k__BackingField();
    // Set static field: static private System.Boolean <calibrating>k__BackingField
    static void _set_$calibrating$k__BackingField(bool value);
    // [CompilerGeneratedAttribute] Offset: 0xCFC1E0
    // Get static field: static private System.Boolean <outOfRange>k__BackingField
    static bool _get_$outOfRange$k__BackingField();
    // Set static field: static private System.Boolean <outOfRange>k__BackingField
    static void _set_$outOfRange$k__BackingField(bool value);
    // Get static field: static public System.Boolean[] connected
    static ::Array<bool>* _get_connected();
    // Set static field: static public System.Boolean[] connected
    static void _set_connected(::Array<bool>* value);
    // static public System.Boolean get_active()
    // Offset: 0x1287908
    static bool get_active();
    // static public System.Boolean get_enabled()
    // Offset: 0x1287978
    static bool get_enabled();
    // static public System.Void set_enabled(System.Boolean value)
    // Offset: 0x1287A14
    static void set_enabled(bool value);
    // static public SteamVR get_instance()
    // Offset: 0x1287B58
    static GlobalNamespace::SteamVR* get_instance();
    // static public System.Boolean get_usingNativeSupport()
    // Offset: 0x1287E98
    static bool get_usingNativeSupport();
    // static private SteamVR CreateInstance()
    // Offset: 0x1287C70
    static GlobalNamespace::SteamVR* CreateInstance();
    // static private System.Void ReportError(Valve.VR.EVRInitError error)
    // Offset: 0x1287F04
    static void ReportError(Valve::VR::EVRInitError error);
    // public Valve.VR.CVRSystem get_hmd()
    // Offset: 0x12888B0
    Valve::VR::CVRSystem* get_hmd();
    // private System.Void set_hmd(Valve.VR.CVRSystem value)
    // Offset: 0x12888B8
    void set_hmd(Valve::VR::CVRSystem* value);
    // public Valve.VR.CVRCompositor get_compositor()
    // Offset: 0x12888C0
    Valve::VR::CVRCompositor* get_compositor();
    // private System.Void set_compositor(Valve.VR.CVRCompositor value)
    // Offset: 0x12888C8
    void set_compositor(Valve::VR::CVRCompositor* value);
    // public Valve.VR.CVROverlay get_overlay()
    // Offset: 0x12888D0
    Valve::VR::CVROverlay* get_overlay();
    // private System.Void set_overlay(Valve.VR.CVROverlay value)
    // Offset: 0x12888D8
    void set_overlay(Valve::VR::CVROverlay* value);
    // static public System.Boolean get_initializing()
    // Offset: 0x12888E0
    static bool get_initializing();
    // static private System.Void set_initializing(System.Boolean value)
    // Offset: 0x1288948
    static void set_initializing(bool value);
    // static public System.Boolean get_calibrating()
    // Offset: 0x12889B8
    static bool get_calibrating();
    // static private System.Void set_calibrating(System.Boolean value)
    // Offset: 0x1288A20
    static void set_calibrating(bool value);
    // static public System.Boolean get_outOfRange()
    // Offset: 0x1288A90
    static bool get_outOfRange();
    // static private System.Void set_outOfRange(System.Boolean value)
    // Offset: 0x1288AF8
    static void set_outOfRange(bool value);
    // public System.Single get_sceneWidth()
    // Offset: 0x1288B68
    float get_sceneWidth();
    // private System.Void set_sceneWidth(System.Single value)
    // Offset: 0x1288B70
    void set_sceneWidth(float value);
    // public System.Single get_sceneHeight()
    // Offset: 0x1288B78
    float get_sceneHeight();
    // private System.Void set_sceneHeight(System.Single value)
    // Offset: 0x1288B80
    void set_sceneHeight(float value);
    // public System.Single get_aspect()
    // Offset: 0x1288B88
    float get_aspect();
    // private System.Void set_aspect(System.Single value)
    // Offset: 0x1288B90
    void set_aspect(float value);
    // public System.Single get_fieldOfView()
    // Offset: 0x1288B98
    float get_fieldOfView();
    // private System.Void set_fieldOfView(System.Single value)
    // Offset: 0x1288BA0
    void set_fieldOfView(float value);
    // public UnityEngine.Vector2 get_tanHalfFov()
    // Offset: 0x1288BA8
    UnityEngine::Vector2 get_tanHalfFov();
    // private System.Void set_tanHalfFov(UnityEngine.Vector2 value)
    // Offset: 0x1288BB0
    void set_tanHalfFov(UnityEngine::Vector2 value);
    // public Valve.VR.VRTextureBounds_t[] get_textureBounds()
    // Offset: 0x1288BB8
    ::Array<Valve::VR::VRTextureBounds_t>* get_textureBounds();
    // private System.Void set_textureBounds(Valve.VR.VRTextureBounds_t[] value)
    // Offset: 0x1288BC0
    void set_textureBounds(::Array<Valve::VR::VRTextureBounds_t>* value);
    // public SteamVR_Utils/RigidTransform[] get_eyes()
    // Offset: 0x1288BC8
    ::Array<GlobalNamespace::SteamVR_Utils::RigidTransform>* get_eyes();
    // private System.Void set_eyes(SteamVR_Utils/RigidTransform[] value)
    // Offset: 0x1288BD0
    void set_eyes(::Array<GlobalNamespace::SteamVR_Utils::RigidTransform>* value);
    // public System.String get_hmd_TrackingSystemName()
    // Offset: 0x1288BD8
    ::Il2CppString* get_hmd_TrackingSystemName();
    // public System.String get_hmd_ModelNumber()
    // Offset: 0x1288D2C
    ::Il2CppString* get_hmd_ModelNumber();
    // public System.String get_hmd_SerialNumber()
    // Offset: 0x1288D38
    ::Il2CppString* get_hmd_SerialNumber();
    // public System.Single get_hmd_SecondsFromVsyncToPhotons()
    // Offset: 0x1288D44
    float get_hmd_SecondsFromVsyncToPhotons();
    // public System.Single get_hmd_DisplayFrequency()
    // Offset: 0x1288D90
    float get_hmd_DisplayFrequency();
    // public System.String GetTrackedDeviceString(System.UInt32 deviceId)
    // Offset: 0x1288D9C
    ::Il2CppString* GetTrackedDeviceString(uint deviceId);
    // public System.String GetStringProperty(Valve.VR.ETrackedDeviceProperty prop, System.UInt32 deviceId)
    // Offset: 0x1288BE4
    ::Il2CppString* GetStringProperty(Valve::VR::ETrackedDeviceProperty prop, uint deviceId);
    // public System.Single GetFloatProperty(Valve.VR.ETrackedDeviceProperty prop, System.UInt32 deviceId)
    // Offset: 0x1288D50
    float GetFloatProperty(Valve::VR::ETrackedDeviceProperty prop, uint deviceId);
    // private System.Void OnInitializing(System.Boolean initializing)
    // Offset: 0x1288E84
    void OnInitializing(bool initializing);
    // private System.Void OnCalibrating(System.Boolean calibrating)
    // Offset: 0x1288F38
    void OnCalibrating(bool calibrating);
    // private System.Void OnOutOfRange(System.Boolean outOfRange)
    // Offset: 0x1288FEC
    void OnOutOfRange(bool outOfRange);
    // private System.Void OnDeviceConnected(System.Int32 i, System.Boolean connected)
    // Offset: 0x12890A0
    void OnDeviceConnected(int i, bool connected);
    // private System.Void OnNewPoses(Valve.VR.TrackedDevicePose_t[] poses)
    // Offset: 0x1289144
    void OnNewPoses(::Array<Valve::VR::TrackedDevicePose_t>* poses);
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x128965C
    void Dispose(bool disposing);
    // static public System.Void SafeDispose()
    // Offset: 0x1287AB4
    static void SafeDispose();
    // static private System.Void .cctor()
    // Offset: 0x1289918
    static void _cctor();
    // private System.Void .ctor()
    // Offset: 0x1288058
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x12895F0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public System.Void Dispose()
    // Offset: 0x12898A4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // SteamVR
  #pragma pack(pop)
  static check_size<sizeof(SteamVR), 80 + sizeof(Valve::VR::ETextureType)> __GlobalNamespace_SteamVRSizeCheck;
  static_assert(sizeof(SteamVR) == 0x54);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR*, "", "SteamVR");
