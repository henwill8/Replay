// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: BaseInvokableCall
  class BaseInvokableCall;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: UnityEngine.Events
namespace UnityEngine::Events {
  // Autogenerated type: UnityEngine.Events.InvokableCallList
  class InvokableCallList : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_PersistentCalls
    // Offset: 0x10
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_PersistentCalls;
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_RuntimeCalls
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_RuntimeCalls;
    // private readonly System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> m_ExecutingCalls
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* m_ExecutingCalls;
    // private System.Boolean m_NeedsUpdate
    // Offset: 0x28
    bool m_NeedsUpdate;
    // public System.Void AddPersistentInvokableCall(UnityEngine.Events.BaseInvokableCall call)
    // Offset: 0x16867D0
    void AddPersistentInvokableCall(UnityEngine::Events::BaseInvokableCall* call);
    // public System.Void AddListener(UnityEngine.Events.BaseInvokableCall call)
    // Offset: 0x1686844
    void AddListener(UnityEngine::Events::BaseInvokableCall* call);
    // public System.Void RemoveListener(System.Object targetObj, System.Reflection.MethodInfo method)
    // Offset: 0x16868B8
    void RemoveListener(::Il2CppObject* targetObj, System::Reflection::MethodInfo* method);
    // public System.Void ClearPersistent()
    // Offset: 0x1686A30
    void ClearPersistent();
    // public System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> PrepareInvoke()
    // Offset: 0x1686A94
    System::Collections::Generic::List_1<UnityEngine::Events::BaseInvokableCall*>* PrepareInvoke();
    // public System.Void .ctor()
    // Offset: 0x1686B30
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InvokableCallList* New_ctor();
  }; // UnityEngine.Events.InvokableCallList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Events::InvokableCallList*, "UnityEngine.Events", "InvokableCallList");
#pragma pack(pop)
