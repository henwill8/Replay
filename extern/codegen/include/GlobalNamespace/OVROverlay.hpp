// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: OVRPlugin/TextureRectMatrixf
#include "GlobalNamespace/OVRPlugin_TextureRectMatrixf.hpp"
// Including type: OVRPlugin/LayerDesc
#include "GlobalNamespace/OVRPlugin_LayerDesc.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
// Including type: OVRManager/XRDevice
#include "GlobalNamespace/OVRManager.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
  // Forward declaring type: Renderer
  class Renderer;
  // Forward declaring type: Material
  class Material;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPose
  struct OVRPose;
}
// Forward declaring namespace: UnityEngine::XR
namespace UnityEngine::XR {
  // Forward declaring type: XRNode
  struct XRNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x19D
  #pragma pack(push, 1)
  // Autogenerated type: OVROverlay
  // [] Offset: FFFFFFFF
  class OVROverlay : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::OVROverlay::OverlayShape
    struct OverlayShape;
    // Nested type: GlobalNamespace::OVROverlay::OverlayType
    struct OverlayType;
    // Nested type: GlobalNamespace::OVROverlay::ExternalSurfaceObjectCreated
    class ExternalSurfaceObjectCreated;
    // Nested type: GlobalNamespace::OVROverlay::LayerTexture
    struct LayerTexture;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVROverlay/OverlayShape
    // [] Offset: FFFFFFFF
    struct OverlayShape/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: OverlayShape
      constexpr OverlayShape(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVROverlay/OverlayShape Quad
      static constexpr const int Quad = 0;
      // Get static field: static public OVROverlay/OverlayShape Quad
      static GlobalNamespace::OVROverlay::OverlayShape _get_Quad();
      // Set static field: static public OVROverlay/OverlayShape Quad
      static void _set_Quad(GlobalNamespace::OVROverlay::OverlayShape value);
      // static field const value: static public OVROverlay/OverlayShape Cylinder
      static constexpr const int Cylinder = 1;
      // Get static field: static public OVROverlay/OverlayShape Cylinder
      static GlobalNamespace::OVROverlay::OverlayShape _get_Cylinder();
      // Set static field: static public OVROverlay/OverlayShape Cylinder
      static void _set_Cylinder(GlobalNamespace::OVROverlay::OverlayShape value);
      // static field const value: static public OVROverlay/OverlayShape Cubemap
      static constexpr const int Cubemap = 2;
      // Get static field: static public OVROverlay/OverlayShape Cubemap
      static GlobalNamespace::OVROverlay::OverlayShape _get_Cubemap();
      // Set static field: static public OVROverlay/OverlayShape Cubemap
      static void _set_Cubemap(GlobalNamespace::OVROverlay::OverlayShape value);
      // static field const value: static public OVROverlay/OverlayShape OffcenterCubemap
      static constexpr const int OffcenterCubemap = 4;
      // Get static field: static public OVROverlay/OverlayShape OffcenterCubemap
      static GlobalNamespace::OVROverlay::OverlayShape _get_OffcenterCubemap();
      // Set static field: static public OVROverlay/OverlayShape OffcenterCubemap
      static void _set_OffcenterCubemap(GlobalNamespace::OVROverlay::OverlayShape value);
      // static field const value: static public OVROverlay/OverlayShape Equirect
      static constexpr const int Equirect = 5;
      // Get static field: static public OVROverlay/OverlayShape Equirect
      static GlobalNamespace::OVROverlay::OverlayShape _get_Equirect();
      // Set static field: static public OVROverlay/OverlayShape Equirect
      static void _set_Equirect(GlobalNamespace::OVROverlay::OverlayShape value);
    }; // OVROverlay/OverlayShape
    #pragma pack(pop)
    static check_size<sizeof(OVROverlay::OverlayShape), 0 + sizeof(int)> __GlobalNamespace_OVROverlay_OverlayShapeSizeCheck;
    static_assert(sizeof(OVROverlay::OverlayShape) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVROverlay/OverlayType
    // [] Offset: FFFFFFFF
    struct OverlayType/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: OverlayType
      constexpr OverlayType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVROverlay/OverlayType None
      static constexpr const int None = 0;
      // Get static field: static public OVROverlay/OverlayType None
      static GlobalNamespace::OVROverlay::OverlayType _get_None();
      // Set static field: static public OVROverlay/OverlayType None
      static void _set_None(GlobalNamespace::OVROverlay::OverlayType value);
      // static field const value: static public OVROverlay/OverlayType Underlay
      static constexpr const int Underlay = 1;
      // Get static field: static public OVROverlay/OverlayType Underlay
      static GlobalNamespace::OVROverlay::OverlayType _get_Underlay();
      // Set static field: static public OVROverlay/OverlayType Underlay
      static void _set_Underlay(GlobalNamespace::OVROverlay::OverlayType value);
      // static field const value: static public OVROverlay/OverlayType Overlay
      static constexpr const int Overlay = 2;
      // Get static field: static public OVROverlay/OverlayType Overlay
      static GlobalNamespace::OVROverlay::OverlayType _get_Overlay();
      // Set static field: static public OVROverlay/OverlayType Overlay
      static void _set_Overlay(GlobalNamespace::OVROverlay::OverlayType value);
    }; // OVROverlay/OverlayType
    #pragma pack(pop)
    static check_size<sizeof(OVROverlay::OverlayType), 0 + sizeof(int)> __GlobalNamespace_OVROverlay_OverlayTypeSizeCheck;
    static_assert(sizeof(OVROverlay::OverlayType) == 0x4);
    // Size: 0x20
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVROverlay/LayerTexture
    // [] Offset: FFFFFFFF
    struct LayerTexture/*, public System::ValueType*/ {
      public:
      // public UnityEngine.Texture appTexture
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::Texture* appTexture;
      // Field size check
      static_assert(sizeof(UnityEngine::Texture*) == 0x8);
      // public System.IntPtr appTexturePtr
      // Size: 0x8
      // Offset: 0x8
      System::IntPtr appTexturePtr;
      // Field size check
      static_assert(sizeof(System::IntPtr) == 0x8);
      // public UnityEngine.Texture[] swapChain
      // Size: 0x8
      // Offset: 0x10
      ::Array<UnityEngine::Texture*>* swapChain;
      // Field size check
      static_assert(sizeof(::Array<UnityEngine::Texture*>*) == 0x8);
      // public System.IntPtr[] swapChainPtr
      // Size: 0x8
      // Offset: 0x18
      ::Array<System::IntPtr>* swapChainPtr;
      // Field size check
      static_assert(sizeof(::Array<System::IntPtr>*) == 0x8);
      // Creating value type constructor for type: LayerTexture
      constexpr LayerTexture(UnityEngine::Texture* appTexture_ = {}, System::IntPtr appTexturePtr_ = {}, ::Array<UnityEngine::Texture*>* swapChain_ = {}, ::Array<System::IntPtr>* swapChainPtr_ = {}) noexcept : appTexture{appTexture_}, appTexturePtr{appTexturePtr_}, swapChain{swapChain_}, swapChainPtr{swapChainPtr_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
    }; // OVROverlay/LayerTexture
    #pragma pack(pop)
    static check_size<sizeof(OVROverlay::LayerTexture), 24 + sizeof(::Array<System::IntPtr>*)> __GlobalNamespace_OVROverlay_LayerTextureSizeCheck;
    static_assert(sizeof(OVROverlay::LayerTexture) == 0x20);
    // [TooltipAttribute] Offset: 0xCF8560
    // public OVROverlay/OverlayType currentOverlayType
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVROverlay::OverlayType currentOverlayType;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVROverlay::OverlayType) == 0x4);
    // [TooltipAttribute] Offset: 0xCF8598
    // public System.Boolean isDynamic
    // Size: 0x1
    // Offset: 0x1C
    bool isDynamic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xCF85D0
    // public System.Boolean isProtectedContent
    // Size: 0x1
    // Offset: 0x1D
    bool isProtectedContent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isProtectedContent and: srcRectLeft
    char __padding2[0x2] = {};
    // public UnityEngine.Rect srcRectLeft
    // Size: 0x10
    // Offset: 0x20
    UnityEngine::Rect srcRectLeft;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect srcRectRight
    // Size: 0x10
    // Offset: 0x30
    UnityEngine::Rect srcRectRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect destRectLeft
    // Size: 0x10
    // Offset: 0x40
    UnityEngine::Rect destRectLeft;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // public UnityEngine.Rect destRectRight
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Rect destRectRight;
    // Field size check
    static_assert(sizeof(UnityEngine::Rect) == 0x10);
    // private OVRPlugin/TextureRectMatrixf textureRectMatrix
    // Size: 0x40
    // Offset: 0x60
    GlobalNamespace::OVRPlugin::TextureRectMatrixf textureRectMatrix;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::TextureRectMatrixf) == 0x40);
    // public System.Boolean overrideTextureRectMatrix
    // Size: 0x1
    // Offset: 0xA0
    bool overrideTextureRectMatrix;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean overridePerLayerColorScaleAndOffset
    // Size: 0x1
    // Offset: 0xA1
    bool overridePerLayerColorScaleAndOffset;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overridePerLayerColorScaleAndOffset and: colorScale
    char __padding9[0x2] = {};
    // public UnityEngine.Vector4 colorScale
    // Size: 0x10
    // Offset: 0xA4
    UnityEngine::Vector4 colorScale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // public UnityEngine.Vector4 colorOffset
    // Size: 0x10
    // Offset: 0xB4
    UnityEngine::Vector4 colorOffset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // public System.Boolean useExpensiveSuperSample
    // Size: 0x1
    // Offset: 0xC4
    bool useExpensiveSuperSample;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean hidden
    // Size: 0x1
    // Offset: 0xC5
    bool hidden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [TooltipAttribute] Offset: 0xCF8608
    // public System.Boolean isExternalSurface
    // Size: 0x1
    // Offset: 0xC6
    bool isExternalSurface;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isExternalSurface and: externalSurfaceWidth
    char __padding14[0x1] = {};
    // [TooltipAttribute] Offset: 0xCF8640
    // public System.Int32 externalSurfaceWidth
    // Size: 0x4
    // Offset: 0xC8
    int externalSurfaceWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xCF8678
    // public System.Int32 externalSurfaceHeight
    // Size: 0x4
    // Offset: 0xCC
    int externalSurfaceHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xCF86B0
    // public System.Int32 compositionDepth
    // Size: 0x4
    // Offset: 0xD0
    int compositionDepth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [TooltipAttribute] Offset: 0xCF86E8
    // public System.Boolean noDepthBufferTesting
    // Size: 0x1
    // Offset: 0xD4
    bool noDepthBufferTesting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: noDepthBufferTesting and: currentOverlayShape
    char __padding18[0x3] = {};
    // [TooltipAttribute] Offset: 0xCF8720
    // public OVROverlay/OverlayShape currentOverlayShape
    // Size: 0x4
    // Offset: 0xD8
    GlobalNamespace::OVROverlay::OverlayShape currentOverlayShape;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVROverlay::OverlayShape) == 0x4);
    // private OVROverlay/OverlayShape prevOverlayShape
    // Size: 0x4
    // Offset: 0xDC
    GlobalNamespace::OVROverlay::OverlayShape prevOverlayShape;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVROverlay::OverlayShape) == 0x4);
    // [TooltipAttribute] Offset: 0xCF8758
    // public UnityEngine.Texture[] textures
    // Size: 0x8
    // Offset: 0xE0
    ::Array<UnityEngine::Texture*>* textures;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::Texture*>*) == 0x8);
    // protected System.IntPtr[] texturePtrs
    // Size: 0x8
    // Offset: 0xE8
    ::Array<System::IntPtr>* texturePtrs;
    // Field size check
    static_assert(sizeof(::Array<System::IntPtr>*) == 0x8);
    // public System.IntPtr externalSurfaceObject
    // Size: 0x8
    // Offset: 0xF0
    System::IntPtr externalSurfaceObject;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public OVROverlay/ExternalSurfaceObjectCreated externalSurfaceObjectCreated
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::OVROverlay::ExternalSurfaceObjectCreated* externalSurfaceObjectCreated;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVROverlay::ExternalSurfaceObjectCreated*) == 0x8);
    // protected System.Boolean isOverridePending
    // Size: 0x1
    // Offset: 0x100
    bool isOverridePending;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isOverridePending and: layerTextures
    char __padding25[0x7] = {};
    // private OVROverlay/LayerTexture[] layerTextures
    // Size: 0x8
    // Offset: 0x108
    ::Array<GlobalNamespace::OVROverlay::LayerTexture>* layerTextures;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::OVROverlay::LayerTexture>*) == 0x8);
    // private OVRPlugin/LayerDesc layerDesc
    // Size: 0x3C
    // Offset: 0x110
    GlobalNamespace::OVRPlugin::LayerDesc layerDesc;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::LayerDesc) == 0x3C);
    // Padding between fields: layerDesc and: stageCount
    char __padding27[0x4] = {};
    // private System.Int32 stageCount
    // Size: 0x4
    // Offset: 0x150
    int stageCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 layerIndex
    // Size: 0x4
    // Offset: 0x154
    int layerIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 layerId
    // Size: 0x4
    // Offset: 0x158
    int layerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Runtime.InteropServices.GCHandle layerIdHandle
    // Size: 0x4
    // Offset: 0x15C
    System::Runtime::InteropServices::GCHandle layerIdHandle;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::GCHandle) == 0x4);
    // private System.IntPtr layerIdPtr
    // Size: 0x8
    // Offset: 0x160
    System::IntPtr layerIdPtr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.Int32 frameIndex
    // Size: 0x4
    // Offset: 0x168
    int frameIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 prevFrameIndex
    // Size: 0x4
    // Offset: 0x16C
    int prevFrameIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Renderer rend
    // Size: 0x8
    // Offset: 0x170
    UnityEngine::Renderer* rend;
    // Field size check
    static_assert(sizeof(UnityEngine::Renderer*) == 0x8);
    // private System.UInt64 OpenVROverlayHandle
    // Size: 0x8
    // Offset: 0x178
    uint64_t OpenVROverlayHandle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private UnityEngine.Vector4 OpenVRUVOffsetAndScale
    // Size: 0x10
    // Offset: 0x180
    UnityEngine::Vector4 OpenVRUVOffsetAndScale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector4) == 0x10);
    // private UnityEngine.Vector2 OpenVRMouseScale
    // Size: 0x8
    // Offset: 0x190
    UnityEngine::Vector2 OpenVRMouseScale;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // private OVRManager/XRDevice constructedOverlayXRDevice
    // Size: 0x4
    // Offset: 0x198
    GlobalNamespace::OVRManager::XRDevice constructedOverlayXRDevice;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRManager::XRDevice) == 0x4);
    // private System.Boolean xrDeviceConstructed
    // Size: 0x1
    // Offset: 0x19C
    bool xrDeviceConstructed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: OVROverlay
    OVROverlay(GlobalNamespace::OVROverlay::OverlayType currentOverlayType_ = {}, bool isDynamic_ = {}, bool isProtectedContent_ = {}, UnityEngine::Rect srcRectLeft_ = {}, UnityEngine::Rect srcRectRight_ = {}, UnityEngine::Rect destRectLeft_ = {}, UnityEngine::Rect destRectRight_ = {}, GlobalNamespace::OVRPlugin::TextureRectMatrixf textureRectMatrix_ = {}, bool overrideTextureRectMatrix_ = {}, bool overridePerLayerColorScaleAndOffset_ = {}, UnityEngine::Vector4 colorScale_ = {}, UnityEngine::Vector4 colorOffset_ = {}, bool useExpensiveSuperSample_ = {}, bool hidden_ = {}, bool isExternalSurface_ = {}, int externalSurfaceWidth_ = {}, int externalSurfaceHeight_ = {}, int compositionDepth_ = {}, bool noDepthBufferTesting_ = {}, GlobalNamespace::OVROverlay::OverlayShape currentOverlayShape_ = {}, GlobalNamespace::OVROverlay::OverlayShape prevOverlayShape_ = {}, ::Array<UnityEngine::Texture*>* textures_ = {}, ::Array<System::IntPtr>* texturePtrs_ = {}, System::IntPtr externalSurfaceObject_ = {}, GlobalNamespace::OVROverlay::ExternalSurfaceObjectCreated* externalSurfaceObjectCreated_ = {}, bool isOverridePending_ = {}, ::Array<GlobalNamespace::OVROverlay::LayerTexture>* layerTextures_ = {}, GlobalNamespace::OVRPlugin::LayerDesc layerDesc_ = {}, int stageCount_ = {}, int layerIndex_ = {}, int layerId_ = {}, System::Runtime::InteropServices::GCHandle layerIdHandle_ = {}, System::IntPtr layerIdPtr_ = {}, int frameIndex_ = {}, int prevFrameIndex_ = {}, UnityEngine::Renderer* rend_ = {}, uint64_t OpenVROverlayHandle_ = {}, UnityEngine::Vector4 OpenVRUVOffsetAndScale_ = {}, UnityEngine::Vector2 OpenVRMouseScale_ = {}, GlobalNamespace::OVRManager::XRDevice constructedOverlayXRDevice_ = {}, bool xrDeviceConstructed_ = {}) noexcept : currentOverlayType{currentOverlayType_}, isDynamic{isDynamic_}, isProtectedContent{isProtectedContent_}, srcRectLeft{srcRectLeft_}, srcRectRight{srcRectRight_}, destRectLeft{destRectLeft_}, destRectRight{destRectRight_}, textureRectMatrix{textureRectMatrix_}, overrideTextureRectMatrix{overrideTextureRectMatrix_}, overridePerLayerColorScaleAndOffset{overridePerLayerColorScaleAndOffset_}, colorScale{colorScale_}, colorOffset{colorOffset_}, useExpensiveSuperSample{useExpensiveSuperSample_}, hidden{hidden_}, isExternalSurface{isExternalSurface_}, externalSurfaceWidth{externalSurfaceWidth_}, externalSurfaceHeight{externalSurfaceHeight_}, compositionDepth{compositionDepth_}, noDepthBufferTesting{noDepthBufferTesting_}, currentOverlayShape{currentOverlayShape_}, prevOverlayShape{prevOverlayShape_}, textures{textures_}, texturePtrs{texturePtrs_}, externalSurfaceObject{externalSurfaceObject_}, externalSurfaceObjectCreated{externalSurfaceObjectCreated_}, isOverridePending{isOverridePending_}, layerTextures{layerTextures_}, layerDesc{layerDesc_}, stageCount{stageCount_}, layerIndex{layerIndex_}, layerId{layerId_}, layerIdHandle{layerIdHandle_}, layerIdPtr{layerIdPtr_}, frameIndex{frameIndex_}, prevFrameIndex{prevFrameIndex_}, rend{rend_}, OpenVROverlayHandle{OpenVROverlayHandle_}, OpenVRUVOffsetAndScale{OpenVRUVOffsetAndScale_}, OpenVRMouseScale{OpenVRMouseScale_}, constructedOverlayXRDevice{constructedOverlayXRDevice_}, xrDeviceConstructed{xrDeviceConstructed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static System.Int32 maxInstances
    static constexpr const int maxInstances = 15;
    // Get static field: static System.Int32 maxInstances
    static int _get_maxInstances();
    // Set static field: static System.Int32 maxInstances
    static void _set_maxInstances(int value);
    // Get static field: static public OVROverlay[] instances
    static ::Array<GlobalNamespace::OVROverlay*>* _get_instances();
    // Set static field: static public OVROverlay[] instances
    static void _set_instances(::Array<GlobalNamespace::OVROverlay*>* value);
    // Get static field: static private UnityEngine.Material tex2DMaterial
    static UnityEngine::Material* _get_tex2DMaterial();
    // Set static field: static private UnityEngine.Material tex2DMaterial
    static void _set_tex2DMaterial(UnityEngine::Material* value);
    // Get static field: static private UnityEngine.Material cubeMaterial
    static UnityEngine::Material* _get_cubeMaterial();
    // Set static field: static private UnityEngine.Material cubeMaterial
    static void _set_cubeMaterial(UnityEngine::Material* value);
    // public System.Void OverrideOverlayTextureInfo(UnityEngine.Texture srcTexture, System.IntPtr nativePtr, UnityEngine.XR.XRNode node)
    // Offset: 0x1452D18
    void OverrideOverlayTextureInfo(UnityEngine::Texture* srcTexture, System::IntPtr nativePtr, UnityEngine::XR::XRNode node);
    // private OVRPlugin/LayerLayout get_layout()
    // Offset: 0x1452DE8
    GlobalNamespace::OVRPlugin::LayerLayout get_layout();
    // private System.Int32 get_texturesPerStage()
    // Offset: 0x1452E84
    int get_texturesPerStage();
    // private System.Boolean CreateLayer(System.Int32 mipLevels, System.Int32 sampleCount, OVRPlugin/EyeTextureFormat etFormat, System.Int32 flags, OVRPlugin/Sizei size, OVRPlugin/OverlayShape shape)
    // Offset: 0x1452EA4
    bool CreateLayer(int mipLevels, int sampleCount, GlobalNamespace::OVRPlugin::EyeTextureFormat etFormat, int flags, GlobalNamespace::OVRPlugin::Sizei size, GlobalNamespace::OVRPlugin::OverlayShape shape);
    // private System.Boolean CreateLayerTextures(System.Boolean useMipmaps, OVRPlugin/Sizei size, System.Boolean isHdr)
    // Offset: 0x1453834
    bool CreateLayerTextures(bool useMipmaps, GlobalNamespace::OVRPlugin::Sizei size, bool isHdr);
    // private System.Void DestroyLayerTextures()
    // Offset: 0x14541E8
    void DestroyLayerTextures();
    // private System.Void DestroyLayer()
    // Offset: 0x1454350
    void DestroyLayer();
    // public System.Void SetSrcDestRects(UnityEngine.Rect srcLeft, UnityEngine.Rect srcRight, UnityEngine.Rect destLeft, UnityEngine.Rect destRight)
    // Offset: 0x1454D88
    void SetSrcDestRects(UnityEngine::Rect srcLeft, UnityEngine::Rect srcRight, UnityEngine::Rect destLeft, UnityEngine::Rect destRight);
    // public System.Void UpdateTextureRectMatrix()
    // Offset: 0x1454DA4
    void UpdateTextureRectMatrix();
    // public System.Void SetPerLayerColorScaleAndOffset(UnityEngine.Vector4 scale, UnityEngine.Vector4 offset)
    // Offset: 0x145503C
    void SetPerLayerColorScaleAndOffset(UnityEngine::Vector4 scale, UnityEngine::Vector4 offset);
    // private System.Boolean LatchLayerTextures()
    // Offset: 0x1455050
    bool LatchLayerTextures();
    // private OVRPlugin/LayerDesc GetCurrentLayerDesc()
    // Offset: 0x145549C
    GlobalNamespace::OVRPlugin::LayerDesc GetCurrentLayerDesc();
    // private System.Boolean PopulateLayer(System.Int32 mipLevels, System.Boolean isHdr, OVRPlugin/Sizei size, System.Int32 sampleCount, System.Int32 stage)
    // Offset: 0x1455968
    bool PopulateLayer(int mipLevels, bool isHdr, GlobalNamespace::OVRPlugin::Sizei size, int sampleCount, int stage);
    // private System.Boolean SubmitLayer(System.Boolean overlay, System.Boolean headLocked, System.Boolean noDepthBufferTesting, OVRPose pose, UnityEngine.Vector3 scale, System.Int32 frameIndex)
    // Offset: 0x1455E08
    bool SubmitLayer(bool overlay, bool headLocked, bool noDepthBufferTesting, GlobalNamespace::OVRPose pose, UnityEngine::Vector3 scale, int frameIndex);
    // private System.Void Awake()
    // Offset: 0x145609C
    void Awake();
    // static public System.String get_OpenVROverlayKey()
    // Offset: 0x14563F8
    static ::Il2CppString* get_OpenVROverlayKey();
    // private System.Void OnEnable()
    // Offset: 0x1456470
    void OnEnable();
    // private System.Void InitOVROverlay()
    // Offset: 0x14564F0
    void InitOVROverlay();
    // private System.Void OnDisable()
    // Offset: 0x145669C
    void OnDisable();
    // private System.Void OnDestroy()
    // Offset: 0x1456808
    void OnDestroy();
    // private System.Boolean ComputeSubmit(ref OVRPose pose, ref UnityEngine.Vector3 scale, ref System.Boolean overlay, ref System.Boolean headLocked)
    // Offset: 0x145682C
    bool ComputeSubmit(GlobalNamespace::OVRPose& pose, UnityEngine::Vector3& scale, bool& overlay, bool& headLocked);
    // private System.Void OpenVROverlayUpdate(UnityEngine.Vector3 scale, OVRPose pose)
    // Offset: 0x1456C78
    void OpenVROverlayUpdate(UnityEngine::Vector3 scale, GlobalNamespace::OVRPose pose);
    // private System.Void LateUpdate()
    // Offset: 0x1456FBC
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x14574B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVROverlay* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVROverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVROverlay*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x145766C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVROverlay
  #pragma pack(pop)
  static check_size<sizeof(OVROverlay), 412 + sizeof(bool)> __GlobalNamespace_OVROverlaySizeCheck;
  static_assert(sizeof(OVROverlay) == 0x19D);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlay*, "", "OVROverlay");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlay::OverlayShape, "", "OVROverlay/OverlayShape");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlay::OverlayType, "", "OVROverlay/OverlayType");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlay::LayerTexture, "", "OVROverlay/LayerTexture");
