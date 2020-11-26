// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.InteropServices.ExternalException
#include "System/Runtime/InteropServices/ExternalException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Autogenerated type: System.ComponentModel.Win32Exception
  class Win32Exception : public System::Runtime::InteropServices::ExternalException {
    public:
    // private readonly System.Int32 nativeErrorCode
    // Offset: 0x88
    int nativeErrorCode;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return nativeErrorCode;
    }
    // Get static field: static private System.Boolean s_ErrorMessagesInitialized
    static bool _get_s_ErrorMessagesInitialized();
    // Set static field: static private System.Boolean s_ErrorMessagesInitialized
    static void _set_s_ErrorMessagesInitialized(bool value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.String> s_ErrorMessage
    static System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* _get_s_ErrorMessage();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,System.String> s_ErrorMessage
    static void _set_s_ErrorMessage(System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* value);
    // public System.Void .ctor(System.Int32 error)
    // Offset: 0x1481DB8
    static Win32Exception* New_ctor(int error);
    // public System.Void .ctor(System.Int32 error, System.String message)
    // Offset: 0x1481F58
    static Win32Exception* New_ctor(int error, ::Il2CppString* message);
    // public System.Int32 get_NativeErrorCode()
    // Offset: 0x1482020
    int get_NativeErrorCode();
    // static System.String GetErrorMessage(System.Int32 error)
    // Offset: 0x1481E40
    static ::Il2CppString* GetErrorMessage(int error);
    // static private System.Void InitializeErrorMessages()
    // Offset: 0x14820F4
    static void InitializeErrorMessages();
    // public System.Void .ctor()
    // Offset: 0x1481D48
    // Implemented from: System.Runtime.InteropServices.ExternalException
    // Base method: System.Void ExternalException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static Win32Exception* New_ctor();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1481F88
    // Implemented from: System.Runtime.InteropServices.ExternalException
    // Base method: System.Void ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static Win32Exception* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1482028
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static private System.Void .cctor()
    // Offset: 0x1483238
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.cctor()
    static void _cctor();
  }; // System.ComponentModel.Win32Exception
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Win32Exception*, "System.ComponentModel", "Win32Exception");
#pragma pack(pop)
