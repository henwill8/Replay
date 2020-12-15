// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
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
// Type namespace: Mono
namespace Mono {
  // Autogenerated type: Mono.RuntimeStructs/GPtrArray
  struct RuntimeStructs::GPtrArray : public System::ValueType {
    public:
    // System.IntPtr* data
    // Offset: 0x0
    System::IntPtr* data;
    // System.Int32 len
    // Offset: 0x8
    int len;
    // Creating value type constructor for type: GPtrArray
    constexpr GPtrArray(System::IntPtr* data_ = {}, int len_ = {}) noexcept : data{data_}, len{len_} {}
  }; // Mono.RuntimeStructs/GPtrArray
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::RuntimeStructs::GPtrArray, "Mono", "RuntimeStructs/GPtrArray");
#pragma pack(pop)