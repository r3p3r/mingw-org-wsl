/**
 * @file extras-uuid.c
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
/* extras-uuid.c */
/* Generate GUIDs for interfaces not defined in any headers*/

/* All IIDs defined in this file were extracted from
 * HKEY_LOCAL_MACHINE\SOFTWARE\Classes\Interface\ */

/* All CLSIDs defined in this file were extracted from
 * HKEY_CLASSES_ROOT\CLSID\ */

#define INITGUID
#include <basetyps.h>
// Microsoft Web Browser CLSID
DEFINE_GUID(IID_IClientSiteHandler,0xf4f569d1,0x593b,0x101a,0xb5,0x69,0x8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_OLEGUID(IID_IContinue,0x12a,0,0);
DEFINE_GUID(IID_IHttpNegotiate,0x79eac9d2,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IPersistMoniker,0x79eac9c9,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0x0b);
DEFINE_GUID(IID_IServerHandler,0xf4f569d0,0x593b,0x101a,0xb5,0x69,0x8,0,0x2b,0x2d,0xbf,0x7a);
DEFINE_GUID(IID_ITargetEmbedding,0x548793c0,0x9e74,0x11cf,0x96,0x55,0,0xa0,0xc9,0x3,0x49,0x23);
DEFINE_GUID(IID_ITargetFrame,0xd5f78c80,0x5252,0x11cf,0x90,0xfa,0,0xaa,0,0x42,0x10,0x6e);
DEFINE_OLEGUID(IID_ITypeComp,0x20403,0,0);
DEFINE_GUID(IID_IUrlHistoryStg,0x3c374a41,0xbae4,0x11cf,0xbf,0x7d,0,0xaa,0,0x69,0x46,0xee);
DEFINE_GUID(IID_IWinInetHttpInfo,0x79eac9d8,0xbafa,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_GUID(IID_IWinInetInfo,0x79eac9d6,0xbafa,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
DEFINE_OLEGUID(IID_IEnumSTATPROPSETSTG,0x13b,0,0);
DEFINE_OLEGUID(IID_IEnumSTATPROPSTG,0x139,0,0);
DEFINE_GUID(IID_IEnumSTATURL,0x3c374a42,0xbae4,0x11cf,0xbf,0x7d,0,0xaa,0,0x69,0x46,0xee);
// file:, local: Asychronous Pluggable Protocol Handler CLSID
DEFINE_GUID(CLSID_FileProtocol,0x79eac9e7,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
// ftp: Asychronous Pluggable Protocol Handler CLSID
DEFINE_GUID(CLSID_FtpProtocol,0x79eac9e3,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
// gopher: Asychronous Pluggable Protocol Handler CLSID
DEFINE_GUID(CLSID_GopherProtocol,0x79eac9e4,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
// http: Asychronous Pluggable Protocol Handler CLSID
DEFINE_GUID(CLSID_HttpProtocol,0x79eac9e2,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
// https: Asychronous Pluggable Protocol Handler CLSID
DEFINE_GUID(CLSID_HttpSProtocol,0x79eac9e5,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
// mk: Asychronous Pluggable Protocol Handler CLSID
DEFINE_GUID(CLSID_MkProtocol,0x79eac9e6,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
// URLMoniker ProxyStub Factory CLSID
DEFINE_GUID(CLSID_PSUrlMonProxy,0x79eac9f1,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
// URL Moniker CLSID
DEFINE_GUID(CLSID_StdURLMoniker,0x79eac9e0,0xbaf9,0x11ce,0x8c,0x82,0,0xaa,0,0x4b,0xa9,0xb);
