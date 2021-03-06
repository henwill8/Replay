// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BloomPrePassRenderDataSO
#include "GlobalNamespace/BloomPrePassRenderDataSO.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA4
  #pragma pack(push, 1)
  // Autogenerated type: BloomPrePassRenderDataSO/Data
  // [] Offset: FFFFFFFF
  class BloomPrePassRenderDataSO::Data : public ::Il2CppObject {
    public:
    // public UnityEngine.RenderTexture bloomPrePassRenderTexture
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::RenderTexture* bloomPrePassRenderTexture;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // public UnityEngine.Vector2 textureToScreenRatio
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Vector2 textureToScreenRatio;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Matrix4x4 viewMatrix
    // Size: 0x40
    // Offset: 0x20
    UnityEngine::Matrix4x4 viewMatrix;
    // Field size check
    static_assert(sizeof(UnityEngine::Matrix4x4) == 0x40);
    // public UnityEngine.Matrix4x4 projectionMatrix
    // Size: 0x40
    // Offset: 0x60
    UnityEngine::Matrix4x4 projectionMatrix;
    // Field size check
    static_assert(sizeof(UnityEngine::Matrix4x4) == 0x40);
    // public System.Single stereoCameraEyeOffset
    // Size: 0x4
    // Offset: 0xA0
    float stereoCameraEyeOffset;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: Data
    Data(UnityEngine::RenderTexture* bloomPrePassRenderTexture_ = {}, UnityEngine::Vector2 textureToScreenRatio_ = {}, UnityEngine::Matrix4x4 viewMatrix_ = {}, UnityEngine::Matrix4x4 projectionMatrix_ = {}, float stereoCameraEyeOffset_ = {}) noexcept : bloomPrePassRenderTexture{bloomPrePassRenderTexture_}, textureToScreenRatio{textureToScreenRatio_}, viewMatrix{viewMatrix_}, projectionMatrix{projectionMatrix_}, stereoCameraEyeOffset{stereoCameraEyeOffset_} {}
    // public System.Void .ctor()
    // Offset: 0x1D97488
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BloomPrePassRenderDataSO::Data* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BloomPrePassRenderDataSO::Data::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BloomPrePassRenderDataSO::Data*, creationType>()));
    }
  }; // BloomPrePassRenderDataSO/Data
  #pragma pack(pop)
  static check_size<sizeof(BloomPrePassRenderDataSO::Data), 160 + sizeof(float)> __GlobalNamespace_BloomPrePassRenderDataSO_DataSizeCheck;
  static_assert(sizeof(BloomPrePassRenderDataSO::Data) == 0xA4);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassRenderDataSO::Data*, "", "BloomPrePassRenderDataSO/Data");
