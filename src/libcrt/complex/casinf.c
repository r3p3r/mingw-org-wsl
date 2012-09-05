/**
 * @file casinf.c
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
   casinf.c
   Contributed by Danny Smith
   2004-12-24
*/

#include <math.h>
#include <complex.h>

/* casin (Z ) = -I * clog(I * Z + csqrt (1.0 - Z * Z))) */

float complex casinf (float complex Z)
{
  float complex Res;
  float x, y;

  x = __real__ Z;
  y = __imag__ Z;

  if (y == 0.0f)
    {
      __real__ Res = asinf (x);
      __imag__ Res = 0.0f;
    }
  else  /* -I * clog(I * Z + csqrt(1.0 - Z * Z))) */
    {
      float complex ZZ;
                                 
      /* Z * Z = ((x - y) * (x + y)) + (2.0 * x * y) * I */
      /* calculate 1 - Z * Z */
      __real__ ZZ = 1.0f - (x - y) * (x + y);
      __imag__ ZZ = -2.0f * x * y;
      ZZ = csqrtf (ZZ);


      /* add  I * Z  to ZZ */

      __real__ ZZ -= y;
      __imag__ ZZ += x;

      ZZ = clogf (ZZ);

      /* mult by -I */
      __real__ Res = __imag__ ZZ;
      __imag__ Res = - __real__ ZZ;  
    }
  return (Res);
}
