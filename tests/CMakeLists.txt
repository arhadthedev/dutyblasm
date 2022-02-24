# CMakeLists.txt - a child build file for a test suit
#
# Copyright (c) 2022 Oleg Iarygin <oleg@arhadthedev.net>
#
# Distributed under the MIT software license; see the accompanying
# file LICENSE.txt or <https://www.opensource.org/licenses/mit-license.php>.

find_package(GTest CONFIG REQUIRED)
include(GoogleTest)

add_executable(unittest hello.cpp)
target_compile_features(unittest PRIVATE cxx_std_20)
target_link_libraries(unittest PRIVATE dutyblasm GTest::gtest GTest::gtest_main)
gtest_discover_tests(unittest WORKING_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")
