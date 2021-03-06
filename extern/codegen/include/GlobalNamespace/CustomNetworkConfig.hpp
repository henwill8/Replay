// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: INetworkConfig
#include "GlobalNamespace/INetworkConfig.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MasterServerEndPoint
  class MasterServerEndPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: CustomNetworkConfig
  // [] Offset: FFFFFFFF
  class CustomNetworkConfig : public ::Il2CppObject/*, public GlobalNamespace::INetworkConfig*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD1BA7C
    // private System.Int32 <maxPartySize>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int maxPartySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD1BA8C
    // private System.Int32 <discoveryPort>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    int discoveryPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD1BA9C
    // private System.Int32 <partyPort>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int partyPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD1BAAC
    // private System.Int32 <multiplayerPort>k__BackingField
    // Size: 0x4
    // Offset: 0x1C
    int multiplayerPort;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD1BABC
    // private MasterServerEndPoint <masterServerEndPoint>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::MasterServerEndPoint* masterServerEndPoint;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MasterServerEndPoint*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD1BACC
    // private System.String <masterServerStatusUrl>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* masterServerStatusUrl;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: CustomNetworkConfig
    CustomNetworkConfig(int maxPartySize_ = {}, int discoveryPort_ = {}, int partyPort_ = {}, int multiplayerPort_ = {}, GlobalNamespace::MasterServerEndPoint* masterServerEndPoint_ = {}, ::Il2CppString* masterServerStatusUrl_ = {}) noexcept : maxPartySize{maxPartySize_}, discoveryPort{discoveryPort_}, partyPort{partyPort_}, multiplayerPort{multiplayerPort_}, masterServerEndPoint{masterServerEndPoint_}, masterServerStatusUrl{masterServerStatusUrl_} {}
    // Creating interface conversion operator: operator GlobalNamespace::INetworkConfig
    operator GlobalNamespace::INetworkConfig() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkConfig*>(this);
    }
    // private System.Void set_maxPartySize(System.Int32 value)
    // Offset: 0x11D1410
    void set_maxPartySize(int value);
    // private System.Void set_discoveryPort(System.Int32 value)
    // Offset: 0x11D1420
    void set_discoveryPort(int value);
    // private System.Void set_partyPort(System.Int32 value)
    // Offset: 0x11D1430
    void set_partyPort(int value);
    // private System.Void set_multiplayerPort(System.Int32 value)
    // Offset: 0x11D1440
    void set_multiplayerPort(int value);
    // private System.Void set_masterServerEndPoint(MasterServerEndPoint value)
    // Offset: 0x11D1450
    void set_masterServerEndPoint(GlobalNamespace::MasterServerEndPoint* value);
    // private System.Void set_masterServerStatusUrl(System.String value)
    // Offset: 0x11D1460
    void set_masterServerStatusUrl(::Il2CppString* value);
    // public System.Void .ctor(INetworkConfig fromNetworkConfig, System.String customServerHostName, System.Int32 port)
    // Offset: 0x11D1468
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomNetworkConfig* New_ctor(GlobalNamespace::INetworkConfig* fromNetworkConfig, ::Il2CppString* customServerHostName, int port) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomNetworkConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomNetworkConfig*, creationType>(fromNetworkConfig, customServerHostName, port)));
    }
    // public System.Int32 get_maxPartySize()
    // Offset: 0x11D1408
    // Implemented from: INetworkConfig
    // Base method: System.Int32 INetworkConfig::get_maxPartySize()
    int get_maxPartySize();
    // public System.Int32 get_discoveryPort()
    // Offset: 0x11D1418
    // Implemented from: INetworkConfig
    // Base method: System.Int32 INetworkConfig::get_discoveryPort()
    int get_discoveryPort();
    // public System.Int32 get_partyPort()
    // Offset: 0x11D1428
    // Implemented from: INetworkConfig
    // Base method: System.Int32 INetworkConfig::get_partyPort()
    int get_partyPort();
    // public System.Int32 get_multiplayerPort()
    // Offset: 0x11D1438
    // Implemented from: INetworkConfig
    // Base method: System.Int32 INetworkConfig::get_multiplayerPort()
    int get_multiplayerPort();
    // public MasterServerEndPoint get_masterServerEndPoint()
    // Offset: 0x11D1448
    // Implemented from: INetworkConfig
    // Base method: MasterServerEndPoint INetworkConfig::get_masterServerEndPoint()
    GlobalNamespace::MasterServerEndPoint* get_masterServerEndPoint();
    // public System.String get_masterServerStatusUrl()
    // Offset: 0x11D1458
    // Implemented from: INetworkConfig
    // Base method: System.String INetworkConfig::get_masterServerStatusUrl()
    ::Il2CppString* get_masterServerStatusUrl();
  }; // CustomNetworkConfig
  #pragma pack(pop)
  static check_size<sizeof(CustomNetworkConfig), 40 + sizeof(::Il2CppString*)> __GlobalNamespace_CustomNetworkConfigSizeCheck;
  static_assert(sizeof(CustomNetworkConfig) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomNetworkConfig*, "", "CustomNetworkConfig");
