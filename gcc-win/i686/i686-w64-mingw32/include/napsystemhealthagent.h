/*** Autogenerated by WIDL 8.5 from include/napsystemhealthagent.idl - Do not edit ***/

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

#ifndef __napsystemhealthagent_h__
#define __napsystemhealthagent_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __INapSystemHealthAgentBinding_FWD_DEFINED__
#define __INapSystemHealthAgentBinding_FWD_DEFINED__
typedef interface INapSystemHealthAgentBinding INapSystemHealthAgentBinding;
#ifdef __cplusplus
interface INapSystemHealthAgentBinding;
#endif /* __cplusplus */
#endif

#ifndef __INapSystemHealthAgentBinding2_FWD_DEFINED__
#define __INapSystemHealthAgentBinding2_FWD_DEFINED__
typedef interface INapSystemHealthAgentBinding2 INapSystemHealthAgentBinding2;
#ifdef __cplusplus
interface INapSystemHealthAgentBinding2;
#endif /* __cplusplus */
#endif

#ifndef __INapSystemHealthAgentCallback_FWD_DEFINED__
#define __INapSystemHealthAgentCallback_FWD_DEFINED__
typedef interface INapSystemHealthAgentCallback INapSystemHealthAgentCallback;
#ifdef __cplusplus
interface INapSystemHealthAgentCallback;
#endif /* __cplusplus */
#endif

#ifndef __AsyncINapSystemHealthAgentCallback_FWD_DEFINED__
#define __AsyncINapSystemHealthAgentCallback_FWD_DEFINED__
typedef interface AsyncINapSystemHealthAgentCallback AsyncINapSystemHealthAgentCallback;
#ifdef __cplusplus
interface AsyncINapSystemHealthAgentCallback;
#endif /* __cplusplus */
#endif

#ifndef __INapSystemHealthAgentRequest_FWD_DEFINED__
#define __INapSystemHealthAgentRequest_FWD_DEFINED__
typedef interface INapSystemHealthAgentRequest INapSystemHealthAgentRequest;
#ifdef __cplusplus
interface INapSystemHealthAgentRequest;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <naptypes.h>
#include <unknwn.h>

