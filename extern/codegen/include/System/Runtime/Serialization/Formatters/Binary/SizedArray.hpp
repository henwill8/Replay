// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Completed includes
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SizedArray
  class SizedArray : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // System.Object[] objects
    // Offset: 0x10
    ::Array<::Il2CppObject*>* objects;
    // System.Object[] negObjects
    // Offset: 0x18
    ::Array<::Il2CppObject*>* negObjects;
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // System.Void .ctor(System.Int32 length)
    // Offset: 0x12FF150
    static SizedArray* New_ctor(int length);
    // private System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.SizedArray sizedArray)
    // Offset: 0x12FF1E4
    static SizedArray* New_ctor(System::Runtime::Serialization::Formatters::Binary::SizedArray* sizedArray);
    // System.Object get_Item(System.Int32 index)
    // Offset: 0x12F4214
    ::Il2CppObject* get_Item(int index);
    // System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x12FF324
    void set_Item(int index, ::Il2CppObject* value);
    // System.Void IncreaseCapacity(System.Int32 index)
    // Offset: 0x12FF444
    void IncreaseCapacity(int index);
    // System.Void .ctor()
    // Offset: 0x12FF0C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SizedArray* New_ctor();
    // public System.Object Clone()
    // Offset: 0x12FF2C4
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
  }; // System.Runtime.Serialization.Formatters.Binary.SizedArray
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SizedArray*, "System.Runtime.Serialization.Formatters.Binary", "SizedArray");
#pragma pack(pop)