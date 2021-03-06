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


#include "Lib.h"
#include "Lib_GHI_IO_Storage_SDCard.h"

#include <GHI\Include\GHI_OSHW_HAL.h>

using namespace GHI::IO::Storage;

void SDCard::NativeConstructor( CLR_RT_HeapBlock* pMngObj, UINT32 param0, HRESULT &hr )
{
}

void SDCard::NativeFinalize( CLR_RT_HeapBlock* pMngObj, HRESULT &hr )
{
}

void SDCard::NativeMount( CLR_RT_HeapBlock* pMngObj, INT32 param0, HRESULT &hr )
{
	hr = GHI_OSHW_Mount(param0);
}

void SDCard::NativeUnmount( CLR_RT_HeapBlock* pMngObj, HRESULT &hr )
{
	GHI_OSHW_Unmount();
}
