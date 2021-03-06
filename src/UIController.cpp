#include "../include/UI.hpp"
#include "../include/codegen.hpp"
using namespace QuestUI;
using namespace UnityEngine::UI;
using namespace UnityEngine;

#define CreateIncrementMacro(parent, floatConfigValue, name, decimals, increment, hasMin, hasMax, minValue, maxValue) QuestUI::BeatSaberUI::CreateIncrementSetting(parent, name, decimals, increment, floatConfigValue.GetFloat(), hasMin, hasMax, minValue, maxValue, UnityEngine::Vector2{}, il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<float>*>(classof(UnityEngine::Events::UnityAction_1<float>*), (void*)nullptr, +[](float value) { floatConfigValue.SetFloat(value); }))

#define CreateToggleMacro(parent, boolConfigValue, name) QuestUI::BeatSaberUI::CreateToggle(parent, name, boolConfigValue.GetBool(), il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<bool>*>(classof(UnityEngine::Events::UnityAction_1<bool>*), (void*)nullptr, +[](bool value) { boolConfigValue.SetBool(value); }))

DEFINE_CLASS(Replay::UIController);

void toggleDisableVibration() {
    getConfig().config["DisableVibration"].SetBool(!getConfig().config["DisableVibration"].GetBool());
}

void toggleFCOverwrite() {
    getConfig().config["FullComboOverwrites"].SetBool(!getConfig().config["FullComboOverwrites"].GetBool());
}

void toggleNFOverwrite() {
    getConfig().config["OverwriteNFPlays"].SetBool(!getConfig().config["OverwriteNFPlays"].GetBool());
}

void toggleCircular() {
    getConfig().config["ThirdPersonCircularMovement"].SetBool(!getConfig().config["ThirdPersonCircularMovement"].GetBool());
}

void toggleAvatar() {
    getConfig().config["Avatars"].SetBool(!getConfig().config["Avatars"].GetBool());
}

void Replay::UIController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
	if(firstActivation)
	{
		HorizontalLayoutGroup* layout = QuestUI::BeatSaberUI::CreateHorizontalLayoutGroup(get_rectTransform());
		layout->set_spacing(2.5f);
		
		VerticalLayoutGroup* layout1 = QuestUI::BeatSaberUI::CreateVerticalLayoutGroup(layout->get_rectTransform());
		layout1->set_spacing(1.5f);

		layout1->set_padding(UnityEngine::RectOffset::New_ctor(3, 3, 2, 2));

		UnityEngine::Transform* Parent1 = layout1->get_transform();
		
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

        Toggle* NFToggle = BeatSaberUI::CreateToggle(
            Parent1,
            "Overwrite No Fail Plays",
            getConfig().config["OverwriteNFPlays"].GetBool(),
            il2cpp_utils::MakeDelegate<UnityEngine::Events::UnityAction_1<bool>*>(classof(UnityEngine::Events::UnityAction_1<bool>*), this, toggleNFOverwrite)
        );
		QuestUI::BeatSaberUI::AddHoverHint(NFToggle->get_gameObject(), "When enabled, this will overwrite any replays that use no fail");

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
		QuestUI::BeatSaberUI::AddHoverHint(AvatarToggle->get_gameObject(), "An avatar will show in third person camera");
		// CircularToggle->get_gameObject()->GetComponentInChildren<UnityEngine::RectTransform*>()->set_sizeDelta(UnityEngine::Vector2{50, 10});

        QuestUI::BeatSaberUI::AddHoverHint(CreateIncrementMacro(Parent1, getConfig().config["PositionSmooth"], "Position Smooth", 1, 0.1f, true, false, 0.1f, 0.0f)->get_gameObject(), "This is only used for smooth camera, smaller is smoother");
        QuestUI::BeatSaberUI::AddHoverHint(CreateIncrementMacro(Parent1, getConfig().config["RotationSmooth"], "Rotation Smooth", 1, 0.1f, true, false, 0.1f, 0.0f)->get_gameObject(), "This is only used for smooth camera, smaller is smoother");
        QuestUI::BeatSaberUI::AddHoverHint(CreateIncrementMacro(Parent1, getConfig().config["SmoothCameraOffset"]["y"], "Smooth Camera Y Offset", 1, 0.1f, false, false, 0.1f, 0.0f)->get_gameObject(), "This adds an offset to the Y position for the smooth camera");
        QuestUI::BeatSaberUI::AddHoverHint(CreateIncrementMacro(Parent1, getConfig().config["SmoothCameraOffset"]["z"], "Smooth Camera Z Offset", 1, 0.1f, false, false, 0.1f, 0.0f)->get_gameObject(), "This adds an offset to the Z position for the smooth camera, it is recommended to have a bigger offset when using wide (16:9) recording");
    }
}

void Replay::UIController::DidDeactivate(bool removedFromHierarchy, bool systemScreenDisabling)  {
    getConfig().Write();
}