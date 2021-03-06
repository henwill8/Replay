// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.XR.InputDevice
#include "UnityEngine/XR/InputDevice.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: ConnectionChangeType
  struct ConnectionChangeType;
}
// Completed forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.InputDevices
  // [] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: CE059C
  // [UsedByNativeCodeAttribute] Offset: CE059C
  // [StaticAccessorAttribute] Offset: CE059C
  // [NativeConditionalAttribute] Offset: CE059C
  class InputDevices : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: InputDevices
    InputDevices() noexcept {}
    // [DebuggerBrowsableAttribute] Offset: 0xCE0C7C
    // [CompilerGeneratedAttribute] Offset: 0xCE0C7C
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConnected
    static System::Action_1<UnityEngine::XR::InputDevice>* _get_deviceConnected();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConnected
    static void _set_deviceConnected(System::Action_1<UnityEngine::XR::InputDevice>* value);
    // [CompilerGeneratedAttribute] Offset: 0xCE0CB8
    // [DebuggerBrowsableAttribute] Offset: 0xCE0CB8
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceDisconnected
    static System::Action_1<UnityEngine::XR::InputDevice>* _get_deviceDisconnected();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceDisconnected
    static void _set_deviceDisconnected(System::Action_1<UnityEngine::XR::InputDevice>* value);
    // [CompilerGeneratedAttribute] Offset: 0xCE0CF4
    // [DebuggerBrowsableAttribute] Offset: 0xCE0CF4
    // Get static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConfigChanged
    static System::Action_1<UnityEngine::XR::InputDevice>* _get_deviceConfigChanged();
    // Set static field: static private System.Action`1<UnityEngine.XR.InputDevice> deviceConfigChanged
    static void _set_deviceConfigChanged(System::Action_1<UnityEngine::XR::InputDevice>* value);
    // static private System.Void InvokeConnectionEvent(System.UInt64 deviceId, UnityEngine.XR.ConnectionChangeType change)
    // Offset: 0x22C34E0
    static void InvokeConnectionEvent(uint64_t deviceId, UnityEngine::XR::ConnectionChangeType change);
  }; // UnityEngine.XR.InputDevices
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputDevices*, "UnityEngine.XR", "InputDevices");
