// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AchievementProgress
  class AchievementProgress;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Platform.Models.AchievementProgressList
  // [] Offset: FFFFFFFF
  class AchievementProgressList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::AchievementProgress*> {
    public:
    // Creating value type constructor for type: AchievementProgressList
    AchievementProgressList() noexcept {}
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0x13E8C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AchievementProgressList* New_ctor(System::IntPtr a) {
      static auto ___internal__logger = ::Logger::get().WithContext("Oculus::Platform::Models::AchievementProgressList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AchievementProgressList*, creationType>(a)));
    }
  }; // Oculus.Platform.Models.AchievementProgressList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::AchievementProgressList*, "Oculus.Platform.Models", "AchievementProgressList");
