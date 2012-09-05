/**
 * @file tlsmthread.c
 * @copy 2012 MinGW.org project
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is part of the w64 mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within this package.
 *
 * Written by Kai Tietz  <kai.tietz@onevision.com>
 */
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#include <stdlib.h>

int __mingwthr_key_dtor (DWORD key, void (*dtor)(void *));
int __mingwthr_remove_key_dtor (DWORD key);

extern int ___w64_mingwthr_remove_key_dtor (DWORD key);
extern int ___w64_mingwthr_add_key_dtor (DWORD key, void (*dtor)(void *));

int
__mingwthr_remove_key_dtor (DWORD key)
{
  return ___w64_mingwthr_remove_key_dtor (key);
}

int
__mingwthr_key_dtor (DWORD key, void (*dtor)(void *))
{
  if (dtor)
    return ___w64_mingwthr_add_key_dtor (key, dtor);
  return 0;
}