#ifdef __cplusplus
extern "C" {
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#ifndef __INapSystemHealthAgentBinding_FWD_DEFINED__
#define __INapSystemHealthAgentBinding_FWD_DEFINED__
typedef interface INapSystemHealthAgentBinding INapSystemHealthAgentBinding;
#ifdef __cplusplus
interface INapSystemHealthAgentBinding;
#endif /* __cplusplus */
#endif

#ifndef __INapSystemHealthAgentCallback_FWD_DEFINED__
#define __INapSystemHealthAgentCallback_FWD_DEFINED__
typedef interface INapSystemHealthAgentCallback INapSystemHealthAgentCallback;
#ifdef __cplusplus
interface INapSystemHealthAgentCallback;
#endif /* __cplusplus */
#endif

#ifndef __INapSystemHealthAgentRequest_FWD_DEFINED__
#define __INapSystemHealthAgentRequest_FWD_DEFINED__
typedef interface INapSystemHealthAgentRequest INapSystemHealthAgentRequest;
#ifdef __cplusplus
interface INapSystemHealthAgentRequest;
#endif /* __cplusplus */
#endif

EXTERN_C const CLSID CLSID_NapSystemHealthAgentBinding;
/*****************************************************************************
 * INapSystemHealthAgentBinding interface
 */
#ifndef __INapSystemHealthAgentBinding_INTERFACE_DEFINED__
#define __INapSystemHealthAgentBinding_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapSystemHealthAgentBinding, 0xa6894f43, 0x9cc7, 0x44c9, 0xa2,0x3f, 0x19,0xdb,0xf3,0x6b,0xad,0x28);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("a6894f43-9cc7-44c9-a23f-19dbf36bad28")
INapSystemHealthAgentBinding : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Initialize(
        SystemHealthEntityId id,
        INapSystemHealthAgentCallback *callback) = 0;

    virtual HRESULT STDMETHODCALLTYPE Uninitialize(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE NotifySoHChange(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSystemIsolationInfo(
        IsolationInfo **isolationInfo,
        WINBOOL *unknownConnections) = 0;

    virtual HRESULT STDMETHODCALLTYPE FlushCache(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapSystemHealthAgentBinding, 0xa6894f43, 0x9cc7, 0x44c9, 0xa2,0x3f, 0x19,0xdb,0xf3,0x6b,0xad,0x28)
#endif
#else
typedef struct INapSystemHealthAgentBindingVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapSystemHealthAgentBinding *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapSystemHealthAgentBinding *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapSystemHealthAgentBinding *This);

    /*** INapSystemHealthAgentBinding methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        INapSystemHealthAgentBinding *This,
        SystemHealthEntityId id,
        INapSystemHealthAgentCallback *callback);

    HRESULT (STDMETHODCALLTYPE *Uninitialize)(
        INapSystemHealthAgentBinding *This);

    HRESULT (STDMETHODCALLTYPE *NotifySoHChange)(
        INapSystemHealthAgentBinding *This);

    HRESULT (STDMETHODCALLTYPE *GetSystemIsolationInfo)(
        INapSystemHealthAgentBinding *This,
        IsolationInfo **isolationInfo,
        WINBOOL *unknownConnections);

    HRESULT (STDMETHODCALLTYPE *FlushCache)(
        INapSystemHealthAgentBinding *This);

    END_INTERFACE
} INapSystemHealthAgentBindingVtbl;

interface INapSystemHealthAgentBinding {
    CONST_VTBL INapSystemHealthAgentBindingVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapSystemHealthAgentBinding_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapSystemHealthAgentBinding_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapSystemHealthAgentBinding_Release(This) (This)->lpVtbl->Release(This)
/*** INapSystemHealthAgentBinding methods ***/
#define INapSystemHealthAgentBinding_Initialize(This,id,callback) (This)->lpVtbl->Initialize(This,id,callback)
#define INapSystemHealthAgentBinding_Uninitialize(This) (This)->lpVtbl->Uninitialize(This)
#define INapSystemHealthAgentBinding_NotifySoHChange(This) (This)->lpVtbl->NotifySoHChange(This)
#define INapSystemHealthAgentBinding_GetSystemIsolationInfo(This,isolationInfo,unknownConnections) (This)->lpVtbl->GetSystemIsolationInfo(This,isolationInfo,unknownConnections)
#define INapSystemHealthAgentBinding_FlushCache(This) (This)->lpVtbl->FlushCache(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding_QueryInterface(INapSystemHealthAgentBinding* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapSystemHealthAgentBinding_AddRef(INapSystemHealthAgentBinding* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapSystemHealthAgentBinding_Release(INapSystemHealthAgentBinding* This) {
    return This->lpVtbl->Release(This);
}
/*** INapSystemHealthAgentBinding methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding_Initialize(INapSystemHealthAgentBinding* This,SystemHealthEntityId id,INapSystemHealthAgentCallback *callback) {
    return This->lpVtbl->Initialize(This,id,callback);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding_Uninitialize(INapSystemHealthAgentBinding* This) {
    return This->lpVtbl->Uninitialize(This);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding_NotifySoHChange(INapSystemHealthAgentBinding* This) {
    return This->lpVtbl->NotifySoHChange(This);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding_GetSystemIsolationInfo(INapSystemHealthAgentBinding* This,IsolationInfo **isolationInfo,WINBOOL *unknownConnections) {
    return This->lpVtbl->GetSystemIsolationInfo(This,isolationInfo,unknownConnections);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding_FlushCache(INapSystemHealthAgentBinding* This) {
    return This->lpVtbl->FlushCache(This);
}
#endif
#endif

#endif


#endif  /* __INapSystemHealthAgentBinding_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapSystemHealthAgentBinding2 interface
 */
#ifndef __INapSystemHealthAgentBinding2_INTERFACE_DEFINED__
#define __INapSystemHealthAgentBinding2_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapSystemHealthAgentBinding2, 0x1140c38e, 0x5100, 0x4ea1, 0x8d,0x43, 0x87,0xd3,0x26,0x72,0x40,0x28);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("1140c38e-5100-4ea1-8d43-87d326724028")
INapSystemHealthAgentBinding2 : public INapSystemHealthAgentBinding
{
    virtual HRESULT STDMETHODCALLTYPE GetSystemIsolationInfoEx(
        IsolationInfoEx **isolationInfo,
        WINBOOL *unknownConnections) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapSystemHealthAgentBinding2, 0x1140c38e, 0x5100, 0x4ea1, 0x8d,0x43, 0x87,0xd3,0x26,0x72,0x40,0x28)
#endif
#else
typedef struct INapSystemHealthAgentBinding2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapSystemHealthAgentBinding2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapSystemHealthAgentBinding2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapSystemHealthAgentBinding2 *This);

    /*** INapSystemHealthAgentBinding methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        INapSystemHealthAgentBinding2 *This,
        SystemHealthEntityId id,
        INapSystemHealthAgentCallback *callback);

    HRESULT (STDMETHODCALLTYPE *Uninitialize)(
        INapSystemHealthAgentBinding2 *This);

    HRESULT (STDMETHODCALLTYPE *NotifySoHChange)(
        INapSystemHealthAgentBinding2 *This);

    HRESULT (STDMETHODCALLTYPE *GetSystemIsolationInfo)(
        INapSystemHealthAgentBinding2 *This,
        IsolationInfo **isolationInfo,
        WINBOOL *unknownConnections);

    HRESULT (STDMETHODCALLTYPE *FlushCache)(
        INapSystemHealthAgentBinding2 *This);

    /*** INapSystemHealthAgentBinding2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSystemIsolationInfoEx)(
        INapSystemHealthAgentBinding2 *This,
        IsolationInfoEx **isolationInfo,
        WINBOOL *unknownConnections);

    END_INTERFACE
} INapSystemHealthAgentBinding2Vtbl;

interface INapSystemHealthAgentBinding2 {
    CONST_VTBL INapSystemHealthAgentBinding2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapSystemHealthAgentBinding2_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapSystemHealthAgentBinding2_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapSystemHealthAgentBinding2_Release(This) (This)->lpVtbl->Release(This)
/*** INapSystemHealthAgentBinding methods ***/
#define INapSystemHealthAgentBinding2_Initialize(This,id,callback) (This)->lpVtbl->Initialize(This,id,callback)
#define INapSystemHealthAgentBinding2_Uninitialize(This) (This)->lpVtbl->Uninitialize(This)
#define INapSystemHealthAgentBinding2_NotifySoHChange(This) (This)->lpVtbl->NotifySoHChange(This)
#define INapSystemHealthAgentBinding2_GetSystemIsolationInfo(This,isolationInfo,unknownConnections) (This)->lpVtbl->GetSystemIsolationInfo(This,isolationInfo,unknownConnections)
#define INapSystemHealthAgentBinding2_FlushCache(This) (This)->lpVtbl->FlushCache(This)
/*** INapSystemHealthAgentBinding2 methods ***/
#define INapSystemHealthAgentBinding2_GetSystemIsolationInfoEx(This,isolationInfo,unknownConnections) (This)->lpVtbl->GetSystemIsolationInfoEx(This,isolationInfo,unknownConnections)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding2_QueryInterface(INapSystemHealthAgentBinding2* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapSystemHealthAgentBinding2_AddRef(INapSystemHealthAgentBinding2* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapSystemHealthAgentBinding2_Release(INapSystemHealthAgentBinding2* This) {
    return This->lpVtbl->Release(This);
}
/*** INapSystemHealthAgentBinding methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding2_Initialize(INapSystemHealthAgentBinding2* This,SystemHealthEntityId id,INapSystemHealthAgentCallback *callback) {
    return This->lpVtbl->Initialize(This,id,callback);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding2_Uninitialize(INapSystemHealthAgentBinding2* This) {
    return This->lpVtbl->Uninitialize(This);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding2_NotifySoHChange(INapSystemHealthAgentBinding2* This) {
    return This->lpVtbl->NotifySoHChange(This);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding2_GetSystemIsolationInfo(INapSystemHealthAgentBinding2* This,IsolationInfo **isolationInfo,WINBOOL *unknownConnections) {
    return This->lpVtbl->GetSystemIsolationInfo(This,isolationInfo,unknownConnections);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding2_FlushCache(INapSystemHealthAgentBinding2* This) {
    return This->lpVtbl->FlushCache(This);
}
/*** INapSystemHealthAgentBinding2 methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthAgentBinding2_GetSystemIsolationInfoEx(INapSystemHealthAgentBinding2* This,IsolationInfoEx **isolationInfo,WINBOOL *unknownConnections) {
    return This->lpVtbl->GetSystemIsolationInfoEx(This,isolationInfo,unknownConnections);
}
#endif
#endif

#endif


#endif  /* __INapSystemHealthAgentBinding2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapSystemHealthAgentCallback interface
 */
