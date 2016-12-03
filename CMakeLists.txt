cmake_minimum_required(VERSION 3.6)
project(Parallels)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp thread_gurad.hpp)
add_executable(Parallels ${SOURCE_FILES})
target_link_libraries(Parallels pthread)
target_link_libraries(Parallels boost_thread)
target_link_libraries(Parallels boost_system)