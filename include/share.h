/**
 * @file share.h
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
/*
 * share.h
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file is a part of the mingw-runtime package.
 * No warranty is given; refer to the file DISCLAIMER within the package.
 *
 * Constants for file sharing functions.
 *
 */

#ifndef	_SHARE_H_
#define	_SHARE_H_

/* All the headers include this file. */
#include <_mingw.h>

#define _SH_COMPAT	0x00	/* Compatibility */
#define	_SH_DENYRW	0x10	/* Deny read/write */
#define	_SH_DENYWR	0x20	/* Deny write */
#define	_SH_DENYRD	0x30	/* Deny read */
#define	_SH_DENYNO	0x40	/* Deny nothing */

#ifndef _NO_OLDNAMES

/* Non ANSI names */
#define SH_DENYRW _SH_DENYRW
#define SH_DENYWR _SH_DENYWR
#define SH_DENYRD _SH_DENYRD
#define SH_DENYNO _SH_DENYNO

#endif	/* Not _NO_OLDNAMES */

#endif	/* Not _SHARE_H_ */
