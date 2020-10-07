// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: OVRMeshRenderer
#include "GlobalNamespace/OVRMeshRenderer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRMeshRenderer/MeshRendererData
  struct OVRMeshRenderer::MeshRendererData : public System::ValueType {
    public:
    // private System.Boolean <IsDataValid>k__BackingField
    // Offset: 0x0
    bool IsDataValid;
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Offset: 0x1
    bool IsDataHighConfidence;
    // private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    // Offset: 0x2
    bool ShouldUseSystemGestureMaterial;
    // Creating value type constructor for type: MeshRendererData
    constexpr MeshRendererData(bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}, bool ShouldUseSystemGestureMaterial_ = {}) noexcept : IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_}, ShouldUseSystemGestureMaterial{ShouldUseSystemGestureMaterial_} {}
    // public System.Boolean get_IsDataValid()
    // Offset: 0xA399D0
    bool get_IsDataValid();
    // public System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0xA399D8
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0xA399E4
    bool get_IsDataHighConfidence();
    // public System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0xA399EC
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_ShouldUseSystemGestureMaterial()
    // Offset: 0xA399F8
    bool get_ShouldUseSystemGestureMaterial();
    // public System.Void set_ShouldUseSystemGestureMaterial(System.Boolean value)
    // Offset: 0xA39A00
    void set_ShouldUseSystemGestureMaterial(bool value);
  }; // OVRMeshRenderer/MeshRendererData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshRenderer::MeshRendererData, "", "OVRMeshRenderer/MeshRendererData");
#pragma pack(pop)
