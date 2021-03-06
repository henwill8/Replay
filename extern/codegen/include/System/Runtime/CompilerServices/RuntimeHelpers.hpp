// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: RuntimeFieldHandle
  struct RuntimeFieldHandle;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.RuntimeHelpers
  // [] Offset: FFFFFFFF
  class RuntimeHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: RuntimeHelpers
    RuntimeHelpers() noexcept {}
    // static private System.Void InitializeArray(System.Array array, System.IntPtr fldHandle)
    // Offset: 0x1309C90
    static void InitializeArray(System::Array* array, System::IntPtr fldHandle);
    // static public System.Void InitializeArray(System.Array array, System.RuntimeFieldHandle fldHandle)
    // Offset: 0x1309C94
    static void InitializeArray(System::Array* array, System::RuntimeFieldHandle fldHandle);
    // static public System.Int32 get_OffsetToStringData()
    // Offset: 0x1309D30
    static int get_OffsetToStringData();
    // static public System.Int32 GetHashCode(System.Object o)
    // Offset: 0x1309D34
    static int GetHashCode(::Il2CppObject* o);
    // static public System.Void PrepareConstrainedRegions()
    // Offset: 0x1309D3C
    static void PrepareConstrainedRegions();
    // static public System.Boolean IsReferenceOrContainsReferences()
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool IsReferenceOrContainsReferences() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::RuntimeHelpers::IsReferenceOrContainsReferences");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "RuntimeHelpers", "IsReferenceOrContainsReferences", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes()));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method);
    }
  }; // System.Runtime.CompilerServices.RuntimeHelpers
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::RuntimeHelpers*, "System.Runtime.CompilerServices", "RuntimeHelpers");
