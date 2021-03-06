// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class NativeArrayUnsafeUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NativeArrayUnsafeUtility
    NativeArrayUnsafeUtility() noexcept {}
    // static public Unity.Collections.NativeArray`1<T> ConvertExistingDataToNativeArray(System.Void* dataPointer, System.Int32 length, Unity.Collections.Allocator allocator)
    // Offset: 0xFFFFFFFF
    template<class T>
    static Unity::Collections::NativeArray_1<T> ConvertExistingDataToNativeArray(void* dataPointer, int length, Unity::Collections::Allocator allocator) {
      static_assert(is_value_type_v<T>);
      static auto ___internal__logger = ::Logger::get().WithContext("Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Unity.Collections.LowLevel.Unsafe", "NativeArrayUnsafeUtility", "ConvertExistingDataToNativeArray", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(dataPointer, length, allocator)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Unity::Collections::NativeArray_1<T>, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, dataPointer, length, allocator);
    }
  }; // Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Unity::Collections::LowLevel::Unsafe::NativeArrayUnsafeUtility*, "Unity.Collections.LowLevel.Unsafe", "NativeArrayUnsafeUtility");
