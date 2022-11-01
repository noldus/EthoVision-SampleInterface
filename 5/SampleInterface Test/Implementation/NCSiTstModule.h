//----------------------------------------------------------------------------
// N O L D U S   I N F O R M A T I O N   T E C H N O L O G Y   B . V .
//----------------------------------------------------------------------------
// Project    :   SampleInterface Test
// Module     :   SampleInterface Test
// File       :   NCSiTstModule.h
//----------------------------------------------------------------------------
// Note       :  Copyright (c) 2022 Noldus information technology  b.v.
//               Noldus reserves the right to change the interface with EthoVision XT 
//               without notice.
//----------------------------------------------------------------------------
#ifndef NCSITSTMODULE_H
#define NCSITSTMODULE_H

#pragma once


#include "sitstinterface5.h"
#include "sitstresource.h"


//----------------------------------------------------------------------------
// class NCSiTstModule
//----------------------------------------------------------------------------
// Description: module
//----------------------------------------------------------------------------
class NCSiTstModule : public CAtlDllModuleT<NCSiTstModule>
{
public :
    DECLARE_LIBID(LIBID_SampleInterfaceLib5)
    
    DECLARE_REGISTRY_APPID_RESOURCEID(IDR_SAMPLEINTERFACE, "{72B09CC2-F086-47FC-88B4-07767426A463}")
};


extern NCSiTstModule g_Module;


#endif //NCSITSTMODULE_H
