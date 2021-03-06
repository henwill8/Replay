// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LightType
  struct LightType;
  // Forward declaring type: Color
  struct Color;
  // Forward declaring type: LightShadows
  struct LightShadows;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: LightEvent
  struct LightEvent;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
  // Forward declaring type: ShadowMapPass
  struct ShadowMapPass;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Light
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: CBDEA0
  // [NativeHeaderAttribute] Offset: CBDEA0
  // [NativeHeaderAttribute] Offset: CBDEA0
  // [RequireComponent] Offset: CBDEA0
  class Light : public UnityEngine::Behaviour {
    public:
    // private System.Int32 m_BakedIndex
    // Size: 0x4
    // Offset: 0x18
    int m_BakedIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Light
    Light(int m_BakedIndex_ = {}) noexcept : m_BakedIndex{m_BakedIndex_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.LightType get_type()
    // Offset: 0x1A2153C
    UnityEngine::LightType get_type();
    // public System.Single get_spotAngle()
    // Offset: 0x1A20214
    float get_spotAngle();
    // public UnityEngine.Color get_color()
    // Offset: 0x1A1FF70
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1A254C0
    void set_color(UnityEngine::Color value);
    // public System.Single get_intensity()
    // Offset: 0x1A1FFCC
    float get_intensity();
    // public System.Void set_intensity(System.Single value)
    // Offset: 0x1A25568
    void set_intensity(float value);
    // public System.Single get_bounceIntensity()
    // Offset: 0x1A2000C
    float get_bounceIntensity();
    // public System.Single get_range()
    // Offset: 0x1A20530
    float get_range();
    // public UnityEngine.LightShadows get_shadows()
    // Offset: 0x1A20388
    UnityEngine::LightShadows get_shadows();
    // public System.Void AddCommandBuffer(UnityEngine.Rendering.LightEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
    // Offset: 0x1A255B8
    void AddCommandBuffer(UnityEngine::Rendering::LightEvent evt, UnityEngine::Rendering::CommandBuffer* buffer);
    // public System.Void AddCommandBuffer(UnityEngine.Rendering.LightEvent evt, UnityEngine.Rendering.CommandBuffer buffer, UnityEngine.Rendering.ShadowMapPass shadowPassMask)
    // Offset: 0x1A25614
    void AddCommandBuffer(UnityEngine::Rendering::LightEvent evt, UnityEngine::Rendering::CommandBuffer* buffer, UnityEngine::Rendering::ShadowMapPass shadowPassMask);
    // public System.Void RemoveCommandBuffer(UnityEngine.Rendering.LightEvent evt, UnityEngine.Rendering.CommandBuffer buffer)
    // Offset: 0x1A2567C
    void RemoveCommandBuffer(UnityEngine::Rendering::LightEvent evt, UnityEngine::Rendering::CommandBuffer* buffer);
    // private System.Void get_color_Injected(out UnityEngine.Color ret)
    // Offset: 0x1A25470
    void get_color_Injected(UnityEngine::Color& ret);
    // private System.Void set_color_Injected(ref UnityEngine.Color value)
    // Offset: 0x1A25518
    void set_color_Injected(UnityEngine::Color& value);
  }; // UnityEngine.Light
  #pragma pack(pop)
  static check_size<sizeof(Light), 24 + sizeof(int)> __UnityEngine_LightSizeCheck;
  static_assert(sizeof(Light) == 0x1C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Light*, "UnityEngine", "Light");
