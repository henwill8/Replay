#pragma once

#include <stdlib.h> //size_t, malloc, free
#include <new> // bad_alloc, bad_array_new_length
#include <memory>

#include "beatsaber-hook/shared/utils/gc-alloc.hpp"

// TODO: Remove this when bs-hooks PR is merged with gc_allocator.

template<class T>
struct gc_allocator_replay {
    using is_always_equal = std::true_type;
    typedef T value_type;

    gc_allocator_replay() noexcept {} //default ctor not required by C++ Standard Library

    // A converting copy constructor:
    template<class U>
    gc_allocator_replay(const gc_allocator_replay<U> &) noexcept {};

    template<class U>
    constexpr bool operator==(const gc_allocator_replay<U> &) const noexcept {
        return true;
    }

    T *allocate(const size_t n) const {
        if (n == 0) {
            return nullptr;
        }
        if (n > static_cast<size_t>(-1) / sizeof(T)) {
            throw std::bad_array_new_length();
        }
        void *const pv = gc_alloc_specific(n * sizeof(T));
        if (!pv) {
            throw std::bad_alloc();
        }
        return static_cast<T *>(pv);
    }

    void deallocate(T *const p, size_t) const noexcept {
        gc_free_specific(p);
    }
};