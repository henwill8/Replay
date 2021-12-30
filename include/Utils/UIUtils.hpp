#pragma once
// this is basically https://github.com/halsafar/BeatSaberSongBrowser/blob/master/SongBrowserPlugin/Internals/BeatSaberUI.cs
// but in header

#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "VRUIControls/PhysicsRaycasterWithCache.hpp"
#include "VRUIControls/VRGraphicRaycaster.hpp"

#include "questui/shared/BeatSaberUI.hpp"
#include "HMUI/ViewController.hpp"
#include "HMUI/CurvedCanvasSettings.hpp"

#include "UnityEngine/CanvasGroup.hpp"
#include "UnityEngine/UI/Button.hpp"
#include "UnityEngine/Object.hpp"
#include "UnityEngine/Resources.hpp"
#include "UnityEngine/Events/UnityAction.hpp"

#include <string_view>
#include <functional>

namespace UIUtils
{   
    inline VRUIControls::PhysicsRaycasterWithCache* get_PhysicsRaycasterWithCache()
    {
        return QuestUI::BeatSaberUI::GetPhysicsRaycasterWithCache();
    }

    template<typename T>
    requires (std::is_convertible_v<T, HMUI::ViewController*>)
    T CreateViewController(std::string_view name)
    {
        auto typearr = Array<System::Type*>::NewLength(3);
        typearr->values[0] = il2cpp_utils::GetSystemType(classof(VRUIControls::VRGraphicRaycaster*));
        typearr->values[1] = il2cpp_utils::GetSystemType(classof(UnityEngine::CanvasGroup*));
        typearr->values[2] = il2cpp_utils::GetSystemType(classof(T));

        T vc = UnityEngine::GameObject::New_ctor(il2cpp_utils::newcsstr(classof(T)->klass->name), typearr)->template GetComponent<T>();
        vc->template GetComponent<VRUIControls::VRGraphicRaycaster*>()->physicsRaycaster = get_PhysicsRaycasterWithCache();
        auto rec = vc->get_rectTransform();
        rec->set_anchorMin(UnityEngine::Vector2(0.0f, 0.0f));
        rec->set_anchorMax(UnityEngine::Vector2(1.0f, 1.0f));
        rec->set_sizeDelta(UnityEngine::Vector2(0.0f, 0.0f));
        rec->set_anchoredPosition(UnityEngine::Vector2(0.0f, 0.0f));
        vc->get_gameObject()->SetActive(false);
        vc->set_name(il2cpp_utils::newcsstr(name.data()));
        return vc;
    }

    template<typename T>
    requires (std::is_convertible_v<T, HMUI::ViewController*>)
    T CreateCurvedViewController(std::string_view name, float curveRadius)
    {
        auto typearr = Array<System::Type*>::NewLength(4);
        typearr->values[0] = il2cpp_utils::GetSystemType(classof(VRUIControls::VRGraphicRaycaster*));
        typearr->values[1] = il2cpp_utils::GetSystemType(classof(HMUI::CurvedCanvasSettings*));
        typearr->values[2] = il2cpp_utils::GetSystemType(classof(UnityEngine::CanvasGroup*));
        typearr->values[3] = il2cpp_utils::GetSystemType(classof(T));
        
        T vc = UnityEngine::GameObject::New_ctor(il2cpp_utils::newcsstr(classof(T)->klass->name), typearr)->template GetComponent<T>();
        vc->template GetComponent<VRUIControls::VRGraphicRaycaster*>()->physicsRaycaster = get_PhysicsRaycasterWithCache();

        vc->template GetComponent<HMUI::CurvedCanvasSettings*>()->SetRadius(curveRadius);
        auto rec = vc->get_rectTransform();
        rec->set_anchorMin(UnityEngine::Vector2(0.0f, 0.0f));
        rec->set_anchorMax(UnityEngine::Vector2(1.0f, 1.0f));
        rec->set_sizeDelta(UnityEngine::Vector2(0.0f, 0.0f));
        rec->set_anchoredPosition(UnityEngine::Vector2(0.0f, 0.0f));
        vc->get_gameObject()->SetActive(false);
        vc->set_name(il2cpp_utils::newcsstr(name.data()));
        return vc;
    }
}