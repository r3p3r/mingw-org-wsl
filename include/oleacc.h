/**
 * @file oleacc.h
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
#ifndef _OLEACC_H
#define _OLEACC_H
#pragma GCC system_header

#ifdef __cplusplus
extern "C" {
#endif

#define DISPID_ACC_PARENT                   (-5000)
#define DISPID_ACC_CHILDCOUNT               (-5001)
#define DISPID_ACC_CHILD                    (-5002)

#define DISPID_ACC_NAME                     (-5003)
#define DISPID_ACC_VALUE                    (-5004)
#define DISPID_ACC_DESCRIPTION              (-5005)
#define DISPID_ACC_ROLE                     (-5006)
#define DISPID_ACC_STATE                    (-5007)
#define DISPID_ACC_HELP                     (-5008)
#define DISPID_ACC_HELPTOPIC                (-5009)
#define DISPID_ACC_KEYBOARDSHORTCUT         (-5010)
#define DISPID_ACC_FOCUS                    (-5011)
#define DISPID_ACC_SELECTION                (-5012)
#define DISPID_ACC_DEFAULTACTION            (-5013)

#define DISPID_ACC_SELECT                   (-5014)
#define DISPID_ACC_LOCATION                 (-5015)
#define DISPID_ACC_NAVIGATE                 (-5016)
#define DISPID_ACC_HITTEST                  (-5017)
#define DISPID_ACC_DODEFAULTACTION          (-5018)

#define NAVDIR_DOWN 2
#define NAVDIR_FIRSTCHILD 7
#define NAVDIR_LASTCHILD 8
#define NAVDIR_LEFT 3
#define NAVDIR_NEXT 5
#define NAVDIR_PREVIOUS 6
#define NAVDIR_RIGHT 4
#define NAVDIR_UP 1

#define ROLE_SYSTEM_ALERT 8
#define ROLE_SYSTEM_ANIMATION 54
#define ROLE_SYSTEM_APPLICATION 14
#define ROLE_SYSTEM_BORDER 19
#define ROLE_SYSTEM_BUTTONDROPDOWN  56
#define ROLE_SYSTEM_BUTTONDROPDOWNGRID 58
#define ROLE_SYSTEM_BUTTONMENU 57
#define ROLE_SYSTEM_CARET 7
#define ROLE_SYSTEM_CELL 29
#define ROLE_SYSTEM_CHARACTER 32
#define ROLE_SYSTEM_CHART 17
#define ROLE_SYSTEM_CHECKBUTTON 44
#define ROLE_SYSTEM_CLIENT 10
#define ROLE_SYSTEM_CLOCK 61
#define ROLE_SYSTEM_COLUMN 27
#define ROLE_SYSTEM_COLUMNHEADER 25
#define ROLE_SYSTEM_COMBOBOX 46
#define ROLE_SYSTEM_CURSOR 6
#define ROLE_SYSTEM_DIAGRAM 53
#define ROLE_SYSTEM_DIAL 49
#define ROLE_SYSTEM_DIALOG 18
#define ROLE_SYSTEM_DOCUMENT 15
#define ROLE_SYSTEM_DROPLIST 47
#define ROLE_SYSTEM_EQUATION 55
#define ROLE_SYSTEM_GRAPHIC 40
#define ROLE_SYSTEM_GRIP 4
#define ROLE_SYSTEM_GROUPING 20
#define ROLE_SYSTEM_HELPBALLOON 31
#define ROLE_SYSTEM_HOTKEYFIELD 50
#define ROLE_SYSTEM_INDICATOR 39
#define ROLE_SYSTEM_LINK 30
#define ROLE_SYSTEM_LIST 33
#define ROLE_SYSTEM_LISTITEM 34
#define ROLE_SYSTEM_MENUBAR 2
#define ROLE_SYSTEM_MENUITEM 12
#define ROLE_SYSTEM_MENUPOPUP 11
#define ROLE_SYSTEM_OUTLINE 35
#define ROLE_SYSTEM_OUTLINEITEM 36
#define ROLE_SYSTEM_PAGETAB 37
#define ROLE_SYSTEM_PAGETABLIST 60
#define ROLE_SYSTEM_PANE 16
#define ROLE_SYSTEM_PROGRESSBAR 48
#define ROLE_SYSTEM_PROPERTYPAGE 38
#define ROLE_SYSTEM_PUSHBUTTON 43
#define ROLE_SYSTEM_RADIOBUTTON 45
#define ROLE_SYSTEM_ROW 28
#define ROLE_SYSTEM_ROWHEADER 26
#define ROLE_SYSTEM_SCROLLBAR 3
#define ROLE_SYSTEM_SEPARATOR 21
#define ROLE_SYSTEM_SLIDER 51
#define ROLE_SYSTEM_SOUND 5
#define ROLE_SYSTEM_SPINBUTTON 52
#define ROLE_SYSTEM_STATICTEXT 41
#define ROLE_SYSTEM_STATUSBAR 23
#define ROLE_SYSTEM_TABLE 24
#define ROLE_SYSTEM_TEXT 42
#define ROLE_SYSTEM_TITLEBAR 1
#define ROLE_SYSTEM_TOOLBAR 22
#define ROLE_SYSTEM_TOOLTIP 13
#define ROLE_SYSTEM_WHITESPACE 59
#define ROLE_SYSTEM_WINDOW 9

#define STATE_SYSTEM_UNAVAILABLE 0x00000001
#define STATE_SYSTEM_SELECTED 0x00000002
#define STATE_SYSTEM_FOCUSED 0x00000004
#define STATE_SYSTEM_PRESSED 0x00000008
#define STATE_SYSTEM_CHECKED 0x00000010
#define STATE_SYSTEM_MIXED 0x00000020
#define STATE_SYSTEM_READONLY 0x00000040
#define STATE_SYSTEM_HOTTRACKED 0x00000080
#define STATE_SYSTEM_DEFAULT 0x00000100
#define STATE_SYSTEM_EXPANDED 0x00000200
#define STATE_SYSTEM_COLLAPSED 0x00000400
#define STATE_SYSTEM_BUSY 0x00000800
#define STATE_SYSTEM_FLOATING 0x00001000
#define STATE_SYSTEM_MARQUEED 0x00002000
#define STATE_SYSTEM_ANIMATED 0x00004000
#define STATE_SYSTEM_INVISIBLE 0x00008000
#define STATE_SYSTEM_OFFSCREEN 0x00010000
#define STATE_SYSTEM_SIZEABLE 0x00020000
#define STATE_SYSTEM_MOVEABLE 0x00040000
#define STATE_SYSTEM_SELFVOICING 0x00080000
#define STATE_SYSTEM_FOCUSABLE 0x00100000
#define STATE_SYSTEM_SELECTABLE 0x00200000
#define STATE_SYSTEM_LINKED 0x00400000
#define STATE_SYSTEM_TRAVERSED 0x00800000
#define STATE_SYSTEM_MULTISELECTABLE 0x01000000
#define STATE_SYSTEM_EXTSELECTABLE 0x02000000
#define STATE_SYSTEM_ALERT_LOW 0x04000000
#define STATE_SYSTEM_ALERT_MEDIUM 0x08000000
#define STATE_SYSTEM_ALERT_HIGH 0x10000000
#define STATE_SYSTEM_VALID 0x1fffffff
/* http://opensource.adobe.com/wiki/display/flexsdk/Accessibility+for+Spark+Components */
#define STATE_SYSTEM_NORMAL 0x00000000
#define STATE_SYSTEM_PROTECTED 0x20000000
#define STATE_SYSTEM_HASPOPUP 0x40000000

