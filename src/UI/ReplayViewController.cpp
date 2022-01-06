#include "UI/ReplayViewController.hpp"

using namespace Replay;

DEFINE_TYPE(Replay::UI, ReplayViewController);

void Replay::UI::ReplayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
	if(firstActivation) {
        log("TEST FROM VIEW CONTROLLER");
    }
}