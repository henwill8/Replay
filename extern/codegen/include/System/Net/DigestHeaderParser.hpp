// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.DigestHeaderParser
  // [] Offset: FFFFFFFF
  class DigestHeaderParser : public ::Il2CppObject {
    public:
    // private System.String header
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* header;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 length
    // Size: 0x4
    // Offset: 0x18
    int length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 pos
    // Size: 0x4
    // Offset: 0x1C
    int pos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String[] values
    // Size: 0x8
    // Offset: 0x20
    ::Array<::Il2CppString*>* values;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: DigestHeaderParser
    DigestHeaderParser(::Il2CppString* header_ = {}, int length_ = {}, int pos_ = {}, ::Array<::Il2CppString*>* values_ = {}) noexcept : header{header_}, length{length_}, pos{pos_}, values{values_} {}
    // Get static field: static private System.String[] keywords
    static ::Array<::Il2CppString*>* _get_keywords();
    // Set static field: static private System.String[] keywords
    static void _set_keywords(::Array<::Il2CppString*>* value);
    // public System.Void .ctor(System.String header)
    // Offset: 0x1565574
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DigestHeaderParser* New_ctor(::Il2CppString* header) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::DigestHeaderParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DigestHeaderParser*, creationType>(header)));
    }
    // public System.String get_Realm()
    // Offset: 0x1565640
    ::Il2CppString* get_Realm();
    // public System.String get_Opaque()
    // Offset: 0x1565674
    ::Il2CppString* get_Opaque();
    // public System.String get_Nonce()
    // Offset: 0x15656AC
    ::Il2CppString* get_Nonce();
    // public System.String get_Algorithm()
    // Offset: 0x15656E4
    ::Il2CppString* get_Algorithm();
    // public System.String get_QOP()
    // Offset: 0x156571C
    ::Il2CppString* get_QOP();
    // public System.Boolean Parse()
    // Offset: 0x1565754
    bool Parse();
    // private System.Void SkipWhitespace()
    // Offset: 0x1565B18
    void SkipWhitespace();
    // private System.String GetKey()
    // Offset: 0x1565BA4
    ::Il2CppString* GetKey();
    // private System.Boolean GetKeywordAndValue(out System.String key, out System.String value)
    // Offset: 0x1565948
    bool GetKeywordAndValue(::Il2CppString*& key, ::Il2CppString*& value);
    // static private System.Void .cctor()
    // Offset: 0x1565C38
    static void _cctor();
  }; // System.Net.DigestHeaderParser
  #pragma pack(pop)
  static check_size<sizeof(DigestHeaderParser), 32 + sizeof(::Array<::Il2CppString*>*)> __System_Net_DigestHeaderParserSizeCheck;
  static_assert(sizeof(DigestHeaderParser) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::DigestHeaderParser*, "System.Net", "DigestHeaderParser");
