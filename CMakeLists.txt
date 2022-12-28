cmake_minimum_required(VERSION 3.22)
project(GoogleTest VERSION 1.0.0)

find_package(GTest REQUIRED)
message("GTEST_INCLUDE_DIRS = ${GTEST_INCLUDE_DIRS}")
message("GTEST_LIBRARIES = ${GTEST_LIBRARIES}")

add_library(OperationLib OperationLib.cpp)
add_executable(main main.cpp)
target_link_libraries(main OperationLib)

add_executable(test testRunner.cpp)
target_link_libraries(test OperationLib ${GTEST_LIBRARIES} pthread)
