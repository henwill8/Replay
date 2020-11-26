// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerStatisticsViewController
#include "GlobalNamespace/PlayerStatisticsViewController.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: PlayerAllOverallStatsData
#include "GlobalNamespace/PlayerAllOverallStatsData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PlayerStatisticsViewController/StatsScopeData
  struct PlayerStatisticsViewController::StatsScopeData : public System::ValueType {
    public:
    // private System.String <text>k__BackingField
    // Offset: 0x0
    ::Il2CppString* text;
    // private System.Func`1<PlayerAllOverallStatsData/PlayerOverallStatsData> <playerOverallStatsDataFunc>k__BackingField
    // Offset: 0x8
    System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* playerOverallStatsDataFunc;
    // Creating value type constructor for type: StatsScopeData
    constexpr StatsScopeData(::Il2CppString* text_ = {}, System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* playerOverallStatsDataFunc_ = {}) noexcept : text{text_}, playerOverallStatsDataFunc{playerOverallStatsDataFunc_} {}
    // public System.String get_text()
    // Offset: 0xC92378
    ::Il2CppString* get_text();
    // private System.Void set_text(System.String value)
    // Offset: 0xC92380
    void set_text(::Il2CppString* value);
    // public System.Func`1<PlayerAllOverallStatsData/PlayerOverallStatsData> get_playerOverallStatsDataFunc()
    // Offset: 0xC92388
    System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* get_playerOverallStatsDataFunc();
    // private System.Void set_playerOverallStatsDataFunc(System.Func`1<PlayerAllOverallStatsData/PlayerOverallStatsData> value)
    // Offset: 0xC92390
    void set_playerOverallStatsDataFunc(System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* value);
    // public System.Void .ctor(System.String text, System.Func`1<PlayerAllOverallStatsData/PlayerOverallStatsData> playerOverallStatsDataFunc)
    // Offset: 0xC92398
    // ABORTED: conflicts with another method.  StatsScopeData(::Il2CppString* text, System::Func_1<GlobalNamespace::PlayerAllOverallStatsData::PlayerOverallStatsData*>* playerOverallStatsDataFunc);
  }; // PlayerStatisticsViewController/StatsScopeData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerStatisticsViewController::StatsScopeData, "", "PlayerStatisticsViewController/StatsScopeData");
#pragma pack(pop)
