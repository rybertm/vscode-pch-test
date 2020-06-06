cmake_minimum_required(VERSION 3.17)

project(test VERSION 1.0 DESCRIPTION "A Simple Test" LANGUAGES CXX)

if(NOT CMAKE_BUILD_TYPE)
	set(CMAKE_BUILD_TYPE Debug)
endif()

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE "main.cpp" "pch.h")

target_precompile_headers(${PROJECT_NAME} PRIVATE "pch.h")