// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ConnectionErrorDialogViewController
#include "GlobalNamespace/ConnectionErrorDialogViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ConnectionErrorDialogViewController/<>c__DisplayClass0_0
  class ConnectionErrorDialogViewController::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Action buttonAction
    // Offset: 0x10
    System::Action* buttonAction;
    // Creating conversion operator: operator System::Action*
    constexpr operator System::Action*() const noexcept {
      return buttonAction;
    }
    // System.Void <Init>b__0(System.Int32 btnIdx)
    // Offset: 0x1A53DDC
    void $Init$b__0(int btnIdx);
    // public System.Void .ctor()
    // Offset: 0x1A53CE8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConnectionErrorDialogViewController::$$c__DisplayClass0_0* New_ctor();
  }; // ConnectionErrorDialogViewController/<>c__DisplayClass0_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ConnectionErrorDialogViewController::$$c__DisplayClass0_0*, "", "ConnectionErrorDialogViewController/<>c__DisplayClass0_0");
#pragma pack(pop)
