// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Runtime.InteropServices._MethodInfo
#include "System/Runtime/InteropServices/_MethodInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MethodInfo
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA94FC
  // [ComDefaultInterfaceAttribute] Offset: CA94FC
  // [ClassInterfaceAttribute] Offset: CA94FC
  class MethodInfo : public System::Reflection::MethodBase/*, public System::Runtime::InteropServices::_MethodInfo*/ {
    public:
    // Creating value type constructor for type: MethodInfo
    MethodInfo() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::InteropServices::_MethodInfo
    operator System::Runtime::InteropServices::_MethodInfo() noexcept {
      return *reinterpret_cast<System::Runtime::InteropServices::_MethodInfo*>(this);
    }
    // public System.Type get_ReturnType()
    // Offset: 0x1949BC0
    System::Type* get_ReturnType();
    // public System.Reflection.MethodInfo GetBaseDefinition()
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetBaseDefinition();
    // public System.Reflection.MethodInfo GetGenericMethodDefinition()
    // Offset: 0x1949CA0
    System::Reflection::MethodInfo* GetGenericMethodDefinition();
    // public System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    // Offset: 0x1949D20
    System::Reflection::MethodInfo* MakeGenericMethod(::Array<System::Type*>* typeArguments);
    // Creating initializer_list -> params proxy for: System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    System::Reflection::MethodInfo* MakeGenericMethod(std::initializer_list<System::Type*> typeArguments);
    // Creating TArgs -> initializer_list proxy for: System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    template<class ...TParams>
    System::Reflection::MethodInfo* MakeGenericMethod(TParams&&... typeArguments) {
      return MakeGenericMethod({typeArguments...});
    }
    // System.Reflection.MethodInfo GetBaseMethod()
    // Offset: 0x1949DA0
    System::Reflection::MethodInfo* GetBaseMethod();
    // protected System.Void .ctor()
    // Offset: 0x1949BA0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MethodInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodInfo*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1949BA8
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1949BB0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Int32 MethodBase::GetHashCode()
    int GetHashCode();
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x1949BB8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // public override System.Type[] GetGenericArguments()
    // Offset: 0x1949C20
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Type[] MethodBase::GetGenericArguments()
    ::Array<System::Type*>* GetGenericArguments();
  }; // System.Reflection.MethodInfo
  #pragma pack(pop)
  // static public System.Boolean op_Equality(System.Reflection.MethodInfo left, System.Reflection.MethodInfo right)
  // Offset: 0x1949090
  bool operator ==(System::Reflection::MethodInfo* left, System::Reflection::MethodInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.MethodInfo left, System.Reflection.MethodInfo right)
  // Offset: 0x1949398
  bool operator !=(System::Reflection::MethodInfo* left, System::Reflection::MethodInfo& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MethodInfo*, "System.Reflection", "MethodInfo");
