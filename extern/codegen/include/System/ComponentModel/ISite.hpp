// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.IServiceProvider
#include "System/IServiceProvider.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: IContainer
  class IContainer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.ISite
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CB5EA8
  class ISite/*, public System::IServiceProvider*/ {
    public:
    // Creating value type constructor for type: ISite
    ISite() noexcept {}
    // Creating interface conversion operator: operator System::IServiceProvider
    operator System::IServiceProvider() noexcept {
      return *reinterpret_cast<System::IServiceProvider*>(this);
    }
    // public System.ComponentModel.IContainer get_Container()
    // Offset: 0xFFFFFFFF
    System::ComponentModel::IContainer* get_Container();
    // public System.Boolean get_DesignMode()
    // Offset: 0xFFFFFFFF
    bool get_DesignMode();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Name();
  }; // System.ComponentModel.ISite
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::ISite*, "System.ComponentModel", "ISite");
