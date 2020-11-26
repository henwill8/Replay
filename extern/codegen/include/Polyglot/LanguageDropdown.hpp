// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
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
  // Autogenerated type: Polyglot.LanguageDropdown
  class LanguageDropdown : public UnityEngine::MonoBehaviour/*, public Polyglot::ILocalize*/ {
    public:
    // private UnityEngine.UI.Dropdown dropdown
    // Offset: 0x18
    UnityEngine::UI::Dropdown* dropdown;
    // Creating interface conversion operator: operator Polyglot::ILocalize
    operator Polyglot::ILocalize() noexcept {
      return *reinterpret_cast<Polyglot::ILocalize*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Reset()
    // Offset: 0x1984854
    void Reset();
    // public System.Void Start()
    // Offset: 0x19848B4
    void Start();
    // private System.Void CreateDropdown()
    // Offset: 0x19848E4
    void CreateDropdown();
    // public System.Void OnLocalize()
    // Offset: 0x1984DD4
    // Implemented from: Polyglot.ILocalize
    // Base method: System.Void ILocalize::OnLocalize()
    void OnLocalize();
    // public System.Void .ctor()
    // Offset: 0x1984F08
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LanguageDropdown* New_ctor();
  }; // Polyglot.LanguageDropdown
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::LanguageDropdown*, "Polyglot", "LanguageDropdown");
#pragma pack(pop)
