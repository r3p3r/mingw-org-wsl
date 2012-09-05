/**
 * @file nextafterl.c
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
   nextafterl.c
   Contributed by Danny Smith <dannysmith@users.sourceforge.net>
   No copyright claimed, absolutely no warranties.

   2005-05-09
*/

#include <math.h>

long double
nextafterl (long double x, long double y)
{
  union {
      long double ld;
      struct {
        unsigned long long mantissa;
        unsigned short expn;
        unsigned short pad;
      } __attribute__ ((packed)) parts; 
  } u;

  /* The normal bit is explicit for long doubles, unlike
     float and double.  */
  static const unsigned long long normal_bit = 0x8000000000000000ull;

  if (isnan (y) || isnan (x))
    return x + y;

  if (x == y )
     /* nextafter (0.0, -O.0) should return -0.0.  */
     return y;

  u.ld = x;
  if (x == 0.0L)
    {
      u.parts.mantissa = 1ull;
      return y > 0.0L ? u.ld : -u.ld;
    }

  if (((x > 0.0L) ^ (y > x)) == 0)
    {
      u.parts.mantissa++;
      if ((u.parts.mantissa & ~normal_bit) == 0ull)
	u.parts.expn++;
    }
  else
    {
      if ((u.parts.mantissa & ~normal_bit) == 0ull)
	u.parts.expn--;
      u.parts.mantissa--;
    }

  /* If we have updated the expn of a normal number,
     or moved from denormal to normal, [re]set the normal bit.  */ 
     
  if (u.parts.expn & 0x7fff)
    u.parts.mantissa |=  normal_bit;

  return u.ld;
}

/* nexttowardl is the same function with a different name.  */
long double
nexttowardl (long double, long double) __attribute__ ((alias("nextafterl")));
