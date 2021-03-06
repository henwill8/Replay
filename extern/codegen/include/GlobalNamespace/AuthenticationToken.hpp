// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: LiteNetLib.Utils.INetImmutableSerializable`1
#include "LiteNetLib/Utils/INetImmutableSerializable_1.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: AuthenticationToken
  // [] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct AuthenticationToken/*, public System::ValueType, public LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>*/ {
    public:
    // Nested type: GlobalNamespace::AuthenticationToken::Platform
    struct Platform;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: AuthenticationToken/Platform
    // [] Offset: FFFFFFFF
    struct Platform/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Platform
      constexpr Platform(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public AuthenticationToken/Platform Test
      static constexpr const int Test = 0;
      // Get static field: static public AuthenticationToken/Platform Test
      static GlobalNamespace::AuthenticationToken::Platform _get_Test();
      // Set static field: static public AuthenticationToken/Platform Test
      static void _set_Test(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform OculusRift
      static constexpr const int OculusRift = 1;
      // Get static field: static public AuthenticationToken/Platform OculusRift
      static GlobalNamespace::AuthenticationToken::Platform _get_OculusRift();
      // Set static field: static public AuthenticationToken/Platform OculusRift
      static void _set_OculusRift(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform OculusQuest
      static constexpr const int OculusQuest = 2;
      // Get static field: static public AuthenticationToken/Platform OculusQuest
      static GlobalNamespace::AuthenticationToken::Platform _get_OculusQuest();
      // Set static field: static public AuthenticationToken/Platform OculusQuest
      static void _set_OculusQuest(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform Steam
      static constexpr const int Steam = 3;
      // Get static field: static public AuthenticationToken/Platform Steam
      static GlobalNamespace::AuthenticationToken::Platform _get_Steam();
      // Set static field: static public AuthenticationToken/Platform Steam
      static void _set_Steam(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform PS4
      static constexpr const int PS4 = 4;
      // Get static field: static public AuthenticationToken/Platform PS4
      static GlobalNamespace::AuthenticationToken::Platform _get_PS4();
      // Set static field: static public AuthenticationToken/Platform PS4
      static void _set_PS4(GlobalNamespace::AuthenticationToken::Platform value);
      // static field const value: static public AuthenticationToken/Platform Oculus
      static constexpr const int Oculus = 2;
      // Get static field: static public AuthenticationToken/Platform Oculus
      static GlobalNamespace::AuthenticationToken::Platform _get_Oculus();
      // Set static field: static public AuthenticationToken/Platform Oculus
      static void _set_Oculus(GlobalNamespace::AuthenticationToken::Platform value);
    }; // AuthenticationToken/Platform
    #pragma pack(pop)
    static check_size<sizeof(AuthenticationToken::Platform), 0 + sizeof(int)> __GlobalNamespace_AuthenticationToken_PlatformSizeCheck;
    static_assert(sizeof(AuthenticationToken::Platform) == 0x4);
    // public readonly AuthenticationToken/Platform platform
    // Size: 0x4
    // Offset: 0x0
    GlobalNamespace::AuthenticationToken::Platform platform;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AuthenticationToken::Platform) == 0x4);
    // Padding between fields: platform and: userId
    char __padding0[0x4] = {};
    // public readonly System.String userId
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.String userName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly System.Byte[] sessionToken
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* sessionToken;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: AuthenticationToken
    constexpr AuthenticationToken(GlobalNamespace::AuthenticationToken::Platform platform_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, ::Array<uint8_t>* sessionToken_ = {}) noexcept : platform{platform_}, userId{userId_}, userName{userName_}, sessionToken{sessionToken_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>
    operator LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetImmutableSerializable_1<GlobalNamespace::AuthenticationToken>*>(this);
    }
    // public System.Void .ctor(AuthenticationToken/Platform platform, System.String userId, System.String userName, System.Byte[] sessionToken)
    // Offset: 0xDF4F98
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  AuthenticationToken(GlobalNamespace::AuthenticationToken::Platform platform, ::Il2CppString* userId, ::Il2CppString* userName, ::Array<uint8_t>* sessionToken)
    // static public AuthenticationToken Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x11C9C98
    static GlobalNamespace::AuthenticationToken Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xDF4FA0
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: System.Void INetImmutableSerializable_1::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public AuthenticationToken CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xDF4FA8
    // Implemented from: LiteNetLib.Utils.INetImmutableSerializable`1
    // Base method: T INetImmutableSerializable_1::CreateFromSerializedData(LiteNetLib.Utils.NetDataReader reader)
    GlobalNamespace::AuthenticationToken CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData
    // Maps to method: CreateFromSerializedData
    GlobalNamespace::AuthenticationToken LiteNetLib_Utils_INetImmutableSerializable_1_CreateFromSerializedData(LiteNetLib::Utils::NetDataReader* reader);
  }; // AuthenticationToken
  #pragma pack(pop)
  static check_size<sizeof(AuthenticationToken), 24 + sizeof(::Array<uint8_t>*)> __GlobalNamespace_AuthenticationTokenSizeCheck;
  static_assert(sizeof(AuthenticationToken) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AuthenticationToken, "", "AuthenticationToken");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AuthenticationToken::Platform, "", "AuthenticationToken/Platform");
