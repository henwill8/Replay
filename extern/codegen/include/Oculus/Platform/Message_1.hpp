// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Skipping declaration: Callback because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Message`1
  template<typename T>
  class Message_1 : public Oculus::Platform::Message {
    public:
    // Nested type: Oculus::Platform::Message_1::Callback<T>
    class Callback;
    // Autogenerated type: Oculus.Platform.Message`1/Callback
    class Callback : public System::MulticastDelegate, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = Message_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Callback";
      // public System.Void .ctor(System.Object object, System.IntPtr method)
      // Offset: 0xFFFFFFFF
      static typename Message_1<T>::Callback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
        return THROW_UNLESS(il2cpp_utils::New<typename Message_1<T>::Callback*>(object, method));
      }
      // public System.Void Invoke(Oculus.Platform.Message`1<T> message)
      // Offset: 0xFFFFFFFF
      void Invoke(Oculus::Platform::Message_1<T>* message) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", message));
      }
      // public System.IAsyncResult BeginInvoke(Oculus.Platform.Message`1<T> message, System.AsyncCallback callback, System.Object object)
      // Offset: 0xFFFFFFFF
      System::IAsyncResult* BeginInvoke(Oculus::Platform::Message_1<T>* message, System::AsyncCallback* callback, ::Il2CppObject* object) {
        return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", message, callback, object));
      }
      // public System.Void EndInvoke(System.IAsyncResult result)
      // Offset: 0xFFFFFFFF
      void EndInvoke(System::IAsyncResult* result) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
      }
    }; // Oculus.Platform.Message`1/Callback
    // private T data
    // Offset: 0x0
    T data;
    // public T get_Data()
    // Offset: 0xFFFFFFFF
    T get_Data() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_Data"));
    }
    // protected T GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0xFFFFFFFF
    T GetDataFromMessage(System::IntPtr c_message) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "GetDataFromMessage", c_message));
    }
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0xFFFFFFFF
    // Implemented from: Oculus.Platform.Message
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static Message_1<T>* New_ctor(System::IntPtr c_message) {
      return THROW_UNLESS(il2cpp_utils::New<Message_1<T>*>(c_message));
    }
  }; // Oculus.Platform.Message`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Oculus::Platform::Message_1, "Oculus.Platform", "Message`1");
#pragma pack(pop)
