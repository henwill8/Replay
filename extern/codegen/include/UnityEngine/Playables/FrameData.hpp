// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Playables.PlayableOutput
#include "UnityEngine/Playables/PlayableOutput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Skipping declaration: Flags because it is already included!
  // Forward declaring type: PlayState
  struct PlayState;
}
// Completed forward declares
// Type namespace: UnityEngine.Playables
namespace UnityEngine::Playables {
  // Autogenerated type: UnityEngine.Playables.FrameData
  struct FrameData : public System::ValueType {
    public:
    // Nested type: UnityEngine::Playables::FrameData::Flags
    struct Flags;
    // Nested type: UnityEngine::Playables::FrameData::EvaluationType
    struct EvaluationType;
    // Autogenerated type: UnityEngine.Playables.FrameData/Flags
    struct Flags : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: Flags
      constexpr Flags(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.Playables.FrameData/Flags Evaluate
      static constexpr const int Evaluate = 1;
      // Get static field: static public UnityEngine.Playables.FrameData/Flags Evaluate
      static UnityEngine::Playables::FrameData::Flags _get_Evaluate();
      // Set static field: static public UnityEngine.Playables.FrameData/Flags Evaluate
      static void _set_Evaluate(UnityEngine::Playables::FrameData::Flags value);
      // static field const value: static public UnityEngine.Playables.FrameData/Flags SeekOccured
      static constexpr const int SeekOccured = 2;
      // Get static field: static public UnityEngine.Playables.FrameData/Flags SeekOccured
      static UnityEngine::Playables::FrameData::Flags _get_SeekOccured();
      // Set static field: static public UnityEngine.Playables.FrameData/Flags SeekOccured
      static void _set_SeekOccured(UnityEngine::Playables::FrameData::Flags value);
      // static field const value: static public UnityEngine.Playables.FrameData/Flags Loop
      static constexpr const int Loop = 4;
      // Get static field: static public UnityEngine.Playables.FrameData/Flags Loop
      static UnityEngine::Playables::FrameData::Flags _get_Loop();
      // Set static field: static public UnityEngine.Playables.FrameData/Flags Loop
      static void _set_Loop(UnityEngine::Playables::FrameData::Flags value);
      // static field const value: static public UnityEngine.Playables.FrameData/Flags Hold
      static constexpr const int Hold = 8;
      // Get static field: static public UnityEngine.Playables.FrameData/Flags Hold
      static UnityEngine::Playables::FrameData::Flags _get_Hold();
      // Set static field: static public UnityEngine.Playables.FrameData/Flags Hold
      static void _set_Hold(UnityEngine::Playables::FrameData::Flags value);
      // static field const value: static public UnityEngine.Playables.FrameData/Flags EffectivePlayStateDelayed
      static constexpr const int EffectivePlayStateDelayed = 16;
      // Get static field: static public UnityEngine.Playables.FrameData/Flags EffectivePlayStateDelayed
      static UnityEngine::Playables::FrameData::Flags _get_EffectivePlayStateDelayed();
      // Set static field: static public UnityEngine.Playables.FrameData/Flags EffectivePlayStateDelayed
      static void _set_EffectivePlayStateDelayed(UnityEngine::Playables::FrameData::Flags value);
      // static field const value: static public UnityEngine.Playables.FrameData/Flags EffectivePlayStatePlaying
      static constexpr const int EffectivePlayStatePlaying = 32;
      // Get static field: static public UnityEngine.Playables.FrameData/Flags EffectivePlayStatePlaying
      static UnityEngine::Playables::FrameData::Flags _get_EffectivePlayStatePlaying();
      // Set static field: static public UnityEngine.Playables.FrameData/Flags EffectivePlayStatePlaying
      static void _set_EffectivePlayStatePlaying(UnityEngine::Playables::FrameData::Flags value);
    }; // UnityEngine.Playables.FrameData/Flags
    // System.UInt64 m_FrameID
    // Offset: 0x0
    uint64_t m_FrameID;
    // System.Double m_DeltaTime
    // Offset: 0x8
    double m_DeltaTime;
    // System.Single m_Weight
    // Offset: 0x10
    float m_Weight;
    // System.Single m_EffectiveWeight
    // Offset: 0x14
    float m_EffectiveWeight;
    // System.Double m_EffectiveParentDelay
    // Offset: 0x18
    double m_EffectiveParentDelay;
    // System.Single m_EffectiveParentSpeed
    // Offset: 0x20
    float m_EffectiveParentSpeed;
    // System.Single m_EffectiveSpeed
    // Offset: 0x24
    float m_EffectiveSpeed;
    // UnityEngine.Playables.FrameData/Flags m_Flags
    // Offset: 0x28
    UnityEngine::Playables::FrameData::Flags m_Flags;
    // UnityEngine.Playables.PlayableOutput m_Output
    // Offset: 0x30
    UnityEngine::Playables::PlayableOutput m_Output;
    // Creating value type constructor for type: FrameData
    constexpr FrameData(uint64_t m_FrameID_ = {}, double m_DeltaTime_ = {}, float m_Weight_ = {}, float m_EffectiveWeight_ = {}, double m_EffectiveParentDelay_ = {}, float m_EffectiveParentSpeed_ = {}, float m_EffectiveSpeed_ = {}, UnityEngine::Playables::FrameData::Flags m_Flags_ = {}, UnityEngine::Playables::PlayableOutput m_Output_ = {}) noexcept : m_FrameID{m_FrameID_}, m_DeltaTime{m_DeltaTime_}, m_Weight{m_Weight_}, m_EffectiveWeight{m_EffectiveWeight_}, m_EffectiveParentDelay{m_EffectiveParentDelay_}, m_EffectiveParentSpeed{m_EffectiveParentSpeed_}, m_EffectiveSpeed{m_EffectiveSpeed_}, m_Flags{m_Flags_}, m_Output{m_Output_} {}
    // private System.Boolean HasFlags(UnityEngine.Playables.FrameData/Flags flag)
    // Offset: 0xCA6EB8
    bool HasFlags(UnityEngine::Playables::FrameData::Flags flag);
    // public System.Single get_deltaTime()
    // Offset: 0xCA6EC8
    float get_deltaTime();
    // public System.Single get_effectiveSpeed()
    // Offset: 0xCA6ED4
    float get_effectiveSpeed();
    // public UnityEngine.Playables.FrameData/EvaluationType get_evaluationType()
    // Offset: 0xCA6EDC
    UnityEngine::Playables::FrameData::EvaluationType get_evaluationType();
    // public System.Boolean get_seekOccurred()
    // Offset: 0xCA6EEC
    bool get_seekOccurred();
    // public System.Boolean get_timeLooped()
    // Offset: 0xCA6EF8
    bool get_timeLooped();
    // public System.Boolean get_timeHeld()
    // Offset: 0xCA6F04
    bool get_timeHeld();
    // public UnityEngine.Playables.PlayableOutput get_output()
    // Offset: 0xCA6F10
    UnityEngine::Playables::PlayableOutput get_output();
    // public UnityEngine.Playables.PlayState get_effectivePlayState()
    // Offset: 0xCA6F1C
    UnityEngine::Playables::PlayState get_effectivePlayState();
  }; // UnityEngine.Playables.FrameData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::FrameData, "UnityEngine.Playables", "FrameData");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Playables::FrameData::Flags, "UnityEngine.Playables", "FrameData/Flags");
#pragma pack(pop)
