# CMakeLists.txt - a root build file
#
# Copyright (c) 2022 Oleg Iarygin <oleg@arhadthedev.net>
#
# Distributed under the MIT software license; see the accompanying
# file LICENSE.txt or <https://www.opensource.org/licenses/mit-license.php>.

# CMake 3.10 introduced gtest_discover_tests (GoogleTest is introduced in 3.9)
# CMake 3.12 introduced cxx_std_20 compile feature
cmake_minimum_required(VERSION 3.12)

# Use vcpkg shipped as a repo submodule to pin package versions
set(CMAKE_TOOLCHAIN_FILE vcpkg/scripts/buildsystems/vcpkg.cmake CACHE FILEPATH
     "Vcpkg toolchain file (usually <vcpkg>/scripts/buildsystems/vcpkg.cmake)")

project(dutyblasm VERSION 0.0.1)

include(CTest)
if(BUILD_TESTING)
    add_subdirectory(tests)
endif()
