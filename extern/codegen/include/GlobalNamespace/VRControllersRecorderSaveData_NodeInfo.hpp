// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRControllersRecorderSaveData
#include "GlobalNamespace/VRControllersRecorderSaveData.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersRecorderSaveData/NodeInfo
  class VRControllersRecorderSaveData::NodeInfo : public ::Il2CppObject {
    public:
    // public UnityEngine.XR.XRNode nodeType
    // Offset: 0x10
    UnityEngine::XR::XRNode nodeType;
    // public System.Int32 nodeIdx
    // Offset: 0x14
    int nodeIdx;
    // public System.Void .ctor()
    // Offset: 0x1974BFC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRControllersRecorderSaveData::NodeInfo* New_ctor();
  }; // VRControllersRecorderSaveData/NodeInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveData::NodeInfo*, "", "VRControllersRecorderSaveData/NodeInfo");
#pragma pack(pop)
