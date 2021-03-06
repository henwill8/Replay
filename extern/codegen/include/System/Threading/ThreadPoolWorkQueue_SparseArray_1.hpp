// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.ThreadPoolWorkQueue
#include "System/Threading/ThreadPoolWorkQueue.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.ThreadPoolWorkQueue/SparseArray`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class ThreadPoolWorkQueue::SparseArray_1 : public ::Il2CppObject {
    public:
    // private T[] m_array
    // Size: 0x8
    // Offset: 0x0
    ::Array<T>* m_array;
    // Field size check
    static_assert(sizeof(::Array<T>*) == 0x8);
    // Creating value type constructor for type: SparseArray_1
    SparseArray_1(::Array<T>* m_array_ = {}) noexcept : m_array{m_array_} {}
    // Creating conversion operator: operator ::Array<T>*
    constexpr operator ::Array<T>*() const noexcept {
      return m_array;
    }
    // System.Void .ctor(System.Int32 initialSize)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ThreadPoolWorkQueue::SparseArray_1<T>* New_ctor(int initialSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::SparseArray_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ThreadPoolWorkQueue::SparseArray_1<T>*, creationType>(initialSize)));
    }
    // T[] get_Current()
    // Offset: 0xFFFFFFFF
    ::Array<T>* get_Current() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::SparseArray_1::get_Current");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Current", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___internal__method);
    }
    // System.Int32 Add(T e)
    // Offset: 0xFFFFFFFF
    int Add(T e) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::SparseArray_1::Add");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(e)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, e);
    }
    // System.Void Remove(T e)
    // Offset: 0xFFFFFFFF
    void Remove(T e) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ThreadPoolWorkQueue::SparseArray_1::Remove");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(e)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, e);
    }
  }; // System.Threading.ThreadPoolWorkQueue/SparseArray`1
  // Could not write size check! Type: System.Threading.ThreadPoolWorkQueue/SparseArray`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::ThreadPoolWorkQueue::SparseArray_1, "System.Threading", "ThreadPoolWorkQueue/SparseArray`1");
