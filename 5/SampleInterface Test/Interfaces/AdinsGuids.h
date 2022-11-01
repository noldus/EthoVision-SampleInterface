//----------------------------------------------------------------------------
// N O L D U S   I N F O R M A T I O N   T E C H N O L O G Y   B . V .
//----------------------------------------------------------------------------
// Project    :   Vts
// Module     :   Vts Add-In Services
// File       :   AdinsGuids.h
//----------------------------------------------------------------------------
// Note       :  Copyright (c) 2022 Noldus information technology  b.v.
//               Noldus reserves the right to change the interface with EthoVision XT 
//               without notice.
//----------------------------------------------------------------------------
#ifndef ADINSGUIDS_H
#define ADINSGUIDS_H

#pragma once


//// {29A552F5-2EFF-45c1-8117-AB5361196092}
//DEFINE_GUID(CATID_VtsAddinsSampleInterface,
//0x29a552f5, 0x2eff, 0x45c1, 0x81, 0x17, 0xab, 0x53, 0x61, 0x19, 0x60, 0x92);

//// {501A56B7-550E-4B72-8710-1E83198DECFB}
//DEFINE_GUID(CATID_VtsAddinsSampleInterface2,
//0x501a56b7, 0x550e, 0x4b72, 0x87, 0x10, 0x1e, 0x83, 0x19, 0x8d, 0xec, 0xfb);

//// {B45C0189-6917-470C-9FF5-FD122D451934}
//DEFINE_GUID(CATID_VtsAddinsSampleInterface3,
//0xb45c0189, 0x6917, 0x470c, 0x9f, 0xf5, 0xfd, 0x12, 0x2d, 0x45, 0x19, 0x34);

//// {861A1289-EBF6-46D0-BD90-59C7A290C64C}
//DEFINE_GUID(CATID_VtsAddinsSampleInterface4,
//0x861a1289, 0xebf6, 0x46d0, 0xbd, 0x90, 0x59, 0xc7, 0xa2, 0x90, 0xc6, 0x4c);

// {38738E07-66B9-4F2B-BB99-0A0F9F047A99}
DEFINE_GUID(CATID_VtsAddinsSampleInterface5,
0x38738e07, 0x66b9, 0x4f2b, 0xbb, 0x99, 0xa, 0xf, 0x9f, 0x4, 0x7a, 0x99);

//// {38738E07-66B9-4F2B-BB99-0A0F9F047AA9}
//DEFINE_GUID(CATID_VtsAddinsSampleInterface6,
//0x38738e07, 0x66b9, 0x4f2b, 0xbb, 0x99, 0xa, 0xf, 0x9f, 0x4, 0x7a, 0xa9);


// #define solves the problem of external linkage (DEFINE_GUID solves it with INITGUID)
//#define STRING_CATID_VTSADDINSSAMPLEINTERFACE5      _T("Vts Sample Interface 5")


#endif //ADINSGUIDS_H
