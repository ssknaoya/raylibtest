cmake_minimum_required(VERSION 3.10)

project(MyRaylibProject)

find_package(raylib REQUIRED)

add_executable(MyRaylibProject main.cpp)

target_link_libraries(MyRaylibProject raylib)

if(WIN32)
    set_target_properties(MyRaylibProject PROPERTIES 
        LINK_FLAGS "/SUBSYSTEM:WINDOWS /ENTRY:\"mainCRTStartup\""
    )
endif()
