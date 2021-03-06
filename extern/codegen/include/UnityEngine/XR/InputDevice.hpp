// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.InputDevice
  // [] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: CE02B0
  // [NativeConditionalAttribute] Offset: CE02B0
  struct InputDevice/*, public System::ValueType, public System::IEquatable_1<UnityEngine::XR::InputDevice>*/ {
    public:
    // private System.UInt64 m_DeviceId
    // Size: 0x8
    // Offset: 0x0
    uint64_t m_DeviceId;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.Boolean m_Initialized
    // Size: 0x1
    // Offset: 0x8
    bool m_Initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InputDevice
    constexpr InputDevice(uint64_t m_DeviceId_ = {}, bool m_Initialized_ = {}) noexcept : m_DeviceId{m_DeviceId_}, m_Initialized{m_Initialized_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::XR::InputDevice>
    operator System::IEquatable_1<UnityEngine::XR::InputDevice>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::XR::InputDevice>*>(this);
    }
    // System.Void .ctor(System.UInt64 deviceId)
    // Offset: 0xE30CF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    InputDevice(uint64_t deviceId) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::XR::InputDevice::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(deviceId)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, deviceId);
    }
    // private System.UInt64 get_deviceId()
    // Offset: 0xE30D00
    uint64_t get_deviceId();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xE30D18
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(UnityEngine.XR.InputDevice other)
    // Offset: 0xE30D20
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.XR.InputDevice other)
    bool Equals(UnityEngine::XR::InputDevice other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xE30D48
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.XR.InputDevice
  #pragma pack(pop)
  static check_size<sizeof(InputDevice), 8 + sizeof(bool)> __UnityEngine_XR_InputDeviceSizeCheck;
  static_assert(sizeof(InputDevice) == 0x9);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::InputDevice, "UnityEngine.XR", "InputDevice");
