/*** Autogenerated by WIDL 7.7 from include/uiautomationcore.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __uiautomationcore_h__
#define __uiautomationcore_h__

/* Forward declarations */

#ifndef __IRawElementProviderSimple_FWD_DEFINED__
#define __IRawElementProviderSimple_FWD_DEFINED__
typedef interface IRawElementProviderSimple IRawElementProviderSimple;
#ifdef __cplusplus
interface IRawElementProviderSimple;
#endif /* __cplusplus */
#endif

#ifndef __IAccessibleEx_FWD_DEFINED__
#define __IAccessibleEx_FWD_DEFINED__
typedef interface IAccessibleEx IAccessibleEx;
#ifdef __cplusplus
interface IAccessibleEx;
#endif /* __cplusplus */
#endif

#ifndef __IRawElementProviderFragment_FWD_DEFINED__
#define __IRawElementProviderFragment_FWD_DEFINED__
typedef interface IRawElementProviderFragment IRawElementProviderFragment;
#ifdef __cplusplus
interface IRawElementProviderFragment;
#endif /* __cplusplus */
#endif

#ifndef __IRawElementProviderFragmentRoot_FWD_DEFINED__
#define __IRawElementProviderFragmentRoot_FWD_DEFINED__
typedef interface IRawElementProviderFragmentRoot IRawElementProviderFragmentRoot;
#ifdef __cplusplus
interface IRawElementProviderFragmentRoot;
#endif /* __cplusplus */
#endif

#ifndef __ILegacyIAccessibleProvider_FWD_DEFINED__
#define __ILegacyIAccessibleProvider_FWD_DEFINED__
typedef interface ILegacyIAccessibleProvider ILegacyIAccessibleProvider;
#ifdef __cplusplus
interface ILegacyIAccessibleProvider;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <oaidl.h>
#include <oleacc.h>

