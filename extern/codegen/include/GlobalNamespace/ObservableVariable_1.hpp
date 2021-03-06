// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IValue`1
#include "GlobalNamespace/IValue_1.hpp"
// Including type: IObservableChange
#include "GlobalNamespace/IObservableChange.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ObservableVariable`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class ObservableVariable_1 : public ::Il2CppObject/*, public GlobalNamespace::IValue_1<T>, public GlobalNamespace::IObservableChange*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD0A9D0
    // private System.Action didChangeEvent
    // Size: 0x8
    // Offset: 0x0
    System::Action* didChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private T _value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T value;
    // Creating value type constructor for type: ObservableVariable_1
    ObservableVariable_1(System::Action* didChangeEvent_ = {}, T value_ = {}) noexcept : didChangeEvent{didChangeEvent_}, value{value_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IValue_1<T>
    operator GlobalNamespace::IValue_1<T>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IValue_1<T>*>(this);
    }
    // Creating interface conversion operator: operator GlobalNamespace::IObservableChange
    operator GlobalNamespace::IObservableChange() noexcept {
      return *reinterpret_cast<GlobalNamespace::IObservableChange*>(this);
    }
    // public System.Void add_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    // Implemented from: IObservableChange
    // Base method: System.Void IObservableChange::add_didChangeEvent(System.Action value)
    void add_didChangeEvent(System::Action* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::add_didChangeEvent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_didChangeEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void remove_didChangeEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    // Implemented from: IObservableChange
    // Base method: System.Void IObservableChange::remove_didChangeEvent(System.Action value)
    void remove_didChangeEvent(System::Action* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::remove_didChangeEvent");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_didChangeEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void set_value(T value)
    // Offset: 0xFFFFFFFF
    // Implemented from: IValue`1
    // Base method: System.Void IValue_1::set_value(T value)
    void set_value(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::set_value");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_value", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
    }
    // public T get_value()
    // Offset: 0xFFFFFFFF
    // Implemented from: IValue`1
    // Base method: T IValue_1::get_value()
    T get_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::get_value");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_value", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObservableVariable_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ObservableVariable_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObservableVariable_1<T>*, creationType>()));
    }
  }; // ObservableVariable`1
  // Could not write size check! Type: ObservableVariable`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::ObservableVariable_1, "", "ObservableVariable`1");
