// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionReturnMessage
  class IConstructionReturnMessage;
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Activation.IActivator
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CABB2C
  class IActivator {
    public:
    // Creating value type constructor for type: IActivator
    IActivator() noexcept {}
    // public System.Runtime.Remoting.Activation.IActivator get_NextActivator()
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
    // public System.Runtime.Remoting.Activation.IConstructionReturnMessage Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
  }; // System.Runtime.Remoting.Activation.IActivator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::IActivator*, "System.Runtime.Remoting.Activation", "IActivator");
