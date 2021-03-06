#pragma once
#include "nwn_api.hpp"



#ifdef NWN_API_PROLOGUE
NWN_API_PROLOGUE(CExoTimersInternal)
#endif



typedef int BOOL;


struct CExoTimersInternal
{
    BOOL m_bQPCActive;
    BOOL m_bQPCAlgorithm2;
    uint64_t m_nQPFrequency;
    uint64_t m_nQPCMicroSecFrequency;
    double m_fQPCMicroSecFrequency;

    CExoTimersInternal();
    ~CExoTimersInternal();
    uint32_t GetLowResolutionTimer();
    uint64_t GetHighResolutionTimer();


#ifdef NWN_CLASS_EXTENSION_CExoTimersInternal
    NWN_CLASS_EXTENSION_CExoTimersInternal
#endif
};


#ifdef NWN_API_EPILOGUE
NWN_API_EPILOGUE(CExoTimersInternal)
#endif

