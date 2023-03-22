cmake_minimum_required(VERSION 3.24)
project(Example)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example main.cpp game_controller.cpp game_controller.h game_model.cpp game_model.h game_view.cpp game_view.h)
