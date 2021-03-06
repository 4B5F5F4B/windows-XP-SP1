
#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0345 */
/* Compiler settings for oledb.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)

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
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IAccessor,0x0c733a8c,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowset,0x0c733a7c,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetInfo,0x0c733a55,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetLocate,0x0c733a7d,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetResynch,0x0c733a84,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetScroll,0x0c733a7e,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IChapteredRowset,0x0c733a93,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetFind,0x0c733a9d,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowPosition,0x0c733a94,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowPositionChange,0x0997a571,0x126e,0x11d0,0x9f,0x8a,0x00,0xa0,0xc9,0xa0,0x63,0x1e);


MIDL_DEFINE_GUID(IID, IID_IViewRowset,0x0c733a97,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IViewChapter,0x0c733a98,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IViewSort,0x0c733a9a,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IViewFilter,0x0c733a9b,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetView,0x0c733a99,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetExactScroll,0x0c733a7f,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetChange,0x0c733a05,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetUpdate,0x0c733a6d,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetIdentity,0x0c733a09,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetNotify,0x0c733a83,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetIndex,0x0c733a82,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommand,0x0c733a63,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IMultipleResults,0x0c733a90,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IConvertType,0x0c733a88,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandPrepare,0x0c733a26,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandProperties,0x0c733a79,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandText,0x0c733a27,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandWithParameters,0x0c733a64,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IColumnsRowset,0x0c733a10,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IColumnsInfo,0x0c733a11,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBCreateCommand,0x0c733a1d,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBCreateSession,0x0c733a5d,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ISourcesRowset,0x0c733a1e,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBProperties,0x0c733a8a,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBInitialize,0x0c733a8b,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBInfo,0x0c733a89,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBDataSourceAdmin,0x0c733a7a,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBAsynchNotify,0x0c733a96,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBAsynchStatus,0x0c733a95,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ISessionProperties,0x0c733a85,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IIndexDefinition,0x0c733a68,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITableDefinition,0x0c733a86,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IOpenRowset,0x0c733a69,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBSchemaRowset,0x0c733a7b,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IMDDataset,0xa07cccd1,0x8148,0x11d0,0x87,0xbb,0x00,0xc0,0x4f,0xc3,0x39,0x42);


MIDL_DEFINE_GUID(IID, IID_IMDFind,0xa07cccd2,0x8148,0x11d0,0x87,0xbb,0x00,0xc0,0x4f,0xc3,0x39,0x42);


MIDL_DEFINE_GUID(IID, IID_IMDRangeRowset,0x0c733aa0,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IAlterTable,0x0c733aa5,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IAlterIndex,0x0c733aa6,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetChapterMember,0x0c733aa8,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandPersist,0x0c733aa7,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetRefresh,0x0c733aa9,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IParentRowset,0x0c733aaa,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IErrorRecords,0x0c733a67,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IErrorLookup,0x0c733a66,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ISQLErrorInfo,0x0c733a74,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IGetDataSource,0x0c733a75,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITransactionLocal,0x0c733a5f,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITransactionJoin,0x0c733a5e,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITransactionObject,0x0c733a60,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITrusteeAdmin,0x0c733aa1,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITrusteeGroupAdmin,0x0c733aa2,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IObjectAccessControl,0x0c733aa3,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ISecurityInfo,0x0c733aa4,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITableCreation,0x0c733abc,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITableDefinitionWithConstraints,0x0c733aab,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRow,0x0c733ab4,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowChange,0x0c733ab5,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowSchemaChange,0x0c733aae,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IGetRow,0x0c733aaf,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IBindResource,0x0c733ab1,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IScopedOperations,0x0c733ab0,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICreateRow,0x0c733ab2,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBBinderProperties,0x0c733ab3,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IColumnsInfo2,0x0c733ab8,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRegisterProvider,0x0c733ab9,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IGetSession,0x0c733aba,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IGetSourceRow,0x0c733abb,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetCurrentIndex,0x0c733abd,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandStream,0x0c733abf,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetBookmark,0x0c733ac2,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/


#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0345 */
/* Compiler settings for oledb.idl:
    Oicf, W1, Zp8, env=Win64 (32b run,appending)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if defined(_M_IA64) || defined(_M_AMD64)

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
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IAccessor,0x0c733a8c,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowset,0x0c733a7c,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetInfo,0x0c733a55,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetLocate,0x0c733a7d,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetResynch,0x0c733a84,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetScroll,0x0c733a7e,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IChapteredRowset,0x0c733a93,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetFind,0x0c733a9d,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowPosition,0x0c733a94,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowPositionChange,0x0997a571,0x126e,0x11d0,0x9f,0x8a,0x00,0xa0,0xc9,0xa0,0x63,0x1e);


MIDL_DEFINE_GUID(IID, IID_IViewRowset,0x0c733a97,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IViewChapter,0x0c733a98,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IViewSort,0x0c733a9a,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IViewFilter,0x0c733a9b,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetView,0x0c733a99,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetExactScroll,0x0c733a7f,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetChange,0x0c733a05,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetUpdate,0x0c733a6d,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetIdentity,0x0c733a09,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetNotify,0x0c733a83,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetIndex,0x0c733a82,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommand,0x0c733a63,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IMultipleResults,0x0c733a90,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IConvertType,0x0c733a88,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandPrepare,0x0c733a26,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandProperties,0x0c733a79,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandText,0x0c733a27,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandWithParameters,0x0c733a64,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IColumnsRowset,0x0c733a10,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IColumnsInfo,0x0c733a11,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBCreateCommand,0x0c733a1d,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBCreateSession,0x0c733a5d,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ISourcesRowset,0x0c733a1e,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBProperties,0x0c733a8a,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBInitialize,0x0c733a8b,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBInfo,0x0c733a89,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBDataSourceAdmin,0x0c733a7a,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBAsynchNotify,0x0c733a96,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBAsynchStatus,0x0c733a95,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ISessionProperties,0x0c733a85,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IIndexDefinition,0x0c733a68,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITableDefinition,0x0c733a86,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IOpenRowset,0x0c733a69,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBSchemaRowset,0x0c733a7b,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IMDDataset,0xa07cccd1,0x8148,0x11d0,0x87,0xbb,0x00,0xc0,0x4f,0xc3,0x39,0x42);


MIDL_DEFINE_GUID(IID, IID_IMDFind,0xa07cccd2,0x8148,0x11d0,0x87,0xbb,0x00,0xc0,0x4f,0xc3,0x39,0x42);


MIDL_DEFINE_GUID(IID, IID_IMDRangeRowset,0x0c733aa0,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IAlterTable,0x0c733aa5,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IAlterIndex,0x0c733aa6,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetChapterMember,0x0c733aa8,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandPersist,0x0c733aa7,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetRefresh,0x0c733aa9,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IParentRowset,0x0c733aaa,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IErrorRecords,0x0c733a67,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IErrorLookup,0x0c733a66,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ISQLErrorInfo,0x0c733a74,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IGetDataSource,0x0c733a75,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITransactionLocal,0x0c733a5f,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITransactionJoin,0x0c733a5e,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITransactionObject,0x0c733a60,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITrusteeAdmin,0x0c733aa1,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITrusteeGroupAdmin,0x0c733aa2,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IObjectAccessControl,0x0c733aa3,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ISecurityInfo,0x0c733aa4,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITableCreation,0x0c733abc,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ITableDefinitionWithConstraints,0x0c733aab,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRow,0x0c733ab4,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowChange,0x0c733ab5,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowSchemaChange,0x0c733aae,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IGetRow,0x0c733aaf,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IBindResource,0x0c733ab1,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IScopedOperations,0x0c733ab0,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICreateRow,0x0c733ab2,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IDBBinderProperties,0x0c733ab3,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IColumnsInfo2,0x0c733ab8,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRegisterProvider,0x0c733ab9,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IGetSession,0x0c733aba,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IGetSourceRow,0x0c733abb,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetCurrentIndex,0x0c733abd,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_ICommandStream,0x0c733abf,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);


MIDL_DEFINE_GUID(IID, IID_IRowsetBookmark,0x0c733ac2,0x2a1c,0x11ce,0xad,0xe5,0x00,0xaa,0x00,0x44,0x77,0x3d);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* defined(_M_IA64) || defined(_M_AMD64)*/

