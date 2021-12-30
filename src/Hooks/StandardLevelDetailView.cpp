#include "static-defines.hpp"

#include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "GlobalNamespace/StandardLevelDetailViewController.hpp"
#include "UnityEngine/Resources.hpp"
#include "UnityEngine/Material.hpp"
#include "UnityEngine/Events/UnityAction.hpp"

#include "Utils/SongUtils.hpp"
#include "Utils/ReplayUtils.hpp"
#include "questui/shared/ArrayUtil.hpp"
#include "questui/shared/BeatSaberUI.hpp"
#include "Sprites.hpp"
#include "ReplayManager.hpp"

#include "Utils/UIUtils.hpp"
#include "UI/ReplayViewController.hpp"

DEFINE_TYPE(Replay::UI, ReplayViewController);

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
        if(ReplayManager::temporaryState != ReplayState::REPLAYING) ReplayManager::replayState = ReplayState::RECORDING;
    };
    return playButtonFunction;
}

MAKE_HOOK_MATCH(StandardLevelDetailView_RefreshContent, &StandardLevelDetailView::RefreshContent, void, StandardLevelDetailView* self) {
    StandardLevelDetailView_RefreshContent(self);

    SongUtils::SetMapID(self);

    static auto replayButtonName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("ReplayButton");

    playButton = self->actionButton;

    auto templateButton = self->practiceButton;
    auto parent = templateButton->get_transform()->get_parent()->get_parent();
    auto replayButtonTransform = parent->Find(replayButtonName);
    GameObject* replayButtonGameObject = nullptr;

    if(replayButtonTransform) {
        replayButtonGameObject = replayButtonTransform->get_gameObject();
    } else {
        // View controller creation here: https://github.com/RedBrumbler/SongBrowser/blob/master/src/UI/Browser/SongBrowserUI.cpp#L146
        GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator = nullptr;
        switch(mode)
        {
            case GlobalNamespace::MainMenuViewController::MenuButton::SoloFreePlay:
                flowCoordinator = ArrayUtil::Last(Resources::FindObjectsOfTypeAll<GlobalNamespace::SoloFreePlayFlowCoordinator*>());
                break;
            case GlobalNamespace::MainMenuViewController::MenuButton::Party:
                flowCoordinator = ArrayUtil::Last(Resources::FindObjectsOfTypeAll<GlobalNamespace::PartyFreePlayFlowCoordinator*>());
                break;
        }

        beatUi = *il2cpp_utils::New<SongBrowser::DataAccess::BeatSaberUIController*>(flowCoordinator);
        lastLevelCollection = nullptr;
        
        auto screenContainer = ArrayUtil::First(Resources::FindObjectsOfTypeAll<Transform*>(), [](auto x) {
                static Il2CppString* screenContainerName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("ScreenContainer");
                return screenContainerName->Equals(x->get_name());
            });

        INFO("screenContainer: %p", screenContainer);
        
        auto curvedCanvasSettings = screenContainer->GetComponent<HMUI::CurvedCanvasSettings*>();
        INFO("curvedCanvasSettings: %p", curvedCanvasSettings);

        INFO("viewController: %p", viewController);
        if (uiCreated)
        {
            auto vcCanvasSettings = viewController->GetComponent<HMUI::CurvedCanvasSettings*>();
            INFO("vcCanvasSettings: %p", vcCanvasSettings);
            vcCanvasSettings->SetRadius(curvedCanvasSettings->get_radius());
            return;
        }

        if (viewController)
        {
            Object::Destroy(viewController);
        }

        INFO("creating view controller");
        viewController = UIUtils::CreateCurvedViewController<SongBrowser::UI::SongBrowserViewController*>("SongBrowserViewController", curvedCanvasSettings->get_radius());
        INFO("viewController: %p", viewController);
        auto rectTransform = viewController->get_rectTransform();
        rectTransform->SetParent(beatUi->LevelCollectionNavigationController->get_transform(), false);
        rectTransform->set_anchorMin(Vector2(0.0f, 0.0f));
        rectTransform->set_anchorMax(Vector2(1.0f, 1.0f));
        rectTransform->set_anchoredPosition(Vector2(0.0f, 0.0f));
        rectTransform->set_sizeDelta(Vector2(curvedCanvasSettings->get_radius(), 25));
        viewController->get_gameObject()->SetActive(true);

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
        replayButtonTransform->GetComponent<RectTransform*>()->set_anchoredPosition(UnityEngine::Vector2(71.5f, -50));
        
        //Temporary dummy button for delete button
        {
        GameObject* buttonGameObject = Object::Instantiate(templateButton->get_gameObject(), templateButton->get_transform()->get_parent());
        Transform* buttonTransform = buttonGameObject->get_transform();
        buttonGameObject->set_name(il2cpp_utils::newcsstr("Goodname poggers time"));

        static auto newcontentName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Content");
        static auto newtextName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Text");
        auto newcontentTransform = buttonTransform->Find(newcontentName);
        Object::Destroy(newcontentTransform->Find(newtextName)->get_gameObject());
        Object::Destroy(newcontentTransform->GetComponent<LayoutElement*>());
        static auto newunderlineName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Underline");
        Object::Destroy(buttonTransform->Find(newunderlineName)->get_gameObject());

        static auto newiconName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Icon");
        auto newiconGameObject = GameObject::New_ctor(newiconName);
        auto newimageView = newiconGameObject->AddComponent<ImageView*>();
        auto newiconTransform = newimageView->get_rectTransform();
        newiconTransform->SetParent(newcontentTransform, false);
        newimageView->set_material(ArrayUtil::First(Resources::FindObjectsOfTypeAll<Material*>(), [] (Material* x) { return to_utf8(csstrtostr(x->get_name())) == "UINoGlow"; }));
        newimageView->set_sprite(BeatSaberUI::Base64ToSprite(Replay::Sprites::ReplayIcon));
        newimageView->set_preserveAspect(true);

        float newscale = 1.7f;
        iconTransform->set_localScale(UnityEngine::Vector3(newscale, newscale, newscale));

        ContentSizeFitter* newcontentSizeFitter = buttonGameObject->AddComponent<ContentSizeFitter*>();
        newcontentSizeFitter->set_verticalFit(ContentSizeFitter::FitMode::Unconstrained);
        newcontentSizeFitter->set_horizontalFit(ContentSizeFitter::FitMode::Unconstrained);

        buttonGameObject->GetComponent<LayoutElement*>()->set_preferredWidth(10.0f);

        buttonTransform->SetAsFirstSibling();
        }

        replayButtonGameObject->GetComponent<Button*>()->set_onClick(createReplayOnClick());

        playButton->get_onClick()->AddListener(il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), getPlayButtonFunction()));
    }

    bool addReplayButton = fileexists(ReplayUtils::GetReplayFilePath());
    replayButtonGameObject->SetActive(addReplayButton);

    // For songloader delete button when that gets updated
    float withDeleteButton = 71.5f;
    float withoutDeleteButton = 65.25f;
}

void StandardLevelDetailViewHook(Logger& logger) {
    INSTALL_HOOK(logger, StandardLevelDetailView_RefreshContent);
}

ReplayInstallHooks(StandardLevelDetailViewHook);