// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: KeyboardShortcutsManager
  class KeyboardShortcutsManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut
    class KeyboardShortcut;
    // private System.Collections.Generic.Dictionary`2<KeyboardShortcutsManager/KeyboardShortcut,System.Collections.Generic.List`1<System.Action>> _keyboardShortcutActions
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Collections::Generic::List_1<System::Action*>*>* keyboardShortcutActions;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Update()
    // Offset: 0x1036CAC
    void Update();
    // public System.Void RemoveKeyboardShortcuts(System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action> shortcutActions)
    // Offset: 0x1036F3C
    void RemoveKeyboardShortcuts(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, System::Action*>* shortcutActions);
    // public System.Void RemoveKeyboardShortcuts(System.Collections.Generic.Dictionary`2<KeyboardShortcutsManager/KeyboardShortcut,System.Action> shortcutActions)
    // Offset: 0x1037058
    void RemoveKeyboardShortcuts(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Action*>* shortcutActions);
    // public System.Void RemoveKeyboardShortcut(KeyboardShortcutsManager/KeyboardShortcut keyboardShortcut, System.Action callback)
    // Offset: 0x1037158
    void RemoveKeyboardShortcut(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut* keyboardShortcut, System::Action* callback);
    // public System.Void RemoveKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, UnityEngine.KeyCode combinationKey2, System.Action callback)
    // Offset: 0x10371F8
    void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2, System::Action* callback);
    // public System.Void RemoveKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, System.Action callback)
    // Offset: 0x10372C8
    void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, System::Action* callback);
    // public System.Void RemoveKeyboardShortcut(UnityEngine.KeyCode mainKey, System.Action callback)
    // Offset: 0x1037048
    void RemoveKeyboardShortcut(UnityEngine::KeyCode mainKey, System::Action* callback);
    // public System.Void AddKeyboardShortcuts(System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action> shortcutActions)
    // Offset: 0x10372D4
    void AddKeyboardShortcuts(System::Collections::Generic::Dictionary_2<UnityEngine::KeyCode, System::Action*>* shortcutActions);
    // public System.Void AddKeyboardShortcuts(System.Collections.Generic.Dictionary`2<KeyboardShortcutsManager/KeyboardShortcut,System.Action> shortcutActions)
    // Offset: 0x10373F0
    void AddKeyboardShortcuts(System::Collections::Generic::Dictionary_2<GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut*, System::Action*>* shortcutActions);
    // public System.Void AddKeyboardShortcut(KeyboardShortcutsManager/KeyboardShortcut keyboardShortcut, System.Action callback)
    // Offset: 0x10374F0
    void AddKeyboardShortcut(GlobalNamespace::KeyboardShortcutsManager::KeyboardShortcut* keyboardShortcut, System::Action* callback);
    // public System.Void AddKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, UnityEngine.KeyCode combinationKey2, System.Action callback)
    // Offset: 0x10375D8
    void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, UnityEngine::KeyCode combinationKey2, System::Action* callback);
    // public System.Void AddKeyboardShortcut(UnityEngine.KeyCode mainKey, UnityEngine.KeyCode combinationKey1, System.Action callback)
    // Offset: 0x1037668
    void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, UnityEngine::KeyCode combinationKey1, System::Action* callback);
    // public System.Void AddKeyboardShortcut(UnityEngine.KeyCode mainKey, System.Action callback)
    // Offset: 0x10373E0
    void AddKeyboardShortcut(UnityEngine::KeyCode mainKey, System::Action* callback);
    // public System.Void .ctor()
    // Offset: 0x1037674
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static KeyboardShortcutsManager* New_ctor();
  }; // KeyboardShortcutsManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KeyboardShortcutsManager*, "", "KeyboardShortcutsManager");
#pragma pack(pop)
