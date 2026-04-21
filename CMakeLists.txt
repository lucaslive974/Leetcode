cmake_minimum_required(VERSION 4.2.1)

include(FetchContent)
enable_testing()

set(SOURCE_DIR "src")

set(EXEC_DIR "dist")
set(LIB_DIR "${EXEC_DIR}/lib")
set(BIN_DIR "${EXEC_DIR}/bin")

set(TEST_DIR "tests")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${BIN_DIR})
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${LIB_DIR})
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${LIB_DIR})

project(LEETCODE)

file(GLOB_RECURSE LEETCODE_SOURCES "${SOURCE_DIR}/*.cpp")

add_library("leetcode" STATIC)
target_include_directories("leetcode" PUBLIC "${SOURCE_DIR}/include")
target_sources("leetcode" PRIVATE ${LEETCODE_SOURCES})

add_executable("test_suite" "${TEST_DIR}/main.cpp")
target_link_libraries("test_suite" PRIVATE leetcode)

add_test(NAME "leetcode-test-suite" COMMAND "test_suite")

