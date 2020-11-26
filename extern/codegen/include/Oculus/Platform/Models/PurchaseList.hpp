// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.PurchaseList
  class PurchaseList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Purchase*> {
    public:
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0x11DEA78
    static PurchaseList* New_ctor(System::IntPtr a);
  }; // Oculus.Platform.Models.PurchaseList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PurchaseList*, "Oculus.Platform.Models", "PurchaseList");
#pragma pack(pop)
