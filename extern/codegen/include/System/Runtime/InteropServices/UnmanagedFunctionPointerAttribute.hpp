// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.InteropServices.CallingConvention
#include "System/Runtime/InteropServices/CallingConvention.hpp"
// Including type: System.Runtime.InteropServices.CharSet
#include "System/Runtime/InteropServices/CharSet.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x1B
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: CAC42C
  // [ComVisibleAttribute] Offset: CAC42C
  class UnmanagedFunctionPointerAttribute : public System::Attribute {
    public:
    // private System.Runtime.InteropServices.CallingConvention m_callingConvention
    // Size: 0x4
    // Offset: 0x10
    System::Runtime::InteropServices::CallingConvention m_callingConvention;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::CallingConvention) == 0x4);
    // public System.Runtime.InteropServices.CharSet CharSet
    // Size: 0x4
    // Offset: 0x14
    System::Runtime::InteropServices::CharSet CharSet;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::CharSet) == 0x4);
    // public System.Boolean BestFitMapping
    // Size: 0x1
    // Offset: 0x18
    bool BestFitMapping;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean ThrowOnUnmappableChar
    // Size: 0x1
    // Offset: 0x19
    bool ThrowOnUnmappableChar;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean SetLastError
    // Size: 0x1
    // Offset: 0x1A
    bool SetLastError;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: UnmanagedFunctionPointerAttribute
    UnmanagedFunctionPointerAttribute(System::Runtime::InteropServices::CallingConvention m_callingConvention_ = {}, System::Runtime::InteropServices::CharSet CharSet_ = {}, bool BestFitMapping_ = {}, bool ThrowOnUnmappableChar_ = {}, bool SetLastError_ = {}) noexcept : m_callingConvention{m_callingConvention_}, CharSet{CharSet_}, BestFitMapping{BestFitMapping_}, ThrowOnUnmappableChar{ThrowOnUnmappableChar_}, SetLastError{SetLastError_} {}
    // public System.Void .ctor(System.Runtime.InteropServices.CallingConvention callingConvention)
    // Offset: 0x130CD8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnmanagedFunctionPointerAttribute* New_ctor(System::Runtime::InteropServices::CallingConvention callingConvention) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnmanagedFunctionPointerAttribute*, creationType>(callingConvention)));
    }
  }; // System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
  #pragma pack(pop)
  static check_size<sizeof(UnmanagedFunctionPointerAttribute), 26 + sizeof(bool)> __System_Runtime_InteropServices_UnmanagedFunctionPointerAttributeSizeCheck;
  static_assert(sizeof(UnmanagedFunctionPointerAttribute) == 0x1B);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::UnmanagedFunctionPointerAttribute*, "System.Runtime.InteropServices", "UnmanagedFunctionPointerAttribute");
