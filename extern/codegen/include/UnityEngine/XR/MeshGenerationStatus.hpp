// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Autogenerated type: UnityEngine.XR.MeshGenerationStatus
  struct MeshGenerationStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: MeshGenerationStatus
    constexpr MeshGenerationStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.MeshGenerationStatus Success
    static constexpr const int Success = 0;
    // Get static field: static public UnityEngine.XR.MeshGenerationStatus Success
    static UnityEngine::XR::MeshGenerationStatus _get_Success();
    // Set static field: static public UnityEngine.XR.MeshGenerationStatus Success
    static void _set_Success(UnityEngine::XR::MeshGenerationStatus value);
    // static field const value: static public UnityEngine.XR.MeshGenerationStatus InvalidMeshId
    static constexpr const int InvalidMeshId = 1;
    // Get static field: static public UnityEngine.XR.MeshGenerationStatus InvalidMeshId
    static UnityEngine::XR::MeshGenerationStatus _get_InvalidMeshId();
    // Set static field: static public UnityEngine.XR.MeshGenerationStatus InvalidMeshId
    static void _set_InvalidMeshId(UnityEngine::XR::MeshGenerationStatus value);
    // static field const value: static public UnityEngine.XR.MeshGenerationStatus GenerationAlreadyInProgress
    static constexpr const int GenerationAlreadyInProgress = 2;
    // Get static field: static public UnityEngine.XR.MeshGenerationStatus GenerationAlreadyInProgress
    static UnityEngine::XR::MeshGenerationStatus _get_GenerationAlreadyInProgress();
    // Set static field: static public UnityEngine.XR.MeshGenerationStatus GenerationAlreadyInProgress
    static void _set_GenerationAlreadyInProgress(UnityEngine::XR::MeshGenerationStatus value);
    // static field const value: static public UnityEngine.XR.MeshGenerationStatus Canceled
    static constexpr const int Canceled = 3;
    // Get static field: static public UnityEngine.XR.MeshGenerationStatus Canceled
    static UnityEngine::XR::MeshGenerationStatus _get_Canceled();
    // Set static field: static public UnityEngine.XR.MeshGenerationStatus Canceled
    static void _set_Canceled(UnityEngine::XR::MeshGenerationStatus value);
    // static field const value: static public UnityEngine.XR.MeshGenerationStatus UnknownError
    static constexpr const int UnknownError = 4;
    // Get static field: static public UnityEngine.XR.MeshGenerationStatus UnknownError
    static UnityEngine::XR::MeshGenerationStatus _get_UnknownError();
    // Set static field: static public UnityEngine.XR.MeshGenerationStatus UnknownError
    static void _set_UnknownError(UnityEngine::XR::MeshGenerationStatus value);
  }; // UnityEngine.XR.MeshGenerationStatus
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::MeshGenerationStatus, "UnityEngine.XR", "MeshGenerationStatus");
#pragma pack(pop)
