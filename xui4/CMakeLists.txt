find_package(unofficial-nana CONFIG REQUIRED)

add_executable(xui4 xui4.cpp)

target_link_libraries(xui4 PRIVATE unofficial::nana::nana)
