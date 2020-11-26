// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Rendering.BuiltinRenderTextureType
#include "UnityEngine/Rendering/BuiltinRenderTextureType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: UnityEngine.CubemapFace
#include "UnityEngine/CubemapFace.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.RenderTargetIdentifier
  struct RenderTargetIdentifier : public System::ValueType/*, public System::IEquatable_1<UnityEngine::Rendering::RenderTargetIdentifier>*/ {
    public:
    // private UnityEngine.Rendering.BuiltinRenderTextureType m_Type
    // Offset: 0x0
    UnityEngine::Rendering::BuiltinRenderTextureType m_Type;
    // private System.Int32 m_NameID
    // Offset: 0x4
    int m_NameID;
    // private System.Int32 m_InstanceID
    // Offset: 0x8
    int m_InstanceID;
    // private System.IntPtr m_BufferPointer
    // Offset: 0x10
    System::IntPtr m_BufferPointer;
    // private System.Int32 m_MipLevel
    // Offset: 0x18
    int m_MipLevel;
    // private UnityEngine.CubemapFace m_CubeFace
    // Offset: 0x1C
    UnityEngine::CubemapFace m_CubeFace;
    // private System.Int32 m_DepthSlice
    // Offset: 0x20
    int m_DepthSlice;
    // Creating value type constructor for type: RenderTargetIdentifier
    constexpr RenderTargetIdentifier(UnityEngine::Rendering::BuiltinRenderTextureType m_Type_ = {}, int m_NameID_ = {}, int m_InstanceID_ = {}, System::IntPtr m_BufferPointer_ = {}, int m_MipLevel_ = {}, UnityEngine::CubemapFace m_CubeFace_ = {}, int m_DepthSlice_ = {}) noexcept : m_Type{m_Type_}, m_NameID{m_NameID_}, m_InstanceID{m_InstanceID_}, m_BufferPointer{m_BufferPointer_}, m_MipLevel{m_MipLevel_}, m_CubeFace{m_CubeFace_}, m_DepthSlice{m_DepthSlice_} {}
    // Creating interface conversion operator: operator System::IEquatable_1<UnityEngine::Rendering::RenderTargetIdentifier>
    operator System::IEquatable_1<UnityEngine::Rendering::RenderTargetIdentifier>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<UnityEngine::Rendering::RenderTargetIdentifier>*>(this);
    }
    // public System.Void .ctor(UnityEngine.Rendering.BuiltinRenderTextureType type)
    // Offset: 0xCA5E64
    RenderTargetIdentifier(UnityEngine::Rendering::BuiltinRenderTextureType type);
    // public System.Void .ctor(System.Int32 nameID)
    // Offset: 0xCA5ECC
    RenderTargetIdentifier(int nameID);
    // public System.Void .ctor(UnityEngine.Texture tex)
    // Offset: 0xCA5F34
    RenderTargetIdentifier(UnityEngine::Texture* tex);
    // public override System.String ToString()
    // Offset: 0xCA5F3C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA5F44
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public System.Boolean Equals(UnityEngine.Rendering.RenderTargetIdentifier rhs)
    // Offset: 0xCA5F4C
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(UnityEngine.Rendering.RenderTargetIdentifier rhs)
    bool Equals(UnityEngine::Rendering::RenderTargetIdentifier rhs);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCA5F84
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // UnityEngine.Rendering.RenderTargetIdentifier
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderTargetIdentifier, "UnityEngine.Rendering", "RenderTargetIdentifier");
#pragma pack(pop)
