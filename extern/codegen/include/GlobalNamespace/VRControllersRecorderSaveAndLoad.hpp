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
  // Forward declaring type: VRControllersRecorderSaveData
  class VRControllersRecorderSaveData;
  // Forward declaring type: VRControllersRecorderData
  class VRControllersRecorderData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextAsset
  class TextAsset;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRControllersRecorderSaveAndLoad
  class VRControllersRecorderSaveAndLoad : public ::Il2CppObject {
    public:
    // static private VRControllersRecorderSaveData LoadSaveDataFromFile(System.String filePath)
    // Offset: 0x19742A8
    static GlobalNamespace::VRControllersRecorderSaveData* LoadSaveDataFromFile(::Il2CppString* filePath);
    // static private VRControllersRecorderSaveData LoadSaveDataFromTextAsset(UnityEngine.TextAsset textAsset)
    // Offset: 0x19744B0
    static GlobalNamespace::VRControllersRecorderSaveData* LoadSaveDataFromTextAsset(UnityEngine::TextAsset* textAsset);
    // static public System.Void LoadFromFile(System.String filePath, VRControllersRecorderData data)
    // Offset: 0x19745A4
    static void LoadFromFile(::Il2CppString* filePath, GlobalNamespace::VRControllersRecorderData* data);
    // static public System.Void SaveToFile(System.String filePath, VRControllersRecorderData data)
    // Offset: 0x197482C
    static void SaveToFile(::Il2CppString* filePath, GlobalNamespace::VRControllersRecorderData* data);
  }; // VRControllersRecorderSaveAndLoad
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRControllersRecorderSaveAndLoad*, "", "VRControllersRecorderSaveAndLoad");
#pragma pack(pop)
