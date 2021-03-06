// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: InternetConnectionChecker
  // [] Offset: FFFFFFFF
  class InternetConnectionChecker : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::InternetConnectionChecker::$IsConnectedToInternetAsync$d__0
    struct $IsConnectedToInternetAsync$d__0;
    // Creating value type constructor for type: InternetConnectionChecker
    InternetConnectionChecker() noexcept {}
    // static public System.Threading.Tasks.Task`1<System.Boolean> IsConnectedToInternetAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x22A98A8
    static System::Threading::Tasks::Task_1<bool>* IsConnectedToInternetAsync(System::Threading::CancellationToken cancellationToken);
    // public System.Void .ctor()
    // Offset: 0x22A99B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InternetConnectionChecker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::InternetConnectionChecker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InternetConnectionChecker*, creationType>()));
    }
  }; // InternetConnectionChecker
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InternetConnectionChecker*, "", "InternetConnectionChecker");
