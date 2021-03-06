// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: PyramidBloomRendererSO
  // [] Offset: FFFFFFFF
  class PyramidBloomRendererSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // Nested type: GlobalNamespace::PyramidBloomRendererSO::Pass
    struct Pass;
    // Nested type: GlobalNamespace::PyramidBloomRendererSO::Level
    struct Level;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: PyramidBloomRendererSO/Level
    // [] Offset: FFFFFFFF
    struct Level/*, public System::ValueType*/ {
      public:
      // UnityEngine.RenderTexture down
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::RenderTexture* down;
      // Field size check
      static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
      // UnityEngine.RenderTexture up
      // Size: 0x8
      // Offset: 0x8
      UnityEngine::RenderTexture* up;
      // Field size check
      static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
      // Creating value type constructor for type: Level
      constexpr Level(UnityEngine::RenderTexture* down_ = {}, UnityEngine::RenderTexture* up_ = {}) noexcept : down{down_}, up{up_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
    }; // PyramidBloomRendererSO/Level
    #pragma pack(pop)
    static check_size<sizeof(PyramidBloomRendererSO::Level), 8 + sizeof(UnityEngine::RenderTexture*)> __GlobalNamespace_PyramidBloomRendererSO_LevelSizeCheck;
    static_assert(sizeof(PyramidBloomRendererSO::Level) == 0x10);
    // private UnityEngine.Shader _shader
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Shader* shader;
    // Field size check
    static_assert(sizeof(UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Material _material
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Material* material;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private PyramidBloomRendererSO/Level[] _pyramid
    // Size: 0x8
    // Offset: 0x28
    ::Array<GlobalNamespace::PyramidBloomRendererSO::Level>* pyramid;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::PyramidBloomRendererSO::Level>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x30
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PyramidBloomRendererSO
    PyramidBloomRendererSO(UnityEngine::Shader* shader_ = {}, UnityEngine::Material* material_ = {}, ::Array<GlobalNamespace::PyramidBloomRendererSO::Level>* pyramid_ = {}, bool initialized_ = {}) noexcept : shader{shader_}, material{material_}, pyramid{pyramid_}, initialized{initialized_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Int32 kMaxPyramidSize
    static constexpr const int kMaxPyramidSize = 16;
    // Get static field: static private System.Int32 kMaxPyramidSize
    static int _get_kMaxPyramidSize();
    // Set static field: static private System.Int32 kMaxPyramidSize
    static void _set_kMaxPyramidSize(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD16020
    // Get static field: static private readonly System.Int32 _bloomTexID
    static int _get__bloomTexID();
    // Set static field: static private readonly System.Int32 _bloomTexID
    static void _set__bloomTexID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD16030
    // Get static field: static private readonly System.Int32 _sampleScaleID
    static int _get__sampleScaleID();
    // Set static field: static private readonly System.Int32 _sampleScaleID
    static void _set__sampleScaleID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD16040
    // Get static field: static private readonly System.Int32 _combineSrcID
    static int _get__combineSrcID();
    // Set static field: static private readonly System.Int32 _combineSrcID
    static void _set__combineSrcID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD16050
    // Get static field: static private readonly System.Int32 _combineDstID
    static int _get__combineDstID();
    // Set static field: static private readonly System.Int32 _combineDstID
    static void _set__combineDstID(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD16060
    // Get static field: static private readonly System.Int32 _alphaWeightsID
    static int _get__alphaWeightsID();
    // Set static field: static private readonly System.Int32 _alphaWeightsID
    static void _set__alphaWeightsID(int value);
    // protected System.Void OnDisable()
    // Offset: 0x1DA41E0
    void OnDisable();
    // public System.Void RenderBloom(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single radius, System.Boolean alphaWeights, System.Boolean betterQuality, System.Boolean gammaCorrection)
    // Offset: 0x1DA4218
    void RenderBloom(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float radius, bool alphaWeights, bool betterQuality, bool gammaCorrection);
    // public System.Void RenderBloom(UnityEngine.RenderTexture src, UnityEngine.RenderTexture dest, System.Single radius, System.Single intensity, System.Single downIntensityOffset, System.Boolean uniformPyramidWeights, System.Boolean downsampleOnFirstPass, System.Single pyramidWeightsParam, System.Single alphaWeights, PyramidBloomRendererSO/Pass preFilterPass, PyramidBloomRendererSO/Pass downsamplePass, PyramidBloomRendererSO/Pass upsamplePass, PyramidBloomRendererSO/Pass finalUpsamplePass)
    // Offset: 0x1DA428C
    void RenderBloom(UnityEngine::RenderTexture* src, UnityEngine::RenderTexture* dest, float radius, float intensity, float downIntensityOffset, bool uniformPyramidWeights, bool downsampleOnFirstPass, float pyramidWeightsParam, float alphaWeights, GlobalNamespace::PyramidBloomRendererSO::Pass preFilterPass, GlobalNamespace::PyramidBloomRendererSO::Pass downsamplePass, GlobalNamespace::PyramidBloomRendererSO::Pass upsamplePass, GlobalNamespace::PyramidBloomRendererSO::Pass finalUpsamplePass);
    // protected override System.Void OnEnable()
    // Offset: 0x1DA4080
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::OnEnable()
    void OnEnable();
    // public System.Void .ctor()
    // Offset: 0x1DA4A78
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PyramidBloomRendererSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PyramidBloomRendererSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PyramidBloomRendererSO*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x1DA4A80
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // PyramidBloomRendererSO
  #pragma pack(pop)
  static check_size<sizeof(PyramidBloomRendererSO), 48 + sizeof(bool)> __GlobalNamespace_PyramidBloomRendererSOSizeCheck;
  static_assert(sizeof(PyramidBloomRendererSO) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PyramidBloomRendererSO*, "", "PyramidBloomRendererSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PyramidBloomRendererSO::Level, "", "PyramidBloomRendererSO/Level");
