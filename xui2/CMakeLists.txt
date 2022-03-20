# CMakeList.txt : CMake project for xui, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

find_package(SFGUI CONFIG REQUIRED)

add_executable (xui2 "xui2.cpp")

target_link_libraries(xui2 PRIVATE SFGUI::SFGUI)