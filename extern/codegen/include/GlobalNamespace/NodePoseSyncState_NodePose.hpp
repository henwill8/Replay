// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NodePoseSyncState/NodePose
  // [] Offset: FFFFFFFF
  struct NodePoseSyncState_NodePose/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NodePoseSyncState_NodePose
    constexpr NodePoseSyncState_NodePose(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NodePoseSyncState/NodePose Head
    static constexpr const int Head = 0;
    // Get static field: static public NodePoseSyncState/NodePose Head
    static GlobalNamespace::NodePoseSyncState_NodePose _get_Head();
    // Set static field: static public NodePoseSyncState/NodePose Head
    static void _set_Head(GlobalNamespace::NodePoseSyncState_NodePose value);
    // static field const value: static public NodePoseSyncState/NodePose LeftController
    static constexpr const int LeftController = 1;
    // Get static field: static public NodePoseSyncState/NodePose LeftController
    static GlobalNamespace::NodePoseSyncState_NodePose _get_LeftController();
    // Set static field: static public NodePoseSyncState/NodePose LeftController
    static void _set_LeftController(GlobalNamespace::NodePoseSyncState_NodePose value);
    // static field const value: static public NodePoseSyncState/NodePose RightController
    static constexpr const int RightController = 2;
    // Get static field: static public NodePoseSyncState/NodePose RightController
    static GlobalNamespace::NodePoseSyncState_NodePose _get_RightController();
    // Set static field: static public NodePoseSyncState/NodePose RightController
    static void _set_RightController(GlobalNamespace::NodePoseSyncState_NodePose value);
    // static field const value: static public NodePoseSyncState/NodePose Count
    static constexpr const int Count = 3;
    // Get static field: static public NodePoseSyncState/NodePose Count
    static GlobalNamespace::NodePoseSyncState_NodePose _get_Count();
    // Set static field: static public NodePoseSyncState/NodePose Count
    static void _set_Count(GlobalNamespace::NodePoseSyncState_NodePose value);
  }; // NodePoseSyncState/NodePose
  #pragma pack(pop)
  static check_size<sizeof(NodePoseSyncState_NodePose), 0 + sizeof(int)> __GlobalNamespace_NodePoseSyncState_NodePoseSizeCheck;
  static_assert(sizeof(NodePoseSyncState_NodePose) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NodePoseSyncState_NodePose, "", "NodePoseSyncState/NodePose");
