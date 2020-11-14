cmake_minimum_required(VERSION 3.10)
project(test_cv)

set(CMAKE_CXX_STANDARD 11)


set(OpenCV_DIR "/home/ych/software/opencv/opencv-4.4.0-bin")
find_package(OpenCV REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${OpenCV_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBRARIES})
message(STATUS ${OpenCV_INCLUDE_DIRS})
message(STATUS ${PROJECNAME})