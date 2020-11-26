// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SerStack
  class SerStack : public ::Il2CppObject {
    public:
    // System.Object[] objects
    // Offset: 0x10
    ::Array<::Il2CppObject*>* objects;
    // System.String stackId
    // Offset: 0x18
    ::Il2CppString* stackId;
    // System.Int32 top
    // Offset: 0x20
    int top;
    // System.Void .ctor(System.String stackId)
    // Offset: 0x12F4D84
    static SerStack* New_ctor(::Il2CppString* stackId);
    // System.Void Push(System.Object obj)
    // Offset: 0x12F6E6C
    void Push(::Il2CppObject* obj);
    // System.Object Pop()
    // Offset: 0x12F6F28
    ::Il2CppObject* Pop();
    // System.Void IncreaseCapacity()
    // Offset: 0x12FEC60
    void IncreaseCapacity();
    // System.Object Peek()
    // Offset: 0x12F7694
    ::Il2CppObject* Peek();
    // System.Object PeekPeek()
    // Offset: 0x12FECF8
    ::Il2CppObject* PeekPeek();
    // System.Boolean IsEmpty()
    // Offset: 0x12FDDE8
    bool IsEmpty();
  }; // System.Runtime.Serialization.Formatters.Binary.SerStack
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerStack*, "System.Runtime.Serialization.Formatters.Binary", "SerStack");
#pragma pack(pop)
