cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(learncpp20 
				VERSION 1.0
				DESCRIPTION "Examples for miniprojects in  C++20")

# Discourages (NOT RECOMMENDED) this
# file(GLOB_RECURSE SRC_FILES src/*.cpp)

#add_executable(learncpp20 main.cpp ${SRC_FILES})
add_executable(learncpp20 main.cpp 
								src/phanso.cpp 
								src/thuebao.cpp
                src/thuebao_stl.cpp)
							
target_include_directories(learncpp20 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
#add_subdirectory(lib/googletest)
#add_subdirectory(tst)
