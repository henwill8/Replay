// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.IPointerDownHandler
  // [] Offset: FFFFFFFF
  class IPointerDownHandler/*, public UnityEngine::EventSystems::IEventSystemHandler*/ {
    public:
    // Creating value type constructor for type: IPointerDownHandler
    IPointerDownHandler() noexcept {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IEventSystemHandler
    operator UnityEngine::EventSystems::IEventSystemHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IEventSystemHandler*>(this);
    }
    // public System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xFFFFFFFF
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
  }; // UnityEngine.EventSystems.IPointerDownHandler
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::IPointerDownHandler*, "UnityEngine.EventSystems", "IPointerDownHandler");
