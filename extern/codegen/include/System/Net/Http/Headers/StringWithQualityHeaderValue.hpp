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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Lexer
  class Lexer;
  // Forward declaring type: Token
  struct Token;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.StringWithQualityHeaderValue
  class StringWithQualityHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.Nullable`1<System.Double> <Quality>k__BackingField
    // Offset: 0x10
    System::Nullable_1<double> Quality;
    // private System.String <Value>k__BackingField
    // Offset: 0x20
    ::Il2CppString* Value;
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.Nullable`1<System.Double> get_Quality()
    // Offset: 0x12097A8
    System::Nullable_1<double> get_Quality();
    // private System.Void set_Quality(System.Nullable`1<System.Double> value)
    // Offset: 0x12097B4
    void set_Quality(System::Nullable_1<double> value);
    // public System.String get_Value()
    // Offset: 0x12097BC
    ::Il2CppString* get_Value();
    // private System.Void set_Value(System.String value)
    // Offset: 0x12097C4
    void set_Value(::Il2CppString* value);
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.StringWithQualityHeaderValue> result)
    // Offset: 0x1209944
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::StringWithQualityHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.StringWithQualityHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x12099E4
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::StringWithQualityHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // private System.Void .ctor()
    // Offset: 0x12097A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static StringWithQualityHeaderValue* New_ctor();
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x12097CC
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x12097D4
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x12098B0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1209C68
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.StringWithQualityHeaderValue
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::StringWithQualityHeaderValue*, "System.Net.Http.Headers", "StringWithQualityHeaderValue");
#pragma pack(pop)
