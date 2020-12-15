// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message/MessageType
#include "Oculus/Platform/Message.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request
  class Request;
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
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Callback
  class Callback : public ::Il2CppObject {
    public:
    // Nested type: Oculus::Platform::Callback::RequestCallback
    class RequestCallback;
    // Nested type: Oculus::Platform::Callback::RequestCallback_1<T>
    template<typename T>
    class RequestCallback_1;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.UInt64,Oculus.Platform.Request> requestIDsToRequests
    static System::Collections::Generic::Dictionary_2<uint64_t, Oculus::Platform::Request*>* _get_requestIDsToRequests();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.UInt64,Oculus.Platform.Request> requestIDsToRequests
    static void _set_requestIDsToRequests(System::Collections::Generic::Dictionary_2<uint64_t, Oculus::Platform::Request*>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<Oculus.Platform.Message/MessageType,Oculus.Platform.Callback/RequestCallback> notificationCallbacks
    static System::Collections::Generic::Dictionary_2<Oculus::Platform::Message::MessageType, Oculus::Platform::Callback::RequestCallback*>* _get_notificationCallbacks();
    // Set static field: static private System.Collections.Generic.Dictionary`2<Oculus.Platform.Message/MessageType,Oculus.Platform.Callback/RequestCallback> notificationCallbacks
    static void _set_notificationCallbacks(System::Collections::Generic::Dictionary_2<Oculus::Platform::Message::MessageType, Oculus::Platform::Callback::RequestCallback*>* value);
    // Get static field: static private System.Boolean hasRegisteredRoomInviteNotificationHandler
    static bool _get_hasRegisteredRoomInviteNotificationHandler();
    // Set static field: static private System.Boolean hasRegisteredRoomInviteNotificationHandler
    static void _set_hasRegisteredRoomInviteNotificationHandler(bool value);
    // Get static field: static private System.Collections.Generic.List`1<Oculus.Platform.Message> pendingRoomInviteNotifications
    static System::Collections::Generic::List_1<Oculus::Platform::Message*>* _get_pendingRoomInviteNotifications();
    // Set static field: static private System.Collections.Generic.List`1<Oculus.Platform.Message> pendingRoomInviteNotifications
    static void _set_pendingRoomInviteNotifications(System::Collections::Generic::List_1<Oculus::Platform::Message*>* value);
    // static System.Void SetNotificationCallback(Oculus.Platform.Message/MessageType type, Oculus.Platform.Message`1/Callback<T> callback)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void SetNotificationCallback(Oculus::Platform::Message::MessageType type, typename Oculus::Platform::Message_1<T>::Callback* callback) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("Oculus.Platform", "Callback", "SetNotificationCallback", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, type, callback));
    }
    // static System.Void SetNotificationCallback(Oculus.Platform.Message/MessageType type, Oculus.Platform.Message/Callback callback)
    // Offset: 0x11CDF08
    static void SetNotificationCallback(Oculus::Platform::Message::MessageType type, Oculus::Platform::Message::Callback* callback);
    // static System.Void AddRequest(Oculus.Platform.Request request)
    // Offset: 0x11CE040
    static void AddRequest(Oculus::Platform::Request* request);
    // static System.Void RunCallbacks()
    // Offset: 0x11CE110
    static void RunCallbacks();
    // static System.Void RunLimitedCallbacks(System.UInt32 limit)
    // Offset: 0x11CE42C
    static void RunLimitedCallbacks(uint limit);
    // static System.Void OnApplicationQuit()
    // Offset: 0x11CE4C4
    static void OnApplicationQuit();
    // static private System.Void FlushRoomInviteNotificationQueue()
    // Offset: 0x11CE560
    static void FlushRoomInviteNotificationQueue();
    // static System.Void HandleMessage(Oculus.Platform.Message msg)
    // Offset: 0x11CE280
    static void HandleMessage(Oculus::Platform::Message* msg);
    // static private System.Void .cctor()
    // Offset: 0x11CE6D4
    static void _cctor();
  }; // Oculus.Platform.Callback
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Callback*, "Oculus.Platform", "Callback");
#pragma pack(pop)