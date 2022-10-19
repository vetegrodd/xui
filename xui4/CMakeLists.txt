find_package(unofficial-nana CONFIG REQUIRED)

add_executable(xui4 xui4.cpp)

if(MSVC)
  target_compile_options(xui4 PUBLIC "/ZI")
  target_link_options(xui4 PUBLIC "/INCREMENTAL")
endif()

target_link_libraries(xui4 PRIVATE unofficial::nana::nana)
