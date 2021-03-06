// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
// Including type: UnityEngine.UI.IMaterialModifier
#include "UnityEngine/UI/IMaterialModifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Mask
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: CEEECC
  // [ExecuteAlways] Offset: CEEECC
  // [RequireComponent] Offset: CEEECC
  // [DisallowMultipleComponent] Offset: CEEECC
  class Mask : public UnityEngine::EventSystems::UIBehaviour/*, public UnityEngine::ICanvasRaycastFilter, public UnityEngine::UI::IMaterialModifier*/ {
    public:
    // private UnityEngine.RectTransform m_RectTransform
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::RectTransform* m_RectTransform;
    // Field size check
    static_assert(sizeof(UnityEngine::RectTransform*) == 0x8);
    // private System.Boolean m_ShowMaskGraphic
    // Size: 0x1
    // Offset: 0x20
    bool m_ShowMaskGraphic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ShowMaskGraphic and: m_Graphic
    char __padding1[0x7] = {};
    // private UnityEngine.UI.Graphic m_Graphic
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Graphic* m_Graphic;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Graphic*) == 0x8);
    // private UnityEngine.Material m_MaskMaterial
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Material* m_MaskMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material m_UnmaskMaterial
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Material* m_UnmaskMaterial;
    // Field size check
    static_assert(sizeof(UnityEngine::Material*) == 0x8);
    // Creating value type constructor for type: Mask
    Mask(UnityEngine::RectTransform* m_RectTransform_ = {}, bool m_ShowMaskGraphic_ = {}, UnityEngine::UI::Graphic* m_Graphic_ = {}, UnityEngine::Material* m_MaskMaterial_ = {}, UnityEngine::Material* m_UnmaskMaterial_ = {}) noexcept : m_RectTransform{m_RectTransform_}, m_ShowMaskGraphic{m_ShowMaskGraphic_}, m_Graphic{m_Graphic_}, m_MaskMaterial{m_MaskMaterial_}, m_UnmaskMaterial{m_UnmaskMaterial_} {}
    // Creating interface conversion operator: operator UnityEngine::ICanvasRaycastFilter
    operator UnityEngine::ICanvasRaycastFilter() noexcept {
      return *reinterpret_cast<UnityEngine::ICanvasRaycastFilter*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::UI::IMaterialModifier
    operator UnityEngine::UI::IMaterialModifier() noexcept {
      return *reinterpret_cast<UnityEngine::UI::IMaterialModifier*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x18E5D30
    UnityEngine::RectTransform* get_rectTransform();
    // public System.Boolean get_showMaskGraphic()
    // Offset: 0x18E5DB0
    bool get_showMaskGraphic();
    // public System.Void set_showMaskGraphic(System.Boolean value)
    // Offset: 0x18E5DB8
    void set_showMaskGraphic(bool value);
    // public UnityEngine.UI.Graphic get_graphic()
    // Offset: 0x18E5E90
    UnityEngine::UI::Graphic* get_graphic();
    // public System.Boolean MaskEnabled()
    // Offset: 0x18E5F20
    bool MaskEnabled();
    // public System.Void OnSiblingGraphicEnabledDisabled()
    // Offset: 0x18E5FC0
    void OnSiblingGraphicEnabledDisabled();
    // protected System.Void .ctor()
    // Offset: 0x18E5F10
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Mask* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::UI::Mask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Mask*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x18E5FC4
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x18E6394
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x18E6580
    // Implemented from: UnityEngine.ICanvasRaycastFilter
    // Base method: System.Boolean ICanvasRaycastFilter::IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    bool IsRaycastLocationValid(UnityEngine::Vector2 sp, UnityEngine::Camera* eventCamera);
    // public UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0x18E6648
    // Implemented from: UnityEngine.UI.IMaterialModifier
    // Base method: UnityEngine.Material IMaterialModifier::GetModifiedMaterial(UnityEngine.Material baseMaterial)
    UnityEngine::Material* GetModifiedMaterial(UnityEngine::Material* baseMaterial);
  }; // UnityEngine.UI.Mask
  #pragma pack(pop)
  static check_size<sizeof(Mask), 56 + sizeof(UnityEngine::Material*)> __UnityEngine_UI_MaskSizeCheck;
  static_assert(sizeof(Mask) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Mask*, "UnityEngine.UI", "Mask");
