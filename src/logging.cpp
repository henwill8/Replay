#include "logging.hpp"
#include "codegen.hpp"

void log(std::string str) {
    Logger::get().info("Replay: " + str);
}
void log(std::string baseStr, UnityEngine::Vector2 vector) {
    log(baseStr+" "+std::to_string(vector.x)+" "+std::to_string(vector.y));
}
void log(std::string baseStr, UnityEngine::Vector3 vector) {
    log(baseStr+" "+std::to_string(vector.x)+" "+std::to_string(vector.y)+" "+std::to_string(vector.z));
}
void log(std::string baseStr, Vector2 vector) {
    log(baseStr+" "+std::to_string(vector.x)+" "+std::to_string(vector.y));
}
void log(std::string baseStr, Vector3 vector) {
    log(baseStr+" "+std::to_string(vector.x)+" "+std::to_string(vector.y)+" "+std::to_string(vector.z));
}
void log(std::string baseStr, Quaternion quaternion) {
    log(baseStr+" "+std::to_string(quaternion.x)+" "+std::to_string(quaternion.y)+" "+std::to_string(quaternion.z)+" "+std::to_string(quaternion.w));
}
void log(std::string baseStr, UnityEngine::Quaternion quaternion) {
    log(baseStr+" "+std::to_string(quaternion.x)+" "+std::to_string(quaternion.y)+" "+std::to_string(quaternion.z)+" "+std::to_string(quaternion.w));
}
template <typename T>
T log(std::string baseStr, T value) {
    log(baseStr+" "+std::to_string(value));
}