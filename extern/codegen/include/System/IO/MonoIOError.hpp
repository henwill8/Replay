// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Autogenerated type: System.IO.MonoIOError
  struct MonoIOError : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: MonoIOError
    constexpr MonoIOError(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.MonoIOError ERROR_SUCCESS
    static constexpr const int ERROR_SUCCESS = 0;
    // Get static field: static public System.IO.MonoIOError ERROR_SUCCESS
    static System::IO::MonoIOError _get_ERROR_SUCCESS();
    // Set static field: static public System.IO.MonoIOError ERROR_SUCCESS
    static void _set_ERROR_SUCCESS(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_FILE_NOT_FOUND
    static constexpr const int ERROR_FILE_NOT_FOUND = 2;
    // Get static field: static public System.IO.MonoIOError ERROR_FILE_NOT_FOUND
    static System::IO::MonoIOError _get_ERROR_FILE_NOT_FOUND();
    // Set static field: static public System.IO.MonoIOError ERROR_FILE_NOT_FOUND
    static void _set_ERROR_FILE_NOT_FOUND(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_PATH_NOT_FOUND
    static constexpr const int ERROR_PATH_NOT_FOUND = 3;
    // Get static field: static public System.IO.MonoIOError ERROR_PATH_NOT_FOUND
    static System::IO::MonoIOError _get_ERROR_PATH_NOT_FOUND();
    // Set static field: static public System.IO.MonoIOError ERROR_PATH_NOT_FOUND
    static void _set_ERROR_PATH_NOT_FOUND(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_TOO_MANY_OPEN_FILES
    static constexpr const int ERROR_TOO_MANY_OPEN_FILES = 4;
    // Get static field: static public System.IO.MonoIOError ERROR_TOO_MANY_OPEN_FILES
    static System::IO::MonoIOError _get_ERROR_TOO_MANY_OPEN_FILES();
    // Set static field: static public System.IO.MonoIOError ERROR_TOO_MANY_OPEN_FILES
    static void _set_ERROR_TOO_MANY_OPEN_FILES(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_ACCESS_DENIED
    static constexpr const int ERROR_ACCESS_DENIED = 5;
    // Get static field: static public System.IO.MonoIOError ERROR_ACCESS_DENIED
    static System::IO::MonoIOError _get_ERROR_ACCESS_DENIED();
    // Set static field: static public System.IO.MonoIOError ERROR_ACCESS_DENIED
    static void _set_ERROR_ACCESS_DENIED(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_INVALID_HANDLE
    static constexpr const int ERROR_INVALID_HANDLE = 6;
    // Get static field: static public System.IO.MonoIOError ERROR_INVALID_HANDLE
    static System::IO::MonoIOError _get_ERROR_INVALID_HANDLE();
    // Set static field: static public System.IO.MonoIOError ERROR_INVALID_HANDLE
    static void _set_ERROR_INVALID_HANDLE(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_INVALID_DRIVE
    static constexpr const int ERROR_INVALID_DRIVE = 15;
    // Get static field: static public System.IO.MonoIOError ERROR_INVALID_DRIVE
    static System::IO::MonoIOError _get_ERROR_INVALID_DRIVE();
    // Set static field: static public System.IO.MonoIOError ERROR_INVALID_DRIVE
    static void _set_ERROR_INVALID_DRIVE(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_NOT_SAME_DEVICE
    static constexpr const int ERROR_NOT_SAME_DEVICE = 17;
    // Get static field: static public System.IO.MonoIOError ERROR_NOT_SAME_DEVICE
    static System::IO::MonoIOError _get_ERROR_NOT_SAME_DEVICE();
    // Set static field: static public System.IO.MonoIOError ERROR_NOT_SAME_DEVICE
    static void _set_ERROR_NOT_SAME_DEVICE(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_NO_MORE_FILES
    static constexpr const int ERROR_NO_MORE_FILES = 18;
    // Get static field: static public System.IO.MonoIOError ERROR_NO_MORE_FILES
    static System::IO::MonoIOError _get_ERROR_NO_MORE_FILES();
    // Set static field: static public System.IO.MonoIOError ERROR_NO_MORE_FILES
    static void _set_ERROR_NO_MORE_FILES(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_NOT_READY
    static constexpr const int ERROR_NOT_READY = 21;
    // Get static field: static public System.IO.MonoIOError ERROR_NOT_READY
    static System::IO::MonoIOError _get_ERROR_NOT_READY();
    // Set static field: static public System.IO.MonoIOError ERROR_NOT_READY
    static void _set_ERROR_NOT_READY(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_WRITE_FAULT
    static constexpr const int ERROR_WRITE_FAULT = 29;
    // Get static field: static public System.IO.MonoIOError ERROR_WRITE_FAULT
    static System::IO::MonoIOError _get_ERROR_WRITE_FAULT();
    // Set static field: static public System.IO.MonoIOError ERROR_WRITE_FAULT
    static void _set_ERROR_WRITE_FAULT(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_READ_FAULT
    static constexpr const int ERROR_READ_FAULT = 30;
    // Get static field: static public System.IO.MonoIOError ERROR_READ_FAULT
    static System::IO::MonoIOError _get_ERROR_READ_FAULT();
    // Set static field: static public System.IO.MonoIOError ERROR_READ_FAULT
    static void _set_ERROR_READ_FAULT(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_GEN_FAILURE
    static constexpr const int ERROR_GEN_FAILURE = 31;
    // Get static field: static public System.IO.MonoIOError ERROR_GEN_FAILURE
    static System::IO::MonoIOError _get_ERROR_GEN_FAILURE();
    // Set static field: static public System.IO.MonoIOError ERROR_GEN_FAILURE
    static void _set_ERROR_GEN_FAILURE(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_SHARING_VIOLATION
    static constexpr const int ERROR_SHARING_VIOLATION = 32;
    // Get static field: static public System.IO.MonoIOError ERROR_SHARING_VIOLATION
    static System::IO::MonoIOError _get_ERROR_SHARING_VIOLATION();
    // Set static field: static public System.IO.MonoIOError ERROR_SHARING_VIOLATION
    static void _set_ERROR_SHARING_VIOLATION(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_LOCK_VIOLATION
    static constexpr const int ERROR_LOCK_VIOLATION = 33;
    // Get static field: static public System.IO.MonoIOError ERROR_LOCK_VIOLATION
    static System::IO::MonoIOError _get_ERROR_LOCK_VIOLATION();
    // Set static field: static public System.IO.MonoIOError ERROR_LOCK_VIOLATION
    static void _set_ERROR_LOCK_VIOLATION(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_HANDLE_DISK_FULL
    static constexpr const int ERROR_HANDLE_DISK_FULL = 39;
    // Get static field: static public System.IO.MonoIOError ERROR_HANDLE_DISK_FULL
    static System::IO::MonoIOError _get_ERROR_HANDLE_DISK_FULL();
    // Set static field: static public System.IO.MonoIOError ERROR_HANDLE_DISK_FULL
    static void _set_ERROR_HANDLE_DISK_FULL(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_FILE_EXISTS
    static constexpr const int ERROR_FILE_EXISTS = 80;
    // Get static field: static public System.IO.MonoIOError ERROR_FILE_EXISTS
    static System::IO::MonoIOError _get_ERROR_FILE_EXISTS();
    // Set static field: static public System.IO.MonoIOError ERROR_FILE_EXISTS
    static void _set_ERROR_FILE_EXISTS(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_CANNOT_MAKE
    static constexpr const int ERROR_CANNOT_MAKE = 82;
    // Get static field: static public System.IO.MonoIOError ERROR_CANNOT_MAKE
    static System::IO::MonoIOError _get_ERROR_CANNOT_MAKE();
    // Set static field: static public System.IO.MonoIOError ERROR_CANNOT_MAKE
    static void _set_ERROR_CANNOT_MAKE(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_INVALID_PARAMETER
    static constexpr const int ERROR_INVALID_PARAMETER = 87;
    // Get static field: static public System.IO.MonoIOError ERROR_INVALID_PARAMETER
    static System::IO::MonoIOError _get_ERROR_INVALID_PARAMETER();
    // Set static field: static public System.IO.MonoIOError ERROR_INVALID_PARAMETER
    static void _set_ERROR_INVALID_PARAMETER(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_BROKEN_PIPE
    static constexpr const int ERROR_BROKEN_PIPE = 109;
    // Get static field: static public System.IO.MonoIOError ERROR_BROKEN_PIPE
    static System::IO::MonoIOError _get_ERROR_BROKEN_PIPE();
    // Set static field: static public System.IO.MonoIOError ERROR_BROKEN_PIPE
    static void _set_ERROR_BROKEN_PIPE(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_INVALID_NAME
    static constexpr const int ERROR_INVALID_NAME = 123;
    // Get static field: static public System.IO.MonoIOError ERROR_INVALID_NAME
    static System::IO::MonoIOError _get_ERROR_INVALID_NAME();
    // Set static field: static public System.IO.MonoIOError ERROR_INVALID_NAME
    static void _set_ERROR_INVALID_NAME(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_DIR_NOT_EMPTY
    static constexpr const int ERROR_DIR_NOT_EMPTY = 145;
    // Get static field: static public System.IO.MonoIOError ERROR_DIR_NOT_EMPTY
    static System::IO::MonoIOError _get_ERROR_DIR_NOT_EMPTY();
    // Set static field: static public System.IO.MonoIOError ERROR_DIR_NOT_EMPTY
    static void _set_ERROR_DIR_NOT_EMPTY(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_ALREADY_EXISTS
    static constexpr const int ERROR_ALREADY_EXISTS = 183;
    // Get static field: static public System.IO.MonoIOError ERROR_ALREADY_EXISTS
    static System::IO::MonoIOError _get_ERROR_ALREADY_EXISTS();
    // Set static field: static public System.IO.MonoIOError ERROR_ALREADY_EXISTS
    static void _set_ERROR_ALREADY_EXISTS(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_FILENAME_EXCED_RANGE
    static constexpr const int ERROR_FILENAME_EXCED_RANGE = 206;
    // Get static field: static public System.IO.MonoIOError ERROR_FILENAME_EXCED_RANGE
    static System::IO::MonoIOError _get_ERROR_FILENAME_EXCED_RANGE();
    // Set static field: static public System.IO.MonoIOError ERROR_FILENAME_EXCED_RANGE
    static void _set_ERROR_FILENAME_EXCED_RANGE(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_DIRECTORY
    static constexpr const int ERROR_DIRECTORY = 267;
    // Get static field: static public System.IO.MonoIOError ERROR_DIRECTORY
    static System::IO::MonoIOError _get_ERROR_DIRECTORY();
    // Set static field: static public System.IO.MonoIOError ERROR_DIRECTORY
    static void _set_ERROR_DIRECTORY(System::IO::MonoIOError value);
    // static field const value: static public System.IO.MonoIOError ERROR_ENCRYPTION_FAILED
    static constexpr const int ERROR_ENCRYPTION_FAILED = 6000;
    // Get static field: static public System.IO.MonoIOError ERROR_ENCRYPTION_FAILED
    static System::IO::MonoIOError _get_ERROR_ENCRYPTION_FAILED();
    // Set static field: static public System.IO.MonoIOError ERROR_ENCRYPTION_FAILED
    static void _set_ERROR_ENCRYPTION_FAILED(System::IO::MonoIOError value);
  }; // System.IO.MonoIOError
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::IO::MonoIOError, "System.IO", "MonoIOError");
#pragma pack(pop)
