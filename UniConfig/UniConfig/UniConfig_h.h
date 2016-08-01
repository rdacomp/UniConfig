

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Mon Aug 01 23:39:06 2016
 */
/* Compiler settings for UniConfig.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __UniConfig_h_h__
#define __UniConfig_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IUniConfig_FWD_DEFINED__
#define __IUniConfig_FWD_DEFINED__
typedef interface IUniConfig IUniConfig;

#endif 	/* __IUniConfig_FWD_DEFINED__ */


#ifndef __CUniConfigDoc_FWD_DEFINED__
#define __CUniConfigDoc_FWD_DEFINED__

#ifdef __cplusplus
typedef class CUniConfigDoc CUniConfigDoc;
#else
typedef struct CUniConfigDoc CUniConfigDoc;
#endif /* __cplusplus */

#endif 	/* __CUniConfigDoc_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __UniConfig_LIBRARY_DEFINED__
#define __UniConfig_LIBRARY_DEFINED__

/* library UniConfig */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_UniConfig;

#ifndef __IUniConfig_DISPINTERFACE_DEFINED__
#define __IUniConfig_DISPINTERFACE_DEFINED__

/* dispinterface IUniConfig */
/* [uuid] */ 


EXTERN_C const IID DIID_IUniConfig;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A1EAACFD-DD02-4C1D-A3CE-6DD39FD01561")
    IUniConfig : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IUniConfigVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUniConfig * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUniConfig * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUniConfig * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUniConfig * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUniConfig * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUniConfig * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUniConfig * This,
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
    } IUniConfigVtbl;

    interface IUniConfig
    {
        CONST_VTBL struct IUniConfigVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUniConfig_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUniConfig_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUniConfig_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUniConfig_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUniConfig_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUniConfig_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUniConfig_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IUniConfig_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_CUniConfigDoc;

#ifdef __cplusplus

class DECLSPEC_UUID("A0AC2801-A3FA-4D31-8153-3A8A9274FD15")
CUniConfigDoc;
#endif
#endif /* __UniConfig_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


