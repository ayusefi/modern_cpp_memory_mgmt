cmake_minimum_required(VERSION 3.1)
# Enable C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
project(homework_8)

# SET(OpenCV_DIR /home/abdullah/opencv/build/share/OpenCV)

# Include OpenCV
# find_package(OpenCV 3 REQUIRED)
# include_directories(${OpenCV_INCLUDE_DIRS})

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(stack_limit task_1/src/task_1.cpp)
set_target_properties(stack_limit PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/task_1/bin")
