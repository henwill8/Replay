#include <dlfcn.h>
#include "../extern/beatsaber-hook/shared/utils/utils.h"
#include "../extern/beatsaber-hook/shared/utils/logging.hpp"
#include "../extern/modloader/shared/modloader.hpp"
#include "../extern/beatsaber-hook/shared/utils/typedefs.h"
#include "../extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "../extern/beatsaber-hook/shared/utils/il2cpp-functions.hpp"
#include "../extern/beatsaber-hook/shared/config/rapidjson-utils.hpp"
#include "../extern/beatsaber-hook/shared/config/config-utils.hpp"
#include "../extern/BeatSaberQuestCustomUI/shared/customui.hpp"
#include "../extern/bs-utils/shared/utils.hpp"

#include <sstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <list>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>

#include "../extern/codegen/include/GlobalNamespace/OVRInput.hpp"
#include "../extern/codegen/include/GlobalNamespace/OVRInput_Button.hpp"

using namespace il2cpp_utils;

void log(std::string str) {
    Logger::get().info("Replay: " + str);
}

class CustomButton {
    public:
        Il2CppObject* gameObject = nullptr;
        Il2CppObject* TMP = nullptr;
        Il2CppObject* button = nullptr;
        Il2CppObject* buttonTransform = nullptr;
        Il2CppObject* parent = nullptr;
        Il2CppObject* parentTransform = nullptr;
        Il2CppObject* TMPLocalizer = nullptr;
        Il2CppObject* rectTransform = nullptr;
        Vector3 sizeDelta = {0, 0, 0};
        Vector3 scale = {1.0f, 1.0f, 1.0f};
        Vector3 rotation = {0, 0, 0};
        float fontSize = 10.0f;
        bool toggle = true;//Use this when creating toggles
        std::string stringToggle;
        std::string text = "Custom Button UI";
        function_ptr_t<void> onPress;
 
        bool isCreated = false;
 
        void setParentAndTransform(Il2CppObject* Obj, int parentedAmount) {
            parent = Obj;
 
            if(parentedAmount < 1) {
                log("Parented amount has to be greater than 0, setting to 1...");
                parentedAmount = 1;
            }
            Il2CppObject* transform = *RunMethod(Obj, "get_transform");
            std::vector<Il2CppObject*> parents;
            Il2CppObject* firstParent = *RunMethod(transform, "GetParent");
            parents.push_back(firstParent);
            for(int i = 1; i < parentedAmount; i++) {
                Il2CppObject* otherParent = *RunMethod(parents[i-1], "GetParent");
                parents.push_back(otherParent);
            }
            parentTransform = parents[parents.size()-1];
        }
 
        void setParentTransform(Il2CppObject* Obj, int parentedAmount) {
            if(parentedAmount < 1) {
                log("Parented amount has to be greater than 0, setting to 1...");
                parentedAmount = 1;
            }
            Il2CppObject* transform = *RunMethod(Obj, "get_transform");
            std::vector<Il2CppObject*> parents;
            Il2CppObject* firstParent = *RunMethod(transform, "GetParent");
            parents.push_back(firstParent);
            for(int i = 1; i < parentedAmount; i++) {
                Il2CppObject* otherParent = *RunMethod(parents[i-1], "GetParent");
                parents.push_back(otherParent);
            }
            parentTransform = parents[parents.size()-1];
        }
 