#ifdef __cplusplus
extern "C" {
#endif

enum NavigateDirection {
    NavigateDirection_Parent = 0x0,
    NavigateDirection_NextSibling = 0x1,
    NavigateDirection_PreviousSibling = 0x2,
    NavigateDirection_FirstChild = 0x3,
    NavigateDirection_LastChild = 0x4
};
enum ProviderOptions {
    ProviderOptions_ClientSideProvider = 0x1,
    ProviderOptions_ServerSideProvider = 0x2,
    ProviderOptions_NonClientAreaProvider = 0x4,
    ProviderOptions_OverrideProvider = 0x8,
    ProviderOptions_ProviderOwnsSetFocus = 0x10,
    ProviderOptions_UseComThreading = 0x20,
    ProviderOptions_RefuseNonClientSupport = 0x40,
    ProviderOptions_HasNativeIAccessible = 0x80,
    ProviderOptions_UseClientCoordinates = 0x100
};
typedef int PROPERTYID;
typedef int PATTERNID;
typedef int EVENTID;
typedef int TEXTATTRIBUTEID;
typedef int CONTROLTYPEID;
struct UiaRect {
    double left;
    double top;
    double width;
    double height;
};
#ifndef __UIA_LIBRARY_DEFINED__
#define __UIA_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_UIA, 0x930299ce, 0x9965, 0x4dec, 0xb0,0xf4, 0xa5,0x48,0x48,0xd4,0xb6,0x67);

/*****************************************************************************
 * IRawElementProviderSimple interface
 */
#ifndef __IRawElementProviderSimple_INTERFACE_DEFINED__
#define __IRawElementProviderSimple_INTERFACE_DEFINED__

DEFINE_GUID(IID_IRawElementProviderSimple, 0xd6dd68d1, 0x86fd, 0x4332, 0x86,0x66, 0x9a,0xbe,0xde,0xa2,0xd2,0x4c);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d6dd68d1-86fd-4332-8666-9abedea2d24c")
IRawElementProviderSimple : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE get_ProviderOptions(
        enum ProviderOptions *pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPatternProvider(
        PATTERNID patternId,
        IUnknown **pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetPropertyValue(
        PROPERTYID propertyId,
        VARIANT *pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_HostRawElementProvider(
        IRawElementProviderSimple **pRetVal) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRawElementProviderSimple, 0xd6dd68d1, 0x86fd, 0x4332, 0x86,0x66, 0x9a,0xbe,0xde,0xa2,0xd2,0x4c)
#endif
#else
typedef struct IRawElementProviderSimpleVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRawElementProviderSimple *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRawElementProviderSimple *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRawElementProviderSimple *This);

    /*** IRawElementProviderSimple methods ***/
    HRESULT (STDMETHODCALLTYPE *get_ProviderOptions)(
        IRawElementProviderSimple *This,
        enum ProviderOptions *pRetVal);

    HRESULT (STDMETHODCALLTYPE *GetPatternProvider)(
        IRawElementProviderSimple *This,
        PATTERNID patternId,
        IUnknown **pRetVal);

    HRESULT (STDMETHODCALLTYPE *GetPropertyValue)(
        IRawElementProviderSimple *This,
        PROPERTYID propertyId,
        VARIANT *pRetVal);

    HRESULT (STDMETHODCALLTYPE *get_HostRawElementProvider)(
        IRawElementProviderSimple *This,
        IRawElementProviderSimple **pRetVal);

    END_INTERFACE
} IRawElementProviderSimpleVtbl;

interface IRawElementProviderSimple {
    CONST_VTBL IRawElementProviderSimpleVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRawElementProviderSimple_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRawElementProviderSimple_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRawElementProviderSimple_Release(This) (This)->lpVtbl->Release(This)
/*** IRawElementProviderSimple methods ***/
#define IRawElementProviderSimple_get_ProviderOptions(This,pRetVal) (This)->lpVtbl->get_ProviderOptions(This,pRetVal)
#define IRawElementProviderSimple_GetPatternProvider(This,patternId,pRetVal) (This)->lpVtbl->GetPatternProvider(This,patternId,pRetVal)
#define IRawElementProviderSimple_GetPropertyValue(This,propertyId,pRetVal) (This)->lpVtbl->GetPropertyValue(This,propertyId,pRetVal)
#define IRawElementProviderSimple_get_HostRawElementProvider(This,pRetVal) (This)->lpVtbl->get_HostRawElementProvider(This,pRetVal)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IRawElementProviderSimple_QueryInterface(IRawElementProviderSimple* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IRawElementProviderSimple_AddRef(IRawElementProviderSimple* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IRawElementProviderSimple_Release(IRawElementProviderSimple* This) {
    return This->lpVtbl->Release(This);
}
/*** IRawElementProviderSimple methods ***/
static FORCEINLINE HRESULT IRawElementProviderSimple_get_ProviderOptions(IRawElementProviderSimple* This,enum ProviderOptions *pRetVal) {
    return This->lpVtbl->get_ProviderOptions(This,pRetVal);
}
static FORCEINLINE HRESULT IRawElementProviderSimple_GetPatternProvider(IRawElementProviderSimple* This,PATTERNID patternId,IUnknown **pRetVal) {
    return This->lpVtbl->GetPatternProvider(This,patternId,pRetVal);
}
static FORCEINLINE HRESULT IRawElementProviderSimple_GetPropertyValue(IRawElementProviderSimple* This,PROPERTYID propertyId,VARIANT *pRetVal) {
    return This->lpVtbl->GetPropertyValue(This,propertyId,pRetVal);
}
static FORCEINLINE HRESULT IRawElementProviderSimple_get_HostRawElementProvider(IRawElementProviderSimple* This,IRawElementProviderSimple **pRetVal) {
    return This->lpVtbl->get_HostRawElementProvider(This,pRetVal);
}
#endif
#endif

#endif


#endif  /* __IRawElementProviderSimple_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IAccessibleEx interface
 */
#ifndef __IAccessibleEx_INTERFACE_DEFINED__
#define __IAccessibleEx_INTERFACE_DEFINED__

DEFINE_GUID(IID_IAccessibleEx, 0xf8b80ada, 0x2c44, 0x48d0, 0x89,0xbe, 0x5f,0xf2,0x3c,0x9c,0xd8,0x75);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f8b80ada-2c44-48d0-89be-5ff23c9cd875")
IAccessibleEx : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetObjectForChild(
        LONG idChild,
        IAccessibleEx **pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetIAccessiblePair(
        IAccessible **ppAcc,
        LONG *pidChild) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRuntimeId(
        SAFEARRAY **pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE ConvertReturnedElement(
        IRawElementProviderSimple *pIn,
        IAccessibleEx **ppRetValOut) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IAccessibleEx, 0xf8b80ada, 0x2c44, 0x48d0, 0x89,0xbe, 0x5f,0xf2,0x3c,0x9c,0xd8,0x75)
#endif
#else
typedef struct IAccessibleExVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IAccessibleEx *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IAccessibleEx *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IAccessibleEx *This);

    /*** IAccessibleEx methods ***/
    HRESULT (STDMETHODCALLTYPE *GetObjectForChild)(
        IAccessibleEx *This,
        LONG idChild,
        IAccessibleEx **pRetVal);

    HRESULT (STDMETHODCALLTYPE *GetIAccessiblePair)(
        IAccessibleEx *This,
        IAccessible **ppAcc,
        LONG *pidChild);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeId)(
        IAccessibleEx *This,
        SAFEARRAY **pRetVal);

    HRESULT (STDMETHODCALLTYPE *ConvertReturnedElement)(
        IAccessibleEx *This,
        IRawElementProviderSimple *pIn,
        IAccessibleEx **ppRetValOut);

    END_INTERFACE
} IAccessibleExVtbl;

