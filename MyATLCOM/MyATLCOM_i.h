

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for MyATLCOM.idl:
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

#ifndef __MyATLCOM_i_h__
#define __MyATLCOM_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMyATLSimpleObject_FWD_DEFINED__
#define __IMyATLSimpleObject_FWD_DEFINED__
typedef interface IMyATLSimpleObject IMyATLSimpleObject;

#endif 	/* __IMyATLSimpleObject_FWD_DEFINED__ */


#ifndef ___IMyATLSimpleObjectEvents_FWD_DEFINED__
#define ___IMyATLSimpleObjectEvents_FWD_DEFINED__
typedef interface _IMyATLSimpleObjectEvents _IMyATLSimpleObjectEvents;

#endif 	/* ___IMyATLSimpleObjectEvents_FWD_DEFINED__ */


#ifndef __MyATLSimpleObject_FWD_DEFINED__
#define __MyATLSimpleObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class MyATLSimpleObject MyATLSimpleObject;
#else
typedef struct MyATLSimpleObject MyATLSimpleObject;
#endif /* __cplusplus */

#endif 	/* __MyATLSimpleObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IMyATLSimpleObject_INTERFACE_DEFINED__
#define __IMyATLSimpleObject_INTERFACE_DEFINED__

/* interface IMyATLSimpleObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IMyATLSimpleObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("014a2af1-ff03-44f7-a81f-4a3c84c38519")
    IMyATLSimpleObject : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetNumber( 
            /* [in] */ INT nNum) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetNumber( 
            /* [retval][out] */ INT *pnNum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMyATLSimpleObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMyATLSimpleObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMyATLSimpleObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMyATLSimpleObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IMyATLSimpleObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IMyATLSimpleObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IMyATLSimpleObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IMyATLSimpleObject * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetNumber )( 
            IMyATLSimpleObject * This,
            /* [in] */ INT nNum);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetNumber )( 
            IMyATLSimpleObject * This,
            /* [retval][out] */ INT *pnNum);
        
        END_INTERFACE
    } IMyATLSimpleObjectVtbl;

    interface IMyATLSimpleObject
    {
        CONST_VTBL struct IMyATLSimpleObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMyATLSimpleObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMyATLSimpleObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMyATLSimpleObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMyATLSimpleObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IMyATLSimpleObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IMyATLSimpleObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IMyATLSimpleObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IMyATLSimpleObject_SetNumber(This,nNum)	\
    ( (This)->lpVtbl -> SetNumber(This,nNum) ) 

#define IMyATLSimpleObject_GetNumber(This,pnNum)	\
    ( (This)->lpVtbl -> GetNumber(This,pnNum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMyATLSimpleObject_INTERFACE_DEFINED__ */



#ifndef __MyATLCOMLib_LIBRARY_DEFINED__
#define __MyATLCOMLib_LIBRARY_DEFINED__

/* library MyATLCOMLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_MyATLCOMLib;

#ifndef ___IMyATLSimpleObjectEvents_DISPINTERFACE_DEFINED__
#define ___IMyATLSimpleObjectEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IMyATLSimpleObjectEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__IMyATLSimpleObjectEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("88e55996-ca43-4cf4-a5f9-2d590d739ef6")
    _IMyATLSimpleObjectEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IMyATLSimpleObjectEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IMyATLSimpleObjectEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IMyATLSimpleObjectEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IMyATLSimpleObjectEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IMyATLSimpleObjectEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IMyATLSimpleObjectEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IMyATLSimpleObjectEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IMyATLSimpleObjectEvents * This,
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
    } _IMyATLSimpleObjectEventsVtbl;

    interface _IMyATLSimpleObjectEvents
    {
        CONST_VTBL struct _IMyATLSimpleObjectEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IMyATLSimpleObjectEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IMyATLSimpleObjectEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IMyATLSimpleObjectEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IMyATLSimpleObjectEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IMyATLSimpleObjectEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IMyATLSimpleObjectEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IMyATLSimpleObjectEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IMyATLSimpleObjectEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_MyATLSimpleObject;

#ifdef __cplusplus

class DECLSPEC_UUID("03dced77-09ed-48d1-9871-c16c790dd649")
MyATLSimpleObject;
#endif
#endif /* __MyATLCOMLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