#ifndef __INapSystemHealthAgentCallback_INTERFACE_DEFINED__
#define __INapSystemHealthAgentCallback_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapSystemHealthAgentCallback, 0xf1072a57, 0x214f, 0x4ee2, 0x83,0x77, 0x14,0xef,0x14,0x0c,0xd9,0xf3);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("f1072a57-214f-4ee2-8377-14ef140cd9f3")
INapSystemHealthAgentCallback : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetSoHRequest(
        INapSystemHealthAgentRequest *request) = 0;

    virtual HRESULT STDMETHODCALLTYPE ProcessSoHResponse(
        INapSystemHealthAgentRequest *request) = 0;

    virtual HRESULT STDMETHODCALLTYPE NotifySystemIsolationStateChange(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetFixupInfo(
        FixupInfo **info) = 0;

    virtual HRESULT STDMETHODCALLTYPE CompareSoHRequests(
        const SoHRequest *lhs,
        const SoHRequest *rhs,
        WINBOOL *isEqual) = 0;

    virtual HRESULT STDMETHODCALLTYPE NotifyOrphanedSoHRequest(
        const CorrelationId *correlationId) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapSystemHealthAgentCallback, 0xf1072a57, 0x214f, 0x4ee2, 0x83,0x77, 0x14,0xef,0x14,0x0c,0xd9,0xf3)
