// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
// Including type: OVRInput/RawAxis2D
#include "GlobalNamespace/OVRInput_RawAxis2D.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRInput/OVRControllerBase/VirtualAxis2DMap
  class OVRInput::OVRControllerBase::VirtualAxis2DMap : public ::Il2CppObject {
    public:
    // public OVRInput/RawAxis2D None
    // Offset: 0x10
    GlobalNamespace::OVRInput::RawAxis2D None;
    // public OVRInput/RawAxis2D PrimaryThumbstick
    // Offset: 0x14
    GlobalNamespace::OVRInput::RawAxis2D PrimaryThumbstick;
    // public OVRInput/RawAxis2D PrimaryTouchpad
    // Offset: 0x18
    GlobalNamespace::OVRInput::RawAxis2D PrimaryTouchpad;
    // public OVRInput/RawAxis2D SecondaryThumbstick
    // Offset: 0x1C
    GlobalNamespace::OVRInput::RawAxis2D SecondaryThumbstick;
    // public OVRInput/RawAxis2D SecondaryTouchpad
    // Offset: 0x20
    GlobalNamespace::OVRInput::RawAxis2D SecondaryTouchpad;
    // public OVRInput/RawAxis2D ToRawMask(OVRInput/Axis2D virtualMask)
    // Offset: 0x11C0C78
    GlobalNamespace::OVRInput::RawAxis2D ToRawMask(GlobalNamespace::OVRInput::Axis2D virtualMask);
    // public System.Void .ctor()
    // Offset: 0x11BFDD0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OVRInput::OVRControllerBase::VirtualAxis2DMap* New_ctor();
  }; // OVRInput/OVRControllerBase/VirtualAxis2DMap
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis2DMap");
#pragma pack(pop)
