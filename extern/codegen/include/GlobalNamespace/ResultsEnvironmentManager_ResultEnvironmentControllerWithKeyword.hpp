// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ResultsEnvironmentManager
#include "GlobalNamespace/ResultsEnvironmentManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BaseResultsEnvironmentController
  class BaseResultsEnvironmentController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword
  // [] Offset: FFFFFFFF
  class ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword : public ::Il2CppObject {
    public:
    // private System.String _keyword
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* keyword;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private BaseResultsEnvironmentController _resultsEnvironmentController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BaseResultsEnvironmentController* resultsEnvironmentController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BaseResultsEnvironmentController*) == 0x8);
    // Creating value type constructor for type: ResultEnvironmentControllerWithKeyword
    ResultEnvironmentControllerWithKeyword(::Il2CppString* keyword_ = {}, GlobalNamespace::BaseResultsEnvironmentController* resultsEnvironmentController_ = {}) noexcept : keyword{keyword_}, resultsEnvironmentController{resultsEnvironmentController_} {}
    // public System.String get_keyword()
    // Offset: 0x107E1D0
    ::Il2CppString* get_keyword();
    // public BaseResultsEnvironmentController get_resultsEnvironmentController()
    // Offset: 0x107E1D8
    GlobalNamespace::BaseResultsEnvironmentController* get_resultsEnvironmentController();
    // public System.Void .ctor()
    // Offset: 0x107E1E0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*, creationType>()));
    }
  }; // ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword
  #pragma pack(pop)
  static check_size<sizeof(ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword), 24 + sizeof(GlobalNamespace::BaseResultsEnvironmentController*)> __GlobalNamespace_ResultsEnvironmentManager_ResultEnvironmentControllerWithKeywordSizeCheck;
  static_assert(sizeof(ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResultsEnvironmentManager::ResultEnvironmentControllerWithKeyword*, "", "ResultsEnvironmentManager/ResultEnvironmentControllerWithKeyword");
