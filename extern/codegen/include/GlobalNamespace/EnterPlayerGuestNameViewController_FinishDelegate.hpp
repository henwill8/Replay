// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: EnterPlayerGuestNameViewController
#include "GlobalNamespace/EnterPlayerGuestNameViewController.hpp"
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
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EnterPlayerGuestNameViewController/FinishDelegate
  class EnterPlayerGuestNameViewController::FinishDelegate : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1A60578
    static EnterPlayerGuestNameViewController::FinishDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(EnterPlayerGuestNameViewController viewController, System.String playerName)
    // Offset: 0x1A60010
    void Invoke(GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::Il2CppString* playerName);
    // public System.IAsyncResult BeginInvoke(EnterPlayerGuestNameViewController viewController, System.String playerName, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1A6058C
    System::IAsyncResult* BeginInvoke(GlobalNamespace::EnterPlayerGuestNameViewController* viewController, ::Il2CppString* playerName, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1A605BC
    void EndInvoke(System::IAsyncResult* result);
  }; // EnterPlayerGuestNameViewController/FinishDelegate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate*, "", "EnterPlayerGuestNameViewController/FinishDelegate");
#pragma pack(pop)