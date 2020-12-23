#include "main.hpp"

void log(std::string str);
template <typename T>
T log(std::string str, T t);
void log(std::string str, Vector3 t);
void log(std::string str, Vector2 t);
void log(std::string str, UnityEngine::Vector3 t);
void log(std::string str, UnityEngine::Vector2 t);
void log(std::string str, UnityEngine::Quaternion t);
void log(std::string str, Quaternion t);