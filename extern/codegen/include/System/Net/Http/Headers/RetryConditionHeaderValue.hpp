// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTimeOffset
#include "System/DateTimeOffset.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.RetryConditionHeaderValue
  class RetryConditionHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.Nullable`1<System.DateTimeOffset> <Date>k__BackingField
    // Offset: 0x10
    System::Nullable_1<System::DateTimeOffset> Date;
    // private System.Nullable`1<System.TimeSpan> <Delta>k__BackingField
    // Offset: 0x28
    System::Nullable_1<System::TimeSpan> Delta;
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.Void .ctor(System.DateTimeOffset date)
    // Offset: 0x12090C0
    static RetryConditionHeaderValue* New_ctor(System::DateTimeOffset date);
    // public System.Void .ctor(System.TimeSpan delta)
    // Offset: 0x1209158
    static RetryConditionHeaderValue* New_ctor(System::TimeSpan delta);
    // public System.Nullable`1<System.DateTimeOffset> get_Date()
    // Offset: 0x120922C
    System::Nullable_1<System::DateTimeOffset> get_Date();
    // private System.Void set_Date(System.Nullable`1<System.DateTimeOffset> value)
    // Offset: 0x1209240
    void set_Date(System::Nullable_1<System::DateTimeOffset> value);
    // public System.Nullable`1<System.TimeSpan> get_Delta()
    // Offset: 0x1209254
    System::Nullable_1<System::TimeSpan> get_Delta();
    // private System.Void set_Delta(System.Nullable`1<System.TimeSpan> value)
    // Offset: 0x1209260
    void set_Delta(System::Nullable_1<System::TimeSpan> value);
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.RetryConditionHeaderValue parsedValue)
    // Offset: 0x1209474
    static bool TryParse(::Il2CppString* input, System::Net::Http::Headers::RetryConditionHeaderValue*& parsedValue);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x1209268
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1209270
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12093E4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1209660
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.RetryConditionHeaderValue
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::RetryConditionHeaderValue*, "System.Net.Http.Headers", "RetryConditionHeaderValue");
#pragma pack(pop)
