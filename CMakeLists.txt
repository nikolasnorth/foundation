cmake_minimum_required(VERSION 3.21)
project(foundation)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src/fdn)
target_include_directories(fdn PUBLIC ${CMAKE_SOURCE_DIR}/src)

find_package(GTest CONFIG REQUIRED)

set(TEST_FILES
        src/fdn/server/server_test.cpp
        )

add_executable(${PROJECT_NAME}-test ${TEST_FILES})

target_link_libraries(
        ${PROJECT_NAME}-test PRIVATE
        fdn
        GTest::gtest GTest::gtest_main
)
