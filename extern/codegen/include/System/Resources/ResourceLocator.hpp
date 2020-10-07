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
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceTypeCode
  struct ResourceTypeCode;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Resources
namespace System::Resources {
  // Autogenerated type: System.Resources.ResourceLocator
  struct ResourceLocator : public System::ValueType {
    public:
    // System.Object _value
    // Offset: 0x0
    ::Il2CppObject* value;
    // System.Int32 _dataPos
    // Offset: 0x8
    int dataPos;
    // Creating value type constructor for type: ResourceLocator
    constexpr ResourceLocator(::Il2CppObject* value_ = {}, int dataPos_ = {}) noexcept : value{value_}, dataPos{dataPos_} {}
    // System.Void .ctor(System.Int32 dataPos, System.Object value)
    // Offset: 0xA42150
    ResourceLocator(int dataPos, ::Il2CppObject* value);
    // System.Int32 get_DataPosition()
    // Offset: 0xA42160
    int get_DataPosition();
    // System.Object get_Value()
    // Offset: 0xA42168
    ::Il2CppObject* get_Value();
    // System.Void set_Value(System.Object value)
    // Offset: 0xA42170
    void set_Value(::Il2CppObject* value);
    // static System.Boolean CanCache(System.Resources.ResourceTypeCode value)
    // Offset: 0x115D224
    static bool CanCache(System::Resources::ResourceTypeCode value);
  }; // System.Resources.ResourceLocator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Resources::ResourceLocator, "System.Resources", "ResourceLocator");
#pragma pack(pop)
