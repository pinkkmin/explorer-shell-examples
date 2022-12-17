

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for overlayicons.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __overlayicons_i_h__
#define __overlayicons_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDemoShellOverlayIcon_FWD_DEFINED__
#define __IDemoShellOverlayIcon_FWD_DEFINED__
typedef interface IDemoShellOverlayIcon IDemoShellOverlayIcon;

#endif 	/* __IDemoShellOverlayIcon_FWD_DEFINED__ */


#ifndef __DemoShellOverlayIcon_FWD_DEFINED__
#define __DemoShellOverlayIcon_FWD_DEFINED__

#ifdef __cplusplus
typedef class DemoShellOverlayIcon DemoShellOverlayIcon;
#else
typedef struct DemoShellOverlayIcon DemoShellOverlayIcon;
#endif /* __cplusplus */

#endif 	/* __DemoShellOverlayIcon_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IDemoShellOverlayIcon_INTERFACE_DEFINED__
#define __IDemoShellOverlayIcon_INTERFACE_DEFINED__

/* interface IDemoShellOverlayIcon */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IDemoShellOverlayIcon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("79f9e828-4ecf-4ec2-a7fe-9a898268a07d")
    IDemoShellOverlayIcon : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDemoShellOverlayIconVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDemoShellOverlayIcon * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDemoShellOverlayIcon * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDemoShellOverlayIcon * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDemoShellOverlayIcon * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDemoShellOverlayIcon * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDemoShellOverlayIcon * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDemoShellOverlayIcon * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IDemoShellOverlayIconVtbl;

    interface IDemoShellOverlayIcon
    {
        CONST_VTBL struct IDemoShellOverlayIconVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDemoShellOverlayIcon_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDemoShellOverlayIcon_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDemoShellOverlayIcon_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDemoShellOverlayIcon_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDemoShellOverlayIcon_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDemoShellOverlayIcon_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDemoShellOverlayIcon_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDemoShellOverlayIcon_INTERFACE_DEFINED__ */



#ifndef __overlayiconsLib_LIBRARY_DEFINED__
#define __overlayiconsLib_LIBRARY_DEFINED__

/* library overlayiconsLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_overlayiconsLib;

EXTERN_C const CLSID CLSID_DemoShellOverlayIcon;

#ifdef __cplusplus

class DECLSPEC_UUID("c170f8ec-f829-42e9-bf85-6d9680d88313")
DemoShellOverlayIcon;
#endif
#endif /* __overlayiconsLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


