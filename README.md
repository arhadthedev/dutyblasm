# Overview

This is Dutyblasm, a runtime for dynamically typed languages including ECMAScript.

# Getting Started

## Quick Start: Windows

Prerequisites:

- CMake 3.12 or later
- GCC 9 or later, or Clang 9 or later, or Visual Studio 2019 16.11 or later; other compilers were not tested
- Ninja 1.4 or later
<!--
    Sources:

    - https://gcc.gnu.org/projects/cxx-status.html#cxx20
    - https://clang.llvm.org/cxx_status.html#cxx20
    - https://docs.microsoft.com/en-us/cpp/overview/what-s-new-for-cpp-2019

    Clang 9 is chosen in favor of 8 because of P1236R1 "Signed integers are two's complement" (https://wg21.link/p1236r1).
-->

To prepare a build directory:

```cmd
git submodule update --init
cmake -G Ninja -S . -B build
```

To rebuild a project:

```cmd
cmake --build build
```

# Legal Information

Copyright © 2022 Oleg Iarygin <oleg@arhadthedev.net>

Distributed under the MIT software license; see the accompanying file LICENSE.txt or <https://www.opensource.org/licenses/mit-license.php>.
