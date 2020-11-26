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
// Completed includes
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.RangeItemHeaderValue
  class RangeItemHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.Nullable`1<System.Int64> <From>k__BackingField
    // Offset: 0x10
    System::Nullable_1<int64_t> From;
    // private System.Nullable`1<System.Int64> <To>k__BackingField
    // Offset: 0x20
    System::Nullable_1<int64_t> To;
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.Void .ctor(System.Nullable`1<System.Int64> from, System.Nullable`1<System.Int64> to)
    // Offset: 0x1208B00
    static RangeItemHeaderValue* New_ctor(System::Nullable_1<int64_t> from, System::Nullable_1<int64_t> to);
    // public System.Nullable`1<System.Int64> get_From()
    // Offset: 0x1208DAC
    System::Nullable_1<int64_t> get_From();
    // private System.Void set_From(System.Nullable`1<System.Int64> value)
    // Offset: 0x1208DB8
    void set_From(System::Nullable_1<int64_t> value);
    // public System.Nullable`1<System.Int64> get_To()
    // Offset: 0x1208DC0
    System::Nullable_1<int64_t> get_To();
    // private System.Void set_To(System.Nullable`1<System.Int64> value)
    // Offset: 0x1208DCC
    void set_To(System::Nullable_1<int64_t> value);
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x1208DD4
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1208DDC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1208ED0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1208F58
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.RangeItemHeaderValue
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::RangeItemHeaderValue*, "System.Net.Http.Headers", "RangeItemHeaderValue");
#pragma pack(pop)
