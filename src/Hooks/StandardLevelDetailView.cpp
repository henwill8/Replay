#include "static-defines.hpp"

#include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "GlobalNamespace/StandardLevelDetailViewController.hpp"
#include "GlobalNamespace/PlatformLeaderboardViewController.hpp"
#include "UnityEngine/Resources.hpp"
#include "UnityEngine/Material.hpp"
#include "UnityEngine/Events/UnityAction.hpp"

#include "beatsaber-hook/shared/utils/typedefs-array.hpp"

#include "Utils/SongUtils.hpp"
#include "Utils/ReplayUtils.hpp"
#include "Utils/FileUtils.hpp"
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
        log("Replay button pressed");
        ReplayManager::temporaryState = ReplayState::REPLAYING;

        playButton->Press();
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
        if(ReplayManager::temporaryState != ReplayState::REPLAYING) ReplayManager::temporaryState = ReplayState::RECORDING;
    };
    return playButtonFunction;
}

MAKE_HOOK_MATCH(StandardLevelDetailView_RefreshContent, &StandardLevelDetailView::RefreshContent, void, StandardLevelDetailView* self) {
    StandardLevelDetailView_RefreshContent(self);

    SongUtils::SetMapID(self);

    bool replayFileExists = fileexists(ReplayUtils::GetReplayFilePath());

    if(replayFileExists) FileUtils::lastSelectedMetadata = FileUtils::GetMetadataFromReplayFile(ReplayUtils::GetReplayFilePath());

    // Move ui to separate file eventually probably
    static auto replayButtonName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("ReplayButton");

    playButton = self->actionButton;
    auto templateButton = self->practiceButton;

    ArrayW<PlatformLeaderboardViewController*> leaderboardViewControllers = UnityEngine::Resources::FindObjectsOfTypeAll<PlatformLeaderboardViewController*>();
    auto parent = leaderboardViewControllers.get(0)->get_transform();
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

        replayButtonTransform->GetComponent<RectTransform*>()->set_sizeDelta(UnityEngine::Vector2(10, 10));
        replayButtonTransform->GetComponent<RectTransform*>()->set_anchoredPosition(UnityEngine::Vector2(20, -61));

        replayButtonTransform->SetAsLastSibling();

        replayButtonGameObject->GetComponent<Button*>()->set_onClick(createReplayOnClick());

        playButton->get_onClick()->AddListener(il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), getPlayButtonFunction()));
    }

    replayButtonGameObject->SetActive(replayFileExists);
}

void StandardLevelDetailViewHook(Logger& logger) {
    INSTALL_HOOK(logger, StandardLevelDetailView_RefreshContent);
}

ReplayInstallHooks(StandardLevelDetailViewHook);