// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TimeHelper
  class TimeHelper : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _accumulator
    // Offset: 0x18
    float accumulator;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get static field: static private System.Single <time>k__BackingField
    static float _get_$time$k__BackingField();
    // Set static field: static private System.Single <time>k__BackingField
    static void _set_$time$k__BackingField(float value);
    // Get static field: static private System.Single <deltaTime>k__BackingField
    static float _get_$deltaTime$k__BackingField();
    // Set static field: static private System.Single <deltaTime>k__BackingField
    static void _set_$deltaTime$k__BackingField(float value);
    // Get static field: static private System.Single <fixedDeltaTime>k__BackingField
    static float _get_$fixedDeltaTime$k__BackingField();
    // Set static field: static private System.Single <fixedDeltaTime>k__BackingField
    static void _set_$fixedDeltaTime$k__BackingField(float value);
    // Get static field: static private System.Single <interpolationFactor>k__BackingField
    static float _get_$interpolationFactor$k__BackingField();
    // Set static field: static private System.Single <interpolationFactor>k__BackingField
    static void _set_$interpolationFactor$k__BackingField(float value);
    // static public System.Single get_time()
    // Offset: 0x19CE7D8
    static float get_time();
    // static private System.Void set_time(System.Single value)
    // Offset: 0x19CE828
    static void set_time(float value);
    // static public System.Single get_deltaTime()
    // Offset: 0x19CE884
    static float get_deltaTime();
    // static private System.Void set_deltaTime(System.Single value)
    // Offset: 0x19CE8D4
    static void set_deltaTime(float value);
    // static public System.Single get_fixedDeltaTime()
    // Offset: 0x19CE930
    static float get_fixedDeltaTime();
    // static private System.Void set_fixedDeltaTime(System.Single value)
    // Offset: 0x19CE980
    static void set_fixedDeltaTime(float value);
    // static public System.Single get_interpolationFactor()
    // Offset: 0x19CE9DC
    static float get_interpolationFactor();
    // static private System.Void set_interpolationFactor(System.Single value)
    // Offset: 0x19CEA2C
    static void set_interpolationFactor(float value);
    // protected System.Void Awake()
    // Offset: 0x19CEA88
    void Awake();
    // protected System.Void FixedUpdate()
    // Offset: 0x19CEB38
    void FixedUpdate();
    // protected System.Void Update()
    // Offset: 0x19CEBE8
    void Update();
    // public System.Void .ctor()
    // Offset: 0x19CED9C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TimeHelper* New_ctor();
  }; // TimeHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimeHelper*, "", "TimeHelper");
#pragma pack(pop)
