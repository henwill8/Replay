// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: ProductList
  class ProductList;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.MessageWithProductList
  class MessageWithProductList : public Oculus::Platform::Message_1<Oculus::Platform::Models::ProductList*> {
    public:
    // protected Oculus.Platform.Models.ProductList GetDataFromMessage(System.IntPtr c_message)
    // Offset: 0x11DE53C
    Oculus::Platform::Models::ProductList* GetDataFromMessage(System::IntPtr c_message);
    // public System.Void .ctor(System.IntPtr c_message)
    // Offset: 0x11D63E8
    // Implemented from: Oculus.Platform.Message`1
    // Base method: System.Void Message_1::.ctor(System.IntPtr c_message)
    // Base method: System.Void Message::.ctor(System.IntPtr c_message)
    static MessageWithProductList* New_ctor(System::IntPtr c_message);
    // public override Oculus.Platform.Models.ProductList GetProductList()
    // Offset: 0x11DE4F8
    // Implemented from: Oculus.Platform.Message
    // Base method: Oculus.Platform.Models.ProductList Message::GetProductList()
    Oculus::Platform::Models::ProductList* GetProductList();
  }; // Oculus.Platform.MessageWithProductList
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MessageWithProductList*, "Oculus.Platform", "MessageWithProductList");
#pragma pack(pop)
