// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.ScriptableRenderContext
  struct ScriptableRenderContext : public System::ValueType/*, public System::IEquatable_1<UnityEngine::Rendering::ScriptableRenderContext>*/ {
    public:
    // private System.IntPtr m_Ptr
    // Offset: 0x0
    System::IntPtr m_Ptr;
    // Creating value type constructor for type: ScriptableRenderContext
    constexpr ScriptableRenderContext(System::IntPtr m_Ptr_ = {}) noexcept : m_Ptr{m_Ptr_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Rendering::ScriptableRenderContext>
    operator System::IEquatable_1<UnityEngine::Rendering::ScriptableRenderContext>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Rendering::ScriptableRenderContext>*>(this);
    }
    // Creating conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept {
      return m_Ptr;
    }
    // private System.Int32 GetNumberOfCameras_Internal()
    // Offset: 0xCA5F8C
    int GetNumberOfCameras_Internal();
    // private UnityEngine.Camera GetCamera_Internal(System.Int32 index)
    // Offset: 0xCA5FCC
    UnityEngine::Camera* GetCamera_Internal(int index);
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0xCA601C
    // ABORTED: conflicts with another method.  ScriptableRenderContext(System::IntPtr ptr);
    // System.Int32 GetNumberOfCameras()
    // Offset: 0xCA6024
    int GetNumberOfCameras();
    // UnityEngine.Camera GetCamera(System.Int32 index)
    // Offset: 0xCA6064
    UnityEngine::Camera* GetCamera(int index);
    // static private System.Int32 GetNumberOfCameras_Internal_Injected(ref UnityEngine.Rendering.ScriptableRenderContext _unity_self)
    // Offset: 0x16BDF7C
    static int GetNumberOfCameras_Internal_Injected(UnityEngine::Rendering::ScriptableRenderContext& _unity_self);
    // static private UnityEngine.Camera GetCamera_Internal_Injected(ref UnityEngine.Rendering.ScriptableRenderContext _unity_self, System.Int32 index)
    // Offset: 0x16BE00C
    static UnityEngine::Camera* GetCamera_Internal_Injected(UnityEngine::Rendering::ScriptableRenderContext& _unity_self, int index);
    // public System.Boolean Equals(UnityEngine.Rendering.ScriptableRenderContext other)
    // Offset: 0xCA60B4
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Rendering.ScriptableRenderContext other)
    bool Equals(UnityEngine::Rendering::ScriptableRenderContext other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCA60BC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA60C4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.ScriptableRenderContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::ScriptableRenderContext, "UnityEngine.Rendering", "ScriptableRenderContext");
#pragma pack(pop)