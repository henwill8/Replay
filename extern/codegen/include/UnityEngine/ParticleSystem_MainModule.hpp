// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.ParticleSystem/MainModule
  struct ParticleSystem::MainModule : public System::ValueType {
    public:
    // UnityEngine.ParticleSystem m_ParticleSystem
    // Offset: 0x0
    UnityEngine::ParticleSystem* m_ParticleSystem;
    // Creating value type constructor for type: MainModule
    constexpr MainModule(UnityEngine::ParticleSystem* m_ParticleSystem_ = {}) noexcept : m_ParticleSystem{m_ParticleSystem_} {}
    // Creating conversion operator: operator UnityEngine::ParticleSystem*
    constexpr operator UnityEngine::ParticleSystem*() const noexcept {
      return m_ParticleSystem;
    }
    // System.Void .ctor(UnityEngine.ParticleSystem particleSystem)
    // Offset: 0xCB8E30
    // ABORTED: conflicts with another method.  MainModule(UnityEngine::ParticleSystem* particleSystem);
    // public System.Single get_duration()
    // Offset: 0xCB8E38
    float get_duration();
    // public System.Boolean get_loop()
    // Offset: 0xCB8E78
    bool get_loop();
    // public UnityEngine.ParticleSystem/MinMaxCurve get_startDelay()
    // Offset: 0xCB8EB8
    UnityEngine::ParticleSystem::MinMaxCurve get_startDelay();
    // public UnityEngine.ParticleSystem/MinMaxCurve get_startLifetime()
    // Offset: 0xCB8F24
    UnityEngine::ParticleSystem::MinMaxCurve get_startLifetime();
    // public System.Void set_startLifetime(UnityEngine.ParticleSystem/MinMaxCurve value)
    // Offset: 0xCB8F90
    void set_startLifetime(UnityEngine::ParticleSystem::MinMaxCurve value);
    // public UnityEngine.ParticleSystem/MinMaxCurve get_startSpeed()
    // Offset: 0xCB8FE8
    UnityEngine::ParticleSystem::MinMaxCurve get_startSpeed();
    // public System.Void set_startSpeedMultiplier(System.Single value)
    // Offset: 0xCB9054
    void set_startSpeedMultiplier(float value);
    // public UnityEngine.ParticleSystem/MinMaxGradient get_startColor()
    // Offset: 0xCB90A4
    UnityEngine::ParticleSystem::MinMaxGradient get_startColor();
    // public System.Void set_startColor(UnityEngine.ParticleSystem/MinMaxGradient value)
    // Offset: 0xCB9128
    void set_startColor(UnityEngine::ParticleSystem::MinMaxGradient value);
    // public System.Int32 get_maxParticles()
    // Offset: 0xCB9190
    int get_maxParticles();
    // public System.Void set_maxParticles(System.Int32 value)
    // Offset: 0xCB91D0
    void set_maxParticles(int value);
    // static private System.Single get_duration_Injected(ref UnityEngine.ParticleSystem/MainModule _unity_self)
    // Offset: 0x19FFC3C
    static float get_duration_Injected(UnityEngine::ParticleSystem::MainModule& _unity_self);
    // static private System.Boolean get_loop_Injected(ref UnityEngine.ParticleSystem/MainModule _unity_self)
    // Offset: 0x19FFCBC
    static bool get_loop_Injected(UnityEngine::ParticleSystem::MainModule& _unity_self);
    // static private System.Void get_startDelay_Injected(ref UnityEngine.ParticleSystem/MainModule _unity_self, out UnityEngine.ParticleSystem/MinMaxCurve ret)
    // Offset: 0x19FFD68
    static void get_startDelay_Injected(UnityEngine::ParticleSystem::MainModule& _unity_self, UnityEngine::ParticleSystem::MinMaxCurve& ret);
    // static private System.Void get_startLifetime_Injected(ref UnityEngine.ParticleSystem/MainModule _unity_self, out UnityEngine.ParticleSystem/MinMaxCurve ret)
    // Offset: 0x19FFE24
    static void get_startLifetime_Injected(UnityEngine::ParticleSystem::MainModule& _unity_self, UnityEngine::ParticleSystem::MinMaxCurve& ret);
    // static private System.Void set_startLifetime_Injected(ref UnityEngine.ParticleSystem/MainModule _unity_self, ref UnityEngine.ParticleSystem/MinMaxCurve value)
    // Offset: 0x19FFEC4
    static void set_startLifetime_Injected(UnityEngine::ParticleSystem::MainModule& _unity_self, UnityEngine::ParticleSystem::MinMaxCurve& value);
    // static private System.Void get_startSpeed_Injected(ref UnityEngine.ParticleSystem/MainModule _unity_self, out UnityEngine.ParticleSystem/MinMaxCurve ret)
    // Offset: 0x19FFF80
    static void get_startSpeed_Injected(UnityEngine::ParticleSystem::MainModule& _unity_self, UnityEngine::ParticleSystem::MinMaxCurve& ret);
    // static private System.Void set_startSpeedMultiplier_Injected(ref UnityEngine.ParticleSystem/MainModule _unity_self, System.Single value)
    // Offset: 0x1A00020
    static void set_startSpeedMultiplier_Injected(UnityEngine::ParticleSystem::MainModule& _unity_self, float value);
    // static private System.Void get_startColor_Injected(ref UnityEngine.ParticleSystem/MainModule _unity_self, out UnityEngine.ParticleSystem/MinMaxGradient ret)
    // Offset: 0x1A000F4
    static void get_startColor_Injected(UnityEngine::ParticleSystem::MainModule& _unity_self, UnityEngine::ParticleSystem::MinMaxGradient& ret);
    // static private System.Void set_startColor_Injected(ref UnityEngine.ParticleSystem/MainModule _unity_self, ref UnityEngine.ParticleSystem/MinMaxGradient value)
    // Offset: 0x1A00194
    static void set_startColor_Injected(UnityEngine::ParticleSystem::MainModule& _unity_self, UnityEngine::ParticleSystem::MinMaxGradient& value);
    // static private System.Int32 get_maxParticles_Injected(ref UnityEngine.ParticleSystem/MainModule _unity_self)
    // Offset: 0x1A00224
    static int get_maxParticles_Injected(UnityEngine::ParticleSystem::MainModule& _unity_self);
    // static private System.Void set_maxParticles_Injected(ref UnityEngine.ParticleSystem/MainModule _unity_self, System.Int32 value)
    // Offset: 0x1A002B4
    static void set_maxParticles_Injected(UnityEngine::ParticleSystem::MainModule& _unity_self, int value);
  }; // UnityEngine.ParticleSystem/MainModule
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ParticleSystem::MainModule, "UnityEngine", "ParticleSystem/MainModule");
#pragma pack(pop)
