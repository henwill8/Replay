// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::PlayerLoop
namespace UnityEngine::PlayerLoop {
}
// Completed forward declares
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Autogenerated type: UnityEngine.PlayerLoop.Initialization
  struct Initialization : public System::ValueType {
    public:
    // Nested type: UnityEngine::PlayerLoop::Initialization::PlayerUpdateTime
    struct PlayerUpdateTime;
    // Nested type: UnityEngine::PlayerLoop::Initialization::DirectorSampleTime
    struct DirectorSampleTime;
    // Nested type: UnityEngine::PlayerLoop::Initialization::AsyncUploadTimeSlicedUpdate
    struct AsyncUploadTimeSlicedUpdate;
    // Nested type: UnityEngine::PlayerLoop::Initialization::SynchronizeState
    struct SynchronizeState;
    // Nested type: UnityEngine::PlayerLoop::Initialization::SynchronizeInputs
    struct SynchronizeInputs;
    // Nested type: UnityEngine::PlayerLoop::Initialization::XREarlyUpdate
    struct XREarlyUpdate;
    // Creating value type constructor for type: Initialization
    constexpr Initialization() noexcept {}
  }; // UnityEngine.PlayerLoop.Initialization
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PlayerLoop::Initialization, "UnityEngine.PlayerLoop", "Initialization");
#pragma pack(pop)