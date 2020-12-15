// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: ETrackedDeviceClass
  struct ETrackedDeviceClass;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_Controller
  class SteamVR_Controller : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SteamVR_Controller::ButtonMask
    class ButtonMask;
    // Nested type: GlobalNamespace::SteamVR_Controller::Device
    class Device;
    // Nested type: GlobalNamespace::SteamVR_Controller::DeviceRelation
    struct DeviceRelation;
    // Get static field: static private SteamVR_Controller/Device[] devices
    static ::Array<GlobalNamespace::SteamVR_Controller::Device*>* _get_devices();
    // Set static field: static private SteamVR_Controller/Device[] devices
    static void _set_devices(::Array<GlobalNamespace::SteamVR_Controller::Device*>* value);
    // static public SteamVR_Controller/Device Input(System.Int32 deviceIndex)
    // Offset: 0x110354C
    static GlobalNamespace::SteamVR_Controller::Device* Input(int deviceIndex);
    // static public System.Void Update()
    // Offset: 0x11036EC
    static void Update();
    // static public System.Int32 GetDeviceIndex(SteamVR_Controller/DeviceRelation relation, Valve.VR.ETrackedDeviceClass deviceClass, System.Int32 relativeTo)
    // Offset: 0x11038B0
    static int GetDeviceIndex(GlobalNamespace::SteamVR_Controller::DeviceRelation relation, Valve::VR::ETrackedDeviceClass deviceClass, int relativeTo);
    // public System.Void .ctor()
    // Offset: 0x1103C8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SteamVR_Controller* New_ctor();
  }; // SteamVR_Controller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Controller*, "", "SteamVR_Controller");
#pragma pack(pop)