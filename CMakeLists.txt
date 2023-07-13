cmake_minimum_required(VERSION 3.15.5)
project(Bokemon)

add_executable(red src/game.cpp)
target_include_directories(red
  PUBLIC ${PROJECT_SOURCE_DIR}/include
)