typedef enum tagSELFLAG 
{
  SELFLAG_NONE = 0,
  SELFLAG_TAKEFOCUS = 1,
  SELFLAG_TAKESELECTION = 2,
  SELFLAG_EXTENDSELECTION = 4,
  SELFLAG_ADDSELECTION = 8,
  SELFLAG_REMOVESELECTION = 16
} SELFLAG; 

#define SELFLAG_VALID	0x0000001F

/* DEFINE_GUID(LIBID_Accessibility, 0x1ea4dbf0, 0x3c3b,0x11cf, 0x81, 0x0c, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71); */
/* DEFINE_GUID(IID_IAccessible,     0x618736e0, 0x3c3d,0x11cf, 0x81, 0x0c, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71); */
EXTERN_C const IID LIBID_Accessibility;
EXTERN_C const IID IID_IAccessible;

#define INTERFACE IAccessible
DECLARE_INTERFACE_(IAccessible, IDispatch)
{
    STDMETHOD(QueryInterface)(THIS_ REFIID,PVOID*) PURE;
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;
    STDMETHOD_(ULONG,Release)(THIS) PURE;
    STDMETHOD(GetTypeInfoCount)(THIS_ UINT*) PURE;
    STDMETHOD(GetTypeInfo)(THIS_ UINT,LCID,LPTYPEINFO*) PURE;
    STDMETHOD(GetIDsOfNames)(THIS_ REFIID,LPOLESTR*,UINT,LCID,DISPID*) PURE;
    STDMETHOD(Invoke)(THIS_ DISPID,REFIID,LCID,WORD,DISPPARAMS*,VARIANT*,EXCEPINFO*,UINT*) PURE;

    STDMETHOD(get_accParent)(THIS_ IDispatch**) PURE;
    STDMETHOD(get_accChildCount)(THIS_ long*) PURE;
    STDMETHOD(get_accChild)(THIS_ VARIANT, IDispatch **) PURE;
    STDMETHOD(get_accName)(THIS_ VARIANT, BSTR*) PURE;
    STDMETHOD(get_accValue)(THIS_ VARIANT, BSTR*) PURE;
    STDMETHOD(get_accDescription)(THIS_ VARIANT, BSTR*) PURE;
    STDMETHOD(get_accRole)(THIS_ VARIANT, VARIANT*) PURE;
    STDMETHOD(get_accState)(THIS_ VARIANT, VARIANT*) PURE;
    STDMETHOD(get_accHelp)(THIS_ VARIANT, BSTR*) PURE;
    STDMETHOD(get_accHelpTopic)(THIS_ BSTR*, VARIANT, long*) PURE;
    STDMETHOD(get_accKeyboardShortcut)(THIS_ VARIANT, BSTR*) PURE;
    STDMETHOD(get_accFocus)(THIS_ VARIANT*) PURE;
    STDMETHOD(get_accSelection)(THIS_ VARIANT*) PURE;
    STDMETHOD(get_accDefaultAction)(THIS_ VARIANT, BSTR*) PURE;

    STDMETHOD(accSelect)(THIS_ long, VARIANT) PURE;
    STDMETHOD(accLocation)(THIS_ long*, long*, long*, long*, VARIANT) PURE;
    STDMETHOD(accNavigate)(THIS_ long, VARIANT, VARIANT*) PURE;
    STDMETHOD(accHitTest)(THIS_ long, long, VARIANT*) PURE;
    STDMETHOD(accDoDefaultAction)(THIS_ VARIANT) PURE;

    STDMETHOD(put_accName)(THIS_ VARIANT, BSTR) PURE;
    STDMETHOD(put_accValue)(THIS_ VARIANT, BSTR) PURE;
};
#undef INTERFACE
typedef IAccessible* LPACCESSIBLE;

