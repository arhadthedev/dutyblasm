/* os_integration.cpp - cross-platform wrappers around OS system calls
 *
 * Copyright (c) 2022 Oleg Iarygin <oleg@arhadthedev.net>
 *
 * Distributed under the MIT software license; see the accompanying
 * file LICENSE.txt or <https://www.opensource.org/licenses/mit-license.php>.
 */

#include <dutyblasm/os_integration.hpp>


/************************************************
 *
 * Implementation for Windows
 *
 ************************************************/

#ifdef _WIN32

#define STRICT
#define WIN32_LEAN_AND_MEAN
#include <windows.h>


/************************************************
 *
 * Implementation for POSIX
 *
 ************************************************/

#elif __has_include(<unistd.h>)


/************************************************
 *
 * Some other, yet unknown implementation
 *
 ************************************************/

#else
#error unsupported OS
#endif
