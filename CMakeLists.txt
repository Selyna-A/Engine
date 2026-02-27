cmake_minimum_required(VERSION 3.10.0)
project(ENGINE VERSION 0.1.0 LANGUAGES C CXX)
cmake_policy(SET CMP0072 NEW) # Makes sure we are using the newst openGL version

find_package(OpenGL REQUIRED)

add_executable(ENGINE src/main.cpp lib/glad/src/glad.c)

target_include_directories(ENGINE PRIVATE lib/glad/include)
target_link_libraries(ENGINE glfw OpenGL::GL)