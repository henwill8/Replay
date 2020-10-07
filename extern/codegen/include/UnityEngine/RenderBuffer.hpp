// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RenderBuffer
  struct RenderBuffer : public System::ValueType {
    public:
    // System.Int32 m_RenderTextureInstanceID
    // Offset: 0x0
    int m_RenderTextureInstanceID;
    // System.IntPtr m_BufferPtr
    // Offset: 0x8
    System::IntPtr m_BufferPtr;
    // Creating value type constructor for type: RenderBuffer
    constexpr RenderBuffer(int m_RenderTextureInstanceID_ = {}, System::IntPtr m_BufferPtr_ = {}) noexcept : m_RenderTextureInstanceID{m_RenderTextureInstanceID_}, m_BufferPtr{m_BufferPtr_} {}
  }; // UnityEngine.RenderBuffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderBuffer, "UnityEngine", "RenderBuffer");
#pragma pack(pop)