STDAPI AccessibleChildren(IAccessible*,LONG,LONG,VARIANT*,LONG*);
STDAPI AccessibleObjectFromEvent(HWND,DWORD,DWORD,IAccessible**,VARIANT*);
STDAPI AccessibleObjectFromPoint(POINT,IAccessible**,VARIANT*);
STDAPI AccessibleObjectFromWindow(HWND,DWORD,REFIID,void**);
STDAPI CreateStdAccessibleObject(HWND,LONG,REFIID,void**);
STDAPI CreateStdAccessibleProxyA(HWND,LPCSTR,LONG,REFIID,void**);
STDAPI CreateStdAccessibleProxyW(HWND,LPCWSTR,LONG,REFIID,void**);
void WINAPI GetOleaccVersionInfo(DWORD*,DWORD*);
UINT WINAPI GetRoleTextA(DWORD,LPSTR,UINT);
UINT WINAPI GetRoleTextW(DWORD,LPWSTR,UINT);
UINT WINAPI GetStateTextA(DWORD,LPSTR,UINT);
UINT WINAPI GetStateTextW(DWORD,LPWSTR,UINT);
LRESULT WINAPI LresultFromObject(REFIID,WPARAM,LPUNKNOWN);
STDAPI ObjectFromLresult(LRESULT,REFIID,WPARAM,void**);
STDAPI WindowFromAccessibleObject(IAccessible*,HWND*);

#ifdef UNICODE
#define CreateStdAccessibleProxy CreateStdAccessibleProxyW
#define GetRoleText GetRoleTextW
#define GetStateText GetStateTextW
#else
#define CreateStdAccessibleProxy CreateStdAccessibleProxyA
#define GetRoleText GetRoleTextA
#define GetStateText GetStateTextA
#endif

#ifdef __cplusplus
}
#endif
#endif /* _OLEACC_H */
