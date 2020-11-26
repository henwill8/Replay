// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ParticleSystemGradientMode
#include "UnityEngine/ParticleSystemGradientMode.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Gradient
  class Gradient;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ParticleSystem/MinMaxGradient
  struct ParticleSystem::MinMaxGradient : public System::ValueType {
    public:
    // private UnityEngine.ParticleSystemGradientMode m_Mode
    // Offset: 0x0
    UnityEngine::ParticleSystemGradientMode m_Mode;
    // private UnityEngine.Gradient m_GradientMin
    // Offset: 0x8
    UnityEngine::Gradient* m_GradientMin;
    // private UnityEngine.Gradient m_GradientMax
    // Offset: 0x10
    UnityEngine::Gradient* m_GradientMax;
    // private UnityEngine.Color m_ColorMin
    // Offset: 0x18
    UnityEngine::Color m_ColorMin;
    // private UnityEngine.Color m_ColorMax
    // Offset: 0x28
    UnityEngine::Color m_ColorMax;
    // Creating value type constructor for type: MinMaxGradient
    constexpr MinMaxGradient(UnityEngine::ParticleSystemGradientMode m_Mode_ = {}, UnityEngine::Gradient* m_GradientMin_ = {}, UnityEngine::Gradient* m_GradientMax_ = {}, UnityEngine::Color m_ColorMin_ = {}, UnityEngine::Color m_ColorMax_ = {}) noexcept : m_Mode{m_Mode_}, m_GradientMin{m_GradientMin_}, m_GradientMax{m_GradientMax_}, m_ColorMin{m_ColorMin_}, m_ColorMax{m_ColorMax_} {}
    // public System.Void .ctor(UnityEngine.Color color)
    // Offset: 0xCB92A8
    MinMaxGradient(UnityEngine::Color color);
    // public UnityEngine.Color get_color()
    // Offset: 0xCB92B0
    UnityEngine::Color get_color();
  }; // UnityEngine.ParticleSystem/MinMaxGradient
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::MinMaxGradient, "UnityEngine", "ParticleSystem/MinMaxGradient");
#pragma pack(pop)
