cmake_minimum_required(VERSION 3.1)
# Enable C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
project(homework_8)

SET(OpenCV_DIR /home/abdullah/opencv/build/share/OpenCV)

# Include OpenCV
find_package(OpenCV 4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_library(image_class task_2/src/image_class.cpp task_2/src/io_tools.cpp) 

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(stack_limit task_1/src/task_1.cpp)
set_target_properties(stack_limit PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/task_1/bin")

add_executable(task_2 task_2/src/task_2.cpp)
target_link_libraries(task_2 image_class png stdc++fs ${OpenCV_LIBS})
set_target_properties(task_2 PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/task_2/bin")
