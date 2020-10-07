// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.CAPI
#include "Oculus/Platform/CAPI.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Oculus.Platform.KeyValuePairType
#include "Oculus/Platform/KeyValuePairType.hpp"
// Completed includes
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.CAPI/ovrKeyValuePair
  struct CAPI::ovrKeyValuePair : public System::ValueType {
    public:
    // public System.String key_
    // Offset: 0x0
    ::Il2CppString* key;
    // private Oculus.Platform.KeyValuePairType valueType_
    // Offset: 0x8
    Oculus::Platform::KeyValuePairType valueType;
    // public System.String stringValue_
    // Offset: 0x10
    ::Il2CppString* stringValue;
    // public System.Int32 intValue_
    // Offset: 0x18
    int intValue;
    // public System.Double doubleValue_
    // Offset: 0x20
    double doubleValue;
    // Creating value type constructor for type: ovrKeyValuePair
    constexpr ovrKeyValuePair(::Il2CppString* key_ = {}, Oculus::Platform::KeyValuePairType valueType_ = {}, ::Il2CppString* stringValue_ = {}, int intValue_ = {}, double doubleValue_ = {}) noexcept : key{key_}, valueType{valueType_}, stringValue{stringValue_}, intValue{intValue_}, doubleValue{doubleValue_} {}
    // public System.Void .ctor(System.String key, System.String value)
    // Offset: 0xA34920
    ovrKeyValuePair(::Il2CppString* key, ::Il2CppString* value);
    // public System.Void .ctor(System.String key, System.Int32 value)
    // Offset: 0xA34964
    ovrKeyValuePair(::Il2CppString* key, int value);
    // public System.Void .ctor(System.String key, System.Double value)
    // Offset: 0xA349AC
    ovrKeyValuePair(::Il2CppString* key, double value);
  }; // Oculus.Platform.CAPI/ovrKeyValuePair
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CAPI::ovrKeyValuePair, "Oculus.Platform", "CAPI/ovrKeyValuePair");
#pragma pack(pop)
