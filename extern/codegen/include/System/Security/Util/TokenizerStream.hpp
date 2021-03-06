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
// Begin forward declares
// Forward declaring namespace: System::Security::Util
namespace System::Security::Util {
  // Forward declaring type: TokenizerShortBlock
  class TokenizerShortBlock;
  // Forward declaring type: TokenizerStringBlock
  class TokenizerStringBlock;
}
// Completed forward declares
// Type namespace: System.Security.Util
namespace System::Security::Util {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Util.TokenizerStream
  // [] Offset: FFFFFFFF
  class TokenizerStream : public ::Il2CppObject {
    public:
    // private System.Int32 m_countTokens
    // Size: 0x4
    // Offset: 0x10
    int m_countTokens;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_countTokens and: m_headTokens
    char __padding0[0x4] = {};
    // private System.Security.Util.TokenizerShortBlock m_headTokens
    // Size: 0x8
    // Offset: 0x18
    System::Security::Util::TokenizerShortBlock* m_headTokens;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerShortBlock*) == 0x8);
    // private System.Security.Util.TokenizerShortBlock m_lastTokens
    // Size: 0x8
    // Offset: 0x20
    System::Security::Util::TokenizerShortBlock* m_lastTokens;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerShortBlock*) == 0x8);
    // private System.Security.Util.TokenizerShortBlock m_currentTokens
    // Size: 0x8
    // Offset: 0x28
    System::Security::Util::TokenizerShortBlock* m_currentTokens;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerShortBlock*) == 0x8);
    // private System.Int32 m_indexTokens
    // Size: 0x4
    // Offset: 0x30
    int m_indexTokens;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_indexTokens and: m_headStrings
    char __padding4[0x4] = {};
    // private System.Security.Util.TokenizerStringBlock m_headStrings
    // Size: 0x8
    // Offset: 0x38
    System::Security::Util::TokenizerStringBlock* m_headStrings;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerStringBlock*) == 0x8);
    // private System.Security.Util.TokenizerStringBlock m_currentStrings
    // Size: 0x8
    // Offset: 0x40
    System::Security::Util::TokenizerStringBlock* m_currentStrings;
    // Field size check
    static_assert(sizeof(System::Security::Util::TokenizerStringBlock*) == 0x8);
    // private System.Int32 m_indexStrings
    // Size: 0x4
    // Offset: 0x48
    int m_indexStrings;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TokenizerStream
    TokenizerStream(int m_countTokens_ = {}, System::Security::Util::TokenizerShortBlock* m_headTokens_ = {}, System::Security::Util::TokenizerShortBlock* m_lastTokens_ = {}, System::Security::Util::TokenizerShortBlock* m_currentTokens_ = {}, int m_indexTokens_ = {}, System::Security::Util::TokenizerStringBlock* m_headStrings_ = {}, System::Security::Util::TokenizerStringBlock* m_currentStrings_ = {}, int m_indexStrings_ = {}) noexcept : m_countTokens{m_countTokens_}, m_headTokens{m_headTokens_}, m_lastTokens{m_lastTokens_}, m_currentTokens{m_currentTokens_}, m_indexTokens{m_indexTokens_}, m_headStrings{m_headStrings_}, m_currentStrings{m_currentStrings_}, m_indexStrings{m_indexStrings_} {}
    // System.Void AddToken(System.Int16 token)
    // Offset: 0x14D732C
    void AddToken(int16_t token);
    // System.Void AddString(System.String str)
    // Offset: 0x14D7874
    void AddString(::Il2CppString* str);
    // System.Void Reset()
    // Offset: 0x14D6E98
    void Reset();
    // System.Int16 GetNextFullToken()
    // Offset: 0x14D6EEC
    int16_t GetNextFullToken();
    // System.Int16 GetNextToken()
    // Offset: 0x14D58E8
    int16_t GetNextToken();
    // System.String GetNextString()
    // Offset: 0x14D5984
    ::Il2CppString* GetNextString();
    // System.Void ThrowAwayNextString()
    // Offset: 0x14D5900
    void ThrowAwayNextString();
    // System.Void TagLastToken(System.Int16 tag)
    // Offset: 0x14D5904
    void TagLastToken(int16_t tag);
    // System.Int32 GetTokenCount()
    // Offset: 0x14D7CD8
    int GetTokenCount();
    // System.Void GoToPosition(System.Int32 position)
    // Offset: 0x14D65A8
    void GoToPosition(int position);
    // System.Void .ctor()
    // Offset: 0x14D6DF4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TokenizerStream* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Util::TokenizerStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TokenizerStream*, creationType>()));
    }
  }; // System.Security.Util.TokenizerStream
  #pragma pack(pop)
  static check_size<sizeof(TokenizerStream), 72 + sizeof(int)> __System_Security_Util_TokenizerStreamSizeCheck;
  static_assert(sizeof(TokenizerStream) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Util::TokenizerStream*, "System.Security.Util", "TokenizerStream");
