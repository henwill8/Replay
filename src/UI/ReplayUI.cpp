#include "ReplayButtonUI.hpp"

namespace Replay::UI {
    void ReplayButtonUI::CreateUI(GlobalNamespace::MainMenuViewController::MenuButton mode)
    {
        GlobalNamespace::LevelSelectionFlowCoordinator* flowCoordinator = nullptr;
        switch(mode)
        {
            case GlobalNamespace::MainMenuViewController::MenuButton::SoloFreePlay:
                flowCoordinator = ArrayUtil::Last(Resources::FindObjectsOfTypeAll<GlobalNamespace::SoloFreePlayFlowCoordinator*>());
                break;
            case GlobalNamespace::MainMenuViewController::MenuButton::Party:
                flowCoordinator = ArrayUtil::Last(Resources::FindObjectsOfTypeAll<GlobalNamespace::PartyFreePlayFlowCoordinator*>());
                break;
            case GlobalNamespace::MainMenuViewController::MenuButton::Multiplayer:
                flowCoordinator = ArrayUtil::Last(Resources::FindObjectsOfTypeAll<GlobalNamespace::MultiplayerLevelSelectionFlowCoordinator*>());
                break;
            default:
                return;
        }

        beatUi = *il2cpp_utils::New<SongBrowser::DataAccess::BeatSaberUIController*>(flowCoordinator);
        lastLevelCollection = nullptr;
        
        auto screenContainer = ArrayUtil::First(Resources::FindObjectsOfTypeAll<Transform*>(), [](auto x) {
                static Il2CppString* screenContainerName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("ScreenContainer");
                return screenContainerName->Equals(x->get_name());
            });

        
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
        viewController = UIUtils::CreateCurvedViewController<SongBrowser::UI::SongBrowserViewController*>("ReplayViewController", curvedCanvasSettings->get_radius());
        INFO("viewController: %p", viewController);
        auto rectTransform = viewController->get_rectTransform();
        rectTransform->SetParent(beatUi->LevelCollectionNavigationController->get_transform(), false);
        rectTransform->set_anchorMin(Vector2(0.0f, 0.0f));
        rectTransform->set_anchorMax(Vector2(1.0f, 1.0f));
        rectTransform->set_anchoredPosition(Vector2(0.0f, 0.0f));
        rectTransform->set_sizeDelta(Vector2(curvedCanvasSettings->get_radius(), 25));
        viewController->get_gameObject()->SetActive(true);

        CreateOuterUI();
        CreateSortButtons();
        CreateFilterButtons();
        CreateDeleteUI();
        CreateFastPageButtons();

        InstallHandlers();

        ModifySongStatsPanel();
        ResizeSongUI();

        uiCreated = true;

        RefreshSortButtonUI();
        StartCoroutine(reinterpret_cast<System::Collections::IEnumerator*>(custom_types::Helpers::CoroutineHelper::New(ProcessSongListEndOfFrame())));
    }
}