// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: TrailElement
  // [] Offset: FFFFFFFF
  class TrailElement : public ::Il2CppObject {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD38C98
    // private UnityEngine.Vector3 <position>k__BackingField
    // Size: 0xC
    // Offset: 0x10
    UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xD38CA8
    // private UnityEngine.Vector3 <normal>k__BackingField
    // Size: 0xC
    // Offset: 0x1C
    UnityEngine::Vector3 normal;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [CompilerGeneratedAttribute] Offset: 0xD38CB8
    // private System.Single <distance>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [CompilerGeneratedAttribute] Offset: 0xD38CC8
    // private System.Single <time>k__BackingField
    // Size: 0x4
    // Offset: 0x2C
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: TrailElement
    TrailElement(UnityEngine::Vector3 position_ = {}, UnityEngine::Vector3 normal_ = {}, float distance_ = {}, float time_ = {}) noexcept : position{position_}, normal{normal_}, distance{distance_}, time{time_} {}
    // public UnityEngine.Vector3 get_position()
    // Offset: 0xF471B0
    UnityEngine::Vector3 get_position();
    // private System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0xF471BC
    void set_position(UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0xF471C8
    UnityEngine::Vector3 get_normal();
    // private System.Void set_normal(UnityEngine.Vector3 value)
    // Offset: 0xF471D4
    void set_normal(UnityEngine::Vector3 value);
    // public System.Single get_distance()
    // Offset: 0xF471E0
    float get_distance();
    // private System.Void set_distance(System.Single value)
    // Offset: 0xF471E8
    void set_distance(float value);
    // public System.Single get_time()
    // Offset: 0xF471F0
    float get_time();
    // private System.Void set_time(System.Single value)
    // Offset: 0xF471F8
    void set_time(float value);
    // public System.Void SetData(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single time)
    // Offset: 0xF47200
    void SetData(UnityEngine::Vector3 start, UnityEngine::Vector3 end, float time);
    // public System.Void SetDistance(System.Single value)
    // Offset: 0xF47300
    void SetDistance(float value);
    // public System.Void .ctor()
    // Offset: 0xF47308
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrailElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TrailElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrailElement*, creationType>()));
    }
  }; // TrailElement
  #pragma pack(pop)
  static check_size<sizeof(TrailElement), 44 + sizeof(float)> __GlobalNamespace_TrailElementSizeCheck;
  static_assert(sizeof(TrailElement) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrailElement*, "", "TrailElement");
