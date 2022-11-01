//----------------------------------------------------------------------------
// N O L D U S   I N F O R M A T I O N   T E C H N O L O G Y   B . V .
//----------------------------------------------------------------------------
// Project    :   SampleInterface Test
// Module     :   SampleInterface Test
// File       :   NCSiTstSampleInterface.cpp
//----------------------------------------------------------------------------
// Note       :  Copyright (c) 2022 Noldus information technology  b.v.
//               Noldus reserves the right to change the interface with EthoVision XT 
//               without notice.
//----------------------------------------------------------------------------
#include "sitstpch.h"
#include "ncsitstsampleinterface.h"
#include "sitsttypes.h"
#include <algorithm>


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::NCSiTstSampleInterface
//----------------------------------------------------------------------------
// Description  : constructor
//----------------------------------------------------------------------------
NCSiTstSampleInterface::NCSiTstSampleInterface()
{
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::~NCSiTstSampleInterface
//----------------------------------------------------------------------------
// Description  : destructor
//----------------------------------------------------------------------------
NCSiTstSampleInterface::~NCSiTstSampleInterface()
{
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::FinalConstruct
//----------------------------------------------------------------------------
// Description  : necessary ATL function
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::FinalConstruct()
{
    return S_OK;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::FinalRelease
//----------------------------------------------------------------------------
// Description  : necessary ATL function
//----------------------------------------------------------------------------
void NCSiTstSampleInterface::FinalRelease() 
{
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::GetInfo
//----------------------------------------------------------------------------
// Description  : get info
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::GetInfo(NCIdtAddinInfo* pInfo)
{
    UNREFERENCED_PARAMETER(pInfo);

    return S_FALSE;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::SetLanguage
//----------------------------------------------------------------------------
// Description  : set language
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::SetLanguage(EIdtLanguage eLng)
{
    UNREFERENCED_PARAMETER(eLng);

    return S_OK;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::GetClassID
//----------------------------------------------------------------------------
// Description  : get class id
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::GetClassID(CLSID* pClassID)
{
    *pClassID = CLSID_SampleInterfaceTest5;

    return S_OK;
}
    

//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::IsDirty
//----------------------------------------------------------------------------
// Description  : IsDirty 
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::IsDirty()
{
    return S_FALSE;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::Load
//----------------------------------------------------------------------------
// Description  : load request
// Input        : pszDirectoryName : directory under experiment
// Return value : S_FALSE
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::Load(LPCOLESTR pszDirectoryName)
{
    UNREFERENCED_PARAMETER(pszDirectoryName);

    return S_FALSE;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::Save
//----------------------------------------------------------------------------
// Description  : save request
// Input        : pszDirectoryName : directory under experiment
// Return value : S_OK
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::Save(LPCOLESTR pszDirectoryName)
{
    UNREFERENCED_PARAMETER(pszDirectoryName);

    return S_FALSE;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::Start
//----------------------------------------------------------------------------
// Description  : on start experiment
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::Start()
{
    return S_OK;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::Close
//----------------------------------------------------------------------------
// Description  : on close experiment
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::Close()
{
    return S_OK;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::SetExperimentInfo
//----------------------------------------------------------------------------
// Description  : on set experiment info
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::SetExperimentInfo(const NECAdinsIdtExperiment* pExperiment)
{
    UNREFERENCED_PARAMETER(pExperiment);

    return S_OK;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::SetStartTrial
//----------------------------------------------------------------------------
// Description  : set trial info
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::SetStartTrial(const NECAdinsIdtSiTrialInfo3* pTrialInfo)
{
    UNREFERENCED_PARAMETER(pTrialInfo);

    return S_OK;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::SetStopTrial
//----------------------------------------------------------------------------
// Description  : set stop trial
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::SetStopTrial(long idTrial)
{
    UNREFERENCED_PARAMETER(idTrial);

    return S_OK;
}
    

//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::SetStartTrackSet
//----------------------------------------------------------------------------
// Description  : set trackset info
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::SetStartTrackSet(const NECAdinsIdtSiTrackSetInfo2* pTrackSetInfo)
{
    UNREFERENCED_PARAMETER(pTrackSetInfo);

    return S_OK;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::SetStopTrackSet
//----------------------------------------------------------------------------
// Description  : set stop trackset
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::SetStopTrackSet(const NECAdinsIdtBaseTrackSetId* pTrackSetId)
{
    UNREFERENCED_PARAMETER(pTrackSetId);

    return S_OK;
}


//----------------------------------------------------------------------------
// Function NCSiTstSampleInterface::ProcessSample
//----------------------------------------------------------------------------
// Description  : process sample
//----------------------------------------------------------------------------
HRESULT NCSiTstSampleInterface::ProcessSample(const NECAdinsIdtSiSampleInfo2* pSample, long nSamplesTrackSet, const NECAdinsIdtSiSampleTrackSet2* pSamplesTrackSet, long nSamplesTrack, const NECAdinsIdtSiSampleTrack5* pSamplesTrack)
{
    UNREFERENCED_PARAMETER(pSample);
    UNREFERENCED_PARAMETER(pSamplesTrackSet);
    UNREFERENCED_PARAMETER(nSamplesTrackSet);
    UNREFERENCED_PARAMETER(pSamplesTrack);
    UNREFERENCED_PARAMETER(nSamplesTrack);

    return S_OK;
}
