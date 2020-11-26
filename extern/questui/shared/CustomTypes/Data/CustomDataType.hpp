#pragma once

#include "custom-types/shared/macros.hpp"

DECLARE_CLASS_CODEGEN(QuestUI, CustomDataType, Il2CppObject,

    DECLARE_INSTANCE_FIELD(void*, data);
    DECLARE_INSTANCE_FIELD(bool, allocated);

public:
    template<class T>
    CustomDataType* SetData(const T& typeData) {
        Finalize();
        this->data = malloc(sizeof(T));
        memcpy(this->data, &typeData, sizeof(T));
        this->allocated = true;
        return this;
    }

    template<class T>
    T& GetData() {
        return *(T*)this->data;
    }

    DECLARE_CTOR(ctor);

    DECLARE_METHOD(CustomDataType*, SetDataPointer, void* data);

    DECLARE_OVERRIDE_METHOD(void, Finalize, il2cpp_utils::FindMethod("System", "Object", "Finalize"));

    REGISTER_FUNCTION(CustomDataType,
        REGISTER_FIELD(data);
        REGISTER_FIELD(allocated);

        REGISTER_METHOD(ctor);
        REGISTER_METHOD(SetDataPointer);
        REGISTER_METHOD(Finalize);
    )
)