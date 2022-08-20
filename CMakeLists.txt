# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("xui")
set(CMAKE_CXX_STANDARD 17)     

# Include sub-projects.
message("--- building xui ---")
add_subdirectory ("xui")

message("--- building xui2 ---")
add_subdirectory ("xui2")

message("--- building xui3 ---")
add_subdirectory ("xui3")

message("--- building xui4 ---")
add_subdirectory ("xui4")
