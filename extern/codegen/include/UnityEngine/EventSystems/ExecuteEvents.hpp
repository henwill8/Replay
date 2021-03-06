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
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: IPointerEnterHandler
  class IPointerEnterHandler;
  // Forward declaring type: IPointerExitHandler
  class IPointerExitHandler;
  // Forward declaring type: IPointerDownHandler
  class IPointerDownHandler;
  // Forward declaring type: IPointerUpHandler
  class IPointerUpHandler;
  // Forward declaring type: IPointerClickHandler
  class IPointerClickHandler;
  // Forward declaring type: IInitializePotentialDragHandler
  class IInitializePotentialDragHandler;
  // Forward declaring type: IBeginDragHandler
  class IBeginDragHandler;
  // Forward declaring type: IDragHandler
  class IDragHandler;
  // Forward declaring type: IEndDragHandler
  class IEndDragHandler;
  // Forward declaring type: IDropHandler
  class IDropHandler;
  // Forward declaring type: IScrollHandler
  class IScrollHandler;
  // Forward declaring type: IUpdateSelectedHandler
  class IUpdateSelectedHandler;
  // Forward declaring type: ISelectHandler
  class ISelectHandler;
  // Forward declaring type: IDeselectHandler
  class IDeselectHandler;
  // Forward declaring type: IMoveHandler
  class IMoveHandler;
  // Forward declaring type: ISubmitHandler
  class ISubmitHandler;
  // Forward declaring type: ICancelHandler
  class ICancelHandler;
  // Forward declaring type: IEventSystemHandler
  class IEventSystemHandler;
  // Forward declaring type: BaseEventData
  class BaseEventData;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ObjectPool`1<T>
  template<typename T>
  class ObjectPool_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.ExecuteEvents
  // [] Offset: FFFFFFFF
  class ExecuteEvents : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<T1>
    template<typename T1>
    class EventFunction_1;
    // Nested type: UnityEngine::EventSystems::ExecuteEvents::$$c
    class $$c;
    // Creating value type constructor for type: ExecuteEvents
    ExecuteEvents() noexcept {}
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> s_PointerEnterHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerEnterHandler*>* _get_s_PointerEnterHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> s_PointerEnterHandler
    static void _set_s_PointerEnterHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerEnterHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> s_PointerExitHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerExitHandler*>* _get_s_PointerExitHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> s_PointerExitHandler
    static void _set_s_PointerExitHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerExitHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> s_PointerDownHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerDownHandler*>* _get_s_PointerDownHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> s_PointerDownHandler
    static void _set_s_PointerDownHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerDownHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> s_PointerUpHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerUpHandler*>* _get_s_PointerUpHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> s_PointerUpHandler
    static void _set_s_PointerUpHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerUpHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> s_PointerClickHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerClickHandler*>* _get_s_PointerClickHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> s_PointerClickHandler
    static void _set_s_PointerClickHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerClickHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> s_InitializePotentialDragHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IInitializePotentialDragHandler*>* _get_s_InitializePotentialDragHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> s_InitializePotentialDragHandler
    static void _set_s_InitializePotentialDragHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IInitializePotentialDragHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> s_BeginDragHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IBeginDragHandler*>* _get_s_BeginDragHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> s_BeginDragHandler
    static void _set_s_BeginDragHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IBeginDragHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> s_DragHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IDragHandler*>* _get_s_DragHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> s_DragHandler
    static void _set_s_DragHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IDragHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> s_EndDragHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IEndDragHandler*>* _get_s_EndDragHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> s_EndDragHandler
    static void _set_s_EndDragHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IEndDragHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> s_DropHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IDropHandler*>* _get_s_DropHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> s_DropHandler
    static void _set_s_DropHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IDropHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> s_ScrollHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IScrollHandler*>* _get_s_ScrollHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> s_ScrollHandler
    static void _set_s_ScrollHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IScrollHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> s_UpdateSelectedHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IUpdateSelectedHandler*>* _get_s_UpdateSelectedHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> s_UpdateSelectedHandler
    static void _set_s_UpdateSelectedHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IUpdateSelectedHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> s_SelectHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::ISelectHandler*>* _get_s_SelectHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> s_SelectHandler
    static void _set_s_SelectHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::ISelectHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> s_DeselectHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IDeselectHandler*>* _get_s_DeselectHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> s_DeselectHandler
    static void _set_s_DeselectHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IDeselectHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> s_MoveHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IMoveHandler*>* _get_s_MoveHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> s_MoveHandler
    static void _set_s_MoveHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IMoveHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> s_SubmitHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::ISubmitHandler*>* _get_s_SubmitHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> s_SubmitHandler
    static void _set_s_SubmitHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::ISubmitHandler*>* value);
    // Get static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> s_CancelHandler
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::ICancelHandler*>* _get_s_CancelHandler();
    // Set static field: static private readonly UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> s_CancelHandler
    static void _set_s_CancelHandler(UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::ICancelHandler*>* value);
    // Get static field: static private readonly UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> s_HandlerListPool
    static UnityEngine::UI::ObjectPool_1<System::Collections::Generic::List_1<UnityEngine::EventSystems::IEventSystemHandler*>*>* _get_s_HandlerListPool();
    // Set static field: static private readonly UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>> s_HandlerListPool
    static void _set_s_HandlerListPool(UnityEngine::UI::ObjectPool_1<System::Collections::Generic::List_1<UnityEngine::EventSystems::IEventSystemHandler*>*>* value);
    // Get static field: static private readonly System.Collections.Generic.List`1<UnityEngine.Transform> s_InternalTransformList
    static System::Collections::Generic::List_1<UnityEngine::Transform*>* _get_s_InternalTransformList();
    // Set static field: static private readonly System.Collections.Generic.List`1<UnityEngine.Transform> s_InternalTransformList
    static void _set_s_InternalTransformList(System::Collections::Generic::List_1<UnityEngine::Transform*>* value);
    // static public T ValidateEventData(UnityEngine.EventSystems.BaseEventData data)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T ValidateEventData(UnityEngine::EventSystems::BaseEventData* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::ExecuteEvents::ValidateEventData");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.EventSystems", "ExecuteEvents", "ValidateEventData", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(data)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, data);
    }
    // static private System.Void Execute(UnityEngine.EventSystems.IPointerEnterHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F3D3C
    static void Execute(UnityEngine::EventSystems::IPointerEnterHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IPointerExitHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F3E30
    static void Execute(UnityEngine::EventSystems::IPointerExitHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IPointerDownHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F3F24
    static void Execute(UnityEngine::EventSystems::IPointerDownHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IPointerUpHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F4018
    static void Execute(UnityEngine::EventSystems::IPointerUpHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IPointerClickHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F410C
    static void Execute(UnityEngine::EventSystems::IPointerClickHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IInitializePotentialDragHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F4200
    static void Execute(UnityEngine::EventSystems::IInitializePotentialDragHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IBeginDragHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F42F4
    static void Execute(UnityEngine::EventSystems::IBeginDragHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IDragHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F43E8
    static void Execute(UnityEngine::EventSystems::IDragHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IEndDragHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F44DC
    static void Execute(UnityEngine::EventSystems::IEndDragHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IDropHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F45D0
    static void Execute(UnityEngine::EventSystems::IDropHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IScrollHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F46C4
    static void Execute(UnityEngine::EventSystems::IScrollHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IUpdateSelectedHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F47B8
    static void Execute(UnityEngine::EventSystems::IUpdateSelectedHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.ISelectHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F4874
    static void Execute(UnityEngine::EventSystems::ISelectHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IDeselectHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F4930
    static void Execute(UnityEngine::EventSystems::IDeselectHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.IMoveHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F49EC
    static void Execute(UnityEngine::EventSystems::IMoveHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.ISubmitHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F4AE0
    static void Execute(UnityEngine::EventSystems::ISubmitHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static private System.Void Execute(UnityEngine.EventSystems.ICancelHandler handler, UnityEngine.EventSystems.BaseEventData eventData)
    // Offset: 0x12F4B9C
    static void Execute(UnityEngine::EventSystems::ICancelHandler* handler, UnityEngine::EventSystems::BaseEventData* eventData);
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> get_pointerEnterHandler()
    // Offset: 0x12F4C58
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerEnterHandler*>* get_pointerEnterHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> get_pointerExitHandler()
    // Offset: 0x12F4CC0
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerExitHandler*>* get_pointerExitHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> get_pointerDownHandler()
    // Offset: 0x12F4D28
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerDownHandler*>* get_pointerDownHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> get_pointerUpHandler()
    // Offset: 0x12F4D90
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerUpHandler*>* get_pointerUpHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> get_pointerClickHandler()
    // Offset: 0x12F4DF8
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IPointerClickHandler*>* get_pointerClickHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> get_initializePotentialDrag()
    // Offset: 0x12F4E60
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IInitializePotentialDragHandler*>* get_initializePotentialDrag();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> get_beginDragHandler()
    // Offset: 0x12F4EC8
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IBeginDragHandler*>* get_beginDragHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> get_dragHandler()
    // Offset: 0x12F4F30
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IDragHandler*>* get_dragHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> get_endDragHandler()
    // Offset: 0x12F4F98
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IEndDragHandler*>* get_endDragHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> get_dropHandler()
    // Offset: 0x12F5000
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IDropHandler*>* get_dropHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> get_scrollHandler()
    // Offset: 0x12F5068
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IScrollHandler*>* get_scrollHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> get_updateSelectedHandler()
    // Offset: 0x12F50D0
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IUpdateSelectedHandler*>* get_updateSelectedHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> get_selectHandler()
    // Offset: 0x12F5138
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::ISelectHandler*>* get_selectHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> get_deselectHandler()
    // Offset: 0x12F51A0
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IDeselectHandler*>* get_deselectHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> get_moveHandler()
    // Offset: 0x12F5208
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::IMoveHandler*>* get_moveHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> get_submitHandler()
    // Offset: 0x12F5270
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::ISubmitHandler*>* get_submitHandler();
    // static public UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> get_cancelHandler()
    // Offset: 0x12F52D8
    static UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<UnityEngine::EventSystems::ICancelHandler*>* get_cancelHandler();
    // static private System.Void GetEventChain(UnityEngine.GameObject root, System.Collections.Generic.IList`1<UnityEngine.Transform> eventChain)
    // Offset: 0x12F5340
    static void GetEventChain(UnityEngine::GameObject* root, System::Collections::Generic::IList_1<UnityEngine::Transform*>* eventChain);
    // static public System.Boolean Execute(UnityEngine.GameObject target, UnityEngine.EventSystems.BaseEventData eventData, UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T> functor)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool Execute(UnityEngine::GameObject* target, UnityEngine::EventSystems::BaseEventData* eventData, UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<T>* functor) {
      static_assert(std::is_base_of_v<UnityEngine::EventSystems::IEventSystemHandler, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::ExecuteEvents::Execute");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.EventSystems", "ExecuteEvents", "Execute", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(target, eventData, functor)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, target, eventData, functor);
    }
    // static public UnityEngine.GameObject ExecuteHierarchy(UnityEngine.GameObject root, UnityEngine.EventSystems.BaseEventData eventData, UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<T> callbackFunction)
    // Offset: 0xFFFFFFFF
    template<class T>
    static UnityEngine::GameObject* ExecuteHierarchy(UnityEngine::GameObject* root, UnityEngine::EventSystems::BaseEventData* eventData, UnityEngine::EventSystems::ExecuteEvents::EventFunction_1<T>* callbackFunction) {
      static_assert(std::is_base_of_v<UnityEngine::EventSystems::IEventSystemHandler, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::ExecuteEvents::ExecuteHierarchy");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.EventSystems", "ExecuteEvents", "ExecuteHierarchy", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(root, eventData, callbackFunction)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::GameObject*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, root, eventData, callbackFunction);
    }
    // static private System.Boolean ShouldSendToComponent(UnityEngine.Component component)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool ShouldSendToComponent(UnityEngine::Component* component) {
      static_assert(std::is_base_of_v<UnityEngine::EventSystems::IEventSystemHandler, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::ExecuteEvents::ShouldSendToComponent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.EventSystems", "ExecuteEvents", "ShouldSendToComponent", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(component)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, component);
    }
    // static private System.Void GetEventList(UnityEngine.GameObject go, System.Collections.Generic.IList`1<UnityEngine.EventSystems.IEventSystemHandler> results)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void GetEventList(UnityEngine::GameObject* go, System::Collections::Generic::IList_1<UnityEngine::EventSystems::IEventSystemHandler*>* results) {
      static_assert(std::is_base_of_v<UnityEngine::EventSystems::IEventSystemHandler, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::ExecuteEvents::GetEventList");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.EventSystems", "ExecuteEvents", "GetEventList", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(go, results)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, go, results);
    }
    // static public System.Boolean CanHandleEvent(UnityEngine.GameObject go)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool CanHandleEvent(UnityEngine::GameObject* go) {
      static_assert(std::is_base_of_v<UnityEngine::EventSystems::IEventSystemHandler, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::ExecuteEvents::CanHandleEvent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.EventSystems", "ExecuteEvents", "CanHandleEvent", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(go)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, go);
    }
    // static public UnityEngine.GameObject GetEventHandler(UnityEngine.GameObject root)
    // Offset: 0xFFFFFFFF
    template<class T>
    static UnityEngine::GameObject* GetEventHandler(UnityEngine::GameObject* root) {
      static_assert(std::is_base_of_v<UnityEngine::EventSystems::IEventSystemHandler, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::ExecuteEvents::GetEventHandler");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("UnityEngine.EventSystems", "ExecuteEvents", "GetEventHandler", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(root)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<UnityEngine::GameObject*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, root);
    }
    // static private System.Void .cctor()
    // Offset: 0x12F54F0
    static void _cctor();
  }; // UnityEngine.EventSystems.ExecuteEvents
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::ExecuteEvents*, "UnityEngine.EventSystems", "ExecuteEvents");