#endif
#else
typedef struct INapSystemHealthAgentCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapSystemHealthAgentCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapSystemHealthAgentCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapSystemHealthAgentCallback *This);

    /*** INapSystemHealthAgentCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSoHRequest)(
        INapSystemHealthAgentCallback *This,
        INapSystemHealthAgentRequest *request);

    HRESULT (STDMETHODCALLTYPE *ProcessSoHResponse)(
        INapSystemHealthAgentCallback *This,
        INapSystemHealthAgentRequest *request);

    HRESULT (STDMETHODCALLTYPE *NotifySystemIsolationStateChange)(
        INapSystemHealthAgentCallback *This);

    HRESULT (STDMETHODCALLTYPE *GetFixupInfo)(
        INapSystemHealthAgentCallback *This,
        FixupInfo **info);

    HRESULT (STDMETHODCALLTYPE *CompareSoHRequests)(
        INapSystemHealthAgentCallback *This,
        const SoHRequest *lhs,
        const SoHRequest *rhs,
        WINBOOL *isEqual);

    HRESULT (STDMETHODCALLTYPE *NotifyOrphanedSoHRequest)(
        INapSystemHealthAgentCallback *This,
        const CorrelationId *correlationId);

    END_INTERFACE
} INapSystemHealthAgentCallbackVtbl;

interface INapSystemHealthAgentCallback {
    CONST_VTBL INapSystemHealthAgentCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapSystemHealthAgentCallback_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapSystemHealthAgentCallback_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapSystemHealthAgentCallback_Release(This) (This)->lpVtbl->Release(This)
/*** INapSystemHealthAgentCallback methods ***/
#define INapSystemHealthAgentCallback_GetSoHRequest(This,request) (This)->lpVtbl->GetSoHRequest(This,request)
#define INapSystemHealthAgentCallback_ProcessSoHResponse(This,request) (This)->lpVtbl->ProcessSoHResponse(This,request)
#define INapSystemHealthAgentCallback_NotifySystemIsolationStateChange(This) (This)->lpVtbl->NotifySystemIsolationStateChange(This)
#define INapSystemHealthAgentCallback_GetFixupInfo(This,info) (This)->lpVtbl->GetFixupInfo(This,info)
#define INapSystemHealthAgentCallback_CompareSoHRequests(This,lhs,rhs,isEqual) (This)->lpVtbl->CompareSoHRequests(This,lhs,rhs,isEqual)
#define INapSystemHealthAgentCallback_NotifyOrphanedSoHRequest(This,correlationId) (This)->lpVtbl->NotifyOrphanedSoHRequest(This,correlationId)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthAgentCallback_QueryInterface(INapSystemHealthAgentCallback* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapSystemHealthAgentCallback_AddRef(INapSystemHealthAgentCallback* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapSystemHealthAgentCallback_Release(INapSystemHealthAgentCallback* This) {
    return This->lpVtbl->Release(This);
}
/*** INapSystemHealthAgentCallback methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthAgentCallback_GetSoHRequest(INapSystemHealthAgentCallback* This,INapSystemHealthAgentRequest *request) {
    return This->lpVtbl->GetSoHRequest(This,request);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentCallback_ProcessSoHResponse(INapSystemHealthAgentCallback* This,INapSystemHealthAgentRequest *request) {
    return This->lpVtbl->ProcessSoHResponse(This,request);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentCallback_NotifySystemIsolationStateChange(INapSystemHealthAgentCallback* This) {
    return This->lpVtbl->NotifySystemIsolationStateChange(This);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentCallback_GetFixupInfo(INapSystemHealthAgentCallback* This,FixupInfo **info) {
    return This->lpVtbl->GetFixupInfo(This,info);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentCallback_CompareSoHRequests(INapSystemHealthAgentCallback* This,const SoHRequest *lhs,const SoHRequest *rhs,WINBOOL *isEqual) {
    return This->lpVtbl->CompareSoHRequests(This,lhs,rhs,isEqual);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentCallback_NotifyOrphanedSoHRequest(INapSystemHealthAgentCallback* This,const CorrelationId *correlationId) {
    return This->lpVtbl->NotifyOrphanedSoHRequest(This,correlationId);
}
#endif
#endif

#endif


#endif  /* __INapSystemHealthAgentCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * AsyncINapSystemHealthAgentCallback interface
 */