interface IAccessibleEx {
    CONST_VTBL IAccessibleExVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IAccessibleEx_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IAccessibleEx_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IAccessibleEx_Release(This) (This)->lpVtbl->Release(This)
/*** IAccessibleEx methods ***/
#define IAccessibleEx_GetObjectForChild(This,idChild,pRetVal) (This)->lpVtbl->GetObjectForChild(This,idChild,pRetVal)
#define IAccessibleEx_GetIAccessiblePair(This,ppAcc,pidChild) (This)->lpVtbl->GetIAccessiblePair(This,ppAcc,pidChild)
#define IAccessibleEx_GetRuntimeId(This,pRetVal) (This)->lpVtbl->GetRuntimeId(This,pRetVal)
#define IAccessibleEx_ConvertReturnedElement(This,pIn,ppRetValOut) (This)->lpVtbl->ConvertReturnedElement(This,pIn,ppRetValOut)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IAccessibleEx_QueryInterface(IAccessibleEx* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IAccessibleEx_AddRef(IAccessibleEx* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IAccessibleEx_Release(IAccessibleEx* This) {
    return This->lpVtbl->Release(This);
}
/*** IAccessibleEx methods ***/
static FORCEINLINE HRESULT IAccessibleEx_GetObjectForChild(IAccessibleEx* This,LONG idChild,IAccessibleEx **pRetVal) {
    return This->lpVtbl->GetObjectForChild(This,idChild,pRetVal);
}
static FORCEINLINE HRESULT IAccessibleEx_GetIAccessiblePair(IAccessibleEx* This,IAccessible **ppAcc,LONG *pidChild) {
    return This->lpVtbl->GetIAccessiblePair(This,ppAcc,pidChild);
}
static FORCEINLINE HRESULT IAccessibleEx_GetRuntimeId(IAccessibleEx* This,SAFEARRAY **pRetVal) {
    return This->lpVtbl->GetRuntimeId(This,pRetVal);
}
static FORCEINLINE HRESULT IAccessibleEx_ConvertReturnedElement(IAccessibleEx* This,IRawElementProviderSimple *pIn,IAccessibleEx **ppRetValOut) {
    return This->lpVtbl->ConvertReturnedElement(This,pIn,ppRetValOut);
}
#endif
#endif

