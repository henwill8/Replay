// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.InteractionSystem
#include "RootMotion/FinalIK/InteractionSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: FullBodyBipedEffector
  struct FullBodyBipedEffector;
  // Forward declaring type: InteractionObject
  class InteractionObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.FinalIK.InteractionSystem/InteractionDelegate
  // [] Offset: FFFFFFFF
  class InteractionSystem::InteractionDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: InteractionDelegate
    InteractionDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C399B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionSystem::InteractionDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::FinalIK::InteractionSystem::InteractionDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionSystem::InteractionDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(RootMotion.FinalIK.FullBodyBipedEffector effectorType, RootMotion.FinalIK.InteractionObject interactionObject)
    // Offset: 0x1C3337C
    void Invoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject* interactionObject);
    // public System.IAsyncResult BeginInvoke(RootMotion.FinalIK.FullBodyBipedEffector effectorType, RootMotion.FinalIK.InteractionObject interactionObject, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C3AFFC
    System::IAsyncResult* BeginInvoke(RootMotion::FinalIK::FullBodyBipedEffector effectorType, RootMotion::FinalIK::InteractionObject* interactionObject, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C3B094
    void EndInvoke(System::IAsyncResult* result);
  }; // RootMotion.FinalIK.InteractionSystem/InteractionDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::InteractionSystem::InteractionDelegate*, "RootMotion.FinalIK", "InteractionSystem/InteractionDelegate");
