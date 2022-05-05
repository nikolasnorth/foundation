#set(VCPKG_TARGET_TRIPLET "x64-osx-gcc" CACHE STRING "")
cmake_minimum_required(VERSION 3.21)
project(foundation CXX)
set(CMAKE_CXX_STANDARD 20)

# vcpkg dependencies
find_package(asio CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

# Build client
add_subdirectory(src/client)
add_executable(client src/client.cpp)
target_link_libraries(client PRIVATE fdn-client)

# Build server
add_subdirectory(src/server)
add_executable(server src/server.cpp)
target_link_libraries(server PRIVATE fdn-server)
