# 1. Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# 2. Name your project
project(cppLEARN VERSION 1.0)

# 3. Enforce a modern C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 4. Add your executable and EXPLICITLY list all .cpp files
# We include test/main.cpp because that is where your main() function lives
add_executable(${PROJECT_NAME}
    test/main.cpp
    src/header.cpp
)

# 5. Tell the compiler where to find your .hpp files
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
