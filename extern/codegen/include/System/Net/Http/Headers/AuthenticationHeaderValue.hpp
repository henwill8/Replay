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
  // Autogenerated type: System.Net.Http.Headers.AuthenticationHeaderValue
  class AuthenticationHeaderValue : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // private System.String <Parameter>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Parameter;
    // private System.String <Scheme>k__BackingField
    // Offset: 0x18
    ::Il2CppString* Scheme;
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // public System.String get_Parameter()
    // Offset: 0x11FC284
    ::Il2CppString* get_Parameter();
    // private System.Void set_Parameter(System.String value)
    // Offset: 0x11FC28C
    void set_Parameter(::Il2CppString* value);
    // public System.String get_Scheme()
    // Offset: 0x11FC294
    ::Il2CppString* get_Scheme();
    // private System.Void set_Scheme(System.String value)
    // Offset: 0x11FC29C
    void set_Scheme(::Il2CppString* value);
    // static public System.Boolean TryParse(System.String input, out System.Net.Http.Headers.AuthenticationHeaderValue parsedValue)
    // Offset: 0x11FC3F4
    static bool TryParse(::Il2CppString* input, System::Net::Http::Headers::AuthenticationHeaderValue*& parsedValue);
    // static System.Boolean TryParse(System.String input, System.Int32 minimalCount, out System.Collections.Generic.List`1<System.Net.Http.Headers.AuthenticationHeaderValue> result)
    // Offset: 0x11FC688
    static bool TryParse(::Il2CppString* input, int minimalCount, System::Collections::Generic::List_1<System::Net::Http::Headers::AuthenticationHeaderValue*>*& result);
    // static private System.Boolean TryParseElement(System.Net.Http.Headers.Lexer lexer, out System.Net.Http.Headers.AuthenticationHeaderValue parsedValue, out System.Net.Http.Headers.Token t)
    // Offset: 0x11FC50C
    static bool TryParseElement(System::Net::Http::Headers::Lexer* lexer, System::Net::Http::Headers::AuthenticationHeaderValue*& parsedValue, System::Net::Http::Headers::Token& t);
    // private System.Void .ctor()
    // Offset: 0x11FC27C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AuthenticationHeaderValue* New_ctor();
    // private System.Object System.ICloneable.Clone()
    // Offset: 0x11FC2A4
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x11FC2AC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x11FC374
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x11FCAA4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Net.Http.Headers.AuthenticationHeaderValue
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::AuthenticationHeaderValue*, "System.Net.Http.Headers", "AuthenticationHeaderValue");
#pragma pack(pop)
