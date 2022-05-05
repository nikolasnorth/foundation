set(client-headers src/fdn/client.hpp)
set(client-sources src/fdn/client.cpp)

add_library(fdn-client ${client-headers} ${client-sources})
target_link_libraries(fdn-client PRIVATE fmt::fmt)

target_include_directories(fdn-client PUBLIC src)