#ifndef __AsyncINapSystemHealthAgentCallback_INTERFACE_DEFINED__
#define __AsyncINapSystemHealthAgentCallback_INTERFACE_DEFINED__

DEFINE_GUID(IID_AsyncINapSystemHealthAgentCallback, 0x860d8fd9, 0x0219, 0x43ea, 0xae,0x7f, 0x59,0x61,0x1f,0x4c,0xc1,0x6a);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("860d8fd9-0219-43ea-ae7f-59611f4cc16a")
AsyncINapSystemHealthAgentCallback : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Begin_GetSoHRequest(
        INapSystemHealthAgentRequest *request) = 0;

    virtual HRESULT STDMETHODCALLTYPE Finish_GetSoHRequest(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Begin_ProcessSoHResponse(
        INapSystemHealthAgentRequest *request) = 0;

    virtual HRESULT STDMETHODCALLTYPE Finish_ProcessSoHResponse(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Begin_NotifySystemIsolationStateChange(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Finish_NotifySystemIsolationStateChange(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Begin_GetFixupInfo(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Finish_GetFixupInfo(
        FixupInfo **info) = 0;

    virtual HRESULT STDMETHODCALLTYPE Begin_CompareSoHRequests(
        const SoHRequest *lhs,
        const SoHRequest *rhs) = 0;

    virtual HRESULT STDMETHODCALLTYPE Finish_CompareSoHRequests(
        WINBOOL *isEqual) = 0;

    virtual HRESULT STDMETHODCALLTYPE Begin_NotifyOrphanedSoHRequest(
        const CorrelationId *correlationId) = 0;

    virtual HRESULT STDMETHODCALLTYPE Finish_NotifyOrphanedSoHRequest(
        ) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(AsyncINapSystemHealthAgentCallback, 0x860d8fd9, 0x0219, 0x43ea, 0xae,0x7f, 0x59,0x61,0x1f,0x4c,0xc1,0x6a)
#endif
#else
typedef struct AsyncINapSystemHealthAgentCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        AsyncINapSystemHealthAgentCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        AsyncINapSystemHealthAgentCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        AsyncINapSystemHealthAgentCallback *This);

    /*** AsyncINapSystemHealthAgentCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *Begin_GetSoHRequest)(
        AsyncINapSystemHealthAgentCallback *This,
        INapSystemHealthAgentRequest *request);

    HRESULT (STDMETHODCALLTYPE *Finish_GetSoHRequest)(
        AsyncINapSystemHealthAgentCallback *This);

    HRESULT (STDMETHODCALLTYPE *Begin_ProcessSoHResponse)(
        AsyncINapSystemHealthAgentCallback *This,
        INapSystemHealthAgentRequest *request);

    HRESULT (STDMETHODCALLTYPE *Finish_ProcessSoHResponse)(
        AsyncINapSystemHealthAgentCallback *This);

    HRESULT (STDMETHODCALLTYPE *Begin_NotifySystemIsolationStateChange)(
        AsyncINapSystemHealthAgentCallback *This);

    HRESULT (STDMETHODCALLTYPE *Finish_NotifySystemIsolationStateChange)(
        AsyncINapSystemHealthAgentCallback *This);

    HRESULT (STDMETHODCALLTYPE *Begin_GetFixupInfo)(
        AsyncINapSystemHealthAgentCallback *This);

    HRESULT (STDMETHODCALLTYPE *Finish_GetFixupInfo)(
        AsyncINapSystemHealthAgentCallback *This,
        FixupInfo **info);

    HRESULT (STDMETHODCALLTYPE *Begin_CompareSoHRequests)(
        AsyncINapSystemHealthAgentCallback *This,
        const SoHRequest *lhs,
        const SoHRequest *rhs);

    HRESULT (STDMETHODCALLTYPE *Finish_CompareSoHRequests)(
        AsyncINapSystemHealthAgentCallback *This,
        WINBOOL *isEqual);

    HRESULT (STDMETHODCALLTYPE *Begin_NotifyOrphanedSoHRequest)(
        AsyncINapSystemHealthAgentCallback *This,
        const CorrelationId *correlationId);

    HRESULT (STDMETHODCALLTYPE *Finish_NotifyOrphanedSoHRequest)(
        AsyncINapSystemHealthAgentCallback *This);

    END_INTERFACE
} AsyncINapSystemHealthAgentCallbackVtbl;

interface AsyncINapSystemHealthAgentCallback {
    CONST_VTBL AsyncINapSystemHealthAgentCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define AsyncINapSystemHealthAgentCallback_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define AsyncINapSystemHealthAgentCallback_AddRef(This) (This)->lpVtbl->AddRef(This)
#define AsyncINapSystemHealthAgentCallback_Release(This) (This)->lpVtbl->Release(This)
/*** AsyncINapSystemHealthAgentCallback methods ***/
#define AsyncINapSystemHealthAgentCallback_Begin_GetSoHRequest(This,request) (This)->lpVtbl->Begin_GetSoHRequest(This,request)
#define AsyncINapSystemHealthAgentCallback_Finish_GetSoHRequest(This) (This)->lpVtbl->Finish_GetSoHRequest(This)
#define AsyncINapSystemHealthAgentCallback_Begin_ProcessSoHResponse(This,request) (This)->lpVtbl->Begin_ProcessSoHResponse(This,request)
#define AsyncINapSystemHealthAgentCallback_Finish_ProcessSoHResponse(This) (This)->lpVtbl->Finish_ProcessSoHResponse(This)
#define AsyncINapSystemHealthAgentCallback_Begin_NotifySystemIsolationStateChange(This) (This)->lpVtbl->Begin_NotifySystemIsolationStateChange(This)
#define AsyncINapSystemHealthAgentCallback_Finish_NotifySystemIsolationStateChange(This) (This)->lpVtbl->Finish_NotifySystemIsolationStateChange(This)
#define AsyncINapSystemHealthAgentCallback_Begin_GetFixupInfo(This) (This)->lpVtbl->Begin_GetFixupInfo(This)
#define AsyncINapSystemHealthAgentCallback_Finish_GetFixupInfo(This,info) (This)->lpVtbl->Finish_GetFixupInfo(This,info)
#define AsyncINapSystemHealthAgentCallback_Begin_CompareSoHRequests(This,lhs,rhs) (This)->lpVtbl->Begin_CompareSoHRequests(This,lhs,rhs)
#define AsyncINapSystemHealthAgentCallback_Finish_CompareSoHRequests(This,isEqual) (This)->lpVtbl->Finish_CompareSoHRequests(This,isEqual)
#define AsyncINapSystemHealthAgentCallback_Begin_NotifyOrphanedSoHRequest(This,correlationId) (This)->lpVtbl->Begin_NotifyOrphanedSoHRequest(This,correlationId)
#define AsyncINapSystemHealthAgentCallback_Finish_NotifyOrphanedSoHRequest(This) (This)->lpVtbl->Finish_NotifyOrphanedSoHRequest(This)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_QueryInterface(AsyncINapSystemHealthAgentCallback* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG AsyncINapSystemHealthAgentCallback_AddRef(AsyncINapSystemHealthAgentCallback* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG AsyncINapSystemHealthAgentCallback_Release(AsyncINapSystemHealthAgentCallback* This) {
    return This->lpVtbl->Release(This);
}
/*** AsyncINapSystemHealthAgentCallback methods ***/
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Begin_GetSoHRequest(AsyncINapSystemHealthAgentCallback* This,INapSystemHealthAgentRequest *request) {
    return This->lpVtbl->Begin_GetSoHRequest(This,request);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Finish_GetSoHRequest(AsyncINapSystemHealthAgentCallback* This) {
    return This->lpVtbl->Finish_GetSoHRequest(This);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Begin_ProcessSoHResponse(AsyncINapSystemHealthAgentCallback* This,INapSystemHealthAgentRequest *request) {
    return This->lpVtbl->Begin_ProcessSoHResponse(This,request);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Finish_ProcessSoHResponse(AsyncINapSystemHealthAgentCallback* This) {
    return This->lpVtbl->Finish_ProcessSoHResponse(This);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Begin_NotifySystemIsolationStateChange(AsyncINapSystemHealthAgentCallback* This) {
    return This->lpVtbl->Begin_NotifySystemIsolationStateChange(This);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Finish_NotifySystemIsolationStateChange(AsyncINapSystemHealthAgentCallback* This) {
    return This->lpVtbl->Finish_NotifySystemIsolationStateChange(This);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Begin_GetFixupInfo(AsyncINapSystemHealthAgentCallback* This) {
    return This->lpVtbl->Begin_GetFixupInfo(This);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Finish_GetFixupInfo(AsyncINapSystemHealthAgentCallback* This,FixupInfo **info) {
    return This->lpVtbl->Finish_GetFixupInfo(This,info);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Begin_CompareSoHRequests(AsyncINapSystemHealthAgentCallback* This,const SoHRequest *lhs,const SoHRequest *rhs) {
    return This->lpVtbl->Begin_CompareSoHRequests(This,lhs,rhs);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Finish_CompareSoHRequests(AsyncINapSystemHealthAgentCallback* This,WINBOOL *isEqual) {
    return This->lpVtbl->Finish_CompareSoHRequests(This,isEqual);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Begin_NotifyOrphanedSoHRequest(AsyncINapSystemHealthAgentCallback* This,const CorrelationId *correlationId) {
    return This->lpVtbl->Begin_NotifyOrphanedSoHRequest(This,correlationId);
}
static __WIDL_INLINE HRESULT AsyncINapSystemHealthAgentCallback_Finish_NotifyOrphanedSoHRequest(AsyncINapSystemHealthAgentCallback* This) {
    return This->lpVtbl->Finish_NotifyOrphanedSoHRequest(This);
}
#endif
#endif

#endif


#endif  /* __AsyncINapSystemHealthAgentCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * INapSystemHealthAgentRequest interface
 */
#ifndef __INapSystemHealthAgentRequest_INTERFACE_DEFINED__
#define __INapSystemHealthAgentRequest_INTERFACE_DEFINED__

DEFINE_GUID(IID_INapSystemHealthAgentRequest, 0x5b360a69, 0x212d, 0x440d, 0xb3,0x98, 0x7e,0xef,0xd4,0x97,0x85,0x3a);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("5b360a69-212d-440d-b398-7eefd497853a")
INapSystemHealthAgentRequest : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetCorrelationId(
        CorrelationId *correlationId) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStringCorrelationId(
        StringCorrelationId **correlationId) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetSoHRequest(
        const SoHRequest *sohRequest,
        WINBOOL cacheSohForLaterUse) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSoHRequest(
        SoHRequest **sohRequest) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetSoHResponse(
        SoHResponse **sohResponse,
        UINT8 *flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCacheSoHFlag(
        WINBOOL *cacheSohForLaterUse) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(INapSystemHealthAgentRequest, 0x5b360a69, 0x212d, 0x440d, 0xb3,0x98, 0x7e,0xef,0xd4,0x97,0x85,0x3a)
#endif
#else
typedef struct INapSystemHealthAgentRequestVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        INapSystemHealthAgentRequest *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        INapSystemHealthAgentRequest *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        INapSystemHealthAgentRequest *This);

    /*** INapSystemHealthAgentRequest methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCorrelationId)(
        INapSystemHealthAgentRequest *This,
        CorrelationId *correlationId);

    HRESULT (STDMETHODCALLTYPE *GetStringCorrelationId)(
        INapSystemHealthAgentRequest *This,
        StringCorrelationId **correlationId);

    HRESULT (STDMETHODCALLTYPE *SetSoHRequest)(
        INapSystemHealthAgentRequest *This,
        const SoHRequest *sohRequest,
        WINBOOL cacheSohForLaterUse);

    HRESULT (STDMETHODCALLTYPE *GetSoHRequest)(
        INapSystemHealthAgentRequest *This,
        SoHRequest **sohRequest);

    HRESULT (STDMETHODCALLTYPE *GetSoHResponse)(
        INapSystemHealthAgentRequest *This,
        SoHResponse **sohResponse,
        UINT8 *flags);

    HRESULT (STDMETHODCALLTYPE *GetCacheSoHFlag)(
        INapSystemHealthAgentRequest *This,
        WINBOOL *cacheSohForLaterUse);

    END_INTERFACE
} INapSystemHealthAgentRequestVtbl;

interface INapSystemHealthAgentRequest {
    CONST_VTBL INapSystemHealthAgentRequestVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define INapSystemHealthAgentRequest_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define INapSystemHealthAgentRequest_AddRef(This) (This)->lpVtbl->AddRef(This)
#define INapSystemHealthAgentRequest_Release(This) (This)->lpVtbl->Release(This)
/*** INapSystemHealthAgentRequest methods ***/
#define INapSystemHealthAgentRequest_GetCorrelationId(This,correlationId) (This)->lpVtbl->GetCorrelationId(This,correlationId)
#define INapSystemHealthAgentRequest_GetStringCorrelationId(This,correlationId) (This)->lpVtbl->GetStringCorrelationId(This,correlationId)
#define INapSystemHealthAgentRequest_SetSoHRequest(This,sohRequest,cacheSohForLaterUse) (This)->lpVtbl->SetSoHRequest(This,sohRequest,cacheSohForLaterUse)
#define INapSystemHealthAgentRequest_GetSoHRequest(This,sohRequest) (This)->lpVtbl->GetSoHRequest(This,sohRequest)
#define INapSystemHealthAgentRequest_GetSoHResponse(This,sohResponse,flags) (This)->lpVtbl->GetSoHResponse(This,sohResponse,flags)
#define INapSystemHealthAgentRequest_GetCacheSoHFlag(This,cacheSohForLaterUse) (This)->lpVtbl->GetCacheSoHFlag(This,cacheSohForLaterUse)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthAgentRequest_QueryInterface(INapSystemHealthAgentRequest* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG INapSystemHealthAgentRequest_AddRef(INapSystemHealthAgentRequest* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG INapSystemHealthAgentRequest_Release(INapSystemHealthAgentRequest* This) {
    return This->lpVtbl->Release(This);
}
/*** INapSystemHealthAgentRequest methods ***/
static __WIDL_INLINE HRESULT INapSystemHealthAgentRequest_GetCorrelationId(INapSystemHealthAgentRequest* This,CorrelationId *correlationId) {
    return This->lpVtbl->GetCorrelationId(This,correlationId);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentRequest_GetStringCorrelationId(INapSystemHealthAgentRequest* This,StringCorrelationId **correlationId) {
    return This->lpVtbl->GetStringCorrelationId(This,correlationId);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentRequest_SetSoHRequest(INapSystemHealthAgentRequest* This,const SoHRequest *sohRequest,WINBOOL cacheSohForLaterUse) {
    return This->lpVtbl->SetSoHRequest(This,sohRequest,cacheSohForLaterUse);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentRequest_GetSoHRequest(INapSystemHealthAgentRequest* This,SoHRequest **sohRequest) {
    return This->lpVtbl->GetSoHRequest(This,sohRequest);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentRequest_GetSoHResponse(INapSystemHealthAgentRequest* This,SoHResponse **sohResponse,UINT8 *flags) {
    return This->lpVtbl->GetSoHResponse(This,sohResponse,flags);
}
static __WIDL_INLINE HRESULT INapSystemHealthAgentRequest_GetCacheSoHFlag(INapSystemHealthAgentRequest* This,WINBOOL *cacheSohForLaterUse) {
    return This->lpVtbl->GetCacheSoHFlag(This,cacheSohForLaterUse);
}
#endif
#endif

#endif


#endif  /* __INapSystemHealthAgentRequest_INTERFACE_DEFINED__ */

#endif
/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __napsystemhealthagent_h__ */
