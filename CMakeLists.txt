cmake_minimum_required(VERSION 3.31)
project(Time_Tracker_PKS)

set(CMAKE_CXX_STANDARD 20)

add_executable(Time_Tracker_PKS
        src/main.cpp
        src/Task.cpp
        src/TaskManager.cpp
        src/AppFacade.cpp)

target_include_directories(Time_Tracker_PKS PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)