//-----------------------------------------------------------------------------
//
//                   ** WARNING! ** 
//    This file was generated automatically by a tool.
//    Re-running the tool will overwrite this file.
//    You should copy this file to a custom location
//    before adding any customization in the copy to
//    prevent loss of your changes when the tool is
//    re-run.
//
//-----------------------------------------------------------------------------


#ifndef _LIB_GHI_NETWORKING_BASEINTERFACE_H_
#define _LIB_GHI_NETWORKING_BASEINTERFACE_H_

namespace GHI
{
    namespace Networking
    {
        struct BaseInterface
        {
            // Helper Functions to access fields of managed object
            static INT8& Get_networkAvailable( CLR_RT_HeapBlock* pMngObj )    { return Interop_Marshal_GetField_INT8( pMngObj, Library_Lib_GHI_Networking_BaseInterface::FIELD__networkAvailable ); }

            static INT32& Get_type( CLR_RT_HeapBlock* pMngObj )    { return Interop_Marshal_GetField_INT32( pMngObj, Library_Lib_GHI_Networking_BaseInterface::FIELD__type ); }

            static UNSUPPORTED_TYPE& Get_networkInterface( CLR_RT_HeapBlock* pMngObj )    { return Interop_Marshal_GetField_UNSUPPORTED_TYPE( pMngObj, Library_Lib_GHI_Networking_BaseInterface::FIELD__networkInterface ); }

            static INT8& Get_disposed( CLR_RT_HeapBlock* pMngObj )    { return Interop_Marshal_GetField_INT8( pMngObj, Library_Lib_GHI_Networking_BaseInterface::FIELD__disposed ); }

            // Declaration of stubs. These functions are implemented by Interop code developers
            static void NativeOpen( CLR_RT_HeapBlock* pMngObj, HRESULT &hr );
            static void NativeClose( CLR_RT_HeapBlock* pMngObj, HRESULT &hr );
            static void NativeUpdateMacAddress( CLR_RT_HeapBlock* pMngObj, CLR_RT_TypedArray_UINT8 param0, HRESULT &hr );
        };
    }
}
#endif  //_LIB_GHI_NETWORKING_BASEINTERFACE_H_
