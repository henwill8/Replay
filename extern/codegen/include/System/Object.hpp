// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Object
  class Object {
    public:
    // public System.Boolean Equals(System.Object obj)
    // Offset: 0x171A6F8
    bool Equals(::Il2CppObject* obj);
    // static public System.Boolean Equals(System.Object objA, System.Object objB)
    // Offset: 0x171A704
    static bool Equals(::Il2CppObject* objA, ::Il2CppObject* objB);
    // public System.Void .ctor()
    // Offset: 0x1711E24
    static ::Il2CppObject* New_ctor();
    // protected System.Void Finalize()
    // Offset: 0x171A730
    void Finalize();
    // public System.Int32 GetHashCode()
    // Offset: 0x171A734
    int GetHashCode();
    // public System.Type GetType()
    // Offset: 0x171A73C
    System::Type* GetType();
    // protected System.Object MemberwiseClone()
    // Offset: 0x171A60C
    ::Il2CppObject* MemberwiseClone();
    // public System.String ToString()
    // Offset: 0x171A740
    ::Il2CppString* ToString();
    // static public System.Boolean ReferenceEquals(System.Object objA, System.Object objB)
    // Offset: 0x171A764
    static bool ReferenceEquals(::Il2CppObject* objA, ::Il2CppObject* objB);
    // static System.Int32 InternalGetHashCode(System.Object o)
    // Offset: 0x171A738
    static int InternalGetHashCode(::Il2CppObject* o);
    // private System.Void FieldGetter(System.String typeName, System.String fieldName, ref System.Object val)
    // Offset: 0x171A770
    void FieldGetter(::Il2CppString* typeName, ::Il2CppString* fieldName, ::Il2CppObject*& val);
    // private System.Void FieldSetter(System.String typeName, System.String fieldName, System.Object val)
    // Offset: 0x171A774
    void FieldSetter(::Il2CppString* typeName, ::Il2CppString* fieldName, ::Il2CppObject* val);
  }; // System.Object
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Object*, "System", "Object");
#pragma pack(pop)