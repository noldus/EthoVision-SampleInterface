//----------------------------------------------------------------------------
// N O L D U S   I N F O R M A T I O N   T E C H N O L O G Y   B . V .
//----------------------------------------------------------------------------
// Project    :   SampleInterface Test
// Module     :   SampleInterface Test
// File       :   Sipch.h
//----------------------------------------------------------------------------
// Note       :  Copyright (c) 2022 Noldus information technology  b.v.
//               Noldus reserves the right to change the interface with EthoVision XT 
//               without notice.
//----------------------------------------------------------------------------
#ifndef SITSTPCH_H
#define SITSTPCH_H

#pragma once


//ATL
#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS  // some CString constructors will be explicit
#define _ATL_ALL_WARNINGS

#define _CRT_SECURE_NO_WARNINGS             //accept all (unsecure) standard C stuff
#define _SCL_SECURE_NO_WARNINGS

//#include "sitstresource.h"
#include <atlbase.h>
//#include <atlcom.h>


using namespace ATL;


#endif //SITSTPCH_H
