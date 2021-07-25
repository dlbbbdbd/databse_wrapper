cmake_minimum_required(VERSION 3.10)
project(sqlite_wrapper)

set(CMAKE_CXX_STANDARD 11)

include_directories("${CMAKE_SOURCE_DIR}/src")

file(GLOB_RECURSE source src/*.cpp)

add_executable(sqlite_wrapper ${source})
target_link_libraries(sqlite_wrapper sqlite3)