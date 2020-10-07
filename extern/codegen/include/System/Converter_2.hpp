// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Converter`2
  template<typename TInput, typename TOutput>
  class Converter_2 : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFF
    static Converter_2<TInput, TOutput>* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      return THROW_UNLESS((il2cpp_utils::New<Converter_2<TInput, TOutput>*>(object, method)));
    }
    // public TOutput Invoke(TInput input)
    // Offset: 0xFFFFFFFF
    TOutput Invoke(TInput input) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TOutput>(this, "Invoke", input));
    }
    // public System.IAsyncResult BeginInvoke(TInput input, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFFFFFFFF
    System::IAsyncResult* BeginInvoke(TInput input, System::AsyncCallback* callback, ::Il2CppObject* object) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", input, callback, object));
    }
    // public TOutput EndInvoke(System.IAsyncResult result)
    // Offset: 0xFFFFFFFF
    TOutput EndInvoke(System::IAsyncResult* result) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TOutput>(this, "EndInvoke", result));
    }
  }; // System.Converter`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Converter_2, "System", "Converter`2");
#pragma pack(pop)