#endif


#endif  /* __IAccessibleEx_INTERFACE_DEFINED__ */

#ifndef __IRawElementProviderFragmentRoot_FWD_DEFINED__
#define __IRawElementProviderFragmentRoot_FWD_DEFINED__
typedef interface IRawElementProviderFragmentRoot IRawElementProviderFragmentRoot;
#ifdef __cplusplus
interface IRawElementProviderFragmentRoot;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IRawElementProviderFragment interface
 */
#ifndef __IRawElementProviderFragment_INTERFACE_DEFINED__
#define __IRawElementProviderFragment_INTERFACE_DEFINED__

DEFINE_GUID(IID_IRawElementProviderFragment, 0xf7063da8, 0x8359, 0x439c, 0x92,0x97, 0xbb,0xc5,0x29,0x9a,0x7d,0x87);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f7063da8-8359-439c-9297-bbc5299a7d87")
IRawElementProviderFragment : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Navigate(
        enum NavigateDirection direction,
        IRawElementProviderFragment **pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetRuntimeId(
        SAFEARRAY **pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_BoundingRectangle(
        struct UiaRect *pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetEmbeddedFragmentRoots(
        SAFEARRAY **pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetFocus(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_FragmentRoot(
        IRawElementProviderFragmentRoot **pRetVal) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRawElementProviderFragment, 0xf7063da8, 0x8359, 0x439c, 0x92,0x97, 0xbb,0xc5,0x29,0x9a,0x7d,0x87)
#endif
#else
typedef struct IRawElementProviderFragmentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRawElementProviderFragment *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRawElementProviderFragment *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRawElementProviderFragment *This);

    /*** IRawElementProviderFragment methods ***/
    HRESULT (STDMETHODCALLTYPE *Navigate)(
        IRawElementProviderFragment *This,
        enum NavigateDirection direction,
        IRawElementProviderFragment **pRetVal);

    HRESULT (STDMETHODCALLTYPE *GetRuntimeId)(
        IRawElementProviderFragment *This,
        SAFEARRAY **pRetVal);

    HRESULT (STDMETHODCALLTYPE *get_BoundingRectangle)(
        IRawElementProviderFragment *This,
        struct UiaRect *pRetVal);

    HRESULT (STDMETHODCALLTYPE *GetEmbeddedFragmentRoots)(
        IRawElementProviderFragment *This,
        SAFEARRAY **pRetVal);

    HRESULT (STDMETHODCALLTYPE *SetFocus)(
        IRawElementProviderFragment *This);

    HRESULT (STDMETHODCALLTYPE *get_FragmentRoot)(
        IRawElementProviderFragment *This,
        IRawElementProviderFragmentRoot **pRetVal);

    END_INTERFACE
} IRawElementProviderFragmentVtbl;

interface IRawElementProviderFragment {
    CONST_VTBL IRawElementProviderFragmentVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRawElementProviderFragment_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRawElementProviderFragment_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRawElementProviderFragment_Release(This) (This)->lpVtbl->Release(This)
/*** IRawElementProviderFragment methods ***/
#define IRawElementProviderFragment_Navigate(This,direction,pRetVal) (This)->lpVtbl->Navigate(This,direction,pRetVal)
#define IRawElementProviderFragment_GetRuntimeId(This,pRetVal) (This)->lpVtbl->GetRuntimeId(This,pRetVal)
#define IRawElementProviderFragment_get_BoundingRectangle(This,pRetVal) (This)->lpVtbl->get_BoundingRectangle(This,pRetVal)
#define IRawElementProviderFragment_GetEmbeddedFragmentRoots(This,pRetVal) (This)->lpVtbl->GetEmbeddedFragmentRoots(This,pRetVal)
#define IRawElementProviderFragment_SetFocus(This) (This)->lpVtbl->SetFocus(This)
#define IRawElementProviderFragment_get_FragmentRoot(This,pRetVal) (This)->lpVtbl->get_FragmentRoot(This,pRetVal)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IRawElementProviderFragment_QueryInterface(IRawElementProviderFragment* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IRawElementProviderFragment_AddRef(IRawElementProviderFragment* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IRawElementProviderFragment_Release(IRawElementProviderFragment* This) {
    return This->lpVtbl->Release(This);
}
/*** IRawElementProviderFragment methods ***/
static FORCEINLINE HRESULT IRawElementProviderFragment_Navigate(IRawElementProviderFragment* This,enum NavigateDirection direction,IRawElementProviderFragment **pRetVal) {
    return This->lpVtbl->Navigate(This,direction,pRetVal);
}
static FORCEINLINE HRESULT IRawElementProviderFragment_GetRuntimeId(IRawElementProviderFragment* This,SAFEARRAY **pRetVal) {
    return This->lpVtbl->GetRuntimeId(This,pRetVal);
}
static FORCEINLINE HRESULT IRawElementProviderFragment_get_BoundingRectangle(IRawElementProviderFragment* This,struct UiaRect *pRetVal) {
    return This->lpVtbl->get_BoundingRectangle(This,pRetVal);
}
static FORCEINLINE HRESULT IRawElementProviderFragment_GetEmbeddedFragmentRoots(IRawElementProviderFragment* This,SAFEARRAY **pRetVal) {
    return This->lpVtbl->GetEmbeddedFragmentRoots(This,pRetVal);
}
static FORCEINLINE HRESULT IRawElementProviderFragment_SetFocus(IRawElementProviderFragment* This) {
    return This->lpVtbl->SetFocus(This);
}
static FORCEINLINE HRESULT IRawElementProviderFragment_get_FragmentRoot(IRawElementProviderFragment* This,IRawElementProviderFragmentRoot **pRetVal) {
    return This->lpVtbl->get_FragmentRoot(This,pRetVal);
}
#endif
#endif

#endif


#endif  /* __IRawElementProviderFragment_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IRawElementProviderFragmentRoot interface
 */
#ifndef __IRawElementProviderFragmentRoot_INTERFACE_DEFINED__
#define __IRawElementProviderFragmentRoot_INTERFACE_DEFINED__

DEFINE_GUID(IID_IRawElementProviderFragmentRoot, 0x620ce2a5, 0xab8f, 0x40a9, 0x86,0xcb, 0xde,0x3c,0x75,0x59,0x9b,0x58);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("620ce2a5-ab8f-40a9-86cb-de3c75599b58")
IRawElementProviderFragmentRoot : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE ElementProviderFromPoint(
        double x,
        double y,
        IRawElementProviderFragment **pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFocus(
        IRawElementProviderFragment **pRetVal) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IRawElementProviderFragmentRoot, 0x620ce2a5, 0xab8f, 0x40a9, 0x86,0xcb, 0xde,0x3c,0x75,0x59,0x9b,0x58)
#endif
#else
typedef struct IRawElementProviderFragmentRootVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IRawElementProviderFragmentRoot *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IRawElementProviderFragmentRoot *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IRawElementProviderFragmentRoot *This);

    /*** IRawElementProviderFragmentRoot methods ***/
    HRESULT (STDMETHODCALLTYPE *ElementProviderFromPoint)(
        IRawElementProviderFragmentRoot *This,
        double x,
        double y,
        IRawElementProviderFragment **pRetVal);

    HRESULT (STDMETHODCALLTYPE *GetFocus)(
        IRawElementProviderFragmentRoot *This,
        IRawElementProviderFragment **pRetVal);

    END_INTERFACE
} IRawElementProviderFragmentRootVtbl;

