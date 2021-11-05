# CMakeList.txt : CMake project for xui, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

find_package(SFML COMPONENTS system window graphics CONFIG REQUIRED)
find_package(TGUI CONFIG REQUIRED)
find_package(Threads)
find_package(SDL2 REQUIRED)
find_package(SDL2-ttf REQUIRED)
find_package(OpenGL)

# Add source to this project's executable.
add_executable (xui "xui.cpp" "xui.h")

target_link_libraries(xui PRIVATE sfml-system sfml-graphics sfml-window tgui)

#install(TARGETS xui DESTINATION ./bin)

# TODO: Add tests and install targets if needed.
