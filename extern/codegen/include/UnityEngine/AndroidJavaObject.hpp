// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GlobalJavaObjectRef
  class GlobalJavaObjectRef;
  // Forward declaring type: AndroidJavaClass
  class AndroidJavaClass;
  // Forward declaring type: AndroidJavaProxy
  class AndroidJavaProxy;
  // Forward declaring type: AndroidJavaRunnable
  class AndroidJavaRunnable;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AndroidJavaObject
  // [] Offset: FFFFFFFF
  class AndroidJavaObject : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // UnityEngine.GlobalJavaObjectRef m_jobject
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::GlobalJavaObjectRef* m_jobject;
    // Field size check
    static_assert(sizeof(UnityEngine::GlobalJavaObjectRef*) == 0x8);
    // UnityEngine.GlobalJavaObjectRef m_jclass
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::GlobalJavaObjectRef* m_jclass;
    // Field size check
    static_assert(sizeof(UnityEngine::GlobalJavaObjectRef*) == 0x8);
    // Creating value type constructor for type: AndroidJavaObject
    AndroidJavaObject(UnityEngine::GlobalJavaObjectRef* m_jobject_ = {}, UnityEngine::GlobalJavaObjectRef* m_jclass_ = {}) noexcept : m_jobject{m_jobject_}, m_jclass{m_jclass_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // Get static field: static private System.Boolean enableDebugPrints
    static bool _get_enableDebugPrints();
    // Set static field: static private System.Boolean enableDebugPrints
    static void _set_enableDebugPrints(bool value);
    // public System.Void .ctor(System.String className, System.String[] args)
    // Offset: 0x2264B70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<::Il2CppString*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaObject*, creationType>(className, args)));
    }
    // public System.Void .ctor(System.String className, UnityEngine.AndroidJavaObject[] args)
    // Offset: 0x2264E0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<UnityEngine::AndroidJavaObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaObject*, creationType>(className, args)));
    }
    // public System.Void .ctor(System.String className, UnityEngine.AndroidJavaClass[] args)
    // Offset: 0x2264EDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<UnityEngine::AndroidJavaClass*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaObject*, creationType>(className, args)));
    }
    // public System.Void .ctor(System.String className, UnityEngine.AndroidJavaProxy[] args)
    // Offset: 0x2264FAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<UnityEngine::AndroidJavaProxy*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaObject*, creationType>(className, args)));
    }
    // public System.Void .ctor(System.String className, UnityEngine.AndroidJavaRunnable[] args)
    // Offset: 0x226507C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<UnityEngine::AndroidJavaRunnable*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaObject*, creationType>(className, args)));
    }
    // public System.Void .ctor(System.String className, params System.Object[] args)
    // Offset: 0x226514C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor(::Il2CppString* className, ::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaObject*, creationType>(className, args)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(System.String className, params System.Object[] args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor(::Il2CppString* className, std::initializer_list<::Il2CppObject*> args) {
      return New_ctor<creationType>(className, ::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(System.String className, params System.Object[] args)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static AndroidJavaObject* New_ctor(::Il2CppString* className, TParams&&... args) {
      return New_ctor<creationType>(className, {args...});
    }
    // public System.Void Call(System.String methodName, T[] args)
    // Offset: 0xFFFFFFFF
    template<class T>
    void Call(::Il2CppString* methodName, ::Array<T>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::Call");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Call", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(methodName, args)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, methodName, args);
    }
    // public System.Void Call(System.String methodName, params System.Object[] args)
    // Offset: 0x2265208
    void Call(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void Call(System.String methodName, params System.Object[] args)
    void Call(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void Call(System.String methodName, params System.Object[] args)
    template<class ...TParams>
    void Call(::Il2CppString* methodName, TParams&&... args) {
      Call(methodName, {args...});
    }
    // public System.Void CallStatic(System.String methodName, T[] args)
    // Offset: 0xFFFFFFFF
    template<class T>
    void CallStatic(::Il2CppString* methodName, ::Array<T>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::CallStatic");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CallStatic", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(methodName, args)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, methodName, args);
    }
    // public System.Void CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0x2265320
    void CallStatic(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void CallStatic(System.String methodName, params System.Object[] args)
    void CallStatic(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void CallStatic(System.String methodName, params System.Object[] args)
    template<class ...TParams>
    void CallStatic(::Il2CppString* methodName, TParams&&... args) {
      CallStatic(methodName, {args...});
    }
    // public FieldType Get(System.String fieldName)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    FieldType Get(::Il2CppString* fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::Get");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Get", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::il2cpp_utils::ExtractTypes(fieldName)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<FieldType, false>(this, ___generic__method, fieldName);
    }
    // public System.Void Set(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    void Set(::Il2CppString* fieldName, FieldType val) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::Set");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Set", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::il2cpp_utils::ExtractTypes(fieldName, val)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, fieldName, val);
    }
    // public FieldType GetStatic(System.String fieldName)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    FieldType GetStatic(::Il2CppString* fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::GetStatic");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetStatic", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::il2cpp_utils::ExtractTypes(fieldName)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<FieldType, false>(this, ___generic__method, fieldName);
    }
    // public System.Void SetStatic(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    void SetStatic(::Il2CppString* fieldName, FieldType val) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::SetStatic");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetStatic", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::il2cpp_utils::ExtractTypes(fieldName, val)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, fieldName, val);
    }
    // public System.IntPtr GetRawObject()
    // Offset: 0x2265438
    System::IntPtr GetRawObject();
    // public System.IntPtr GetRawClass()
    // Offset: 0x2265470
    System::IntPtr GetRawClass();
    // public ReturnType Call(System.String methodName, T[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType, class T>
    ReturnType Call(::Il2CppString* methodName, ::Array<T>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::Call");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Call", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(methodName, args))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
      return ::il2cpp_utils::RunMethodThrow<ReturnType, false>(this, ___generic__method, methodName, args);
    }
    // public ReturnType Call(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    ReturnType Call(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::Call");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Call", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::il2cpp_utils::ExtractTypes(methodName, args)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<ReturnType, false>(this, ___generic__method, methodName, args);
    }
    // Creating initializer_list -> params proxy for: ReturnType Call(System.String methodName, params System.Object[] args)
    template<class ReturnType>
    ReturnType Call(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args) {
      return Call(methodName, ::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: ReturnType Call(System.String methodName, params System.Object[] args)
    template<class ReturnType, class ...TParams>
    ReturnType Call(::Il2CppString* methodName, TParams&&... args) {
      return Call(methodName, {args...});
    }
    // public ReturnType CallStatic(System.String methodName, T[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType, class T>
    ReturnType CallStatic(::Il2CppString* methodName, ::Array<T>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::CallStatic");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "CallStatic", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(methodName, args))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()})));
      return ::il2cpp_utils::RunMethodThrow<ReturnType, false>(this, ___generic__method, methodName, args);
    }
    // public ReturnType CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    ReturnType CallStatic(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::CallStatic");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CallStatic", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::il2cpp_utils::ExtractTypes(methodName, args)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<ReturnType, false>(this, ___generic__method, methodName, args);
    }
    // Creating initializer_list -> params proxy for: ReturnType CallStatic(System.String methodName, params System.Object[] args)
    template<class ReturnType>
    ReturnType CallStatic(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args) {
      return CallStatic(methodName, ::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: ReturnType CallStatic(System.String methodName, params System.Object[] args)
    template<class ReturnType, class ...TParams>
    ReturnType CallStatic(::Il2CppString* methodName, TParams&&... args) {
      return CallStatic(methodName, {args...});
    }
    // protected System.Void DebugPrint(System.String msg)
    // Offset: 0x22648E4
    void DebugPrint(::Il2CppString* msg);
    // protected System.Void DebugPrint(System.String call, System.String methodName, System.String signature, System.Object[] args)
    // Offset: 0x22654A8
    void DebugPrint(::Il2CppString* call, ::Il2CppString* methodName, ::Il2CppString* signature, ::Array<::Il2CppObject*>* args);
    // private System.Void _AndroidJavaObject(System.String className, params System.Object[] args)
    // Offset: 0x2264C40
    void _AndroidJavaObject(::Il2CppString* className, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void _AndroidJavaObject(System.String className, params System.Object[] args)
    void _AndroidJavaObject(::Il2CppString* className, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void _AndroidJavaObject(System.String className, params System.Object[] args)
    template<class ...TParams>
    void _AndroidJavaObject(::Il2CppString* className, TParams&&... args) {
      _AndroidJavaObject(className, {args...});
    }
    // System.Void .ctor(System.IntPtr jobject)
    // Offset: 0x226584C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor(System::IntPtr jobject) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaObject*, creationType>(jobject)));
    }
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x22659D4
    void Dispose(bool disposing);
    // protected System.Void _Call(System.String methodName, params System.Object[] args)
    // Offset: 0x226520C
    void _Call(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void _Call(System.String methodName, params System.Object[] args)
    void _Call(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void _Call(System.String methodName, params System.Object[] args)
    template<class ...TParams>
    void _Call(::Il2CppString* methodName, TParams&&... args) {
      _Call(methodName, {args...});
    }
    // protected ReturnType _Call(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    ReturnType _Call(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::_Call");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "_Call", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::il2cpp_utils::ExtractTypes(methodName, args)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<ReturnType, false>(this, ___generic__method, methodName, args);
    }
    // Creating initializer_list -> params proxy for: ReturnType _Call(System.String methodName, params System.Object[] args)
    template<class ReturnType>
    ReturnType _Call(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args) {
      return _Call(methodName, ::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: ReturnType _Call(System.String methodName, params System.Object[] args)
    template<class ReturnType, class ...TParams>
    ReturnType _Call(::Il2CppString* methodName, TParams&&... args) {
      return _Call(methodName, {args...});
    }
    // protected FieldType _Get(System.String fieldName)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    FieldType _Get(::Il2CppString* fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::_Get");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "_Get", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::il2cpp_utils::ExtractTypes(fieldName)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<FieldType, false>(this, ___generic__method, fieldName);
    }
    // protected System.Void _Set(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    void _Set(::Il2CppString* fieldName, FieldType val) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::_Set");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "_Set", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::il2cpp_utils::ExtractTypes(fieldName, val)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, fieldName, val);
    }
    // protected System.Void _CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0x2265324
    void _CallStatic(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Void _CallStatic(System.String methodName, params System.Object[] args)
    void _CallStatic(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Void _CallStatic(System.String methodName, params System.Object[] args)
    template<class ...TParams>
    void _CallStatic(::Il2CppString* methodName, TParams&&... args) {
      _CallStatic(methodName, {args...});
    }
    // protected ReturnType _CallStatic(System.String methodName, params System.Object[] args)
    // Offset: 0xFFFFFFFF
    template<class ReturnType>
    ReturnType _CallStatic(::Il2CppString* methodName, ::Array<::Il2CppObject*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::_CallStatic");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "_CallStatic", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}, ::il2cpp_utils::ExtractTypes(methodName, args)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ReturnType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<ReturnType, false>(this, ___generic__method, methodName, args);
    }
    // Creating initializer_list -> params proxy for: ReturnType _CallStatic(System.String methodName, params System.Object[] args)
    template<class ReturnType>
    ReturnType _CallStatic(::Il2CppString* methodName, std::initializer_list<::Il2CppObject*> args) {
      return _CallStatic(methodName, ::Array<::Il2CppObject*>::New(args));
    }
    // Creating TArgs -> initializer_list proxy for: ReturnType _CallStatic(System.String methodName, params System.Object[] args)
    template<class ReturnType, class ...TParams>
    ReturnType _CallStatic(::Il2CppString* methodName, TParams&&... args) {
      return _CallStatic(methodName, {args...});
    }
    // protected FieldType _GetStatic(System.String fieldName)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    FieldType _GetStatic(::Il2CppString* fieldName) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::_GetStatic");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "_GetStatic", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::il2cpp_utils::ExtractTypes(fieldName)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      return ::il2cpp_utils::RunMethodThrow<FieldType, false>(this, ___generic__method, fieldName);
    }
    // protected System.Void _SetStatic(System.String fieldName, FieldType val)
    // Offset: 0xFFFFFFFF
    template<class FieldType>
    void _SetStatic(::Il2CppString* fieldName, FieldType val) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::_SetStatic");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "_SetStatic", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}, ::il2cpp_utils::ExtractTypes(fieldName, val)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FieldType>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___generic__method, fieldName, val);
    }
    // static UnityEngine.AndroidJavaObject AndroidJavaObjectDeleteLocalRef(System.IntPtr jobject)
    // Offset: 0x2265AA8
    static UnityEngine::AndroidJavaObject* AndroidJavaObjectDeleteLocalRef(System::IntPtr jobject);
    // static UnityEngine.AndroidJavaClass AndroidJavaClassDeleteLocalRef(System.IntPtr jclass)
    // Offset: 0x2265B40
    static UnityEngine::AndroidJavaClass* AndroidJavaClassDeleteLocalRef(System::IntPtr jclass);
    // protected System.IntPtr _GetRawObject()
    // Offset: 0x2265454
    System::IntPtr _GetRawObject();
    // protected System.IntPtr _GetRawClass()
    // Offset: 0x226548C
    System::IntPtr _GetRawClass();
    // static private System.Void .cctor()
    // Offset: 0x2265BD8
    static void _cctor();
    // public System.Void Dispose()
    // Offset: 0x226518C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // System.Void .ctor()
    // Offset: 0x22647FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AndroidJavaObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AndroidJavaObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AndroidJavaObject*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x2265960
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AndroidJavaObject
  #pragma pack(pop)
  static check_size<sizeof(AndroidJavaObject), 24 + sizeof(UnityEngine::GlobalJavaObjectRef*)> __UnityEngine_AndroidJavaObjectSizeCheck;
  static_assert(sizeof(AndroidJavaObject) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaObject*, "UnityEngine", "AndroidJavaObject");
