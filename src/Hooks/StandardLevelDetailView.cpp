#include "static-defines.hpp"

#include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "UnityEngine/Resources.hpp"
#include "UnityEngine/Material.hpp"
#include "UnityEngine/Events/UnityAction.hpp"

#include "Utils/SongUtils.hpp"
#include "Utils/ReplayUtils.hpp"
#include "questui/shared/ArrayUtil.hpp"
#include "questui/shared/BeatSaberUI.hpp"
#include "Sprites.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace UnityEngine;
using namespace UnityEngine::UI;
using namespace UnityEngine::Events;
using namespace QuestUI;
using namespace HMUI;
using namespace VRUIControls;
using namespace Replay;

static Button* playButton;

std::function<void()> getReplayFunction() {
    static std::function<void()> replayFunction = (std::function<void()>) [] () {
        playButton->Press();

        ReplayManager::replayState = ReplayState::REPLAYING;
    };
    return replayFunction;
}

Button::ButtonClickedEvent* createReplayOnClick() {
    auto onClick = Button::ButtonClickedEvent::New_ctor();
    onClick->AddListener(il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), getReplayFunction()));
    return onClick;
}

std::function<void()> getPlayButtonFunction() {
    static std::function<void()> playButtonFunction = (std::function<void()>) [] () {
        ReplayManager::replayState = ReplayState::RECORDING;
    };
    return playButtonFunction;
}

MAKE_HOOK_MATCH(StandardLevelDetailView_RefreshContent, &StandardLevelDetailView::RefreshContent, void, StandardLevelDetailView* self) {
    StandardLevelDetailView_RefreshContent(self);

    SongUtils::SetMapID(self);

    static auto replayButtonName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("ReplayButton");

    playButton = self->actionButton;

    auto templateButton = self->practiceButton;
    auto parent = templateButton->get_transform()->get_parent();
    auto replayButtonTransform = parent->Find(replayButtonName);
    GameObject* replayButtonGameObject = nullptr;

    if(replayButtonTransform) {
        replayButtonGameObject = replayButtonTransform->get_gameObject();
    } else {
        replayButtonGameObject = Object::Instantiate(templateButton->get_gameObject(), parent);
        replayButtonTransform = replayButtonGameObject->get_transform();
        replayButtonGameObject->set_name(replayButtonName);

        static auto contentName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Content");
        static auto textName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Text");
        auto contentTransform = replayButtonTransform->Find(contentName);
        Object::Destroy(contentTransform->Find(textName)->get_gameObject());
        Object::Destroy(contentTransform->GetComponent<LayoutElement*>());
        static auto underlineName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Underline");
        Object::Destroy(replayButtonTransform->Find(underlineName)->get_gameObject());

        static auto iconName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Icon");
        auto iconGameObject = GameObject::New_ctor(iconName);
        auto imageView = iconGameObject->AddComponent<ImageView*>();
        auto iconTransform = imageView->get_rectTransform();
        iconTransform->SetParent(contentTransform, false);
        imageView->set_material(ArrayUtil::First(Resources::FindObjectsOfTypeAll<Material*>(), [] (Material* x) { return to_utf8(csstrtostr(x->get_name())) == "UINoGlow"; }));
        imageView->set_sprite(BeatSaberUI::Base64ToSprite(Replay::Sprites::ReplayIcon));
        imageView->set_preserveAspect(true);

        float scale = 1.7f;
        iconTransform->set_localScale(UnityEngine::Vector3(scale, scale, scale));

        ContentSizeFitter* contentSizeFitter = replayButtonGameObject->AddComponent<ContentSizeFitter*>();
        contentSizeFitter->set_verticalFit(ContentSizeFitter::FitMode::Unconstrained);
        contentSizeFitter->set_horizontalFit(ContentSizeFitter::FitMode::Unconstrained);

        replayButtonGameObject->GetComponent<LayoutElement*>()->set_preferredWidth(10.0f);

        replayButtonTransform->SetAsLastSibling();

        replayButtonGameObject->GetComponent<Button*>()->set_onClick(createReplayOnClick());

        playButton->get_onClick()->AddListener(il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), getPlayButtonFunction()));
    }

    replayButtonGameObject->SetActive(fileexists(ReplayUtils::GetReplayFilePath()));
}

void StandardLevelDetailViewHook(Logger& logger) {
    INSTALL_HOOK(logger, StandardLevelDetailView_RefreshContent);
}

ReplayInstallHooks(StandardLevelDetailViewHook);