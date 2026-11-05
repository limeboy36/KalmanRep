cmake_minimum_required(VERSION 3.16)

project(KalmanProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(KalmanProject
        main.cpp
        otherfile.cpp
        KalmanFilter.cpp
        KalmanFilter.h
    )

target_include_directories(KalmanProject PRIVATE
    "C:/msys64/ucrt64/include/eigen3"
)