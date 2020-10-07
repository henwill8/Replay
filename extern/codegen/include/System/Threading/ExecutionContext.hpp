// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
  // Forward declaring type: IAsyncLocal
  class IAsyncLocal;
  // Forward declaring type: ContextCallback
  class ContextCallback;
  // Forward declaring type: ExecutionContextSwitcher
  struct ExecutionContextSwitcher;
  // Forward declaring type: Thread
  class Thread;
  // Forward declaring type: StackCrawlMark
  struct StackCrawlMark;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
  // Forward declaring type: IllogicalCallContext
  class IllogicalCallContext;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.ExecutionContext
  class ExecutionContext : public ::Il2CppObject, public System::IDisposable, public System::Runtime::Serialization::ISerializable {
    public:
    // Nested type: System::Threading::ExecutionContext::Flags
    struct Flags;
    // Nested type: System::Threading::ExecutionContext::Reader
    struct Reader;
    // Nested type: System::Threading::ExecutionContext::CaptureOptions
    struct CaptureOptions;
    // Autogenerated type: System.Threading.ExecutionContext/Flags
    struct Flags : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Flags
      constexpr Flags(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public System.Threading.ExecutionContext/Flags None
      static constexpr const int None = 0;
      // Get static field: static public System.Threading.ExecutionContext/Flags None
      static System::Threading::ExecutionContext::Flags _get_None();
      // Set static field: static public System.Threading.ExecutionContext/Flags None
      static void _set_None(System::Threading::ExecutionContext::Flags value);
      // static field const value: static public System.Threading.ExecutionContext/Flags IsNewCapture
      static constexpr const int IsNewCapture = 1;
      // Get static field: static public System.Threading.ExecutionContext/Flags IsNewCapture
      static System::Threading::ExecutionContext::Flags _get_IsNewCapture();
      // Set static field: static public System.Threading.ExecutionContext/Flags IsNewCapture
      static void _set_IsNewCapture(System::Threading::ExecutionContext::Flags value);
      // static field const value: static public System.Threading.ExecutionContext/Flags IsFlowSuppressed
      static constexpr const int IsFlowSuppressed = 2;
      // Get static field: static public System.Threading.ExecutionContext/Flags IsFlowSuppressed
      static System::Threading::ExecutionContext::Flags _get_IsFlowSuppressed();
      // Set static field: static public System.Threading.ExecutionContext/Flags IsFlowSuppressed
      static void _set_IsFlowSuppressed(System::Threading::ExecutionContext::Flags value);
      // static field const value: static public System.Threading.ExecutionContext/Flags IsPreAllocatedDefault
      static constexpr const int IsPreAllocatedDefault = 4;
      // Get static field: static public System.Threading.ExecutionContext/Flags IsPreAllocatedDefault
      static System::Threading::ExecutionContext::Flags _get_IsPreAllocatedDefault();
      // Set static field: static public System.Threading.ExecutionContext/Flags IsPreAllocatedDefault
      static void _set_IsPreAllocatedDefault(System::Threading::ExecutionContext::Flags value);
    }; // System.Threading.ExecutionContext/Flags
    // private System.Threading.SynchronizationContext _syncContext
    // Offset: 0x10
    System::Threading::SynchronizationContext* syncContext;
    // private System.Threading.SynchronizationContext _syncContextNoFlow
    // Offset: 0x18
    System::Threading::SynchronizationContext* syncContextNoFlow;
    // private System.Runtime.Remoting.Messaging.LogicalCallContext _logicalCallContext
    // Offset: 0x20
    System::Runtime::Remoting::Messaging::LogicalCallContext* logicalCallContext;
    // private System.Runtime.Remoting.Messaging.IllogicalCallContext _illogicalCallContext
    // Offset: 0x28
    System::Runtime::Remoting::Messaging::IllogicalCallContext* illogicalCallContext;
    // private System.Threading.ExecutionContext/Flags _flags
    // Offset: 0x30
    System::Threading::ExecutionContext::Flags flags;
    // private System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object> _localValues
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<System::Threading::IAsyncLocal*, ::Il2CppObject*>* localValues;
    // private System.Collections.Generic.List`1<System.Threading.IAsyncLocal> _localChangeNotifications
    // Offset: 0x40
    System::Collections::Generic::List_1<System::Threading::IAsyncLocal*>* localChangeNotifications;
    // Get static field: static private readonly System.Threading.ExecutionContext s_dummyDefaultEC
    static System::Threading::ExecutionContext* _get_s_dummyDefaultEC();
    // Set static field: static private readonly System.Threading.ExecutionContext s_dummyDefaultEC
    static void _set_s_dummyDefaultEC(System::Threading::ExecutionContext* value);
    // System.Boolean get_isNewCapture()
    // Offset: 0x13DD018
    bool get_isNewCapture();
    // System.Void set_isNewCapture(System.Boolean value)
    // Offset: 0x13DD02C
    void set_isNewCapture(bool value);
    // System.Boolean get_isFlowSuppressed()
    // Offset: 0x13DD048
    bool get_isFlowSuppressed();
    // System.Void set_isFlowSuppressed(System.Boolean value)
    // Offset: 0x13DD054
    void set_isFlowSuppressed(bool value);
    // static System.Threading.ExecutionContext get_PreAllocatedDefault()
    // Offset: 0x13DD070
    static System::Threading::ExecutionContext* get_PreAllocatedDefault();
    // System.Boolean get_IsPreAllocatedDefault()
    // Offset: 0x13DD0D8
    bool get_IsPreAllocatedDefault();
    // System.Void .ctor(System.Boolean isPreAllocatedDefault)
    // Offset: 0x13DD0EC
    static ExecutionContext* New_ctor(bool isPreAllocatedDefault);
    // static System.Object GetLocalValue(System.Threading.IAsyncLocal local)
    // Offset: 0x13DD120
    static ::Il2CppObject* GetLocalValue(System::Threading::IAsyncLocal* local);
    // static System.Void SetLocalValue(System.Threading.IAsyncLocal local, System.Object newValue, System.Boolean needChangeNotifications)
    // Offset: 0x13DD1EC
    static void SetLocalValue(System::Threading::IAsyncLocal* local, ::Il2CppObject* newValue, bool needChangeNotifications);
    // static System.Void OnAsyncLocalContextChanged(System.Threading.ExecutionContext previous, System.Threading.ExecutionContext current)
    // Offset: 0x13DD434
    static void OnAsyncLocalContextChanged(System::Threading::ExecutionContext* previous, System::Threading::ExecutionContext* current);
    // System.Runtime.Remoting.Messaging.LogicalCallContext get_LogicalCallContext()
    // Offset: 0x13DD8B4
    System::Runtime::Remoting::Messaging::LogicalCallContext* get_LogicalCallContext();
    // System.Void set_LogicalCallContext(System.Runtime.Remoting.Messaging.LogicalCallContext value)
    // Offset: 0x13DD92C
    void set_LogicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext* value);
    // System.Runtime.Remoting.Messaging.IllogicalCallContext get_IllogicalCallContext()
    // Offset: 0x13DD934
    System::Runtime::Remoting::Messaging::IllogicalCallContext* get_IllogicalCallContext();
    // System.Void set_IllogicalCallContext(System.Runtime.Remoting.Messaging.IllogicalCallContext value)
    // Offset: 0x13DD9AC
    void set_IllogicalCallContext(System::Runtime::Remoting::Messaging::IllogicalCallContext* value);
    // System.Threading.SynchronizationContext get_SynchronizationContext()
    // Offset: 0x13DD9B4
    System::Threading::SynchronizationContext* get_SynchronizationContext();
    // System.Void set_SynchronizationContext(System.Threading.SynchronizationContext value)
    // Offset: 0x13DD9BC
    void set_SynchronizationContext(System::Threading::SynchronizationContext* value);
    // System.Threading.SynchronizationContext get_SynchronizationContextNoFlow()
    // Offset: 0x13DD9C4
    System::Threading::SynchronizationContext* get_SynchronizationContextNoFlow();
    // System.Void set_SynchronizationContextNoFlow(System.Threading.SynchronizationContext value)
    // Offset: 0x13DD9CC
    void set_SynchronizationContextNoFlow(System::Threading::SynchronizationContext* value);
    // static public System.Void Run(System.Threading.ExecutionContext executionContext, System.Threading.ContextCallback callback, System.Object state)
    // Offset: 0x13DA4C0
    static void Run(System::Threading::ExecutionContext* executionContext, System::Threading::ContextCallback* callback, ::Il2CppObject* state);
    // static System.Void Run(System.Threading.ExecutionContext executionContext, System.Threading.ContextCallback callback, System.Object state, System.Boolean preserveSyncCtx)
    // Offset: 0x13DD9D8
    static void Run(System::Threading::ExecutionContext* executionContext, System::Threading::ContextCallback* callback, ::Il2CppObject* state, bool preserveSyncCtx);
    // static System.Void RunInternal(System.Threading.ExecutionContext executionContext, System.Threading.ContextCallback callback, System.Object state, System.Boolean preserveSyncCtx)
    // Offset: 0x13DDA64
    static void RunInternal(System::Threading::ExecutionContext* executionContext, System::Threading::ContextCallback* callback, ::Il2CppObject* state, bool preserveSyncCtx);
    // static System.Void EstablishCopyOnWriteScope(ref System.Threading.ExecutionContextSwitcher ecsw)
    // Offset: 0x13DE01C
    static void EstablishCopyOnWriteScope(System::Threading::ExecutionContextSwitcher& ecsw);
    // static private System.Void EstablishCopyOnWriteScope(System.Threading.Thread currentThread, System.Boolean knownNullWindowsIdentity, ref System.Threading.ExecutionContextSwitcher ecsw)
    // Offset: 0x13DDD08
    static void EstablishCopyOnWriteScope(System::Threading::Thread* currentThread, bool knownNullWindowsIdentity, System::Threading::ExecutionContextSwitcher& ecsw);
    // static System.Threading.ExecutionContextSwitcher SetExecutionContext(System.Threading.ExecutionContext executionContext, System.Boolean preserveSyncCtx)
    // Offset: 0x13DDD78
    static System::Threading::ExecutionContextSwitcher SetExecutionContext(System::Threading::ExecutionContext* executionContext, bool preserveSyncCtx);
    // public System.Threading.ExecutionContext CreateCopy()
    // Offset: 0x13DE188
    System::Threading::ExecutionContext* CreateCopy();
    // System.Threading.ExecutionContext CreateMutableCopy()
    // Offset: 0x13DE308
    System::Threading::ExecutionContext* CreateMutableCopy();
    // static public System.Boolean IsFlowSuppressed()
    // Offset: 0x13DE458
    static bool IsFlowSuppressed();
    // static public System.Threading.ExecutionContext Capture()
    // Offset: 0x13DE48C
    static System::Threading::ExecutionContext* Capture();
    // static System.Threading.ExecutionContext FastCapture()
    // Offset: 0x13DE4EC
    static System::Threading::ExecutionContext* FastCapture();
    // static System.Threading.ExecutionContext Capture(ref System.Threading.StackCrawlMark stackMark, System.Threading.ExecutionContext/CaptureOptions options)
    // Offset: 0x13DA8F8
    static System::Threading::ExecutionContext* Capture(System::Threading::StackCrawlMark& stackMark, System::Threading::ExecutionContext::CaptureOptions options);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13DE684
    static ExecutionContext* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Boolean IsDefaultFTContext(System.Boolean ignoreSyncCtx)
    // Offset: 0x13DDC84
    bool IsDefaultFTContext(bool ignoreSyncCtx);
    // static private System.Void .cctor()
    // Offset: 0x13DE784
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x13DD0E4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ExecutionContext* New_ctor();
    // public System.Void Dispose()
    // Offset: 0x13DD9D4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13DE58C
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.Threading.ExecutionContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContext*, "System.Threading", "ExecutionContext");
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ExecutionContext::Flags, "System.Threading", "ExecutionContext/Flags");
#pragma pack(pop)
