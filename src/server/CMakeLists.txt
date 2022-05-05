set(server-headers src/fdn/server.hpp)
set(server-sources src/fdn/server.cpp)

add_library(fdn-server ${server-headers} ${server-sources})
target_link_libraries(fdn-server PRIVATE fmt::fmt)

target_include_directories(fdn-server PUBLIC src)