interface IRawElementProviderFragmentRoot {
    CONST_VTBL IRawElementProviderFragmentRootVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IRawElementProviderFragmentRoot_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IRawElementProviderFragmentRoot_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IRawElementProviderFragmentRoot_Release(This) (This)->lpVtbl->Release(This)
/*** IRawElementProviderFragmentRoot methods ***/
#define IRawElementProviderFragmentRoot_ElementProviderFromPoint(This,x,y,pRetVal) (This)->lpVtbl->ElementProviderFromPoint(This,x,y,pRetVal)
#define IRawElementProviderFragmentRoot_GetFocus(This,pRetVal) (This)->lpVtbl->GetFocus(This,pRetVal)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT IRawElementProviderFragmentRoot_QueryInterface(IRawElementProviderFragmentRoot* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG IRawElementProviderFragmentRoot_AddRef(IRawElementProviderFragmentRoot* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG IRawElementProviderFragmentRoot_Release(IRawElementProviderFragmentRoot* This) {
    return This->lpVtbl->Release(This);
}
/*** IRawElementProviderFragmentRoot methods ***/
static FORCEINLINE HRESULT IRawElementProviderFragmentRoot_ElementProviderFromPoint(IRawElementProviderFragmentRoot* This,double x,double y,IRawElementProviderFragment **pRetVal) {
    return This->lpVtbl->ElementProviderFromPoint(This,x,y,pRetVal);
}
static FORCEINLINE HRESULT IRawElementProviderFragmentRoot_GetFocus(IRawElementProviderFragmentRoot* This,IRawElementProviderFragment **pRetVal) {
    return This->lpVtbl->GetFocus(This,pRetVal);
}
#endif
#endif

