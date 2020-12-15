// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
  // Forward declaring type: CancellationTokenRegistration
  struct CancellationTokenRegistration;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.CancellationToken
  struct CancellationToken : public System::ValueType {
    public:
    // private System.Threading.CancellationTokenSource m_source
    // Offset: 0x0
    System::Threading::CancellationTokenSource* m_source;
    // Creating value type constructor for type: CancellationToken
    constexpr CancellationToken(System::Threading::CancellationTokenSource* m_source_ = {}) noexcept : m_source{m_source_} {}
    // Creating conversion operator: operator System::Threading::CancellationTokenSource*
    constexpr operator System::Threading::CancellationTokenSource*() const noexcept {
      return m_source;
    }
    // Get static field: static private readonly System.Action`1<System.Object> s_ActionToActionObjShunt
    static System::Action_1<::Il2CppObject*>* _get_s_ActionToActionObjShunt();
    // Set static field: static private readonly System.Action`1<System.Object> s_ActionToActionObjShunt
    static void _set_s_ActionToActionObjShunt(System::Action_1<::Il2CppObject*>* value);
    // static public System.Threading.CancellationToken get_None()
    // Offset: 0x16B1F24
    static System::Threading::CancellationToken get_None();
    // public System.Boolean get_IsCancellationRequested()
    // Offset: 0xCA5978
    bool get_IsCancellationRequested();
    // public System.Boolean get_CanBeCanceled()
    // Offset: 0xCA59B0
    bool get_CanBeCanceled();
    // System.Void .ctor(System.Threading.CancellationTokenSource source)
    // Offset: 0xCA59E8
    // ABORTED: conflicts with another method.  CancellationToken(System::Threading::CancellationTokenSource* source);
    // static private System.Void ActionToActionObjShunt(System.Object obj)
    // Offset: 0x16B1FF4
    static void ActionToActionObjShunt(::Il2CppObject* obj);
    // public System.Threading.CancellationTokenRegistration Register(System.Action callback)
    // Offset: 0xCA59F0
    System::Threading::CancellationTokenRegistration Register(System::Action* callback);
    // public System.Threading.CancellationTokenRegistration Register(System.Action`1<System.Object> callback, System.Object state)
    // Offset: 0xCA59F8
    System::Threading::CancellationTokenRegistration Register(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* state);
    // System.Threading.CancellationTokenRegistration InternalRegisterWithoutEC(System.Action`1<System.Object> callback, System.Object state)
    // Offset: 0xCA5A00
    System::Threading::CancellationTokenRegistration InternalRegisterWithoutEC(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* state);
    // private System.Threading.CancellationTokenRegistration Register(System.Action`1<System.Object> callback, System.Object state, System.Boolean useSynchronizationContext, System.Boolean useExecutionContext)
    // Offset: 0xCA5A10
    System::Threading::CancellationTokenRegistration Register(System::Action_1<::Il2CppObject*>* callback, ::Il2CppObject* state, bool useSynchronizationContext, bool useExecutionContext);
    // public System.Boolean Equals(System.Threading.CancellationToken other)
    // Offset: 0xCA5A20
    bool Equals(System::Threading::CancellationToken other);
    // public System.Void ThrowIfCancellationRequested()
    // Offset: 0xCA5A38
    void ThrowIfCancellationRequested();
    // System.Void ThrowIfSourceDisposed()
    // Offset: 0xCA5A40
    void ThrowIfSourceDisposed();
    // private System.Void ThrowOperationCanceledException()
    // Offset: 0xCA5A48
    void ThrowOperationCanceledException();
    // static private System.Void ThrowObjectDisposedException()
    // Offset: 0x16B2C0C
    static void ThrowObjectDisposedException();
    // static private System.Void .cctor()
    // Offset: 0x16B2C90
    static void _cctor();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xCA5A28
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA5A30
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.Threading.CancellationToken
  // static public System.Boolean op_Equality(System.Threading.CancellationToken left, System.Threading.CancellationToken right)
  // Offset: 0x16B2A78
  bool operator ==(const System::Threading::CancellationToken& left, const System::Threading::CancellationToken& right);
  // static public System.Boolean op_Inequality(System.Threading.CancellationToken left, System.Threading.CancellationToken right)
  // Offset: 0x16B2AA0
  bool operator !=(const System::Threading::CancellationToken& left, const System::Threading::CancellationToken& right);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::CancellationToken, "System.Threading", "CancellationToken");
#pragma pack(pop)