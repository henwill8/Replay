// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetDetails
  class AssetDetails;
  // Forward declaring type: AssetFileDownloadResult
  class AssetFileDownloadResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.LanguagePack
  // [] Offset: FFFFFFFF
  class LanguagePack : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: LanguagePack
    LanguagePack() noexcept {}
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetDetails> GetCurrent()
    // Offset: 0x13E1CF8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetDetails*>* GetCurrent();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadResult> SetCurrent(System.String tag)
    // Offset: 0x13E1E04
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadResult*>* SetCurrent(::Il2CppString* tag);
  }; // Oculus.Platform.LanguagePack
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::LanguagePack*, "Oculus.Platform", "LanguagePack");
