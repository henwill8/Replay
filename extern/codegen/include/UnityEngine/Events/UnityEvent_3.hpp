// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.UnityEventBase
#include "UnityEngine/Events/UnityEventBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`3<T0, T1, T2>
  template<typename T0, typename T1, typename T2>
  class UnityAction_3;
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
  // Autogenerated type: UnityEngine.Events.UnityEvent`3
  template<typename T0, typename T1, typename T2>
  class UnityEvent_3 : public UnityEngine::Events::UnityEventBase {
    public:
    // private System.Object[] m_InvokeArray
    // Offset: 0x0
    ::Array<::Il2CppObject*>* m_InvokeArray;
    // Creating conversion operator: operator ::Array<::Il2CppObject*>*
    constexpr operator ::Array<::Il2CppObject*>*() const noexcept {
      return m_InvokeArray;
    }
    // public System.Void AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2> call)
    // Offset: 0xFFFFFFFF
    void AddListener(UnityEngine::Events::UnityAction_3<T0, T1, T2>* call) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddListener", call));
    }
    // public System.Void RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2> call)
    // Offset: 0xFFFFFFFF
    void RemoveListener(UnityEngine::Events::UnityAction_3<T0, T1, T2>* call) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveListener", call));
    }
    // static private UnityEngine.Events.BaseInvokableCall GetDelegate(UnityEngine.Events.UnityAction`3<T0,T1,T2> action)
    // Offset: 0xFFFFFFFF
    static UnityEngine::Events::BaseInvokableCall* GetDelegate(UnityEngine::Events::UnityAction_3<T0, T1, T2>* action) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<UnityEngine::Events::BaseInvokableCall*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEvent_3<T0, T1, T2>*>::get(), "GetDelegate", action)));
    }
    // public System.Void Invoke(T0 arg0, T1 arg1, T2 arg2)
    // Offset: 0xFFFFFFFF
    void Invoke(T0 arg0, T1 arg1, T2 arg2) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", arg0, arg1, arg2));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static UnityEvent_3<T0, T1, T2>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<UnityEvent_3<T0, T1, T2>*>()));
    }
    // protected override System.Reflection.MethodInfo FindMethod_Impl(System.String name, System.Object targetObj)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: System.Reflection.MethodInfo UnityEventBase::FindMethod_Impl(System.String name, System.Object targetObj)
    System::Reflection::MethodInfo* FindMethod_Impl(::Il2CppString* name, ::Il2CppObject* targetObj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Reflection::MethodInfo*>(this, "FindMethod_Impl", name, targetObj));
    }
    // override UnityEngine.Events.BaseInvokableCall GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.Events.UnityEventBase
    // Base method: UnityEngine.Events.BaseInvokableCall UnityEventBase::GetDelegate(System.Object target, System.Reflection.MethodInfo theFunction)
    UnityEngine::Events::BaseInvokableCall* GetDelegate(::Il2CppObject* target, System::Reflection::MethodInfo* theFunction) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::Events::BaseInvokableCall*>(this, "GetDelegate", target, theFunction));
    }
  }; // UnityEngine.Events.UnityEvent`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::Events::UnityEvent_3, "UnityEngine.Events", "UnityEvent`3");
#pragma pack(pop)
