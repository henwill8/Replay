// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: KeyboardShortcutsManager
#include "GlobalNamespace/KeyboardShortcutsManager.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: KeyboardShortcutsManager/KeyboardShortcut
  class KeyboardShortcutsManager::KeyboardShortcut : public ::Il2CppObject {
    public:
    // public UnityEngine.KeyCode mainKey
    // Offset: 0x10
    UnityEngine::KeyCode mainKey;
    // public UnityEngine.KeyCode combinationKey1
    // Offset: 0x14
    UnityEngine::KeyCode combinationKey1;
    // public UnityEngine.KeyCode combinationKey2
    // Offset: 0x18
    UnityEngine::KeyCode combinationKey2;
    // public System.Void .ctor(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, UnityEngine.KeyCode combinationKey2)
    // Offset: 0x1037288
    static KeyboardShortcutsManager::KeyboardShortcut* New_ctor(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2);
    // public override System.Int32 GetHashCode()
    // Offset: 0x10376F0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1037704
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // KeyboardShortcutsManager/KeyboardShortcut
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, "", "KeyboardShortcutsManager/KeyboardShortcut");
#pragma pack(pop)
