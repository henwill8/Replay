// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OnRenderImageTest
  // [] Offset: FFFFFFFF
  class OnRenderImageTest : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.RenderTexture _rt
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RenderTexture* rt;
    // Field size check
    static_assert(sizeof(UnityEngine::RenderTexture*) == 0x8);
    // private UnityEngine.Material _stereoCopyMaterial
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Material* stereoCopyMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: OnRenderImageTest
    OnRenderImageTest(UnityEngine::RenderTexture* rt_ = {}, UnityEngine::Material* stereoCopyMaterial_ = {}) noexcept : rt{rt_}, stereoCopyMaterial{stereoCopyMaterial_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0xF14CA8
    void Start();
    // private System.Void OnRenderImage(UnityEngine.RenderTexture source, UnityEngine.RenderTexture destination)
    // Offset: 0xF14D8C
    void OnRenderImage(UnityEngine::RenderTexture* source, UnityEngine::RenderTexture* destination);
    // public System.Void .ctor()
    // Offset: 0xF14E28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnRenderImageTest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OnRenderImageTest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnRenderImageTest*, creationType>()));
    }
  }; // OnRenderImageTest
  #pragma pack(pop)
  static check_size<sizeof(OnRenderImageTest), 32 + sizeof(UnityEngine::Material*)> __GlobalNamespace_OnRenderImageTestSizeCheck;
  static_assert(sizeof(OnRenderImageTest) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OnRenderImageTest*, "", "OnRenderImageTest");
