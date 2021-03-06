// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Diagnostics.Tracing.EventSource
#include "System/Diagnostics/Tracing/EventSource.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: GCHandle
  struct GCHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x49
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Diagnostics.Tracing.DataCollector
  // [] Offset: FFFFFFFF
  struct DataCollector/*, public System::ValueType*/ {
    public:
    // private System.Byte* scratchEnd
    // Size: 0x8
    // Offset: 0x0
    uint8_t* scratchEnd;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Diagnostics.Tracing.EventSource/EventData* datasEnd
    // Size: 0x8
    // Offset: 0x8
    System::Diagnostics::Tracing::EventSource::EventData* datasEnd;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventSource::EventData*) == 0x8);
    // private System.Runtime.InteropServices.GCHandle* pinsEnd
    // Size: 0x8
    // Offset: 0x10
    System::Runtime::InteropServices::GCHandle* pinsEnd;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::GCHandle*) == 0x8);
    // private System.Diagnostics.Tracing.EventSource/EventData* datasStart
    // Size: 0x8
    // Offset: 0x18
    System::Diagnostics::Tracing::EventSource::EventData* datasStart;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventSource::EventData*) == 0x8);
    // private System.Byte* scratch
    // Size: 0x8
    // Offset: 0x20
    uint8_t* scratch;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Diagnostics.Tracing.EventSource/EventData* datas
    // Size: 0x8
    // Offset: 0x28
    System::Diagnostics::Tracing::EventSource::EventData* datas;
    // Field size check
    static_assert(sizeof(System::Diagnostics::Tracing::EventSource::EventData*) == 0x8);
    // private System.Runtime.InteropServices.GCHandle* pins
    // Size: 0x8
    // Offset: 0x30
    System::Runtime::InteropServices::GCHandle* pins;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::GCHandle*) == 0x8);
    // private System.Byte[] buffer
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* buffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 bufferPos
    // Size: 0x4
    // Offset: 0x40
    int bufferPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 bufferNesting
    // Size: 0x4
    // Offset: 0x44
    int bufferNesting;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean writingScalars
    // Size: 0x1
    // Offset: 0x48
    bool writingScalars;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: DataCollector
    constexpr DataCollector(uint8_t* scratchEnd_ = {}, System::Diagnostics::Tracing::EventSource::EventData* datasEnd_ = {}, System::Runtime::InteropServices::GCHandle* pinsEnd_ = {}, System::Diagnostics::Tracing::EventSource::EventData* datasStart_ = {}, uint8_t* scratch_ = {}, System::Diagnostics::Tracing::EventSource::EventData* datas_ = {}, System::Runtime::InteropServices::GCHandle* pins_ = {}, ::Array<uint8_t>* buffer_ = {}, int bufferPos_ = {}, int bufferNesting_ = {}, bool writingScalars_ = {}) noexcept : scratchEnd{scratchEnd_}, datasEnd{datasEnd_}, pinsEnd{pinsEnd_}, datasStart{datasStart_}, scratch{scratch_}, datas{datas_}, pins{pins_}, buffer{buffer_}, bufferPos{bufferPos_}, bufferNesting{bufferNesting_}, writingScalars{writingScalars_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // [ThreadStaticAttribute] Offset: 0xCAFC8C
    // Get static field: static System.Diagnostics.Tracing.DataCollector ThreadInstance
    static System::Diagnostics::Tracing::DataCollector _get_ThreadInstance();
    // Set static field: static System.Diagnostics.Tracing.DataCollector ThreadInstance
    static void _set_ThreadInstance(System::Diagnostics::Tracing::DataCollector value);
    // System.Void Enable(System.Byte* scratch, System.Int32 scratchSize, System.Diagnostics.Tracing.EventSource/EventData* datas, System.Int32 dataCount, System.Runtime.InteropServices.GCHandle* pins, System.Int32 pinCount)
    // Offset: 0xE075C0
    void Enable(uint8_t* scratch, int scratchSize, System::Diagnostics::Tracing::EventSource::EventData* datas, int dataCount, System::Runtime::InteropServices::GCHandle* pins, int pinCount);
    // System.Void Disable()
    // Offset: 0xE075E4
    void Disable();
    // System.Diagnostics.Tracing.EventSource/EventData* Finish()
    // Offset: 0xE075F4
    System::Diagnostics::Tracing::EventSource::EventData* Finish();
    // System.Void AddScalar(System.Void* value, System.Int32 size)
    // Offset: 0xE0761C
    void AddScalar(void* value, int size);
    // System.Void AddBinary(System.String value, System.Int32 size)
    // Offset: 0xE07624
    void AddBinary(::Il2CppString* value, int size);
    // System.Void AddBinary(System.Array value, System.Int32 size)
    // Offset: 0xE0762C
    void AddBinary(System::Array* value, int size);
    // System.Void AddArray(System.Array value, System.Int32 length, System.Int32 itemSize)
    // Offset: 0xE07638
    void AddArray(System::Array* value, int length, int itemSize);
    // System.Int32 BeginBufferedArray()
    // Offset: 0xE07640
    int BeginBufferedArray();
    // System.Void EndBufferedArray(System.Int32 bookmark, System.Int32 count)
    // Offset: 0xE0767C
    void EndBufferedArray(int bookmark, int count);
    // System.Void BeginBuffered()
    // Offset: 0xE07684
    void BeginBuffered();
    // System.Void EndBuffered()
    // Offset: 0xE076B4
    void EndBuffered();
    // private System.Void EnsureBuffer()
    // Offset: 0xE076BC
    void EnsureBuffer();
    // private System.Void EnsureBuffer(System.Int32 additionalSize)
    // Offset: 0xE076E0
    void EnsureBuffer(int additionalSize);
    // private System.Void GrowBuffer(System.Int32 required)
    // Offset: 0xE07708
    void GrowBuffer(int required);
    // private System.Void PinArray(System.Object value, System.Int32 size)
    // Offset: 0xE07710
    void PinArray(::Il2CppObject* value, int size);
    // private System.Void ScalarsBegin()
    // Offset: 0xE07718
    void ScalarsBegin();
    // private System.Void ScalarsEnd()
    // Offset: 0xE07720
    void ScalarsEnd();
  }; // System.Diagnostics.Tracing.DataCollector
  #pragma pack(pop)
  static check_size<sizeof(DataCollector), 72 + sizeof(bool)> __System_Diagnostics_Tracing_DataCollectorSizeCheck;
  static_assert(sizeof(DataCollector) == 0x49);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::DataCollector, "System.Diagnostics.Tracing", "DataCollector");