        void create() {
            if(!isCreated && parent != nullptr && parentTransform != nullptr) {
                log("Custom Button: Creating an instance of the parent");
                Il2CppObject* button = CRASH_UNLESS(*il2cpp_utils::RunMethod("UnityEngine", "Object", "Instantiate", parent));
                log("Custom Button: Getting the transform");
                Il2CppObject* buttonTransform = CRASH_UNLESS(*il2cpp_utils::RunMethod(button, "get_transform"));
                log("Custom Button: Setting the parent transform");
                CRASH_UNLESS(il2cpp_utils::RunMethod(buttonTransform, "SetParent", parentTransform));
                log("Custom Button: Setting the local scale");
                CRASH_UNLESS(il2cpp_utils::RunMethod(buttonTransform, "set_localScale", scale));
                log("Custom Button: Setting the local position");
                CRASH_UNLESS(il2cpp_utils::RunMethod(buttonTransform, "set_localPosition", sizeDelta));
                log("Custom Button: Setting the euler angles");
                CRASH_UNLESS(il2cpp_utils::RunMethod(buttonTransform, "set_eulerAngles", rotation));
                log("Custom Button: Getting the game object");
                gameObject = CRASH_UNLESS(*il2cpp_utils::RunMethod(button, "get_gameObject"));
                log("Custom Button: Getting the TMProUGUI");
                TMP = CRASH_UNLESS(*il2cpp_utils::RunMethod(gameObject, "GetComponentInChildren", il2cpp_utils::GetSystemType("TMPro", "TextMeshProUGUI")));
                log("Custom Button: Getting the TMP Localizer");
                TMPLocalizer = *RunMethod<Il2CppObject*>(gameObject, "GetComponentInChildren", GetSystemType("Polyglot", "LocalizedTextMeshProUGUI"));
                log("Custom Button: Getting the rect transform");
                rectTransform = CRASH_UNLESS(*RunMethod(TMP, "get_rectTransform"));
                log("Custom Button: Setting the text");
                CRASH_UNLESS(il2cpp_utils::RunMethod(TMP, "set_text", il2cpp_utils::createcsstr(text)));
                log("Custom Button: Setting the font size");
                CRASH_UNLESS(il2cpp_utils::RunMethod(TMP, "set_fontSize", fontSize));
                log("Custom Button: Getting the onClick property");
                Il2CppObject* onClick = CRASH_UNLESS(*il2cpp_utils::GetPropertyValue(button, "onClick"));
                log("Custom Button: Creating the action");
                auto actionToRun = il2cpp_utils::MakeAction(il2cpp_functions::class_get_type(il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction")), (Il2CppObject*)nullptr, onPress);
                log("Custom Button: Setting the action to onClick");
                CRASH_UNLESS(il2cpp_utils::RunMethod(onClick, "AddListener", actionToRun));
                isCreated = true;
            } else {
                log("Button was already created or parent/parentTransform was null");
            }
        }
 
        bool setText(std::string newText) {
            if(gameObject != nullptr) {
                RET_0_UNLESS(RunMethod(TMP, "SetText", createcsstr(newText)));
                return true;
            }
            log("Game object is null, not setting text");
            return false;
        }
 
        bool setActive(bool isActive) {
            if(gameObject != nullptr) {
                RET_0_UNLESS(RunMethod(gameObject, "SetActive", isActive));
                return true;
            }
            log("Game object is null, not setting active");
            return false;
        }
 
        void setPos(Vector3 pos) {//Doesnt work yet, work on it more later
            il2cpp_utils::RunMethod(buttonTransform, "set_localPosition", pos);
        }
 
        void destroy() {
            if(isCreated) {
                RunMethod("UnityEngine", "Object", "Destroy", gameObject);
                gameObject = nullptr;
                TMP = nullptr;
                parentTransform = nullptr;
                parent = nullptr;
                TMPLocalizer = nullptr;
                isCreated = false;
            } else {
                log("Button was already destroyed");
            }
        }
};

static CustomButton replayButton;

static CustomButton replayFailedButton;

static CustomButton cameraToggle;//Toggle types are "hmd", "smooth", and "thirdPerson"

static CustomButton speedToggle;

CustomUI::TextObject replayText;

static ModInfo modInfo;

Configuration& getConfig() {
    static Configuration configuration(modInfo);
    return configuration;
}

Il2CppObject* playButton = nullptr;
Il2CppObject* restartButton = nullptr;

bool recording = true;

bool inSong = false;
bool inSongOrResults = false;

bool failedReplay;

std::string ssEnabled = "0";
bool firstTime = true;

void replayButtonOnClick() {
    bs_utils::Submission::disable(modInfo);
    if(playButton != nullptr) {
        recording = false;
        if(inSongOrResults && !inSong) {
            log("Pressed failed replay button");
            failedReplay = true;
            RunMethod(restartButton, "Press");
        } else {
            log("Pressed replay button");
            failedReplay = false;
            RunMethod(playButton, "Press");
        }
    }
}

void cameraToggleOnClick() {
    if(cameraToggle.stringToggle == "hmd") {
        cameraToggle.stringToggle = "smooth";
        cameraToggle.setText("Smooth Camera");
        RunMethod(cameraToggle.TMP, "set_fontSize", 3.3f);
    } else if(cameraToggle.stringToggle == "smooth") {
        cameraToggle.stringToggle = "thirdPerson";
        cameraToggle.setText("Third Person");
        RunMethod(cameraToggle.TMP, "set_fontSize", 3.8f);
    } else if(cameraToggle.stringToggle == "thirdPerson") {
        cameraToggle.stringToggle = "hmd";
        cameraToggle.setText("Normal");
        RunMethod(cameraToggle.TMP, "set_fontSize", 5);
    }
}

void speedToggleOnClick() {
    speedToggle.toggle = !speedToggle.toggle;
    
    if(speedToggle.toggle) {
        speedToggle.setText("Lock Speed - ON");
    } else {
        speedToggle.setText("Lock Speed - OFF");
    }
}

float songTime = 0.0f;

int score;
int highScore;
float percent;
int rank;
float scoreMultiplier = 1.0f;

int combo = 0;

bool inPracticeMode;

std::vector<Vector3> rightPositions;
std::vector<Vector3> rightRotations;
std::vector<Vector3> leftPositions;
std::vector<Vector3> leftRotations;
std::vector<Vector3> headPositions;
std::vector<Vector3> headRotations;
std::vector<int> scores;
std::vector<int> combos;
std::vector<float> times;
std::vector<float> percents;
std::vector<int> ranks;

std::string stringToSave;

Il2CppObject* scoreUI;

int indexNum = 0;

std::string songHash;

std::string replayDirectory = "sdcard/Android/data/com.beatgames.beatsaber/files/replays/";

bool batteryEnergy = false;
bool disappearingArrows = false;
bool noObstacles = false;
bool noBombs = false;
bool noArrows = false;
bool slowerSong = false;
bool noFail = false;
bool instafail = false;
bool ghostNotes = false;
bool fasterSong = false;
bool leftHanded = false;

int triggerNode;
float rTriggerVal;
float lTriggerVal;

bool inPauseMenu = false;

int amountPerLine = 23;

float replaySpeed = 1.0f;

std::string songName = "";

Vector3 smoothCameraRotation;
Vector3 smoothCameraPosition;

float positionSmooth;
float rotationSmooth;

Vector3 smoothPositionOffset;

Vector3 thirdPersonCameraPosition;
Vector3 thirdPersonCameraRotation;

int maxRawScore;

// int offset = getConfig().config["Offset"].GetInt();
int offset = 0;

void SaveConfig() {
    if(!fileexists("sdcard/Android/data/com.beatgames.beatsaber/files/mod_cfgs/Replay.json")) {
        log("Creating config");
        getConfig().config.RemoveAllMembers();
        getConfig().config.SetObject();
        rapidjson::Document::AllocatorType& allocator = getConfig().config.GetAllocator();
        getConfig().config.AddMember("PositionSmooth", 90, allocator);
        getConfig().config.AddMember("RotationSmooth", 97, allocator);

        rapidjson::Value SmoothCameraObject(rapidjson::kObjectType);
        SmoothCameraObject.AddMember("x", 0, allocator);
        SmoothCameraObject.AddMember("y", 0, allocator);
        SmoothCameraObject.AddMember("z", -1, allocator);
        getConfig().config.AddMember("SmoothCameraOffset", SmoothCameraObject, allocator);
        
        rapidjson::Value ThirdPersonPosObject(rapidjson::kObjectType);
        ThirdPersonPosObject.AddMember("x", -3, allocator);
        ThirdPersonPosObject.AddMember("y", 1.6f, allocator);
        ThirdPersonPosObject.AddMember("z", -5, allocator);
        getConfig().config.AddMember("ThirdPersonCameraPos", ThirdPersonPosObject, allocator);

        rapidjson::Value ThirdPersonRotObject(rapidjson::kObjectType);
        ThirdPersonRotObject.AddMember("x", 0, allocator);
        ThirdPersonRotObject.AddMember("y", 45, allocator);
        ThirdPersonRotObject.AddMember("z", 0, allocator);
        getConfig().config.AddMember("ThirdPersonCameraRot", ThirdPersonRotObject, allocator);

        getConfig().config.AddMember("FullComboOverwrites", false, allocator);
        getConfig().config.AddMember("DisableVibration", true, allocator);

        getConfig().Write();
    } else {
        getConfig().Load();
        log("Not creating config");
    }
}

void getReplayValues(std::string str) {
    rightPositions.clear();
    rightRotations.clear();
    leftPositions.clear();
    leftRotations.clear();
    headPositions.clear();
    headRotations.clear();
    scores.clear();
    times.clear();
    combos.clear();
    percents.clear();
    ranks.clear();

    batteryEnergy = false;
    disappearingArrows = false;
    noObstacles = false;
    noBombs = false;
    noArrows = false;
    slowerSong = false;
    noFail = false;
    instafail = false;
    ghostNotes = false;
    fasterSong = false;
    leftHanded = false;

    score = 0;
    combo = 0;
    
    int timesThrough = 0;
 
    std::stringstream ss;
 
    /* Storing the whole string into string stream */
    ss << str;
 
    /* Running loop till the end of the stream */
    std::string temp;
    float floatFound;
    int intFound;
    std::string stringFound;
    Vector3 tempVector;
    while (!ss.eof()) {
 
        /* extracting word by word from stream */
        ss >> temp;
 
        /* Checking the given word is integer or not */
        if (std::stringstream(temp) >> floatFound) {
            if(timesThrough%amountPerLine == 0 || timesThrough%amountPerLine == 3 || timesThrough%amountPerLine == 6 || timesThrough%amountPerLine == 9 || timesThrough%amountPerLine == 14 || timesThrough%amountPerLine == 19) {
                tempVector.x = floatFound;
            } else if(timesThrough%amountPerLine == 1 || timesThrough%amountPerLine == 4 || timesThrough%amountPerLine == 7 || timesThrough%amountPerLine == 10 || timesThrough%amountPerLine == 15 || timesThrough%amountPerLine == 20) {
                tempVector.y = floatFound;
            } else if(timesThrough%amountPerLine == 2 || timesThrough%amountPerLine == 5 || timesThrough%amountPerLine == 8 || timesThrough%amountPerLine == 11 || timesThrough%amountPerLine == 16 || timesThrough%amountPerLine == 21) {
                tempVector.z = floatFound;
                if(timesThrough%amountPerLine == 2) {
                    rightPositions.push_back(tempVector);
                } else if(timesThrough%amountPerLine == 5) {
                    rightRotations.push_back(tempVector);
                } else if(timesThrough%amountPerLine == 8) {
                    leftPositions.push_back(tempVector);
                } else if(timesThrough%amountPerLine == 11) {
                    leftRotations.push_back(tempVector);
                } else if(timesThrough%amountPerLine == 16) {
                    headPositions.push_back(tempVector);
                } else if(timesThrough%amountPerLine == 21) {
                    headRotations.push_back(tempVector);
                }
            } else if(timesThrough%amountPerLine == 13) {
                times.push_back(floatFound);
            }
        }
        if(timesThrough%amountPerLine == 18) {
            percents.push_back(floatFound);
        }
        if(std::stringstream(temp) >> intFound) {
            if(timesThrough%amountPerLine == 12) {
                scores.push_back(intFound);
            } else if(timesThrough%amountPerLine == 17) {
                combos.push_back(intFound);
            } else if(timesThrough%amountPerLine == 22) {
                ranks.push_back(intFound);
            }
            timesThrough++;
        }
        if(temp == "batteryEnergy") batteryEnergy = true;
        if(temp == "disappearingArrows") disappearingArrows = true;
        if(temp == "noObstacles") noObstacles = true;
        if(temp == "noBombs") noBombs = true;
        if(temp == "noArrows") noArrows = true;
        if(temp == "slowerSong") slowerSong = true;
        if(temp == "noFail") noFail = true;
        if(temp == "instafail") instafail = true;
        if(temp == "ghostNotes") ghostNotes = true;
        if(temp == "fasterSong") fasterSong = true;
        if(temp == "slowerSong") slowerSong = true;
        if(temp == "leftHanded") leftHanded = true;
 
        /* To save from space at the end of string */
        temp = "";
    }
}

bool hasFakeMiss() {
    int amountCheckingEachSide = 2;

    for(int i = -amountCheckingEachSide; i < (amountCheckingEachSide*2)+1; i++) {
        if(combos[indexNum+i] <= 1) {
            return false;
        }
    }

    return true;
}

Vector3 addVector3(Vector3 a, Vector3 b) {
    return Vector3{a.x + b.x, a.y + b.y, a.z + b.z};
}

Quaternion addQuaternion(Quaternion a, Quaternion b) {
    return Quaternion{a.x * b.x, a.y * b.y, a.z * b.z, a.w * b.w};
}

Quaternion eulerToQuaternion(Vector3 euler) {
    Quaternion tempQuaternion = {0, 0, 0, 0};
    tempQuaternion.x = sin(euler.x/2) * cos(euler.y/2) * cos(euler.z/2) - cos(euler.x/2) * sin(euler.y/2) * sin(euler.z/2);
    tempQuaternion.y = cos(euler.x/2) * sin(euler.y/2) * cos(euler.z/2) + sin(euler.x/2) * cos(euler.y/2) * sin(euler.z/2);
    tempQuaternion.z = cos(euler.x/2) * cos(euler.y/2) * sin(euler.z/2) - sin(euler.x/2) * sin(euler.y/2) * cos(euler.z/2);
    tempQuaternion.w = cos(euler.x/2) * cos(euler.y/2) * cos(euler.z/2) + sin(euler.x/2) * sin(euler.y/2) * sin(euler.z/2);
    return tempQuaternion;
}

int calculateMaxScore(int blockCount) {
    int maxScore;
    if (blockCount < 14) {
        if (blockCount == 1) {
            maxScore = 115;
        } else if (blockCount < 5) {
            maxScore = (blockCount - 1) * 230 + 115;
        } else {
            maxScore = (blockCount - 5) * 460 + 1035;
        }
    } else {
        maxScore = (blockCount - 13) * 920 + 4715;
    }
    return maxScore;
}

MAKE_HOOK_OFFSETLESS(PlayerController_Update, void, Il2CppObject* self) {

    // log("PlayerControllerUpdate");
    
    if(recording) {
        Il2CppObject* leftSaber = *il2cpp_utils::GetFieldValue(self, "_leftSaber");
        Il2CppObject* rightSaber = *il2cpp_utils::GetFieldValue(self, "_rightSaber");

        if(leftSaber != nullptr && rightSaber != nullptr) {
            Il2CppObject* leftSaberTransform = nullptr;
            Il2CppObject* rightSaberTransform = nullptr;

            Il2CppClass* componentsClass = il2cpp_utils::GetClassFromName("", "Saber");
            leftSaberTransform = *il2cpp_utils::RunMethod(leftSaber, il2cpp_functions::class_get_method_from_name(componentsClass, "get_transform", 0));
            rightSaberTransform = *il2cpp_utils::RunMethod(rightSaber, il2cpp_functions::class_get_method_from_name(componentsClass, "get_transform", 0));

            if(leftSaberTransform != nullptr && rightSaberTransform != nullptr) {
                Vector3 rightPos = *RunMethod<Vector3>(rightSaberTransform, "get_position");
                Vector3 rightRot = *RunMethod<Vector3>(rightSaberTransform, "get_eulerAngles");
                Vector3 leftPos = *RunMethod<Vector3>(leftSaberTransform, "get_position");
                Vector3 leftRot = *RunMethod<Vector3>(leftSaberTransform, "get_eulerAngles");
                Vector3 headPos = *GetFieldValue<Vector3>(self, "_headPos");
                Vector3 headRot = *GetFieldValue<Vector3>(self, "_headRot");
                stringToSave = stringToSave+std::to_string(rightPos.x)+" "+std::to_string(rightPos.y)+" "+std::to_string(rightPos.z)+" "+std::to_string(rightRot.x)+" "+std::to_string(rightRot.y)+" "+std::to_string(rightRot.z)+" "+std::to_string(leftPos.x)+" "+std::to_string(leftPos.y)+" "+std::to_string(leftPos.z)+" "+std::to_string(leftRot.x)+" "+std::to_string(leftRot.y)+" "+std::to_string(leftRot.z)+" "+std::to_string(score)+" "+std::to_string(songTime)+" "+std::to_string(headPos.x)+" "+std::to_string(headPos.y)+" "+std::to_string(headPos.z)+" "+std::to_string(combo)+" "+std::to_string(percent)+" "+std::to_string(headRot.x)+" "+std::to_string(headRot.y)+" "+std::to_string(headRot.z)+" "+std::to_string(rank)+" ";
            }
        }
    }

    PlayerController_Update(self);

    if(!recording) {
        bool foundCorrectIndex = false;
        while(!foundCorrectIndex) {
            if(indexNum < times.size()-1) {
                if(times[indexNum+offset] > songTime) {
                    foundCorrectIndex = true;
                } else if(indexNum+offset < times.size()) {
                    indexNum++;
                }
            } else {
                foundCorrectIndex = true;
            }
        }
        
        Il2CppObject* leftSaber = *il2cpp_utils::GetFieldValue(self, "_leftSaber");
        Il2CppObject* rightSaber = *il2cpp_utils::GetFieldValue(self, "_rightSaber");

        if(leftSaber != nullptr && rightSaber != nullptr) {
            Il2CppObject* leftSaberTransform = nullptr;
            Il2CppObject* rightSaberTransform = nullptr;

            Il2CppClass* componentsClass = il2cpp_utils::GetClassFromName("", "Saber");
            leftSaberTransform = *il2cpp_utils::RunMethod(leftSaber, il2cpp_functions::class_get_method_from_name(componentsClass, "get_transform", 0));
            rightSaberTransform = *il2cpp_utils::RunMethod(rightSaber, il2cpp_functions::class_get_method_from_name(componentsClass, "get_transform", 0));

            if(leftSaberTransform != nullptr && rightSaberTransform != nullptr) {
                CRASH_UNLESS(RunMethod(rightSaberTransform, "set_position", rightPositions[indexNum]));
                CRASH_UNLESS(RunMethod(rightSaberTransform, "set_eulerAngles",rightRotations[indexNum]));
                CRASH_UNLESS(RunMethod(leftSaberTransform, "set_position", leftPositions[indexNum]));
                CRASH_UNLESS(RunMethod(leftSaberTransform, "set_eulerAngles", leftRotations[indexNum]));
                CRASH_UNLESS(SetFieldValue(self, "_headPos", headPositions[indexNum]));
            }
        }
    }
}

MAKE_HOOK_OFFSETLESS(SongUpdate, void, Il2CppObject* self) {
    
    // log("SongUpdate");

    if(!recording && !speedToggle.toggle) {
        replaySpeed+=rTriggerVal/500;
        replaySpeed-=lTriggerVal/500;

        if(replaySpeed < 0.01f) {
            replaySpeed = 0.01f;
        }
        
        if(!inPauseMenu) {
            float roundedReplaySpeed = (float(int(replaySpeed*100)))/100;

            // log("Rounded replay speed is "+std::to_string(roundedReplaySpeed));

            SetFieldValue(self, "_timeScale", (float(int(replaySpeed*100)))/100);
            Il2CppObject* audioSource = *GetFieldValue(self, "_audioSource");
            RunMethod(audioSource, "set_pitch", (float(int(replaySpeed*100)))/100);
        }
    }

    SongUpdate(self);

    songTime = *il2cpp_utils::GetFieldValue<float>(self, "_songTime");
}

MAKE_HOOK_OFFSETLESS(SongStart, void, Il2CppObject* self, Il2CppObject* difficultyBeatmap, Il2CppObject* overrideEnvironmentSettings, Il2CppObject* overrideColorScheme, Il2CppObject* gameplayModifiers, Il2CppObject* playerSpecificSettings, Il2CppObject* practiceSettings, Il2CppString* backButtonText, bool useTestNoteCutSoundEffects) {

    log("Song Start");

    inSong = true;
    inSongOrResults = true;
    indexNum = 0;
    replaySpeed = 1.0f;
    score = 0;
    
    if(recording) {
        stringToSave = "";

        batteryEnergy = *RunMethod<bool>(gameplayModifiers, "get_batteryEnergy");
        if(batteryEnergy) stringToSave = stringToSave+"batteryEnergy ";

        disappearingArrows = *RunMethod<bool>(gameplayModifiers, "get_disappearingArrows");
        if(disappearingArrows) stringToSave = stringToSave+"disappearingArrows ";

        ghostNotes = *RunMethod<bool>(gameplayModifiers, "get_ghostNotes");
        if(ghostNotes) stringToSave = stringToSave+"ghostNotes ";

        instafail = *RunMethod<bool>(gameplayModifiers, "get_instaFail");
        if(instafail) stringToSave = stringToSave+"instafail ";

        noArrows = *RunMethod<bool>(gameplayModifiers, "get_noArrows");
        if(noArrows) stringToSave = stringToSave+"noArrows ";

        noBombs = *RunMethod<bool>(gameplayModifiers, "get_noBombs");
        if(noBombs) stringToSave = stringToSave+"noBombs ";

        noFail = *RunMethod<bool>(gameplayModifiers, "get_noFail");
        if(noFail) stringToSave = stringToSave+"noFail ";

        noObstacles = *RunMethod<bool>(gameplayModifiers, "get_noObstacles");
        if(noObstacles) stringToSave = stringToSave+"noObstacles ";

        int songSpeedLevel = *RunMethod<int>(gameplayModifiers, "get_songSpeed");
        slowerSong = false;
        fasterSong = false;
        if(songSpeedLevel == 1) {
            fasterSong = true;
            stringToSave = stringToSave+"fasterSong ";
        } else if(songSpeedLevel == 2) {
            slowerSong = true;
            stringToSave = stringToSave+"slowerSong ";
        }

        leftHanded = *RunMethod<bool>(playerSpecificSettings, "get_leftHanded");
        if(leftHanded) stringToSave = stringToSave+"leftHanded ";
    } else {
        log(std::to_string(failedReplay));
        if(!failedReplay) {
            stringToSave = readfile(replayDirectory+songHash+".txt");
        }
        getReplayValues(stringToSave);

        smoothCameraPosition = {0, 1.8, 0};
        smoothCameraRotation = headRotations[0];

        RunMethod(gameplayModifiers, "set_batteryEnergy", batteryEnergy);
        RunMethod(gameplayModifiers, "set_disappearingArrows", disappearingArrows);
        RunMethod(gameplayModifiers, "set_ghostNotes", ghostNotes);
        RunMethod(gameplayModifiers, "set_instaFail", instafail);
        RunMethod(gameplayModifiers, "set_noArrows", noArrows);
        RunMethod(gameplayModifiers, "set_noBombs", noBombs);
        RunMethod(gameplayModifiers, "set_noFail", noFail);
        RunMethod(gameplayModifiers, "set_noObstacles", noObstacles);
        RunMethod(playerSpecificSettings, "set_leftHanded", leftHanded);
        if(fasterSong) RunMethod(gameplayModifiers, "set_songSpeed", 1);
        if(slowerSong) RunMethod(gameplayModifiers, "set_songSpeed", 2);
    }

    inPauseMenu = false;

    speedToggle.destroy();

    SongStart(self, difficultyBeatmap, overrideEnvironmentSettings, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects);
}

MAKE_HOOK_OFFSETLESS(SongEnd, void, Il2CppObject* self, Il2CppObject* levelCompleteionResults) {
    
    log("SongEnd");

    inSong = false;

    if(replayText.gameObj != nullptr) {
        log("Destroying replay text");
        replayText.destroy();
    }

    int levelEndState = *GetFieldValue<int>(levelCompleteionResults, "levelEndStateType");

    log("Level end state is "+std::to_string(levelEndState));

    if(recording && levelEndState == 1 && !inPracticeMode) {
        if(score > highScore || !fileexists(replayDirectory+songHash+".txt") || (*RunMethod<bool>(levelCompleteionResults, "get_fullCombo") && getConfig().config["FullComboOverwrites"].GetBool())) {
            writefile(replayDirectory+songHash+".txt", stringToSave);
        } else {
            stringToSave = readfile(replayDirectory+songHash+".txt");
            getReplayValues(stringToSave);
            if(score > scores[scores.size()-1]) {
                writefile(replayDirectory+songHash+".txt", stringToSave);
            }
        }
    }
    
    SongEnd(self, levelCompleteionResults);

    log("Song has successfully ended");
}

MAKE_HOOK_OFFSETLESS(ScoreChanged, void, Il2CppObject* self, int rawScore, int modifiedScore) {

    // log("Score Changed");
    
    if(!recording && maxRawScore != 0) {
        rawScore = scores[indexNum];
        modifiedScore = rawScore * scoreMultiplier;
    }
 
    ScoreChanged(self, rawScore, modifiedScore);
}

MAKE_HOOK_OFFSETLESS(RefreshContent, void, Il2CppObject* self) {
    
    log("Refreshing Content");

    RefreshContent(self);

    playButton = *GetFieldValue(self, "_playButton");

    if(!inSongOrResults) {
        recording = true;
        bs_utils::Submission::enable(modInfo);
    }

    Il2CppObject* Level = CRASH_UNLESS(*GetFieldValue(self, "_level"));
    Il2CppString* LevelID = CRASH_UNLESS(*GetPropertyValue<Il2CppString*>(Level, "levelID"));

    Il2CppObject* SelectedBeatmapDifficulty = CRASH_UNLESS(*GetFieldValue(self, "_selectedDifficultyBeatmap"));
    int Difficulty = *GetPropertyValue<int>(SelectedBeatmapDifficulty, "difficulty");
    Il2CppObject* beatMapData = CRASH_UNLESS(*GetPropertyValue(SelectedBeatmapDifficulty, "beatmapData"));
    Il2CppObject* parentDifficultyBeatmapSet = CRASH_UNLESS(*GetPropertyValue(SelectedBeatmapDifficulty, "parentDifficultyBeatmapSet"));
    Il2CppObject* beatmapCharacteristic = CRASH_UNLESS(*GetPropertyValue(parentDifficultyBeatmapSet, "beatmapCharacteristic"));
    std::string modeName = to_utf8(csstrtostr(*GetFieldValue<Il2CppString*>(beatmapCharacteristic, "_compoundIdPartName")));
    log("Mode name is "+modeName);

    Il2CppObject* PlayerData = CRASH_UNLESS(*GetFieldValue(self, "_playerData"));
    Il2CppObject* playerLevelStatsData = CRASH_UNLESS(*RunMethod(PlayerData, "GetPlayerLevelStatsData", LevelID, Difficulty, beatmapCharacteristic));
    highScore = *GetPropertyValue<int>(playerLevelStatsData, "highScore");
    log("Highscore is "+std::to_string(highScore));

    songHash = to_utf8(csstrtostr(LevelID))+std::to_string(Difficulty)+modeName;

    replayButton.destroy();
    cameraToggle.destroy();

    if(fileexists(replayDirectory+songHash+".txt")) {
        log("Making Replay button");
        replayButton.setParentAndTransform(playButton, 5);
        replayButton.onPress = replayButtonOnClick;
        replayButton.scale = {1, 1, 1};
        replayButton.sizeDelta = {-12, -35, 0};
        replayButton.fontSize = 5;
        replayButton.create();
        if(replayButton.TMPLocalizer != nullptr) {
            RunMethod("UnityEngine", "Object", "Destroy", replayButton.TMPLocalizer);
        }
        replayButton.setText("Replay");
        RunMethod(replayButton.TMP, "set_enableWordWrapping", false);
        
        cameraToggle.setParentAndTransform(playButton, 5);
        cameraToggle.onPress = cameraToggleOnClick;
        cameraToggle.scale = {1, 1, 1};
        cameraToggle.sizeDelta = {12, -35, 0};
        cameraToggle.fontSize = 5;
        cameraToggle.create();
        if(cameraToggle.TMPLocalizer != nullptr) {
            RunMethod("UnityEngine", "Object", "Destroy", cameraToggle.TMPLocalizer);
        }
        cameraToggle.setText("Normal");//TO DO: Set to config value
        cameraToggle.stringToggle = "hmd";
        RunMethod(cameraToggle.TMP, "set_enableWordWrapping", false);
    } else {
        log("Not making Replay button");
    }

    Il2CppObject* songNameText = *GetFieldValue(self, "_songNameText");
    songName = to_utf8(csstrtostr(*RunMethod<Il2CppString*>(songNameText, "get_text")));
    log("Song name is "+songName);
}

MAKE_HOOK_OFFSETLESS(LevelSelectionFlowCoordinator_StartLevel, void, Il2CppObject* self, Il2CppObject* difficultyBeatmap, Il2CppObject* beforeSceneSwitchCallback, bool practice) {
    
    log("StartLevel");

    inPracticeMode = practice;
    LevelSelectionFlowCoordinator_StartLevel(self, difficultyBeatmap, beforeSceneSwitchCallback, practice);
}

MAKE_HOOK_OFFSETLESS(HandleLevelFailed, void, Il2CppObject* self) {
    
    log("HandleLevelFailed");

    if(!recording && !failedReplay) {
        return;
    }

    HandleLevelFailed(self);
}

MAKE_HOOK_OFFSETLESS(ScoreControllerLateUpdate, void, Il2CppObject* self) {

    // log("ScoreControllerLateUpdate");

    ScoreControllerLateUpdate(self);

    scoreMultiplier = *GetFieldValue<float>(self, "_gameplayModifiersScoreMultiplier");

    if(indexNum > 2 && !recording) {
        SetFieldValue(self, "_baseRawScore", scores[indexNum]);
        SetFieldValue(self, "_prevFrameRawScore", scores[indexNum-1]);
        SetFieldValue(self, "_combo", combos[indexNum]);
        maxRawScore = *GetFieldValue<int>(self, "_immediateMaxPossibleRawScore");
    }
    if(recording) {
        score = *GetFieldValue<int>(self, "_baseRawScore");
        combo = *GetFieldValue<int>(self, "_combo");
    }
}

MAKE_HOOK_OFFSETLESS(RefreshRank, void, Il2CppObject* self) {

    // log("RefreshRank");

    Il2CppObject* percentAndRankCounter = *GetFieldValue(self, "_relativeScoreAndImmediateRankCounter");

    if(!recording) {
        RunMethod(percentAndRankCounter, "set_immediateRank", ranks[indexNum]);
        RunMethod(percentAndRankCounter, "set_relativeScore", percents[indexNum]);
    } else {
        percent = *RunMethod<float>(percentAndRankCounter, "get_relativeScore");
        rank = *RunMethod<int>(percentAndRankCounter, "get_immediateRank");
    }
    
    RefreshRank(self);
}

MAKE_HOOK_OFFSETLESS(Triggers, void, Il2CppObject* self, int node) {

    // log("Triggers");

    triggerNode = node;

    Triggers(self, node);
}

MAKE_HOOK_OFFSETLESS(ControllerUpdate, void, Il2CppObject* self) {

    // log("ControllerUpdate");

    float trigger = *RunMethod<float>(self, "get_triggerValue");

    if (triggerNode == 4) {
        lTriggerVal = trigger;
    }
    if (triggerNode == 5) {
        rTriggerVal = trigger;
    }

    ControllerUpdate(self);
}

MAKE_HOOK_OFFSETLESS(ProgressUpdate, void, Il2CppObject* self) {
    
    // log("Progress update");

    if(!recording) {
        std::string tempString = std::to_string(replaySpeed);
        tempString.erase(4, tempString.length()-1);
        std::string textToSetTo = "Watching "+songName+" at "+tempString+"x speed";
        if(speedToggle.toggle && tempString == "1.00") {
            textToSetTo = "Watching a Replay of "+songName;
        }

        if(replayText.gameObj == nullptr && inSong) {
            log("Making replayText");
            Il2CppObject* slider = *il2cpp_utils::GetFieldValue(self, "_slider");
            Il2CppObject* sliderTransform = *il2cpp_utils::RunMethod(slider, "get_transform");
            Il2CppObject* sliderParent = *il2cpp_utils::RunMethod(sliderTransform, "GetParent");
    
            replayText.text = textToSetTo;
            replayText.fontSize = 12.0f;
            replayText.parentTransform = sliderParent;
            replayText.sizeDelta = {-400, 100};
            replayText.anchoredPosition = {-400, 100};
            replayText.create();
        } else {
            if(inSong) {
                replayText.set(textToSetTo);
            }
        }
    }
 
    ProgressUpdate(self);
}

MAKE_HOOK_OFFSETLESS(PauseStart, void, Il2CppObject* self) {

    log("PauseStart");

    PauseStart(self);

    inPauseMenu = true;

    if(!recording) {
        Il2CppObject* continueButton = CRASH_UNLESS(*GetFieldValue(self, "_continueButton"));

        speedToggle.setParentAndTransform(continueButton, 2);
        if(speedToggle.toggle) {
            speedToggle.text = "Lock Speed - ON";
        } else {
            speedToggle.text = "Lock Speed - OFF";
        }
        speedToggle.fontSize = 4.3f;
        speedToggle.scale = {1, 1, 1};
        speedToggle.sizeDelta = {0, -28, 0};
        speedToggle.onPress = speedToggleOnClick;
        speedToggle.create();
        if(speedToggle.TMPLocalizer != nullptr) {
            RunMethod("UnityEngine", "Object", "Destroy", speedToggle.TMPLocalizer);
        }
        RunMethod(speedToggle.TMP, "set_enableWordWrapping", false);
    }
}

MAKE_HOOK_OFFSETLESS(PauseFinish, void, Il2CppObject* self) {

    log("PauseFinish");

    PauseFinish(self);

    inPauseMenu = false;
}

MAKE_HOOK_OFFSETLESS(PauseMenuManager_MenuButtonPressed, void, Il2CppObject* self) {

    log("MenuButtonPressed");

    PauseMenuManager_MenuButtonPressed(self);

    inSongOrResults = false;
}

MAKE_HOOK_OFFSETLESS(ResultsScreenEnd, void, Il2CppObject* self, int deactivationType) {

    log("ResultsScreenEnd");

    inSongOrResults = false;

    ResultsScreenEnd(self, deactivationType);

    replayFailedButton.destroy();
}

MAKE_HOOK_OFFSETLESS(LightManager_OnWillRenderObject, void, Il2CppObject* self) {

    // log("LightManager_OnWillRenderObject");

    Il2CppObject* mainCamera = CRASH_UNLESS(il2cpp_utils::RunMethod("UnityEngine", "Camera", "get_main"));

    // GlobalNamespace::OVRInput::Button button = 1;
    // GlobalNamespace::OVRInput::Controller controller = 2;

    bool buttonValue = GlobalNamespace::OVRInput::Get(GlobalNamespace::OVRInput::Button::One, GlobalNamespace::OVRInput::Controller::RTouch);

    log("Button: "+std::to_string(buttonValue));

    if(inSong && !recording && !inPauseMenu) {

        Il2CppObject* mainCameraTransform = CRASH_UNLESS(RunMethod(mainCamera, "get_transform"));

        Vector3 previousPosition = *RunMethod<Vector3>(mainCameraTransform, "get_position");
        Quaternion previousRotation = *RunMethod<Quaternion>(mainCameraTransform, "get_rotation");

        if(cameraToggle.stringToggle == "smooth") {
            // float deltaTime = *RunMethod<float>("UnityEngine", "Time", "get_deltaTime");
            float deltaTime = 1.0f;

            smoothCameraPosition = *RunMethod<Vector3>("UnityEngine", "Vector3", "Lerp", smoothCameraPosition, headPositions[indexNum], deltaTime * (1 - (positionSmooth / 100)));
            smoothCameraRotation = *RunMethod<Vector3>("UnityEngine", "Vector3", "Lerp", smoothCameraRotation, headRotations[indexNum], deltaTime * (1 - (rotationSmooth / 100)));

            RunMethod(mainCameraTransform, "SetPositionAndRotation", Vector3{smoothCameraPosition.x + smoothPositionOffset.x, smoothCameraPosition.y + smoothPositionOffset.y, smoothCameraPosition.z + smoothPositionOffset.z}, eulerToQuaternion(smoothCameraRotation));
        } else if(cameraToggle.stringToggle == "thirdPerson") {
            RunMethod(mainCameraTransform, "SetPositionAndRotation", addVector3(previousPosition, thirdPersonCameraPosition), *RunMethod<Quaternion>("UnityEngine", "Quaternion", "op_Multiply", previousRotation, eulerToQuaternion(thirdPersonCameraRotation)));
        }
    }

    LightManager_OnWillRenderObject(self);
}

MAKE_HOOK_OFFSETLESS(HapticFeedbackController_Rumble, void, Il2CppObject* self) {

    // log("HapticFeedbackController_Rumble");

    if(!recording && inSong && getConfig().config["DisableVibration"].GetBool()) {
        log(std::to_string(recording));
        return;
    }

    HapticFeedbackController_Rumble(self);
}

MAKE_HOOK_OFFSETLESS(ResultsViewController_Init, void, Il2CppObject* self) {
    
    ResultsViewController_Init(self);

    int levelEndState = *GetFieldValue<int>(*GetFieldValue(self, "_levelCompletionResults"), "levelEndStateType");

    if(levelEndState == 2 && recording) {
        restartButton = *GetFieldValue(self, "_restartButton");
        Il2CppObject* failedPanel = *GetFieldValue(self, "_clearedDifficultyText");

        replayFailedButton.destroy();

        log("Making Failed Replay button");
        replayFailedButton.parent = restartButton;
        replayFailedButton.setParentTransform(restartButton, 1);
        replayFailedButton.onPress = replayButtonOnClick;
        replayFailedButton.scale = {1, 1, 1};
        replayFailedButton.sizeDelta = {0, 0, 0};
        replayFailedButton.fontSize = 5;
        replayFailedButton.create();
        if(replayFailedButton.TMPLocalizer != nullptr) {
            RunMethod("UnityEngine", "Object", "Destroy", replayFailedButton.TMPLocalizer);
        }
        replayFailedButton.setText("Replay");
        RunMethod(replayFailedButton.TMP, "set_enableWordWrapping", false);
        RunMethod(replayFailedButton.gameObject, "SetActive", true);
    }
}

MAKE_HOOK_OFFSETLESS(NoteWasMissed, void, Il2CppObject* self) {

    if(!recording && hasFakeMiss()) {
        return;
    }

    NoteWasMissed(self);
}

MAKE_HOOK_OFFSETLESS(NoteWasCut, void, Il2CppObject* self, Il2CppObject* noteCutInfo) {

    bool allIsOk = *RunMethod<bool>(noteCutInfo, "get_allIsOK");

    if(!recording && !allIsOk && hasFakeMiss()) {
        return;
    }

    NoteWasCut(self, noteCutInfo);
}

extern "C" void setup(ModInfo& info) {
    info.id = "Replay";
    info.version = "0.3.0";
    modInfo = info;
    // Create logger
    static std::unique_ptr<const Logger> ptr(new Logger(info));
    Logger::get().info("Completed setup!");
    // We can even check information specific to the modloader!
    Logger::get().info("Modloader name: %s", Modloader::getInfo().name.c_str());
    
    SaveConfig();
}

extern "C" void load() {
    Logger::get().info("Installing hooks...");
    INSTALL_HOOK_OFFSETLESS(SongUpdate, il2cpp_utils::FindMethodUnsafe("", "AudioTimeSyncController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(SongStart, il2cpp_utils::FindMethodUnsafe("", "StandardLevelScenesTransitionSetupDataSO", "Init", 8));
    INSTALL_HOOK_OFFSETLESS(SongEnd, il2cpp_utils::FindMethodUnsafe("", "StandardLevelScenesTransitionSetupDataSO", "Finish", 1));
    INSTALL_HOOK_OFFSETLESS(PlayerController_Update, il2cpp_utils::FindMethodUnsafe("", "PlayerController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(ScoreChanged, il2cpp_utils::FindMethodUnsafe("", "ScoreUIController", "UpdateScore", 2));
    INSTALL_HOOK_OFFSETLESS(RefreshContent, il2cpp_utils::FindMethodUnsafe("", "StandardLevelDetailView", "RefreshContent", 0));
    INSTALL_HOOK_OFFSETLESS(LevelSelectionFlowCoordinator_StartLevel, il2cpp_utils::FindMethodUnsafe("", "LevelSelectionFlowCoordinator", "StartLevel", 3));
    INSTALL_HOOK_OFFSETLESS(HandleLevelFailed, il2cpp_utils::FindMethodUnsafe("", "StandardLevelFailedController", "HandleLevelFailed", 0));
    INSTALL_HOOK_OFFSETLESS(ScoreControllerLateUpdate, il2cpp_utils::FindMethodUnsafe("", "ScoreController", "LateUpdate", 0));
    INSTALL_HOOK_OFFSETLESS(RefreshRank, il2cpp_utils::FindMethodUnsafe("", "ImmediateRankUIPanel", "RefreshUI", 0));
    INSTALL_HOOK_OFFSETLESS(Triggers, il2cpp_utils::FindMethodUnsafe("", "VRControllersInputManager", "TriggerValue", 1));
    INSTALL_HOOK_OFFSETLESS(ControllerUpdate, il2cpp_utils::FindMethodUnsafe("", "VRController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(ProgressUpdate, il2cpp_utils::FindMethodUnsafe("", "SongProgressUIController", "Update", 0));
    INSTALL_HOOK_OFFSETLESS(PauseStart, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "Start", 0));
    INSTALL_HOOK_OFFSETLESS(PauseFinish, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "StartResumeAnimation", 0));
    INSTALL_HOOK_OFFSETLESS(PauseMenuManager_MenuButtonPressed, il2cpp_utils::FindMethodUnsafe("", "PauseMenuManager", "MenuButtonPressed", 0));
    INSTALL_HOOK_OFFSETLESS(ResultsScreenEnd, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "DidDeactivate", 1));
    INSTALL_HOOK_OFFSETLESS(LightManager_OnWillRenderObject, il2cpp_utils::FindMethodUnsafe("", "LightManager", "OnWillRenderObject", 0));
    INSTALL_HOOK_OFFSETLESS(HapticFeedbackController_Rumble, il2cpp_utils::FindMethodUnsafe("", "HapticFeedbackController", "Rumble", 4));
    INSTALL_HOOK_OFFSETLESS(ResultsViewController_Init, il2cpp_utils::FindMethodUnsafe("", "ResultsViewController", "SetDataToUI", 0));
    INSTALL_HOOK_OFFSETLESS(NoteWasMissed, il2cpp_utils::FindMethodUnsafe("", "NoteController", "SendNoteWasMissedEvent", 0));
    INSTALL_HOOK_OFFSETLESS(NoteWasCut, il2cpp_utils::FindMethodUnsafe("", "NoteController", "SendNoteWasCutEvent", 1));
    Logger::get().info("Installed all hooks!");
    il2cpp_functions::Init();

    positionSmooth = getConfig().config["PositionSmooth"].GetFloat();
    rotationSmooth = getConfig().config["RotationSmooth"].GetFloat();

    smoothPositionOffset = {getConfig().config["SmoothCameraOffset"]["x"].GetFloat(), getConfig().config["SmoothCameraOffset"]["y"].GetFloat(), getConfig().config["SmoothCameraOffset"]["z"].GetFloat()};

    thirdPersonCameraPosition = {getConfig().config["ThirdPersonCameraPos"]["x"].GetFloat(), getConfig().config["ThirdPersonCameraPos"]["y"].GetFloat(), getConfig().config["ThirdPersonCameraPos"]["z"].GetFloat()};
    thirdPersonCameraRotation = {getConfig().config["ThirdPersonCameraRot"]["x"].GetFloat(), getConfig().config["ThirdPersonCameraRot"]["y"].GetFloat(), getConfig().config["ThirdPersonCameraRot"]["z"].GetFloat()};

    std::string path = replayDirectory+"test.txt";
    mkpath(const_cast<char*>(path.c_str()));
}
