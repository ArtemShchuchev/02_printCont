cmake_minimum_required(VERSION 3.5)
project(02_printCont)
add_executable(printCont main.cpp)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT printCont)




### add_subdirectory(../Catch2 Catch2-build)
#find_package(Catch2 3 REQUIRED)
## 		These tests need their own main
#add_executable(test test.cpp Table.hpp)
#target_link_libraries(test PRIVATE Catch2::Catch2)
