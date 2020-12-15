// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVRNotifications
#include "Valve/VR/IVRNotifications.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EVRNotificationError
  struct EVRNotificationError;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRNotifications/_RemoveNotification
  class IVRNotifications::_RemoveNotification : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18ED760
    static IVRNotifications::_RemoveNotification* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public Valve.VR.EVRNotificationError Invoke(System.UInt32 notificationId)
    // Offset: 0x18ED774
    Valve::VR::EVRNotificationError Invoke(uint notificationId);
    // public System.IAsyncResult BeginInvoke(System.UInt32 notificationId, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18ED9E8
    System::IAsyncResult* BeginInvoke(uint notificationId, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVRNotificationError EndInvoke(System.IAsyncResult result)
    // Offset: 0x18EDA74
    Valve::VR::EVRNotificationError EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRNotifications/_RemoveNotification
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRNotifications::_RemoveNotification*, "Valve.VR", "IVRNotifications/_RemoveNotification");
#pragma pack(pop)