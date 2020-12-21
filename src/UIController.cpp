#include "../include/UI.hpp"
#include "../include/codegen.hpp"
using namespace QuestUI;
using namespace UnityEngine::UI;
using namespace UnityEngine;

DEFINE_CLASS(Replay::UIController);

void toggleDisableVibration() {
    getConfig().config["DisableVibration"].SetBool(!getConfig().config["DisableVibration"].GetBool());
}

void toggleFCOverwrite() {
    getConfig().config["FullComboOverwrites"].SetBool(!getConfig().config["FullComboOverwrites"].GetBool());
}

void toggleCircular() {
    getConfig().config["ThirdPersonCircularMovement"].SetBool(!getConfig().config["ThirdPersonCircularMovement"].GetBool());
}

void toggleAvatar() {
    getConfig().config["Avatars"].SetBool(!getConfig().config["Avatars"].GetBool());
}

void changeOffset(float newValue) {
    getConfig().config["SaberTimeOffset"].SetInt(newValue);
}

void Replay::UIController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
	if(firstActivation)
	{
		HorizontalLayoutGroup* layout = QuestUI::BeatSaberUI::CreateHorizontalLayoutGroup(get_rectTransform());
		layout->set_spacing(2.5f);
		
		VerticalLayoutGroup* layout1 = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(layout->get_rectTransform());
		// VerticalLayoutGroup* layout2 = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(layout->get_rectTransform());
		layout1->set_spacing(3.5f);
		// layout2->set_spacing(3.5f);

		// layout1->get_gameObject()->AddComponent<QuestUI::Backgroundable*>()->ApplyBackground(il2cpp_utils::createcsstr("round-rect-panel"));
		// layout2->get_gameObject()->AddComponent<QuestUI::Backgroundable*>()->ApplyBackground(il2cpp_utils::createcsstr("round-rect-panel"));

		layout1->set_padding(UnityEngine::RectOffset::New_ctor(3, 3, 2, 2));
		// layout2->set_padding(UnityEngine::RectOffset::New_ctor(3, 3, 2, 2));

		// ContentSizeFitter* layout1Fitter = layout1->get_gameObject()->AddComponent<ContentSizeFitter*>();
		// layout1Fitter->set_horizontalFit(ContentSizeFitter::FitMode::PreferredSize);
		// layout1Fitter->set_verticalFit(ContentSizeFitter::FitMode::PreferredSize);

		// ContentSizeFitter* layout2Fitter = layout2->get_gameObject()->AddComponent<ContentSizeFitter*>();
		// layout2Fitter->set_horizontalFit(ContentSizeFitter::FitMode::PreferredSize);
		// layout2Fitter->set_verticalFit(ContentSizeFitter::FitMode::PreferredSize);

		// ContentSizeFitter* layoutFitter = layout->get_gameObject()->AddComponent<ContentSizeFitter*>();
		// layoutFitter->set_horizontalFit(ContentSizeFitter::FitMode::Unconstrained);
		// layoutFitter->set_verticalFit(ContentSizeFitter::FitMode::PreferredSize);

		Transform* Parent1 = layout1->get_transform();
		// Transform* Parent2 = layout2->get_transform();

		
		Toggle* VibrationToggle = BeatSaberUI::CreateToggle(
            Parent1,
            "Disable Vibrations",
            getConfig().config["DisableVibration"].GetBool(),
            il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<bool>*>(classof(UnityEngine::Events::UnityAction_1<bool>*), this, toggleDisableVibration)
        );
		QuestUI::BeatSaberUI::AddHoverHint(VibrationToggle->get_gameObject(), "Disables controller vibration during replays");
		// VibrationToggle->get_gameObject()->GetComponent<LayoutElement*>()->set_preferredWidth(50);

        Toggle* FCToggle = BeatSaberUI::CreateToggle(
            Parent1,
            "Enable FC Overwrite",
            getConfig().config["FullComboOverwrites"].GetBool(),
            il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<bool>*>(classof(UnityEngine::Events::UnityAction_1<bool>*), this, toggleFCOverwrite)
        );
		QuestUI::BeatSaberUI::AddHoverHint(FCToggle->get_gameObject(), "Full combo-ing a map will overwrite any existing replay");
		// FCToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{50, 10});

        Toggle* CircularToggle = BeatSaberUI::CreateToggle(
            Parent1,
            "Enable Third Person Circular Movement",
            getConfig().config["ThirdPersonCircularMovement"].GetBool(),
            il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<bool>*>(classof(UnityEngine::Events::UnityAction_1<bool>*), this, toggleCircular)
        );
		QuestUI::BeatSaberUI::AddHoverHint(CircularToggle->get_gameObject(), "Third person camera will be on a camera rig");
		// CircularToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{50, 10});

        Toggle* AvatarToggle = BeatSaberUI::CreateToggle(
            Parent1,
            "Enable Replay Avatars",
            getConfig().config["Avatars"].GetBool(),
            il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<bool>*>(classof(UnityEngine::Events::UnityAction_1<bool>*), this, toggleAvatar)
        );
		QuestUI::BeatSaberUI::AddHoverHint(AvatarToggle->get_gameObject(), "An avatar will show in normal or third person camera");
		// CircularToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{50, 10});

        QuestUI::IncrementSetting* OffsetIncrement = BeatSaberUI::CreateIncrementSetting(
            Parent1,
            "Saber Time Offset",
            0,
            1,
            getConfig().config["SaberTimeOffset"].GetInt(),
            il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<float>*>(classof(UnityEngine::Events::UnityAction_1<float>*), this, changeOffset)
        );
		QuestUI::BeatSaberUI::AddHoverHint(OffsetIncrement->get_gameObject(), "Change the saber time offset, the higher the number the sooner the saber swings");

        // auto Button = CreateUIButton(get_transform(), "OKButton", il2cpp_utils::MakeAction<UnityEngine::Events::UnityAction>(il2cpp_functions::class_get_type(classof(UnityEngine::Events::UnityAction*)), (Il2CppObject*)nullptr, unhideModal), "Modal", nullptr);
	}
}

void Replay::UIController::DidDeactivate(bool removedFromHierarchy, bool systemScreenDisabling)  {
    getConfig().Write();
}