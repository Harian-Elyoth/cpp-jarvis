# Minimum version of CMake required to build this project
cmake_minimum_required(VERSION 3.15)

# The name of the project
project(jarvis)

# Set the C++ compiler flags for all source files
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -pedantic")

# Set the C++ standard to C++17
set(CMAKE_CXX_STANDARD 17)

# Glob all source files in the src directory and store them in the variable SOURCE
file(GLOB SOURCE "src/*.cpp")

# Add an executable target called "jarvis" to be built from the source files
add_executable(jarvis ${SOURCE})

# Add the include directory to the jarvis target's include directories
target_include_directories(jarvis PUBLIC include)

# Set the output directory for the jarvis executable to be the bin directory in the source directory
set_target_properties(jarvis PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)