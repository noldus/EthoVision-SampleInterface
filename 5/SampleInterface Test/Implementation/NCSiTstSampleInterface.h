//----------------------------------------------------------------------------
// N O L D U S   I N F O R M A T I O N   T E C H N O L O G Y   B . V .
//----------------------------------------------------------------------------
// Project    :   SampleInterface Test
// Module     :   SampleInterface Test
// File       :   NCSiTstSampleInterface.h
//----------------------------------------------------------------------------
// Note       :  Copyright (c) 2022 Noldus information technology  b.v.
//               Noldus reserves the right to change the interface with EthoVision XT 
//               without notice.
//----------------------------------------------------------------------------
#ifndef NCSITSTSAMPLEINTERFACE_H
#define NCSITSTSAMPLEINTERFACE_H

#pragma once

#include "sitstresource.h"
#include "sitstinterface5.h"
#include "interfaces\adinsguids.h"
#include <atlcom.h>


//----------------------------------------------------------------------------
// class ATL_NO_VTABLE NCSiTstSampleInterface
//----------------------------------------------------------------------------
// Description: sample interface test class
//----------------------------------------------------------------------------
class ATL_NO_VTABLE NCSiTstSampleInterface : public CComObjectRootEx<CComSingleThreadModel>,
                                             public CComCoClass<NCSiTstSampleInterface, &CLSID_SampleInterfaceTest5>,
                                             public INCCommonInterface,
                                             public INECAdinsExperimentNotifyInterface,
                                             public INECAdinsSiSampleInterface5
{
public:
            NCSiTstSampleInterface();
    virtual ~NCSiTstSampleInterface();
    
DECLARE_REGISTRY_RESOURCEID(IDR_SAMPLEINTERFACE1)


BEGIN_COM_MAP(NCSiTstSampleInterface)
    COM_INTERFACE_ENTRY(INCCommonInterface)
    COM_INTERFACE_ENTRY(INECAdinsExperimentNotifyInterface)
    COM_INTERFACE_ENTRY(INECAdinsSiSampleInterface5)
END_COM_MAP()


BEGIN_CATEGORY_MAP(NCSiTstSampleInterface)
   IMPLEMENTED_CATEGORY(CATID_VtsAddinsSampleInterface5)
END_CATEGORY_MAP()


    DECLARE_PROTECT_FINAL_CONSTRUCT()

    HRESULT                           FinalConstruct    ();
    void                              FinalRelease      (); 
    
    virtual HRESULT STDMETHODCALLTYPE GetInfo           (NCIdtAddinInfo* pInfo) override;
    virtual HRESULT STDMETHODCALLTYPE SetLanguage       (EIdtLanguage eLng) override;

    virtual HRESULT STDMETHODCALLTYPE GetClassID        (CLSID* pClassID) override;
    virtual HRESULT STDMETHODCALLTYPE IsDirty           () override;
    virtual HRESULT STDMETHODCALLTYPE Load              (LPCOLESTR pszDirectoryName) override;
    virtual HRESULT STDMETHODCALLTYPE Save              (LPCOLESTR pszDirectoryName) override;

    virtual HRESULT STDMETHODCALLTYPE Start             () override;
    virtual HRESULT STDMETHODCALLTYPE Close             () override;
    virtual HRESULT STDMETHODCALLTYPE SetExperimentInfo (const NECAdinsIdtExperiment* pExperiment) override;

    virtual HRESULT STDMETHODCALLTYPE SetStartTrial     (const NECAdinsIdtSiTrialInfo3* pTrialInfo) override;
    virtual HRESULT STDMETHODCALLTYPE SetStopTrial      (long idTrial) override;
    virtual HRESULT STDMETHODCALLTYPE SetStartTrackSet  (const NECAdinsIdtSiTrackSetInfo2* pTrackSetInfo) override;
    virtual HRESULT STDMETHODCALLTYPE SetStopTrackSet   (const NECAdinsIdtBaseTrackSetId* pTrackSetId) override;
    virtual HRESULT STDMETHODCALLTYPE ProcessSample     (const NECAdinsIdtSiSampleInfo2* pSample, long nSamplesTrackSet, const NECAdinsIdtSiSampleTrackSet2* pSamplesTrackSet, long nSamplesTrack, const NECAdinsIdtSiSampleTrack5* pSamplesTrack);
};


OBJECT_ENTRY_AUTO(__uuidof(SampleInterfaceTest5), NCSiTstSampleInterface)


#endif //NCSITSTSAMPLEINTERFACE_H
