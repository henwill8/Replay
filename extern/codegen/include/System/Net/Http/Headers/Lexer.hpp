// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Http::Headers
namespace System::Net::Http::Headers {
  // Forward declaring type: Token
  struct Token;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
  // Forward declaring type: DateTimeOffset
  struct DateTimeOffset;
}
// Completed forward declares
// Type namespace: System.Net.Http.Headers
namespace System::Net::Http::Headers {
  // Autogenerated type: System.Net.Http.Headers.Lexer
  class Lexer : public ::Il2CppObject {
    public:
    // private readonly System.String s
    // Offset: 0x10
    ::Il2CppString* s;
    // private System.Int32 pos
    // Offset: 0x18
    int pos;
    // Get static field: static private readonly System.Boolean[] token_chars
    static ::Array<bool>* _get_token_chars();
    // Set static field: static private readonly System.Boolean[] token_chars
    static void _set_token_chars(::Array<bool>* value);
    // Get static field: static private readonly System.Int32 last_token_char
    static int _get_last_token_char();
    // Set static field: static private readonly System.Int32 last_token_char
    static void _set_last_token_char(int value);
    // Get static field: static private readonly System.String[] dt_formats
    static ::Array<::Il2CppString*>* _get_dt_formats();
    // Set static field: static private readonly System.String[] dt_formats
    static void _set_dt_formats(::Array<::Il2CppString*>* value);
    // public System.Void .ctor(System.String stream)
    // Offset: 0x11FC4D8
    static Lexer* New_ctor(::Il2CppString* stream);
    // public System.Int32 get_Position()
    // Offset: 0x1204650
    int get_Position();
    // public System.Void set_Position(System.Int32 value)
    // Offset: 0x1204658
    void set_Position(int value);
    // public System.String GetStringValue(System.Net.Http.Headers.Token token)
    // Offset: 0x11FCA44
    ::Il2CppString* GetStringValue(System::Net::Http::Headers::Token token);
    // public System.String GetStringValue(System.Net.Http.Headers.Token start, System.Net.Http.Headers.Token end)
    // Offset: 0x1204660
    ::Il2CppString* GetStringValue(System::Net::Http::Headers::Token start, System::Net::Http::Headers::Token end);
    // public System.String GetQuotedStringValue(System.Net.Http.Headers.Token start)
    // Offset: 0x11FE0DC
    ::Il2CppString* GetQuotedStringValue(System::Net::Http::Headers::Token start);
    // public System.String GetRemainingStringValue(System.Int32 position)
    // Offset: 0x11FCA68
    ::Il2CppString* GetRemainingStringValue(int position);
    // public System.Boolean IsStarStringValue(System.Net.Http.Headers.Token token)
    // Offset: 0x11FFA78
    bool IsStarStringValue(System::Net::Http::Headers::Token token);
    // public System.Boolean TryGetNumericValue(System.Net.Http.Headers.Token token, out System.Int32 value)
    // Offset: 0x1204684
    bool TryGetNumericValue(System::Net::Http::Headers::Token token, int& value);
    // public System.Boolean TryGetNumericValue(System.Net.Http.Headers.Token token, out System.Int64 value)
    // Offset: 0x11FFAC0
    bool TryGetNumericValue(System::Net::Http::Headers::Token token, int64_t& value);
    // public System.Nullable`1<System.TimeSpan> TryGetTimeSpanValue(System.Net.Http.Headers.Token token)
    // Offset: 0x11FE010
    System::Nullable_1<System::TimeSpan> TryGetTimeSpanValue(System::Net::Http::Headers::Token token);
    // public System.Boolean TryGetDateValue(System.Net.Http.Headers.Token token, out System.DateTimeOffset value)
    // Offset: 0x1204734
    bool TryGetDateValue(System::Net::Http::Headers::Token token, System::DateTimeOffset& value);
    // static public System.Boolean TryGetDateValue(System.String text, out System.DateTimeOffset value)
    // Offset: 0x120481C
    static bool TryGetDateValue(::Il2CppString* text, System::DateTimeOffset& value);
    // public System.Boolean TryGetDoubleValue(System.Net.Http.Headers.Token token, out System.Double value)
    // Offset: 0x1204900
    bool TryGetDoubleValue(System::Net::Http::Headers::Token token, double& value);
    // static public System.Boolean IsValidToken(System.String input)
    // Offset: 0x12049D8
    static bool IsValidToken(::Il2CppString* input);
    // static public System.Boolean IsValidCharacter(System.Char input)
    // Offset: 0x1204A9C
    static bool IsValidCharacter(::Il2CppChar input);
    // public System.Void EatChar()
    // Offset: 0x120024C
    void EatChar();
    // public System.Int32 PeekChar()
    // Offset: 0x1200208
    int PeekChar();
    // public System.Boolean ScanCommentOptional(out System.String value, out System.Net.Http.Headers.Token readToken)
    // Offset: 0x1204B6C
    bool ScanCommentOptional(::Il2CppString*& value, System::Net::Http::Headers::Token& readToken);
    // public System.Net.Http.Headers.Token Scan(System.Boolean recognizeDash)
    // Offset: 0x11FC728
    System::Net::Http::Headers::Token Scan(bool recognizeDash);
    // static private System.Void .cctor()
    // Offset: 0x1204CE0
    static void _cctor();
  }; // System.Net.Http.Headers.Lexer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::Lexer*, "System.Net.Http.Headers", "Lexer");
#pragma pack(pop)
