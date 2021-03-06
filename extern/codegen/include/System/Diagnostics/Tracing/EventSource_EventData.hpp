// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Diagnostics.Tracing.EventSource/EventData
  // [] Offset: FFFFFFFF
  struct EventSource::EventData/*, public System::ValueType*/ {
    public:
    // System.Int64 m_Ptr
    // Size: 0x8
    // Offset: 0x0
    int64_t m_Ptr;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // System.Int32 m_Size
    // Size: 0x4
    // Offset: 0x8
    int m_Size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 m_Reserved
    // Size: 0x4
    // Offset: 0xC
    int m_Reserved;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EventData
    constexpr EventData(int64_t m_Ptr_ = {}, int m_Size_ = {}, int m_Reserved_ = {}) noexcept : m_Ptr{m_Ptr_}, m_Size{m_Size_}, m_Reserved{m_Reserved_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.IntPtr get_DataPointer()
    // Offset: 0xE07858
    System::IntPtr get_DataPointer();
    // public System.Void set_DataPointer(System.IntPtr value)
    // Offset: 0xE07864
    void set_DataPointer(System::IntPtr value);
    // public System.Void set_Size(System.Int32 value)
    // Offset: 0xE07890
    void set_Size(int value);
    // System.Void SetMetadata(System.Byte* pointer, System.Int32 size, System.Int32 reserved)
    // Offset: 0xE07898
    void SetMetadata(uint8_t* pointer, int size, int reserved);
  }; // System.Diagnostics.Tracing.EventSource/EventData
  #pragma pack(pop)
  static check_size<sizeof(EventSource::EventData), 12 + sizeof(int)> __System_Diagnostics_Tracing_EventSource_EventDataSizeCheck;
  static_assert(sizeof(EventSource::EventData) == 0x10);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventSource::EventData, "System.Diagnostics.Tracing", "EventSource/EventData");
