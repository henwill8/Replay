// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.U2D
namespace UnityEngine::Experimental::U2D {
  // Size: 0xA4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo
  // [] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: CC11AC
  // [NativeHeaderAttribute] Offset: CC11AC
  struct SpriteIntermediateRendererInfo/*, public System::ValueType*/ {
    public:
    // public System.Int32 SpriteID
    // Size: 0x4
    // Offset: 0x0
    int SpriteID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 TextureID
    // Size: 0x4
    // Offset: 0x4
    int TextureID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 MaterialID
    // Size: 0x4
    // Offset: 0x8
    int MaterialID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Color Color
    // Size: 0x10
    // Offset: 0xC
    UnityEngine::Color Color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Matrix4x4 Transform
    // Size: 0x40
    // Offset: 0x1C
    UnityEngine::Matrix4x4 Transform;
    // Field size check
    static_assert(sizeof(UnityEngine::Matrix4x4) == 0x40);
    // public UnityEngine.Bounds Bounds
    // Size: 0x18
    // Offset: 0x5C
    UnityEngine::Bounds Bounds;
    // Field size check
    static_assert(sizeof(UnityEngine::Bounds) == 0x18);
    // public System.Int32 Layer
    // Size: 0x4
    // Offset: 0x74
    int Layer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 SortingLayer
    // Size: 0x4
    // Offset: 0x78
    int SortingLayer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 SortingOrder
    // Size: 0x4
    // Offset: 0x7C
    int SortingOrder;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.UInt64 SceneCullingMask
    // Size: 0x8
    // Offset: 0x80
    uint64_t SceneCullingMask;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.IntPtr IndexData
    // Size: 0x8
    // Offset: 0x88
    System::IntPtr IndexData;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr VertexData
    // Size: 0x8
    // Offset: 0x90
    System::IntPtr VertexData;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Int32 IndexCount
    // Size: 0x4
    // Offset: 0x98
    int IndexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 VertexCount
    // Size: 0x4
    // Offset: 0x9C
    int VertexCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ShaderChannelMask
    // Size: 0x4
    // Offset: 0xA0
    int ShaderChannelMask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SpriteIntermediateRendererInfo
    constexpr SpriteIntermediateRendererInfo(int SpriteID_ = {}, int TextureID_ = {}, int MaterialID_ = {}, UnityEngine::Color Color_ = {}, UnityEngine::Matrix4x4 Transform_ = {}, UnityEngine::Bounds Bounds_ = {}, int Layer_ = {}, int SortingLayer_ = {}, int SortingOrder_ = {}, uint64_t SceneCullingMask_ = {}, System::IntPtr IndexData_ = {}, System::IntPtr VertexData_ = {}, int IndexCount_ = {}, int VertexCount_ = {}, int ShaderChannelMask_ = {}) noexcept : SpriteID{SpriteID_}, TextureID{TextureID_}, MaterialID{MaterialID_}, Color{Color_}, Transform{Transform_}, Bounds{Bounds_}, Layer{Layer_}, SortingLayer{SortingLayer_}, SortingOrder{SortingOrder_}, SceneCullingMask{SceneCullingMask_}, IndexData{IndexData_}, VertexData{VertexData_}, IndexCount{IndexCount_}, VertexCount{VertexCount_}, ShaderChannelMask{ShaderChannelMask_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo
  #pragma pack(pop)
  static check_size<sizeof(SpriteIntermediateRendererInfo), 160 + sizeof(int)> __UnityEngine_Experimental_U2D_SpriteIntermediateRendererInfoSizeCheck;
  static_assert(sizeof(SpriteIntermediateRendererInfo) == 0xA4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, "UnityEngine.Experimental.U2D", "SpriteIntermediateRendererInfo");
