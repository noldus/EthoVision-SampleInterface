//----------------------------------------------------------------------------
// N O L D U S   I N F O R M A T I O N   T E C H N O L O G Y   B . V .
//----------------------------------------------------------------------------
// Project    :   SampleInterface Test
// Module     :   SampleInterface Test
// File       :   SampleInterfaceTest.cpp
//----------------------------------------------------------------------------
// Note       :  Copyright (c) 2022 Noldus information technology  b.v.
//               Noldus reserves the right to change the interface with EthoVision XT 
//               without notice.
//----------------------------------------------------------------------------
#include "sitstpch.h"
#include "sitstresource.h"
#include "ncsitstmodule.h"


//----------------------------------------------------------------------------
// Function DllMain
//----------------------------------------------------------------------------
// Description  : dll main
//----------------------------------------------------------------------------
extern "C" BOOL WINAPI DllMain(HINSTANCE /*hInstance*/, DWORD dwReason, LPVOID lpReserved)
{
    return g_Module.DllMain(dwReason, lpReserved); 
}


//----------------------------------------------------------------------------
// Function DllCanUnloadNow
//----------------------------------------------------------------------------
// Description  : Used to determine whether the DLL can be unloaded by OLE
//----------------------------------------------------------------------------
STDAPI DllCanUnloadNow()
{
    return g_Module.DllCanUnloadNow();
}


//----------------------------------------------------------------------------
// Function DllGetClassObject
//----------------------------------------------------------------------------
// Description  : Returns a class factory to create an object of the requested type
//----------------------------------------------------------------------------
STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    return g_Module.DllGetClassObject(rclsid, riid, ppv);
}


//----------------------------------------------------------------------------
// Function DllRegisterServer
//----------------------------------------------------------------------------
// Description  : Adds entries to the system registry
//----------------------------------------------------------------------------
STDAPI DllRegisterServer()
{
    // register the category (in HKEY_CLASSES_ROOT\Component Categories\) (see rgs file)

    // registers object, typelib and all interfaces in typelib
    const HRESULT hr = g_Module.DllRegisterServer();

    return hr;
}


//----------------------------------------------------------------------------
// Function DllUnregisterServer
//----------------------------------------------------------------------------
// Description  : Removes entries from the system registry
//----------------------------------------------------------------------------
STDAPI DllUnregisterServer()
{
    return g_Module.DllUnregisterServer();
}
