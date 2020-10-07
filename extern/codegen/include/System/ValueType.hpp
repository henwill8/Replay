// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "../System/Object.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
template<class T>
struct Array;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.ValueType
  class ValueType : public System::Object {
    public:
    // static private System.Boolean InternalEquals(System.Object o1, System.Object o2, out System.Object[] fields)
    // Offset: 0x17A06DC
    static bool InternalEquals(::Il2CppObject* o1, ::Il2CppObject* o2, ::Array<::Il2CppObject*>*& fields);
    // static System.Boolean DefaultEquals(System.Object o1, System.Object o2)
    // Offset: 0x17A06E0
    static bool DefaultEquals(::Il2CppObject* o1, ::Il2CppObject* o2);
    // static System.Int32 InternalGetHashCode(System.Object o, out System.Object[] fields)
    // Offset: 0x17A08AC
    static int InternalGetHashCode(::Il2CppObject* o, ::Array<::Il2CppObject*>*& fields);
    // protected System.Void .ctor()
    // Offset: 0x17A06D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ValueType* New_ctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x17A08A8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x17A08B0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x17A093C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.ValueType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
template<class T>
struct is_value_type<T, typename std::enable_if_t<std::is_base_of_v<System::ValueType, T>>> : std::true_type{};
DEFINE_IL2CPP_ARG_TYPE(System::ValueType*, "System", "ValueType");
#pragma pack(pop)