#endif


#endif  /* __IRawElementProviderFragmentRoot_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ILegacyIAccessibleProvider interface
 */
#ifndef __ILegacyIAccessibleProvider_INTERFACE_DEFINED__
#define __ILegacyIAccessibleProvider_INTERFACE_DEFINED__

DEFINE_GUID(IID_ILegacyIAccessibleProvider, 0xe44c3566, 0x915d, 0x4070, 0x99,0xc6, 0x04,0x7b,0xff,0x5a,0x08,0xf5);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("e44c3566-915d-4070-99c6-047bff5a08f5")
ILegacyIAccessibleProvider : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Select(
        LONG flagsSelect) = 0;

    virtual HRESULT STDMETHODCALLTYPE DoDefaultAction(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetValue(
        LPCWSTR szValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetIAccessible(
        IAccessible **ppAccessible) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_ChildId(
        int *pRetVal) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Name(
        BSTR *pszName) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Value(
        BSTR *pszValue) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Description(
        BSTR *pszDescription) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Role(
        DWORD *pdwRole) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_State(
        DWORD *pdwState) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_Help(
        BSTR *pszHelp) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_KeyboardShortcut(
        BSTR *pszKeyboardShortcut) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSelection(
        SAFEARRAY **pvarSelectedChildren) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_DefaultAction(
        BSTR *pszDefaultAction) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(ILegacyIAccessibleProvider, 0xe44c3566, 0x915d, 0x4070, 0x99,0xc6, 0x04,0x7b,0xff,0x5a,0x08,0xf5)
#endif
#else
typedef struct ILegacyIAccessibleProviderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ILegacyIAccessibleProvider *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ILegacyIAccessibleProvider *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ILegacyIAccessibleProvider *This);

    /*** ILegacyIAccessibleProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *Select)(
        ILegacyIAccessibleProvider *This,
        LONG flagsSelect);

    HRESULT (STDMETHODCALLTYPE *DoDefaultAction)(
        ILegacyIAccessibleProvider *This);

    HRESULT (STDMETHODCALLTYPE *SetValue)(
        ILegacyIAccessibleProvider *This,
        LPCWSTR szValue);

    HRESULT (STDMETHODCALLTYPE *GetIAccessible)(
        ILegacyIAccessibleProvider *This,
        IAccessible **ppAccessible);

    HRESULT (STDMETHODCALLTYPE *get_ChildId)(
        ILegacyIAccessibleProvider *This,
        int *pRetVal);

    HRESULT (STDMETHODCALLTYPE *get_Name)(
        ILegacyIAccessibleProvider *This,
        BSTR *pszName);

    HRESULT (STDMETHODCALLTYPE *get_Value)(
        ILegacyIAccessibleProvider *This,
        BSTR *pszValue);

    HRESULT (STDMETHODCALLTYPE *get_Description)(
        ILegacyIAccessibleProvider *This,
        BSTR *pszDescription);

    HRESULT (STDMETHODCALLTYPE *get_Role)(
        ILegacyIAccessibleProvider *This,
        DWORD *pdwRole);

    HRESULT (STDMETHODCALLTYPE *get_State)(
        ILegacyIAccessibleProvider *This,
        DWORD *pdwState);

    HRESULT (STDMETHODCALLTYPE *get_Help)(
        ILegacyIAccessibleProvider *This,
        BSTR *pszHelp);

    HRESULT (STDMETHODCALLTYPE *get_KeyboardShortcut)(
        ILegacyIAccessibleProvider *This,
        BSTR *pszKeyboardShortcut);

    HRESULT (STDMETHODCALLTYPE *GetSelection)(
        ILegacyIAccessibleProvider *This,
        SAFEARRAY **pvarSelectedChildren);

    HRESULT (STDMETHODCALLTYPE *get_DefaultAction)(
        ILegacyIAccessibleProvider *This,
        BSTR *pszDefaultAction);

    END_INTERFACE
} ILegacyIAccessibleProviderVtbl;

interface ILegacyIAccessibleProvider {
    CONST_VTBL ILegacyIAccessibleProviderVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define ILegacyIAccessibleProvider_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define ILegacyIAccessibleProvider_AddRef(This) (This)->lpVtbl->AddRef(This)
#define ILegacyIAccessibleProvider_Release(This) (This)->lpVtbl->Release(This)
/*** ILegacyIAccessibleProvider methods ***/
#define ILegacyIAccessibleProvider_Select(This,flagsSelect) (This)->lpVtbl->Select(This,flagsSelect)
#define ILegacyIAccessibleProvider_DoDefaultAction(This) (This)->lpVtbl->DoDefaultAction(This)
#define ILegacyIAccessibleProvider_SetValue(This,szValue) (This)->lpVtbl->SetValue(This,szValue)
#define ILegacyIAccessibleProvider_GetIAccessible(This,ppAccessible) (This)->lpVtbl->GetIAccessible(This,ppAccessible)
#define ILegacyIAccessibleProvider_get_ChildId(This,pRetVal) (This)->lpVtbl->get_ChildId(This,pRetVal)
#define ILegacyIAccessibleProvider_get_Name(This,pszName) (This)->lpVtbl->get_Name(This,pszName)
#define ILegacyIAccessibleProvider_get_Value(This,pszValue) (This)->lpVtbl->get_Value(This,pszValue)
#define ILegacyIAccessibleProvider_get_Description(This,pszDescription) (This)->lpVtbl->get_Description(This,pszDescription)
#define ILegacyIAccessibleProvider_get_Role(This,pdwRole) (This)->lpVtbl->get_Role(This,pdwRole)
#define ILegacyIAccessibleProvider_get_State(This,pdwState) (This)->lpVtbl->get_State(This,pdwState)
#define ILegacyIAccessibleProvider_get_Help(This,pszHelp) (This)->lpVtbl->get_Help(This,pszHelp)
#define ILegacyIAccessibleProvider_get_KeyboardShortcut(This,pszKeyboardShortcut) (This)->lpVtbl->get_KeyboardShortcut(This,pszKeyboardShortcut)
#define ILegacyIAccessibleProvider_GetSelection(This,pvarSelectedChildren) (This)->lpVtbl->GetSelection(This,pvarSelectedChildren)
#define ILegacyIAccessibleProvider_get_DefaultAction(This,pszDefaultAction) (This)->lpVtbl->get_DefaultAction(This,pszDefaultAction)
#else
/*** IUnknown methods ***/
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_QueryInterface(ILegacyIAccessibleProvider* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static FORCEINLINE ULONG ILegacyIAccessibleProvider_AddRef(ILegacyIAccessibleProvider* This) {
    return This->lpVtbl->AddRef(This);
}
static FORCEINLINE ULONG ILegacyIAccessibleProvider_Release(ILegacyIAccessibleProvider* This) {
    return This->lpVtbl->Release(This);
}
/*** ILegacyIAccessibleProvider methods ***/
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_Select(ILegacyIAccessibleProvider* This,LONG flagsSelect) {
    return This->lpVtbl->Select(This,flagsSelect);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_DoDefaultAction(ILegacyIAccessibleProvider* This) {
    return This->lpVtbl->DoDefaultAction(This);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_SetValue(ILegacyIAccessibleProvider* This,LPCWSTR szValue) {
    return This->lpVtbl->SetValue(This,szValue);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_GetIAccessible(ILegacyIAccessibleProvider* This,IAccessible **ppAccessible) {
    return This->lpVtbl->GetIAccessible(This,ppAccessible);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_get_ChildId(ILegacyIAccessibleProvider* This,int *pRetVal) {
    return This->lpVtbl->get_ChildId(This,pRetVal);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_get_Name(ILegacyIAccessibleProvider* This,BSTR *pszName) {
    return This->lpVtbl->get_Name(This,pszName);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_get_Value(ILegacyIAccessibleProvider* This,BSTR *pszValue) {
    return This->lpVtbl->get_Value(This,pszValue);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_get_Description(ILegacyIAccessibleProvider* This,BSTR *pszDescription) {
    return This->lpVtbl->get_Description(This,pszDescription);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_get_Role(ILegacyIAccessibleProvider* This,DWORD *pdwRole) {
    return This->lpVtbl->get_Role(This,pdwRole);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_get_State(ILegacyIAccessibleProvider* This,DWORD *pdwState) {
    return This->lpVtbl->get_State(This,pdwState);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_get_Help(ILegacyIAccessibleProvider* This,BSTR *pszHelp) {
    return This->lpVtbl->get_Help(This,pszHelp);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_get_KeyboardShortcut(ILegacyIAccessibleProvider* This,BSTR *pszKeyboardShortcut) {
    return This->lpVtbl->get_KeyboardShortcut(This,pszKeyboardShortcut);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_GetSelection(ILegacyIAccessibleProvider* This,SAFEARRAY **pvarSelectedChildren) {
    return This->lpVtbl->GetSelection(This,pvarSelectedChildren);
}
static FORCEINLINE HRESULT ILegacyIAccessibleProvider_get_DefaultAction(ILegacyIAccessibleProvider* This,BSTR *pszDefaultAction) {
    return This->lpVtbl->get_DefaultAction(This,pszDefaultAction);
}
#endif
#endif

#endif


#endif  /* __ILegacyIAccessibleProvider_INTERFACE_DEFINED__ */

#endif /* __UIA_LIBRARY_DEFINED__ */
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER VARIANT_UserSize     (ULONG *, ULONG, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserMarshal  (ULONG *, unsigned char *, VARIANT *);
unsigned char * __RPC_USER VARIANT_UserUnmarshal(ULONG *, unsigned char *, VARIANT *);
void            __RPC_USER VARIANT_UserFree     (ULONG *, VARIANT *);
ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __uiautomationcore_h__ */
