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
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.SaveLanguagePreference
  class SaveLanguagePreference : public UnityEngine::MonoBehaviour/*, public Polyglot::ILocalize*/ {
    public:
    // private System.String preferenceKey
    // Offset: 0x18
    ::Il2CppString* preferenceKey;
    // Creating interface conversion operator: operator Polyglot::ILocalize
    operator Polyglot::ILocalize() noexcept {
      return *reinterpret_cast<Polyglot::ILocalize*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void Start()
    // Offset: 0x1987BCC
    void Start();
    // public System.Void OnLocalize()
    // Offset: 0x1987C20
    // Implemented from: Polyglot.ILocalize
    // Base method: System.Void ILocalize::OnLocalize()
    void OnLocalize();
    // public System.Void .ctor()
    // Offset: 0x1987C54
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaveLanguagePreference* New_ctor();
  }; // Polyglot.SaveLanguagePreference
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Polyglot::SaveLanguagePreference*, "Polyglot", "SaveLanguagePreference");
#pragma pack(pop)