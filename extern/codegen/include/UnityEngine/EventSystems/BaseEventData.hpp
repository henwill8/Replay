// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.AbstractEventData
#include "UnityEngine/EventSystems/AbstractEventData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: EventSystem
  class EventSystem;
  // Forward declaring type: BaseInputModule
  class BaseInputModule;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Autogenerated type: UnityEngine.EventSystems.BaseEventData
  class BaseEventData : public UnityEngine::EventSystems::AbstractEventData {
    public:
    // private readonly UnityEngine.EventSystems.EventSystem m_EventSystem
    // Offset: 0x18
    UnityEngine::EventSystems::EventSystem* m_EventSystem;
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // public System.Void .ctor(UnityEngine.EventSystems.EventSystem eventSystem)
    // Offset: 0x114A444
    static BaseEventData* New_ctor(UnityEngine::EventSystems::EventSystem* eventSystem);
    // public UnityEngine.EventSystems.BaseInputModule get_currentInputModule()
    // Offset: 0x114A478
    UnityEngine::EventSystems::BaseInputModule* get_currentInputModule();
    // public UnityEngine.GameObject get_selectedObject()
    // Offset: 0x114A494
    UnityEngine::GameObject* get_selectedObject();
    // public System.Void set_selectedObject(UnityEngine.GameObject value)
    // Offset: 0x114A4B0
    void set_selectedObject(UnityEngine::GameObject* value);
  }; // UnityEngine.EventSystems.BaseEventData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::BaseEventData*, "UnityEngine.EventSystems", "BaseEventData");
#pragma pack(pop)