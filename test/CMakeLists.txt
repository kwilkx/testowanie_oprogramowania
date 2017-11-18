cmake_minimum_required( VERSION 3.0 )

add_executable( proj_test main.cpp test.cpp inOut.cpp logic/file.cpp )

enable_testing()
find_package(GTest REQUIRED)

target_link_libraries(proj_test ${GTEST_BOTH_LIBRARIES} pthread)

set(CMAKE_CXX_STANDARD 17)
