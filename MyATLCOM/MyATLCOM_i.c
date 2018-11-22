

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IMyATLSimpleObject,0x014a2af1,0xff03,0x44f7,0xa8,0x1f,0x4a,0x3c,0x84,0xc3,0x85,0x19);


MIDL_DEFINE_GUID(IID, LIBID_MyATLCOMLib,0xe98a0478,0xbdf7,0x45cb,0x9f,0x87,0x0d,0xee,0x48,0x67,0x80,0x9b);


MIDL_DEFINE_GUID(IID, DIID__IMyATLSimpleObjectEvents,0x88e55996,0xca43,0x4cf4,0xa5,0xf9,0x2d,0x59,0x0d,0x73,0x9e,0xf6);


MIDL_DEFINE_GUID(CLSID, CLSID_MyATLSimpleObject,0x03dced77,0x09ed,0x48d1,0x98,0x71,0xc1,0x6c,0x79,0x0d,0xd6,0x49);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



