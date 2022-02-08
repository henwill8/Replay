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
#include "Utils/TimeUtils.hpp"
#include "Sprites.hpp"

#include "rapidjson/document.h"
#include "rapidjson/stringbuffer.h"
#include <rapidjson/writer.h>
#include <string.h>

using namespace Replay::UI;
using namespace GlobalNamespace;
using namespace UnityEngine;
using namespace UnityEngine::UI;
using namespace UnityEngine::Events;
using namespace il2cpp_utils;
using namespace QuestUI;
using namespace HMUI;

std::function<void()> getReplayFunction(std::string path, bool overwrite) {
    std::function<void()> replayFunction = (std::function<void()>) [path, overwrite] () {
        if(UIManager::replayViewController == nullptr) UIManager::replayViewController = BeatSaberUI::CreateViewController<ReplayViewController*>();
        UIManager::replayViewController->Init(path, overwrite);
        UIManager::singlePlayerFlowCoordinator->PresentViewController(UIManager::replayViewController, nullptr, ViewController::AnimationDirection::Horizontal, false);
    };
    return replayFunction;
}

Button::ButtonClickedEvent* createReplayOnClick(std::string path, bool overwrite) {
    auto onClick = Button::ButtonClickedEvent::New_ctor();
    onClick->AddListener(il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), getReplayFunction(path, overwrite)));
    return onClick;
}

std::function<void()> getPlayButtonFunction() {
    static std::function<void()> playButtonFunction = (std::function<void()>) [] () {
        log("Play button pressed");
        ReplayManager::replayState = ReplayState::RECORDING;
        
        SongUtils::didFail = false;

        ReplayManager::recorder = ReplayRecorder();
        ReplayManager::recorder.Init();
    };
    return playButtonFunction;
}

void UIManager::SetReplayButtonOnClick(UnityEngine::Transform* buttonTransform, std::string path, bool overwrite) {
    buttonTransform->GetComponent<Button*>()->set_onClick(createReplayOnClick(path, overwrite));
}

UnityEngine::Transform* UIManager::CreateReplayButton(UnityEngine::Transform* parent, UnityEngine::UI::Button* templateButton, UnityEngine::UI::Button* actionButton, std::string path, bool overwrite) {
    static auto replayButtonName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("ReplayButton");

    UnityEngine::Transform* buttonTransform = Object::Instantiate(templateButton->get_gameObject(), parent)->get_transform();
    buttonTransform->set_name(replayButtonName);

    static auto contentName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Content");
    static auto textName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Text");
    auto contentTransform = buttonTransform->Find(contentName);
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

    ((RectTransform*) buttonTransform)->set_sizeDelta({10, 10});
    ((RectTransform*) buttonTransform)->set_anchoredPosition({5, -5});

    SetReplayButtonOnClick(buttonTransform, path, overwrite);
    buttonTransform->GetComponent<Button*>()->set_interactable(true);

    actionButton->get_onClick()->AddListener(il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), getPlayButtonFunction()));

    return buttonTransform;
}

void UIManager::CreateReplayCanvas(StandardLevelDetailView* standardLevelDetailView, bool replayFileExists) {
    static auto canvasName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("ReplayButtonCanvas");
    static auto replayButtonName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("ReplayButton");
    static auto failedTextName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("FailedText");

    auto playButton = standardLevelDetailView->actionButton;
    auto templateButton = standardLevelDetailView->practiceButton;

    buttonParent = templateButton->get_transform()->GetParent();
    auto canvasTransform = (RectTransform*) buttonParent->Find(canvasName);
    
    Transform* replayButtonTransform = nullptr;
    Transform* failedTextTransform = nullptr;

    TMPro::TextMeshProUGUI* failedTimeText = nullptr;

    if(canvasTransform) {
        replayButtonTransform = canvasTransform->Find(replayButtonName);
        SetReplayButtonOnClick(replayButtonTransform, ReplayUtils::GetReplayFilePath(SongUtils::GetMapID()));
        failedTextTransform = canvasTransform->Find(failedTextName);
        failedTimeText = failedTextTransform->get_gameObject()->GetComponent<TMPro::TextMeshProUGUI*>();
    } else {
        canvasTransform = (RectTransform*) BeatSaberUI::CreateCanvas()->get_transform();
        canvasTransform->set_name(canvasName);
        canvasTransform->SetParent(buttonParent, false);
        canvasTransform->set_localScale({1, 1, 1});
        canvasTransform->set_sizeDelta({10, 10});
        canvasTransform->set_anchoredPosition({0, -5});
        auto canvasLayout = canvasTransform->get_gameObject()->AddComponent<LayoutElement*>();
        canvasLayout->set_preferredWidth(10);
        canvasTransform->SetAsLastSibling();

        replayButtonTransform = CreateReplayButton(canvasTransform, templateButton, playButton, ReplayUtils::GetReplayFilePath(SongUtils::GetMapID()));

        failedTimeText = QuestUI::BeatSaberUI::CreateText(canvasTransform, "", true, {-0.5f, -7});
        failedTimeText->set_alignment(TMPro::TextAlignmentOptions::Center);
        failedTimeText->set_fontSize(5);
        failedTimeText->set_lineSpacing(-45);
        failedTimeText->get_gameObject()->set_name(failedTextName);

        replayButtonTransform->SetAsLastSibling();
    }

    SetReplayButtonCanvasActive(replayFileExists);    

    rapidjson::Document metadata = FileUtils::GetMetadataFromReplayFile(ReplayUtils::GetReplayFilePath(SongUtils::GetMapID()));

    if(metadata.HasMember("FailedInfo") && replayFileExists) {
        float failedSongTime = metadata["FailedInfo"]["FailedTime"].GetFloat();

        failedTimeText->get_gameObject()->SetActive(true);
        failedTimeText->set_text(newcsstr(TimeUtils::SecondsToString(failedSongTime)));
    } else {
        failedTimeText->get_gameObject()->SetActive(false);
    }
}