#pragma once
#include "static-defines.hpp"

#include "UnityEngine/Transform.hpp"
#include "UnityEngine/GameObject.hpp"

namespace Replay::UnityUtils {
    void SetAllActive(UnityEngine::Transform* transform, bool active) {
        transform->get_gameObject()->set_active(active);
        
        int childCount = transform->get_childCount();
        for(int i = 0; i < childCount; i++) {
            SetAllActive(transform->GetChild(i), active);
        }
    }
}