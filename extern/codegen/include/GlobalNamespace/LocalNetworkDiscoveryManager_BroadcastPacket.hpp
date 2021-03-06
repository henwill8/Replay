// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkDiscoveryManager
#include "GlobalNamespace/LocalNetworkDiscoveryManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: LocalNetworkDiscoveryManager/BroadcastPacket
  // [] Offset: FFFFFFFF
  class LocalNetworkDiscoveryManager::BroadcastPacket : public ::Il2CppObject/*, public LiteNetLib::Utils::INetSerializable*/ {
    public:
    // public System.Byte version
    // Size: 0x1
    // Offset: 0x10
    uint8_t version;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: version and: userId
    char __padding0[0x7] = {};
    // public System.String userId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* userId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String userName
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* userName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 currentPartySize
    // Size: 0x4
    // Offset: 0x28
    int currentPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 maxPartySize
    // Size: 0x4
    // Offset: 0x2C
    int maxPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Byte flags
    // Size: 0x1
    // Offset: 0x30
    uint8_t flags;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: flags and: configuration
    char __padding5[0x7] = {};
    // public GameplayServerConfiguration configuration
    // Size: 0x18
    // Offset: 0x38
    GlobalNamespace::GameplayServerConfiguration configuration;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayServerConfiguration) == 0x18);
    // Creating value type constructor for type: BroadcastPacket
    BroadcastPacket(uint8_t version_ = {}, ::Il2CppString* userId_ = {}, ::Il2CppString* userName_ = {}, int currentPartySize_ = {}, int maxPartySize_ = {}, uint8_t flags_ = {}, GlobalNamespace::GameplayServerConfiguration configuration_ = {}) noexcept : version{version_}, userId{userId_}, userName{userName_}, currentPartySize{currentPartySize_}, maxPartySize{maxPartySize_}, flags{flags_}, configuration{configuration_} {}
    // Creating interface conversion operator: operator LiteNetLib::Utils::INetSerializable
    operator LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<LiteNetLib::Utils::INetSerializable*>(this);
    }
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x10573A8
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x105743C
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void .ctor()
    // Offset: 0x1055A74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LocalNetworkDiscoveryManager::BroadcastPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LocalNetworkDiscoveryManager::BroadcastPacket*, creationType>()));
    }
  }; // LocalNetworkDiscoveryManager/BroadcastPacket
  #pragma pack(pop)
  static check_size<sizeof(LocalNetworkDiscoveryManager::BroadcastPacket), 56 + sizeof(GlobalNamespace::GameplayServerConfiguration)> __GlobalNamespace_LocalNetworkDiscoveryManager_BroadcastPacketSizeCheck;
  static_assert(sizeof(LocalNetworkDiscoveryManager::BroadcastPacket) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkDiscoveryManager::BroadcastPacket*, "", "LocalNetworkDiscoveryManager/BroadcastPacket");
