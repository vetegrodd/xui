find_package(ftxui CONFIG REQUIRED)

add_executable(xui3 xui3.cpp)

target_link_libraries(xui3 PRIVATE ftxui::dom ftxui::screen ftxui::component)
