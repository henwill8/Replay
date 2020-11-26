// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Time
  class Time : public ::Il2CppObject {
    public:
    // static public System.Single get_time()
    // Offset: 0x16C5B84
    static float get_time();
    // static public System.Single get_timeSinceLevelLoad()
    // Offset: 0x16C5BB8
    static float get_timeSinceLevelLoad();
    // static public System.Single get_deltaTime()
    // Offset: 0x16C5BEC
    static float get_deltaTime();
    // static public System.Single get_unscaledTime()
    // Offset: 0x16C5C20
    static float get_unscaledTime();
    // static public System.Single get_unscaledDeltaTime()
    // Offset: 0x16C5C54
    static float get_unscaledDeltaTime();
    // static public System.Single get_fixedDeltaTime()
    // Offset: 0x16C5C88
    static float get_fixedDeltaTime();
    // static public System.Void set_fixedDeltaTime(System.Single value)
    // Offset: 0x16C5CBC
    static void set_fixedDeltaTime(float value);
    // static public System.Single get_smoothDeltaTime()
    // Offset: 0x16C5D00
    static float get_smoothDeltaTime();
    // static public System.Single get_maximumParticleDeltaTime()
    // Offset: 0x16C5D34
    static float get_maximumParticleDeltaTime();
    // static public System.Single get_timeScale()
    // Offset: 0x16C5D68
    static float get_timeScale();
    // static public System.Void set_timeScale(System.Single value)
    // Offset: 0x16C5D9C
    static void set_timeScale(float value);
    // static public System.Int32 get_frameCount()
    // Offset: 0x16C5DE0
    static int get_frameCount();
    // static public System.Single get_realtimeSinceStartup()
    // Offset: 0x16C5E14
    static float get_realtimeSinceStartup();
    // static public System.Single get_captureDeltaTime()
    // Offset: 0x16C5E48
    static float get_captureDeltaTime();
    // static public System.Void set_captureDeltaTime(System.Single value)
    // Offset: 0x16C5E7C
    static void set_captureDeltaTime(float value);
    // static public System.Int32 get_captureFramerate()
    // Offset: 0x16C5EC0
    static int get_captureFramerate();
    // static public System.Void set_captureFramerate(System.Int32 value)
    // Offset: 0x16C5FFC
    static void set_captureFramerate(int value);
  }; // UnityEngine.Time
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Time*, "UnityEngine", "Time");
#pragma pack(pop)
