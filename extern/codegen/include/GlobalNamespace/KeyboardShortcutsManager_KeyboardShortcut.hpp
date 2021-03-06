// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: KeyboardShortcutsManager
#include "GlobalNamespace/KeyboardShortcutsManager.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: KeyboardShortcutsManager/KeyboardShortcut
  // [] Offset: FFFFFFFF
  class KeyboardShortcutsManager::KeyboardShortcut : public ::Il2CppObject {
    public:
    // public UnityEngine.KeyCode mainKey
    // Size: 0x4
    // Offset: 0x10
    UnityEngine::KeyCode mainKey;
    // Field size check
    static_assert(sizeof(UnityEngine::KeyCode) == 0x4);
    // public UnityEngine.KeyCode combinationKey1
    // Size: 0x4
    // Offset: 0x14
    UnityEngine::KeyCode combinationKey1;
    // Field size check
    static_assert(sizeof(UnityEngine::KeyCode) == 0x4);
    // public UnityEngine.KeyCode combinationKey2
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::KeyCode combinationKey2;
    // Field size check
    static_assert(sizeof(UnityEngine::KeyCode) == 0x4);
    // Creating value type constructor for type: KeyboardShortcut
    KeyboardShortcut(UnityEngine::KeyCode mainKey_ = {}, UnityEngine::KeyCode combinationKey1_ = {}, UnityEngine::KeyCode combinationKey2_ = {}) noexcept : mainKey{mainKey_}, combinationKey1{combinationKey1_}, combinationKey2{combinationKey2_} {}
    // public System.Void .ctor(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, UnityEngine.KeyCode combinationKey2)
    // Offset: 0x1110C18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KeyboardShortcutsManager::KeyboardShortcut* New_ctor(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KeyboardShortcutsManager::KeyboardShortcut*, creationType>(mainKey, combinationKey1, combinationKey2)));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x1111080
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1111094
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // KeyboardShortcutsManager/KeyboardShortcut
  #pragma pack(pop)
  static check_size<sizeof(KeyboardShortcutsManager::KeyboardShortcut), 24 + sizeof(UnityEngine::KeyCode)> __GlobalNamespace_KeyboardShortcutsManager_KeyboardShortcutSizeCheck;
  static_assert(sizeof(KeyboardShortcutsManager::KeyboardShortcut) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, "", "KeyboardShortcutsManager/KeyboardShortcut");
