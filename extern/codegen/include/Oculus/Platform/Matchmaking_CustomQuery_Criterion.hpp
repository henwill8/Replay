// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Matchmaking/CustomQuery
#include "Oculus/Platform/Matchmaking_CustomQuery.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Oculus.Platform.MatchmakingCriterionImportance
#include "Oculus/Platform/MatchmakingCriterionImportance.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Matchmaking/CustomQuery/Criterion
  struct Matchmaking::CustomQuery::Criterion : public System::ValueType {
    public:
    // public System.String key
    // Offset: 0x0
    ::Il2CppString* key;
    // public Oculus.Platform.MatchmakingCriterionImportance importance
    // Offset: 0x8
    Oculus::Platform::MatchmakingCriterionImportance importance;
    // public System.Collections.Generic.Dictionary`2<System.String,System.Object> parameters
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* parameters;
    // Creating value type constructor for type: Criterion
    constexpr Criterion(::Il2CppString* key_ = {}, Oculus::Platform::MatchmakingCriterionImportance importance_ = {}, System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppObject*>* parameters_ = {}) noexcept : key{key_}, importance{importance_}, parameters{parameters_} {}
    // public System.Void .ctor(System.String key_, Oculus.Platform.MatchmakingCriterionImportance importance_)
    // Offset: 0xA34AFC
    Criterion(::Il2CppString* key_, Oculus::Platform::MatchmakingCriterionImportance importance_);
  }; // Oculus.Platform.Matchmaking/CustomQuery/Criterion
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Matchmaking::CustomQuery::Criterion, "Oculus.Platform", "Matchmaking/CustomQuery/Criterion");
#pragma pack(pop)
