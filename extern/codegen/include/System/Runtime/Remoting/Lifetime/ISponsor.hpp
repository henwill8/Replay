// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Forward declaring namespace: System::Runtime::Remoting::Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: ILease
  class ILease;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Lifetime.ISponsor
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAB900
  class ISponsor {
    public:
    // Creating value type constructor for type: ISponsor
    ISponsor() noexcept {}
    // public System.TimeSpan Renewal(System.Runtime.Remoting.Lifetime.ILease lease)
    // Offset: 0xFFFFFFFF
    System::TimeSpan Renewal(System::Runtime::Remoting::Lifetime::ILease* lease);
  }; // System.Runtime.Remoting.Lifetime.ISponsor
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::ISponsor*, "System.Runtime.Remoting.Lifetime", "ISponsor");
