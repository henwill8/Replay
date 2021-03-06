// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Dropdown
  class Dropdown;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Polyglot.LanguageDropdown
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: D22354
  // [AddComponentMenu] Offset: D22354
  class LanguageDropdown : public UnityEngine::MonoBehaviour/*, public Polyglot::ILocalize*/ {
    public:
    // [TooltipAttribute] Offset: 0xD2264C
    // private UnityEngine.UI.Dropdown dropdown
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::UI::Dropdown* dropdown;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Dropdown*) == 0x8);
    // Creating value type constructor for type: LanguageDropdown
    LanguageDropdown(UnityEngine::UI::Dropdown* dropdown_ = {}) noexcept : dropdown{dropdown_} {}
    // Creating interface conversion operator: operator Polyglot::ILocalize
    operator Polyglot::ILocalize() noexcept {
      return *reinterpret_cast<Polyglot::ILocalize*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Reset()
    // Offset: 0x2249FC4
    void Reset();
    // public System.Void Start()
    // Offset: 0x224A024
    void Start();
    // private System.Void CreateDropdown()
    // Offset: 0x224A054
    void CreateDropdown();
    // public System.Void OnLocalize()
    // Offset: 0x224A544
    // Implemented from: Polyglot.ILocalize
    // Base method: System.Void ILocalize::OnLocalize()
    void OnLocalize();
    // public System.Void .ctor()
    // Offset: 0x224A678
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LanguageDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Polyglot::LanguageDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LanguageDropdown*, creationType>()));
    }
  }; // Polyglot.LanguageDropdown
  #pragma pack(pop)
  static check_size<sizeof(LanguageDropdown), 24 + sizeof(UnityEngine::UI::Dropdown*)> __Polyglot_LanguageDropdownSizeCheck;
  static_assert(sizeof(LanguageDropdown) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LanguageDropdown*, "Polyglot", "LanguageDropdown");
