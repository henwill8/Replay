#include "UI/UIManager.hpp"

#include "UnityEngine/Transform.hpp"
#include "UnityEngine/GameObject.hpp"
#include "UnityEngine/UI/LayoutElement.hpp"
#include "UnityEngine/Material.hpp"
#include "UnityEngine/Resources.hpp"
#include "UnityEngine/Events/UnityAction.hpp"

#include "TMPro/TextMeshProUGUI.hpp"
#include "TMPro/TextAlignmentOptions.hpp"

#include "HMUI/ViewController.hpp"
#include "HMUI/ViewController_AnimationDirection.hpp"

#include "questui/shared/BeatSaberUI.hpp"
#include "questui/shared/ArrayUtil.hpp"

#include "Utils/FileUtils.hpp"
#include "Sprites.hpp"

using namespace Replay::UI;
using namespace GlobalNamespace;
using namespace UnityEngine;
using namespace UnityEngine::UI;
using namespace UnityEngine::Events;
using namespace il2cpp_utils;
using namespace QuestUI;
using namespace HMUI;

std::function<void()> getReplayFunction() {
    static std::function<void()> replayFunction = (std::function<void()>) [] () {
        if(UIManager::replayViewController == nullptr) UIManager::replayViewController = BeatSaberUI::CreateViewController<ReplayViewController*>();
        UIManager::singlePlayerFlowCoordinator->PresentViewController(UIManager::replayViewController, nullptr, ViewController::AnimationDirection::Horizontal, false);
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
        log("Play button pressed");
        ReplayManager::replayState = ReplayState::RECORDING;
    };
    return playButtonFunction;
}

void UIManager::CreateReplayButton(StandardLevelDetailView* standardLevelDetailView, bool replayFileExists) {
    static auto canvasName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("ReplayButtonCanvas");
    static auto replayButtonName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("ReplayButton");
    static auto failedTextName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("FailedText");

    auto playButton = standardLevelDetailView->actionButton;
    auto templateButton = standardLevelDetailView->practiceButton;

    auto parent = templateButton->get_transform()->GetParent();
    auto canvasTransform = (RectTransform*) parent->Find(canvasName);
    
    Transform* replayButtonTransform = nullptr;
    Transform* failedTextTransform = nullptr;

    TMPro::TextMeshProUGUI* failedTimeText = nullptr;

    if(canvasTransform) {
        replayButtonTransform = canvasTransform->Find(replayButtonName);
        failedTextTransform = canvasTransform->Find(failedTextName);
        failedTimeText = failedTextTransform->get_gameObject()->GetComponent<TMPro::TextMeshProUGUI*>();
    } else {
        canvasTransform = (RectTransform*) BeatSaberUI::CreateCanvas()->get_transform();
        canvasTransform->set_name(canvasName);
        canvasTransform->SetParent(parent, false);
        canvasTransform->set_localScale({1, 1, 1});
        canvasTransform->set_sizeDelta({10, 10});
        canvasTransform->set_anchoredPosition({0, -5});
        auto canvasLayout = canvasTransform->get_gameObject()->AddComponent<LayoutElement*>();
        canvasLayout->set_preferredWidth(10);
        canvasTransform->SetAsLastSibling();

        replayButtonTransform = Object::Instantiate(templateButton->get_gameObject(), canvasTransform)->get_transform();
        replayButtonTransform->set_name(replayButtonName);

        static auto contentName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Content");
        static auto textName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Text");
        auto contentTransform = replayButtonTransform->Find(contentName);
        Object::Destroy(contentTransform->Find(textName)->get_gameObject());
        Object::Destroy(contentTransform->GetComponent<LayoutElement*>());

        static auto iconName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Icon");
        auto iconGameObject = GameObject::New_ctor(iconName);
        auto imageView = iconGameObject->AddComponent<ImageView*>();
        auto iconTransform = imageView->get_rectTransform();
        iconTransform->SetParent(contentTransform, false);
        imageView->set_material(ArrayUtil::First(Resources::FindObjectsOfTypeAll<Material*>(), [] (Material* x) { return to_utf8(csstrtostr(x->get_name())) == "UINoGlow"; }));
        imageView->set_sprite(BeatSaberUI::Base64ToSprite(Replay::Sprites::ReplayIcon));
        imageView->set_preserveAspect(true);

        float scale = 1.3f;
        iconTransform->set_localScale(UnityEngine::Vector3(scale, scale, scale));

        ((RectTransform*) replayButtonTransform)->set_sizeDelta({10, 10});
        ((RectTransform*) replayButtonTransform)->set_anchoredPosition({5, -5});

        replayButtonTransform->GetComponent<Button*>()->set_onClick(createReplayOnClick());

        playButton->get_onClick()->AddListener(il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), getPlayButtonFunction()));

        failedTimeText = QuestUI::BeatSaberUI::CreateText(canvasTransform, "", true, {-0.5f, -7});
        failedTimeText->set_alignment(TMPro::TextAlignmentOptions::Center);
        failedTimeText->set_fontSize(5);
        failedTimeText->set_lineSpacing(-45);
        failedTimeText->get_gameObject()->set_name(failedTextName);

        replayButtonTransform->SetAsLastSibling();
    }

    canvasTransform->get_gameObject()->SetActive(replayFileExists);
    float xpos = replayFileExists ? 4.2 : -1.8;
    ((RectTransform*) parent)->set_anchoredPosition({xpos, -55});

    if(FileUtils::lastSelectedMetadata.HasMember("FailedInfo") && replayFileExists) {
        float failedSongTime = FileUtils::lastSelectedMetadata["FailedInfo"]["FailedTime"].GetFloat();
        int minutes = (int)(failedSongTime / 60.0f);
        int seconds = (int)(failedSongTime - (float(minutes) * 60.0f));

        std::string minutesString = std::to_string(minutes);
        std::string secondsString = std::to_string(seconds);
        if(seconds < 10) {
            secondsString = "0"+std::to_string(seconds);
        }
        
        std::string failedTimeString = minutesString+":"+secondsString;

        failedTimeText->get_gameObject()->SetActive(true);
        failedTimeText->set_text(newcsstr(failedTimeString));
    } else {
        failedTimeText->get_gameObject()->SetActive(false);
    }
}