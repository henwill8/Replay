// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayModifiersModelSO
#include "GlobalNamespace/GameplayModifiersModelSO.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayModifiersModelSO/GameplayModifierBoolGetter
  class GameplayModifiersModelSO::GameplayModifierBoolGetter : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xF0EAC8
    static GameplayModifiersModelSO::GameplayModifierBoolGetter* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(GameplayModifiers gameplayModifiers)
    // Offset: 0xF0EDB4
    bool Invoke(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.IAsyncResult BeginInvoke(GameplayModifiers gameplayModifiers, System.AsyncCallback callback, System.Object object)
    // Offset: 0xF0F7A8
    System::IAsyncResult* BeginInvoke(GlobalNamespace::GameplayModifiers* gameplayModifiers, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0xF0F7CC
    bool EndInvoke(System::IAsyncResult* result);
  }; // GameplayModifiersModelSO/GameplayModifierBoolGetter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersModelSO::GameplayModifierBoolGetter*, "", "GameplayModifiersModelSO/GameplayModifierBoolGetter");
#pragma pack(pop)