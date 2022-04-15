cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(learncpp20 VERSION 1.0)

# Discourages this
# file(GLOB_RECURSE SRC_FILES src/*.cpp)

#add_executable(learncpp20 main.cpp ${SRC_FILES})
add_executable(learncpp20 main.cpp src/phanso.cpp)
target_include_directories(learncpp20 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#add_subdirectory(lib/googletest)
#add_subdirectory(tst)
