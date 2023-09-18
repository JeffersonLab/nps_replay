//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sun Sep 17 11:30:34 2023 by ROOT version 6.22/06
// from TTree T/Hall A Analyzer Output DST
// found on file: ../ROOTfiles/COIN/50k/nps_hms_coin_1195_50000.root
//////////////////////////////////////////////////////////

#ifndef phvth_h
#define phvth_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "THaEvent.h"
#include "THaEvent.h"

class phvth {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        FRXAraw_V;
   Double_t        FRXBraw_V;
   Double_t        FRYAraw_V;
   Double_t        FRYBraw_V;
   Int_t           Ndata_H_cal_1pr_emean;
   Double_t        H_cal_1pr_emean[13];   //[Ndata.H.cal.1pr.emean]
   Int_t           Ndata_H_cal_1pr_eneg;
   Double_t        H_cal_1pr_eneg[13];   //[Ndata.H.cal.1pr.eneg]
   Int_t           Ndata_H_cal_1pr_epos;
   Double_t        H_cal_1pr_epos[13];   //[Ndata.H.cal.1pr.epos]
   Int_t           Ndata_H_cal_1pr_goodNegAdcMult;
   Double_t        H_cal_1pr_goodNegAdcMult[13];   //[Ndata.H.cal.1pr.goodNegAdcMult]
   Int_t           Ndata_H_cal_1pr_goodNegAdcPed;
   Double_t        H_cal_1pr_goodNegAdcPed[13];   //[Ndata.H.cal.1pr.goodNegAdcPed]
   Int_t           Ndata_H_cal_1pr_goodNegAdcPulseAmp;
   Double_t        H_cal_1pr_goodNegAdcPulseAmp[13];   //[Ndata.H.cal.1pr.goodNegAdcPulseAmp]
   Int_t           Ndata_H_cal_1pr_goodNegAdcPulseInt;
   Double_t        H_cal_1pr_goodNegAdcPulseInt[13];   //[Ndata.H.cal.1pr.goodNegAdcPulseInt]
   Int_t           Ndata_H_cal_1pr_goodNegAdcPulseIntRaw;
   Double_t        H_cal_1pr_goodNegAdcPulseIntRaw[13];   //[Ndata.H.cal.1pr.goodNegAdcPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_goodNegAdcPulseTime;
   Double_t        H_cal_1pr_goodNegAdcPulseTime[13];   //[Ndata.H.cal.1pr.goodNegAdcPulseTime]
   Int_t           Ndata_H_cal_1pr_goodNegAdcTdcDiffTime;
   Double_t        H_cal_1pr_goodNegAdcTdcDiffTime[13];   //[Ndata.H.cal.1pr.goodNegAdcTdcDiffTime]
   Int_t           Ndata_H_cal_1pr_goodPosAdcMult;
   Double_t        H_cal_1pr_goodPosAdcMult[13];   //[Ndata.H.cal.1pr.goodPosAdcMult]
   Int_t           Ndata_H_cal_1pr_goodPosAdcPed;
   Double_t        H_cal_1pr_goodPosAdcPed[13];   //[Ndata.H.cal.1pr.goodPosAdcPed]
   Int_t           Ndata_H_cal_1pr_goodPosAdcPulseAmp;
   Double_t        H_cal_1pr_goodPosAdcPulseAmp[13];   //[Ndata.H.cal.1pr.goodPosAdcPulseAmp]
   Int_t           Ndata_H_cal_1pr_goodPosAdcPulseInt;
   Double_t        H_cal_1pr_goodPosAdcPulseInt[13];   //[Ndata.H.cal.1pr.goodPosAdcPulseInt]
   Int_t           Ndata_H_cal_1pr_goodPosAdcPulseIntRaw;
   Double_t        H_cal_1pr_goodPosAdcPulseIntRaw[13];   //[Ndata.H.cal.1pr.goodPosAdcPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_goodPosAdcPulseTime;
   Double_t        H_cal_1pr_goodPosAdcPulseTime[13];   //[Ndata.H.cal.1pr.goodPosAdcPulseTime]
   Int_t           Ndata_H_cal_1pr_goodPosAdcTdcDiffTime;
   Double_t        H_cal_1pr_goodPosAdcTdcDiffTime[13];   //[Ndata.H.cal.1pr.goodPosAdcTdcDiffTime]
   Int_t           Ndata_H_cal_1pr_negAdcCounter;
   Double_t        H_cal_1pr_negAdcCounter[8];   //[Ndata.H.cal.1pr.negAdcCounter]
   Int_t           Ndata_H_cal_1pr_negAdcErrorFlag;
   Double_t        H_cal_1pr_negAdcErrorFlag[8];   //[Ndata.H.cal.1pr.negAdcErrorFlag]
   Int_t           Ndata_H_cal_1pr_negAdcPed;
   Double_t        H_cal_1pr_negAdcPed[8];   //[Ndata.H.cal.1pr.negAdcPed]
   Int_t           Ndata_H_cal_1pr_negAdcPedRaw;
   Double_t        H_cal_1pr_negAdcPedRaw[8];   //[Ndata.H.cal.1pr.negAdcPedRaw]
   Int_t           Ndata_H_cal_1pr_negAdcPulseAmp;
   Double_t        H_cal_1pr_negAdcPulseAmp[8];   //[Ndata.H.cal.1pr.negAdcPulseAmp]
   Int_t           Ndata_H_cal_1pr_negAdcPulseAmpRaw;
   Double_t        H_cal_1pr_negAdcPulseAmpRaw[8];   //[Ndata.H.cal.1pr.negAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_1pr_negAdcPulseInt;
   Double_t        H_cal_1pr_negAdcPulseInt[8];   //[Ndata.H.cal.1pr.negAdcPulseInt]
   Int_t           Ndata_H_cal_1pr_negAdcPulseIntRaw;
   Double_t        H_cal_1pr_negAdcPulseIntRaw[8];   //[Ndata.H.cal.1pr.negAdcPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_negAdcPulseTime;
   Double_t        H_cal_1pr_negAdcPulseTime[8];   //[Ndata.H.cal.1pr.negAdcPulseTime]
   Int_t           Ndata_H_cal_1pr_negAdcPulseTimeRaw;
   Double_t        H_cal_1pr_negAdcPulseTimeRaw[8];   //[Ndata.H.cal.1pr.negAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_1pr_negAdcSampPed;
   Double_t        H_cal_1pr_negAdcSampPed[1];   //[Ndata.H.cal.1pr.negAdcSampPed]
   Int_t           Ndata_H_cal_1pr_negAdcSampPedRaw;
   Double_t        H_cal_1pr_negAdcSampPedRaw[1];   //[Ndata.H.cal.1pr.negAdcSampPedRaw]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseAmp;
   Double_t        H_cal_1pr_negAdcSampPulseAmp[1];   //[Ndata.H.cal.1pr.negAdcSampPulseAmp]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseAmpRaw;
   Double_t        H_cal_1pr_negAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.1pr.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseInt;
   Double_t        H_cal_1pr_negAdcSampPulseInt[1];   //[Ndata.H.cal.1pr.negAdcSampPulseInt]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseIntRaw;
   Double_t        H_cal_1pr_negAdcSampPulseIntRaw[1];   //[Ndata.H.cal.1pr.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseTime;
   Double_t        H_cal_1pr_negAdcSampPulseTime[1];   //[Ndata.H.cal.1pr.negAdcSampPulseTime]
   Int_t           Ndata_H_cal_1pr_negAdcSampPulseTimeRaw;
   Double_t        H_cal_1pr_negAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.1pr.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_1pr_numGoodNegAdcHits;
   Double_t        H_cal_1pr_numGoodNegAdcHits[13];   //[Ndata.H.cal.1pr.numGoodNegAdcHits]
   Int_t           Ndata_H_cal_1pr_numGoodPosAdcHits;
   Double_t        H_cal_1pr_numGoodPosAdcHits[13];   //[Ndata.H.cal.1pr.numGoodPosAdcHits]
   Int_t           Ndata_H_cal_1pr_posAdcCounter;
   Double_t        H_cal_1pr_posAdcCounter[9];   //[Ndata.H.cal.1pr.posAdcCounter]
   Int_t           Ndata_H_cal_1pr_posAdcErrorFlag;
   Double_t        H_cal_1pr_posAdcErrorFlag[9];   //[Ndata.H.cal.1pr.posAdcErrorFlag]
   Int_t           Ndata_H_cal_1pr_posAdcPed;
   Double_t        H_cal_1pr_posAdcPed[9];   //[Ndata.H.cal.1pr.posAdcPed]
   Int_t           Ndata_H_cal_1pr_posAdcPedRaw;
   Double_t        H_cal_1pr_posAdcPedRaw[9];   //[Ndata.H.cal.1pr.posAdcPedRaw]
   Int_t           Ndata_H_cal_1pr_posAdcPulseAmp;
   Double_t        H_cal_1pr_posAdcPulseAmp[9];   //[Ndata.H.cal.1pr.posAdcPulseAmp]
   Int_t           Ndata_H_cal_1pr_posAdcPulseAmpRaw;
   Double_t        H_cal_1pr_posAdcPulseAmpRaw[9];   //[Ndata.H.cal.1pr.posAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_1pr_posAdcPulseInt;
   Double_t        H_cal_1pr_posAdcPulseInt[9];   //[Ndata.H.cal.1pr.posAdcPulseInt]
   Int_t           Ndata_H_cal_1pr_posAdcPulseIntRaw;
   Double_t        H_cal_1pr_posAdcPulseIntRaw[9];   //[Ndata.H.cal.1pr.posAdcPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_posAdcPulseTime;
   Double_t        H_cal_1pr_posAdcPulseTime[9];   //[Ndata.H.cal.1pr.posAdcPulseTime]
   Int_t           Ndata_H_cal_1pr_posAdcPulseTimeRaw;
   Double_t        H_cal_1pr_posAdcPulseTimeRaw[9];   //[Ndata.H.cal.1pr.posAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_1pr_posAdcSampPed;
   Double_t        H_cal_1pr_posAdcSampPed[1];   //[Ndata.H.cal.1pr.posAdcSampPed]
   Int_t           Ndata_H_cal_1pr_posAdcSampPedRaw;
   Double_t        H_cal_1pr_posAdcSampPedRaw[1];   //[Ndata.H.cal.1pr.posAdcSampPedRaw]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseAmp;
   Double_t        H_cal_1pr_posAdcSampPulseAmp[1];   //[Ndata.H.cal.1pr.posAdcSampPulseAmp]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseAmpRaw;
   Double_t        H_cal_1pr_posAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.1pr.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseInt;
   Double_t        H_cal_1pr_posAdcSampPulseInt[1];   //[Ndata.H.cal.1pr.posAdcSampPulseInt]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseIntRaw;
   Double_t        H_cal_1pr_posAdcSampPulseIntRaw[1];   //[Ndata.H.cal.1pr.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseTime;
   Double_t        H_cal_1pr_posAdcSampPulseTime[1];   //[Ndata.H.cal.1pr.posAdcSampPulseTime]
   Int_t           Ndata_H_cal_1pr_posAdcSampPulseTimeRaw;
   Double_t        H_cal_1pr_posAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.1pr.posAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_2ta_emean;
   Double_t        H_cal_2ta_emean[13];   //[Ndata.H.cal.2ta.emean]
   Int_t           Ndata_H_cal_2ta_eneg;
   Double_t        H_cal_2ta_eneg[13];   //[Ndata.H.cal.2ta.eneg]
   Int_t           Ndata_H_cal_2ta_epos;
   Double_t        H_cal_2ta_epos[13];   //[Ndata.H.cal.2ta.epos]
   Int_t           Ndata_H_cal_2ta_goodNegAdcMult;
   Double_t        H_cal_2ta_goodNegAdcMult[13];   //[Ndata.H.cal.2ta.goodNegAdcMult]
   Int_t           Ndata_H_cal_2ta_goodNegAdcPed;
   Double_t        H_cal_2ta_goodNegAdcPed[13];   //[Ndata.H.cal.2ta.goodNegAdcPed]
   Int_t           Ndata_H_cal_2ta_goodNegAdcPulseAmp;
   Double_t        H_cal_2ta_goodNegAdcPulseAmp[13];   //[Ndata.H.cal.2ta.goodNegAdcPulseAmp]
   Int_t           Ndata_H_cal_2ta_goodNegAdcPulseInt;
   Double_t        H_cal_2ta_goodNegAdcPulseInt[13];   //[Ndata.H.cal.2ta.goodNegAdcPulseInt]
   Int_t           Ndata_H_cal_2ta_goodNegAdcPulseIntRaw;
   Double_t        H_cal_2ta_goodNegAdcPulseIntRaw[13];   //[Ndata.H.cal.2ta.goodNegAdcPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_goodNegAdcPulseTime;
   Double_t        H_cal_2ta_goodNegAdcPulseTime[13];   //[Ndata.H.cal.2ta.goodNegAdcPulseTime]
   Int_t           Ndata_H_cal_2ta_goodNegAdcTdcDiffTime;
   Double_t        H_cal_2ta_goodNegAdcTdcDiffTime[13];   //[Ndata.H.cal.2ta.goodNegAdcTdcDiffTime]
   Int_t           Ndata_H_cal_2ta_goodPosAdcMult;
   Double_t        H_cal_2ta_goodPosAdcMult[13];   //[Ndata.H.cal.2ta.goodPosAdcMult]
   Int_t           Ndata_H_cal_2ta_goodPosAdcPed;
   Double_t        H_cal_2ta_goodPosAdcPed[13];   //[Ndata.H.cal.2ta.goodPosAdcPed]
   Int_t           Ndata_H_cal_2ta_goodPosAdcPulseAmp;
   Double_t        H_cal_2ta_goodPosAdcPulseAmp[13];   //[Ndata.H.cal.2ta.goodPosAdcPulseAmp]
   Int_t           Ndata_H_cal_2ta_goodPosAdcPulseInt;
   Double_t        H_cal_2ta_goodPosAdcPulseInt[13];   //[Ndata.H.cal.2ta.goodPosAdcPulseInt]
   Int_t           Ndata_H_cal_2ta_goodPosAdcPulseIntRaw;
   Double_t        H_cal_2ta_goodPosAdcPulseIntRaw[13];   //[Ndata.H.cal.2ta.goodPosAdcPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_goodPosAdcPulseTime;
   Double_t        H_cal_2ta_goodPosAdcPulseTime[13];   //[Ndata.H.cal.2ta.goodPosAdcPulseTime]
   Int_t           Ndata_H_cal_2ta_goodPosAdcTdcDiffTime;
   Double_t        H_cal_2ta_goodPosAdcTdcDiffTime[13];   //[Ndata.H.cal.2ta.goodPosAdcTdcDiffTime]
   Int_t           Ndata_H_cal_2ta_negAdcCounter;
   Double_t        H_cal_2ta_negAdcCounter[8];   //[Ndata.H.cal.2ta.negAdcCounter]
   Int_t           Ndata_H_cal_2ta_negAdcErrorFlag;
   Double_t        H_cal_2ta_negAdcErrorFlag[8];   //[Ndata.H.cal.2ta.negAdcErrorFlag]
   Int_t           Ndata_H_cal_2ta_negAdcPed;
   Double_t        H_cal_2ta_negAdcPed[8];   //[Ndata.H.cal.2ta.negAdcPed]
   Int_t           Ndata_H_cal_2ta_negAdcPedRaw;
   Double_t        H_cal_2ta_negAdcPedRaw[8];   //[Ndata.H.cal.2ta.negAdcPedRaw]
   Int_t           Ndata_H_cal_2ta_negAdcPulseAmp;
   Double_t        H_cal_2ta_negAdcPulseAmp[8];   //[Ndata.H.cal.2ta.negAdcPulseAmp]
   Int_t           Ndata_H_cal_2ta_negAdcPulseAmpRaw;
   Double_t        H_cal_2ta_negAdcPulseAmpRaw[8];   //[Ndata.H.cal.2ta.negAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_2ta_negAdcPulseInt;
   Double_t        H_cal_2ta_negAdcPulseInt[8];   //[Ndata.H.cal.2ta.negAdcPulseInt]
   Int_t           Ndata_H_cal_2ta_negAdcPulseIntRaw;
   Double_t        H_cal_2ta_negAdcPulseIntRaw[8];   //[Ndata.H.cal.2ta.negAdcPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_negAdcPulseTime;
   Double_t        H_cal_2ta_negAdcPulseTime[8];   //[Ndata.H.cal.2ta.negAdcPulseTime]
   Int_t           Ndata_H_cal_2ta_negAdcPulseTimeRaw;
   Double_t        H_cal_2ta_negAdcPulseTimeRaw[8];   //[Ndata.H.cal.2ta.negAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_2ta_negAdcSampPed;
   Double_t        H_cal_2ta_negAdcSampPed[1];   //[Ndata.H.cal.2ta.negAdcSampPed]
   Int_t           Ndata_H_cal_2ta_negAdcSampPedRaw;
   Double_t        H_cal_2ta_negAdcSampPedRaw[1];   //[Ndata.H.cal.2ta.negAdcSampPedRaw]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseAmp;
   Double_t        H_cal_2ta_negAdcSampPulseAmp[1];   //[Ndata.H.cal.2ta.negAdcSampPulseAmp]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseAmpRaw;
   Double_t        H_cal_2ta_negAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.2ta.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseInt;
   Double_t        H_cal_2ta_negAdcSampPulseInt[1];   //[Ndata.H.cal.2ta.negAdcSampPulseInt]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseIntRaw;
   Double_t        H_cal_2ta_negAdcSampPulseIntRaw[1];   //[Ndata.H.cal.2ta.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseTime;
   Double_t        H_cal_2ta_negAdcSampPulseTime[1];   //[Ndata.H.cal.2ta.negAdcSampPulseTime]
   Int_t           Ndata_H_cal_2ta_negAdcSampPulseTimeRaw;
   Double_t        H_cal_2ta_negAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.2ta.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_2ta_numGoodNegAdcHits;
   Double_t        H_cal_2ta_numGoodNegAdcHits[13];   //[Ndata.H.cal.2ta.numGoodNegAdcHits]
   Int_t           Ndata_H_cal_2ta_numGoodPosAdcHits;
   Double_t        H_cal_2ta_numGoodPosAdcHits[13];   //[Ndata.H.cal.2ta.numGoodPosAdcHits]
   Int_t           Ndata_H_cal_2ta_posAdcCounter;
   Double_t        H_cal_2ta_posAdcCounter[8];   //[Ndata.H.cal.2ta.posAdcCounter]
   Int_t           Ndata_H_cal_2ta_posAdcErrorFlag;
   Double_t        H_cal_2ta_posAdcErrorFlag[8];   //[Ndata.H.cal.2ta.posAdcErrorFlag]
   Int_t           Ndata_H_cal_2ta_posAdcPed;
   Double_t        H_cal_2ta_posAdcPed[8];   //[Ndata.H.cal.2ta.posAdcPed]
   Int_t           Ndata_H_cal_2ta_posAdcPedRaw;
   Double_t        H_cal_2ta_posAdcPedRaw[8];   //[Ndata.H.cal.2ta.posAdcPedRaw]
   Int_t           Ndata_H_cal_2ta_posAdcPulseAmp;
   Double_t        H_cal_2ta_posAdcPulseAmp[8];   //[Ndata.H.cal.2ta.posAdcPulseAmp]
   Int_t           Ndata_H_cal_2ta_posAdcPulseAmpRaw;
   Double_t        H_cal_2ta_posAdcPulseAmpRaw[8];   //[Ndata.H.cal.2ta.posAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_2ta_posAdcPulseInt;
   Double_t        H_cal_2ta_posAdcPulseInt[8];   //[Ndata.H.cal.2ta.posAdcPulseInt]
   Int_t           Ndata_H_cal_2ta_posAdcPulseIntRaw;
   Double_t        H_cal_2ta_posAdcPulseIntRaw[8];   //[Ndata.H.cal.2ta.posAdcPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_posAdcPulseTime;
   Double_t        H_cal_2ta_posAdcPulseTime[8];   //[Ndata.H.cal.2ta.posAdcPulseTime]
   Int_t           Ndata_H_cal_2ta_posAdcPulseTimeRaw;
   Double_t        H_cal_2ta_posAdcPulseTimeRaw[8];   //[Ndata.H.cal.2ta.posAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_2ta_posAdcSampPed;
   Double_t        H_cal_2ta_posAdcSampPed[1];   //[Ndata.H.cal.2ta.posAdcSampPed]
   Int_t           Ndata_H_cal_2ta_posAdcSampPedRaw;
   Double_t        H_cal_2ta_posAdcSampPedRaw[1];   //[Ndata.H.cal.2ta.posAdcSampPedRaw]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseAmp;
   Double_t        H_cal_2ta_posAdcSampPulseAmp[1];   //[Ndata.H.cal.2ta.posAdcSampPulseAmp]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseAmpRaw;
   Double_t        H_cal_2ta_posAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.2ta.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseInt;
   Double_t        H_cal_2ta_posAdcSampPulseInt[1];   //[Ndata.H.cal.2ta.posAdcSampPulseInt]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseIntRaw;
   Double_t        H_cal_2ta_posAdcSampPulseIntRaw[1];   //[Ndata.H.cal.2ta.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseTime;
   Double_t        H_cal_2ta_posAdcSampPulseTime[1];   //[Ndata.H.cal.2ta.posAdcSampPulseTime]
   Int_t           Ndata_H_cal_2ta_posAdcSampPulseTimeRaw;
   Double_t        H_cal_2ta_posAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.2ta.posAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_3ta_emean;
   Double_t        H_cal_3ta_emean[13];   //[Ndata.H.cal.3ta.emean]
   Int_t           Ndata_H_cal_3ta_eneg;
   Double_t        H_cal_3ta_eneg[13];   //[Ndata.H.cal.3ta.eneg]
   Int_t           Ndata_H_cal_3ta_epos;
   Double_t        H_cal_3ta_epos[13];   //[Ndata.H.cal.3ta.epos]
   Int_t           Ndata_H_cal_3ta_goodNegAdcMult;
   Double_t        H_cal_3ta_goodNegAdcMult[13];   //[Ndata.H.cal.3ta.goodNegAdcMult]
   Int_t           Ndata_H_cal_3ta_goodNegAdcPed;
   Double_t        H_cal_3ta_goodNegAdcPed[13];   //[Ndata.H.cal.3ta.goodNegAdcPed]
   Int_t           Ndata_H_cal_3ta_goodNegAdcPulseAmp;
   Double_t        H_cal_3ta_goodNegAdcPulseAmp[13];   //[Ndata.H.cal.3ta.goodNegAdcPulseAmp]
   Int_t           Ndata_H_cal_3ta_goodNegAdcPulseInt;
   Double_t        H_cal_3ta_goodNegAdcPulseInt[13];   //[Ndata.H.cal.3ta.goodNegAdcPulseInt]
   Int_t           Ndata_H_cal_3ta_goodNegAdcPulseIntRaw;
   Double_t        H_cal_3ta_goodNegAdcPulseIntRaw[13];   //[Ndata.H.cal.3ta.goodNegAdcPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_goodNegAdcPulseTime;
   Double_t        H_cal_3ta_goodNegAdcPulseTime[13];   //[Ndata.H.cal.3ta.goodNegAdcPulseTime]
   Int_t           Ndata_H_cal_3ta_goodNegAdcTdcDiffTime;
   Double_t        H_cal_3ta_goodNegAdcTdcDiffTime[13];   //[Ndata.H.cal.3ta.goodNegAdcTdcDiffTime]
   Int_t           Ndata_H_cal_3ta_goodPosAdcMult;
   Double_t        H_cal_3ta_goodPosAdcMult[13];   //[Ndata.H.cal.3ta.goodPosAdcMult]
   Int_t           Ndata_H_cal_3ta_goodPosAdcPed;
   Double_t        H_cal_3ta_goodPosAdcPed[13];   //[Ndata.H.cal.3ta.goodPosAdcPed]
   Int_t           Ndata_H_cal_3ta_goodPosAdcPulseAmp;
   Double_t        H_cal_3ta_goodPosAdcPulseAmp[13];   //[Ndata.H.cal.3ta.goodPosAdcPulseAmp]
   Int_t           Ndata_H_cal_3ta_goodPosAdcPulseInt;
   Double_t        H_cal_3ta_goodPosAdcPulseInt[13];   //[Ndata.H.cal.3ta.goodPosAdcPulseInt]
   Int_t           Ndata_H_cal_3ta_goodPosAdcPulseIntRaw;
   Double_t        H_cal_3ta_goodPosAdcPulseIntRaw[13];   //[Ndata.H.cal.3ta.goodPosAdcPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_goodPosAdcPulseTime;
   Double_t        H_cal_3ta_goodPosAdcPulseTime[13];   //[Ndata.H.cal.3ta.goodPosAdcPulseTime]
   Int_t           Ndata_H_cal_3ta_goodPosAdcTdcDiffTime;
   Double_t        H_cal_3ta_goodPosAdcTdcDiffTime[13];   //[Ndata.H.cal.3ta.goodPosAdcTdcDiffTime]
   Int_t           Ndata_H_cal_3ta_negAdcCounter;
   Double_t        H_cal_3ta_negAdcCounter[1];   //[Ndata.H.cal.3ta.negAdcCounter]
   Int_t           Ndata_H_cal_3ta_negAdcErrorFlag;
   Double_t        H_cal_3ta_negAdcErrorFlag[1];   //[Ndata.H.cal.3ta.negAdcErrorFlag]
   Int_t           Ndata_H_cal_3ta_negAdcPed;
   Double_t        H_cal_3ta_negAdcPed[1];   //[Ndata.H.cal.3ta.negAdcPed]
   Int_t           Ndata_H_cal_3ta_negAdcPedRaw;
   Double_t        H_cal_3ta_negAdcPedRaw[1];   //[Ndata.H.cal.3ta.negAdcPedRaw]
   Int_t           Ndata_H_cal_3ta_negAdcPulseAmp;
   Double_t        H_cal_3ta_negAdcPulseAmp[1];   //[Ndata.H.cal.3ta.negAdcPulseAmp]
   Int_t           Ndata_H_cal_3ta_negAdcPulseAmpRaw;
   Double_t        H_cal_3ta_negAdcPulseAmpRaw[1];   //[Ndata.H.cal.3ta.negAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_3ta_negAdcPulseInt;
   Double_t        H_cal_3ta_negAdcPulseInt[1];   //[Ndata.H.cal.3ta.negAdcPulseInt]
   Int_t           Ndata_H_cal_3ta_negAdcPulseIntRaw;
   Double_t        H_cal_3ta_negAdcPulseIntRaw[1];   //[Ndata.H.cal.3ta.negAdcPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_negAdcPulseTime;
   Double_t        H_cal_3ta_negAdcPulseTime[1];   //[Ndata.H.cal.3ta.negAdcPulseTime]
   Int_t           Ndata_H_cal_3ta_negAdcPulseTimeRaw;
   Double_t        H_cal_3ta_negAdcPulseTimeRaw[1];   //[Ndata.H.cal.3ta.negAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_3ta_negAdcSampPed;
   Double_t        H_cal_3ta_negAdcSampPed[1];   //[Ndata.H.cal.3ta.negAdcSampPed]
   Int_t           Ndata_H_cal_3ta_negAdcSampPedRaw;
   Double_t        H_cal_3ta_negAdcSampPedRaw[1];   //[Ndata.H.cal.3ta.negAdcSampPedRaw]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseAmp;
   Double_t        H_cal_3ta_negAdcSampPulseAmp[1];   //[Ndata.H.cal.3ta.negAdcSampPulseAmp]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseAmpRaw;
   Double_t        H_cal_3ta_negAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.3ta.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseInt;
   Double_t        H_cal_3ta_negAdcSampPulseInt[1];   //[Ndata.H.cal.3ta.negAdcSampPulseInt]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseIntRaw;
   Double_t        H_cal_3ta_negAdcSampPulseIntRaw[1];   //[Ndata.H.cal.3ta.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseTime;
   Double_t        H_cal_3ta_negAdcSampPulseTime[1];   //[Ndata.H.cal.3ta.negAdcSampPulseTime]
   Int_t           Ndata_H_cal_3ta_negAdcSampPulseTimeRaw;
   Double_t        H_cal_3ta_negAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.3ta.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_3ta_numGoodNegAdcHits;
   Double_t        H_cal_3ta_numGoodNegAdcHits[13];   //[Ndata.H.cal.3ta.numGoodNegAdcHits]
   Int_t           Ndata_H_cal_3ta_numGoodPosAdcHits;
   Double_t        H_cal_3ta_numGoodPosAdcHits[13];   //[Ndata.H.cal.3ta.numGoodPosAdcHits]
   Int_t           Ndata_H_cal_3ta_posAdcCounter;
   Double_t        H_cal_3ta_posAdcCounter[12];   //[Ndata.H.cal.3ta.posAdcCounter]
   Int_t           Ndata_H_cal_3ta_posAdcErrorFlag;
   Double_t        H_cal_3ta_posAdcErrorFlag[12];   //[Ndata.H.cal.3ta.posAdcErrorFlag]
   Int_t           Ndata_H_cal_3ta_posAdcPed;
   Double_t        H_cal_3ta_posAdcPed[12];   //[Ndata.H.cal.3ta.posAdcPed]
   Int_t           Ndata_H_cal_3ta_posAdcPedRaw;
   Double_t        H_cal_3ta_posAdcPedRaw[12];   //[Ndata.H.cal.3ta.posAdcPedRaw]
   Int_t           Ndata_H_cal_3ta_posAdcPulseAmp;
   Double_t        H_cal_3ta_posAdcPulseAmp[12];   //[Ndata.H.cal.3ta.posAdcPulseAmp]
   Int_t           Ndata_H_cal_3ta_posAdcPulseAmpRaw;
   Double_t        H_cal_3ta_posAdcPulseAmpRaw[12];   //[Ndata.H.cal.3ta.posAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_3ta_posAdcPulseInt;
   Double_t        H_cal_3ta_posAdcPulseInt[12];   //[Ndata.H.cal.3ta.posAdcPulseInt]
   Int_t           Ndata_H_cal_3ta_posAdcPulseIntRaw;
   Double_t        H_cal_3ta_posAdcPulseIntRaw[12];   //[Ndata.H.cal.3ta.posAdcPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_posAdcPulseTime;
   Double_t        H_cal_3ta_posAdcPulseTime[12];   //[Ndata.H.cal.3ta.posAdcPulseTime]
   Int_t           Ndata_H_cal_3ta_posAdcPulseTimeRaw;
   Double_t        H_cal_3ta_posAdcPulseTimeRaw[12];   //[Ndata.H.cal.3ta.posAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_3ta_posAdcSampPed;
   Double_t        H_cal_3ta_posAdcSampPed[3];   //[Ndata.H.cal.3ta.posAdcSampPed]
   Int_t           Ndata_H_cal_3ta_posAdcSampPedRaw;
   Double_t        H_cal_3ta_posAdcSampPedRaw[3];   //[Ndata.H.cal.3ta.posAdcSampPedRaw]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseAmp;
   Double_t        H_cal_3ta_posAdcSampPulseAmp[3];   //[Ndata.H.cal.3ta.posAdcSampPulseAmp]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseAmpRaw;
   Double_t        H_cal_3ta_posAdcSampPulseAmpRaw[3];   //[Ndata.H.cal.3ta.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseInt;
   Double_t        H_cal_3ta_posAdcSampPulseInt[3];   //[Ndata.H.cal.3ta.posAdcSampPulseInt]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseIntRaw;
   Double_t        H_cal_3ta_posAdcSampPulseIntRaw[3];   //[Ndata.H.cal.3ta.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseTime;
   Double_t        H_cal_3ta_posAdcSampPulseTime[3];   //[Ndata.H.cal.3ta.posAdcSampPulseTime]
   Int_t           Ndata_H_cal_3ta_posAdcSampPulseTimeRaw;
   Double_t        H_cal_3ta_posAdcSampPulseTimeRaw[3];   //[Ndata.H.cal.3ta.posAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_4ta_emean;
   Double_t        H_cal_4ta_emean[13];   //[Ndata.H.cal.4ta.emean]
   Int_t           Ndata_H_cal_4ta_eneg;
   Double_t        H_cal_4ta_eneg[13];   //[Ndata.H.cal.4ta.eneg]
   Int_t           Ndata_H_cal_4ta_epos;
   Double_t        H_cal_4ta_epos[13];   //[Ndata.H.cal.4ta.epos]
   Int_t           Ndata_H_cal_4ta_goodNegAdcMult;
   Double_t        H_cal_4ta_goodNegAdcMult[13];   //[Ndata.H.cal.4ta.goodNegAdcMult]
   Int_t           Ndata_H_cal_4ta_goodNegAdcPed;
   Double_t        H_cal_4ta_goodNegAdcPed[13];   //[Ndata.H.cal.4ta.goodNegAdcPed]
   Int_t           Ndata_H_cal_4ta_goodNegAdcPulseAmp;
   Double_t        H_cal_4ta_goodNegAdcPulseAmp[13];   //[Ndata.H.cal.4ta.goodNegAdcPulseAmp]
   Int_t           Ndata_H_cal_4ta_goodNegAdcPulseInt;
   Double_t        H_cal_4ta_goodNegAdcPulseInt[13];   //[Ndata.H.cal.4ta.goodNegAdcPulseInt]
   Int_t           Ndata_H_cal_4ta_goodNegAdcPulseIntRaw;
   Double_t        H_cal_4ta_goodNegAdcPulseIntRaw[13];   //[Ndata.H.cal.4ta.goodNegAdcPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_goodNegAdcPulseTime;
   Double_t        H_cal_4ta_goodNegAdcPulseTime[13];   //[Ndata.H.cal.4ta.goodNegAdcPulseTime]
   Int_t           Ndata_H_cal_4ta_goodNegAdcTdcDiffTime;
   Double_t        H_cal_4ta_goodNegAdcTdcDiffTime[13];   //[Ndata.H.cal.4ta.goodNegAdcTdcDiffTime]
   Int_t           Ndata_H_cal_4ta_goodPosAdcMult;
   Double_t        H_cal_4ta_goodPosAdcMult[13];   //[Ndata.H.cal.4ta.goodPosAdcMult]
   Int_t           Ndata_H_cal_4ta_goodPosAdcPed;
   Double_t        H_cal_4ta_goodPosAdcPed[13];   //[Ndata.H.cal.4ta.goodPosAdcPed]
   Int_t           Ndata_H_cal_4ta_goodPosAdcPulseAmp;
   Double_t        H_cal_4ta_goodPosAdcPulseAmp[13];   //[Ndata.H.cal.4ta.goodPosAdcPulseAmp]
   Int_t           Ndata_H_cal_4ta_goodPosAdcPulseInt;
   Double_t        H_cal_4ta_goodPosAdcPulseInt[13];   //[Ndata.H.cal.4ta.goodPosAdcPulseInt]
   Int_t           Ndata_H_cal_4ta_goodPosAdcPulseIntRaw;
   Double_t        H_cal_4ta_goodPosAdcPulseIntRaw[13];   //[Ndata.H.cal.4ta.goodPosAdcPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_goodPosAdcPulseTime;
   Double_t        H_cal_4ta_goodPosAdcPulseTime[13];   //[Ndata.H.cal.4ta.goodPosAdcPulseTime]
   Int_t           Ndata_H_cal_4ta_goodPosAdcTdcDiffTime;
   Double_t        H_cal_4ta_goodPosAdcTdcDiffTime[13];   //[Ndata.H.cal.4ta.goodPosAdcTdcDiffTime]
   Int_t           Ndata_H_cal_4ta_negAdcCounter;
   Double_t        H_cal_4ta_negAdcCounter[1];   //[Ndata.H.cal.4ta.negAdcCounter]
   Int_t           Ndata_H_cal_4ta_negAdcErrorFlag;
   Double_t        H_cal_4ta_negAdcErrorFlag[1];   //[Ndata.H.cal.4ta.negAdcErrorFlag]
   Int_t           Ndata_H_cal_4ta_negAdcPed;
   Double_t        H_cal_4ta_negAdcPed[1];   //[Ndata.H.cal.4ta.negAdcPed]
   Int_t           Ndata_H_cal_4ta_negAdcPedRaw;
   Double_t        H_cal_4ta_negAdcPedRaw[1];   //[Ndata.H.cal.4ta.negAdcPedRaw]
   Int_t           Ndata_H_cal_4ta_negAdcPulseAmp;
   Double_t        H_cal_4ta_negAdcPulseAmp[1];   //[Ndata.H.cal.4ta.negAdcPulseAmp]
   Int_t           Ndata_H_cal_4ta_negAdcPulseAmpRaw;
   Double_t        H_cal_4ta_negAdcPulseAmpRaw[1];   //[Ndata.H.cal.4ta.negAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_4ta_negAdcPulseInt;
   Double_t        H_cal_4ta_negAdcPulseInt[1];   //[Ndata.H.cal.4ta.negAdcPulseInt]
   Int_t           Ndata_H_cal_4ta_negAdcPulseIntRaw;
   Double_t        H_cal_4ta_negAdcPulseIntRaw[1];   //[Ndata.H.cal.4ta.negAdcPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_negAdcPulseTime;
   Double_t        H_cal_4ta_negAdcPulseTime[1];   //[Ndata.H.cal.4ta.negAdcPulseTime]
   Int_t           Ndata_H_cal_4ta_negAdcPulseTimeRaw;
   Double_t        H_cal_4ta_negAdcPulseTimeRaw[1];   //[Ndata.H.cal.4ta.negAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_4ta_negAdcSampPed;
   Double_t        H_cal_4ta_negAdcSampPed[1];   //[Ndata.H.cal.4ta.negAdcSampPed]
   Int_t           Ndata_H_cal_4ta_negAdcSampPedRaw;
   Double_t        H_cal_4ta_negAdcSampPedRaw[1];   //[Ndata.H.cal.4ta.negAdcSampPedRaw]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseAmp;
   Double_t        H_cal_4ta_negAdcSampPulseAmp[1];   //[Ndata.H.cal.4ta.negAdcSampPulseAmp]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseAmpRaw;
   Double_t        H_cal_4ta_negAdcSampPulseAmpRaw[1];   //[Ndata.H.cal.4ta.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseInt;
   Double_t        H_cal_4ta_negAdcSampPulseInt[1];   //[Ndata.H.cal.4ta.negAdcSampPulseInt]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseIntRaw;
   Double_t        H_cal_4ta_negAdcSampPulseIntRaw[1];   //[Ndata.H.cal.4ta.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseTime;
   Double_t        H_cal_4ta_negAdcSampPulseTime[1];   //[Ndata.H.cal.4ta.negAdcSampPulseTime]
   Int_t           Ndata_H_cal_4ta_negAdcSampPulseTimeRaw;
   Double_t        H_cal_4ta_negAdcSampPulseTimeRaw[1];   //[Ndata.H.cal.4ta.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cal_4ta_numGoodNegAdcHits;
   Double_t        H_cal_4ta_numGoodNegAdcHits[13];   //[Ndata.H.cal.4ta.numGoodNegAdcHits]
   Int_t           Ndata_H_cal_4ta_numGoodPosAdcHits;
   Double_t        H_cal_4ta_numGoodPosAdcHits[13];   //[Ndata.H.cal.4ta.numGoodPosAdcHits]
   Int_t           Ndata_H_cal_4ta_posAdcCounter;
   Double_t        H_cal_4ta_posAdcCounter[12];   //[Ndata.H.cal.4ta.posAdcCounter]
   Int_t           Ndata_H_cal_4ta_posAdcErrorFlag;
   Double_t        H_cal_4ta_posAdcErrorFlag[12];   //[Ndata.H.cal.4ta.posAdcErrorFlag]
   Int_t           Ndata_H_cal_4ta_posAdcPed;
   Double_t        H_cal_4ta_posAdcPed[12];   //[Ndata.H.cal.4ta.posAdcPed]
   Int_t           Ndata_H_cal_4ta_posAdcPedRaw;
   Double_t        H_cal_4ta_posAdcPedRaw[12];   //[Ndata.H.cal.4ta.posAdcPedRaw]
   Int_t           Ndata_H_cal_4ta_posAdcPulseAmp;
   Double_t        H_cal_4ta_posAdcPulseAmp[12];   //[Ndata.H.cal.4ta.posAdcPulseAmp]
   Int_t           Ndata_H_cal_4ta_posAdcPulseAmpRaw;
   Double_t        H_cal_4ta_posAdcPulseAmpRaw[12];   //[Ndata.H.cal.4ta.posAdcPulseAmpRaw]
   Int_t           Ndata_H_cal_4ta_posAdcPulseInt;
   Double_t        H_cal_4ta_posAdcPulseInt[12];   //[Ndata.H.cal.4ta.posAdcPulseInt]
   Int_t           Ndata_H_cal_4ta_posAdcPulseIntRaw;
   Double_t        H_cal_4ta_posAdcPulseIntRaw[12];   //[Ndata.H.cal.4ta.posAdcPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_posAdcPulseTime;
   Double_t        H_cal_4ta_posAdcPulseTime[12];   //[Ndata.H.cal.4ta.posAdcPulseTime]
   Int_t           Ndata_H_cal_4ta_posAdcPulseTimeRaw;
   Double_t        H_cal_4ta_posAdcPulseTimeRaw[12];   //[Ndata.H.cal.4ta.posAdcPulseTimeRaw]
   Int_t           Ndata_H_cal_4ta_posAdcSampPed;
   Double_t        H_cal_4ta_posAdcSampPed[12];   //[Ndata.H.cal.4ta.posAdcSampPed]
   Int_t           Ndata_H_cal_4ta_posAdcSampPedRaw;
   Double_t        H_cal_4ta_posAdcSampPedRaw[12];   //[Ndata.H.cal.4ta.posAdcSampPedRaw]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseAmp;
   Double_t        H_cal_4ta_posAdcSampPulseAmp[12];   //[Ndata.H.cal.4ta.posAdcSampPulseAmp]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseAmpRaw;
   Double_t        H_cal_4ta_posAdcSampPulseAmpRaw[12];   //[Ndata.H.cal.4ta.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseInt;
   Double_t        H_cal_4ta_posAdcSampPulseInt[12];   //[Ndata.H.cal.4ta.posAdcSampPulseInt]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseIntRaw;
   Double_t        H_cal_4ta_posAdcSampPulseIntRaw[12];   //[Ndata.H.cal.4ta.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseTime;
   Double_t        H_cal_4ta_posAdcSampPulseTime[12];   //[Ndata.H.cal.4ta.posAdcSampPulseTime]
   Int_t           Ndata_H_cal_4ta_posAdcSampPulseTimeRaw;
   Double_t        H_cal_4ta_posAdcSampPulseTimeRaw[12];   //[Ndata.H.cal.4ta.posAdcSampPulseTimeRaw]
   Int_t           Ndata_H_cer_adcCounter;
   Double_t        H_cer_adcCounter[6];   //[Ndata.H.cer.adcCounter]
   Int_t           Ndata_H_cer_adcErrorFlag;
   Double_t        H_cer_adcErrorFlag[6];   //[Ndata.H.cer.adcErrorFlag]
   Int_t           Ndata_H_cer_adcPed;
   Double_t        H_cer_adcPed[6];   //[Ndata.H.cer.adcPed]
   Int_t           Ndata_H_cer_adcPedRaw;
   Double_t        H_cer_adcPedRaw[6];   //[Ndata.H.cer.adcPedRaw]
   Int_t           Ndata_H_cer_adcPulseAmp;
   Double_t        H_cer_adcPulseAmp[6];   //[Ndata.H.cer.adcPulseAmp]
   Int_t           Ndata_H_cer_adcPulseAmpRaw;
   Double_t        H_cer_adcPulseAmpRaw[6];   //[Ndata.H.cer.adcPulseAmpRaw]
   Int_t           Ndata_H_cer_adcPulseInt;
   Double_t        H_cer_adcPulseInt[6];   //[Ndata.H.cer.adcPulseInt]
   Int_t           Ndata_H_cer_adcPulseIntRaw;
   Double_t        H_cer_adcPulseIntRaw[6];   //[Ndata.H.cer.adcPulseIntRaw]
   Int_t           Ndata_H_cer_adcPulseTime;
   Double_t        H_cer_adcPulseTime[6];   //[Ndata.H.cer.adcPulseTime]
   Int_t           Ndata_H_cer_adcPulseTimeRaw;
   Double_t        H_cer_adcPulseTimeRaw[6];   //[Ndata.H.cer.adcPulseTimeRaw]
   Int_t           Ndata_H_cer_adcSampPed;
   Double_t        H_cer_adcSampPed[6];   //[Ndata.H.cer.adcSampPed]
   Int_t           Ndata_H_cer_adcSampPedRaw;
   Double_t        H_cer_adcSampPedRaw[6];   //[Ndata.H.cer.adcSampPedRaw]
   Int_t           Ndata_H_cer_adcSampPulseAmp;
   Double_t        H_cer_adcSampPulseAmp[6];   //[Ndata.H.cer.adcSampPulseAmp]
   Int_t           Ndata_H_cer_adcSampPulseAmpRaw;
   Double_t        H_cer_adcSampPulseAmpRaw[6];   //[Ndata.H.cer.adcSampPulseAmpRaw]
   Int_t           Ndata_H_cer_adcSampPulseInt;
   Double_t        H_cer_adcSampPulseInt[6];   //[Ndata.H.cer.adcSampPulseInt]
   Int_t           Ndata_H_cer_adcSampPulseIntRaw;
   Double_t        H_cer_adcSampPulseIntRaw[6];   //[Ndata.H.cer.adcSampPulseIntRaw]
   Int_t           Ndata_H_cer_adcSampPulseTime;
   Double_t        H_cer_adcSampPulseTime[6];   //[Ndata.H.cer.adcSampPulseTime]
   Int_t           Ndata_H_cer_adcSampPulseTimeRaw;
   Double_t        H_cer_adcSampPulseTimeRaw[6];   //[Ndata.H.cer.adcSampPulseTimeRaw]
   Int_t           Ndata_H_cer_adcSampleCounter;
   Double_t        H_cer_adcSampleCounter[6];   //[Ndata.H.cer.adcSampleCounter]
   Int_t           Ndata_H_cer_goodAdcHitUsed;
   Double_t        H_cer_goodAdcHitUsed[4];   //[Ndata.H.cer.goodAdcHitUsed]
   Int_t           Ndata_H_cer_goodAdcMult;
   Double_t        H_cer_goodAdcMult[4];   //[Ndata.H.cer.goodAdcMult]
   Int_t           Ndata_H_cer_goodAdcPed;
   Double_t        H_cer_goodAdcPed[4];   //[Ndata.H.cer.goodAdcPed]
   Int_t           Ndata_H_cer_goodAdcPulseAmp;
   Double_t        H_cer_goodAdcPulseAmp[4];   //[Ndata.H.cer.goodAdcPulseAmp]
   Int_t           Ndata_H_cer_goodAdcPulseInt;
   Double_t        H_cer_goodAdcPulseInt[4];   //[Ndata.H.cer.goodAdcPulseInt]
   Int_t           Ndata_H_cer_goodAdcPulseIntRaw;
   Double_t        H_cer_goodAdcPulseIntRaw[4];   //[Ndata.H.cer.goodAdcPulseIntRaw]
   Int_t           Ndata_H_cer_goodAdcPulseTime;
   Double_t        H_cer_goodAdcPulseTime[4];   //[Ndata.H.cer.goodAdcPulseTime]
   Int_t           Ndata_H_cer_goodAdcTdcDiffTime;
   Double_t        H_cer_goodAdcTdcDiffTime[4];   //[Ndata.H.cer.goodAdcTdcDiffTime]
   Int_t           Ndata_H_cer_npe;
   Double_t        H_cer_npe[4];   //[Ndata.H.cer.npe]
   Int_t           Ndata_H_cer_numAdcHits;
   Double_t        H_cer_numAdcHits[4];   //[Ndata.H.cer.numAdcHits]
   Int_t           Ndata_H_cer_numGoodAdcHits;
   Double_t        H_cer_numGoodAdcHits[4];   //[Ndata.H.cer.numGoodAdcHits]
   Int_t           Ndata_H_cer_numTracksFired;
   Double_t        H_cer_numTracksFired[4];   //[Ndata.H.cer.numTracksFired]
   Int_t           Ndata_H_cer_numTracksMatched;
   Double_t        H_cer_numTracksMatched[4];   //[Ndata.H.cer.numTracksMatched]
   Int_t           Ndata_H_dc_1u1_dist;
   Double_t        H_dc_1u1_dist[37];   //[Ndata.H.dc.1u1.dist]
   Int_t           Ndata_H_dc_1u1_pos;
   Double_t        H_dc_1u1_pos[37];   //[Ndata.H.dc.1u1.pos]
   Int_t           Ndata_H_dc_1u1_raw_wirenum;
   Double_t        H_dc_1u1_raw_wirenum[39];   //[Ndata.H.dc.1u1.raw.wirenum]
   Int_t           Ndata_H_dc_1u1_rawnorefcorrtdc;
   Double_t        H_dc_1u1_rawnorefcorrtdc[37];   //[Ndata.H.dc.1u1.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_1u1_rawtdc;
   Double_t        H_dc_1u1_rawtdc[37];   //[Ndata.H.dc.1u1.rawtdc]
   Int_t           Ndata_H_dc_1u1_time;
   Double_t        H_dc_1u1_time[37];   //[Ndata.H.dc.1u1.time]
   Int_t           Ndata_H_dc_1u1_wirenum;
   Double_t        H_dc_1u1_wirenum[37];   //[Ndata.H.dc.1u1.wirenum]
   Int_t           Ndata_H_dc_1u2_dist;
   Double_t        H_dc_1u2_dist[33];   //[Ndata.H.dc.1u2.dist]
   Int_t           Ndata_H_dc_1u2_pos;
   Double_t        H_dc_1u2_pos[33];   //[Ndata.H.dc.1u2.pos]
   Int_t           Ndata_H_dc_1u2_raw_wirenum;
   Double_t        H_dc_1u2_raw_wirenum[73];   //[Ndata.H.dc.1u2.raw.wirenum]
   Int_t           Ndata_H_dc_1u2_rawnorefcorrtdc;
   Double_t        H_dc_1u2_rawnorefcorrtdc[33];   //[Ndata.H.dc.1u2.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_1u2_rawtdc;
   Double_t        H_dc_1u2_rawtdc[33];   //[Ndata.H.dc.1u2.rawtdc]
   Int_t           Ndata_H_dc_1u2_time;
   Double_t        H_dc_1u2_time[33];   //[Ndata.H.dc.1u2.time]
   Int_t           Ndata_H_dc_1u2_wirenum;
   Double_t        H_dc_1u2_wirenum[33];   //[Ndata.H.dc.1u2.wirenum]
   Int_t           Ndata_H_dc_1v1_dist;
   Double_t        H_dc_1v1_dist[30];   //[Ndata.H.dc.1v1.dist]
   Int_t           Ndata_H_dc_1v1_pos;
   Double_t        H_dc_1v1_pos[30];   //[Ndata.H.dc.1v1.pos]
   Int_t           Ndata_H_dc_1v1_raw_wirenum;
   Double_t        H_dc_1v1_raw_wirenum[40];   //[Ndata.H.dc.1v1.raw.wirenum]
   Int_t           Ndata_H_dc_1v1_rawnorefcorrtdc;
   Double_t        H_dc_1v1_rawnorefcorrtdc[30];   //[Ndata.H.dc.1v1.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_1v1_rawtdc;
   Double_t        H_dc_1v1_rawtdc[30];   //[Ndata.H.dc.1v1.rawtdc]
   Int_t           Ndata_H_dc_1v1_time;
   Double_t        H_dc_1v1_time[30];   //[Ndata.H.dc.1v1.time]
   Int_t           Ndata_H_dc_1v1_wirenum;
   Double_t        H_dc_1v1_wirenum[30];   //[Ndata.H.dc.1v1.wirenum]
   Int_t           Ndata_H_dc_1v2_dist;
   Double_t        H_dc_1v2_dist[45];   //[Ndata.H.dc.1v2.dist]
   Int_t           Ndata_H_dc_1v2_pos;
   Double_t        H_dc_1v2_pos[45];   //[Ndata.H.dc.1v2.pos]
   Int_t           Ndata_H_dc_1v2_raw_wirenum;
   Double_t        H_dc_1v2_raw_wirenum[52];   //[Ndata.H.dc.1v2.raw.wirenum]
   Int_t           Ndata_H_dc_1v2_rawnorefcorrtdc;
   Double_t        H_dc_1v2_rawnorefcorrtdc[45];   //[Ndata.H.dc.1v2.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_1v2_rawtdc;
   Double_t        H_dc_1v2_rawtdc[45];   //[Ndata.H.dc.1v2.rawtdc]
   Int_t           Ndata_H_dc_1v2_time;
   Double_t        H_dc_1v2_time[45];   //[Ndata.H.dc.1v2.time]
   Int_t           Ndata_H_dc_1v2_wirenum;
   Double_t        H_dc_1v2_wirenum[45];   //[Ndata.H.dc.1v2.wirenum]
   Int_t           Ndata_H_dc_1x1_dist;
   Double_t        H_dc_1x1_dist[32];   //[Ndata.H.dc.1x1.dist]
   Int_t           Ndata_H_dc_1x1_pos;
   Double_t        H_dc_1x1_pos[32];   //[Ndata.H.dc.1x1.pos]
   Int_t           Ndata_H_dc_1x1_raw_wirenum;
   Double_t        H_dc_1x1_raw_wirenum[35];   //[Ndata.H.dc.1x1.raw.wirenum]
   Int_t           Ndata_H_dc_1x1_rawnorefcorrtdc;
   Double_t        H_dc_1x1_rawnorefcorrtdc[32];   //[Ndata.H.dc.1x1.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_1x1_rawtdc;
   Double_t        H_dc_1x1_rawtdc[32];   //[Ndata.H.dc.1x1.rawtdc]
   Int_t           Ndata_H_dc_1x1_time;
   Double_t        H_dc_1x1_time[32];   //[Ndata.H.dc.1x1.time]
   Int_t           Ndata_H_dc_1x1_wirenum;
   Double_t        H_dc_1x1_wirenum[32];   //[Ndata.H.dc.1x1.wirenum]
   Int_t           Ndata_H_dc_1x2_dist;
   Double_t        H_dc_1x2_dist[34];   //[Ndata.H.dc.1x2.dist]
   Int_t           Ndata_H_dc_1x2_pos;
   Double_t        H_dc_1x2_pos[34];   //[Ndata.H.dc.1x2.pos]
   Int_t           Ndata_H_dc_1x2_raw_wirenum;
   Double_t        H_dc_1x2_raw_wirenum[37];   //[Ndata.H.dc.1x2.raw.wirenum]
   Int_t           Ndata_H_dc_1x2_rawnorefcorrtdc;
   Double_t        H_dc_1x2_rawnorefcorrtdc[34];   //[Ndata.H.dc.1x2.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_1x2_rawtdc;
   Double_t        H_dc_1x2_rawtdc[34];   //[Ndata.H.dc.1x2.rawtdc]
   Int_t           Ndata_H_dc_1x2_time;
   Double_t        H_dc_1x2_time[34];   //[Ndata.H.dc.1x2.time]
   Int_t           Ndata_H_dc_1x2_wirenum;
   Double_t        H_dc_1x2_wirenum[34];   //[Ndata.H.dc.1x2.wirenum]
   Int_t           Ndata_H_dc_2u1_dist;
   Double_t        H_dc_2u1_dist[28];   //[Ndata.H.dc.2u1.dist]
   Int_t           Ndata_H_dc_2u1_pos;
   Double_t        H_dc_2u1_pos[28];   //[Ndata.H.dc.2u1.pos]
   Int_t           Ndata_H_dc_2u1_raw_wirenum;
   Double_t        H_dc_2u1_raw_wirenum[31];   //[Ndata.H.dc.2u1.raw.wirenum]
   Int_t           Ndata_H_dc_2u1_rawnorefcorrtdc;
   Double_t        H_dc_2u1_rawnorefcorrtdc[28];   //[Ndata.H.dc.2u1.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_2u1_rawtdc;
   Double_t        H_dc_2u1_rawtdc[28];   //[Ndata.H.dc.2u1.rawtdc]
   Int_t           Ndata_H_dc_2u1_time;
   Double_t        H_dc_2u1_time[28];   //[Ndata.H.dc.2u1.time]
   Int_t           Ndata_H_dc_2u1_wirenum;
   Double_t        H_dc_2u1_wirenum[28];   //[Ndata.H.dc.2u1.wirenum]
   Int_t           Ndata_H_dc_2u2_dist;
   Double_t        H_dc_2u2_dist[34];   //[Ndata.H.dc.2u2.dist]
   Int_t           Ndata_H_dc_2u2_pos;
   Double_t        H_dc_2u2_pos[34];   //[Ndata.H.dc.2u2.pos]
   Int_t           Ndata_H_dc_2u2_raw_wirenum;
   Double_t        H_dc_2u2_raw_wirenum[40];   //[Ndata.H.dc.2u2.raw.wirenum]
   Int_t           Ndata_H_dc_2u2_rawnorefcorrtdc;
   Double_t        H_dc_2u2_rawnorefcorrtdc[34];   //[Ndata.H.dc.2u2.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_2u2_rawtdc;
   Double_t        H_dc_2u2_rawtdc[34];   //[Ndata.H.dc.2u2.rawtdc]
   Int_t           Ndata_H_dc_2u2_time;
   Double_t        H_dc_2u2_time[34];   //[Ndata.H.dc.2u2.time]
   Int_t           Ndata_H_dc_2u2_wirenum;
   Double_t        H_dc_2u2_wirenum[34];   //[Ndata.H.dc.2u2.wirenum]
   Int_t           Ndata_H_dc_2v1_dist;
   Double_t        H_dc_2v1_dist[36];   //[Ndata.H.dc.2v1.dist]
   Int_t           Ndata_H_dc_2v1_pos;
   Double_t        H_dc_2v1_pos[36];   //[Ndata.H.dc.2v1.pos]
   Int_t           Ndata_H_dc_2v1_raw_wirenum;
   Double_t        H_dc_2v1_raw_wirenum[36];   //[Ndata.H.dc.2v1.raw.wirenum]
   Int_t           Ndata_H_dc_2v1_rawnorefcorrtdc;
   Double_t        H_dc_2v1_rawnorefcorrtdc[36];   //[Ndata.H.dc.2v1.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_2v1_rawtdc;
   Double_t        H_dc_2v1_rawtdc[36];   //[Ndata.H.dc.2v1.rawtdc]
   Int_t           Ndata_H_dc_2v1_time;
   Double_t        H_dc_2v1_time[36];   //[Ndata.H.dc.2v1.time]
   Int_t           Ndata_H_dc_2v1_wirenum;
   Double_t        H_dc_2v1_wirenum[36];   //[Ndata.H.dc.2v1.wirenum]
   Int_t           Ndata_H_dc_2v2_dist;
   Double_t        H_dc_2v2_dist[26];   //[Ndata.H.dc.2v2.dist]
   Int_t           Ndata_H_dc_2v2_pos;
   Double_t        H_dc_2v2_pos[26];   //[Ndata.H.dc.2v2.pos]
   Int_t           Ndata_H_dc_2v2_raw_wirenum;
   Double_t        H_dc_2v2_raw_wirenum[29];   //[Ndata.H.dc.2v2.raw.wirenum]
   Int_t           Ndata_H_dc_2v2_rawnorefcorrtdc;
   Double_t        H_dc_2v2_rawnorefcorrtdc[26];   //[Ndata.H.dc.2v2.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_2v2_rawtdc;
   Double_t        H_dc_2v2_rawtdc[26];   //[Ndata.H.dc.2v2.rawtdc]
   Int_t           Ndata_H_dc_2v2_time;
   Double_t        H_dc_2v2_time[26];   //[Ndata.H.dc.2v2.time]
   Int_t           Ndata_H_dc_2v2_wirenum;
   Double_t        H_dc_2v2_wirenum[26];   //[Ndata.H.dc.2v2.wirenum]
   Int_t           Ndata_H_dc_2x1_dist;
   Double_t        H_dc_2x1_dist[59];   //[Ndata.H.dc.2x1.dist]
   Int_t           Ndata_H_dc_2x1_pos;
   Double_t        H_dc_2x1_pos[59];   //[Ndata.H.dc.2x1.pos]
   Int_t           Ndata_H_dc_2x1_raw_wirenum;
   Double_t        H_dc_2x1_raw_wirenum[63];   //[Ndata.H.dc.2x1.raw.wirenum]
   Int_t           Ndata_H_dc_2x1_rawnorefcorrtdc;
   Double_t        H_dc_2x1_rawnorefcorrtdc[59];   //[Ndata.H.dc.2x1.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_2x1_rawtdc;
   Double_t        H_dc_2x1_rawtdc[59];   //[Ndata.H.dc.2x1.rawtdc]
   Int_t           Ndata_H_dc_2x1_time;
   Double_t        H_dc_2x1_time[59];   //[Ndata.H.dc.2x1.time]
   Int_t           Ndata_H_dc_2x1_wirenum;
   Double_t        H_dc_2x1_wirenum[59];   //[Ndata.H.dc.2x1.wirenum]
   Int_t           Ndata_H_dc_2x2_dist;
   Double_t        H_dc_2x2_dist[63];   //[Ndata.H.dc.2x2.dist]
   Int_t           Ndata_H_dc_2x2_pos;
   Double_t        H_dc_2x2_pos[63];   //[Ndata.H.dc.2x2.pos]
   Int_t           Ndata_H_dc_2x2_raw_wirenum;
   Double_t        H_dc_2x2_raw_wirenum[67];   //[Ndata.H.dc.2x2.raw.wirenum]
   Int_t           Ndata_H_dc_2x2_rawnorefcorrtdc;
   Double_t        H_dc_2x2_rawnorefcorrtdc[63];   //[Ndata.H.dc.2x2.rawnorefcorrtdc]
   Int_t           Ndata_H_dc_2x2_rawtdc;
   Double_t        H_dc_2x2_rawtdc[63];   //[Ndata.H.dc.2x2.rawtdc]
   Int_t           Ndata_H_dc_2x2_time;
   Double_t        H_dc_2x2_time[63];   //[Ndata.H.dc.2x2.time]
   Int_t           Ndata_H_dc_2x2_wirenum;
   Double_t        H_dc_2x2_wirenum[63];   //[Ndata.H.dc.2x2.wirenum]
   Int_t           Ndata_H_dc_Ch1_UX_posx;
   Double_t        H_dc_Ch1_UX_posx[1];   //[Ndata.H.dc.Ch1.UX_posx]
   Int_t           Ndata_H_dc_Ch1_UX_posy;
   Double_t        H_dc_Ch1_UX_posy[1];   //[Ndata.H.dc.Ch1.UX_posy]
   Int_t           Ndata_H_dc_Ch1_U_pos;
   Double_t        H_dc_Ch1_U_pos[1];   //[Ndata.H.dc.Ch1.U_pos]
   Int_t           Ndata_H_dc_Ch1_VX_posx;
   Double_t        H_dc_Ch1_VX_posx[1];   //[Ndata.H.dc.Ch1.VX_posx]
   Int_t           Ndata_H_dc_Ch1_VX_posy;
   Double_t        H_dc_Ch1_VX_posy[1];   //[Ndata.H.dc.Ch1.VX_posy]
   Int_t           Ndata_H_dc_Ch1_V_pos;
   Double_t        H_dc_Ch1_V_pos[1];   //[Ndata.H.dc.Ch1.V_pos]
   Int_t           Ndata_H_dc_Ch1_X_pos;
   Double_t        H_dc_Ch1_X_pos[1];   //[Ndata.H.dc.Ch1.X_pos]
   Int_t           Ndata_H_dc_Ch1_ncombos;
   Double_t        H_dc_Ch1_ncombos[80];   //[Ndata.H.dc.Ch1.ncombos]
   Int_t           Ndata_H_dc_Ch1_sp_nhits;
   Double_t        H_dc_Ch1_sp_nhits[80];   //[Ndata.H.dc.Ch1.sp_nhits]
   Int_t           Ndata_H_dc_Ch1_sphit;
   Double_t        H_dc_Ch1_sphit[15];   //[Ndata.H.dc.Ch1.sphit]
   Int_t           Ndata_H_dc_Ch1_sphit_index;
   Double_t        H_dc_Ch1_sphit_index[85];   //[Ndata.H.dc.Ch1.sphit_index]
   Int_t           Ndata_H_dc_Ch1_stub_x;
   Double_t        H_dc_Ch1_stub_x[80];   //[Ndata.H.dc.Ch1.stub_x]
   Int_t           Ndata_H_dc_Ch1_stub_xp;
   Double_t        H_dc_Ch1_stub_xp[80];   //[Ndata.H.dc.Ch1.stub_xp]
   Int_t           Ndata_H_dc_Ch1_stub_y;
   Double_t        H_dc_Ch1_stub_y[80];   //[Ndata.H.dc.Ch1.stub_y]
   Int_t           Ndata_H_dc_Ch1_stub_yp;
   Double_t        H_dc_Ch1_stub_yp[80];   //[Ndata.H.dc.Ch1.stub_yp]
   Int_t           Ndata_H_dc_Ch2_UX_posx;
   Double_t        H_dc_Ch2_UX_posx[1];   //[Ndata.H.dc.Ch2.UX_posx]
   Int_t           Ndata_H_dc_Ch2_UX_posy;
   Double_t        H_dc_Ch2_UX_posy[1];   //[Ndata.H.dc.Ch2.UX_posy]
   Int_t           Ndata_H_dc_Ch2_U_pos;
   Double_t        H_dc_Ch2_U_pos[1];   //[Ndata.H.dc.Ch2.U_pos]
   Int_t           Ndata_H_dc_Ch2_VX_posx;
   Double_t        H_dc_Ch2_VX_posx[1];   //[Ndata.H.dc.Ch2.VX_posx]
   Int_t           Ndata_H_dc_Ch2_VX_posy;
   Double_t        H_dc_Ch2_VX_posy[1];   //[Ndata.H.dc.Ch2.VX_posy]
   Int_t           Ndata_H_dc_Ch2_V_pos;
   Double_t        H_dc_Ch2_V_pos[1];   //[Ndata.H.dc.Ch2.V_pos]
   Int_t           Ndata_H_dc_Ch2_X_pos;
   Double_t        H_dc_Ch2_X_pos[1];   //[Ndata.H.dc.Ch2.X_pos]
   Int_t           Ndata_H_dc_Ch2_ncombos;
   Double_t        H_dc_Ch2_ncombos[82];   //[Ndata.H.dc.Ch2.ncombos]
   Int_t           Ndata_H_dc_Ch2_sp_nhits;
   Double_t        H_dc_Ch2_sp_nhits[82];   //[Ndata.H.dc.Ch2.sp_nhits]
   Int_t           Ndata_H_dc_Ch2_sphit;
   Double_t        H_dc_Ch2_sphit[14];   //[Ndata.H.dc.Ch2.sphit]
   Int_t           Ndata_H_dc_Ch2_sphit_index;
   Double_t        H_dc_Ch2_sphit_index[79];   //[Ndata.H.dc.Ch2.sphit_index]
   Int_t           Ndata_H_dc_Ch2_stub_x;
   Double_t        H_dc_Ch2_stub_x[82];   //[Ndata.H.dc.Ch2.stub_x]
   Int_t           Ndata_H_dc_Ch2_stub_xp;
   Double_t        H_dc_Ch2_stub_xp[82];   //[Ndata.H.dc.Ch2.stub_xp]
   Int_t           Ndata_H_dc_Ch2_stub_y;
   Double_t        H_dc_Ch2_stub_y[82];   //[Ndata.H.dc.Ch2.stub_y]
   Int_t           Ndata_H_dc_Ch2_stub_yp;
   Double_t        H_dc_Ch2_stub_yp[82];   //[Ndata.H.dc.Ch2.stub_yp]
   Int_t           Ndata_H_dc_dist_best;
   Double_t        H_dc_dist_best[12];   //[Ndata.H.dc.dist_best]
   Int_t           Ndata_H_dc_lr_best;
   Double_t        H_dc_lr_best[12];   //[Ndata.H.dc.lr_best]
   Int_t           Ndata_H_dc_pos_best;
   Double_t        H_dc_pos_best[12];   //[Ndata.H.dc.pos_best]
   Int_t           Ndata_H_dc_residual;
   Double_t        H_dc_residual[12];   //[Ndata.H.dc.residual]
   Int_t           Ndata_H_dc_residualExclPlane;
   Double_t        H_dc_residualExclPlane[12];   //[Ndata.H.dc.residualExclPlane]
   Int_t           Ndata_H_dc_track_chisq;
   Double_t        H_dc_track_chisq[100];   //[Ndata.H.dc.track_chisq]
   Int_t           Ndata_H_dc_track_nhits;
   Double_t        H_dc_track_nhits[100];   //[Ndata.H.dc.track_nhits]
   Int_t           Ndata_H_dc_track_nsp;
   Double_t        H_dc_track_nsp[100];   //[Ndata.H.dc.track_nsp]
   Int_t           Ndata_H_dc_track_sp1ID;
   Double_t        H_dc_track_sp1ID[100];   //[Ndata.H.dc.track_sp1ID]
   Int_t           Ndata_H_dc_track_sp2ID;
   Double_t        H_dc_track_sp2ID[100];   //[Ndata.H.dc.track_sp2ID]
   Int_t           Ndata_H_dc_wireHitDid;
   Double_t        H_dc_wireHitDid[12];   //[Ndata.H.dc.wireHitDid]
   Int_t           Ndata_H_dc_wireHitShould;
   Double_t        H_dc_wireHitShould[12];   //[Ndata.H.dc.wireHitShould]
   Int_t           Ndata_H_dc_x;
   Double_t        H_dc_x[100];   //[Ndata.H.dc.x]
   Int_t           Ndata_H_dc_xp;
   Double_t        H_dc_xp[100];   //[Ndata.H.dc.xp]
   Int_t           Ndata_H_dc_y;
   Double_t        H_dc_y[100];   //[Ndata.H.dc.y]
   Int_t           Ndata_H_dc_yp;
   Double_t        H_dc_yp[100];   //[Ndata.H.dc.yp]
   Int_t           Ndata_H_hod_1x_Clus_Flag;
   Double_t        H_hod_1x_Clus_Flag[5];   //[Ndata.H.hod.1x.Clus.Flag]
   Int_t           Ndata_H_hod_1x_Clus_Pos;
   Double_t        H_hod_1x_Clus_Pos[5];   //[Ndata.H.hod.1x.Clus.Pos]
   Int_t           Ndata_H_hod_1x_Clus_Size;
   Double_t        H_hod_1x_Clus_Size[5];   //[Ndata.H.hod.1x.Clus.Size]
   Int_t           Ndata_H_hod_1x_Clus_UsedFlag;
   Double_t        H_hod_1x_Clus_UsedFlag[5];   //[Ndata.H.hod.1x.Clus.UsedFlag]
   Int_t           Ndata_H_hod_1x_DiffDisTrackCorr;
   Double_t        H_hod_1x_DiffDisTrackCorr[16];   //[Ndata.H.hod.1x.DiffDisTrackCorr]
   Int_t           Ndata_H_hod_1x_GoodNegAdcHitUsed;
   Double_t        H_hod_1x_GoodNegAdcHitUsed[16];   //[Ndata.H.hod.1x.GoodNegAdcHitUsed]
   Int_t           Ndata_H_hod_1x_GoodNegAdcMult;
   Double_t        H_hod_1x_GoodNegAdcMult[16];   //[Ndata.H.hod.1x.GoodNegAdcMult]
   Int_t           Ndata_H_hod_1x_GoodNegAdcPed;
   Double_t        H_hod_1x_GoodNegAdcPed[16];   //[Ndata.H.hod.1x.GoodNegAdcPed]
   Int_t           Ndata_H_hod_1x_GoodNegAdcPulseAmp;
   Double_t        H_hod_1x_GoodNegAdcPulseAmp[16];   //[Ndata.H.hod.1x.GoodNegAdcPulseAmp]
   Int_t           Ndata_H_hod_1x_GoodNegAdcPulseInt;
   Double_t        H_hod_1x_GoodNegAdcPulseInt[16];   //[Ndata.H.hod.1x.GoodNegAdcPulseInt]
   Int_t           Ndata_H_hod_1x_GoodNegAdcPulseTime;
   Double_t        H_hod_1x_GoodNegAdcPulseTime[16];   //[Ndata.H.hod.1x.GoodNegAdcPulseTime]
   Int_t           Ndata_H_hod_1x_GoodNegAdcTdcDiffTime;
   Double_t        H_hod_1x_GoodNegAdcTdcDiffTime[16];   //[Ndata.H.hod.1x.GoodNegAdcTdcDiffTime]
   Int_t           Ndata_H_hod_1x_GoodNegTdcTimeCorr;
   Double_t        H_hod_1x_GoodNegTdcTimeCorr[16];   //[Ndata.H.hod.1x.GoodNegTdcTimeCorr]
   Int_t           Ndata_H_hod_1x_GoodNegTdcTimeTOFCorr;
   Double_t        H_hod_1x_GoodNegTdcTimeTOFCorr[16];   //[Ndata.H.hod.1x.GoodNegTdcTimeTOFCorr]
   Int_t           Ndata_H_hod_1x_GoodNegTdcTimeUnCorr;
   Double_t        H_hod_1x_GoodNegTdcTimeUnCorr[16];   //[Ndata.H.hod.1x.GoodNegTdcTimeUnCorr]
   Int_t           Ndata_H_hod_1x_GoodNegTdcTimeWalkCorr;
   Double_t        H_hod_1x_GoodNegTdcTimeWalkCorr[16];   //[Ndata.H.hod.1x.GoodNegTdcTimeWalkCorr]
   Int_t           Ndata_H_hod_1x_GoodPosAdcHitUsed;
   Double_t        H_hod_1x_GoodPosAdcHitUsed[16];   //[Ndata.H.hod.1x.GoodPosAdcHitUsed]
   Int_t           Ndata_H_hod_1x_GoodPosAdcMult;
   Double_t        H_hod_1x_GoodPosAdcMult[16];   //[Ndata.H.hod.1x.GoodPosAdcMult]
   Int_t           Ndata_H_hod_1x_GoodPosAdcPed;
   Double_t        H_hod_1x_GoodPosAdcPed[16];   //[Ndata.H.hod.1x.GoodPosAdcPed]
   Int_t           Ndata_H_hod_1x_GoodPosAdcPulseAmp;
   Double_t        H_hod_1x_GoodPosAdcPulseAmp[16];   //[Ndata.H.hod.1x.GoodPosAdcPulseAmp]
   Int_t           Ndata_H_hod_1x_GoodPosAdcPulseInt;
   Double_t        H_hod_1x_GoodPosAdcPulseInt[16];   //[Ndata.H.hod.1x.GoodPosAdcPulseInt]
   Int_t           Ndata_H_hod_1x_GoodPosAdcPulseTime;
   Double_t        H_hod_1x_GoodPosAdcPulseTime[16];   //[Ndata.H.hod.1x.GoodPosAdcPulseTime]
   Int_t           Ndata_H_hod_1x_GoodPosAdcTdcDiffTime;
   Double_t        H_hod_1x_GoodPosAdcTdcDiffTime[16];   //[Ndata.H.hod.1x.GoodPosAdcTdcDiffTime]
   Int_t           Ndata_H_hod_1x_GoodPosTdcTimeCorr;
   Double_t        H_hod_1x_GoodPosTdcTimeCorr[16];   //[Ndata.H.hod.1x.GoodPosTdcTimeCorr]
   Int_t           Ndata_H_hod_1x_GoodPosTdcTimeTOFCorr;
   Double_t        H_hod_1x_GoodPosTdcTimeTOFCorr[16];   //[Ndata.H.hod.1x.GoodPosTdcTimeTOFCorr]
   Int_t           Ndata_H_hod_1x_GoodPosTdcTimeUnCorr;
   Double_t        H_hod_1x_GoodPosTdcTimeUnCorr[16];   //[Ndata.H.hod.1x.GoodPosTdcTimeUnCorr]
   Int_t           Ndata_H_hod_1x_GoodPosTdcTimeWalkCorr;
   Double_t        H_hod_1x_GoodPosTdcTimeWalkCorr[16];   //[Ndata.H.hod.1x.GoodPosTdcTimeWalkCorr]
   Int_t           Ndata_H_hod_1x_negAdcCounter;
   Double_t        H_hod_1x_negAdcCounter[47];   //[Ndata.H.hod.1x.negAdcCounter]
   Int_t           Ndata_H_hod_1x_negAdcErrorFlag;
   Double_t        H_hod_1x_negAdcErrorFlag[47];   //[Ndata.H.hod.1x.negAdcErrorFlag]
   Int_t           Ndata_H_hod_1x_negAdcPed;
   Double_t        H_hod_1x_negAdcPed[47];   //[Ndata.H.hod.1x.negAdcPed]
   Int_t           Ndata_H_hod_1x_negAdcPedRaw;
   Double_t        H_hod_1x_negAdcPedRaw[47];   //[Ndata.H.hod.1x.negAdcPedRaw]
   Int_t           Ndata_H_hod_1x_negAdcPulseAmp;
   Double_t        H_hod_1x_negAdcPulseAmp[47];   //[Ndata.H.hod.1x.negAdcPulseAmp]
   Int_t           Ndata_H_hod_1x_negAdcPulseAmpRaw;
   Double_t        H_hod_1x_negAdcPulseAmpRaw[47];   //[Ndata.H.hod.1x.negAdcPulseAmpRaw]
   Int_t           Ndata_H_hod_1x_negAdcPulseInt;
   Double_t        H_hod_1x_negAdcPulseInt[47];   //[Ndata.H.hod.1x.negAdcPulseInt]
   Int_t           Ndata_H_hod_1x_negAdcPulseIntRaw;
   Double_t        H_hod_1x_negAdcPulseIntRaw[47];   //[Ndata.H.hod.1x.negAdcPulseIntRaw]
   Int_t           Ndata_H_hod_1x_negAdcPulseTime;
   Double_t        H_hod_1x_negAdcPulseTime[47];   //[Ndata.H.hod.1x.negAdcPulseTime]
   Int_t           Ndata_H_hod_1x_negAdcPulseTimeRaw;
   Double_t        H_hod_1x_negAdcPulseTimeRaw[47];   //[Ndata.H.hod.1x.negAdcPulseTimeRaw]
   Int_t           Ndata_H_hod_1x_negAdcSampPed;
   Double_t        H_hod_1x_negAdcSampPed[1];   //[Ndata.H.hod.1x.negAdcSampPed]
   Int_t           Ndata_H_hod_1x_negAdcSampPedRaw;
   Double_t        H_hod_1x_negAdcSampPedRaw[1];   //[Ndata.H.hod.1x.negAdcSampPedRaw]
   Int_t           Ndata_H_hod_1x_negAdcSampPulseAmp;
   Double_t        H_hod_1x_negAdcSampPulseAmp[1];   //[Ndata.H.hod.1x.negAdcSampPulseAmp]
   Int_t           Ndata_H_hod_1x_negAdcSampPulseAmpRaw;
   Double_t        H_hod_1x_negAdcSampPulseAmpRaw[1];   //[Ndata.H.hod.1x.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_hod_1x_negAdcSampPulseInt;
   Double_t        H_hod_1x_negAdcSampPulseInt[1];   //[Ndata.H.hod.1x.negAdcSampPulseInt]
   Int_t           Ndata_H_hod_1x_negAdcSampPulseIntRaw;
   Double_t        H_hod_1x_negAdcSampPulseIntRaw[1];   //[Ndata.H.hod.1x.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_hod_1x_negAdcSampPulseTime;
   Double_t        H_hod_1x_negAdcSampPulseTime[1];   //[Ndata.H.hod.1x.negAdcSampPulseTime]
   Int_t           Ndata_H_hod_1x_negAdcSampPulseTimeRaw;
   Double_t        H_hod_1x_negAdcSampPulseTimeRaw[1];   //[Ndata.H.hod.1x.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_hod_1x_negTdcCounter;
   Double_t        H_hod_1x_negTdcCounter[32];   //[Ndata.H.hod.1x.negTdcCounter]
   Int_t           Ndata_H_hod_1x_negTdcTime;
   Double_t        H_hod_1x_negTdcTime[32];   //[Ndata.H.hod.1x.negTdcTime]
   Int_t           Ndata_H_hod_1x_negTdcTimeRaw;
   Double_t        H_hod_1x_negTdcTimeRaw[32];   //[Ndata.H.hod.1x.negTdcTimeRaw]
   Int_t           Ndata_H_hod_1x_numGoodNegAdcHits;
   Double_t        H_hod_1x_numGoodNegAdcHits[16];   //[Ndata.H.hod.1x.numGoodNegAdcHits]
   Int_t           Ndata_H_hod_1x_numGoodNegTdcHits;
   Double_t        H_hod_1x_numGoodNegTdcHits[16];   //[Ndata.H.hod.1x.numGoodNegTdcHits]
   Int_t           Ndata_H_hod_1x_numGoodPosAdcHits;
   Double_t        H_hod_1x_numGoodPosAdcHits[16];   //[Ndata.H.hod.1x.numGoodPosAdcHits]
   Int_t           Ndata_H_hod_1x_numGoodPosTdcHits;
   Double_t        H_hod_1x_numGoodPosTdcHits[16];   //[Ndata.H.hod.1x.numGoodPosTdcHits]
   Int_t           Ndata_H_hod_1x_posAdcCounter;
   Double_t        H_hod_1x_posAdcCounter[40];   //[Ndata.H.hod.1x.posAdcCounter]
   Int_t           Ndata_H_hod_1x_posAdcErrorFlag;
   Double_t        H_hod_1x_posAdcErrorFlag[40];   //[Ndata.H.hod.1x.posAdcErrorFlag]
   Int_t           Ndata_H_hod_1x_posAdcPed;
   Double_t        H_hod_1x_posAdcPed[40];   //[Ndata.H.hod.1x.posAdcPed]
   Int_t           Ndata_H_hod_1x_posAdcPedRaw;
   Double_t        H_hod_1x_posAdcPedRaw[40];   //[Ndata.H.hod.1x.posAdcPedRaw]
   Int_t           Ndata_H_hod_1x_posAdcPulseAmp;
   Double_t        H_hod_1x_posAdcPulseAmp[40];   //[Ndata.H.hod.1x.posAdcPulseAmp]
   Int_t           Ndata_H_hod_1x_posAdcPulseAmpRaw;
   Double_t        H_hod_1x_posAdcPulseAmpRaw[40];   //[Ndata.H.hod.1x.posAdcPulseAmpRaw]
   Int_t           Ndata_H_hod_1x_posAdcPulseInt;
   Double_t        H_hod_1x_posAdcPulseInt[40];   //[Ndata.H.hod.1x.posAdcPulseInt]
   Int_t           Ndata_H_hod_1x_posAdcPulseIntRaw;
   Double_t        H_hod_1x_posAdcPulseIntRaw[40];   //[Ndata.H.hod.1x.posAdcPulseIntRaw]
   Int_t           Ndata_H_hod_1x_posAdcPulseTime;
   Double_t        H_hod_1x_posAdcPulseTime[40];   //[Ndata.H.hod.1x.posAdcPulseTime]
   Int_t           Ndata_H_hod_1x_posAdcPulseTimeRaw;
   Double_t        H_hod_1x_posAdcPulseTimeRaw[40];   //[Ndata.H.hod.1x.posAdcPulseTimeRaw]
   Int_t           Ndata_H_hod_1x_posAdcSampPed;
   Double_t        H_hod_1x_posAdcSampPed[1];   //[Ndata.H.hod.1x.posAdcSampPed]
   Int_t           Ndata_H_hod_1x_posAdcSampPedRaw;
   Double_t        H_hod_1x_posAdcSampPedRaw[1];   //[Ndata.H.hod.1x.posAdcSampPedRaw]
   Int_t           Ndata_H_hod_1x_posAdcSampPulseAmp;
   Double_t        H_hod_1x_posAdcSampPulseAmp[1];   //[Ndata.H.hod.1x.posAdcSampPulseAmp]
   Int_t           Ndata_H_hod_1x_posAdcSampPulseAmpRaw;
   Double_t        H_hod_1x_posAdcSampPulseAmpRaw[1];   //[Ndata.H.hod.1x.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_hod_1x_posAdcSampPulseInt;
   Double_t        H_hod_1x_posAdcSampPulseInt[1];   //[Ndata.H.hod.1x.posAdcSampPulseInt]
   Int_t           Ndata_H_hod_1x_posAdcSampPulseIntRaw;
   Double_t        H_hod_1x_posAdcSampPulseIntRaw[1];   //[Ndata.H.hod.1x.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_hod_1x_posAdcSampPulseTime;
   Double_t        H_hod_1x_posAdcSampPulseTime[1];   //[Ndata.H.hod.1x.posAdcSampPulseTime]
   Int_t           Ndata_H_hod_1x_posAdcSampPulseTimeRaw;
   Double_t        H_hod_1x_posAdcSampPulseTimeRaw[1];   //[Ndata.H.hod.1x.posAdcSampPulseTimeRaw]
   Int_t           Ndata_H_hod_1x_posTdcCounter;
   Double_t        H_hod_1x_posTdcCounter[33];   //[Ndata.H.hod.1x.posTdcCounter]
   Int_t           Ndata_H_hod_1x_posTdcTime;
   Double_t        H_hod_1x_posTdcTime[33];   //[Ndata.H.hod.1x.posTdcTime]
   Int_t           Ndata_H_hod_1x_posTdcTimeRaw;
   Double_t        H_hod_1x_posTdcTimeRaw[33];   //[Ndata.H.hod.1x.posTdcTimeRaw]
   Int_t           Ndata_H_hod_1y_Clus_Flag;
   Double_t        H_hod_1y_Clus_Flag[5];   //[Ndata.H.hod.1y.Clus.Flag]
   Int_t           Ndata_H_hod_1y_Clus_Pos;
   Double_t        H_hod_1y_Clus_Pos[5];   //[Ndata.H.hod.1y.Clus.Pos]
   Int_t           Ndata_H_hod_1y_Clus_Size;
   Double_t        H_hod_1y_Clus_Size[5];   //[Ndata.H.hod.1y.Clus.Size]
   Int_t           Ndata_H_hod_1y_Clus_UsedFlag;
   Double_t        H_hod_1y_Clus_UsedFlag[5];   //[Ndata.H.hod.1y.Clus.UsedFlag]
   Int_t           Ndata_H_hod_1y_DiffDisTrackCorr;
   Double_t        H_hod_1y_DiffDisTrackCorr[10];   //[Ndata.H.hod.1y.DiffDisTrackCorr]
   Int_t           Ndata_H_hod_1y_GoodNegAdcHitUsed;
   Double_t        H_hod_1y_GoodNegAdcHitUsed[10];   //[Ndata.H.hod.1y.GoodNegAdcHitUsed]
   Int_t           Ndata_H_hod_1y_GoodNegAdcMult;
   Double_t        H_hod_1y_GoodNegAdcMult[10];   //[Ndata.H.hod.1y.GoodNegAdcMult]
   Int_t           Ndata_H_hod_1y_GoodNegAdcPed;
   Double_t        H_hod_1y_GoodNegAdcPed[10];   //[Ndata.H.hod.1y.GoodNegAdcPed]
   Int_t           Ndata_H_hod_1y_GoodNegAdcPulseAmp;
   Double_t        H_hod_1y_GoodNegAdcPulseAmp[10];   //[Ndata.H.hod.1y.GoodNegAdcPulseAmp]
   Int_t           Ndata_H_hod_1y_GoodNegAdcPulseInt;
   Double_t        H_hod_1y_GoodNegAdcPulseInt[10];   //[Ndata.H.hod.1y.GoodNegAdcPulseInt]
   Int_t           Ndata_H_hod_1y_GoodNegAdcPulseTime;
   Double_t        H_hod_1y_GoodNegAdcPulseTime[10];   //[Ndata.H.hod.1y.GoodNegAdcPulseTime]
   Int_t           Ndata_H_hod_1y_GoodNegAdcTdcDiffTime;
   Double_t        H_hod_1y_GoodNegAdcTdcDiffTime[10];   //[Ndata.H.hod.1y.GoodNegAdcTdcDiffTime]
   Int_t           Ndata_H_hod_1y_GoodNegTdcTimeCorr;
   Double_t        H_hod_1y_GoodNegTdcTimeCorr[10];   //[Ndata.H.hod.1y.GoodNegTdcTimeCorr]
   Int_t           Ndata_H_hod_1y_GoodNegTdcTimeTOFCorr;
   Double_t        H_hod_1y_GoodNegTdcTimeTOFCorr[10];   //[Ndata.H.hod.1y.GoodNegTdcTimeTOFCorr]
   Int_t           Ndata_H_hod_1y_GoodNegTdcTimeUnCorr;
   Double_t        H_hod_1y_GoodNegTdcTimeUnCorr[10];   //[Ndata.H.hod.1y.GoodNegTdcTimeUnCorr]
   Int_t           Ndata_H_hod_1y_GoodNegTdcTimeWalkCorr;
   Double_t        H_hod_1y_GoodNegTdcTimeWalkCorr[10];   //[Ndata.H.hod.1y.GoodNegTdcTimeWalkCorr]
   Int_t           Ndata_H_hod_1y_GoodPosAdcHitUsed;
   Double_t        H_hod_1y_GoodPosAdcHitUsed[10];   //[Ndata.H.hod.1y.GoodPosAdcHitUsed]
   Int_t           Ndata_H_hod_1y_GoodPosAdcMult;
   Double_t        H_hod_1y_GoodPosAdcMult[10];   //[Ndata.H.hod.1y.GoodPosAdcMult]
   Int_t           Ndata_H_hod_1y_GoodPosAdcPed;
   Double_t        H_hod_1y_GoodPosAdcPed[10];   //[Ndata.H.hod.1y.GoodPosAdcPed]
   Int_t           Ndata_H_hod_1y_GoodPosAdcPulseAmp;
   Double_t        H_hod_1y_GoodPosAdcPulseAmp[10];   //[Ndata.H.hod.1y.GoodPosAdcPulseAmp]
   Int_t           Ndata_H_hod_1y_GoodPosAdcPulseInt;
   Double_t        H_hod_1y_GoodPosAdcPulseInt[10];   //[Ndata.H.hod.1y.GoodPosAdcPulseInt]
   Int_t           Ndata_H_hod_1y_GoodPosAdcPulseTime;
   Double_t        H_hod_1y_GoodPosAdcPulseTime[10];   //[Ndata.H.hod.1y.GoodPosAdcPulseTime]
   Int_t           Ndata_H_hod_1y_GoodPosAdcTdcDiffTime;
   Double_t        H_hod_1y_GoodPosAdcTdcDiffTime[10];   //[Ndata.H.hod.1y.GoodPosAdcTdcDiffTime]
   Int_t           Ndata_H_hod_1y_GoodPosTdcTimeCorr;
   Double_t        H_hod_1y_GoodPosTdcTimeCorr[10];   //[Ndata.H.hod.1y.GoodPosTdcTimeCorr]
   Int_t           Ndata_H_hod_1y_GoodPosTdcTimeTOFCorr;
   Double_t        H_hod_1y_GoodPosTdcTimeTOFCorr[10];   //[Ndata.H.hod.1y.GoodPosTdcTimeTOFCorr]
   Int_t           Ndata_H_hod_1y_GoodPosTdcTimeUnCorr;
   Double_t        H_hod_1y_GoodPosTdcTimeUnCorr[10];   //[Ndata.H.hod.1y.GoodPosTdcTimeUnCorr]
   Int_t           Ndata_H_hod_1y_GoodPosTdcTimeWalkCorr;
   Double_t        H_hod_1y_GoodPosTdcTimeWalkCorr[10];   //[Ndata.H.hod.1y.GoodPosTdcTimeWalkCorr]
   Int_t           Ndata_H_hod_1y_negAdcCounter;
   Double_t        H_hod_1y_negAdcCounter[27];   //[Ndata.H.hod.1y.negAdcCounter]
   Int_t           Ndata_H_hod_1y_negAdcErrorFlag;
   Double_t        H_hod_1y_negAdcErrorFlag[27];   //[Ndata.H.hod.1y.negAdcErrorFlag]
   Int_t           Ndata_H_hod_1y_negAdcPed;
   Double_t        H_hod_1y_negAdcPed[27];   //[Ndata.H.hod.1y.negAdcPed]
   Int_t           Ndata_H_hod_1y_negAdcPedRaw;
   Double_t        H_hod_1y_negAdcPedRaw[27];   //[Ndata.H.hod.1y.negAdcPedRaw]
   Int_t           Ndata_H_hod_1y_negAdcPulseAmp;
   Double_t        H_hod_1y_negAdcPulseAmp[27];   //[Ndata.H.hod.1y.negAdcPulseAmp]
   Int_t           Ndata_H_hod_1y_negAdcPulseAmpRaw;
   Double_t        H_hod_1y_negAdcPulseAmpRaw[27];   //[Ndata.H.hod.1y.negAdcPulseAmpRaw]
   Int_t           Ndata_H_hod_1y_negAdcPulseInt;
   Double_t        H_hod_1y_negAdcPulseInt[27];   //[Ndata.H.hod.1y.negAdcPulseInt]
   Int_t           Ndata_H_hod_1y_negAdcPulseIntRaw;
   Double_t        H_hod_1y_negAdcPulseIntRaw[27];   //[Ndata.H.hod.1y.negAdcPulseIntRaw]
   Int_t           Ndata_H_hod_1y_negAdcPulseTime;
   Double_t        H_hod_1y_negAdcPulseTime[27];   //[Ndata.H.hod.1y.negAdcPulseTime]
   Int_t           Ndata_H_hod_1y_negAdcPulseTimeRaw;
   Double_t        H_hod_1y_negAdcPulseTimeRaw[27];   //[Ndata.H.hod.1y.negAdcPulseTimeRaw]
   Int_t           Ndata_H_hod_1y_negAdcSampPed;
   Double_t        H_hod_1y_negAdcSampPed[1];   //[Ndata.H.hod.1y.negAdcSampPed]
   Int_t           Ndata_H_hod_1y_negAdcSampPedRaw;
   Double_t        H_hod_1y_negAdcSampPedRaw[1];   //[Ndata.H.hod.1y.negAdcSampPedRaw]
   Int_t           Ndata_H_hod_1y_negAdcSampPulseAmp;
   Double_t        H_hod_1y_negAdcSampPulseAmp[1];   //[Ndata.H.hod.1y.negAdcSampPulseAmp]
   Int_t           Ndata_H_hod_1y_negAdcSampPulseAmpRaw;
   Double_t        H_hod_1y_negAdcSampPulseAmpRaw[1];   //[Ndata.H.hod.1y.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_hod_1y_negAdcSampPulseInt;
   Double_t        H_hod_1y_negAdcSampPulseInt[1];   //[Ndata.H.hod.1y.negAdcSampPulseInt]
   Int_t           Ndata_H_hod_1y_negAdcSampPulseIntRaw;
   Double_t        H_hod_1y_negAdcSampPulseIntRaw[1];   //[Ndata.H.hod.1y.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_hod_1y_negAdcSampPulseTime;
   Double_t        H_hod_1y_negAdcSampPulseTime[1];   //[Ndata.H.hod.1y.negAdcSampPulseTime]
   Int_t           Ndata_H_hod_1y_negAdcSampPulseTimeRaw;
   Double_t        H_hod_1y_negAdcSampPulseTimeRaw[1];   //[Ndata.H.hod.1y.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_hod_1y_negTdcCounter;
   Double_t        H_hod_1y_negTdcCounter[28];   //[Ndata.H.hod.1y.negTdcCounter]
   Int_t           Ndata_H_hod_1y_negTdcTime;
   Double_t        H_hod_1y_negTdcTime[28];   //[Ndata.H.hod.1y.negTdcTime]
   Int_t           Ndata_H_hod_1y_negTdcTimeRaw;
   Double_t        H_hod_1y_negTdcTimeRaw[28];   //[Ndata.H.hod.1y.negTdcTimeRaw]
   Int_t           Ndata_H_hod_1y_numGoodNegAdcHits;
   Double_t        H_hod_1y_numGoodNegAdcHits[10];   //[Ndata.H.hod.1y.numGoodNegAdcHits]
   Int_t           Ndata_H_hod_1y_numGoodNegTdcHits;
   Double_t        H_hod_1y_numGoodNegTdcHits[10];   //[Ndata.H.hod.1y.numGoodNegTdcHits]
   Int_t           Ndata_H_hod_1y_numGoodPosAdcHits;
   Double_t        H_hod_1y_numGoodPosAdcHits[10];   //[Ndata.H.hod.1y.numGoodPosAdcHits]
   Int_t           Ndata_H_hod_1y_numGoodPosTdcHits;
   Double_t        H_hod_1y_numGoodPosTdcHits[10];   //[Ndata.H.hod.1y.numGoodPosTdcHits]
   Int_t           Ndata_H_hod_1y_posAdcCounter;
   Double_t        H_hod_1y_posAdcCounter[29];   //[Ndata.H.hod.1y.posAdcCounter]
   Int_t           Ndata_H_hod_1y_posAdcErrorFlag;
   Double_t        H_hod_1y_posAdcErrorFlag[29];   //[Ndata.H.hod.1y.posAdcErrorFlag]
   Int_t           Ndata_H_hod_1y_posAdcPed;
   Double_t        H_hod_1y_posAdcPed[29];   //[Ndata.H.hod.1y.posAdcPed]
   Int_t           Ndata_H_hod_1y_posAdcPedRaw;
   Double_t        H_hod_1y_posAdcPedRaw[29];   //[Ndata.H.hod.1y.posAdcPedRaw]
   Int_t           Ndata_H_hod_1y_posAdcPulseAmp;
   Double_t        H_hod_1y_posAdcPulseAmp[29];   //[Ndata.H.hod.1y.posAdcPulseAmp]
   Int_t           Ndata_H_hod_1y_posAdcPulseAmpRaw;
   Double_t        H_hod_1y_posAdcPulseAmpRaw[29];   //[Ndata.H.hod.1y.posAdcPulseAmpRaw]
   Int_t           Ndata_H_hod_1y_posAdcPulseInt;
   Double_t        H_hod_1y_posAdcPulseInt[29];   //[Ndata.H.hod.1y.posAdcPulseInt]
   Int_t           Ndata_H_hod_1y_posAdcPulseIntRaw;
   Double_t        H_hod_1y_posAdcPulseIntRaw[29];   //[Ndata.H.hod.1y.posAdcPulseIntRaw]
   Int_t           Ndata_H_hod_1y_posAdcPulseTime;
   Double_t        H_hod_1y_posAdcPulseTime[29];   //[Ndata.H.hod.1y.posAdcPulseTime]
   Int_t           Ndata_H_hod_1y_posAdcPulseTimeRaw;
   Double_t        H_hod_1y_posAdcPulseTimeRaw[29];   //[Ndata.H.hod.1y.posAdcPulseTimeRaw]
   Int_t           Ndata_H_hod_1y_posAdcSampPed;
   Double_t        H_hod_1y_posAdcSampPed[1];   //[Ndata.H.hod.1y.posAdcSampPed]
   Int_t           Ndata_H_hod_1y_posAdcSampPedRaw;
   Double_t        H_hod_1y_posAdcSampPedRaw[1];   //[Ndata.H.hod.1y.posAdcSampPedRaw]
   Int_t           Ndata_H_hod_1y_posAdcSampPulseAmp;
   Double_t        H_hod_1y_posAdcSampPulseAmp[1];   //[Ndata.H.hod.1y.posAdcSampPulseAmp]
   Int_t           Ndata_H_hod_1y_posAdcSampPulseAmpRaw;
   Double_t        H_hod_1y_posAdcSampPulseAmpRaw[1];   //[Ndata.H.hod.1y.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_hod_1y_posAdcSampPulseInt;
   Double_t        H_hod_1y_posAdcSampPulseInt[1];   //[Ndata.H.hod.1y.posAdcSampPulseInt]
   Int_t           Ndata_H_hod_1y_posAdcSampPulseIntRaw;
   Double_t        H_hod_1y_posAdcSampPulseIntRaw[1];   //[Ndata.H.hod.1y.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_hod_1y_posAdcSampPulseTime;
   Double_t        H_hod_1y_posAdcSampPulseTime[1];   //[Ndata.H.hod.1y.posAdcSampPulseTime]
   Int_t           Ndata_H_hod_1y_posAdcSampPulseTimeRaw;
   Double_t        H_hod_1y_posAdcSampPulseTimeRaw[1];   //[Ndata.H.hod.1y.posAdcSampPulseTimeRaw]
   Int_t           Ndata_H_hod_1y_posTdcCounter;
   Double_t        H_hod_1y_posTdcCounter[37];   //[Ndata.H.hod.1y.posTdcCounter]
   Int_t           Ndata_H_hod_1y_posTdcTime;
   Double_t        H_hod_1y_posTdcTime[37];   //[Ndata.H.hod.1y.posTdcTime]
   Int_t           Ndata_H_hod_1y_posTdcTimeRaw;
   Double_t        H_hod_1y_posTdcTimeRaw[37];   //[Ndata.H.hod.1y.posTdcTimeRaw]
   Int_t           Ndata_H_hod_2x_Clus_Flag;
   Double_t        H_hod_2x_Clus_Flag[5];   //[Ndata.H.hod.2x.Clus.Flag]
   Int_t           Ndata_H_hod_2x_Clus_Pos;
   Double_t        H_hod_2x_Clus_Pos[5];   //[Ndata.H.hod.2x.Clus.Pos]
   Int_t           Ndata_H_hod_2x_Clus_Size;
   Double_t        H_hod_2x_Clus_Size[5];   //[Ndata.H.hod.2x.Clus.Size]
   Int_t           Ndata_H_hod_2x_Clus_UsedFlag;
   Double_t        H_hod_2x_Clus_UsedFlag[5];   //[Ndata.H.hod.2x.Clus.UsedFlag]
   Int_t           Ndata_H_hod_2x_DiffDisTrackCorr;
   Double_t        H_hod_2x_DiffDisTrackCorr[16];   //[Ndata.H.hod.2x.DiffDisTrackCorr]
   Int_t           Ndata_H_hod_2x_GoodNegAdcHitUsed;
   Double_t        H_hod_2x_GoodNegAdcHitUsed[16];   //[Ndata.H.hod.2x.GoodNegAdcHitUsed]
   Int_t           Ndata_H_hod_2x_GoodNegAdcMult;
   Double_t        H_hod_2x_GoodNegAdcMult[16];   //[Ndata.H.hod.2x.GoodNegAdcMult]
   Int_t           Ndata_H_hod_2x_GoodNegAdcPed;
   Double_t        H_hod_2x_GoodNegAdcPed[16];   //[Ndata.H.hod.2x.GoodNegAdcPed]
   Int_t           Ndata_H_hod_2x_GoodNegAdcPulseAmp;
   Double_t        H_hod_2x_GoodNegAdcPulseAmp[16];   //[Ndata.H.hod.2x.GoodNegAdcPulseAmp]
   Int_t           Ndata_H_hod_2x_GoodNegAdcPulseInt;
   Double_t        H_hod_2x_GoodNegAdcPulseInt[16];   //[Ndata.H.hod.2x.GoodNegAdcPulseInt]
   Int_t           Ndata_H_hod_2x_GoodNegAdcPulseTime;
   Double_t        H_hod_2x_GoodNegAdcPulseTime[16];   //[Ndata.H.hod.2x.GoodNegAdcPulseTime]
   Int_t           Ndata_H_hod_2x_GoodNegAdcTdcDiffTime;
   Double_t        H_hod_2x_GoodNegAdcTdcDiffTime[16];   //[Ndata.H.hod.2x.GoodNegAdcTdcDiffTime]
   Int_t           Ndata_H_hod_2x_GoodNegTdcTimeCorr;
   Double_t        H_hod_2x_GoodNegTdcTimeCorr[16];   //[Ndata.H.hod.2x.GoodNegTdcTimeCorr]
   Int_t           Ndata_H_hod_2x_GoodNegTdcTimeTOFCorr;
   Double_t        H_hod_2x_GoodNegTdcTimeTOFCorr[16];   //[Ndata.H.hod.2x.GoodNegTdcTimeTOFCorr]
   Int_t           Ndata_H_hod_2x_GoodNegTdcTimeUnCorr;
   Double_t        H_hod_2x_GoodNegTdcTimeUnCorr[16];   //[Ndata.H.hod.2x.GoodNegTdcTimeUnCorr]
   Int_t           Ndata_H_hod_2x_GoodNegTdcTimeWalkCorr;
   Double_t        H_hod_2x_GoodNegTdcTimeWalkCorr[16];   //[Ndata.H.hod.2x.GoodNegTdcTimeWalkCorr]
   Int_t           Ndata_H_hod_2x_GoodPosAdcHitUsed;
   Double_t        H_hod_2x_GoodPosAdcHitUsed[16];   //[Ndata.H.hod.2x.GoodPosAdcHitUsed]
   Int_t           Ndata_H_hod_2x_GoodPosAdcMult;
   Double_t        H_hod_2x_GoodPosAdcMult[16];   //[Ndata.H.hod.2x.GoodPosAdcMult]
   Int_t           Ndata_H_hod_2x_GoodPosAdcPed;
   Double_t        H_hod_2x_GoodPosAdcPed[16];   //[Ndata.H.hod.2x.GoodPosAdcPed]
   Int_t           Ndata_H_hod_2x_GoodPosAdcPulseAmp;
   Double_t        H_hod_2x_GoodPosAdcPulseAmp[16];   //[Ndata.H.hod.2x.GoodPosAdcPulseAmp]
   Int_t           Ndata_H_hod_2x_GoodPosAdcPulseInt;
   Double_t        H_hod_2x_GoodPosAdcPulseInt[16];   //[Ndata.H.hod.2x.GoodPosAdcPulseInt]
   Int_t           Ndata_H_hod_2x_GoodPosAdcPulseTime;
   Double_t        H_hod_2x_GoodPosAdcPulseTime[16];   //[Ndata.H.hod.2x.GoodPosAdcPulseTime]
   Int_t           Ndata_H_hod_2x_GoodPosAdcTdcDiffTime;
   Double_t        H_hod_2x_GoodPosAdcTdcDiffTime[16];   //[Ndata.H.hod.2x.GoodPosAdcTdcDiffTime]
   Int_t           Ndata_H_hod_2x_GoodPosTdcTimeCorr;
   Double_t        H_hod_2x_GoodPosTdcTimeCorr[16];   //[Ndata.H.hod.2x.GoodPosTdcTimeCorr]
   Int_t           Ndata_H_hod_2x_GoodPosTdcTimeTOFCorr;
   Double_t        H_hod_2x_GoodPosTdcTimeTOFCorr[16];   //[Ndata.H.hod.2x.GoodPosTdcTimeTOFCorr]
   Int_t           Ndata_H_hod_2x_GoodPosTdcTimeUnCorr;
   Double_t        H_hod_2x_GoodPosTdcTimeUnCorr[16];   //[Ndata.H.hod.2x.GoodPosTdcTimeUnCorr]
   Int_t           Ndata_H_hod_2x_GoodPosTdcTimeWalkCorr;
   Double_t        H_hod_2x_GoodPosTdcTimeWalkCorr[16];   //[Ndata.H.hod.2x.GoodPosTdcTimeWalkCorr]
   Int_t           Ndata_H_hod_2x_negAdcCounter;
   Double_t        H_hod_2x_negAdcCounter[42];   //[Ndata.H.hod.2x.negAdcCounter]
   Int_t           Ndata_H_hod_2x_negAdcErrorFlag;
   Double_t        H_hod_2x_negAdcErrorFlag[42];   //[Ndata.H.hod.2x.negAdcErrorFlag]
   Int_t           Ndata_H_hod_2x_negAdcPed;
   Double_t        H_hod_2x_negAdcPed[42];   //[Ndata.H.hod.2x.negAdcPed]
   Int_t           Ndata_H_hod_2x_negAdcPedRaw;
   Double_t        H_hod_2x_negAdcPedRaw[42];   //[Ndata.H.hod.2x.negAdcPedRaw]
   Int_t           Ndata_H_hod_2x_negAdcPulseAmp;
   Double_t        H_hod_2x_negAdcPulseAmp[42];   //[Ndata.H.hod.2x.negAdcPulseAmp]
   Int_t           Ndata_H_hod_2x_negAdcPulseAmpRaw;
   Double_t        H_hod_2x_negAdcPulseAmpRaw[42];   //[Ndata.H.hod.2x.negAdcPulseAmpRaw]
   Int_t           Ndata_H_hod_2x_negAdcPulseInt;
   Double_t        H_hod_2x_negAdcPulseInt[42];   //[Ndata.H.hod.2x.negAdcPulseInt]
   Int_t           Ndata_H_hod_2x_negAdcPulseIntRaw;
   Double_t        H_hod_2x_negAdcPulseIntRaw[42];   //[Ndata.H.hod.2x.negAdcPulseIntRaw]
   Int_t           Ndata_H_hod_2x_negAdcPulseTime;
   Double_t        H_hod_2x_negAdcPulseTime[42];   //[Ndata.H.hod.2x.negAdcPulseTime]
   Int_t           Ndata_H_hod_2x_negAdcPulseTimeRaw;
   Double_t        H_hod_2x_negAdcPulseTimeRaw[42];   //[Ndata.H.hod.2x.negAdcPulseTimeRaw]
   Int_t           Ndata_H_hod_2x_negAdcSampPed;
   Double_t        H_hod_2x_negAdcSampPed[1];   //[Ndata.H.hod.2x.negAdcSampPed]
   Int_t           Ndata_H_hod_2x_negAdcSampPedRaw;
   Double_t        H_hod_2x_negAdcSampPedRaw[1];   //[Ndata.H.hod.2x.negAdcSampPedRaw]
   Int_t           Ndata_H_hod_2x_negAdcSampPulseAmp;
   Double_t        H_hod_2x_negAdcSampPulseAmp[1];   //[Ndata.H.hod.2x.negAdcSampPulseAmp]
   Int_t           Ndata_H_hod_2x_negAdcSampPulseAmpRaw;
   Double_t        H_hod_2x_negAdcSampPulseAmpRaw[1];   //[Ndata.H.hod.2x.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_hod_2x_negAdcSampPulseInt;
   Double_t        H_hod_2x_negAdcSampPulseInt[1];   //[Ndata.H.hod.2x.negAdcSampPulseInt]
   Int_t           Ndata_H_hod_2x_negAdcSampPulseIntRaw;
   Double_t        H_hod_2x_negAdcSampPulseIntRaw[1];   //[Ndata.H.hod.2x.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_hod_2x_negAdcSampPulseTime;
   Double_t        H_hod_2x_negAdcSampPulseTime[1];   //[Ndata.H.hod.2x.negAdcSampPulseTime]
   Int_t           Ndata_H_hod_2x_negAdcSampPulseTimeRaw;
   Double_t        H_hod_2x_negAdcSampPulseTimeRaw[1];   //[Ndata.H.hod.2x.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_hod_2x_negTdcCounter;
   Double_t        H_hod_2x_negTdcCounter[56];   //[Ndata.H.hod.2x.negTdcCounter]
   Int_t           Ndata_H_hod_2x_negTdcTime;
   Double_t        H_hod_2x_negTdcTime[56];   //[Ndata.H.hod.2x.negTdcTime]
   Int_t           Ndata_H_hod_2x_negTdcTimeRaw;
   Double_t        H_hod_2x_negTdcTimeRaw[56];   //[Ndata.H.hod.2x.negTdcTimeRaw]
   Int_t           Ndata_H_hod_2x_numGoodNegAdcHits;
   Double_t        H_hod_2x_numGoodNegAdcHits[16];   //[Ndata.H.hod.2x.numGoodNegAdcHits]
   Int_t           Ndata_H_hod_2x_numGoodNegTdcHits;
   Double_t        H_hod_2x_numGoodNegTdcHits[16];   //[Ndata.H.hod.2x.numGoodNegTdcHits]
   Int_t           Ndata_H_hod_2x_numGoodPosAdcHits;
   Double_t        H_hod_2x_numGoodPosAdcHits[16];   //[Ndata.H.hod.2x.numGoodPosAdcHits]
   Int_t           Ndata_H_hod_2x_numGoodPosTdcHits;
   Double_t        H_hod_2x_numGoodPosTdcHits[16];   //[Ndata.H.hod.2x.numGoodPosTdcHits]
   Int_t           Ndata_H_hod_2x_posAdcCounter;
   Double_t        H_hod_2x_posAdcCounter[40];   //[Ndata.H.hod.2x.posAdcCounter]
   Int_t           Ndata_H_hod_2x_posAdcErrorFlag;
   Double_t        H_hod_2x_posAdcErrorFlag[40];   //[Ndata.H.hod.2x.posAdcErrorFlag]
   Int_t           Ndata_H_hod_2x_posAdcPed;
   Double_t        H_hod_2x_posAdcPed[40];   //[Ndata.H.hod.2x.posAdcPed]
   Int_t           Ndata_H_hod_2x_posAdcPedRaw;
   Double_t        H_hod_2x_posAdcPedRaw[40];   //[Ndata.H.hod.2x.posAdcPedRaw]
   Int_t           Ndata_H_hod_2x_posAdcPulseAmp;
   Double_t        H_hod_2x_posAdcPulseAmp[40];   //[Ndata.H.hod.2x.posAdcPulseAmp]
   Int_t           Ndata_H_hod_2x_posAdcPulseAmpRaw;
   Double_t        H_hod_2x_posAdcPulseAmpRaw[40];   //[Ndata.H.hod.2x.posAdcPulseAmpRaw]
   Int_t           Ndata_H_hod_2x_posAdcPulseInt;
   Double_t        H_hod_2x_posAdcPulseInt[40];   //[Ndata.H.hod.2x.posAdcPulseInt]
   Int_t           Ndata_H_hod_2x_posAdcPulseIntRaw;
   Double_t        H_hod_2x_posAdcPulseIntRaw[40];   //[Ndata.H.hod.2x.posAdcPulseIntRaw]
   Int_t           Ndata_H_hod_2x_posAdcPulseTime;
   Double_t        H_hod_2x_posAdcPulseTime[40];   //[Ndata.H.hod.2x.posAdcPulseTime]
   Int_t           Ndata_H_hod_2x_posAdcPulseTimeRaw;
   Double_t        H_hod_2x_posAdcPulseTimeRaw[40];   //[Ndata.H.hod.2x.posAdcPulseTimeRaw]
   Int_t           Ndata_H_hod_2x_posAdcSampPed;
   Double_t        H_hod_2x_posAdcSampPed[1];   //[Ndata.H.hod.2x.posAdcSampPed]
   Int_t           Ndata_H_hod_2x_posAdcSampPedRaw;
   Double_t        H_hod_2x_posAdcSampPedRaw[1];   //[Ndata.H.hod.2x.posAdcSampPedRaw]
   Int_t           Ndata_H_hod_2x_posAdcSampPulseAmp;
   Double_t        H_hod_2x_posAdcSampPulseAmp[1];   //[Ndata.H.hod.2x.posAdcSampPulseAmp]
   Int_t           Ndata_H_hod_2x_posAdcSampPulseAmpRaw;
   Double_t        H_hod_2x_posAdcSampPulseAmpRaw[1];   //[Ndata.H.hod.2x.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_hod_2x_posAdcSampPulseInt;
   Double_t        H_hod_2x_posAdcSampPulseInt[1];   //[Ndata.H.hod.2x.posAdcSampPulseInt]
   Int_t           Ndata_H_hod_2x_posAdcSampPulseIntRaw;
   Double_t        H_hod_2x_posAdcSampPulseIntRaw[1];   //[Ndata.H.hod.2x.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_hod_2x_posAdcSampPulseTime;
   Double_t        H_hod_2x_posAdcSampPulseTime[1];   //[Ndata.H.hod.2x.posAdcSampPulseTime]
   Int_t           Ndata_H_hod_2x_posAdcSampPulseTimeRaw;
   Double_t        H_hod_2x_posAdcSampPulseTimeRaw[1];   //[Ndata.H.hod.2x.posAdcSampPulseTimeRaw]
   Int_t           Ndata_H_hod_2x_posTdcCounter;
   Double_t        H_hod_2x_posTdcCounter[48];   //[Ndata.H.hod.2x.posTdcCounter]
   Int_t           Ndata_H_hod_2x_posTdcTime;
   Double_t        H_hod_2x_posTdcTime[48];   //[Ndata.H.hod.2x.posTdcTime]
   Int_t           Ndata_H_hod_2x_posTdcTimeRaw;
   Double_t        H_hod_2x_posTdcTimeRaw[48];   //[Ndata.H.hod.2x.posTdcTimeRaw]
   Int_t           Ndata_H_hod_2y_Clus_Flag;
   Double_t        H_hod_2y_Clus_Flag[5];   //[Ndata.H.hod.2y.Clus.Flag]
   Int_t           Ndata_H_hod_2y_Clus_Pos;
   Double_t        H_hod_2y_Clus_Pos[5];   //[Ndata.H.hod.2y.Clus.Pos]
   Int_t           Ndata_H_hod_2y_Clus_Size;
   Double_t        H_hod_2y_Clus_Size[5];   //[Ndata.H.hod.2y.Clus.Size]
   Int_t           Ndata_H_hod_2y_Clus_UsedFlag;
   Double_t        H_hod_2y_Clus_UsedFlag[5];   //[Ndata.H.hod.2y.Clus.UsedFlag]
   Int_t           Ndata_H_hod_2y_DiffDisTrackCorr;
   Double_t        H_hod_2y_DiffDisTrackCorr[10];   //[Ndata.H.hod.2y.DiffDisTrackCorr]
   Int_t           Ndata_H_hod_2y_GoodNegAdcHitUsed;
   Double_t        H_hod_2y_GoodNegAdcHitUsed[10];   //[Ndata.H.hod.2y.GoodNegAdcHitUsed]
   Int_t           Ndata_H_hod_2y_GoodNegAdcMult;
   Double_t        H_hod_2y_GoodNegAdcMult[10];   //[Ndata.H.hod.2y.GoodNegAdcMult]
   Int_t           Ndata_H_hod_2y_GoodNegAdcPed;
   Double_t        H_hod_2y_GoodNegAdcPed[10];   //[Ndata.H.hod.2y.GoodNegAdcPed]
   Int_t           Ndata_H_hod_2y_GoodNegAdcPulseAmp;
   Double_t        H_hod_2y_GoodNegAdcPulseAmp[10];   //[Ndata.H.hod.2y.GoodNegAdcPulseAmp]
   Int_t           Ndata_H_hod_2y_GoodNegAdcPulseInt;
   Double_t        H_hod_2y_GoodNegAdcPulseInt[10];   //[Ndata.H.hod.2y.GoodNegAdcPulseInt]
   Int_t           Ndata_H_hod_2y_GoodNegAdcPulseTime;
   Double_t        H_hod_2y_GoodNegAdcPulseTime[10];   //[Ndata.H.hod.2y.GoodNegAdcPulseTime]
   Int_t           Ndata_H_hod_2y_GoodNegAdcTdcDiffTime;
   Double_t        H_hod_2y_GoodNegAdcTdcDiffTime[10];   //[Ndata.H.hod.2y.GoodNegAdcTdcDiffTime]
   Int_t           Ndata_H_hod_2y_GoodNegTdcTimeCorr;
   Double_t        H_hod_2y_GoodNegTdcTimeCorr[10];   //[Ndata.H.hod.2y.GoodNegTdcTimeCorr]
   Int_t           Ndata_H_hod_2y_GoodNegTdcTimeTOFCorr;
   Double_t        H_hod_2y_GoodNegTdcTimeTOFCorr[10];   //[Ndata.H.hod.2y.GoodNegTdcTimeTOFCorr]
   Int_t           Ndata_H_hod_2y_GoodNegTdcTimeUnCorr;
   Double_t        H_hod_2y_GoodNegTdcTimeUnCorr[10];   //[Ndata.H.hod.2y.GoodNegTdcTimeUnCorr]
   Int_t           Ndata_H_hod_2y_GoodNegTdcTimeWalkCorr;
   Double_t        H_hod_2y_GoodNegTdcTimeWalkCorr[10];   //[Ndata.H.hod.2y.GoodNegTdcTimeWalkCorr]
   Int_t           Ndata_H_hod_2y_GoodPosAdcHitUsed;
   Double_t        H_hod_2y_GoodPosAdcHitUsed[10];   //[Ndata.H.hod.2y.GoodPosAdcHitUsed]
   Int_t           Ndata_H_hod_2y_GoodPosAdcMult;
   Double_t        H_hod_2y_GoodPosAdcMult[10];   //[Ndata.H.hod.2y.GoodPosAdcMult]
   Int_t           Ndata_H_hod_2y_GoodPosAdcPed;
   Double_t        H_hod_2y_GoodPosAdcPed[10];   //[Ndata.H.hod.2y.GoodPosAdcPed]
   Int_t           Ndata_H_hod_2y_GoodPosAdcPulseAmp;
   Double_t        H_hod_2y_GoodPosAdcPulseAmp[10];   //[Ndata.H.hod.2y.GoodPosAdcPulseAmp]
   Int_t           Ndata_H_hod_2y_GoodPosAdcPulseInt;
   Double_t        H_hod_2y_GoodPosAdcPulseInt[10];   //[Ndata.H.hod.2y.GoodPosAdcPulseInt]
   Int_t           Ndata_H_hod_2y_GoodPosAdcPulseTime;
   Double_t        H_hod_2y_GoodPosAdcPulseTime[10];   //[Ndata.H.hod.2y.GoodPosAdcPulseTime]
   Int_t           Ndata_H_hod_2y_GoodPosAdcTdcDiffTime;
   Double_t        H_hod_2y_GoodPosAdcTdcDiffTime[10];   //[Ndata.H.hod.2y.GoodPosAdcTdcDiffTime]
   Int_t           Ndata_H_hod_2y_GoodPosTdcTimeCorr;
   Double_t        H_hod_2y_GoodPosTdcTimeCorr[10];   //[Ndata.H.hod.2y.GoodPosTdcTimeCorr]
   Int_t           Ndata_H_hod_2y_GoodPosTdcTimeTOFCorr;
   Double_t        H_hod_2y_GoodPosTdcTimeTOFCorr[10];   //[Ndata.H.hod.2y.GoodPosTdcTimeTOFCorr]
   Int_t           Ndata_H_hod_2y_GoodPosTdcTimeUnCorr;
   Double_t        H_hod_2y_GoodPosTdcTimeUnCorr[10];   //[Ndata.H.hod.2y.GoodPosTdcTimeUnCorr]
   Int_t           Ndata_H_hod_2y_GoodPosTdcTimeWalkCorr;
   Double_t        H_hod_2y_GoodPosTdcTimeWalkCorr[10];   //[Ndata.H.hod.2y.GoodPosTdcTimeWalkCorr]
   Int_t           Ndata_H_hod_2y_negAdcCounter;
   Double_t        H_hod_2y_negAdcCounter[29];   //[Ndata.H.hod.2y.negAdcCounter]
   Int_t           Ndata_H_hod_2y_negAdcErrorFlag;
   Double_t        H_hod_2y_negAdcErrorFlag[29];   //[Ndata.H.hod.2y.negAdcErrorFlag]
   Int_t           Ndata_H_hod_2y_negAdcPed;
   Double_t        H_hod_2y_negAdcPed[29];   //[Ndata.H.hod.2y.negAdcPed]
   Int_t           Ndata_H_hod_2y_negAdcPedRaw;
   Double_t        H_hod_2y_negAdcPedRaw[29];   //[Ndata.H.hod.2y.negAdcPedRaw]
   Int_t           Ndata_H_hod_2y_negAdcPulseAmp;
   Double_t        H_hod_2y_negAdcPulseAmp[29];   //[Ndata.H.hod.2y.negAdcPulseAmp]
   Int_t           Ndata_H_hod_2y_negAdcPulseAmpRaw;
   Double_t        H_hod_2y_negAdcPulseAmpRaw[29];   //[Ndata.H.hod.2y.negAdcPulseAmpRaw]
   Int_t           Ndata_H_hod_2y_negAdcPulseInt;
   Double_t        H_hod_2y_negAdcPulseInt[29];   //[Ndata.H.hod.2y.negAdcPulseInt]
   Int_t           Ndata_H_hod_2y_negAdcPulseIntRaw;
   Double_t        H_hod_2y_negAdcPulseIntRaw[29];   //[Ndata.H.hod.2y.negAdcPulseIntRaw]
   Int_t           Ndata_H_hod_2y_negAdcPulseTime;
   Double_t        H_hod_2y_negAdcPulseTime[29];   //[Ndata.H.hod.2y.negAdcPulseTime]
   Int_t           Ndata_H_hod_2y_negAdcPulseTimeRaw;
   Double_t        H_hod_2y_negAdcPulseTimeRaw[29];   //[Ndata.H.hod.2y.negAdcPulseTimeRaw]
   Int_t           Ndata_H_hod_2y_negAdcSampPed;
   Double_t        H_hod_2y_negAdcSampPed[1];   //[Ndata.H.hod.2y.negAdcSampPed]
   Int_t           Ndata_H_hod_2y_negAdcSampPedRaw;
   Double_t        H_hod_2y_negAdcSampPedRaw[1];   //[Ndata.H.hod.2y.negAdcSampPedRaw]
   Int_t           Ndata_H_hod_2y_negAdcSampPulseAmp;
   Double_t        H_hod_2y_negAdcSampPulseAmp[1];   //[Ndata.H.hod.2y.negAdcSampPulseAmp]
   Int_t           Ndata_H_hod_2y_negAdcSampPulseAmpRaw;
   Double_t        H_hod_2y_negAdcSampPulseAmpRaw[1];   //[Ndata.H.hod.2y.negAdcSampPulseAmpRaw]
   Int_t           Ndata_H_hod_2y_negAdcSampPulseInt;
   Double_t        H_hod_2y_negAdcSampPulseInt[1];   //[Ndata.H.hod.2y.negAdcSampPulseInt]
   Int_t           Ndata_H_hod_2y_negAdcSampPulseIntRaw;
   Double_t        H_hod_2y_negAdcSampPulseIntRaw[1];   //[Ndata.H.hod.2y.negAdcSampPulseIntRaw]
   Int_t           Ndata_H_hod_2y_negAdcSampPulseTime;
   Double_t        H_hod_2y_negAdcSampPulseTime[1];   //[Ndata.H.hod.2y.negAdcSampPulseTime]
   Int_t           Ndata_H_hod_2y_negAdcSampPulseTimeRaw;
   Double_t        H_hod_2y_negAdcSampPulseTimeRaw[1];   //[Ndata.H.hod.2y.negAdcSampPulseTimeRaw]
   Int_t           Ndata_H_hod_2y_negTdcCounter;
   Double_t        H_hod_2y_negTdcCounter[48];   //[Ndata.H.hod.2y.negTdcCounter]
   Int_t           Ndata_H_hod_2y_negTdcTime;
   Double_t        H_hod_2y_negTdcTime[48];   //[Ndata.H.hod.2y.negTdcTime]
   Int_t           Ndata_H_hod_2y_negTdcTimeRaw;
   Double_t        H_hod_2y_negTdcTimeRaw[48];   //[Ndata.H.hod.2y.negTdcTimeRaw]
   Int_t           Ndata_H_hod_2y_numGoodNegAdcHits;
   Double_t        H_hod_2y_numGoodNegAdcHits[10];   //[Ndata.H.hod.2y.numGoodNegAdcHits]
   Int_t           Ndata_H_hod_2y_numGoodNegTdcHits;
   Double_t        H_hod_2y_numGoodNegTdcHits[10];   //[Ndata.H.hod.2y.numGoodNegTdcHits]
   Int_t           Ndata_H_hod_2y_numGoodPosAdcHits;
   Double_t        H_hod_2y_numGoodPosAdcHits[10];   //[Ndata.H.hod.2y.numGoodPosAdcHits]
   Int_t           Ndata_H_hod_2y_numGoodPosTdcHits;
   Double_t        H_hod_2y_numGoodPosTdcHits[10];   //[Ndata.H.hod.2y.numGoodPosTdcHits]
   Int_t           Ndata_H_hod_2y_posAdcCounter;
   Double_t        H_hod_2y_posAdcCounter[30];   //[Ndata.H.hod.2y.posAdcCounter]
   Int_t           Ndata_H_hod_2y_posAdcErrorFlag;
   Double_t        H_hod_2y_posAdcErrorFlag[30];   //[Ndata.H.hod.2y.posAdcErrorFlag]
   Int_t           Ndata_H_hod_2y_posAdcPed;
   Double_t        H_hod_2y_posAdcPed[30];   //[Ndata.H.hod.2y.posAdcPed]
   Int_t           Ndata_H_hod_2y_posAdcPedRaw;
   Double_t        H_hod_2y_posAdcPedRaw[30];   //[Ndata.H.hod.2y.posAdcPedRaw]
   Int_t           Ndata_H_hod_2y_posAdcPulseAmp;
   Double_t        H_hod_2y_posAdcPulseAmp[30];   //[Ndata.H.hod.2y.posAdcPulseAmp]
   Int_t           Ndata_H_hod_2y_posAdcPulseAmpRaw;
   Double_t        H_hod_2y_posAdcPulseAmpRaw[30];   //[Ndata.H.hod.2y.posAdcPulseAmpRaw]
   Int_t           Ndata_H_hod_2y_posAdcPulseInt;
   Double_t        H_hod_2y_posAdcPulseInt[30];   //[Ndata.H.hod.2y.posAdcPulseInt]
   Int_t           Ndata_H_hod_2y_posAdcPulseIntRaw;
   Double_t        H_hod_2y_posAdcPulseIntRaw[30];   //[Ndata.H.hod.2y.posAdcPulseIntRaw]
   Int_t           Ndata_H_hod_2y_posAdcPulseTime;
   Double_t        H_hod_2y_posAdcPulseTime[30];   //[Ndata.H.hod.2y.posAdcPulseTime]
   Int_t           Ndata_H_hod_2y_posAdcPulseTimeRaw;
   Double_t        H_hod_2y_posAdcPulseTimeRaw[30];   //[Ndata.H.hod.2y.posAdcPulseTimeRaw]
   Int_t           Ndata_H_hod_2y_posAdcSampPed;
   Double_t        H_hod_2y_posAdcSampPed[1];   //[Ndata.H.hod.2y.posAdcSampPed]
   Int_t           Ndata_H_hod_2y_posAdcSampPedRaw;
   Double_t        H_hod_2y_posAdcSampPedRaw[1];   //[Ndata.H.hod.2y.posAdcSampPedRaw]
   Int_t           Ndata_H_hod_2y_posAdcSampPulseAmp;
   Double_t        H_hod_2y_posAdcSampPulseAmp[1];   //[Ndata.H.hod.2y.posAdcSampPulseAmp]
   Int_t           Ndata_H_hod_2y_posAdcSampPulseAmpRaw;
   Double_t        H_hod_2y_posAdcSampPulseAmpRaw[1];   //[Ndata.H.hod.2y.posAdcSampPulseAmpRaw]
   Int_t           Ndata_H_hod_2y_posAdcSampPulseInt;
   Double_t        H_hod_2y_posAdcSampPulseInt[1];   //[Ndata.H.hod.2y.posAdcSampPulseInt]
   Int_t           Ndata_H_hod_2y_posAdcSampPulseIntRaw;
   Double_t        H_hod_2y_posAdcSampPulseIntRaw[1];   //[Ndata.H.hod.2y.posAdcSampPulseIntRaw]
   Int_t           Ndata_H_hod_2y_posAdcSampPulseTime;
   Double_t        H_hod_2y_posAdcSampPulseTime[1];   //[Ndata.H.hod.2y.posAdcSampPulseTime]
   Int_t           Ndata_H_hod_2y_posAdcSampPulseTimeRaw;
   Double_t        H_hod_2y_posAdcSampPulseTimeRaw[1];   //[Ndata.H.hod.2y.posAdcSampPulseTimeRaw]
   Int_t           Ndata_H_hod_2y_posTdcCounter;
   Double_t        H_hod_2y_posTdcCounter[35];   //[Ndata.H.hod.2y.posTdcCounter]
   Int_t           Ndata_H_hod_2y_posTdcTime;
   Double_t        H_hod_2y_posTdcTime[35];   //[Ndata.H.hod.2y.posTdcTime]
   Int_t           Ndata_H_hod_2y_posTdcTimeRaw;
   Double_t        H_hod_2y_posTdcTimeRaw[35];   //[Ndata.H.hod.2y.posTdcTimeRaw]
   Int_t           Ndata_H_tr_GoodPlane3;
   Double_t        H_tr_GoodPlane3[100];   //[Ndata.H.tr.GoodPlane3]
   Int_t           Ndata_H_tr_GoodPlane4;
   Double_t        H_tr_GoodPlane4[100];   //[Ndata.H.tr.GoodPlane4]
   Int_t           Ndata_H_tr_beta;
   Double_t        H_tr_beta[100];   //[Ndata.H.tr.beta]
   Int_t           Ndata_H_tr_betachisq;
   Double_t        H_tr_betachisq[100];   //[Ndata.H.tr.betachisq]
   Int_t           Ndata_H_tr_chi2;
   Double_t        H_tr_chi2[100];   //[Ndata.H.tr.chi2]
   Int_t           Ndata_H_tr_d_ph;
   Double_t        H_tr_d_ph[100];   //[Ndata.H.tr.d_ph]
   Int_t           Ndata_H_tr_d_th;
   Double_t        H_tr_d_th[100];   //[Ndata.H.tr.d_th]
   Int_t           Ndata_H_tr_d_x;
   Double_t        H_tr_d_x[100];   //[Ndata.H.tr.d_x]
   Int_t           Ndata_H_tr_d_y;
   Double_t        H_tr_d_y[100];   //[Ndata.H.tr.d_y]
   Int_t           Ndata_H_tr_dbeta;
   Double_t        H_tr_dbeta[100];   //[Ndata.H.tr.dbeta]
   Int_t           Ndata_H_tr_dtime;
   Double_t        H_tr_dtime[100];   //[Ndata.H.tr.dtime]
   Int_t           Ndata_H_tr_flag;
   Double_t        H_tr_flag[100];   //[Ndata.H.tr.flag]
   Int_t           Ndata_H_tr_fptime;
   Double_t        H_tr_fptime[100];   //[Ndata.H.tr.fptime]
   Int_t           Ndata_H_tr_ndof;
   Double_t        H_tr_ndof[100];   //[Ndata.H.tr.ndof]
   Int_t           Ndata_H_tr_npmt;
   Double_t        H_tr_npmt[100];   //[Ndata.H.tr.npmt]
   Int_t           Ndata_H_tr_p;
   Double_t        H_tr_p[100];   //[Ndata.H.tr.p]
   Int_t           Ndata_H_tr_pathl;
   Double_t        H_tr_pathl[100];   //[Ndata.H.tr.pathl]
   Int_t           Ndata_H_tr_ph;
   Double_t        H_tr_ph[100];   //[Ndata.H.tr.ph]
   Int_t           Ndata_H_tr_px;
   Double_t        H_tr_px[100];   //[Ndata.H.tr.px]
   Int_t           Ndata_H_tr_py;
   Double_t        H_tr_py[100];   //[Ndata.H.tr.py]
   Int_t           Ndata_H_tr_pz;
   Double_t        H_tr_pz[100];   //[Ndata.H.tr.pz]
   Int_t           Ndata_H_tr_r_ph;
   Double_t        H_tr_r_ph[100];   //[Ndata.H.tr.r_ph]
   Int_t           Ndata_H_tr_r_th;
   Double_t        H_tr_r_th[100];   //[Ndata.H.tr.r_th]
   Int_t           Ndata_H_tr_r_x;
   Double_t        H_tr_r_x[100];   //[Ndata.H.tr.r_x]
   Int_t           Ndata_H_tr_r_y;
   Double_t        H_tr_r_y[100];   //[Ndata.H.tr.r_y]
   Int_t           Ndata_H_tr_tg_dp;
   Double_t        H_tr_tg_dp[100];   //[Ndata.H.tr.tg_dp]
   Int_t           Ndata_H_tr_tg_ph;
   Double_t        H_tr_tg_ph[100];   //[Ndata.H.tr.tg_ph]
   Int_t           Ndata_H_tr_tg_th;
   Double_t        H_tr_tg_th[100];   //[Ndata.H.tr.tg_th]
   Int_t           Ndata_H_tr_tg_y;
   Double_t        H_tr_tg_y[100];   //[Ndata.H.tr.tg_y]
   Int_t           Ndata_H_tr_th;
   Double_t        H_tr_th[100];   //[Ndata.H.tr.th]
   Int_t           Ndata_H_tr_time;
   Double_t        H_tr_time[100];   //[Ndata.H.tr.time]
   Int_t           Ndata_H_tr_vx;
   Double_t        H_tr_vx[100];   //[Ndata.H.tr.vx]
   Int_t           Ndata_H_tr_vy;
   Double_t        H_tr_vy[100];   //[Ndata.H.tr.vy]
   Int_t           Ndata_H_tr_vz;
   Double_t        H_tr_vz[100];   //[Ndata.H.tr.vz]
   Int_t           Ndata_H_tr_x;
   Double_t        H_tr_x[100];   //[Ndata.H.tr.x]
   Int_t           Ndata_H_tr_y;
   Double_t        H_tr_y[100];   //[Ndata.H.tr.y]
   Int_t           Ndata_NPS_cal_clusE;
   Double_t        NPS_cal_clusE[1];   //[Ndata.NPS.cal.clusE]
   Int_t           Ndata_NPS_cal_clusT;
   Double_t        NPS_cal_clusT[1];   //[Ndata.NPS.cal.clusT]
   Int_t           Ndata_NPS_cal_clusX;
   Double_t        NPS_cal_clusX[1];   //[Ndata.NPS.cal.clusX]
   Int_t           Ndata_NPS_cal_clusY;
   Double_t        NPS_cal_clusY[1];   //[Ndata.NPS.cal.clusY]
   Int_t           Ndata_NPS_cal_clusZ;
   Double_t        NPS_cal_clusZ[1];   //[Ndata.NPS.cal.clusZ]
   Int_t           Ndata_NPS_cal_fly_adcCounter;
   Double_t        NPS_cal_fly_adcCounter[1];   //[Ndata.NPS.cal.fly.adcCounter]
   Int_t           Ndata_NPS_cal_fly_adcErrorFlag;
   Double_t        NPS_cal_fly_adcErrorFlag[1];   //[Ndata.NPS.cal.fly.adcErrorFlag]
   Int_t           Ndata_NPS_cal_fly_adcPed;
   Double_t        NPS_cal_fly_adcPed[1];   //[Ndata.NPS.cal.fly.adcPed]
   Int_t           Ndata_NPS_cal_fly_adcPedRaw;
   Double_t        NPS_cal_fly_adcPedRaw[1];   //[Ndata.NPS.cal.fly.adcPedRaw]
   Int_t           Ndata_NPS_cal_fly_adcPulseAmp;
   Double_t        NPS_cal_fly_adcPulseAmp[1];   //[Ndata.NPS.cal.fly.adcPulseAmp]
   Int_t           Ndata_NPS_cal_fly_adcPulseAmpRaw;
   Double_t        NPS_cal_fly_adcPulseAmpRaw[1];   //[Ndata.NPS.cal.fly.adcPulseAmpRaw]
   Int_t           Ndata_NPS_cal_fly_adcPulseInt;
   Double_t        NPS_cal_fly_adcPulseInt[1];   //[Ndata.NPS.cal.fly.adcPulseInt]
   Int_t           Ndata_NPS_cal_fly_adcPulseIntRaw;
   Double_t        NPS_cal_fly_adcPulseIntRaw[1];   //[Ndata.NPS.cal.fly.adcPulseIntRaw]
   Int_t           Ndata_NPS_cal_fly_adcPulseTime;
   Double_t        NPS_cal_fly_adcPulseTime[1];   //[Ndata.NPS.cal.fly.adcPulseTime]
   Int_t           Ndata_NPS_cal_fly_adcPulseTimeRaw;
   Double_t        NPS_cal_fly_adcPulseTimeRaw[1];   //[Ndata.NPS.cal.fly.adcPulseTimeRaw]
   Int_t           Ndata_NPS_cal_fly_adcSampPed;
   Double_t        NPS_cal_fly_adcSampPed[1];   //[Ndata.NPS.cal.fly.adcSampPed]
   Int_t           Ndata_NPS_cal_fly_adcSampPedRaw;
   Double_t        NPS_cal_fly_adcSampPedRaw[1];   //[Ndata.NPS.cal.fly.adcSampPedRaw]
   Int_t           Ndata_NPS_cal_fly_adcSampPulseAmp;
   Double_t        NPS_cal_fly_adcSampPulseAmp[1];   //[Ndata.NPS.cal.fly.adcSampPulseAmp]
   Int_t           Ndata_NPS_cal_fly_adcSampPulseAmpRaw;
   Double_t        NPS_cal_fly_adcSampPulseAmpRaw[1];   //[Ndata.NPS.cal.fly.adcSampPulseAmpRaw]
   Int_t           Ndata_NPS_cal_fly_adcSampPulseInt;
   Double_t        NPS_cal_fly_adcSampPulseInt[1];   //[Ndata.NPS.cal.fly.adcSampPulseInt]
   Int_t           Ndata_NPS_cal_fly_adcSampPulseIntRaw;
   Double_t        NPS_cal_fly_adcSampPulseIntRaw[1];   //[Ndata.NPS.cal.fly.adcSampPulseIntRaw]
   Int_t           Ndata_NPS_cal_fly_adcSampPulseTime;
   Double_t        NPS_cal_fly_adcSampPulseTime[1];   //[Ndata.NPS.cal.fly.adcSampPulseTime]
   Int_t           Ndata_NPS_cal_fly_adcSampPulseTimeRaw;
   Double_t        NPS_cal_fly_adcSampPulseTimeRaw[1];   //[Ndata.NPS.cal.fly.adcSampPulseTimeRaw]
   Int_t           Ndata_NPS_cal_fly_adcSampWaveform;
   Double_t        NPS_cal_fly_adcSampWaveform[1];   //[Ndata.NPS.cal.fly.adcSampWaveform]
   Int_t           Ndata_NPS_cal_fly_block_clusterID;
   Double_t        NPS_cal_fly_block_clusterID[1080];   //[Ndata.NPS.cal.fly.block_clusterID]
   Int_t           Ndata_NPS_cal_fly_e;
   Double_t        NPS_cal_fly_e[1080];   //[Ndata.NPS.cal.fly.e]
   Int_t           Ndata_NPS_cal_fly_goodAdcMult;
   Double_t        NPS_cal_fly_goodAdcMult[1080];   //[Ndata.NPS.cal.fly.goodAdcMult]
   Int_t           Ndata_NPS_cal_fly_goodAdcPed;
   Double_t        NPS_cal_fly_goodAdcPed[1080];   //[Ndata.NPS.cal.fly.goodAdcPed]
   Int_t           Ndata_NPS_cal_fly_goodAdcPulseAmp;
   Double_t        NPS_cal_fly_goodAdcPulseAmp[1080];   //[Ndata.NPS.cal.fly.goodAdcPulseAmp]
   Int_t           Ndata_NPS_cal_fly_goodAdcPulseInt;
   Double_t        NPS_cal_fly_goodAdcPulseInt[1080];   //[Ndata.NPS.cal.fly.goodAdcPulseInt]
   Int_t           Ndata_NPS_cal_fly_goodAdcPulseIntRaw;
   Double_t        NPS_cal_fly_goodAdcPulseIntRaw[1080];   //[Ndata.NPS.cal.fly.goodAdcPulseIntRaw]
   Int_t           Ndata_NPS_cal_fly_goodAdcPulseTime;
   Double_t        NPS_cal_fly_goodAdcPulseTime[1080];   //[Ndata.NPS.cal.fly.goodAdcPulseTime]
   Int_t           Ndata_NPS_cal_fly_goodAdcTdcDiffTime;
   Double_t        NPS_cal_fly_goodAdcTdcDiffTime[1080];   //[Ndata.NPS.cal.fly.goodAdcTdcDiffTime]
   Int_t           Ndata_NPS_cal_fly_numGoodAdcHits;
   Double_t        NPS_cal_fly_numGoodAdcHits[1080];   //[Ndata.NPS.cal.fly.numGoodAdcHits]
   Int_t           Ndata_NPS_cal_vtpClusE;
   Double_t        NPS_cal_vtpClusE[1];   //[Ndata.NPS.cal.vtpClusE]
   Int_t           Ndata_NPS_cal_vtpClusSize;
   Double_t        NPS_cal_vtpClusSize[1];   //[Ndata.NPS.cal.vtpClusSize]
   Int_t           Ndata_NPS_cal_vtpClusTime;
   Double_t        NPS_cal_vtpClusTime[1];   //[Ndata.NPS.cal.vtpClusTime]
   Int_t           Ndata_NPS_cal_vtpClusX;
   Double_t        NPS_cal_vtpClusX[1];   //[Ndata.NPS.cal.vtpClusX]
   Int_t           Ndata_NPS_cal_vtpClusY;
   Double_t        NPS_cal_vtpClusY[1];   //[Ndata.NPS.cal.vtpClusY]
   Int_t           Ndata_NPS_cal_vtpTrigTime;
   Double_t        NPS_cal_vtpTrigTime[1];   //[Ndata.NPS.cal.vtpTrigTime]
   Int_t           Ndata_NPS_cal_vtpTrigType0;
   Double_t        NPS_cal_vtpTrigType0[1];   //[Ndata.NPS.cal.vtpTrigType0]
   Int_t           Ndata_NPS_cal_vtpTrigType1;
   Double_t        NPS_cal_vtpTrigType1[1];   //[Ndata.NPS.cal.vtpTrigType1]
   Int_t           Ndata_NPS_cal_vtpTrigType2;
   Double_t        NPS_cal_vtpTrigType2[1];   //[Ndata.NPS.cal.vtpTrigType2]
   Double_t        H_1MHz_scaler;
   Double_t        H_1MHz_scalerCut;
   Double_t        H_1MHz_scalerRate;
   Double_t        H_1MHz_scalerTime;
   Double_t        H_1MHz_scalerTimeCut;
   Double_t        H_1MHz_CP_scaler;
   Double_t        H_1MHz_CP_scalerCut;
   Double_t        H_1MHz_CP_scalerRate;
   Double_t        H_1MHz_CP_scalerTime;
   Double_t        H_1MHz_CP_scalerTimeCut;
   Double_t        H_1MHz_Hel_scaler;
   Double_t        H_1MHz_Hel_scalerCut;
   Double_t        H_1MHz_Hel_scalerRate;
   Double_t        H_1MHz_Hel_scalerTime;
   Double_t        H_1MHz_Hel_scalerTimeCut;
   Double_t        H_ASUM_scaler;
   Double_t        H_ASUM_scalerCut;
   Double_t        H_ASUM_scalerRate;
   Double_t        H_BCM1_scaler;
   Double_t        H_BCM1_scalerCharge;
   Double_t        H_BCM1_scalerChargeCut;
   Double_t        H_BCM1_scalerCurrent;
   Double_t        H_BCM1_scalerCut;
   Double_t        H_BCM1_scalerRate;
   Double_t        H_BCM1_Hel_scaler;
   Double_t        H_BCM1_Hel_scalerCharge;
   Double_t        H_BCM1_Hel_scalerChargeCut;
   Double_t        H_BCM1_Hel_scalerCurrent;
   Double_t        H_BCM1_Hel_scalerCut;
   Double_t        H_BCM1_Hel_scalerRate;
   Double_t        H_BCM2_scaler;
   Double_t        H_BCM2_scalerCharge;
   Double_t        H_BCM2_scalerChargeCut;
   Double_t        H_BCM2_scalerCurrent;
   Double_t        H_BCM2_scalerCut;
   Double_t        H_BCM2_scalerRate;
   Double_t        H_BCM2_Hel_scaler;
   Double_t        H_BCM2_Hel_scalerCharge;
   Double_t        H_BCM2_Hel_scalerChargeCut;
   Double_t        H_BCM2_Hel_scalerCurrent;
   Double_t        H_BCM2_Hel_scalerCut;
   Double_t        H_BCM2_Hel_scalerRate;
   Double_t        H_BCM4A_scaler;
   Double_t        H_BCM4A_scalerCharge;
   Double_t        H_BCM4A_scalerChargeCut;
   Double_t        H_BCM4A_scalerCurrent;
   Double_t        H_BCM4A_scalerCut;
   Double_t        H_BCM4A_scalerRate;
   Double_t        H_BCM4A_Hel_scaler;
   Double_t        H_BCM4A_Hel_scalerCharge;
   Double_t        H_BCM4A_Hel_scalerChargeCut;
   Double_t        H_BCM4A_Hel_scalerCurrent;
   Double_t        H_BCM4A_Hel_scalerCut;
   Double_t        H_BCM4A_Hel_scalerRate;
   Double_t        H_BCM4B_scaler;
   Double_t        H_BCM4B_scalerCharge;
   Double_t        H_BCM4B_scalerChargeCut;
   Double_t        H_BCM4B_scalerCurrent;
   Double_t        H_BCM4B_scalerCut;
   Double_t        H_BCM4B_scalerRate;
   Double_t        H_BCM4B_Hel_scaler;
   Double_t        H_BCM4B_Hel_scalerCharge;
   Double_t        H_BCM4B_Hel_scalerChargeCut;
   Double_t        H_BCM4B_Hel_scalerCurrent;
   Double_t        H_BCM4B_Hel_scalerCut;
   Double_t        H_BCM4B_Hel_scalerRate;
   Double_t        H_BCM4C_scaler;
   Double_t        H_BCM4C_scalerCharge;
   Double_t        H_BCM4C_scalerChargeCut;
   Double_t        H_BCM4C_scalerCurrent;
   Double_t        H_BCM4C_scalerCut;
   Double_t        H_BCM4C_scalerRate;
   Double_t        H_BCM4C_Hel_scaler;
   Double_t        H_BCM4C_Hel_scalerCharge;
   Double_t        H_BCM4C_Hel_scalerChargeCut;
   Double_t        H_BCM4C_Hel_scalerCurrent;
   Double_t        H_BCM4C_Hel_scalerCut;
   Double_t        H_BCM4C_Hel_scalerRate;
   Double_t        H_BSUM_scaler;
   Double_t        H_BSUM_scalerCut;
   Double_t        H_BSUM_scalerRate;
   Double_t        H_CER_scaler;
   Double_t        H_CER_scalerCut;
   Double_t        H_CER_scalerRate;
   Double_t        H_CSUM_scaler;
   Double_t        H_CSUM_scalerCut;
   Double_t        H_CSUM_scalerRate;
   Double_t        H_DSUM_scaler;
   Double_t        H_DSUM_scalerCut;
   Double_t        H_DSUM_scalerRate;
   Double_t        H_EDTM_scaler;
   Double_t        H_EDTM_scalerCut;
   Double_t        H_EDTM_scalerRate;
   Double_t        H_EDTM_CP_scaler;
   Double_t        H_EDTM_CP_scalerCut;
   Double_t        H_EDTM_CP_scalerRate;
   Double_t        H_Empty_scaler;
   Double_t        H_Empty_scalerCut;
   Double_t        H_Empty_scalerRate;
   Double_t        H_Empty_10_scaler;
   Double_t        H_Empty_10_scalerCut;
   Double_t        H_Empty_10_scalerRate;
   Double_t        H_Empty_11_scaler;
   Double_t        H_Empty_11_scalerCut;
   Double_t        H_Empty_11_scalerRate;
   Double_t        H_Empty_12_scaler;
   Double_t        H_Empty_12_scalerCut;
   Double_t        H_Empty_12_scalerRate;
   Double_t        H_Empty_13_scaler;
   Double_t        H_Empty_13_scalerCut;
   Double_t        H_Empty_13_scalerRate;
   Double_t        H_Empty_14_scaler;
   Double_t        H_Empty_14_scalerCut;
   Double_t        H_Empty_14_scalerRate;
   Double_t        H_Empty_15_scaler;
   Double_t        H_Empty_15_scalerCut;
   Double_t        H_Empty_15_scalerRate;
   Double_t        H_Empty_16_scaler;
   Double_t        H_Empty_16_scalerCut;
   Double_t        H_Empty_16_scalerRate;
   Double_t        H_Empty_17_scaler;
   Double_t        H_Empty_17_scalerCut;
   Double_t        H_Empty_17_scalerRate;
   Double_t        H_Empty_18_scaler;
   Double_t        H_Empty_18_scalerCut;
   Double_t        H_Empty_18_scalerRate;
   Double_t        H_Empty_19_scaler;
   Double_t        H_Empty_19_scalerCut;
   Double_t        H_Empty_19_scalerRate;
   Double_t        H_Empty_2_scaler;
   Double_t        H_Empty_2_scalerCut;
   Double_t        H_Empty_2_scalerRate;
   Double_t        H_Empty_20_scaler;
   Double_t        H_Empty_20_scalerCut;
   Double_t        H_Empty_20_scalerRate;
   Double_t        H_Empty_21_scaler;
   Double_t        H_Empty_21_scalerCut;
   Double_t        H_Empty_21_scalerRate;
   Double_t        H_Empty_22_scaler;
   Double_t        H_Empty_22_scalerCut;
   Double_t        H_Empty_22_scalerRate;
   Double_t        H_Empty_23_scaler;
   Double_t        H_Empty_23_scalerCut;
   Double_t        H_Empty_23_scalerRate;
   Double_t        H_Empty_24_scaler;
   Double_t        H_Empty_24_scalerCut;
   Double_t        H_Empty_24_scalerRate;
   Double_t        H_Empty_25_scaler;
   Double_t        H_Empty_25_scalerCut;
   Double_t        H_Empty_25_scalerRate;
   Double_t        H_Empty_26_scaler;
   Double_t        H_Empty_26_scalerCut;
   Double_t        H_Empty_26_scalerRate;
   Double_t        H_Empty_27_scaler;
   Double_t        H_Empty_27_scalerCut;
   Double_t        H_Empty_27_scalerRate;
   Double_t        H_Empty_28_scaler;
   Double_t        H_Empty_28_scalerCut;
   Double_t        H_Empty_28_scalerRate;
   Double_t        H_Empty_29_scaler;
   Double_t        H_Empty_29_scalerCut;
   Double_t        H_Empty_29_scalerRate;
   Double_t        H_Empty_3_scaler;
   Double_t        H_Empty_3_scalerCut;
   Double_t        H_Empty_3_scalerRate;
   Double_t        H_Empty_30_scaler;
   Double_t        H_Empty_30_scalerCut;
   Double_t        H_Empty_30_scalerRate;
   Double_t        H_Empty_31_scaler;
   Double_t        H_Empty_31_scalerCut;
   Double_t        H_Empty_31_scalerRate;
   Double_t        H_Empty_32_scaler;
   Double_t        H_Empty_32_scalerCut;
   Double_t        H_Empty_32_scalerRate;
   Double_t        H_Empty_33_scaler;
   Double_t        H_Empty_33_scalerCut;
   Double_t        H_Empty_33_scalerRate;
   Double_t        H_Empty_34_scaler;
   Double_t        H_Empty_34_scalerCut;
   Double_t        H_Empty_34_scalerRate;
   Double_t        H_Empty_35_scaler;
   Double_t        H_Empty_35_scalerCut;
   Double_t        H_Empty_35_scalerRate;
   Double_t        H_Empty_36_scaler;
   Double_t        H_Empty_36_scalerCut;
   Double_t        H_Empty_36_scalerRate;
   Double_t        H_Empty_37_scaler;
   Double_t        H_Empty_37_scalerCut;
   Double_t        H_Empty_37_scalerRate;
   Double_t        H_Empty_38_scaler;
   Double_t        H_Empty_38_scalerCut;
   Double_t        H_Empty_38_scalerRate;
   Double_t        H_Empty_39_scaler;
   Double_t        H_Empty_39_scalerCut;
   Double_t        H_Empty_39_scalerRate;
   Double_t        H_Empty_4_scaler;
   Double_t        H_Empty_4_scalerCut;
   Double_t        H_Empty_4_scalerRate;
   Double_t        H_Empty_40_scaler;
   Double_t        H_Empty_40_scalerCut;
   Double_t        H_Empty_40_scalerRate;
   Double_t        H_Empty_41_scaler;
   Double_t        H_Empty_41_scalerCut;
   Double_t        H_Empty_41_scalerRate;
   Double_t        H_Empty_42_scaler;
   Double_t        H_Empty_42_scalerCut;
   Double_t        H_Empty_42_scalerRate;
   Double_t        H_Empty_43_scaler;
   Double_t        H_Empty_43_scalerCut;
   Double_t        H_Empty_43_scalerRate;
   Double_t        H_Empty_44_scaler;
   Double_t        H_Empty_44_scalerCut;
   Double_t        H_Empty_44_scalerRate;
   Double_t        H_Empty_45_scaler;
   Double_t        H_Empty_45_scalerCut;
   Double_t        H_Empty_45_scalerRate;
   Double_t        H_Empty_46_scaler;
   Double_t        H_Empty_46_scalerCut;
   Double_t        H_Empty_46_scalerRate;
   Double_t        H_Empty_47_scaler;
   Double_t        H_Empty_47_scalerCut;
   Double_t        H_Empty_47_scalerRate;
   Double_t        H_Empty_48_scaler;
   Double_t        H_Empty_48_scalerCut;
   Double_t        H_Empty_48_scalerRate;
   Double_t        H_Empty_49_scaler;
   Double_t        H_Empty_49_scalerCut;
   Double_t        H_Empty_49_scalerRate;
   Double_t        H_Empty_5_scaler;
   Double_t        H_Empty_5_scalerCut;
   Double_t        H_Empty_5_scalerRate;
   Double_t        H_Empty_50_scaler;
   Double_t        H_Empty_50_scalerCut;
   Double_t        H_Empty_50_scalerRate;
   Double_t        H_Empty_51_scaler;
   Double_t        H_Empty_51_scalerCut;
   Double_t        H_Empty_51_scalerRate;
   Double_t        H_Empty_52_scaler;
   Double_t        H_Empty_52_scalerCut;
   Double_t        H_Empty_52_scalerRate;
   Double_t        H_Empty_53_scaler;
   Double_t        H_Empty_53_scalerCut;
   Double_t        H_Empty_53_scalerRate;
   Double_t        H_Empty_54_scaler;
   Double_t        H_Empty_54_scalerCut;
   Double_t        H_Empty_54_scalerRate;
   Double_t        H_Empty_55_scaler;
   Double_t        H_Empty_55_scalerCut;
   Double_t        H_Empty_55_scalerRate;
   Double_t        H_Empty_56_scaler;
   Double_t        H_Empty_56_scalerCut;
   Double_t        H_Empty_56_scalerRate;
   Double_t        H_Empty_57_scaler;
   Double_t        H_Empty_57_scalerCut;
   Double_t        H_Empty_57_scalerRate;
   Double_t        H_Empty_58_scaler;
   Double_t        H_Empty_58_scalerCut;
   Double_t        H_Empty_58_scalerRate;
   Double_t        H_Empty_59_scaler;
   Double_t        H_Empty_59_scalerCut;
   Double_t        H_Empty_59_scalerRate;
   Double_t        H_Empty_6_scaler;
   Double_t        H_Empty_6_scalerCut;
   Double_t        H_Empty_6_scalerRate;
   Double_t        H_Empty_60_scaler;
   Double_t        H_Empty_60_scalerCut;
   Double_t        H_Empty_60_scalerRate;
   Double_t        H_Empty_7_scaler;
   Double_t        H_Empty_7_scalerCut;
   Double_t        H_Empty_7_scalerRate;
   Double_t        H_Empty_8_scaler;
   Double_t        H_Empty_8_scalerCut;
   Double_t        H_Empty_8_scalerRate;
   Double_t        H_Empty_9_scaler;
   Double_t        H_Empty_9_scalerCut;
   Double_t        H_Empty_9_scalerRate;
   Double_t        H_HAModStat_scaler;
   Double_t        H_HAModStat_scalerCut;
   Double_t        H_HAModStat_scalerRate;
   Double_t        H_PRHI_scaler;
   Double_t        H_PRHI_scalerCut;
   Double_t        H_PRHI_scalerRate;
   Double_t        H_PRLO_scaler;
   Double_t        H_PRLO_scalerCut;
   Double_t        H_PRLO_scalerRate;
   Double_t        H_S1X_scaler;
   Double_t        H_S1X_scalerCut;
   Double_t        H_S1X_scalerRate;
   Double_t        H_S1XS1Y_scaler;
   Double_t        H_S1XS1Y_scalerCut;
   Double_t        H_S1XS1Y_scalerRate;
   Double_t        H_S1Y_scaler;
   Double_t        H_S1Y_scalerCut;
   Double_t        H_S1Y_scalerRate;
   Double_t        H_S2X_scaler;
   Double_t        H_S2X_scalerCut;
   Double_t        H_S2X_scalerRate;
   Double_t        H_S2XS2Y_scaler;
   Double_t        H_S2XS2Y_scalerCut;
   Double_t        H_S2XS2Y_scalerRate;
   Double_t        H_S2Y_scaler;
   Double_t        H_S2Y_scalerCut;
   Double_t        H_S2Y_scalerRate;
   Double_t        H_SHLO_scaler;
   Double_t        H_SHLO_scalerCut;
   Double_t        H_SHLO_scalerRate;
   Double_t        H_Unser_scaler;
   Double_t        H_Unser_scalerCharge;
   Double_t        H_Unser_scalerChargeCut;
   Double_t        H_Unser_scalerCurrent;
   Double_t        H_Unser_scalerCut;
   Double_t        H_Unser_scalerRate;
   Double_t        H_Unser_Hel_scaler;
   Double_t        H_Unser_Hel_scalerCharge;
   Double_t        H_Unser_Hel_scalerChargeCut;
   Double_t        H_Unser_Hel_scalerCurrent;
   Double_t        H_Unser_Hel_scalerCut;
   Double_t        H_Unser_Hel_scalerRate;
   Double_t        H_cal_1pr_eplane;
   Double_t        H_cal_1pr_eplane_neg;
   Double_t        H_cal_1pr_eplane_pos;
   Double_t        H_cal_1pr_totNumGoodNegAdcHits;
   Double_t        H_cal_1pr_totNumGoodPosAdcHits;
   Double_t        H_cal_1pr_totNumNegAdcHits;
   Double_t        H_cal_1pr_totNumPosAdcHits;
   Double_t        H_cal_1pr_totnumAdcHits;
   Double_t        H_cal_1pr_totnumGoodAdcHits;
   Double_t        H_cal_2ta_eplane;
   Double_t        H_cal_2ta_eplane_neg;
   Double_t        H_cal_2ta_eplane_pos;
   Double_t        H_cal_2ta_totNumGoodNegAdcHits;
   Double_t        H_cal_2ta_totNumGoodPosAdcHits;
   Double_t        H_cal_2ta_totNumNegAdcHits;
   Double_t        H_cal_2ta_totNumPosAdcHits;
   Double_t        H_cal_2ta_totnumAdcHits;
   Double_t        H_cal_2ta_totnumGoodAdcHits;
   Double_t        H_cal_3ta_eplane;
   Double_t        H_cal_3ta_eplane_neg;
   Double_t        H_cal_3ta_eplane_pos;
   Double_t        H_cal_3ta_totNumGoodNegAdcHits;
   Double_t        H_cal_3ta_totNumGoodPosAdcHits;
   Double_t        H_cal_3ta_totNumNegAdcHits;
   Double_t        H_cal_3ta_totNumPosAdcHits;
   Double_t        H_cal_3ta_totnumAdcHits;
   Double_t        H_cal_3ta_totnumGoodAdcHits;
   Double_t        H_cal_4ta_eplane;
   Double_t        H_cal_4ta_eplane_neg;
   Double_t        H_cal_4ta_eplane_pos;
   Double_t        H_cal_4ta_totNumGoodNegAdcHits;
   Double_t        H_cal_4ta_totNumGoodPosAdcHits;
   Double_t        H_cal_4ta_totNumNegAdcHits;
   Double_t        H_cal_4ta_totNumPosAdcHits;
   Double_t        H_cal_4ta_totnumAdcHits;
   Double_t        H_cal_4ta_totnumGoodAdcHits;
   Double_t        H_cal_eprtrack;
   Double_t        H_cal_eprtracknorm;
   Double_t        H_cal_etot;
   Double_t        H_cal_etotnorm;
   Double_t        H_cal_etottracknorm;
   Double_t        H_cal_etrack;
   Double_t        H_cal_etracknorm;
   Double_t        H_cal_nclust;
   Double_t        H_cal_nclusttrack;
   Double_t        H_cal_nhits;
   Double_t        H_cal_ntracks;
   Double_t        H_cal_xclusttrack;
   Double_t        H_cal_xtrack;
   Double_t        H_cal_yclusttrack;
   Double_t        H_cal_ytrack;
   Double_t        H_cer_RefTime;
   Double_t        H_cer_npeSum;
   Double_t        H_cer_totNumAdcHits;
   Double_t        H_cer_totNumGoodAdcHits;
   Double_t        H_cer_totNumTracksFired;
   Double_t        H_cer_totNumTracksMatched;
   Double_t        H_cer_xAtCer;
   Double_t        H_cer_yAtCer;
   Double_t        H_dc_1u1_RefTime;
   Double_t        H_dc_1u1_nhit;
   Double_t        H_dc_1u2_RefTime;
   Double_t        H_dc_1u2_nhit;
   Double_t        H_dc_1v1_RefTime;
   Double_t        H_dc_1v1_nhit;
   Double_t        H_dc_1v2_RefTime;
   Double_t        H_dc_1v2_nhit;
   Double_t        H_dc_1x1_RefTime;
   Double_t        H_dc_1x1_nhit;
   Double_t        H_dc_1x2_RefTime;
   Double_t        H_dc_1x2_nhit;
   Double_t        H_dc_2u1_RefTime;
   Double_t        H_dc_2u1_nhit;
   Double_t        H_dc_2u2_RefTime;
   Double_t        H_dc_2u2_nhit;
   Double_t        H_dc_2v1_RefTime;
   Double_t        H_dc_2v1_nhit;
   Double_t        H_dc_2v2_RefTime;
   Double_t        H_dc_2v2_nhit;
   Double_t        H_dc_2x1_RefTime;
   Double_t        H_dc_2x1_nhit;
   Double_t        H_dc_2x2_RefTime;
   Double_t        H_dc_2x2_nhit;
   Double_t        H_dc_Ch1_maxhits;
   Double_t        H_dc_Ch1_nhit;
   Double_t        H_dc_Ch1_spacepoints;
   Double_t        H_dc_Ch1_trawhit;
   Double_t        H_dc_Ch2_maxhits;
   Double_t        H_dc_Ch2_nhit;
   Double_t        H_dc_Ch2_spacepoints;
   Double_t        H_dc_Ch2_trawhit;
   Double_t        H_dc_InsideDipoleExit;
   Double_t        H_dc_chisq;
   Double_t        H_dc_gtrack_nsp;
   Double_t        H_dc_nhit;
   Double_t        H_dc_nsp;
   Double_t        H_dc_ntrack;
   Double_t        H_dc_sp1_id;
   Double_t        H_dc_sp2_id;
   Double_t        H_dc_stubtest;
   Double_t        H_dc_tnhit;
   Double_t        H_dc_trawhit;
   Double_t        H_dc_x_fp;
   Double_t        H_dc_xp_fp;
   Double_t        H_dc_y_fp;
   Double_t        H_dc_yp_fp;
   Double_t        H_extcor_delta_dp;
   Double_t        H_extcor_delta_p;
   Double_t        H_extcor_delta_xptar;
   Double_t        H_extcor_dp;
   Double_t        H_extcor_ok;
   Double_t        H_extcor_p;
   Double_t        H_extcor_ph;
   Double_t        H_extcor_px;
   Double_t        H_extcor_py;
   Double_t        H_extcor_pz;
   Double_t        H_extcor_th;
   Double_t        H_extcor_x;
   Double_t        H_extcor_xsieve;
   Double_t        H_extcor_y;
   Double_t        H_extcor_ysieve;
   Double_t        H_gtr_beta;
   Double_t        H_gtr_dp;
   Double_t        H_gtr_index;
   Double_t        H_gtr_ok;
   Double_t        H_gtr_p;
   Double_t        H_gtr_ph;
   Double_t        H_gtr_px;
   Double_t        H_gtr_py;
   Double_t        H_gtr_pz;
   Double_t        H_gtr_th;
   Double_t        H_gtr_x;
   Double_t        H_gtr_y;
   Double_t        H_hEL_CLEAN_scaler;
   Double_t        H_hEL_CLEAN_scalerCut;
   Double_t        H_hEL_CLEAN_scalerRate;
   Double_t        H_hEL_HI_scaler;
   Double_t        H_hEL_HI_scalerCut;
   Double_t        H_hEL_HI_scalerRate;
   Double_t        H_hEL_LO_scaler;
   Double_t        H_hEL_LO_scalerCut;
   Double_t        H_hEL_LO_scalerRate;
   Double_t        H_hEL_LO_LO_scaler;
   Double_t        H_hEL_LO_LO_scalerCut;
   Double_t        H_hEL_LO_LO_scalerRate;
   Double_t        H_hEL_REAL_scaler;
   Double_t        H_hEL_REAL_scalerCut;
   Double_t        H_hEL_REAL_scalerRate;
   Double_t        H_hL1ACCP_scaler;
   Double_t        H_hL1ACCP_scalerCut;
   Double_t        H_hL1ACCP_scalerRate;
   Double_t        H_hL1ACCP_Hel_scaler;
   Double_t        H_hL1ACCP_Hel_scalerCut;
   Double_t        H_hL1ACCP_Hel_scalerRate;
   Double_t        H_hPRE100_scaler;
   Double_t        H_hPRE100_scalerCut;
   Double_t        H_hPRE100_scalerRate;
   Double_t        H_hPRE150_scaler;
   Double_t        H_hPRE150_scalerCut;
   Double_t        H_hPRE150_scalerRate;
   Double_t        H_hPRE200_scaler;
   Double_t        H_hPRE200_scalerCut;
   Double_t        H_hPRE200_scalerRate;
   Double_t        H_hPRE40_scaler;
   Double_t        H_hPRE40_scalerCut;
   Double_t        H_hPRE40_scalerRate;
   Double_t        H_hSTOF_scaler;
   Double_t        H_hSTOF_scalerCut;
   Double_t        H_hSTOF_scalerRate;
   Double_t        H_hTREF1_scaler;
   Double_t        H_hTREF1_scalerCut;
   Double_t        H_hTREF1_scalerRate;
   Double_t        H_hTRIG1_scaler;
   Double_t        H_hTRIG1_scalerCut;
   Double_t        H_hTRIG1_scalerRate;
   Double_t        H_hTRIG1_Hel_scaler;
   Double_t        H_hTRIG1_Hel_scalerCut;
   Double_t        H_hTRIG1_Hel_scalerRate;
   Double_t        H_hTRIG2_scaler;
   Double_t        H_hTRIG2_scalerCut;
   Double_t        H_hTRIG2_scalerRate;
   Double_t        H_hTRIG2_Hel_scaler;
   Double_t        H_hTRIG2_Hel_scalerCut;
   Double_t        H_hTRIG2_Hel_scalerRate;
   Double_t        H_hTRIG3_scaler;
   Double_t        H_hTRIG3_scalerCut;
   Double_t        H_hTRIG3_scalerRate;
   Double_t        H_hTRIG3_Hel_scaler;
   Double_t        H_hTRIG3_Hel_scalerCut;
   Double_t        H_hTRIG3_Hel_scalerRate;
   Double_t        H_hTRIG4_scaler;
   Double_t        H_hTRIG4_scalerCut;
   Double_t        H_hTRIG4_scalerRate;
   Double_t        H_hTRIG4_Hel_scaler;
   Double_t        H_hTRIG4_Hel_scalerCut;
   Double_t        H_hTRIG4_Hel_scalerRate;
   Double_t        H_hTRIG5_scaler;
   Double_t        H_hTRIG5_scalerCut;
   Double_t        H_hTRIG5_scalerRate;
   Double_t        H_hTRIG5_Hel_scaler;
   Double_t        H_hTRIG5_Hel_scalerCut;
   Double_t        H_hTRIG5_Hel_scalerRate;
   Double_t        H_hTRIG6_scaler;
   Double_t        H_hTRIG6_scalerCut;
   Double_t        H_hTRIG6_scalerRate;
   Double_t        H_hTRIG6_Hel_scaler;
   Double_t        H_hTRIG6_Hel_scalerCut;
   Double_t        H_hTRIG6_Hel_scalerRate;
   Double_t        H_hod_1x_DiffDisTrack;
   Double_t        H_hod_1x_NegAdcRefDiffTime;
   Double_t        H_hod_1x_NegAdcRefTime;
   Double_t        H_hod_1x_NegTdcRefDiffTime;
   Double_t        H_hod_1x_NegTdcRefTime;
   Double_t        H_hod_1x_NumClus;
   Double_t        H_hod_1x_PosAdcRefDiffTime;
   Double_t        H_hod_1x_PosAdcRefTime;
   Double_t        H_hod_1x_PosTdcRefDiffTime;
   Double_t        H_hod_1x_PosTdcRefTime;
   Double_t        H_hod_1x_ScinXPos;
   Double_t        H_hod_1x_ScinYPos;
   Double_t        H_hod_1x_TrackXPos;
   Double_t        H_hod_1x_TrackYPos;
   Double_t        H_hod_1x_fptime;
   Double_t        H_hod_1x_nhits;
   Double_t        H_hod_1x_totNumAdcHits;
   Double_t        H_hod_1x_totNumGoodAdcHits;
   Double_t        H_hod_1x_totNumGoodNegAdcHits;
   Double_t        H_hod_1x_totNumGoodNegTdcHits;
   Double_t        H_hod_1x_totNumGoodPosAdcHits;
   Double_t        H_hod_1x_totNumGoodPosTdcHits;
   Double_t        H_hod_1x_totNumGoodTdcHits;
   Double_t        H_hod_1x_totNumNegAdcHits;
   Double_t        H_hod_1x_totNumNegTdcHits;
   Double_t        H_hod_1x_totNumPosAdcHits;
   Double_t        H_hod_1x_totNumPosTdcHits;
   Double_t        H_hod_1x_totNumTdcHits;
   Double_t        H_hod_1x1_negScaler;
   Double_t        H_hod_1x1_negScalerCut;
   Double_t        H_hod_1x1_negScalerRate;
   Double_t        H_hod_1x1_posScaler;
   Double_t        H_hod_1x1_posScalerCut;
   Double_t        H_hod_1x1_posScalerRate;
   Double_t        H_hod_1x10_negScaler;
   Double_t        H_hod_1x10_negScalerCut;
   Double_t        H_hod_1x10_negScalerRate;
   Double_t        H_hod_1x10_posScaler;
   Double_t        H_hod_1x10_posScalerCut;
   Double_t        H_hod_1x10_posScalerRate;
   Double_t        H_hod_1x11_negScaler;
   Double_t        H_hod_1x11_negScalerCut;
   Double_t        H_hod_1x11_negScalerRate;
   Double_t        H_hod_1x11_posScaler;
   Double_t        H_hod_1x11_posScalerCut;
   Double_t        H_hod_1x11_posScalerRate;
   Double_t        H_hod_1x12_negScaler;
   Double_t        H_hod_1x12_negScalerCut;
   Double_t        H_hod_1x12_negScalerRate;
   Double_t        H_hod_1x12_posScaler;
   Double_t        H_hod_1x12_posScalerCut;
   Double_t        H_hod_1x12_posScalerRate;
   Double_t        H_hod_1x13_negScaler;
   Double_t        H_hod_1x13_negScalerCut;
   Double_t        H_hod_1x13_negScalerRate;
   Double_t        H_hod_1x13_posScaler;
   Double_t        H_hod_1x13_posScalerCut;
   Double_t        H_hod_1x13_posScalerRate;
   Double_t        H_hod_1x14_negScaler;
   Double_t        H_hod_1x14_negScalerCut;
   Double_t        H_hod_1x14_negScalerRate;
   Double_t        H_hod_1x14_posScaler;
   Double_t        H_hod_1x14_posScalerCut;
   Double_t        H_hod_1x14_posScalerRate;
   Double_t        H_hod_1x15_negScaler;
   Double_t        H_hod_1x15_negScalerCut;
   Double_t        H_hod_1x15_negScalerRate;
   Double_t        H_hod_1x15_posScaler;
   Double_t        H_hod_1x15_posScalerCut;
   Double_t        H_hod_1x15_posScalerRate;
   Double_t        H_hod_1x16_negScaler;
   Double_t        H_hod_1x16_negScalerCut;
   Double_t        H_hod_1x16_negScalerRate;
   Double_t        H_hod_1x16_posScaler;
   Double_t        H_hod_1x16_posScalerCut;
   Double_t        H_hod_1x16_posScalerRate;
   Double_t        H_hod_1x2_negScaler;
   Double_t        H_hod_1x2_negScalerCut;
   Double_t        H_hod_1x2_negScalerRate;
   Double_t        H_hod_1x2_posScaler;
   Double_t        H_hod_1x2_posScalerCut;
   Double_t        H_hod_1x2_posScalerRate;
   Double_t        H_hod_1x3_negScaler;
   Double_t        H_hod_1x3_negScalerCut;
   Double_t        H_hod_1x3_negScalerRate;
   Double_t        H_hod_1x3_posScaler;
   Double_t        H_hod_1x3_posScalerCut;
   Double_t        H_hod_1x3_posScalerRate;
   Double_t        H_hod_1x4_negScaler;
   Double_t        H_hod_1x4_negScalerCut;
   Double_t        H_hod_1x4_negScalerRate;
   Double_t        H_hod_1x4_posScaler;
   Double_t        H_hod_1x4_posScalerCut;
   Double_t        H_hod_1x4_posScalerRate;
   Double_t        H_hod_1x5_negScaler;
   Double_t        H_hod_1x5_negScalerCut;
   Double_t        H_hod_1x5_negScalerRate;
   Double_t        H_hod_1x5_posScaler;
   Double_t        H_hod_1x5_posScalerCut;
   Double_t        H_hod_1x5_posScalerRate;
   Double_t        H_hod_1x6_negScaler;
   Double_t        H_hod_1x6_negScalerCut;
   Double_t        H_hod_1x6_negScalerRate;
   Double_t        H_hod_1x6_posScaler;
   Double_t        H_hod_1x6_posScalerCut;
   Double_t        H_hod_1x6_posScalerRate;
   Double_t        H_hod_1x7_negScaler;
   Double_t        H_hod_1x7_negScalerCut;
   Double_t        H_hod_1x7_negScalerRate;
   Double_t        H_hod_1x7_posScaler;
   Double_t        H_hod_1x7_posScalerCut;
   Double_t        H_hod_1x7_posScalerRate;
   Double_t        H_hod_1x8_negScaler;
   Double_t        H_hod_1x8_negScalerCut;
   Double_t        H_hod_1x8_negScalerRate;
   Double_t        H_hod_1x8_posScaler;
   Double_t        H_hod_1x8_posScalerCut;
   Double_t        H_hod_1x8_posScalerRate;
   Double_t        H_hod_1x9_negScaler;
   Double_t        H_hod_1x9_negScalerCut;
   Double_t        H_hod_1x9_negScalerRate;
   Double_t        H_hod_1x9_posScaler;
   Double_t        H_hod_1x9_posScalerCut;
   Double_t        H_hod_1x9_posScalerRate;
   Double_t        H_hod_1y_DiffDisTrack;
   Double_t        H_hod_1y_NegAdcRefDiffTime;
   Double_t        H_hod_1y_NegAdcRefTime;
   Double_t        H_hod_1y_NegTdcRefDiffTime;
   Double_t        H_hod_1y_NegTdcRefTime;
   Double_t        H_hod_1y_NumClus;
   Double_t        H_hod_1y_PosAdcRefDiffTime;
   Double_t        H_hod_1y_PosAdcRefTime;
   Double_t        H_hod_1y_PosTdcRefDiffTime;
   Double_t        H_hod_1y_PosTdcRefTime;
   Double_t        H_hod_1y_ScinXPos;
   Double_t        H_hod_1y_ScinYPos;
   Double_t        H_hod_1y_TrackXPos;
   Double_t        H_hod_1y_TrackYPos;
   Double_t        H_hod_1y_fptime;
   Double_t        H_hod_1y_nhits;
   Double_t        H_hod_1y_totNumAdcHits;
   Double_t        H_hod_1y_totNumGoodAdcHits;
   Double_t        H_hod_1y_totNumGoodNegAdcHits;
   Double_t        H_hod_1y_totNumGoodNegTdcHits;
   Double_t        H_hod_1y_totNumGoodPosAdcHits;
   Double_t        H_hod_1y_totNumGoodPosTdcHits;
   Double_t        H_hod_1y_totNumGoodTdcHits;
   Double_t        H_hod_1y_totNumNegAdcHits;
   Double_t        H_hod_1y_totNumNegTdcHits;
   Double_t        H_hod_1y_totNumPosAdcHits;
   Double_t        H_hod_1y_totNumPosTdcHits;
   Double_t        H_hod_1y_totNumTdcHits;
   Double_t        H_hod_1y1_negScaler;
   Double_t        H_hod_1y1_negScalerCut;
   Double_t        H_hod_1y1_negScalerRate;
   Double_t        H_hod_1y1_posScaler;
   Double_t        H_hod_1y1_posScalerCut;
   Double_t        H_hod_1y1_posScalerRate;
   Double_t        H_hod_1y10_negScaler;
   Double_t        H_hod_1y10_negScalerCut;
   Double_t        H_hod_1y10_negScalerRate;
   Double_t        H_hod_1y10_posScaler;
   Double_t        H_hod_1y10_posScalerCut;
   Double_t        H_hod_1y10_posScalerRate;
   Double_t        H_hod_1y2_negScaler;
   Double_t        H_hod_1y2_negScalerCut;
   Double_t        H_hod_1y2_negScalerRate;
   Double_t        H_hod_1y2_posScaler;
   Double_t        H_hod_1y2_posScalerCut;
   Double_t        H_hod_1y2_posScalerRate;
   Double_t        H_hod_1y3_negScaler;
   Double_t        H_hod_1y3_negScalerCut;
   Double_t        H_hod_1y3_negScalerRate;
   Double_t        H_hod_1y3_posScaler;
   Double_t        H_hod_1y3_posScalerCut;
   Double_t        H_hod_1y3_posScalerRate;
   Double_t        H_hod_1y4_negScaler;
   Double_t        H_hod_1y4_negScalerCut;
   Double_t        H_hod_1y4_negScalerRate;
   Double_t        H_hod_1y4_posScaler;
   Double_t        H_hod_1y4_posScalerCut;
   Double_t        H_hod_1y4_posScalerRate;
   Double_t        H_hod_1y5_negScaler;
   Double_t        H_hod_1y5_negScalerCut;
   Double_t        H_hod_1y5_negScalerRate;
   Double_t        H_hod_1y5_posScaler;
   Double_t        H_hod_1y5_posScalerCut;
   Double_t        H_hod_1y5_posScalerRate;
   Double_t        H_hod_1y6_negScaler;
   Double_t        H_hod_1y6_negScalerCut;
   Double_t        H_hod_1y6_negScalerRate;
   Double_t        H_hod_1y6_posScaler;
   Double_t        H_hod_1y6_posScalerCut;
   Double_t        H_hod_1y6_posScalerRate;
   Double_t        H_hod_1y7_negScaler;
   Double_t        H_hod_1y7_negScalerCut;
   Double_t        H_hod_1y7_negScalerRate;
   Double_t        H_hod_1y7_posScaler;
   Double_t        H_hod_1y7_posScalerCut;
   Double_t        H_hod_1y7_posScalerRate;
   Double_t        H_hod_1y8_negScaler;
   Double_t        H_hod_1y8_negScalerCut;
   Double_t        H_hod_1y8_negScalerRate;
   Double_t        H_hod_1y8_posScaler;
   Double_t        H_hod_1y8_posScalerCut;
   Double_t        H_hod_1y8_posScalerRate;
   Double_t        H_hod_1y9_negScaler;
   Double_t        H_hod_1y9_negScalerCut;
   Double_t        H_hod_1y9_negScalerRate;
   Double_t        H_hod_1y9_posScaler;
   Double_t        H_hod_1y9_posScalerCut;
   Double_t        H_hod_1y9_posScalerRate;
   Double_t        H_hod_2x_DiffDisTrack;
   Double_t        H_hod_2x_NegAdcRefDiffTime;
   Double_t        H_hod_2x_NegAdcRefTime;
   Double_t        H_hod_2x_NegTdcRefDiffTime;
   Double_t        H_hod_2x_NegTdcRefTime;
   Double_t        H_hod_2x_NumClus;
   Double_t        H_hod_2x_PosAdcRefDiffTime;
   Double_t        H_hod_2x_PosAdcRefTime;
   Double_t        H_hod_2x_PosTdcRefDiffTime;
   Double_t        H_hod_2x_PosTdcRefTime;
   Double_t        H_hod_2x_ScinXPos;
   Double_t        H_hod_2x_ScinYPos;
   Double_t        H_hod_2x_TrackXPos;
   Double_t        H_hod_2x_TrackYPos;
   Double_t        H_hod_2x_fptime;
   Double_t        H_hod_2x_nhits;
   Double_t        H_hod_2x_totNumAdcHits;
   Double_t        H_hod_2x_totNumGoodAdcHits;
   Double_t        H_hod_2x_totNumGoodNegAdcHits;
   Double_t        H_hod_2x_totNumGoodNegTdcHits;
   Double_t        H_hod_2x_totNumGoodPosAdcHits;
   Double_t        H_hod_2x_totNumGoodPosTdcHits;
   Double_t        H_hod_2x_totNumGoodTdcHits;
   Double_t        H_hod_2x_totNumNegAdcHits;
   Double_t        H_hod_2x_totNumNegTdcHits;
   Double_t        H_hod_2x_totNumPosAdcHits;
   Double_t        H_hod_2x_totNumPosTdcHits;
   Double_t        H_hod_2x_totNumTdcHits;
   Double_t        H_hod_2x1_negScaler;
   Double_t        H_hod_2x1_negScalerCut;
   Double_t        H_hod_2x1_negScalerRate;
   Double_t        H_hod_2x1_posScaler;
   Double_t        H_hod_2x1_posScalerCut;
   Double_t        H_hod_2x1_posScalerRate;
   Double_t        H_hod_2x10_negScaler;
   Double_t        H_hod_2x10_negScalerCut;
   Double_t        H_hod_2x10_negScalerRate;
   Double_t        H_hod_2x10_posScaler;
   Double_t        H_hod_2x10_posScalerCut;
   Double_t        H_hod_2x10_posScalerRate;
   Double_t        H_hod_2x11_negScaler;
   Double_t        H_hod_2x11_negScalerCut;
   Double_t        H_hod_2x11_negScalerRate;
   Double_t        H_hod_2x11_posScaler;
   Double_t        H_hod_2x11_posScalerCut;
   Double_t        H_hod_2x11_posScalerRate;
   Double_t        H_hod_2x12_negScaler;
   Double_t        H_hod_2x12_negScalerCut;
   Double_t        H_hod_2x12_negScalerRate;
   Double_t        H_hod_2x12_posScaler;
   Double_t        H_hod_2x12_posScalerCut;
   Double_t        H_hod_2x12_posScalerRate;
   Double_t        H_hod_2x13_negScaler;
   Double_t        H_hod_2x13_negScalerCut;
   Double_t        H_hod_2x13_negScalerRate;
   Double_t        H_hod_2x13_posScaler;
   Double_t        H_hod_2x13_posScalerCut;
   Double_t        H_hod_2x13_posScalerRate;
   Double_t        H_hod_2x14_negScaler;
   Double_t        H_hod_2x14_negScalerCut;
   Double_t        H_hod_2x14_negScalerRate;
   Double_t        H_hod_2x14_posScaler;
   Double_t        H_hod_2x14_posScalerCut;
   Double_t        H_hod_2x14_posScalerRate;
   Double_t        H_hod_2x15_negScaler;
   Double_t        H_hod_2x15_negScalerCut;
   Double_t        H_hod_2x15_negScalerRate;
   Double_t        H_hod_2x15_posScaler;
   Double_t        H_hod_2x15_posScalerCut;
   Double_t        H_hod_2x15_posScalerRate;
   Double_t        H_hod_2x16_negScaler;
   Double_t        H_hod_2x16_negScalerCut;
   Double_t        H_hod_2x16_negScalerRate;
   Double_t        H_hod_2x16_posScaler;
   Double_t        H_hod_2x16_posScalerCut;
   Double_t        H_hod_2x16_posScalerRate;
   Double_t        H_hod_2x2_negScaler;
   Double_t        H_hod_2x2_negScalerCut;
   Double_t        H_hod_2x2_negScalerRate;
   Double_t        H_hod_2x2_posScaler;
   Double_t        H_hod_2x2_posScalerCut;
   Double_t        H_hod_2x2_posScalerRate;
   Double_t        H_hod_2x3_negScaler;
   Double_t        H_hod_2x3_negScalerCut;
   Double_t        H_hod_2x3_negScalerRate;
   Double_t        H_hod_2x3_posScaler;
   Double_t        H_hod_2x3_posScalerCut;
   Double_t        H_hod_2x3_posScalerRate;
   Double_t        H_hod_2x4_negScaler;
   Double_t        H_hod_2x4_negScalerCut;
   Double_t        H_hod_2x4_negScalerRate;
   Double_t        H_hod_2x4_posScaler;
   Double_t        H_hod_2x4_posScalerCut;
   Double_t        H_hod_2x4_posScalerRate;
   Double_t        H_hod_2x5_negScaler;
   Double_t        H_hod_2x5_negScalerCut;
   Double_t        H_hod_2x5_negScalerRate;
   Double_t        H_hod_2x5_posScaler;
   Double_t        H_hod_2x5_posScalerCut;
   Double_t        H_hod_2x5_posScalerRate;
   Double_t        H_hod_2x6_negScaler;
   Double_t        H_hod_2x6_negScalerCut;
   Double_t        H_hod_2x6_negScalerRate;
   Double_t        H_hod_2x6_posScaler;
   Double_t        H_hod_2x6_posScalerCut;
   Double_t        H_hod_2x6_posScalerRate;
   Double_t        H_hod_2x7_negScaler;
   Double_t        H_hod_2x7_negScalerCut;
   Double_t        H_hod_2x7_negScalerRate;
   Double_t        H_hod_2x7_posScaler;
   Double_t        H_hod_2x7_posScalerCut;
   Double_t        H_hod_2x7_posScalerRate;
   Double_t        H_hod_2x8_negScaler;
   Double_t        H_hod_2x8_negScalerCut;
   Double_t        H_hod_2x8_negScalerRate;
   Double_t        H_hod_2x8_posScaler;
   Double_t        H_hod_2x8_posScalerCut;
   Double_t        H_hod_2x8_posScalerRate;
   Double_t        H_hod_2x9_negScaler;
   Double_t        H_hod_2x9_negScalerCut;
   Double_t        H_hod_2x9_negScalerRate;
   Double_t        H_hod_2x9_posScaler;
   Double_t        H_hod_2x9_posScalerCut;
   Double_t        H_hod_2x9_posScalerRate;
   Double_t        H_hod_2y_DiffDisTrack;
   Double_t        H_hod_2y_NegAdcRefDiffTime;
   Double_t        H_hod_2y_NegAdcRefTime;
   Double_t        H_hod_2y_NegTdcRefDiffTime;
   Double_t        H_hod_2y_NegTdcRefTime;
   Double_t        H_hod_2y_NumClus;
   Double_t        H_hod_2y_PosAdcRefDiffTime;
   Double_t        H_hod_2y_PosAdcRefTime;
   Double_t        H_hod_2y_PosTdcRefDiffTime;
   Double_t        H_hod_2y_PosTdcRefTime;
   Double_t        H_hod_2y_ScinXPos;
   Double_t        H_hod_2y_ScinYPos;
   Double_t        H_hod_2y_TrackXPos;
   Double_t        H_hod_2y_TrackYPos;
   Double_t        H_hod_2y_fptime;
   Double_t        H_hod_2y_nhits;
   Double_t        H_hod_2y_totNumAdcHits;
   Double_t        H_hod_2y_totNumGoodAdcHits;
   Double_t        H_hod_2y_totNumGoodNegAdcHits;
   Double_t        H_hod_2y_totNumGoodNegTdcHits;
   Double_t        H_hod_2y_totNumGoodPosAdcHits;
   Double_t        H_hod_2y_totNumGoodPosTdcHits;
   Double_t        H_hod_2y_totNumGoodTdcHits;
   Double_t        H_hod_2y_totNumNegAdcHits;
   Double_t        H_hod_2y_totNumNegTdcHits;
   Double_t        H_hod_2y_totNumPosAdcHits;
   Double_t        H_hod_2y_totNumPosTdcHits;
   Double_t        H_hod_2y_totNumTdcHits;
   Double_t        H_hod_2y1_negScaler;
   Double_t        H_hod_2y1_negScalerCut;
   Double_t        H_hod_2y1_negScalerRate;
   Double_t        H_hod_2y1_posScaler;
   Double_t        H_hod_2y1_posScalerCut;
   Double_t        H_hod_2y1_posScalerRate;
   Double_t        H_hod_2y10_negScaler;
   Double_t        H_hod_2y10_negScalerCut;
   Double_t        H_hod_2y10_negScalerRate;
   Double_t        H_hod_2y10_posScaler;
   Double_t        H_hod_2y10_posScalerCut;
   Double_t        H_hod_2y10_posScalerRate;
   Double_t        H_hod_2y2_negScaler;
   Double_t        H_hod_2y2_negScalerCut;
   Double_t        H_hod_2y2_negScalerRate;
   Double_t        H_hod_2y2_posScaler;
   Double_t        H_hod_2y2_posScalerCut;
   Double_t        H_hod_2y2_posScalerRate;
   Double_t        H_hod_2y3_negScaler;
   Double_t        H_hod_2y3_negScalerCut;
   Double_t        H_hod_2y3_negScalerRate;
   Double_t        H_hod_2y3_posScaler;
   Double_t        H_hod_2y3_posScalerCut;
   Double_t        H_hod_2y3_posScalerRate;
   Double_t        H_hod_2y4_negScaler;
   Double_t        H_hod_2y4_negScalerCut;
   Double_t        H_hod_2y4_negScalerRate;
   Double_t        H_hod_2y4_posScaler;
   Double_t        H_hod_2y4_posScalerCut;
   Double_t        H_hod_2y4_posScalerRate;
   Double_t        H_hod_2y5_negScaler;
   Double_t        H_hod_2y5_negScalerCut;
   Double_t        H_hod_2y5_negScalerRate;
   Double_t        H_hod_2y5_posScaler;
   Double_t        H_hod_2y5_posScalerCut;
   Double_t        H_hod_2y5_posScalerRate;
   Double_t        H_hod_2y6_negScaler;
   Double_t        H_hod_2y6_negScalerCut;
   Double_t        H_hod_2y6_negScalerRate;
   Double_t        H_hod_2y6_posScaler;
   Double_t        H_hod_2y6_posScalerCut;
   Double_t        H_hod_2y6_posScalerRate;
   Double_t        H_hod_2y7_negScaler;
   Double_t        H_hod_2y7_negScalerCut;
   Double_t        H_hod_2y7_negScalerRate;
   Double_t        H_hod_2y7_posScaler;
   Double_t        H_hod_2y7_posScalerCut;
   Double_t        H_hod_2y7_posScalerRate;
   Double_t        H_hod_2y8_negScaler;
   Double_t        H_hod_2y8_negScalerCut;
   Double_t        H_hod_2y8_negScalerRate;
   Double_t        H_hod_2y8_posScaler;
   Double_t        H_hod_2y8_posScalerCut;
   Double_t        H_hod_2y8_posScalerRate;
   Double_t        H_hod_2y9_negScaler;
   Double_t        H_hod_2y9_negScalerCut;
   Double_t        H_hod_2y9_negScalerRate;
   Double_t        H_hod_2y9_posScaler;
   Double_t        H_hod_2y9_posScalerCut;
   Double_t        H_hod_2y9_posScalerRate;
   Double_t        H_hod_TimeHist_FpTime_Hits;
   Double_t        H_hod_TimeHist_FpTime_NumPeaks;
   Double_t        H_hod_TimeHist_FpTime_Peak;
   Double_t        H_hod_TimeHist_FpTime_Sigma;
   Double_t        H_hod_TimeHist_StartTime_Hits;
   Double_t        H_hod_TimeHist_StartTime_NumPeaks;
   Double_t        H_hod_TimeHist_StartTime_Peak;
   Double_t        H_hod_TimeHist_StartTime_Sigma;
   Double_t        H_hod_adctdc_offset;
   Double_t        H_hod_beta;
   Double_t        H_hod_betachisqnotrack;
   Double_t        H_hod_betanotrack;
   Double_t        H_hod_fpHitsTime;
   Double_t        H_hod_goodscinhit;
   Double_t        H_hod_goodstarttime;
   Double_t        H_hod_starttime;
   Double_t        H_kin_Q2;
   Double_t        H_kin_W;
   Double_t        H_kin_W2;
   Double_t        H_kin_epsilon;
   Double_t        H_kin_nu;
   Double_t        H_kin_omega;
   Double_t        H_kin_ph_q;
   Double_t        H_kin_q3m;
   Double_t        H_kin_q_x;
   Double_t        H_kin_q_y;
   Double_t        H_kin_q_z;
   Double_t        H_kin_scat_ang_deg;
   Double_t        H_kin_scat_ang_rad;
   Double_t        H_kin_th_q;
   Double_t        H_kin_x_bj;
   Double_t        H_pEL_CLEAN_scaler;
   Double_t        H_pEL_CLEAN_scalerCut;
   Double_t        H_pEL_CLEAN_scalerRate;
   Double_t        H_pEL_HI_scaler;
   Double_t        H_pEL_HI_scalerCut;
   Double_t        H_pEL_HI_scalerRate;
   Double_t        H_pEL_LO_scaler;
   Double_t        H_pEL_LO_scalerCut;
   Double_t        H_pEL_LO_scalerRate;
   Double_t        H_pEL_LO_LO_scaler;
   Double_t        H_pEL_LO_LO_scalerCut;
   Double_t        H_pEL_LO_LO_scalerRate;
   Double_t        H_pEL_REAL_scaler;
   Double_t        H_pEL_REAL_scalerCut;
   Double_t        H_pEL_REAL_scalerRate;
   Double_t        H_pPRE100_scaler;
   Double_t        H_pPRE100_scalerCut;
   Double_t        H_pPRE100_scalerRate;
   Double_t        H_pPRE150_scaler;
   Double_t        H_pPRE150_scalerCut;
   Double_t        H_pPRE150_scalerRate;
   Double_t        H_pPRE200_scaler;
   Double_t        H_pPRE200_scalerCut;
   Double_t        H_pPRE200_scalerRate;
   Double_t        H_pPRE40_scaler;
   Double_t        H_pPRE40_scalerCut;
   Double_t        H_pPRE40_scalerRate;
   Double_t        H_pSTOF_scaler;
   Double_t        H_pSTOF_scalerCut;
   Double_t        H_pSTOF_scalerRate;
   Double_t        H_pTRIG1_scaler;
   Double_t        H_pTRIG1_scalerCut;
   Double_t        H_pTRIG1_scalerRate;
   Double_t        H_pTRIG1_CP_scaler;
   Double_t        H_pTRIG1_CP_scalerCut;
   Double_t        H_pTRIG1_CP_scalerRate;
   Double_t        H_pTRIG1_Hel_scaler;
   Double_t        H_pTRIG1_Hel_scalerCut;
   Double_t        H_pTRIG1_Hel_scalerRate;
   Double_t        H_pTRIG2_scaler;
   Double_t        H_pTRIG2_scalerCut;
   Double_t        H_pTRIG2_scalerRate;
   Double_t        H_pTRIG2_Hel_scaler;
   Double_t        H_pTRIG2_Hel_scalerCut;
   Double_t        H_pTRIG2_Hel_scalerRate;
   Double_t        H_pTRIG3_scaler;
   Double_t        H_pTRIG3_scalerCut;
   Double_t        H_pTRIG3_scalerRate;
   Double_t        H_pTRIG3_Hel_scaler;
   Double_t        H_pTRIG3_Hel_scalerCut;
   Double_t        H_pTRIG3_Hel_scalerRate;
   Double_t        H_pTRIG4_scaler;
   Double_t        H_pTRIG4_scalerCut;
   Double_t        H_pTRIG4_scalerRate;
   Double_t        H_pTRIG4_Hel_scaler;
   Double_t        H_pTRIG4_Hel_scalerCut;
   Double_t        H_pTRIG4_Hel_scalerRate;
   Double_t        H_pTRIG5_scaler;
   Double_t        H_pTRIG5_scalerCut;
   Double_t        H_pTRIG5_scalerRate;
   Double_t        H_pTRIG5_Hel_scaler;
   Double_t        H_pTRIG5_Hel_scalerCut;
   Double_t        H_pTRIG5_Hel_scalerRate;
   Double_t        H_pTRIG6_scaler;
   Double_t        H_pTRIG6_scalerCut;
   Double_t        H_pTRIG6_scalerRate;
   Double_t        H_pTRIG6_Hel_scaler;
   Double_t        H_pTRIG6_Hel_scalerCut;
   Double_t        H_pTRIG6_Hel_scalerRate;
   Double_t        H_present;
   Double_t        H_rb_dir_x;
   Double_t        H_rb_dir_y;
   Double_t        H_rb_dir_z;
   Double_t        H_rb_e;
   Double_t        H_rb_ok;
   Double_t        H_rb_p;
   Double_t        H_rb_ph;
   Double_t        H_rb_pol;
   Double_t        H_rb_px;
   Double_t        H_rb_py;
   Double_t        H_rb_pz;
   Double_t        H_rb_raster_ebeam_epics;
   Double_t        H_rb_raster_fr_xa;
   Double_t        H_rb_raster_fr_xb;
   Double_t        H_rb_raster_fr_xbpmA;
   Double_t        H_rb_raster_fr_xbpmB;
   Double_t        H_rb_raster_fr_xbpmC;
   Double_t        H_rb_raster_fr_xbpm_tar;
   Double_t        H_rb_raster_fr_ya;
   Double_t        H_rb_raster_fr_yb;
   Double_t        H_rb_raster_fr_ybpmA;
   Double_t        H_rb_raster_fr_ybpmB;
   Double_t        H_rb_raster_fr_ybpmC;
   Double_t        H_rb_raster_fr_ybpm_tar;
   Double_t        H_rb_raster_frxaRawAdc;
   Double_t        H_rb_raster_frxa_adc;
   Double_t        H_rb_raster_frxbRawAdc;
   Double_t        H_rb_raster_frxb_adc;
   Double_t        H_rb_raster_fryaRawAdc;
   Double_t        H_rb_raster_frya_adc;
   Double_t        H_rb_raster_frybRawAdc;
   Double_t        H_rb_raster_fryb_adc;
   Double_t        H_rb_th;
   Double_t        H_rb_x;
   Double_t        H_rb_xpos;
   Double_t        H_rb_y;
   Double_t        H_rb_ypos;
   Double_t        H_rb_z;
   Double_t        H_rb_zpos;
   Double_t        H_react_ok;
   Double_t        H_react_x;
   Double_t        H_react_y;
   Double_t        H_react_z;
   Double_t        H_status;
   Double_t        H_tr_PruneSelect;
   Double_t        H_tr_n;
   Double_t        NPS_cal_etot;
   Double_t        NPS_cal_fly_earray;
   Double_t        NPS_cal_fly_nclust;
   Double_t        NPS_cal_fly_ntracks;
   Double_t        NPS_cal_fly_totNumAdcHits;
   Double_t        NPS_cal_fly_totNumGoodAdcHits;
   Double_t        NPS_cal_nclust;
   Double_t        NPS_cal_nhits;
   Double_t        NPS_cal_vtpErrorFlag;
   Double_t        NPS_kin_secondary_Erecoil;
   Double_t        NPS_kin_secondary_MandelS;
   Double_t        NPS_kin_secondary_MandelT;
   Double_t        NPS_kin_secondary_MandelU;
   Double_t        NPS_kin_secondary_Mrecoil;
   Double_t        NPS_kin_secondary_Prec_x;
   Double_t        NPS_kin_secondary_Prec_y;
   Double_t        NPS_kin_secondary_Prec_z;
   Double_t        NPS_kin_secondary_emiss;
   Double_t        NPS_kin_secondary_emiss_nuc;
   Double_t        NPS_kin_secondary_ph_bq;
   Double_t        NPS_kin_secondary_ph_xq;
   Double_t        NPS_kin_secondary_phb_cm;
   Double_t        NPS_kin_secondary_phx_cm;
   Double_t        NPS_kin_secondary_pmiss;
   Double_t        NPS_kin_secondary_pmiss_x;
   Double_t        NPS_kin_secondary_pmiss_y;
   Double_t        NPS_kin_secondary_pmiss_z;
   Double_t        NPS_kin_secondary_px_cm;
   Double_t        NPS_kin_secondary_t_tot_cm;
   Double_t        NPS_kin_secondary_tb;
   Double_t        NPS_kin_secondary_tb_cm;
   Double_t        NPS_kin_secondary_th_bq;
   Double_t        NPS_kin_secondary_th_xq;
   Double_t        NPS_kin_secondary_thb_cm;
   Double_t        NPS_kin_secondary_thx_cm;
   Double_t        NPS_kin_secondary_tx;
   Double_t        NPS_kin_secondary_tx_cm;
   Double_t        NPS_kin_secondary_xangle;
   Double_t        T_helicity_cycle;
   Double_t        T_helicity_hel;
   Double_t        T_helicity_helicity;
   Double_t        T_helicity_helpred;
   Double_t        T_helicity_helrep;
   Double_t        T_helicity_mps;
   Double_t        T_helicity_nqrt;
   Double_t        T_helicity_pcheck;
   Double_t        T_helicity_qrt;
   Double_t        T_hms_TdcRefTime;
   Double_t        T_hms_h1T_tdcMultiplicity;
   Double_t        T_hms_h1T_tdcTime;
   Double_t        T_hms_h1T_tdcTimeRaw;
   Double_t        T_hms_h1X_tdcMultiplicity;
   Double_t        T_hms_h1X_tdcTime;
   Double_t        T_hms_h1X_tdcTimeRaw;
   Double_t        T_hms_h1Y_tdcMultiplicity;
   Double_t        T_hms_h1Y_tdcTime;
   Double_t        T_hms_h1Y_tdcTimeRaw;
   Double_t        T_hms_h2T_tdcMultiplicity;
   Double_t        T_hms_h2T_tdcTime;
   Double_t        T_hms_h2T_tdcTimeRaw;
   Double_t        T_hms_h2X_tdcMultiplicity;
   Double_t        T_hms_h2X_tdcTime;
   Double_t        T_hms_h2X_tdcTimeRaw;
   Double_t        T_hms_h2Y_tdcMultiplicity;
   Double_t        T_hms_h2Y_tdcTime;
   Double_t        T_hms_h2Y_tdcTimeRaw;
   Double_t        T_hms_hAER_adcMultiplicity;
   Double_t        T_hms_hAER_adcPed;
   Double_t        T_hms_hAER_adcPedRaw;
   Double_t        T_hms_hAER_adcPulseAmp;
   Double_t        T_hms_hAER_adcPulseAmpRaw;
   Double_t        T_hms_hAER_adcPulseInt;
   Double_t        T_hms_hAER_adcPulseIntRaw;
   Double_t        T_hms_hAER_adcPulseTime;
   Double_t        T_hms_hAER_adcPulseTimeRaw;
   Double_t        T_hms_hAER_adcSampMultiplicity;
   Double_t        T_hms_hAER_adcSampPed;
   Double_t        T_hms_hAER_adcSampPedRaw;
   Double_t        T_hms_hAER_adcSampPulseAmp;
   Double_t        T_hms_hAER_adcSampPulseAmpRaw;
   Double_t        T_hms_hAER_adcSampPulseInt;
   Double_t        T_hms_hAER_adcSampPulseIntRaw;
   Double_t        T_hms_hAER_adcSampPulseTime;
   Double_t        T_hms_hAER_adcSampPulseTimeRaw;
   Double_t        T_hms_hASUM_adcMultiplicity;
   Double_t        T_hms_hASUM_adcPed;
   Double_t        T_hms_hASUM_adcPedRaw;
   Double_t        T_hms_hASUM_adcPulseAmp;
   Double_t        T_hms_hASUM_adcPulseAmpRaw;
   Double_t        T_hms_hASUM_adcPulseInt;
   Double_t        T_hms_hASUM_adcPulseIntRaw;
   Double_t        T_hms_hASUM_adcPulseTime;
   Double_t        T_hms_hASUM_adcPulseTimeRaw;
   Double_t        T_hms_hASUM_adcSampMultiplicity;
   Double_t        T_hms_hASUM_adcSampPed;
   Double_t        T_hms_hASUM_adcSampPedRaw;
   Double_t        T_hms_hASUM_adcSampPulseAmp;
   Double_t        T_hms_hASUM_adcSampPulseAmpRaw;
   Double_t        T_hms_hASUM_adcSampPulseInt;
   Double_t        T_hms_hASUM_adcSampPulseIntRaw;
   Double_t        T_hms_hASUM_adcSampPulseTime;
   Double_t        T_hms_hASUM_adcSampPulseTimeRaw;
   Double_t        T_hms_hASUM_tdcMultiplicity;
   Double_t        T_hms_hASUM_tdcTime;
   Double_t        T_hms_hASUM_tdcTimeRaw;
   Double_t        T_hms_hBSUM_adcMultiplicity;
   Double_t        T_hms_hBSUM_adcPed;
   Double_t        T_hms_hBSUM_adcPedRaw;
   Double_t        T_hms_hBSUM_adcPulseAmp;
   Double_t        T_hms_hBSUM_adcPulseAmpRaw;
   Double_t        T_hms_hBSUM_adcPulseInt;
   Double_t        T_hms_hBSUM_adcPulseIntRaw;
   Double_t        T_hms_hBSUM_adcPulseTime;
   Double_t        T_hms_hBSUM_adcPulseTimeRaw;
   Double_t        T_hms_hBSUM_adcSampMultiplicity;
   Double_t        T_hms_hBSUM_adcSampPed;
   Double_t        T_hms_hBSUM_adcSampPedRaw;
   Double_t        T_hms_hBSUM_adcSampPulseAmp;
   Double_t        T_hms_hBSUM_adcSampPulseAmpRaw;
   Double_t        T_hms_hBSUM_adcSampPulseInt;
   Double_t        T_hms_hBSUM_adcSampPulseIntRaw;
   Double_t        T_hms_hBSUM_adcSampPulseTime;
   Double_t        T_hms_hBSUM_adcSampPulseTimeRaw;
   Double_t        T_hms_hBSUM_tdcMultiplicity;
   Double_t        T_hms_hBSUM_tdcTime;
   Double_t        T_hms_hBSUM_tdcTimeRaw;
   Double_t        T_hms_hCER_adcMultiplicity;
   Double_t        T_hms_hCER_adcPed;
   Double_t        T_hms_hCER_adcPedRaw;
   Double_t        T_hms_hCER_adcPulseAmp;
   Double_t        T_hms_hCER_adcPulseAmpRaw;
   Double_t        T_hms_hCER_adcPulseInt;
   Double_t        T_hms_hCER_adcPulseIntRaw;
   Double_t        T_hms_hCER_adcPulseTime;
   Double_t        T_hms_hCER_adcPulseTimeRaw;
   Double_t        T_hms_hCER_adcSampMultiplicity;
   Double_t        T_hms_hCER_adcSampPed;
   Double_t        T_hms_hCER_adcSampPedRaw;
   Double_t        T_hms_hCER_adcSampPulseAmp;
   Double_t        T_hms_hCER_adcSampPulseAmpRaw;
   Double_t        T_hms_hCER_adcSampPulseInt;
   Double_t        T_hms_hCER_adcSampPulseIntRaw;
   Double_t        T_hms_hCER_adcSampPulseTime;
   Double_t        T_hms_hCER_adcSampPulseTimeRaw;
   Double_t        T_hms_hCER_tdcMultiplicity;
   Double_t        T_hms_hCER_tdcTime;
   Double_t        T_hms_hCER_tdcTimeRaw;
   Double_t        T_hms_hCSUM_adcMultiplicity;
   Double_t        T_hms_hCSUM_adcPed;
   Double_t        T_hms_hCSUM_adcPedRaw;
   Double_t        T_hms_hCSUM_adcPulseAmp;
   Double_t        T_hms_hCSUM_adcPulseAmpRaw;
   Double_t        T_hms_hCSUM_adcPulseInt;
   Double_t        T_hms_hCSUM_adcPulseIntRaw;
   Double_t        T_hms_hCSUM_adcPulseTime;
   Double_t        T_hms_hCSUM_adcPulseTimeRaw;
   Double_t        T_hms_hCSUM_adcSampMultiplicity;
   Double_t        T_hms_hCSUM_adcSampPed;
   Double_t        T_hms_hCSUM_adcSampPedRaw;
   Double_t        T_hms_hCSUM_adcSampPulseAmp;
   Double_t        T_hms_hCSUM_adcSampPulseAmpRaw;
   Double_t        T_hms_hCSUM_adcSampPulseInt;
   Double_t        T_hms_hCSUM_adcSampPulseIntRaw;
   Double_t        T_hms_hCSUM_adcSampPulseTime;
   Double_t        T_hms_hCSUM_adcSampPulseTimeRaw;
   Double_t        T_hms_hCSUM_tdcMultiplicity;
   Double_t        T_hms_hCSUM_tdcTime;
   Double_t        T_hms_hCSUM_tdcTimeRaw;
   Double_t        T_hms_hDCREF1_tdcMultiplicity;
   Double_t        T_hms_hDCREF1_tdcTime;
   Double_t        T_hms_hDCREF1_tdcTimeRaw;
   Double_t        T_hms_hDCREF2_tdcMultiplicity;
   Double_t        T_hms_hDCREF2_tdcTime;
   Double_t        T_hms_hDCREF2_tdcTimeRaw;
   Double_t        T_hms_hDCREF3_tdcMultiplicity;
   Double_t        T_hms_hDCREF3_tdcTime;
   Double_t        T_hms_hDCREF3_tdcTimeRaw;
   Double_t        T_hms_hDCREF4_tdcMultiplicity;
   Double_t        T_hms_hDCREF4_tdcTime;
   Double_t        T_hms_hDCREF4_tdcTimeRaw;
   Double_t        T_hms_hDCREF5_tdcMultiplicity;
   Double_t        T_hms_hDCREF5_tdcTime;
   Double_t        T_hms_hDCREF5_tdcTimeRaw;
   Double_t        T_hms_hDSUM_adcMultiplicity;
   Double_t        T_hms_hDSUM_adcPed;
   Double_t        T_hms_hDSUM_adcPedRaw;
   Double_t        T_hms_hDSUM_adcPulseAmp;
   Double_t        T_hms_hDSUM_adcPulseAmpRaw;
   Double_t        T_hms_hDSUM_adcPulseInt;
   Double_t        T_hms_hDSUM_adcPulseIntRaw;
   Double_t        T_hms_hDSUM_adcPulseTime;
   Double_t        T_hms_hDSUM_adcPulseTimeRaw;
   Double_t        T_hms_hDSUM_adcSampMultiplicity;
   Double_t        T_hms_hDSUM_adcSampPed;
   Double_t        T_hms_hDSUM_adcSampPedRaw;
   Double_t        T_hms_hDSUM_adcSampPulseAmp;
   Double_t        T_hms_hDSUM_adcSampPulseAmpRaw;
   Double_t        T_hms_hDSUM_adcSampPulseInt;
   Double_t        T_hms_hDSUM_adcSampPulseIntRaw;
   Double_t        T_hms_hDSUM_adcSampPulseTime;
   Double_t        T_hms_hDSUM_adcSampPulseTimeRaw;
   Double_t        T_hms_hDSUM_tdcMultiplicity;
   Double_t        T_hms_hDSUM_tdcTime;
   Double_t        T_hms_hDSUM_tdcTimeRaw;
   Double_t        T_hms_hEDTM_tdcMultiplicity;
   Double_t        T_hms_hEDTM_tdcTime;
   Double_t        T_hms_hEDTM_tdcTimeRaw;
   Double_t        T_hms_hEL_CLEAN_tdcMultiplicity;
   Double_t        T_hms_hEL_CLEAN_tdcTime;
   Double_t        T_hms_hEL_CLEAN_tdcTimeRaw;
   Double_t        T_hms_hEL_HI_tdcMultiplicity;
   Double_t        T_hms_hEL_HI_tdcTime;
   Double_t        T_hms_hEL_HI_tdcTimeRaw;
   Double_t        T_hms_hEL_LO_LO_tdcMultiplicity;
   Double_t        T_hms_hEL_LO_LO_tdcTime;
   Double_t        T_hms_hEL_LO_LO_tdcTimeRaw;
   Double_t        T_hms_hEL_LO_tdcMultiplicity;
   Double_t        T_hms_hEL_LO_tdcTime;
   Double_t        T_hms_hEL_LO_tdcTimeRaw;
   Double_t        T_hms_hEL_REAL_tdcMultiplicity;
   Double_t        T_hms_hEL_REAL_tdcTime;
   Double_t        T_hms_hEL_REAL_tdcTimeRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcMultiplicity;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPed;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPedRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseAmp;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseAmpRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseInt;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseIntRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseTime;
   Double_t        T_hms_hFADC_TREF_ROC1_adcPulseTimeRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampMultiplicity;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPed;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPedRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseAmp;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseAmpRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseInt;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseIntRaw;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseTime;
   Double_t        T_hms_hFADC_TREF_ROC1_adcSampPulseTimeRaw;
   Double_t        T_hms_hHODO_RF_tdcMultiplicity;
   Double_t        T_hms_hHODO_RF_tdcTime;
   Double_t        T_hms_hHODO_RF_tdcTimeRaw;
   Double_t        T_hms_hPRE100_tdcMultiplicity;
   Double_t        T_hms_hPRE100_tdcTime;
   Double_t        T_hms_hPRE100_tdcTimeRaw;
   Double_t        T_hms_hPRE150_tdcMultiplicity;
   Double_t        T_hms_hPRE150_tdcTime;
   Double_t        T_hms_hPRE150_tdcTimeRaw;
   Double_t        T_hms_hPRE200_tdcMultiplicity;
   Double_t        T_hms_hPRE200_tdcTime;
   Double_t        T_hms_hPRE200_tdcTimeRaw;
   Double_t        T_hms_hPRE40_tdcMultiplicity;
   Double_t        T_hms_hPRE40_tdcTime;
   Double_t        T_hms_hPRE40_tdcTimeRaw;
   Double_t        T_hms_hPRHI_tdcMultiplicity;
   Double_t        T_hms_hPRHI_tdcTime;
   Double_t        T_hms_hPRHI_tdcTimeRaw;
   Double_t        T_hms_hPRLO_tdcMultiplicity;
   Double_t        T_hms_hPRLO_tdcTime;
   Double_t        T_hms_hPRLO_tdcTimeRaw;
   Double_t        T_hms_hPSHWR_adcMultiplicity;
   Double_t        T_hms_hPSHWR_adcPed;
   Double_t        T_hms_hPSHWR_adcPedRaw;
   Double_t        T_hms_hPSHWR_adcPulseAmp;
   Double_t        T_hms_hPSHWR_adcPulseAmpRaw;
   Double_t        T_hms_hPSHWR_adcPulseInt;
   Double_t        T_hms_hPSHWR_adcPulseIntRaw;
   Double_t        T_hms_hPSHWR_adcPulseTime;
   Double_t        T_hms_hPSHWR_adcPulseTimeRaw;
   Double_t        T_hms_hPSHWR_adcSampMultiplicity;
   Double_t        T_hms_hPSHWR_adcSampPed;
   Double_t        T_hms_hPSHWR_adcSampPedRaw;
   Double_t        T_hms_hPSHWR_adcSampPulseAmp;
   Double_t        T_hms_hPSHWR_adcSampPulseAmpRaw;
   Double_t        T_hms_hPSHWR_adcSampPulseInt;
   Double_t        T_hms_hPSHWR_adcSampPulseIntRaw;
   Double_t        T_hms_hPSHWR_adcSampPulseTime;
   Double_t        T_hms_hPSHWR_adcSampPulseTimeRaw;
   Double_t        T_hms_hRF_tdcMultiplicity;
   Double_t        T_hms_hRF_tdcTime;
   Double_t        T_hms_hRF_tdcTimeRaw;
   Double_t        T_hms_hSHWR_adcMultiplicity;
   Double_t        T_hms_hSHWR_adcPed;
   Double_t        T_hms_hSHWR_adcPedRaw;
   Double_t        T_hms_hSHWR_adcPulseAmp;
   Double_t        T_hms_hSHWR_adcPulseAmpRaw;
   Double_t        T_hms_hSHWR_adcPulseInt;
   Double_t        T_hms_hSHWR_adcPulseIntRaw;
   Double_t        T_hms_hSHWR_adcPulseTime;
   Double_t        T_hms_hSHWR_adcPulseTimeRaw;
   Double_t        T_hms_hSHWR_adcSampMultiplicity;
   Double_t        T_hms_hSHWR_adcSampPed;
   Double_t        T_hms_hSHWR_adcSampPedRaw;
   Double_t        T_hms_hSHWR_adcSampPulseAmp;
   Double_t        T_hms_hSHWR_adcSampPulseAmpRaw;
   Double_t        T_hms_hSHWR_adcSampPulseInt;
   Double_t        T_hms_hSHWR_adcSampPulseIntRaw;
   Double_t        T_hms_hSHWR_adcSampPulseTime;
   Double_t        T_hms_hSHWR_adcSampPulseTimeRaw;
   Double_t        T_hms_hSHWR_tdcMultiplicity;
   Double_t        T_hms_hSHWR_tdcTime;
   Double_t        T_hms_hSHWR_tdcTimeRaw;
   Double_t        T_hms_hSTOF_tdcMultiplicity;
   Double_t        T_hms_hSTOF_tdcTime;
   Double_t        T_hms_hSTOF_tdcTimeRaw;
   Double_t        T_hms_hT1_tdcMultiplicity;
   Double_t        T_hms_hT1_tdcTime;
   Double_t        T_hms_hT1_tdcTimeRaw;
   Double_t        T_hms_hT2_tdcMultiplicity;
   Double_t        T_hms_hT2_tdcTime;
   Double_t        T_hms_hT2_tdcTimeRaw;
   Double_t        T_hms_hT3_tdcMultiplicity;
   Double_t        T_hms_hT3_tdcTime;
   Double_t        T_hms_hT3_tdcTimeRaw;
   Double_t        T_hms_hTRIG1_tdcMultiplicity;
   Double_t        T_hms_hTRIG1_tdcTime;
   Double_t        T_hms_hTRIG1_tdcTimeRaw;
   Double_t        T_hms_hTRIG2_tdcMultiplicity;
   Double_t        T_hms_hTRIG2_tdcTime;
   Double_t        T_hms_hTRIG2_tdcTimeRaw;
   Double_t        T_hms_hTRIG3_tdcMultiplicity;
   Double_t        T_hms_hTRIG3_tdcTime;
   Double_t        T_hms_hTRIG3_tdcTimeRaw;
   Double_t        T_hms_hTRIG4_tdcMultiplicity;
   Double_t        T_hms_hTRIG4_tdcTime;
   Double_t        T_hms_hTRIG4_tdcTimeRaw;
   Double_t        T_hms_hTRIG5_tdcMultiplicity;
   Double_t        T_hms_hTRIG5_tdcTime;
   Double_t        T_hms_hTRIG5_tdcTimeRaw;
   Double_t        T_hms_hTRIG6_tdcMultiplicity;
   Double_t        T_hms_hTRIG6_tdcTime;
   Double_t        T_hms_hTRIG6_tdcTimeRaw;
   Double_t        T_hms_npsTRIG1_tdcMultiplicity;
   Double_t        T_hms_npsTRIG1_tdcTime;
   Double_t        T_hms_npsTRIG1_tdcTimeRaw;
   Double_t        T_hms_npsTRIG2_tdcMultiplicity;
   Double_t        T_hms_npsTRIG2_tdcTime;
   Double_t        T_hms_npsTRIG2_tdcTimeRaw;
   Double_t        T_hms_npsTRIG3_tdcMultiplicity;
   Double_t        T_hms_npsTRIG3_tdcTime;
   Double_t        T_hms_npsTRIG3_tdcTimeRaw;
   Double_t        T_hms_npsTRIG4_tdcMultiplicity;
   Double_t        T_hms_npsTRIG4_tdcTime;
   Double_t        T_hms_npsTRIG4_tdcTimeRaw;
   Double_t        T_hms_npsTRIG5_tdcMultiplicity;
   Double_t        T_hms_npsTRIG5_tdcTime;
   Double_t        T_hms_npsTRIG5_tdcTimeRaw;
   Double_t        T_hms_npsTRIG6_tdcMultiplicity;
   Double_t        T_hms_npsTRIG6_tdcTime;
   Double_t        T_hms_npsTRIG6_tdcTimeRaw;
   Double_t        T_hms_pEL_CLEAN_tdcMultiplicity;
   Double_t        T_hms_pEL_CLEAN_tdcTime;
   Double_t        T_hms_pEL_CLEAN_tdcTimeRaw;
   Double_t        T_hms_pEL_HI_tdcMultiplicity;
   Double_t        T_hms_pEL_HI_tdcTime;
   Double_t        T_hms_pEL_HI_tdcTimeRaw;
   Double_t        T_hms_pEL_LO_LO_tdcMultiplicity;
   Double_t        T_hms_pEL_LO_LO_tdcTime;
   Double_t        T_hms_pEL_LO_LO_tdcTimeRaw;
   Double_t        T_hms_pEL_LO_tdcMultiplicity;
   Double_t        T_hms_pEL_LO_tdcTime;
   Double_t        T_hms_pEL_LO_tdcTimeRaw;
   Double_t        T_hms_pEL_REAL_tdcMultiplicity;
   Double_t        T_hms_pEL_REAL_tdcTime;
   Double_t        T_hms_pEL_REAL_tdcTimeRaw;
   Double_t        T_hms_pHEL_MPS_adcMultiplicity;
   Double_t        T_hms_pHEL_MPS_adcPed;
   Double_t        T_hms_pHEL_MPS_adcPedRaw;
   Double_t        T_hms_pHEL_MPS_adcPulseAmp;
   Double_t        T_hms_pHEL_MPS_adcPulseAmpRaw;
   Double_t        T_hms_pHEL_MPS_adcPulseInt;
   Double_t        T_hms_pHEL_MPS_adcPulseIntRaw;
   Double_t        T_hms_pHEL_MPS_adcPulseTime;
   Double_t        T_hms_pHEL_MPS_adcPulseTimeRaw;
   Double_t        T_hms_pHEL_MPS_adcSampMultiplicity;
   Double_t        T_hms_pHEL_MPS_adcSampPed;
   Double_t        T_hms_pHEL_MPS_adcSampPedRaw;
   Double_t        T_hms_pHEL_MPS_adcSampPulseAmp;
   Double_t        T_hms_pHEL_MPS_adcSampPulseAmpRaw;
   Double_t        T_hms_pHEL_MPS_adcSampPulseInt;
   Double_t        T_hms_pHEL_MPS_adcSampPulseIntRaw;
   Double_t        T_hms_pHEL_MPS_adcSampPulseTime;
   Double_t        T_hms_pHEL_MPS_adcSampPulseTimeRaw;
   Double_t        T_hms_pHEL_NEG_adcMultiplicity;
   Double_t        T_hms_pHEL_NEG_adcPed;
   Double_t        T_hms_pHEL_NEG_adcPedRaw;
   Double_t        T_hms_pHEL_NEG_adcPulseAmp;
   Double_t        T_hms_pHEL_NEG_adcPulseAmpRaw;
   Double_t        T_hms_pHEL_NEG_adcPulseInt;
   Double_t        T_hms_pHEL_NEG_adcPulseIntRaw;
   Double_t        T_hms_pHEL_NEG_adcPulseTime;
   Double_t        T_hms_pHEL_NEG_adcPulseTimeRaw;
   Double_t        T_hms_pHEL_NEG_adcSampMultiplicity;
   Double_t        T_hms_pHEL_NEG_adcSampPed;
   Double_t        T_hms_pHEL_NEG_adcSampPedRaw;
   Double_t        T_hms_pHEL_NEG_adcSampPulseAmp;
   Double_t        T_hms_pHEL_NEG_adcSampPulseAmpRaw;
   Double_t        T_hms_pHEL_NEG_adcSampPulseInt;
   Double_t        T_hms_pHEL_NEG_adcSampPulseIntRaw;
   Double_t        T_hms_pHEL_NEG_adcSampPulseTime;
   Double_t        T_hms_pHEL_NEG_adcSampPulseTimeRaw;
   Double_t        T_hms_pHEL_POS_adcMultiplicity;
   Double_t        T_hms_pHEL_POS_adcPed;
   Double_t        T_hms_pHEL_POS_adcPedRaw;
   Double_t        T_hms_pHEL_POS_adcPulseAmp;
   Double_t        T_hms_pHEL_POS_adcPulseAmpRaw;
   Double_t        T_hms_pHEL_POS_adcPulseInt;
   Double_t        T_hms_pHEL_POS_adcPulseIntRaw;
   Double_t        T_hms_pHEL_POS_adcPulseTime;
   Double_t        T_hms_pHEL_POS_adcPulseTimeRaw;
   Double_t        T_hms_pHEL_POS_adcSampMultiplicity;
   Double_t        T_hms_pHEL_POS_adcSampPed;
   Double_t        T_hms_pHEL_POS_adcSampPedRaw;
   Double_t        T_hms_pHEL_POS_adcSampPulseAmp;
   Double_t        T_hms_pHEL_POS_adcSampPulseAmpRaw;
   Double_t        T_hms_pHEL_POS_adcSampPulseInt;
   Double_t        T_hms_pHEL_POS_adcSampPulseIntRaw;
   Double_t        T_hms_pHEL_POS_adcSampPulseTime;
   Double_t        T_hms_pHEL_POS_adcSampPulseTimeRaw;
   Double_t        T_hms_pHEL_QRT_adcMultiplicity;
   Double_t        T_hms_pHEL_QRT_adcPed;
   Double_t        T_hms_pHEL_QRT_adcPedRaw;
   Double_t        T_hms_pHEL_QRT_adcPulseAmp;
   Double_t        T_hms_pHEL_QRT_adcPulseAmpRaw;
   Double_t        T_hms_pHEL_QRT_adcPulseInt;
   Double_t        T_hms_pHEL_QRT_adcPulseIntRaw;
   Double_t        T_hms_pHEL_QRT_adcPulseTime;
   Double_t        T_hms_pHEL_QRT_adcPulseTimeRaw;
   Double_t        T_hms_pHEL_QRT_adcSampMultiplicity;
   Double_t        T_hms_pHEL_QRT_adcSampPed;
   Double_t        T_hms_pHEL_QRT_adcSampPedRaw;
   Double_t        T_hms_pHEL_QRT_adcSampPulseAmp;
   Double_t        T_hms_pHEL_QRT_adcSampPulseAmpRaw;
   Double_t        T_hms_pHEL_QRT_adcSampPulseInt;
   Double_t        T_hms_pHEL_QRT_adcSampPulseIntRaw;
   Double_t        T_hms_pHEL_QRT_adcSampPulseTime;
   Double_t        T_hms_pHEL_QRT_adcSampPulseTimeRaw;
   Double_t        T_hms_pPRE100_tdcMultiplicity;
   Double_t        T_hms_pPRE100_tdcTime;
   Double_t        T_hms_pPRE100_tdcTimeRaw;
   Double_t        T_hms_pPRE150_tdcMultiplicity;
   Double_t        T_hms_pPRE150_tdcTime;
   Double_t        T_hms_pPRE150_tdcTimeRaw;
   Double_t        T_hms_pPRE200_tdcMultiplicity;
   Double_t        T_hms_pPRE200_tdcTime;
   Double_t        T_hms_pPRE200_tdcTimeRaw;
   Double_t        T_hms_pPRE40_tdcMultiplicity;
   Double_t        T_hms_pPRE40_tdcTime;
   Double_t        T_hms_pPRE40_tdcTimeRaw;
   Double_t        T_hms_pSTOF_tdcMultiplicity;
   Double_t        T_hms_pSTOF_tdcTime;
   Double_t        T_hms_pSTOF_tdcTimeRaw;
   Double_t        g_datatype;
   Double_t        g_evlen;
   Double_t        g_evnum;
   Double_t        g_evtime;
   Double_t        g_evtyp;
   Double_t        g_runnum;
   Double_t        g_runtime;
   Double_t        g_runtype;
   Double_t        g_trigbits;
   Double_t        IBC3H00CRCUR4;
   Double_t        hac_bcm_average;
   Double_t        ibcm1;
   Double_t        ibcm2;
   Double_t        iunser;
   Double_t        itov3out;
   Double_t        itov4out;
   Double_t        ecHMS_Angle;
   Double_t        ecP_HMS;
   Double_t        ecQ1_Set_Current;
   Double_t        ecQ2_Set_Current;
   Double_t        ecQ2_I_True;
   Double_t        ecQ3_Set_Current;
   Double_t        ecQ3_I_True;
   Double_t        ecDI_B_Set_NMR;
   Double_t        ecDI_B_True_NMR;
   Double_t        IPM3H07A_XRAW;
   Double_t        IPM3H07A_YRAW;
   Double_t        IPM3H07B_XRAW;
   Double_t        IPM3H07B_YRAW;
   Double_t        IPM3H07C_XRAW;
   Double_t        IPM3H07C_YRAW;
 //THaEvent        *Event_Branch;
   ULong64_t       fEvtHdr_fEvtTime;
   UInt_t          fEvtHdr_fEvtNum;
   UInt_t          fEvtHdr_fEvtType;
   UInt_t          fEvtHdr_fEvtLen;
   Int_t           fEvtHdr_fHelicity;
   UInt_t          fEvtHdr_fTrigBits;
   UInt_t          fEvtHdr_fRun;

   // List of branches
   TBranch        *b_FRXAraw_V;   //!
   TBranch        *b_FRXBraw_V;   //!
   TBranch        *b_FRYAraw_V;   //!
   TBranch        *b_FRYBraw_V;   //!
   TBranch        *b_Ndata_H_cal_1pr_emean;   //!
   TBranch        *b_H_cal_1pr_emean;   //!
   TBranch        *b_Ndata_H_cal_1pr_eneg;   //!
   TBranch        *b_H_cal_1pr_eneg;   //!
   TBranch        *b_Ndata_H_cal_1pr_epos;   //!
   TBranch        *b_H_cal_1pr_epos;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcMult;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcMult;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcPed;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcPulseAmp;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcPulseInt;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcPulseTime;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_1pr_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcMult;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcMult;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcPed;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcPulseAmp;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcPulseInt;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcPulseTime;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_1pr_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcCounter;   //!
   TBranch        *b_H_cal_1pr_negAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcErrorFlag;   //!
   TBranch        *b_H_cal_1pr_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPed;   //!
   TBranch        *b_H_cal_1pr_negAdcPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPedRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseAmp;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseInt;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseTime;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPed;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPedRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseInt;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseTime;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_1pr_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_numGoodNegAdcHits;   //!
   TBranch        *b_H_cal_1pr_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_cal_1pr_numGoodPosAdcHits;   //!
   TBranch        *b_H_cal_1pr_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcCounter;   //!
   TBranch        *b_H_cal_1pr_posAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcErrorFlag;   //!
   TBranch        *b_H_cal_1pr_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPed;   //!
   TBranch        *b_H_cal_1pr_posAdcPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPedRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseAmp;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseInt;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseTime;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPed;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPedRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseInt;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseTime;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_1pr_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_1pr_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_emean;   //!
   TBranch        *b_H_cal_2ta_emean;   //!
   TBranch        *b_Ndata_H_cal_2ta_eneg;   //!
   TBranch        *b_H_cal_2ta_eneg;   //!
   TBranch        *b_Ndata_H_cal_2ta_epos;   //!
   TBranch        *b_H_cal_2ta_epos;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcMult;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcMult;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcPed;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcPulseInt;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcPulseTime;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_2ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcMult;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcMult;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcPed;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcPulseInt;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcPulseTime;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_2ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcCounter;   //!
   TBranch        *b_H_cal_2ta_negAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcErrorFlag;   //!
   TBranch        *b_H_cal_2ta_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPed;   //!
   TBranch        *b_H_cal_2ta_negAdcPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPedRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseAmp;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseInt;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseTime;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPed;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPedRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseInt;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseTime;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_2ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_numGoodNegAdcHits;   //!
   TBranch        *b_H_cal_2ta_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_cal_2ta_numGoodPosAdcHits;   //!
   TBranch        *b_H_cal_2ta_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcCounter;   //!
   TBranch        *b_H_cal_2ta_posAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcErrorFlag;   //!
   TBranch        *b_H_cal_2ta_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPed;   //!
   TBranch        *b_H_cal_2ta_posAdcPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPedRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseAmp;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseInt;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseTime;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPed;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPedRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseInt;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseTime;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_2ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_2ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_emean;   //!
   TBranch        *b_H_cal_3ta_emean;   //!
   TBranch        *b_Ndata_H_cal_3ta_eneg;   //!
   TBranch        *b_H_cal_3ta_eneg;   //!
   TBranch        *b_Ndata_H_cal_3ta_epos;   //!
   TBranch        *b_H_cal_3ta_epos;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcMult;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcMult;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcPed;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcPulseInt;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcPulseTime;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_3ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcMult;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcMult;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcPed;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcPulseInt;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcPulseTime;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_3ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcCounter;   //!
   TBranch        *b_H_cal_3ta_negAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcErrorFlag;   //!
   TBranch        *b_H_cal_3ta_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPed;   //!
   TBranch        *b_H_cal_3ta_negAdcPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPedRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseAmp;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseInt;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseTime;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPed;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPedRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseInt;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseTime;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_3ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_numGoodNegAdcHits;   //!
   TBranch        *b_H_cal_3ta_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_cal_3ta_numGoodPosAdcHits;   //!
   TBranch        *b_H_cal_3ta_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcCounter;   //!
   TBranch        *b_H_cal_3ta_posAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcErrorFlag;   //!
   TBranch        *b_H_cal_3ta_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPed;   //!
   TBranch        *b_H_cal_3ta_posAdcPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPedRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseAmp;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseInt;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseTime;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPed;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPedRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseInt;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseTime;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_3ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_3ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_emean;   //!
   TBranch        *b_H_cal_4ta_emean;   //!
   TBranch        *b_Ndata_H_cal_4ta_eneg;   //!
   TBranch        *b_H_cal_4ta_eneg;   //!
   TBranch        *b_Ndata_H_cal_4ta_epos;   //!
   TBranch        *b_H_cal_4ta_epos;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcMult;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcMult;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcPed;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcPulseInt;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcPulseTime;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_4ta_goodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcMult;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcMult;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcPed;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcPulseInt;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcPulseTime;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_cal_4ta_goodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcCounter;   //!
   TBranch        *b_H_cal_4ta_negAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcErrorFlag;   //!
   TBranch        *b_H_cal_4ta_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPed;   //!
   TBranch        *b_H_cal_4ta_negAdcPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPedRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseAmp;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseInt;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseTime;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPed;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPedRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseInt;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseTime;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_4ta_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_numGoodNegAdcHits;   //!
   TBranch        *b_H_cal_4ta_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_cal_4ta_numGoodPosAdcHits;   //!
   TBranch        *b_H_cal_4ta_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcCounter;   //!
   TBranch        *b_H_cal_4ta_posAdcCounter;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcErrorFlag;   //!
   TBranch        *b_H_cal_4ta_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPed;   //!
   TBranch        *b_H_cal_4ta_posAdcPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPedRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseAmp;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseInt;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseTime;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPed;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPedRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseAmp;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseInt;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseTime;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cal_4ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_cal_4ta_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cer_adcCounter;   //!
   TBranch        *b_H_cer_adcCounter;   //!
   TBranch        *b_Ndata_H_cer_adcErrorFlag;   //!
   TBranch        *b_H_cer_adcErrorFlag;   //!
   TBranch        *b_Ndata_H_cer_adcPed;   //!
   TBranch        *b_H_cer_adcPed;   //!
   TBranch        *b_Ndata_H_cer_adcPedRaw;   //!
   TBranch        *b_H_cer_adcPedRaw;   //!
   TBranch        *b_Ndata_H_cer_adcPulseAmp;   //!
   TBranch        *b_H_cer_adcPulseAmp;   //!
   TBranch        *b_Ndata_H_cer_adcPulseAmpRaw;   //!
   TBranch        *b_H_cer_adcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cer_adcPulseInt;   //!
   TBranch        *b_H_cer_adcPulseInt;   //!
   TBranch        *b_Ndata_H_cer_adcPulseIntRaw;   //!
   TBranch        *b_H_cer_adcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cer_adcPulseTime;   //!
   TBranch        *b_H_cer_adcPulseTime;   //!
   TBranch        *b_Ndata_H_cer_adcPulseTimeRaw;   //!
   TBranch        *b_H_cer_adcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cer_adcSampPed;   //!
   TBranch        *b_H_cer_adcSampPed;   //!
   TBranch        *b_Ndata_H_cer_adcSampPedRaw;   //!
   TBranch        *b_H_cer_adcSampPedRaw;   //!
   TBranch        *b_Ndata_H_cer_adcSampPulseAmp;   //!
   TBranch        *b_H_cer_adcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_cer_adcSampPulseAmpRaw;   //!
   TBranch        *b_H_cer_adcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_cer_adcSampPulseInt;   //!
   TBranch        *b_H_cer_adcSampPulseInt;   //!
   TBranch        *b_Ndata_H_cer_adcSampPulseIntRaw;   //!
   TBranch        *b_H_cer_adcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cer_adcSampPulseTime;   //!
   TBranch        *b_H_cer_adcSampPulseTime;   //!
   TBranch        *b_Ndata_H_cer_adcSampPulseTimeRaw;   //!
   TBranch        *b_H_cer_adcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_cer_adcSampleCounter;   //!
   TBranch        *b_H_cer_adcSampleCounter;   //!
   TBranch        *b_Ndata_H_cer_goodAdcHitUsed;   //!
   TBranch        *b_H_cer_goodAdcHitUsed;   //!
   TBranch        *b_Ndata_H_cer_goodAdcMult;   //!
   TBranch        *b_H_cer_goodAdcMult;   //!
   TBranch        *b_Ndata_H_cer_goodAdcPed;   //!
   TBranch        *b_H_cer_goodAdcPed;   //!
   TBranch        *b_Ndata_H_cer_goodAdcPulseAmp;   //!
   TBranch        *b_H_cer_goodAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_cer_goodAdcPulseInt;   //!
   TBranch        *b_H_cer_goodAdcPulseInt;   //!
   TBranch        *b_Ndata_H_cer_goodAdcPulseIntRaw;   //!
   TBranch        *b_H_cer_goodAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_cer_goodAdcPulseTime;   //!
   TBranch        *b_H_cer_goodAdcPulseTime;   //!
   TBranch        *b_Ndata_H_cer_goodAdcTdcDiffTime;   //!
   TBranch        *b_H_cer_goodAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_cer_npe;   //!
   TBranch        *b_H_cer_npe;   //!
   TBranch        *b_Ndata_H_cer_numAdcHits;   //!
   TBranch        *b_H_cer_numAdcHits;   //!
   TBranch        *b_Ndata_H_cer_numGoodAdcHits;   //!
   TBranch        *b_H_cer_numGoodAdcHits;   //!
   TBranch        *b_Ndata_H_cer_numTracksFired;   //!
   TBranch        *b_H_cer_numTracksFired;   //!
   TBranch        *b_Ndata_H_cer_numTracksMatched;   //!
   TBranch        *b_H_cer_numTracksMatched;   //!
   TBranch        *b_Ndata_H_dc_1u1_dist;   //!
   TBranch        *b_H_dc_1u1_dist;   //!
   TBranch        *b_Ndata_H_dc_1u1_pos;   //!
   TBranch        *b_H_dc_1u1_pos;   //!
   TBranch        *b_Ndata_H_dc_1u1_raw_wirenum;   //!
   TBranch        *b_H_dc_1u1_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_1u1_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_1u1_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_1u1_rawtdc;   //!
   TBranch        *b_H_dc_1u1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1u1_time;   //!
   TBranch        *b_H_dc_1u1_time;   //!
   TBranch        *b_Ndata_H_dc_1u1_wirenum;   //!
   TBranch        *b_H_dc_1u1_wirenum;   //!
   TBranch        *b_Ndata_H_dc_1u2_dist;   //!
   TBranch        *b_H_dc_1u2_dist;   //!
   TBranch        *b_Ndata_H_dc_1u2_pos;   //!
   TBranch        *b_H_dc_1u2_pos;   //!
   TBranch        *b_Ndata_H_dc_1u2_raw_wirenum;   //!
   TBranch        *b_H_dc_1u2_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_1u2_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_1u2_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_1u2_rawtdc;   //!
   TBranch        *b_H_dc_1u2_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1u2_time;   //!
   TBranch        *b_H_dc_1u2_time;   //!
   TBranch        *b_Ndata_H_dc_1u2_wirenum;   //!
   TBranch        *b_H_dc_1u2_wirenum;   //!
   TBranch        *b_Ndata_H_dc_1v1_dist;   //!
   TBranch        *b_H_dc_1v1_dist;   //!
   TBranch        *b_Ndata_H_dc_1v1_pos;   //!
   TBranch        *b_H_dc_1v1_pos;   //!
   TBranch        *b_Ndata_H_dc_1v1_raw_wirenum;   //!
   TBranch        *b_H_dc_1v1_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_1v1_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_1v1_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_1v1_rawtdc;   //!
   TBranch        *b_H_dc_1v1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1v1_time;   //!
   TBranch        *b_H_dc_1v1_time;   //!
   TBranch        *b_Ndata_H_dc_1v1_wirenum;   //!
   TBranch        *b_H_dc_1v1_wirenum;   //!
   TBranch        *b_Ndata_H_dc_1v2_dist;   //!
   TBranch        *b_H_dc_1v2_dist;   //!
   TBranch        *b_Ndata_H_dc_1v2_pos;   //!
   TBranch        *b_H_dc_1v2_pos;   //!
   TBranch        *b_Ndata_H_dc_1v2_raw_wirenum;   //!
   TBranch        *b_H_dc_1v2_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_1v2_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_1v2_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_1v2_rawtdc;   //!
   TBranch        *b_H_dc_1v2_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1v2_time;   //!
   TBranch        *b_H_dc_1v2_time;   //!
   TBranch        *b_Ndata_H_dc_1v2_wirenum;   //!
   TBranch        *b_H_dc_1v2_wirenum;   //!
   TBranch        *b_Ndata_H_dc_1x1_dist;   //!
   TBranch        *b_H_dc_1x1_dist;   //!
   TBranch        *b_Ndata_H_dc_1x1_pos;   //!
   TBranch        *b_H_dc_1x1_pos;   //!
   TBranch        *b_Ndata_H_dc_1x1_raw_wirenum;   //!
   TBranch        *b_H_dc_1x1_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_1x1_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_1x1_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_1x1_rawtdc;   //!
   TBranch        *b_H_dc_1x1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1x1_time;   //!
   TBranch        *b_H_dc_1x1_time;   //!
   TBranch        *b_Ndata_H_dc_1x1_wirenum;   //!
   TBranch        *b_H_dc_1x1_wirenum;   //!
   TBranch        *b_Ndata_H_dc_1x2_dist;   //!
   TBranch        *b_H_dc_1x2_dist;   //!
   TBranch        *b_Ndata_H_dc_1x2_pos;   //!
   TBranch        *b_H_dc_1x2_pos;   //!
   TBranch        *b_Ndata_H_dc_1x2_raw_wirenum;   //!
   TBranch        *b_H_dc_1x2_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_1x2_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_1x2_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_1x2_rawtdc;   //!
   TBranch        *b_H_dc_1x2_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1x2_time;   //!
   TBranch        *b_H_dc_1x2_time;   //!
   TBranch        *b_Ndata_H_dc_1x2_wirenum;   //!
   TBranch        *b_H_dc_1x2_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2u1_dist;   //!
   TBranch        *b_H_dc_2u1_dist;   //!
   TBranch        *b_Ndata_H_dc_2u1_pos;   //!
   TBranch        *b_H_dc_2u1_pos;   //!
   TBranch        *b_Ndata_H_dc_2u1_raw_wirenum;   //!
   TBranch        *b_H_dc_2u1_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2u1_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_2u1_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_2u1_rawtdc;   //!
   TBranch        *b_H_dc_2u1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2u1_time;   //!
   TBranch        *b_H_dc_2u1_time;   //!
   TBranch        *b_Ndata_H_dc_2u1_wirenum;   //!
   TBranch        *b_H_dc_2u1_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2u2_dist;   //!
   TBranch        *b_H_dc_2u2_dist;   //!
   TBranch        *b_Ndata_H_dc_2u2_pos;   //!
   TBranch        *b_H_dc_2u2_pos;   //!
   TBranch        *b_Ndata_H_dc_2u2_raw_wirenum;   //!
   TBranch        *b_H_dc_2u2_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2u2_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_2u2_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_2u2_rawtdc;   //!
   TBranch        *b_H_dc_2u2_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2u2_time;   //!
   TBranch        *b_H_dc_2u2_time;   //!
   TBranch        *b_Ndata_H_dc_2u2_wirenum;   //!
   TBranch        *b_H_dc_2u2_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2v1_dist;   //!
   TBranch        *b_H_dc_2v1_dist;   //!
   TBranch        *b_Ndata_H_dc_2v1_pos;   //!
   TBranch        *b_H_dc_2v1_pos;   //!
   TBranch        *b_Ndata_H_dc_2v1_raw_wirenum;   //!
   TBranch        *b_H_dc_2v1_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2v1_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_2v1_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_2v1_rawtdc;   //!
   TBranch        *b_H_dc_2v1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2v1_time;   //!
   TBranch        *b_H_dc_2v1_time;   //!
   TBranch        *b_Ndata_H_dc_2v1_wirenum;   //!
   TBranch        *b_H_dc_2v1_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2v2_dist;   //!
   TBranch        *b_H_dc_2v2_dist;   //!
   TBranch        *b_Ndata_H_dc_2v2_pos;   //!
   TBranch        *b_H_dc_2v2_pos;   //!
   TBranch        *b_Ndata_H_dc_2v2_raw_wirenum;   //!
   TBranch        *b_H_dc_2v2_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2v2_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_2v2_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_2v2_rawtdc;   //!
   TBranch        *b_H_dc_2v2_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2v2_time;   //!
   TBranch        *b_H_dc_2v2_time;   //!
   TBranch        *b_Ndata_H_dc_2v2_wirenum;   //!
   TBranch        *b_H_dc_2v2_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2x1_dist;   //!
   TBranch        *b_H_dc_2x1_dist;   //!
   TBranch        *b_Ndata_H_dc_2x1_pos;   //!
   TBranch        *b_H_dc_2x1_pos;   //!
   TBranch        *b_Ndata_H_dc_2x1_raw_wirenum;   //!
   TBranch        *b_H_dc_2x1_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2x1_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_2x1_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_2x1_rawtdc;   //!
   TBranch        *b_H_dc_2x1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2x1_time;   //!
   TBranch        *b_H_dc_2x1_time;   //!
   TBranch        *b_Ndata_H_dc_2x1_wirenum;   //!
   TBranch        *b_H_dc_2x1_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2x2_dist;   //!
   TBranch        *b_H_dc_2x2_dist;   //!
   TBranch        *b_Ndata_H_dc_2x2_pos;   //!
   TBranch        *b_H_dc_2x2_pos;   //!
   TBranch        *b_Ndata_H_dc_2x2_raw_wirenum;   //!
   TBranch        *b_H_dc_2x2_raw_wirenum;   //!
   TBranch        *b_Ndata_H_dc_2x2_rawnorefcorrtdc;   //!
   TBranch        *b_H_dc_2x2_rawnorefcorrtdc;   //!
   TBranch        *b_Ndata_H_dc_2x2_rawtdc;   //!
   TBranch        *b_H_dc_2x2_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2x2_time;   //!
   TBranch        *b_H_dc_2x2_time;   //!
   TBranch        *b_Ndata_H_dc_2x2_wirenum;   //!
   TBranch        *b_H_dc_2x2_wirenum;   //!
   TBranch        *b_Ndata_H_dc_Ch1_UX_posx;   //!
   TBranch        *b_H_dc_Ch1_UX_posx;   //!
   TBranch        *b_Ndata_H_dc_Ch1_UX_posy;   //!
   TBranch        *b_H_dc_Ch1_UX_posy;   //!
   TBranch        *b_Ndata_H_dc_Ch1_U_pos;   //!
   TBranch        *b_H_dc_Ch1_U_pos;   //!
   TBranch        *b_Ndata_H_dc_Ch1_VX_posx;   //!
   TBranch        *b_H_dc_Ch1_VX_posx;   //!
   TBranch        *b_Ndata_H_dc_Ch1_VX_posy;   //!
   TBranch        *b_H_dc_Ch1_VX_posy;   //!
   TBranch        *b_Ndata_H_dc_Ch1_V_pos;   //!
   TBranch        *b_H_dc_Ch1_V_pos;   //!
   TBranch        *b_Ndata_H_dc_Ch1_X_pos;   //!
   TBranch        *b_H_dc_Ch1_X_pos;   //!
   TBranch        *b_Ndata_H_dc_Ch1_ncombos;   //!
   TBranch        *b_H_dc_Ch1_ncombos;   //!
   TBranch        *b_Ndata_H_dc_Ch1_sp_nhits;   //!
   TBranch        *b_H_dc_Ch1_sp_nhits;   //!
   TBranch        *b_Ndata_H_dc_Ch1_sphit;   //!
   TBranch        *b_H_dc_Ch1_sphit;   //!
   TBranch        *b_Ndata_H_dc_Ch1_sphit_index;   //!
   TBranch        *b_H_dc_Ch1_sphit_index;   //!
   TBranch        *b_Ndata_H_dc_Ch1_stub_x;   //!
   TBranch        *b_H_dc_Ch1_stub_x;   //!
   TBranch        *b_Ndata_H_dc_Ch1_stub_xp;   //!
   TBranch        *b_H_dc_Ch1_stub_xp;   //!
   TBranch        *b_Ndata_H_dc_Ch1_stub_y;   //!
   TBranch        *b_H_dc_Ch1_stub_y;   //!
   TBranch        *b_Ndata_H_dc_Ch1_stub_yp;   //!
   TBranch        *b_H_dc_Ch1_stub_yp;   //!
   TBranch        *b_Ndata_H_dc_Ch2_UX_posx;   //!
   TBranch        *b_H_dc_Ch2_UX_posx;   //!
   TBranch        *b_Ndata_H_dc_Ch2_UX_posy;   //!
   TBranch        *b_H_dc_Ch2_UX_posy;   //!
   TBranch        *b_Ndata_H_dc_Ch2_U_pos;   //!
   TBranch        *b_H_dc_Ch2_U_pos;   //!
   TBranch        *b_Ndata_H_dc_Ch2_VX_posx;   //!
   TBranch        *b_H_dc_Ch2_VX_posx;   //!
   TBranch        *b_Ndata_H_dc_Ch2_VX_posy;   //!
   TBranch        *b_H_dc_Ch2_VX_posy;   //!
   TBranch        *b_Ndata_H_dc_Ch2_V_pos;   //!
   TBranch        *b_H_dc_Ch2_V_pos;   //!
   TBranch        *b_Ndata_H_dc_Ch2_X_pos;   //!
   TBranch        *b_H_dc_Ch2_X_pos;   //!
   TBranch        *b_Ndata_H_dc_Ch2_ncombos;   //!
   TBranch        *b_H_dc_Ch2_ncombos;   //!
   TBranch        *b_Ndata_H_dc_Ch2_sp_nhits;   //!
   TBranch        *b_H_dc_Ch2_sp_nhits;   //!
   TBranch        *b_Ndata_H_dc_Ch2_sphit;   //!
   TBranch        *b_H_dc_Ch2_sphit;   //!
   TBranch        *b_Ndata_H_dc_Ch2_sphit_index;   //!
   TBranch        *b_H_dc_Ch2_sphit_index;   //!
   TBranch        *b_Ndata_H_dc_Ch2_stub_x;   //!
   TBranch        *b_H_dc_Ch2_stub_x;   //!
   TBranch        *b_Ndata_H_dc_Ch2_stub_xp;   //!
   TBranch        *b_H_dc_Ch2_stub_xp;   //!
   TBranch        *b_Ndata_H_dc_Ch2_stub_y;   //!
   TBranch        *b_H_dc_Ch2_stub_y;   //!
   TBranch        *b_Ndata_H_dc_Ch2_stub_yp;   //!
   TBranch        *b_H_dc_Ch2_stub_yp;   //!
   TBranch        *b_Ndata_H_dc_dist_best;   //!
   TBranch        *b_H_dc_dist_best;   //!
   TBranch        *b_Ndata_H_dc_lr_best;   //!
   TBranch        *b_H_dc_lr_best;   //!
   TBranch        *b_Ndata_H_dc_pos_best;   //!
   TBranch        *b_H_dc_pos_best;   //!
   TBranch        *b_Ndata_H_dc_residual;   //!
   TBranch        *b_H_dc_residual;   //!
   TBranch        *b_Ndata_H_dc_residualExclPlane;   //!
   TBranch        *b_H_dc_residualExclPlane;   //!
   TBranch        *b_Ndata_H_dc_track_chisq;   //!
   TBranch        *b_H_dc_track_chisq;   //!
   TBranch        *b_Ndata_H_dc_track_nhits;   //!
   TBranch        *b_H_dc_track_nhits;   //!
   TBranch        *b_Ndata_H_dc_track_nsp;   //!
   TBranch        *b_H_dc_track_nsp;   //!
   TBranch        *b_Ndata_H_dc_track_sp1ID;   //!
   TBranch        *b_H_dc_track_sp1ID;   //!
   TBranch        *b_Ndata_H_dc_track_sp2ID;   //!
   TBranch        *b_H_dc_track_sp2ID;   //!
   TBranch        *b_Ndata_H_dc_wireHitDid;   //!
   TBranch        *b_H_dc_wireHitDid;   //!
   TBranch        *b_Ndata_H_dc_wireHitShould;   //!
   TBranch        *b_H_dc_wireHitShould;   //!
   TBranch        *b_Ndata_H_dc_x;   //!
   TBranch        *b_H_dc_x;   //!
   TBranch        *b_Ndata_H_dc_xp;   //!
   TBranch        *b_H_dc_xp;   //!
   TBranch        *b_Ndata_H_dc_y;   //!
   TBranch        *b_H_dc_y;   //!
   TBranch        *b_Ndata_H_dc_yp;   //!
   TBranch        *b_H_dc_yp;   //!
   TBranch        *b_Ndata_H_hod_1x_Clus_Flag;   //!
   TBranch        *b_H_hod_1x_Clus_Flag;   //!
   TBranch        *b_Ndata_H_hod_1x_Clus_Pos;   //!
   TBranch        *b_H_hod_1x_Clus_Pos;   //!
   TBranch        *b_Ndata_H_hod_1x_Clus_Size;   //!
   TBranch        *b_H_hod_1x_Clus_Size;   //!
   TBranch        *b_Ndata_H_hod_1x_Clus_UsedFlag;   //!
   TBranch        *b_H_hod_1x_Clus_UsedFlag;   //!
   TBranch        *b_Ndata_H_hod_1x_DiffDisTrackCorr;   //!
   TBranch        *b_H_hod_1x_DiffDisTrackCorr;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodNegAdcHitUsed;   //!
   TBranch        *b_H_hod_1x_GoodNegAdcHitUsed;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodNegAdcMult;   //!
   TBranch        *b_H_hod_1x_GoodNegAdcMult;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodNegAdcPed;   //!
   TBranch        *b_H_hod_1x_GoodNegAdcPed;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodNegAdcPulseAmp;   //!
   TBranch        *b_H_hod_1x_GoodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodNegAdcPulseInt;   //!
   TBranch        *b_H_hod_1x_GoodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodNegAdcPulseTime;   //!
   TBranch        *b_H_hod_1x_GoodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_hod_1x_GoodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodNegTdcTimeCorr;   //!
   TBranch        *b_H_hod_1x_GoodNegTdcTimeCorr;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodNegTdcTimeTOFCorr;   //!
   TBranch        *b_H_hod_1x_GoodNegTdcTimeTOFCorr;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodNegTdcTimeUnCorr;   //!
   TBranch        *b_H_hod_1x_GoodNegTdcTimeUnCorr;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodNegTdcTimeWalkCorr;   //!
   TBranch        *b_H_hod_1x_GoodNegTdcTimeWalkCorr;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodPosAdcHitUsed;   //!
   TBranch        *b_H_hod_1x_GoodPosAdcHitUsed;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodPosAdcMult;   //!
   TBranch        *b_H_hod_1x_GoodPosAdcMult;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodPosAdcPed;   //!
   TBranch        *b_H_hod_1x_GoodPosAdcPed;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodPosAdcPulseAmp;   //!
   TBranch        *b_H_hod_1x_GoodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodPosAdcPulseInt;   //!
   TBranch        *b_H_hod_1x_GoodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodPosAdcPulseTime;   //!
   TBranch        *b_H_hod_1x_GoodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_hod_1x_GoodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodPosTdcTimeCorr;   //!
   TBranch        *b_H_hod_1x_GoodPosTdcTimeCorr;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodPosTdcTimeTOFCorr;   //!
   TBranch        *b_H_hod_1x_GoodPosTdcTimeTOFCorr;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodPosTdcTimeUnCorr;   //!
   TBranch        *b_H_hod_1x_GoodPosTdcTimeUnCorr;   //!
   TBranch        *b_Ndata_H_hod_1x_GoodPosTdcTimeWalkCorr;   //!
   TBranch        *b_H_hod_1x_GoodPosTdcTimeWalkCorr;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcCounter;   //!
   TBranch        *b_H_hod_1x_negAdcCounter;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcErrorFlag;   //!
   TBranch        *b_H_hod_1x_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcPed;   //!
   TBranch        *b_H_hod_1x_negAdcPed;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcPedRaw;   //!
   TBranch        *b_H_hod_1x_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcPulseAmp;   //!
   TBranch        *b_H_hod_1x_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_hod_1x_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcPulseInt;   //!
   TBranch        *b_H_hod_1x_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcPulseIntRaw;   //!
   TBranch        *b_H_hod_1x_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcPulseTime;   //!
   TBranch        *b_H_hod_1x_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_hod_1x_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcSampPed;   //!
   TBranch        *b_H_hod_1x_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcSampPedRaw;   //!
   TBranch        *b_H_hod_1x_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcSampPulseAmp;   //!
   TBranch        *b_H_hod_1x_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_hod_1x_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcSampPulseInt;   //!
   TBranch        *b_H_hod_1x_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_hod_1x_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcSampPulseTime;   //!
   TBranch        *b_H_hod_1x_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1x_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_hod_1x_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_negTdcCounter;   //!
   TBranch        *b_H_hod_1x_negTdcCounter;   //!
   TBranch        *b_Ndata_H_hod_1x_negTdcTime;   //!
   TBranch        *b_H_hod_1x_negTdcTime;   //!
   TBranch        *b_Ndata_H_hod_1x_negTdcTimeRaw;   //!
   TBranch        *b_H_hod_1x_negTdcTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_numGoodNegAdcHits;   //!
   TBranch        *b_H_hod_1x_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_hod_1x_numGoodNegTdcHits;   //!
   TBranch        *b_H_hod_1x_numGoodNegTdcHits;   //!
   TBranch        *b_Ndata_H_hod_1x_numGoodPosAdcHits;   //!
   TBranch        *b_H_hod_1x_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_hod_1x_numGoodPosTdcHits;   //!
   TBranch        *b_H_hod_1x_numGoodPosTdcHits;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcCounter;   //!
   TBranch        *b_H_hod_1x_posAdcCounter;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcErrorFlag;   //!
   TBranch        *b_H_hod_1x_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcPed;   //!
   TBranch        *b_H_hod_1x_posAdcPed;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcPedRaw;   //!
   TBranch        *b_H_hod_1x_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcPulseAmp;   //!
   TBranch        *b_H_hod_1x_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_hod_1x_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcPulseInt;   //!
   TBranch        *b_H_hod_1x_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcPulseIntRaw;   //!
   TBranch        *b_H_hod_1x_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcPulseTime;   //!
   TBranch        *b_H_hod_1x_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_hod_1x_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcSampPed;   //!
   TBranch        *b_H_hod_1x_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcSampPedRaw;   //!
   TBranch        *b_H_hod_1x_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcSampPulseAmp;   //!
   TBranch        *b_H_hod_1x_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_hod_1x_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcSampPulseInt;   //!
   TBranch        *b_H_hod_1x_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_hod_1x_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcSampPulseTime;   //!
   TBranch        *b_H_hod_1x_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1x_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_hod_1x_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_1x_posTdcCounter;   //!
   TBranch        *b_H_hod_1x_posTdcCounter;   //!
   TBranch        *b_Ndata_H_hod_1x_posTdcTime;   //!
   TBranch        *b_H_hod_1x_posTdcTime;   //!
   TBranch        *b_Ndata_H_hod_1x_posTdcTimeRaw;   //!
   TBranch        *b_H_hod_1x_posTdcTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_Clus_Flag;   //!
   TBranch        *b_H_hod_1y_Clus_Flag;   //!
   TBranch        *b_Ndata_H_hod_1y_Clus_Pos;   //!
   TBranch        *b_H_hod_1y_Clus_Pos;   //!
   TBranch        *b_Ndata_H_hod_1y_Clus_Size;   //!
   TBranch        *b_H_hod_1y_Clus_Size;   //!
   TBranch        *b_Ndata_H_hod_1y_Clus_UsedFlag;   //!
   TBranch        *b_H_hod_1y_Clus_UsedFlag;   //!
   TBranch        *b_Ndata_H_hod_1y_DiffDisTrackCorr;   //!
   TBranch        *b_H_hod_1y_DiffDisTrackCorr;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodNegAdcHitUsed;   //!
   TBranch        *b_H_hod_1y_GoodNegAdcHitUsed;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodNegAdcMult;   //!
   TBranch        *b_H_hod_1y_GoodNegAdcMult;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodNegAdcPed;   //!
   TBranch        *b_H_hod_1y_GoodNegAdcPed;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodNegAdcPulseAmp;   //!
   TBranch        *b_H_hod_1y_GoodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodNegAdcPulseInt;   //!
   TBranch        *b_H_hod_1y_GoodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodNegAdcPulseTime;   //!
   TBranch        *b_H_hod_1y_GoodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_hod_1y_GoodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodNegTdcTimeCorr;   //!
   TBranch        *b_H_hod_1y_GoodNegTdcTimeCorr;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodNegTdcTimeTOFCorr;   //!
   TBranch        *b_H_hod_1y_GoodNegTdcTimeTOFCorr;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodNegTdcTimeUnCorr;   //!
   TBranch        *b_H_hod_1y_GoodNegTdcTimeUnCorr;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodNegTdcTimeWalkCorr;   //!
   TBranch        *b_H_hod_1y_GoodNegTdcTimeWalkCorr;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodPosAdcHitUsed;   //!
   TBranch        *b_H_hod_1y_GoodPosAdcHitUsed;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodPosAdcMult;   //!
   TBranch        *b_H_hod_1y_GoodPosAdcMult;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodPosAdcPed;   //!
   TBranch        *b_H_hod_1y_GoodPosAdcPed;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodPosAdcPulseAmp;   //!
   TBranch        *b_H_hod_1y_GoodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodPosAdcPulseInt;   //!
   TBranch        *b_H_hod_1y_GoodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodPosAdcPulseTime;   //!
   TBranch        *b_H_hod_1y_GoodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_hod_1y_GoodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodPosTdcTimeCorr;   //!
   TBranch        *b_H_hod_1y_GoodPosTdcTimeCorr;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodPosTdcTimeTOFCorr;   //!
   TBranch        *b_H_hod_1y_GoodPosTdcTimeTOFCorr;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodPosTdcTimeUnCorr;   //!
   TBranch        *b_H_hod_1y_GoodPosTdcTimeUnCorr;   //!
   TBranch        *b_Ndata_H_hod_1y_GoodPosTdcTimeWalkCorr;   //!
   TBranch        *b_H_hod_1y_GoodPosTdcTimeWalkCorr;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcCounter;   //!
   TBranch        *b_H_hod_1y_negAdcCounter;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcErrorFlag;   //!
   TBranch        *b_H_hod_1y_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcPed;   //!
   TBranch        *b_H_hod_1y_negAdcPed;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcPedRaw;   //!
   TBranch        *b_H_hod_1y_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcPulseAmp;   //!
   TBranch        *b_H_hod_1y_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_hod_1y_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcPulseInt;   //!
   TBranch        *b_H_hod_1y_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcPulseIntRaw;   //!
   TBranch        *b_H_hod_1y_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcPulseTime;   //!
   TBranch        *b_H_hod_1y_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_hod_1y_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcSampPed;   //!
   TBranch        *b_H_hod_1y_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcSampPedRaw;   //!
   TBranch        *b_H_hod_1y_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcSampPulseAmp;   //!
   TBranch        *b_H_hod_1y_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_hod_1y_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcSampPulseInt;   //!
   TBranch        *b_H_hod_1y_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_hod_1y_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcSampPulseTime;   //!
   TBranch        *b_H_hod_1y_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1y_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_hod_1y_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_negTdcCounter;   //!
   TBranch        *b_H_hod_1y_negTdcCounter;   //!
   TBranch        *b_Ndata_H_hod_1y_negTdcTime;   //!
   TBranch        *b_H_hod_1y_negTdcTime;   //!
   TBranch        *b_Ndata_H_hod_1y_negTdcTimeRaw;   //!
   TBranch        *b_H_hod_1y_negTdcTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_numGoodNegAdcHits;   //!
   TBranch        *b_H_hod_1y_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_hod_1y_numGoodNegTdcHits;   //!
   TBranch        *b_H_hod_1y_numGoodNegTdcHits;   //!
   TBranch        *b_Ndata_H_hod_1y_numGoodPosAdcHits;   //!
   TBranch        *b_H_hod_1y_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_hod_1y_numGoodPosTdcHits;   //!
   TBranch        *b_H_hod_1y_numGoodPosTdcHits;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcCounter;   //!
   TBranch        *b_H_hod_1y_posAdcCounter;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcErrorFlag;   //!
   TBranch        *b_H_hod_1y_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcPed;   //!
   TBranch        *b_H_hod_1y_posAdcPed;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcPedRaw;   //!
   TBranch        *b_H_hod_1y_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcPulseAmp;   //!
   TBranch        *b_H_hod_1y_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_hod_1y_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcPulseInt;   //!
   TBranch        *b_H_hod_1y_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcPulseIntRaw;   //!
   TBranch        *b_H_hod_1y_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcPulseTime;   //!
   TBranch        *b_H_hod_1y_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_hod_1y_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcSampPed;   //!
   TBranch        *b_H_hod_1y_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcSampPedRaw;   //!
   TBranch        *b_H_hod_1y_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcSampPulseAmp;   //!
   TBranch        *b_H_hod_1y_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_hod_1y_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcSampPulseInt;   //!
   TBranch        *b_H_hod_1y_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_hod_1y_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcSampPulseTime;   //!
   TBranch        *b_H_hod_1y_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_hod_1y_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_hod_1y_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_1y_posTdcCounter;   //!
   TBranch        *b_H_hod_1y_posTdcCounter;   //!
   TBranch        *b_Ndata_H_hod_1y_posTdcTime;   //!
   TBranch        *b_H_hod_1y_posTdcTime;   //!
   TBranch        *b_Ndata_H_hod_1y_posTdcTimeRaw;   //!
   TBranch        *b_H_hod_1y_posTdcTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_Clus_Flag;   //!
   TBranch        *b_H_hod_2x_Clus_Flag;   //!
   TBranch        *b_Ndata_H_hod_2x_Clus_Pos;   //!
   TBranch        *b_H_hod_2x_Clus_Pos;   //!
   TBranch        *b_Ndata_H_hod_2x_Clus_Size;   //!
   TBranch        *b_H_hod_2x_Clus_Size;   //!
   TBranch        *b_Ndata_H_hod_2x_Clus_UsedFlag;   //!
   TBranch        *b_H_hod_2x_Clus_UsedFlag;   //!
   TBranch        *b_Ndata_H_hod_2x_DiffDisTrackCorr;   //!
   TBranch        *b_H_hod_2x_DiffDisTrackCorr;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodNegAdcHitUsed;   //!
   TBranch        *b_H_hod_2x_GoodNegAdcHitUsed;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodNegAdcMult;   //!
   TBranch        *b_H_hod_2x_GoodNegAdcMult;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodNegAdcPed;   //!
   TBranch        *b_H_hod_2x_GoodNegAdcPed;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodNegAdcPulseAmp;   //!
   TBranch        *b_H_hod_2x_GoodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodNegAdcPulseInt;   //!
   TBranch        *b_H_hod_2x_GoodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodNegAdcPulseTime;   //!
   TBranch        *b_H_hod_2x_GoodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_hod_2x_GoodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodNegTdcTimeCorr;   //!
   TBranch        *b_H_hod_2x_GoodNegTdcTimeCorr;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodNegTdcTimeTOFCorr;   //!
   TBranch        *b_H_hod_2x_GoodNegTdcTimeTOFCorr;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodNegTdcTimeUnCorr;   //!
   TBranch        *b_H_hod_2x_GoodNegTdcTimeUnCorr;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodNegTdcTimeWalkCorr;   //!
   TBranch        *b_H_hod_2x_GoodNegTdcTimeWalkCorr;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodPosAdcHitUsed;   //!
   TBranch        *b_H_hod_2x_GoodPosAdcHitUsed;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodPosAdcMult;   //!
   TBranch        *b_H_hod_2x_GoodPosAdcMult;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodPosAdcPed;   //!
   TBranch        *b_H_hod_2x_GoodPosAdcPed;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodPosAdcPulseAmp;   //!
   TBranch        *b_H_hod_2x_GoodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodPosAdcPulseInt;   //!
   TBranch        *b_H_hod_2x_GoodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodPosAdcPulseTime;   //!
   TBranch        *b_H_hod_2x_GoodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_hod_2x_GoodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodPosTdcTimeCorr;   //!
   TBranch        *b_H_hod_2x_GoodPosTdcTimeCorr;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodPosTdcTimeTOFCorr;   //!
   TBranch        *b_H_hod_2x_GoodPosTdcTimeTOFCorr;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodPosTdcTimeUnCorr;   //!
   TBranch        *b_H_hod_2x_GoodPosTdcTimeUnCorr;   //!
   TBranch        *b_Ndata_H_hod_2x_GoodPosTdcTimeWalkCorr;   //!
   TBranch        *b_H_hod_2x_GoodPosTdcTimeWalkCorr;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcCounter;   //!
   TBranch        *b_H_hod_2x_negAdcCounter;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcErrorFlag;   //!
   TBranch        *b_H_hod_2x_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcPed;   //!
   TBranch        *b_H_hod_2x_negAdcPed;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcPedRaw;   //!
   TBranch        *b_H_hod_2x_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcPulseAmp;   //!
   TBranch        *b_H_hod_2x_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_hod_2x_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcPulseInt;   //!
   TBranch        *b_H_hod_2x_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcPulseIntRaw;   //!
   TBranch        *b_H_hod_2x_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcPulseTime;   //!
   TBranch        *b_H_hod_2x_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_hod_2x_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcSampPed;   //!
   TBranch        *b_H_hod_2x_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcSampPedRaw;   //!
   TBranch        *b_H_hod_2x_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcSampPulseAmp;   //!
   TBranch        *b_H_hod_2x_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_hod_2x_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcSampPulseInt;   //!
   TBranch        *b_H_hod_2x_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_hod_2x_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcSampPulseTime;   //!
   TBranch        *b_H_hod_2x_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2x_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_hod_2x_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_negTdcCounter;   //!
   TBranch        *b_H_hod_2x_negTdcCounter;   //!
   TBranch        *b_Ndata_H_hod_2x_negTdcTime;   //!
   TBranch        *b_H_hod_2x_negTdcTime;   //!
   TBranch        *b_Ndata_H_hod_2x_negTdcTimeRaw;   //!
   TBranch        *b_H_hod_2x_negTdcTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_numGoodNegAdcHits;   //!
   TBranch        *b_H_hod_2x_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_hod_2x_numGoodNegTdcHits;   //!
   TBranch        *b_H_hod_2x_numGoodNegTdcHits;   //!
   TBranch        *b_Ndata_H_hod_2x_numGoodPosAdcHits;   //!
   TBranch        *b_H_hod_2x_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_hod_2x_numGoodPosTdcHits;   //!
   TBranch        *b_H_hod_2x_numGoodPosTdcHits;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcCounter;   //!
   TBranch        *b_H_hod_2x_posAdcCounter;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcErrorFlag;   //!
   TBranch        *b_H_hod_2x_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcPed;   //!
   TBranch        *b_H_hod_2x_posAdcPed;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcPedRaw;   //!
   TBranch        *b_H_hod_2x_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcPulseAmp;   //!
   TBranch        *b_H_hod_2x_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_hod_2x_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcPulseInt;   //!
   TBranch        *b_H_hod_2x_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcPulseIntRaw;   //!
   TBranch        *b_H_hod_2x_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcPulseTime;   //!
   TBranch        *b_H_hod_2x_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_hod_2x_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcSampPed;   //!
   TBranch        *b_H_hod_2x_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcSampPedRaw;   //!
   TBranch        *b_H_hod_2x_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcSampPulseAmp;   //!
   TBranch        *b_H_hod_2x_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_hod_2x_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcSampPulseInt;   //!
   TBranch        *b_H_hod_2x_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_hod_2x_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcSampPulseTime;   //!
   TBranch        *b_H_hod_2x_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2x_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_hod_2x_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2x_posTdcCounter;   //!
   TBranch        *b_H_hod_2x_posTdcCounter;   //!
   TBranch        *b_Ndata_H_hod_2x_posTdcTime;   //!
   TBranch        *b_H_hod_2x_posTdcTime;   //!
   TBranch        *b_Ndata_H_hod_2x_posTdcTimeRaw;   //!
   TBranch        *b_H_hod_2x_posTdcTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_Clus_Flag;   //!
   TBranch        *b_H_hod_2y_Clus_Flag;   //!
   TBranch        *b_Ndata_H_hod_2y_Clus_Pos;   //!
   TBranch        *b_H_hod_2y_Clus_Pos;   //!
   TBranch        *b_Ndata_H_hod_2y_Clus_Size;   //!
   TBranch        *b_H_hod_2y_Clus_Size;   //!
   TBranch        *b_Ndata_H_hod_2y_Clus_UsedFlag;   //!
   TBranch        *b_H_hod_2y_Clus_UsedFlag;   //!
   TBranch        *b_Ndata_H_hod_2y_DiffDisTrackCorr;   //!
   TBranch        *b_H_hod_2y_DiffDisTrackCorr;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodNegAdcHitUsed;   //!
   TBranch        *b_H_hod_2y_GoodNegAdcHitUsed;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodNegAdcMult;   //!
   TBranch        *b_H_hod_2y_GoodNegAdcMult;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodNegAdcPed;   //!
   TBranch        *b_H_hod_2y_GoodNegAdcPed;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodNegAdcPulseAmp;   //!
   TBranch        *b_H_hod_2y_GoodNegAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodNegAdcPulseInt;   //!
   TBranch        *b_H_hod_2y_GoodNegAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodNegAdcPulseTime;   //!
   TBranch        *b_H_hod_2y_GoodNegAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodNegAdcTdcDiffTime;   //!
   TBranch        *b_H_hod_2y_GoodNegAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodNegTdcTimeCorr;   //!
   TBranch        *b_H_hod_2y_GoodNegTdcTimeCorr;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodNegTdcTimeTOFCorr;   //!
   TBranch        *b_H_hod_2y_GoodNegTdcTimeTOFCorr;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodNegTdcTimeUnCorr;   //!
   TBranch        *b_H_hod_2y_GoodNegTdcTimeUnCorr;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodNegTdcTimeWalkCorr;   //!
   TBranch        *b_H_hod_2y_GoodNegTdcTimeWalkCorr;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodPosAdcHitUsed;   //!
   TBranch        *b_H_hod_2y_GoodPosAdcHitUsed;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodPosAdcMult;   //!
   TBranch        *b_H_hod_2y_GoodPosAdcMult;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodPosAdcPed;   //!
   TBranch        *b_H_hod_2y_GoodPosAdcPed;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodPosAdcPulseAmp;   //!
   TBranch        *b_H_hod_2y_GoodPosAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodPosAdcPulseInt;   //!
   TBranch        *b_H_hod_2y_GoodPosAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodPosAdcPulseTime;   //!
   TBranch        *b_H_hod_2y_GoodPosAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodPosAdcTdcDiffTime;   //!
   TBranch        *b_H_hod_2y_GoodPosAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodPosTdcTimeCorr;   //!
   TBranch        *b_H_hod_2y_GoodPosTdcTimeCorr;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodPosTdcTimeTOFCorr;   //!
   TBranch        *b_H_hod_2y_GoodPosTdcTimeTOFCorr;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodPosTdcTimeUnCorr;   //!
   TBranch        *b_H_hod_2y_GoodPosTdcTimeUnCorr;   //!
   TBranch        *b_Ndata_H_hod_2y_GoodPosTdcTimeWalkCorr;   //!
   TBranch        *b_H_hod_2y_GoodPosTdcTimeWalkCorr;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcCounter;   //!
   TBranch        *b_H_hod_2y_negAdcCounter;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcErrorFlag;   //!
   TBranch        *b_H_hod_2y_negAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcPed;   //!
   TBranch        *b_H_hod_2y_negAdcPed;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcPedRaw;   //!
   TBranch        *b_H_hod_2y_negAdcPedRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcPulseAmp;   //!
   TBranch        *b_H_hod_2y_negAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcPulseAmpRaw;   //!
   TBranch        *b_H_hod_2y_negAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcPulseInt;   //!
   TBranch        *b_H_hod_2y_negAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcPulseIntRaw;   //!
   TBranch        *b_H_hod_2y_negAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcPulseTime;   //!
   TBranch        *b_H_hod_2y_negAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcPulseTimeRaw;   //!
   TBranch        *b_H_hod_2y_negAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcSampPed;   //!
   TBranch        *b_H_hod_2y_negAdcSampPed;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcSampPedRaw;   //!
   TBranch        *b_H_hod_2y_negAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcSampPulseAmp;   //!
   TBranch        *b_H_hod_2y_negAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_hod_2y_negAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcSampPulseInt;   //!
   TBranch        *b_H_hod_2y_negAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcSampPulseIntRaw;   //!
   TBranch        *b_H_hod_2y_negAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcSampPulseTime;   //!
   TBranch        *b_H_hod_2y_negAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2y_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_hod_2y_negAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_negTdcCounter;   //!
   TBranch        *b_H_hod_2y_negTdcCounter;   //!
   TBranch        *b_Ndata_H_hod_2y_negTdcTime;   //!
   TBranch        *b_H_hod_2y_negTdcTime;   //!
   TBranch        *b_Ndata_H_hod_2y_negTdcTimeRaw;   //!
   TBranch        *b_H_hod_2y_negTdcTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_numGoodNegAdcHits;   //!
   TBranch        *b_H_hod_2y_numGoodNegAdcHits;   //!
   TBranch        *b_Ndata_H_hod_2y_numGoodNegTdcHits;   //!
   TBranch        *b_H_hod_2y_numGoodNegTdcHits;   //!
   TBranch        *b_Ndata_H_hod_2y_numGoodPosAdcHits;   //!
   TBranch        *b_H_hod_2y_numGoodPosAdcHits;   //!
   TBranch        *b_Ndata_H_hod_2y_numGoodPosTdcHits;   //!
   TBranch        *b_H_hod_2y_numGoodPosTdcHits;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcCounter;   //!
   TBranch        *b_H_hod_2y_posAdcCounter;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcErrorFlag;   //!
   TBranch        *b_H_hod_2y_posAdcErrorFlag;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcPed;   //!
   TBranch        *b_H_hod_2y_posAdcPed;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcPedRaw;   //!
   TBranch        *b_H_hod_2y_posAdcPedRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcPulseAmp;   //!
   TBranch        *b_H_hod_2y_posAdcPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcPulseAmpRaw;   //!
   TBranch        *b_H_hod_2y_posAdcPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcPulseInt;   //!
   TBranch        *b_H_hod_2y_posAdcPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcPulseIntRaw;   //!
   TBranch        *b_H_hod_2y_posAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcPulseTime;   //!
   TBranch        *b_H_hod_2y_posAdcPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcPulseTimeRaw;   //!
   TBranch        *b_H_hod_2y_posAdcPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcSampPed;   //!
   TBranch        *b_H_hod_2y_posAdcSampPed;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcSampPedRaw;   //!
   TBranch        *b_H_hod_2y_posAdcSampPedRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcSampPulseAmp;   //!
   TBranch        *b_H_hod_2y_posAdcSampPulseAmp;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_H_hod_2y_posAdcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcSampPulseInt;   //!
   TBranch        *b_H_hod_2y_posAdcSampPulseInt;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcSampPulseIntRaw;   //!
   TBranch        *b_H_hod_2y_posAdcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcSampPulseTime;   //!
   TBranch        *b_H_hod_2y_posAdcSampPulseTime;   //!
   TBranch        *b_Ndata_H_hod_2y_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_H_hod_2y_posAdcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_H_hod_2y_posTdcCounter;   //!
   TBranch        *b_H_hod_2y_posTdcCounter;   //!
   TBranch        *b_Ndata_H_hod_2y_posTdcTime;   //!
   TBranch        *b_H_hod_2y_posTdcTime;   //!
   TBranch        *b_Ndata_H_hod_2y_posTdcTimeRaw;   //!
   TBranch        *b_H_hod_2y_posTdcTimeRaw;   //!
   TBranch        *b_Ndata_H_tr_GoodPlane3;   //!
   TBranch        *b_H_tr_GoodPlane3;   //!
   TBranch        *b_Ndata_H_tr_GoodPlane4;   //!
   TBranch        *b_H_tr_GoodPlane4;   //!
   TBranch        *b_Ndata_H_tr_beta;   //!
   TBranch        *b_H_tr_beta;   //!
   TBranch        *b_Ndata_H_tr_betachisq;   //!
   TBranch        *b_H_tr_betachisq;   //!
   TBranch        *b_Ndata_H_tr_chi2;   //!
   TBranch        *b_H_tr_chi2;   //!
   TBranch        *b_Ndata_H_tr_d_ph;   //!
   TBranch        *b_H_tr_d_ph;   //!
   TBranch        *b_Ndata_H_tr_d_th;   //!
   TBranch        *b_H_tr_d_th;   //!
   TBranch        *b_Ndata_H_tr_d_x;   //!
   TBranch        *b_H_tr_d_x;   //!
   TBranch        *b_Ndata_H_tr_d_y;   //!
   TBranch        *b_H_tr_d_y;   //!
   TBranch        *b_Ndata_H_tr_dbeta;   //!
   TBranch        *b_H_tr_dbeta;   //!
   TBranch        *b_Ndata_H_tr_dtime;   //!
   TBranch        *b_H_tr_dtime;   //!
   TBranch        *b_Ndata_H_tr_flag;   //!
   TBranch        *b_H_tr_flag;   //!
   TBranch        *b_Ndata_H_tr_fptime;   //!
   TBranch        *b_H_tr_fptime;   //!
   TBranch        *b_Ndata_H_tr_ndof;   //!
   TBranch        *b_H_tr_ndof;   //!
   TBranch        *b_Ndata_H_tr_npmt;   //!
   TBranch        *b_H_tr_npmt;   //!
   TBranch        *b_Ndata_H_tr_p;   //!
   TBranch        *b_H_tr_p;   //!
   TBranch        *b_Ndata_H_tr_pathl;   //!
   TBranch        *b_H_tr_pathl;   //!
   TBranch        *b_Ndata_H_tr_ph;   //!
   TBranch        *b_H_tr_ph;   //!
   TBranch        *b_Ndata_H_tr_px;   //!
   TBranch        *b_H_tr_px;   //!
   TBranch        *b_Ndata_H_tr_py;   //!
   TBranch        *b_H_tr_py;   //!
   TBranch        *b_Ndata_H_tr_pz;   //!
   TBranch        *b_H_tr_pz;   //!
   TBranch        *b_Ndata_H_tr_r_ph;   //!
   TBranch        *b_H_tr_r_ph;   //!
   TBranch        *b_Ndata_H_tr_r_th;   //!
   TBranch        *b_H_tr_r_th;   //!
   TBranch        *b_Ndata_H_tr_r_x;   //!
   TBranch        *b_H_tr_r_x;   //!
   TBranch        *b_Ndata_H_tr_r_y;   //!
   TBranch        *b_H_tr_r_y;   //!
   TBranch        *b_Ndata_H_tr_tg_dp;   //!
   TBranch        *b_H_tr_tg_dp;   //!
   TBranch        *b_Ndata_H_tr_tg_ph;   //!
   TBranch        *b_H_tr_tg_ph;   //!
   TBranch        *b_Ndata_H_tr_tg_th;   //!
   TBranch        *b_H_tr_tg_th;   //!
   TBranch        *b_Ndata_H_tr_tg_y;   //!
   TBranch        *b_H_tr_tg_y;   //!
   TBranch        *b_Ndata_H_tr_th;   //!
   TBranch        *b_H_tr_th;   //!
   TBranch        *b_Ndata_H_tr_time;   //!
   TBranch        *b_H_tr_time;   //!
   TBranch        *b_Ndata_H_tr_vx;   //!
   TBranch        *b_H_tr_vx;   //!
   TBranch        *b_Ndata_H_tr_vy;   //!
   TBranch        *b_H_tr_vy;   //!
   TBranch        *b_Ndata_H_tr_vz;   //!
   TBranch        *b_H_tr_vz;   //!
   TBranch        *b_Ndata_H_tr_x;   //!
   TBranch        *b_H_tr_x;   //!
   TBranch        *b_Ndata_H_tr_y;   //!
   TBranch        *b_H_tr_y;   //!
   TBranch        *b_Ndata_NPS_cal_clusE;   //!
   TBranch        *b_NPS_cal_clusE;   //!
   TBranch        *b_Ndata_NPS_cal_clusT;   //!
   TBranch        *b_NPS_cal_clusT;   //!
   TBranch        *b_Ndata_NPS_cal_clusX;   //!
   TBranch        *b_NPS_cal_clusX;   //!
   TBranch        *b_Ndata_NPS_cal_clusY;   //!
   TBranch        *b_NPS_cal_clusY;   //!
   TBranch        *b_Ndata_NPS_cal_clusZ;   //!
   TBranch        *b_NPS_cal_clusZ;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcCounter;   //!
   TBranch        *b_NPS_cal_fly_adcCounter;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcErrorFlag;   //!
   TBranch        *b_NPS_cal_fly_adcErrorFlag;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcPed;   //!
   TBranch        *b_NPS_cal_fly_adcPed;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcPedRaw;   //!
   TBranch        *b_NPS_cal_fly_adcPedRaw;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcPulseAmp;   //!
   TBranch        *b_NPS_cal_fly_adcPulseAmp;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcPulseAmpRaw;   //!
   TBranch        *b_NPS_cal_fly_adcPulseAmpRaw;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcPulseInt;   //!
   TBranch        *b_NPS_cal_fly_adcPulseInt;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcPulseIntRaw;   //!
   TBranch        *b_NPS_cal_fly_adcPulseIntRaw;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcPulseTime;   //!
   TBranch        *b_NPS_cal_fly_adcPulseTime;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcPulseTimeRaw;   //!
   TBranch        *b_NPS_cal_fly_adcPulseTimeRaw;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcSampPed;   //!
   TBranch        *b_NPS_cal_fly_adcSampPed;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcSampPedRaw;   //!
   TBranch        *b_NPS_cal_fly_adcSampPedRaw;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcSampPulseAmp;   //!
   TBranch        *b_NPS_cal_fly_adcSampPulseAmp;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcSampPulseAmpRaw;   //!
   TBranch        *b_NPS_cal_fly_adcSampPulseAmpRaw;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcSampPulseInt;   //!
   TBranch        *b_NPS_cal_fly_adcSampPulseInt;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcSampPulseIntRaw;   //!
   TBranch        *b_NPS_cal_fly_adcSampPulseIntRaw;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcSampPulseTime;   //!
   TBranch        *b_NPS_cal_fly_adcSampPulseTime;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcSampPulseTimeRaw;   //!
   TBranch        *b_NPS_cal_fly_adcSampPulseTimeRaw;   //!
   TBranch        *b_Ndata_NPS_cal_fly_adcSampWaveform;   //!
   TBranch        *b_NPS_cal_fly_adcSampWaveform;   //!
   TBranch        *b_Ndata_NPS_cal_fly_block_clusterID;   //!
   TBranch        *b_NPS_cal_fly_block_clusterID;   //!
   TBranch        *b_Ndata_NPS_cal_fly_e;   //!
   TBranch        *b_NPS_cal_fly_e;   //!
   TBranch        *b_Ndata_NPS_cal_fly_goodAdcMult;   //!
   TBranch        *b_NPS_cal_fly_goodAdcMult;   //!
   TBranch        *b_Ndata_NPS_cal_fly_goodAdcPed;   //!
   TBranch        *b_NPS_cal_fly_goodAdcPed;   //!
   TBranch        *b_Ndata_NPS_cal_fly_goodAdcPulseAmp;   //!
   TBranch        *b_NPS_cal_fly_goodAdcPulseAmp;   //!
   TBranch        *b_Ndata_NPS_cal_fly_goodAdcPulseInt;   //!
   TBranch        *b_NPS_cal_fly_goodAdcPulseInt;   //!
   TBranch        *b_Ndata_NPS_cal_fly_goodAdcPulseIntRaw;   //!
   TBranch        *b_NPS_cal_fly_goodAdcPulseIntRaw;   //!
   TBranch        *b_Ndata_NPS_cal_fly_goodAdcPulseTime;   //!
   TBranch        *b_NPS_cal_fly_goodAdcPulseTime;   //!
   TBranch        *b_Ndata_NPS_cal_fly_goodAdcTdcDiffTime;   //!
   TBranch        *b_NPS_cal_fly_goodAdcTdcDiffTime;   //!
   TBranch        *b_Ndata_NPS_cal_fly_numGoodAdcHits;   //!
   TBranch        *b_NPS_cal_fly_numGoodAdcHits;   //!
   TBranch        *b_Ndata_NPS_cal_vtpClusE;   //!
   TBranch        *b_NPS_cal_vtpClusE;   //!
   TBranch        *b_Ndata_NPS_cal_vtpClusSize;   //!
   TBranch        *b_NPS_cal_vtpClusSize;   //!
   TBranch        *b_Ndata_NPS_cal_vtpClusTime;   //!
   TBranch        *b_NPS_cal_vtpClusTime;   //!
   TBranch        *b_Ndata_NPS_cal_vtpClusX;   //!
   TBranch        *b_NPS_cal_vtpClusX;   //!
   TBranch        *b_Ndata_NPS_cal_vtpClusY;   //!
   TBranch        *b_NPS_cal_vtpClusY;   //!
   TBranch        *b_Ndata_NPS_cal_vtpTrigTime;   //!
   TBranch        *b_NPS_cal_vtpTrigTime;   //!
   TBranch        *b_Ndata_NPS_cal_vtpTrigType0;   //!
   TBranch        *b_NPS_cal_vtpTrigType0;   //!
   TBranch        *b_Ndata_NPS_cal_vtpTrigType1;   //!
   TBranch        *b_NPS_cal_vtpTrigType1;   //!
   TBranch        *b_Ndata_NPS_cal_vtpTrigType2;   //!
   TBranch        *b_NPS_cal_vtpTrigType2;   //!
   TBranch        *b_H_1MHz_scaler;   //!
   TBranch        *b_H_1MHz_scalerCut;   //!
   TBranch        *b_H_1MHz_scalerRate;   //!
   TBranch        *b_H_1MHz_scalerTime;   //!
   TBranch        *b_H_1MHz_scalerTimeCut;   //!
   TBranch        *b_H_1MHz_CP_scaler;   //!
   TBranch        *b_H_1MHz_CP_scalerCut;   //!
   TBranch        *b_H_1MHz_CP_scalerRate;   //!
   TBranch        *b_H_1MHz_CP_scalerTime;   //!
   TBranch        *b_H_1MHz_CP_scalerTimeCut;   //!
   TBranch        *b_H_1MHz_Hel_scaler;   //!
   TBranch        *b_H_1MHz_Hel_scalerCut;   //!
   TBranch        *b_H_1MHz_Hel_scalerRate;   //!
   TBranch        *b_H_1MHz_Hel_scalerTime;   //!
   TBranch        *b_H_1MHz_Hel_scalerTimeCut;   //!
   TBranch        *b_H_ASUM_scaler;   //!
   TBranch        *b_H_ASUM_scalerCut;   //!
   TBranch        *b_H_ASUM_scalerRate;   //!
   TBranch        *b_H_BCM1_scaler;   //!
   TBranch        *b_H_BCM1_scalerCharge;   //!
   TBranch        *b_H_BCM1_scalerChargeCut;   //!
   TBranch        *b_H_BCM1_scalerCurrent;   //!
   TBranch        *b_H_BCM1_scalerCut;   //!
   TBranch        *b_H_BCM1_scalerRate;   //!
   TBranch        *b_H_BCM1_Hel_scaler;   //!
   TBranch        *b_H_BCM1_Hel_scalerCharge;   //!
   TBranch        *b_H_BCM1_Hel_scalerChargeCut;   //!
   TBranch        *b_H_BCM1_Hel_scalerCurrent;   //!
   TBranch        *b_H_BCM1_Hel_scalerCut;   //!
   TBranch        *b_H_BCM1_Hel_scalerRate;   //!
   TBranch        *b_H_BCM2_scaler;   //!
   TBranch        *b_H_BCM2_scalerCharge;   //!
   TBranch        *b_H_BCM2_scalerChargeCut;   //!
   TBranch        *b_H_BCM2_scalerCurrent;   //!
   TBranch        *b_H_BCM2_scalerCut;   //!
   TBranch        *b_H_BCM2_scalerRate;   //!
   TBranch        *b_H_BCM2_Hel_scaler;   //!
   TBranch        *b_H_BCM2_Hel_scalerCharge;   //!
   TBranch        *b_H_BCM2_Hel_scalerChargeCut;   //!
   TBranch        *b_H_BCM2_Hel_scalerCurrent;   //!
   TBranch        *b_H_BCM2_Hel_scalerCut;   //!
   TBranch        *b_H_BCM2_Hel_scalerRate;   //!
   TBranch        *b_H_BCM4A_scaler;   //!
   TBranch        *b_H_BCM4A_scalerCharge;   //!
   TBranch        *b_H_BCM4A_scalerChargeCut;   //!
   TBranch        *b_H_BCM4A_scalerCurrent;   //!
   TBranch        *b_H_BCM4A_scalerCut;   //!
   TBranch        *b_H_BCM4A_scalerRate;   //!
   TBranch        *b_H_BCM4A_Hel_scaler;   //!
   TBranch        *b_H_BCM4A_Hel_scalerCharge;   //!
   TBranch        *b_H_BCM4A_Hel_scalerChargeCut;   //!
   TBranch        *b_H_BCM4A_Hel_scalerCurrent;   //!
   TBranch        *b_H_BCM4A_Hel_scalerCut;   //!
   TBranch        *b_H_BCM4A_Hel_scalerRate;   //!
   TBranch        *b_H_BCM4B_scaler;   //!
   TBranch        *b_H_BCM4B_scalerCharge;   //!
   TBranch        *b_H_BCM4B_scalerChargeCut;   //!
   TBranch        *b_H_BCM4B_scalerCurrent;   //!
   TBranch        *b_H_BCM4B_scalerCut;   //!
   TBranch        *b_H_BCM4B_scalerRate;   //!
   TBranch        *b_H_BCM4B_Hel_scaler;   //!
   TBranch        *b_H_BCM4B_Hel_scalerCharge;   //!
   TBranch        *b_H_BCM4B_Hel_scalerChargeCut;   //!
   TBranch        *b_H_BCM4B_Hel_scalerCurrent;   //!
   TBranch        *b_H_BCM4B_Hel_scalerCut;   //!
   TBranch        *b_H_BCM4B_Hel_scalerRate;   //!
   TBranch        *b_H_BCM4C_scaler;   //!
   TBranch        *b_H_BCM4C_scalerCharge;   //!
   TBranch        *b_H_BCM4C_scalerChargeCut;   //!
   TBranch        *b_H_BCM4C_scalerCurrent;   //!
   TBranch        *b_H_BCM4C_scalerCut;   //!
   TBranch        *b_H_BCM4C_scalerRate;   //!
   TBranch        *b_H_BCM4C_Hel_scaler;   //!
   TBranch        *b_H_BCM4C_Hel_scalerCharge;   //!
   TBranch        *b_H_BCM4C_Hel_scalerChargeCut;   //!
   TBranch        *b_H_BCM4C_Hel_scalerCurrent;   //!
   TBranch        *b_H_BCM4C_Hel_scalerCut;   //!
   TBranch        *b_H_BCM4C_Hel_scalerRate;   //!
   TBranch        *b_H_BSUM_scaler;   //!
   TBranch        *b_H_BSUM_scalerCut;   //!
   TBranch        *b_H_BSUM_scalerRate;   //!
   TBranch        *b_H_CER_scaler;   //!
   TBranch        *b_H_CER_scalerCut;   //!
   TBranch        *b_H_CER_scalerRate;   //!
   TBranch        *b_H_CSUM_scaler;   //!
   TBranch        *b_H_CSUM_scalerCut;   //!
   TBranch        *b_H_CSUM_scalerRate;   //!
   TBranch        *b_H_DSUM_scaler;   //!
   TBranch        *b_H_DSUM_scalerCut;   //!
   TBranch        *b_H_DSUM_scalerRate;   //!
   TBranch        *b_H_EDTM_scaler;   //!
   TBranch        *b_H_EDTM_scalerCut;   //!
   TBranch        *b_H_EDTM_scalerRate;   //!
   TBranch        *b_H_EDTM_CP_scaler;   //!
   TBranch        *b_H_EDTM_CP_scalerCut;   //!
   TBranch        *b_H_EDTM_CP_scalerRate;   //!
   TBranch        *b_H_Empty_scaler;   //!
   TBranch        *b_H_Empty_scalerCut;   //!
   TBranch        *b_H_Empty_scalerRate;   //!
   TBranch        *b_H_Empty_10_scaler;   //!
   TBranch        *b_H_Empty_10_scalerCut;   //!
   TBranch        *b_H_Empty_10_scalerRate;   //!
   TBranch        *b_H_Empty_11_scaler;   //!
   TBranch        *b_H_Empty_11_scalerCut;   //!
   TBranch        *b_H_Empty_11_scalerRate;   //!
   TBranch        *b_H_Empty_12_scaler;   //!
   TBranch        *b_H_Empty_12_scalerCut;   //!
   TBranch        *b_H_Empty_12_scalerRate;   //!
   TBranch        *b_H_Empty_13_scaler;   //!
   TBranch        *b_H_Empty_13_scalerCut;   //!
   TBranch        *b_H_Empty_13_scalerRate;   //!
   TBranch        *b_H_Empty_14_scaler;   //!
   TBranch        *b_H_Empty_14_scalerCut;   //!
   TBranch        *b_H_Empty_14_scalerRate;   //!
   TBranch        *b_H_Empty_15_scaler;   //!
   TBranch        *b_H_Empty_15_scalerCut;   //!
   TBranch        *b_H_Empty_15_scalerRate;   //!
   TBranch        *b_H_Empty_16_scaler;   //!
   TBranch        *b_H_Empty_16_scalerCut;   //!
   TBranch        *b_H_Empty_16_scalerRate;   //!
   TBranch        *b_H_Empty_17_scaler;   //!
   TBranch        *b_H_Empty_17_scalerCut;   //!
   TBranch        *b_H_Empty_17_scalerRate;   //!
   TBranch        *b_H_Empty_18_scaler;   //!
   TBranch        *b_H_Empty_18_scalerCut;   //!
   TBranch        *b_H_Empty_18_scalerRate;   //!
   TBranch        *b_H_Empty_19_scaler;   //!
   TBranch        *b_H_Empty_19_scalerCut;   //!
   TBranch        *b_H_Empty_19_scalerRate;   //!
   TBranch        *b_H_Empty_2_scaler;   //!
   TBranch        *b_H_Empty_2_scalerCut;   //!
   TBranch        *b_H_Empty_2_scalerRate;   //!
   TBranch        *b_H_Empty_20_scaler;   //!
   TBranch        *b_H_Empty_20_scalerCut;   //!
   TBranch        *b_H_Empty_20_scalerRate;   //!
   TBranch        *b_H_Empty_21_scaler;   //!
   TBranch        *b_H_Empty_21_scalerCut;   //!
   TBranch        *b_H_Empty_21_scalerRate;   //!
   TBranch        *b_H_Empty_22_scaler;   //!
   TBranch        *b_H_Empty_22_scalerCut;   //!
   TBranch        *b_H_Empty_22_scalerRate;   //!
   TBranch        *b_H_Empty_23_scaler;   //!
   TBranch        *b_H_Empty_23_scalerCut;   //!
   TBranch        *b_H_Empty_23_scalerRate;   //!
   TBranch        *b_H_Empty_24_scaler;   //!
   TBranch        *b_H_Empty_24_scalerCut;   //!
   TBranch        *b_H_Empty_24_scalerRate;   //!
   TBranch        *b_H_Empty_25_scaler;   //!
   TBranch        *b_H_Empty_25_scalerCut;   //!
   TBranch        *b_H_Empty_25_scalerRate;   //!
   TBranch        *b_H_Empty_26_scaler;   //!
   TBranch        *b_H_Empty_26_scalerCut;   //!
   TBranch        *b_H_Empty_26_scalerRate;   //!
   TBranch        *b_H_Empty_27_scaler;   //!
   TBranch        *b_H_Empty_27_scalerCut;   //!
   TBranch        *b_H_Empty_27_scalerRate;   //!
   TBranch        *b_H_Empty_28_scaler;   //!
   TBranch        *b_H_Empty_28_scalerCut;   //!
   TBranch        *b_H_Empty_28_scalerRate;   //!
   TBranch        *b_H_Empty_29_scaler;   //!
   TBranch        *b_H_Empty_29_scalerCut;   //!
   TBranch        *b_H_Empty_29_scalerRate;   //!
   TBranch        *b_H_Empty_3_scaler;   //!
   TBranch        *b_H_Empty_3_scalerCut;   //!
   TBranch        *b_H_Empty_3_scalerRate;   //!
   TBranch        *b_H_Empty_30_scaler;   //!
   TBranch        *b_H_Empty_30_scalerCut;   //!
   TBranch        *b_H_Empty_30_scalerRate;   //!
   TBranch        *b_H_Empty_31_scaler;   //!
   TBranch        *b_H_Empty_31_scalerCut;   //!
   TBranch        *b_H_Empty_31_scalerRate;   //!
   TBranch        *b_H_Empty_32_scaler;   //!
   TBranch        *b_H_Empty_32_scalerCut;   //!
   TBranch        *b_H_Empty_32_scalerRate;   //!
   TBranch        *b_H_Empty_33_scaler;   //!
   TBranch        *b_H_Empty_33_scalerCut;   //!
   TBranch        *b_H_Empty_33_scalerRate;   //!
   TBranch        *b_H_Empty_34_scaler;   //!
   TBranch        *b_H_Empty_34_scalerCut;   //!
   TBranch        *b_H_Empty_34_scalerRate;   //!
   TBranch        *b_H_Empty_35_scaler;   //!
   TBranch        *b_H_Empty_35_scalerCut;   //!
   TBranch        *b_H_Empty_35_scalerRate;   //!
   TBranch        *b_H_Empty_36_scaler;   //!
   TBranch        *b_H_Empty_36_scalerCut;   //!
   TBranch        *b_H_Empty_36_scalerRate;   //!
   TBranch        *b_H_Empty_37_scaler;   //!
   TBranch        *b_H_Empty_37_scalerCut;   //!
   TBranch        *b_H_Empty_37_scalerRate;   //!
   TBranch        *b_H_Empty_38_scaler;   //!
   TBranch        *b_H_Empty_38_scalerCut;   //!
   TBranch        *b_H_Empty_38_scalerRate;   //!
   TBranch        *b_H_Empty_39_scaler;   //!
   TBranch        *b_H_Empty_39_scalerCut;   //!
   TBranch        *b_H_Empty_39_scalerRate;   //!
   TBranch        *b_H_Empty_4_scaler;   //!
   TBranch        *b_H_Empty_4_scalerCut;   //!
   TBranch        *b_H_Empty_4_scalerRate;   //!
   TBranch        *b_H_Empty_40_scaler;   //!
   TBranch        *b_H_Empty_40_scalerCut;   //!
   TBranch        *b_H_Empty_40_scalerRate;   //!
   TBranch        *b_H_Empty_41_scaler;   //!
   TBranch        *b_H_Empty_41_scalerCut;   //!
   TBranch        *b_H_Empty_41_scalerRate;   //!
   TBranch        *b_H_Empty_42_scaler;   //!
   TBranch        *b_H_Empty_42_scalerCut;   //!
   TBranch        *b_H_Empty_42_scalerRate;   //!
   TBranch        *b_H_Empty_43_scaler;   //!
   TBranch        *b_H_Empty_43_scalerCut;   //!
   TBranch        *b_H_Empty_43_scalerRate;   //!
   TBranch        *b_H_Empty_44_scaler;   //!
   TBranch        *b_H_Empty_44_scalerCut;   //!
   TBranch        *b_H_Empty_44_scalerRate;   //!
   TBranch        *b_H_Empty_45_scaler;   //!
   TBranch        *b_H_Empty_45_scalerCut;   //!
   TBranch        *b_H_Empty_45_scalerRate;   //!
   TBranch        *b_H_Empty_46_scaler;   //!
   TBranch        *b_H_Empty_46_scalerCut;   //!
   TBranch        *b_H_Empty_46_scalerRate;   //!
   TBranch        *b_H_Empty_47_scaler;   //!
   TBranch        *b_H_Empty_47_scalerCut;   //!
   TBranch        *b_H_Empty_47_scalerRate;   //!
   TBranch        *b_H_Empty_48_scaler;   //!
   TBranch        *b_H_Empty_48_scalerCut;   //!
   TBranch        *b_H_Empty_48_scalerRate;   //!
   TBranch        *b_H_Empty_49_scaler;   //!
   TBranch        *b_H_Empty_49_scalerCut;   //!
   TBranch        *b_H_Empty_49_scalerRate;   //!
   TBranch        *b_H_Empty_5_scaler;   //!
   TBranch        *b_H_Empty_5_scalerCut;   //!
   TBranch        *b_H_Empty_5_scalerRate;   //!
   TBranch        *b_H_Empty_50_scaler;   //!
   TBranch        *b_H_Empty_50_scalerCut;   //!
   TBranch        *b_H_Empty_50_scalerRate;   //!
   TBranch        *b_H_Empty_51_scaler;   //!
   TBranch        *b_H_Empty_51_scalerCut;   //!
   TBranch        *b_H_Empty_51_scalerRate;   //!
   TBranch        *b_H_Empty_52_scaler;   //!
   TBranch        *b_H_Empty_52_scalerCut;   //!
   TBranch        *b_H_Empty_52_scalerRate;   //!
   TBranch        *b_H_Empty_53_scaler;   //!
   TBranch        *b_H_Empty_53_scalerCut;   //!
   TBranch        *b_H_Empty_53_scalerRate;   //!
   TBranch        *b_H_Empty_54_scaler;   //!
   TBranch        *b_H_Empty_54_scalerCut;   //!
   TBranch        *b_H_Empty_54_scalerRate;   //!
   TBranch        *b_H_Empty_55_scaler;   //!
   TBranch        *b_H_Empty_55_scalerCut;   //!
   TBranch        *b_H_Empty_55_scalerRate;   //!
   TBranch        *b_H_Empty_56_scaler;   //!
   TBranch        *b_H_Empty_56_scalerCut;   //!
   TBranch        *b_H_Empty_56_scalerRate;   //!
   TBranch        *b_H_Empty_57_scaler;   //!
   TBranch        *b_H_Empty_57_scalerCut;   //!
   TBranch        *b_H_Empty_57_scalerRate;   //!
   TBranch        *b_H_Empty_58_scaler;   //!
   TBranch        *b_H_Empty_58_scalerCut;   //!
   TBranch        *b_H_Empty_58_scalerRate;   //!
   TBranch        *b_H_Empty_59_scaler;   //!
   TBranch        *b_H_Empty_59_scalerCut;   //!
   TBranch        *b_H_Empty_59_scalerRate;   //!
   TBranch        *b_H_Empty_6_scaler;   //!
   TBranch        *b_H_Empty_6_scalerCut;   //!
   TBranch        *b_H_Empty_6_scalerRate;   //!
   TBranch        *b_H_Empty_60_scaler;   //!
   TBranch        *b_H_Empty_60_scalerCut;   //!
   TBranch        *b_H_Empty_60_scalerRate;   //!
   TBranch        *b_H_Empty_7_scaler;   //!
   TBranch        *b_H_Empty_7_scalerCut;   //!
   TBranch        *b_H_Empty_7_scalerRate;   //!
   TBranch        *b_H_Empty_8_scaler;   //!
   TBranch        *b_H_Empty_8_scalerCut;   //!
   TBranch        *b_H_Empty_8_scalerRate;   //!
   TBranch        *b_H_Empty_9_scaler;   //!
   TBranch        *b_H_Empty_9_scalerCut;   //!
   TBranch        *b_H_Empty_9_scalerRate;   //!
   TBranch        *b_H_HAModStat_scaler;   //!
   TBranch        *b_H_HAModStat_scalerCut;   //!
   TBranch        *b_H_HAModStat_scalerRate;   //!
   TBranch        *b_H_PRHI_scaler;   //!
   TBranch        *b_H_PRHI_scalerCut;   //!
   TBranch        *b_H_PRHI_scalerRate;   //!
   TBranch        *b_H_PRLO_scaler;   //!
   TBranch        *b_H_PRLO_scalerCut;   //!
   TBranch        *b_H_PRLO_scalerRate;   //!
   TBranch        *b_H_S1X_scaler;   //!
   TBranch        *b_H_S1X_scalerCut;   //!
   TBranch        *b_H_S1X_scalerRate;   //!
   TBranch        *b_H_S1XS1Y_scaler;   //!
   TBranch        *b_H_S1XS1Y_scalerCut;   //!
   TBranch        *b_H_S1XS1Y_scalerRate;   //!
   TBranch        *b_H_S1Y_scaler;   //!
   TBranch        *b_H_S1Y_scalerCut;   //!
   TBranch        *b_H_S1Y_scalerRate;   //!
   TBranch        *b_H_S2X_scaler;   //!
   TBranch        *b_H_S2X_scalerCut;   //!
   TBranch        *b_H_S2X_scalerRate;   //!
   TBranch        *b_H_S2XS2Y_scaler;   //!
   TBranch        *b_H_S2XS2Y_scalerCut;   //!
   TBranch        *b_H_S2XS2Y_scalerRate;   //!
   TBranch        *b_H_S2Y_scaler;   //!
   TBranch        *b_H_S2Y_scalerCut;   //!
   TBranch        *b_H_S2Y_scalerRate;   //!
   TBranch        *b_H_SHLO_scaler;   //!
   TBranch        *b_H_SHLO_scalerCut;   //!
   TBranch        *b_H_SHLO_scalerRate;   //!
   TBranch        *b_H_Unser_scaler;   //!
   TBranch        *b_H_Unser_scalerCharge;   //!
   TBranch        *b_H_Unser_scalerChargeCut;   //!
   TBranch        *b_H_Unser_scalerCurrent;   //!
   TBranch        *b_H_Unser_scalerCut;   //!
   TBranch        *b_H_Unser_scalerRate;   //!
   TBranch        *b_H_Unser_Hel_scaler;   //!
   TBranch        *b_H_Unser_Hel_scalerCharge;   //!
   TBranch        *b_H_Unser_Hel_scalerChargeCut;   //!
   TBranch        *b_H_Unser_Hel_scalerCurrent;   //!
   TBranch        *b_H_Unser_Hel_scalerCut;   //!
   TBranch        *b_H_Unser_Hel_scalerRate;   //!
   TBranch        *b_H_cal_1pr_eplane;   //!
   TBranch        *b_H_cal_1pr_eplane_neg;   //!
   TBranch        *b_H_cal_1pr_eplane_pos;   //!
   TBranch        *b_H_cal_1pr_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_cal_1pr_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_cal_1pr_totNumNegAdcHits;   //!
   TBranch        *b_H_cal_1pr_totNumPosAdcHits;   //!
   TBranch        *b_H_cal_1pr_totnumAdcHits;   //!
   TBranch        *b_H_cal_1pr_totnumGoodAdcHits;   //!
   TBranch        *b_H_cal_2ta_eplane;   //!
   TBranch        *b_H_cal_2ta_eplane_neg;   //!
   TBranch        *b_H_cal_2ta_eplane_pos;   //!
   TBranch        *b_H_cal_2ta_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_cal_2ta_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_cal_2ta_totNumNegAdcHits;   //!
   TBranch        *b_H_cal_2ta_totNumPosAdcHits;   //!
   TBranch        *b_H_cal_2ta_totnumAdcHits;   //!
   TBranch        *b_H_cal_2ta_totnumGoodAdcHits;   //!
   TBranch        *b_H_cal_3ta_eplane;   //!
   TBranch        *b_H_cal_3ta_eplane_neg;   //!
   TBranch        *b_H_cal_3ta_eplane_pos;   //!
   TBranch        *b_H_cal_3ta_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_cal_3ta_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_cal_3ta_totNumNegAdcHits;   //!
   TBranch        *b_H_cal_3ta_totNumPosAdcHits;   //!
   TBranch        *b_H_cal_3ta_totnumAdcHits;   //!
   TBranch        *b_H_cal_3ta_totnumGoodAdcHits;   //!
   TBranch        *b_H_cal_4ta_eplane;   //!
   TBranch        *b_H_cal_4ta_eplane_neg;   //!
   TBranch        *b_H_cal_4ta_eplane_pos;   //!
   TBranch        *b_H_cal_4ta_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_cal_4ta_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_cal_4ta_totNumNegAdcHits;   //!
   TBranch        *b_H_cal_4ta_totNumPosAdcHits;   //!
   TBranch        *b_H_cal_4ta_totnumAdcHits;   //!
   TBranch        *b_H_cal_4ta_totnumGoodAdcHits;   //!
   TBranch        *b_H_cal_eprtrack;   //!
   TBranch        *b_H_cal_eprtracknorm;   //!
   TBranch        *b_H_cal_etot;   //!
   TBranch        *b_H_cal_etotnorm;   //!
   TBranch        *b_H_cal_etottracknorm;   //!
   TBranch        *b_H_cal_etrack;   //!
   TBranch        *b_H_cal_etracknorm;   //!
   TBranch        *b_H_cal_nclust;   //!
   TBranch        *b_H_cal_nclusttrack;   //!
   TBranch        *b_H_cal_nhits;   //!
   TBranch        *b_H_cal_ntracks;   //!
   TBranch        *b_H_cal_xclusttrack;   //!
   TBranch        *b_H_cal_xtrack;   //!
   TBranch        *b_H_cal_yclusttrack;   //!
   TBranch        *b_H_cal_ytrack;   //!
   TBranch        *b_H_cer_RefTime;   //!
   TBranch        *b_H_cer_npeSum;   //!
   TBranch        *b_H_cer_totNumAdcHits;   //!
   TBranch        *b_H_cer_totNumGoodAdcHits;   //!
   TBranch        *b_H_cer_totNumTracksFired;   //!
   TBranch        *b_H_cer_totNumTracksMatched;   //!
   TBranch        *b_H_cer_xAtCer;   //!
   TBranch        *b_H_cer_yAtCer;   //!
   TBranch        *b_H_dc_1u1_RefTime;   //!
   TBranch        *b_H_dc_1u1_nhit;   //!
   TBranch        *b_H_dc_1u2_RefTime;   //!
   TBranch        *b_H_dc_1u2_nhit;   //!
   TBranch        *b_H_dc_1v1_RefTime;   //!
   TBranch        *b_H_dc_1v1_nhit;   //!
   TBranch        *b_H_dc_1v2_RefTime;   //!
   TBranch        *b_H_dc_1v2_nhit;   //!
   TBranch        *b_H_dc_1x1_RefTime;   //!
   TBranch        *b_H_dc_1x1_nhit;   //!
   TBranch        *b_H_dc_1x2_RefTime;   //!
   TBranch        *b_H_dc_1x2_nhit;   //!
   TBranch        *b_H_dc_2u1_RefTime;   //!
   TBranch        *b_H_dc_2u1_nhit;   //!
   TBranch        *b_H_dc_2u2_RefTime;   //!
   TBranch        *b_H_dc_2u2_nhit;   //!
   TBranch        *b_H_dc_2v1_RefTime;   //!
   TBranch        *b_H_dc_2v1_nhit;   //!
   TBranch        *b_H_dc_2v2_RefTime;   //!
   TBranch        *b_H_dc_2v2_nhit;   //!
   TBranch        *b_H_dc_2x1_RefTime;   //!
   TBranch        *b_H_dc_2x1_nhit;   //!
   TBranch        *b_H_dc_2x2_RefTime;   //!
   TBranch        *b_H_dc_2x2_nhit;   //!
   TBranch        *b_H_dc_Ch1_maxhits;   //!
   TBranch        *b_H_dc_Ch1_nhit;   //!
   TBranch        *b_H_dc_Ch1_spacepoints;   //!
   TBranch        *b_H_dc_Ch1_trawhit;   //!
   TBranch        *b_H_dc_Ch2_maxhits;   //!
   TBranch        *b_H_dc_Ch2_nhit;   //!
   TBranch        *b_H_dc_Ch2_spacepoints;   //!
   TBranch        *b_H_dc_Ch2_trawhit;   //!
   TBranch        *b_H_dc_InsideDipoleExit;   //!
   TBranch        *b_H_dc_chisq;   //!
   TBranch        *b_H_dc_gtrack_nsp;   //!
   TBranch        *b_H_dc_nhit;   //!
   TBranch        *b_H_dc_nsp;   //!
   TBranch        *b_H_dc_ntrack;   //!
   TBranch        *b_H_dc_sp1_id;   //!
   TBranch        *b_H_dc_sp2_id;   //!
   TBranch        *b_H_dc_stubtest;   //!
   TBranch        *b_H_dc_tnhit;   //!
   TBranch        *b_H_dc_trawhit;   //!
   TBranch        *b_H_dc_x_fp;   //!
   TBranch        *b_H_dc_xp_fp;   //!
   TBranch        *b_H_dc_y_fp;   //!
   TBranch        *b_H_dc_yp_fp;   //!
   TBranch        *b_H_extcor_delta_dp;   //!
   TBranch        *b_H_extcor_delta_p;   //!
   TBranch        *b_H_extcor_delta_xptar;   //!
   TBranch        *b_H_extcor_dp;   //!
   TBranch        *b_H_extcor_ok;   //!
   TBranch        *b_H_extcor_p;   //!
   TBranch        *b_H_extcor_ph;   //!
   TBranch        *b_H_extcor_px;   //!
   TBranch        *b_H_extcor_py;   //!
   TBranch        *b_H_extcor_pz;   //!
   TBranch        *b_H_extcor_th;   //!
   TBranch        *b_H_extcor_x;   //!
   TBranch        *b_H_extcor_xsieve;   //!
   TBranch        *b_H_extcor_y;   //!
   TBranch        *b_H_extcor_ysieve;   //!
   TBranch        *b_H_gtr_beta;   //!
   TBranch        *b_H_gtr_dp;   //!
   TBranch        *b_H_gtr_index;   //!
   TBranch        *b_H_gtr_ok;   //!
   TBranch        *b_H_gtr_p;   //!
   TBranch        *b_H_gtr_ph;   //!
   TBranch        *b_H_gtr_px;   //!
   TBranch        *b_H_gtr_py;   //!
   TBranch        *b_H_gtr_pz;   //!
   TBranch        *b_H_gtr_th;   //!
   TBranch        *b_H_gtr_x;   //!
   TBranch        *b_H_gtr_y;   //!
   TBranch        *b_H_hEL_CLEAN_scaler;   //!
   TBranch        *b_H_hEL_CLEAN_scalerCut;   //!
   TBranch        *b_H_hEL_CLEAN_scalerRate;   //!
   TBranch        *b_H_hEL_HI_scaler;   //!
   TBranch        *b_H_hEL_HI_scalerCut;   //!
   TBranch        *b_H_hEL_HI_scalerRate;   //!
   TBranch        *b_H_hEL_LO_scaler;   //!
   TBranch        *b_H_hEL_LO_scalerCut;   //!
   TBranch        *b_H_hEL_LO_scalerRate;   //!
   TBranch        *b_H_hEL_LO_LO_scaler;   //!
   TBranch        *b_H_hEL_LO_LO_scalerCut;   //!
   TBranch        *b_H_hEL_LO_LO_scalerRate;   //!
   TBranch        *b_H_hEL_REAL_scaler;   //!
   TBranch        *b_H_hEL_REAL_scalerCut;   //!
   TBranch        *b_H_hEL_REAL_scalerRate;   //!
   TBranch        *b_H_hL1ACCP_scaler;   //!
   TBranch        *b_H_hL1ACCP_scalerCut;   //!
   TBranch        *b_H_hL1ACCP_scalerRate;   //!
   TBranch        *b_H_hL1ACCP_Hel_scaler;   //!
   TBranch        *b_H_hL1ACCP_Hel_scalerCut;   //!
   TBranch        *b_H_hL1ACCP_Hel_scalerRate;   //!
   TBranch        *b_H_hPRE100_scaler;   //!
   TBranch        *b_H_hPRE100_scalerCut;   //!
   TBranch        *b_H_hPRE100_scalerRate;   //!
   TBranch        *b_H_hPRE150_scaler;   //!
   TBranch        *b_H_hPRE150_scalerCut;   //!
   TBranch        *b_H_hPRE150_scalerRate;   //!
   TBranch        *b_H_hPRE200_scaler;   //!
   TBranch        *b_H_hPRE200_scalerCut;   //!
   TBranch        *b_H_hPRE200_scalerRate;   //!
   TBranch        *b_H_hPRE40_scaler;   //!
   TBranch        *b_H_hPRE40_scalerCut;   //!
   TBranch        *b_H_hPRE40_scalerRate;   //!
   TBranch        *b_H_hSTOF_scaler;   //!
   TBranch        *b_H_hSTOF_scalerCut;   //!
   TBranch        *b_H_hSTOF_scalerRate;   //!
   TBranch        *b_H_hTREF1_scaler;   //!
   TBranch        *b_H_hTREF1_scalerCut;   //!
   TBranch        *b_H_hTREF1_scalerRate;   //!
   TBranch        *b_H_hTRIG1_scaler;   //!
   TBranch        *b_H_hTRIG1_scalerCut;   //!
   TBranch        *b_H_hTRIG1_scalerRate;   //!
   TBranch        *b_H_hTRIG1_Hel_scaler;   //!
   TBranch        *b_H_hTRIG1_Hel_scalerCut;   //!
   TBranch        *b_H_hTRIG1_Hel_scalerRate;   //!
   TBranch        *b_H_hTRIG2_scaler;   //!
   TBranch        *b_H_hTRIG2_scalerCut;   //!
   TBranch        *b_H_hTRIG2_scalerRate;   //!
   TBranch        *b_H_hTRIG2_Hel_scaler;   //!
   TBranch        *b_H_hTRIG2_Hel_scalerCut;   //!
   TBranch        *b_H_hTRIG2_Hel_scalerRate;   //!
   TBranch        *b_H_hTRIG3_scaler;   //!
   TBranch        *b_H_hTRIG3_scalerCut;   //!
   TBranch        *b_H_hTRIG3_scalerRate;   //!
   TBranch        *b_H_hTRIG3_Hel_scaler;   //!
   TBranch        *b_H_hTRIG3_Hel_scalerCut;   //!
   TBranch        *b_H_hTRIG3_Hel_scalerRate;   //!
   TBranch        *b_H_hTRIG4_scaler;   //!
   TBranch        *b_H_hTRIG4_scalerCut;   //!
   TBranch        *b_H_hTRIG4_scalerRate;   //!
   TBranch        *b_H_hTRIG4_Hel_scaler;   //!
   TBranch        *b_H_hTRIG4_Hel_scalerCut;   //!
   TBranch        *b_H_hTRIG4_Hel_scalerRate;   //!
   TBranch        *b_H_hTRIG5_scaler;   //!
   TBranch        *b_H_hTRIG5_scalerCut;   //!
   TBranch        *b_H_hTRIG5_scalerRate;   //!
   TBranch        *b_H_hTRIG5_Hel_scaler;   //!
   TBranch        *b_H_hTRIG5_Hel_scalerCut;   //!
   TBranch        *b_H_hTRIG5_Hel_scalerRate;   //!
   TBranch        *b_H_hTRIG6_scaler;   //!
   TBranch        *b_H_hTRIG6_scalerCut;   //!
   TBranch        *b_H_hTRIG6_scalerRate;   //!
   TBranch        *b_H_hTRIG6_Hel_scaler;   //!
   TBranch        *b_H_hTRIG6_Hel_scalerCut;   //!
   TBranch        *b_H_hTRIG6_Hel_scalerRate;   //!
   TBranch        *b_H_hod_1x_DiffDisTrack;   //!
   TBranch        *b_H_hod_1x_NegAdcRefDiffTime;   //!
   TBranch        *b_H_hod_1x_NegAdcRefTime;   //!
   TBranch        *b_H_hod_1x_NegTdcRefDiffTime;   //!
   TBranch        *b_H_hod_1x_NegTdcRefTime;   //!
   TBranch        *b_H_hod_1x_NumClus;   //!
   TBranch        *b_H_hod_1x_PosAdcRefDiffTime;   //!
   TBranch        *b_H_hod_1x_PosAdcRefTime;   //!
   TBranch        *b_H_hod_1x_PosTdcRefDiffTime;   //!
   TBranch        *b_H_hod_1x_PosTdcRefTime;   //!
   TBranch        *b_H_hod_1x_ScinXPos;   //!
   TBranch        *b_H_hod_1x_ScinYPos;   //!
   TBranch        *b_H_hod_1x_TrackXPos;   //!
   TBranch        *b_H_hod_1x_TrackYPos;   //!
   TBranch        *b_H_hod_1x_fptime;   //!
   TBranch        *b_H_hod_1x_nhits;   //!
   TBranch        *b_H_hod_1x_totNumAdcHits;   //!
   TBranch        *b_H_hod_1x_totNumGoodAdcHits;   //!
   TBranch        *b_H_hod_1x_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_hod_1x_totNumGoodNegTdcHits;   //!
   TBranch        *b_H_hod_1x_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_hod_1x_totNumGoodPosTdcHits;   //!
   TBranch        *b_H_hod_1x_totNumGoodTdcHits;   //!
   TBranch        *b_H_hod_1x_totNumNegAdcHits;   //!
   TBranch        *b_H_hod_1x_totNumNegTdcHits;   //!
   TBranch        *b_H_hod_1x_totNumPosAdcHits;   //!
   TBranch        *b_H_hod_1x_totNumPosTdcHits;   //!
   TBranch        *b_H_hod_1x_totNumTdcHits;   //!
   TBranch        *b_H_hod_1x1_negScaler;   //!
   TBranch        *b_H_hod_1x1_negScalerCut;   //!
   TBranch        *b_H_hod_1x1_negScalerRate;   //!
   TBranch        *b_H_hod_1x1_posScaler;   //!
   TBranch        *b_H_hod_1x1_posScalerCut;   //!
   TBranch        *b_H_hod_1x1_posScalerRate;   //!
   TBranch        *b_H_hod_1x10_negScaler;   //!
   TBranch        *b_H_hod_1x10_negScalerCut;   //!
   TBranch        *b_H_hod_1x10_negScalerRate;   //!
   TBranch        *b_H_hod_1x10_posScaler;   //!
   TBranch        *b_H_hod_1x10_posScalerCut;   //!
   TBranch        *b_H_hod_1x10_posScalerRate;   //!
   TBranch        *b_H_hod_1x11_negScaler;   //!
   TBranch        *b_H_hod_1x11_negScalerCut;   //!
   TBranch        *b_H_hod_1x11_negScalerRate;   //!
   TBranch        *b_H_hod_1x11_posScaler;   //!
   TBranch        *b_H_hod_1x11_posScalerCut;   //!
   TBranch        *b_H_hod_1x11_posScalerRate;   //!
   TBranch        *b_H_hod_1x12_negScaler;   //!
   TBranch        *b_H_hod_1x12_negScalerCut;   //!
   TBranch        *b_H_hod_1x12_negScalerRate;   //!
   TBranch        *b_H_hod_1x12_posScaler;   //!
   TBranch        *b_H_hod_1x12_posScalerCut;   //!
   TBranch        *b_H_hod_1x12_posScalerRate;   //!
   TBranch        *b_H_hod_1x13_negScaler;   //!
   TBranch        *b_H_hod_1x13_negScalerCut;   //!
   TBranch        *b_H_hod_1x13_negScalerRate;   //!
   TBranch        *b_H_hod_1x13_posScaler;   //!
   TBranch        *b_H_hod_1x13_posScalerCut;   //!
   TBranch        *b_H_hod_1x13_posScalerRate;   //!
   TBranch        *b_H_hod_1x14_negScaler;   //!
   TBranch        *b_H_hod_1x14_negScalerCut;   //!
   TBranch        *b_H_hod_1x14_negScalerRate;   //!
   TBranch        *b_H_hod_1x14_posScaler;   //!
   TBranch        *b_H_hod_1x14_posScalerCut;   //!
   TBranch        *b_H_hod_1x14_posScalerRate;   //!
   TBranch        *b_H_hod_1x15_negScaler;   //!
   TBranch        *b_H_hod_1x15_negScalerCut;   //!
   TBranch        *b_H_hod_1x15_negScalerRate;   //!
   TBranch        *b_H_hod_1x15_posScaler;   //!
   TBranch        *b_H_hod_1x15_posScalerCut;   //!
   TBranch        *b_H_hod_1x15_posScalerRate;   //!
   TBranch        *b_H_hod_1x16_negScaler;   //!
   TBranch        *b_H_hod_1x16_negScalerCut;   //!
   TBranch        *b_H_hod_1x16_negScalerRate;   //!
   TBranch        *b_H_hod_1x16_posScaler;   //!
   TBranch        *b_H_hod_1x16_posScalerCut;   //!
   TBranch        *b_H_hod_1x16_posScalerRate;   //!
   TBranch        *b_H_hod_1x2_negScaler;   //!
   TBranch        *b_H_hod_1x2_negScalerCut;   //!
   TBranch        *b_H_hod_1x2_negScalerRate;   //!
   TBranch        *b_H_hod_1x2_posScaler;   //!
   TBranch        *b_H_hod_1x2_posScalerCut;   //!
   TBranch        *b_H_hod_1x2_posScalerRate;   //!
   TBranch        *b_H_hod_1x3_negScaler;   //!
   TBranch        *b_H_hod_1x3_negScalerCut;   //!
   TBranch        *b_H_hod_1x3_negScalerRate;   //!
   TBranch        *b_H_hod_1x3_posScaler;   //!
   TBranch        *b_H_hod_1x3_posScalerCut;   //!
   TBranch        *b_H_hod_1x3_posScalerRate;   //!
   TBranch        *b_H_hod_1x4_negScaler;   //!
   TBranch        *b_H_hod_1x4_negScalerCut;   //!
   TBranch        *b_H_hod_1x4_negScalerRate;   //!
   TBranch        *b_H_hod_1x4_posScaler;   //!
   TBranch        *b_H_hod_1x4_posScalerCut;   //!
   TBranch        *b_H_hod_1x4_posScalerRate;   //!
   TBranch        *b_H_hod_1x5_negScaler;   //!
   TBranch        *b_H_hod_1x5_negScalerCut;   //!
   TBranch        *b_H_hod_1x5_negScalerRate;   //!
   TBranch        *b_H_hod_1x5_posScaler;   //!
   TBranch        *b_H_hod_1x5_posScalerCut;   //!
   TBranch        *b_H_hod_1x5_posScalerRate;   //!
   TBranch        *b_H_hod_1x6_negScaler;   //!
   TBranch        *b_H_hod_1x6_negScalerCut;   //!
   TBranch        *b_H_hod_1x6_negScalerRate;   //!
   TBranch        *b_H_hod_1x6_posScaler;   //!
   TBranch        *b_H_hod_1x6_posScalerCut;   //!
   TBranch        *b_H_hod_1x6_posScalerRate;   //!
   TBranch        *b_H_hod_1x7_negScaler;   //!
   TBranch        *b_H_hod_1x7_negScalerCut;   //!
   TBranch        *b_H_hod_1x7_negScalerRate;   //!
   TBranch        *b_H_hod_1x7_posScaler;   //!
   TBranch        *b_H_hod_1x7_posScalerCut;   //!
   TBranch        *b_H_hod_1x7_posScalerRate;   //!
   TBranch        *b_H_hod_1x8_negScaler;   //!
   TBranch        *b_H_hod_1x8_negScalerCut;   //!
   TBranch        *b_H_hod_1x8_negScalerRate;   //!
   TBranch        *b_H_hod_1x8_posScaler;   //!
   TBranch        *b_H_hod_1x8_posScalerCut;   //!
   TBranch        *b_H_hod_1x8_posScalerRate;   //!
   TBranch        *b_H_hod_1x9_negScaler;   //!
   TBranch        *b_H_hod_1x9_negScalerCut;   //!
   TBranch        *b_H_hod_1x9_negScalerRate;   //!
   TBranch        *b_H_hod_1x9_posScaler;   //!
   TBranch        *b_H_hod_1x9_posScalerCut;   //!
   TBranch        *b_H_hod_1x9_posScalerRate;   //!
   TBranch        *b_H_hod_1y_DiffDisTrack;   //!
   TBranch        *b_H_hod_1y_NegAdcRefDiffTime;   //!
   TBranch        *b_H_hod_1y_NegAdcRefTime;   //!
   TBranch        *b_H_hod_1y_NegTdcRefDiffTime;   //!
   TBranch        *b_H_hod_1y_NegTdcRefTime;   //!
   TBranch        *b_H_hod_1y_NumClus;   //!
   TBranch        *b_H_hod_1y_PosAdcRefDiffTime;   //!
   TBranch        *b_H_hod_1y_PosAdcRefTime;   //!
   TBranch        *b_H_hod_1y_PosTdcRefDiffTime;   //!
   TBranch        *b_H_hod_1y_PosTdcRefTime;   //!
   TBranch        *b_H_hod_1y_ScinXPos;   //!
   TBranch        *b_H_hod_1y_ScinYPos;   //!
   TBranch        *b_H_hod_1y_TrackXPos;   //!
   TBranch        *b_H_hod_1y_TrackYPos;   //!
   TBranch        *b_H_hod_1y_fptime;   //!
   TBranch        *b_H_hod_1y_nhits;   //!
   TBranch        *b_H_hod_1y_totNumAdcHits;   //!
   TBranch        *b_H_hod_1y_totNumGoodAdcHits;   //!
   TBranch        *b_H_hod_1y_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_hod_1y_totNumGoodNegTdcHits;   //!
   TBranch        *b_H_hod_1y_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_hod_1y_totNumGoodPosTdcHits;   //!
   TBranch        *b_H_hod_1y_totNumGoodTdcHits;   //!
   TBranch        *b_H_hod_1y_totNumNegAdcHits;   //!
   TBranch        *b_H_hod_1y_totNumNegTdcHits;   //!
   TBranch        *b_H_hod_1y_totNumPosAdcHits;   //!
   TBranch        *b_H_hod_1y_totNumPosTdcHits;   //!
   TBranch        *b_H_hod_1y_totNumTdcHits;   //!
   TBranch        *b_H_hod_1y1_negScaler;   //!
   TBranch        *b_H_hod_1y1_negScalerCut;   //!
   TBranch        *b_H_hod_1y1_negScalerRate;   //!
   TBranch        *b_H_hod_1y1_posScaler;   //!
   TBranch        *b_H_hod_1y1_posScalerCut;   //!
   TBranch        *b_H_hod_1y1_posScalerRate;   //!
   TBranch        *b_H_hod_1y10_negScaler;   //!
   TBranch        *b_H_hod_1y10_negScalerCut;   //!
   TBranch        *b_H_hod_1y10_negScalerRate;   //!
   TBranch        *b_H_hod_1y10_posScaler;   //!
   TBranch        *b_H_hod_1y10_posScalerCut;   //!
   TBranch        *b_H_hod_1y10_posScalerRate;   //!
   TBranch        *b_H_hod_1y2_negScaler;   //!
   TBranch        *b_H_hod_1y2_negScalerCut;   //!
   TBranch        *b_H_hod_1y2_negScalerRate;   //!
   TBranch        *b_H_hod_1y2_posScaler;   //!
   TBranch        *b_H_hod_1y2_posScalerCut;   //!
   TBranch        *b_H_hod_1y2_posScalerRate;   //!
   TBranch        *b_H_hod_1y3_negScaler;   //!
   TBranch        *b_H_hod_1y3_negScalerCut;   //!
   TBranch        *b_H_hod_1y3_negScalerRate;   //!
   TBranch        *b_H_hod_1y3_posScaler;   //!
   TBranch        *b_H_hod_1y3_posScalerCut;   //!
   TBranch        *b_H_hod_1y3_posScalerRate;   //!
   TBranch        *b_H_hod_1y4_negScaler;   //!
   TBranch        *b_H_hod_1y4_negScalerCut;   //!
   TBranch        *b_H_hod_1y4_negScalerRate;   //!
   TBranch        *b_H_hod_1y4_posScaler;   //!
   TBranch        *b_H_hod_1y4_posScalerCut;   //!
   TBranch        *b_H_hod_1y4_posScalerRate;   //!
   TBranch        *b_H_hod_1y5_negScaler;   //!
   TBranch        *b_H_hod_1y5_negScalerCut;   //!
   TBranch        *b_H_hod_1y5_negScalerRate;   //!
   TBranch        *b_H_hod_1y5_posScaler;   //!
   TBranch        *b_H_hod_1y5_posScalerCut;   //!
   TBranch        *b_H_hod_1y5_posScalerRate;   //!
   TBranch        *b_H_hod_1y6_negScaler;   //!
   TBranch        *b_H_hod_1y6_negScalerCut;   //!
   TBranch        *b_H_hod_1y6_negScalerRate;   //!
   TBranch        *b_H_hod_1y6_posScaler;   //!
   TBranch        *b_H_hod_1y6_posScalerCut;   //!
   TBranch        *b_H_hod_1y6_posScalerRate;   //!
   TBranch        *b_H_hod_1y7_negScaler;   //!
   TBranch        *b_H_hod_1y7_negScalerCut;   //!
   TBranch        *b_H_hod_1y7_negScalerRate;   //!
   TBranch        *b_H_hod_1y7_posScaler;   //!
   TBranch        *b_H_hod_1y7_posScalerCut;   //!
   TBranch        *b_H_hod_1y7_posScalerRate;   //!
   TBranch        *b_H_hod_1y8_negScaler;   //!
   TBranch        *b_H_hod_1y8_negScalerCut;   //!
   TBranch        *b_H_hod_1y8_negScalerRate;   //!
   TBranch        *b_H_hod_1y8_posScaler;   //!
   TBranch        *b_H_hod_1y8_posScalerCut;   //!
   TBranch        *b_H_hod_1y8_posScalerRate;   //!
   TBranch        *b_H_hod_1y9_negScaler;   //!
   TBranch        *b_H_hod_1y9_negScalerCut;   //!
   TBranch        *b_H_hod_1y9_negScalerRate;   //!
   TBranch        *b_H_hod_1y9_posScaler;   //!
   TBranch        *b_H_hod_1y9_posScalerCut;   //!
   TBranch        *b_H_hod_1y9_posScalerRate;   //!
   TBranch        *b_H_hod_2x_DiffDisTrack;   //!
   TBranch        *b_H_hod_2x_NegAdcRefDiffTime;   //!
   TBranch        *b_H_hod_2x_NegAdcRefTime;   //!
   TBranch        *b_H_hod_2x_NegTdcRefDiffTime;   //!
   TBranch        *b_H_hod_2x_NegTdcRefTime;   //!
   TBranch        *b_H_hod_2x_NumClus;   //!
   TBranch        *b_H_hod_2x_PosAdcRefDiffTime;   //!
   TBranch        *b_H_hod_2x_PosAdcRefTime;   //!
   TBranch        *b_H_hod_2x_PosTdcRefDiffTime;   //!
   TBranch        *b_H_hod_2x_PosTdcRefTime;   //!
   TBranch        *b_H_hod_2x_ScinXPos;   //!
   TBranch        *b_H_hod_2x_ScinYPos;   //!
   TBranch        *b_H_hod_2x_TrackXPos;   //!
   TBranch        *b_H_hod_2x_TrackYPos;   //!
   TBranch        *b_H_hod_2x_fptime;   //!
   TBranch        *b_H_hod_2x_nhits;   //!
   TBranch        *b_H_hod_2x_totNumAdcHits;   //!
   TBranch        *b_H_hod_2x_totNumGoodAdcHits;   //!
   TBranch        *b_H_hod_2x_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_hod_2x_totNumGoodNegTdcHits;   //!
   TBranch        *b_H_hod_2x_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_hod_2x_totNumGoodPosTdcHits;   //!
   TBranch        *b_H_hod_2x_totNumGoodTdcHits;   //!
   TBranch        *b_H_hod_2x_totNumNegAdcHits;   //!
   TBranch        *b_H_hod_2x_totNumNegTdcHits;   //!
   TBranch        *b_H_hod_2x_totNumPosAdcHits;   //!
   TBranch        *b_H_hod_2x_totNumPosTdcHits;   //!
   TBranch        *b_H_hod_2x_totNumTdcHits;   //!
   TBranch        *b_H_hod_2x1_negScaler;   //!
   TBranch        *b_H_hod_2x1_negScalerCut;   //!
   TBranch        *b_H_hod_2x1_negScalerRate;   //!
   TBranch        *b_H_hod_2x1_posScaler;   //!
   TBranch        *b_H_hod_2x1_posScalerCut;   //!
   TBranch        *b_H_hod_2x1_posScalerRate;   //!
   TBranch        *b_H_hod_2x10_negScaler;   //!
   TBranch        *b_H_hod_2x10_negScalerCut;   //!
   TBranch        *b_H_hod_2x10_negScalerRate;   //!
   TBranch        *b_H_hod_2x10_posScaler;   //!
   TBranch        *b_H_hod_2x10_posScalerCut;   //!
   TBranch        *b_H_hod_2x10_posScalerRate;   //!
   TBranch        *b_H_hod_2x11_negScaler;   //!
   TBranch        *b_H_hod_2x11_negScalerCut;   //!
   TBranch        *b_H_hod_2x11_negScalerRate;   //!
   TBranch        *b_H_hod_2x11_posScaler;   //!
   TBranch        *b_H_hod_2x11_posScalerCut;   //!
   TBranch        *b_H_hod_2x11_posScalerRate;   //!
   TBranch        *b_H_hod_2x12_negScaler;   //!
   TBranch        *b_H_hod_2x12_negScalerCut;   //!
   TBranch        *b_H_hod_2x12_negScalerRate;   //!
   TBranch        *b_H_hod_2x12_posScaler;   //!
   TBranch        *b_H_hod_2x12_posScalerCut;   //!
   TBranch        *b_H_hod_2x12_posScalerRate;   //!
   TBranch        *b_H_hod_2x13_negScaler;   //!
   TBranch        *b_H_hod_2x13_negScalerCut;   //!
   TBranch        *b_H_hod_2x13_negScalerRate;   //!
   TBranch        *b_H_hod_2x13_posScaler;   //!
   TBranch        *b_H_hod_2x13_posScalerCut;   //!
   TBranch        *b_H_hod_2x13_posScalerRate;   //!
   TBranch        *b_H_hod_2x14_negScaler;   //!
   TBranch        *b_H_hod_2x14_negScalerCut;   //!
   TBranch        *b_H_hod_2x14_negScalerRate;   //!
   TBranch        *b_H_hod_2x14_posScaler;   //!
   TBranch        *b_H_hod_2x14_posScalerCut;   //!
   TBranch        *b_H_hod_2x14_posScalerRate;   //!
   TBranch        *b_H_hod_2x15_negScaler;   //!
   TBranch        *b_H_hod_2x15_negScalerCut;   //!
   TBranch        *b_H_hod_2x15_negScalerRate;   //!
   TBranch        *b_H_hod_2x15_posScaler;   //!
   TBranch        *b_H_hod_2x15_posScalerCut;   //!
   TBranch        *b_H_hod_2x15_posScalerRate;   //!
   TBranch        *b_H_hod_2x16_negScaler;   //!
   TBranch        *b_H_hod_2x16_negScalerCut;   //!
   TBranch        *b_H_hod_2x16_negScalerRate;   //!
   TBranch        *b_H_hod_2x16_posScaler;   //!
   TBranch        *b_H_hod_2x16_posScalerCut;   //!
   TBranch        *b_H_hod_2x16_posScalerRate;   //!
   TBranch        *b_H_hod_2x2_negScaler;   //!
   TBranch        *b_H_hod_2x2_negScalerCut;   //!
   TBranch        *b_H_hod_2x2_negScalerRate;   //!
   TBranch        *b_H_hod_2x2_posScaler;   //!
   TBranch        *b_H_hod_2x2_posScalerCut;   //!
   TBranch        *b_H_hod_2x2_posScalerRate;   //!
   TBranch        *b_H_hod_2x3_negScaler;   //!
   TBranch        *b_H_hod_2x3_negScalerCut;   //!
   TBranch        *b_H_hod_2x3_negScalerRate;   //!
   TBranch        *b_H_hod_2x3_posScaler;   //!
   TBranch        *b_H_hod_2x3_posScalerCut;   //!
   TBranch        *b_H_hod_2x3_posScalerRate;   //!
   TBranch        *b_H_hod_2x4_negScaler;   //!
   TBranch        *b_H_hod_2x4_negScalerCut;   //!
   TBranch        *b_H_hod_2x4_negScalerRate;   //!
   TBranch        *b_H_hod_2x4_posScaler;   //!
   TBranch        *b_H_hod_2x4_posScalerCut;   //!
   TBranch        *b_H_hod_2x4_posScalerRate;   //!
   TBranch        *b_H_hod_2x5_negScaler;   //!
   TBranch        *b_H_hod_2x5_negScalerCut;   //!
   TBranch        *b_H_hod_2x5_negScalerRate;   //!
   TBranch        *b_H_hod_2x5_posScaler;   //!
   TBranch        *b_H_hod_2x5_posScalerCut;   //!
   TBranch        *b_H_hod_2x5_posScalerRate;   //!
   TBranch        *b_H_hod_2x6_negScaler;   //!
   TBranch        *b_H_hod_2x6_negScalerCut;   //!
   TBranch        *b_H_hod_2x6_negScalerRate;   //!
   TBranch        *b_H_hod_2x6_posScaler;   //!
   TBranch        *b_H_hod_2x6_posScalerCut;   //!
   TBranch        *b_H_hod_2x6_posScalerRate;   //!
   TBranch        *b_H_hod_2x7_negScaler;   //!
   TBranch        *b_H_hod_2x7_negScalerCut;   //!
   TBranch        *b_H_hod_2x7_negScalerRate;   //!
   TBranch        *b_H_hod_2x7_posScaler;   //!
   TBranch        *b_H_hod_2x7_posScalerCut;   //!
   TBranch        *b_H_hod_2x7_posScalerRate;   //!
   TBranch        *b_H_hod_2x8_negScaler;   //!
   TBranch        *b_H_hod_2x8_negScalerCut;   //!
   TBranch        *b_H_hod_2x8_negScalerRate;   //!
   TBranch        *b_H_hod_2x8_posScaler;   //!
   TBranch        *b_H_hod_2x8_posScalerCut;   //!
   TBranch        *b_H_hod_2x8_posScalerRate;   //!
   TBranch        *b_H_hod_2x9_negScaler;   //!
   TBranch        *b_H_hod_2x9_negScalerCut;   //!
   TBranch        *b_H_hod_2x9_negScalerRate;   //!
   TBranch        *b_H_hod_2x9_posScaler;   //!
   TBranch        *b_H_hod_2x9_posScalerCut;   //!
   TBranch        *b_H_hod_2x9_posScalerRate;   //!
   TBranch        *b_H_hod_2y_DiffDisTrack;   //!
   TBranch        *b_H_hod_2y_NegAdcRefDiffTime;   //!
   TBranch        *b_H_hod_2y_NegAdcRefTime;   //!
   TBranch        *b_H_hod_2y_NegTdcRefDiffTime;   //!
   TBranch        *b_H_hod_2y_NegTdcRefTime;   //!
   TBranch        *b_H_hod_2y_NumClus;   //!
   TBranch        *b_H_hod_2y_PosAdcRefDiffTime;   //!
   TBranch        *b_H_hod_2y_PosAdcRefTime;   //!
   TBranch        *b_H_hod_2y_PosTdcRefDiffTime;   //!
   TBranch        *b_H_hod_2y_PosTdcRefTime;   //!
   TBranch        *b_H_hod_2y_ScinXPos;   //!
   TBranch        *b_H_hod_2y_ScinYPos;   //!
   TBranch        *b_H_hod_2y_TrackXPos;   //!
   TBranch        *b_H_hod_2y_TrackYPos;   //!
   TBranch        *b_H_hod_2y_fptime;   //!
   TBranch        *b_H_hod_2y_nhits;   //!
   TBranch        *b_H_hod_2y_totNumAdcHits;   //!
   TBranch        *b_H_hod_2y_totNumGoodAdcHits;   //!
   TBranch        *b_H_hod_2y_totNumGoodNegAdcHits;   //!
   TBranch        *b_H_hod_2y_totNumGoodNegTdcHits;   //!
   TBranch        *b_H_hod_2y_totNumGoodPosAdcHits;   //!
   TBranch        *b_H_hod_2y_totNumGoodPosTdcHits;   //!
   TBranch        *b_H_hod_2y_totNumGoodTdcHits;   //!
   TBranch        *b_H_hod_2y_totNumNegAdcHits;   //!
   TBranch        *b_H_hod_2y_totNumNegTdcHits;   //!
   TBranch        *b_H_hod_2y_totNumPosAdcHits;   //!
   TBranch        *b_H_hod_2y_totNumPosTdcHits;   //!
   TBranch        *b_H_hod_2y_totNumTdcHits;   //!
   TBranch        *b_H_hod_2y1_negScaler;   //!
   TBranch        *b_H_hod_2y1_negScalerCut;   //!
   TBranch        *b_H_hod_2y1_negScalerRate;   //!
   TBranch        *b_H_hod_2y1_posScaler;   //!
   TBranch        *b_H_hod_2y1_posScalerCut;   //!
   TBranch        *b_H_hod_2y1_posScalerRate;   //!
   TBranch        *b_H_hod_2y10_negScaler;   //!
   TBranch        *b_H_hod_2y10_negScalerCut;   //!
   TBranch        *b_H_hod_2y10_negScalerRate;   //!
   TBranch        *b_H_hod_2y10_posScaler;   //!
   TBranch        *b_H_hod_2y10_posScalerCut;   //!
   TBranch        *b_H_hod_2y10_posScalerRate;   //!
   TBranch        *b_H_hod_2y2_negScaler;   //!
   TBranch        *b_H_hod_2y2_negScalerCut;   //!
   TBranch        *b_H_hod_2y2_negScalerRate;   //!
   TBranch        *b_H_hod_2y2_posScaler;   //!
   TBranch        *b_H_hod_2y2_posScalerCut;   //!
   TBranch        *b_H_hod_2y2_posScalerRate;   //!
   TBranch        *b_H_hod_2y3_negScaler;   //!
   TBranch        *b_H_hod_2y3_negScalerCut;   //!
   TBranch        *b_H_hod_2y3_negScalerRate;   //!
   TBranch        *b_H_hod_2y3_posScaler;   //!
   TBranch        *b_H_hod_2y3_posScalerCut;   //!
   TBranch        *b_H_hod_2y3_posScalerRate;   //!
   TBranch        *b_H_hod_2y4_negScaler;   //!
   TBranch        *b_H_hod_2y4_negScalerCut;   //!
   TBranch        *b_H_hod_2y4_negScalerRate;   //!
   TBranch        *b_H_hod_2y4_posScaler;   //!
   TBranch        *b_H_hod_2y4_posScalerCut;   //!
   TBranch        *b_H_hod_2y4_posScalerRate;   //!
   TBranch        *b_H_hod_2y5_negScaler;   //!
   TBranch        *b_H_hod_2y5_negScalerCut;   //!
   TBranch        *b_H_hod_2y5_negScalerRate;   //!
   TBranch        *b_H_hod_2y5_posScaler;   //!
   TBranch        *b_H_hod_2y5_posScalerCut;   //!
   TBranch        *b_H_hod_2y5_posScalerRate;   //!
   TBranch        *b_H_hod_2y6_negScaler;   //!
   TBranch        *b_H_hod_2y6_negScalerCut;   //!
   TBranch        *b_H_hod_2y6_negScalerRate;   //!
   TBranch        *b_H_hod_2y6_posScaler;   //!
   TBranch        *b_H_hod_2y6_posScalerCut;   //!
   TBranch        *b_H_hod_2y6_posScalerRate;   //!
   TBranch        *b_H_hod_2y7_negScaler;   //!
   TBranch        *b_H_hod_2y7_negScalerCut;   //!
   TBranch        *b_H_hod_2y7_negScalerRate;   //!
   TBranch        *b_H_hod_2y7_posScaler;   //!
   TBranch        *b_H_hod_2y7_posScalerCut;   //!
   TBranch        *b_H_hod_2y7_posScalerRate;   //!
   TBranch        *b_H_hod_2y8_negScaler;   //!
   TBranch        *b_H_hod_2y8_negScalerCut;   //!
   TBranch        *b_H_hod_2y8_negScalerRate;   //!
   TBranch        *b_H_hod_2y8_posScaler;   //!
   TBranch        *b_H_hod_2y8_posScalerCut;   //!
   TBranch        *b_H_hod_2y8_posScalerRate;   //!
   TBranch        *b_H_hod_2y9_negScaler;   //!
   TBranch        *b_H_hod_2y9_negScalerCut;   //!
   TBranch        *b_H_hod_2y9_negScalerRate;   //!
   TBranch        *b_H_hod_2y9_posScaler;   //!
   TBranch        *b_H_hod_2y9_posScalerCut;   //!
   TBranch        *b_H_hod_2y9_posScalerRate;   //!
   TBranch        *b_H_hod_TimeHist_FpTime_Hits;   //!
   TBranch        *b_H_hod_TimeHist_FpTime_NumPeaks;   //!
   TBranch        *b_H_hod_TimeHist_FpTime_Peak;   //!
   TBranch        *b_H_hod_TimeHist_FpTime_Sigma;   //!
   TBranch        *b_H_hod_TimeHist_StartTime_Hits;   //!
   TBranch        *b_H_hod_TimeHist_StartTime_NumPeaks;   //!
   TBranch        *b_H_hod_TimeHist_StartTime_Peak;   //!
   TBranch        *b_H_hod_TimeHist_StartTime_Sigma;   //!
   TBranch        *b_H_hod_adctdc_offset;   //!
   TBranch        *b_H_hod_beta;   //!
   TBranch        *b_H_hod_betachisqnotrack;   //!
   TBranch        *b_H_hod_betanotrack;   //!
   TBranch        *b_H_hod_fpHitsTime;   //!
   TBranch        *b_H_hod_goodscinhit;   //!
   TBranch        *b_H_hod_goodstarttime;   //!
   TBranch        *b_H_hod_starttime;   //!
   TBranch        *b_H_kin_Q2;   //!
   TBranch        *b_H_kin_W;   //!
   TBranch        *b_H_kin_W2;   //!
   TBranch        *b_H_kin_epsilon;   //!
   TBranch        *b_H_kin_nu;   //!
   TBranch        *b_H_kin_omega;   //!
   TBranch        *b_H_kin_ph_q;   //!
   TBranch        *b_H_kin_q3m;   //!
   TBranch        *b_H_kin_q_x;   //!
   TBranch        *b_H_kin_q_y;   //!
   TBranch        *b_H_kin_q_z;   //!
   TBranch        *b_H_kin_scat_ang_deg;   //!
   TBranch        *b_H_kin_scat_ang_rad;   //!
   TBranch        *b_H_kin_th_q;   //!
   TBranch        *b_H_kin_x_bj;   //!
   TBranch        *b_H_pEL_CLEAN_scaler;   //!
   TBranch        *b_H_pEL_CLEAN_scalerCut;   //!
   TBranch        *b_H_pEL_CLEAN_scalerRate;   //!
   TBranch        *b_H_pEL_HI_scaler;   //!
   TBranch        *b_H_pEL_HI_scalerCut;   //!
   TBranch        *b_H_pEL_HI_scalerRate;   //!
   TBranch        *b_H_pEL_LO_scaler;   //!
   TBranch        *b_H_pEL_LO_scalerCut;   //!
   TBranch        *b_H_pEL_LO_scalerRate;   //!
   TBranch        *b_H_pEL_LO_LO_scaler;   //!
   TBranch        *b_H_pEL_LO_LO_scalerCut;   //!
   TBranch        *b_H_pEL_LO_LO_scalerRate;   //!
   TBranch        *b_H_pEL_REAL_scaler;   //!
   TBranch        *b_H_pEL_REAL_scalerCut;   //!
   TBranch        *b_H_pEL_REAL_scalerRate;   //!
   TBranch        *b_H_pPRE100_scaler;   //!
   TBranch        *b_H_pPRE100_scalerCut;   //!
   TBranch        *b_H_pPRE100_scalerRate;   //!
   TBranch        *b_H_pPRE150_scaler;   //!
   TBranch        *b_H_pPRE150_scalerCut;   //!
   TBranch        *b_H_pPRE150_scalerRate;   //!
   TBranch        *b_H_pPRE200_scaler;   //!
   TBranch        *b_H_pPRE200_scalerCut;   //!
   TBranch        *b_H_pPRE200_scalerRate;   //!
   TBranch        *b_H_pPRE40_scaler;   //!
   TBranch        *b_H_pPRE40_scalerCut;   //!
   TBranch        *b_H_pPRE40_scalerRate;   //!
   TBranch        *b_H_pSTOF_scaler;   //!
   TBranch        *b_H_pSTOF_scalerCut;   //!
   TBranch        *b_H_pSTOF_scalerRate;   //!
   TBranch        *b_H_pTRIG1_scaler;   //!
   TBranch        *b_H_pTRIG1_scalerCut;   //!
   TBranch        *b_H_pTRIG1_scalerRate;   //!
   TBranch        *b_H_pTRIG1_CP_scaler;   //!
   TBranch        *b_H_pTRIG1_CP_scalerCut;   //!
   TBranch        *b_H_pTRIG1_CP_scalerRate;   //!
   TBranch        *b_H_pTRIG1_Hel_scaler;   //!
   TBranch        *b_H_pTRIG1_Hel_scalerCut;   //!
   TBranch        *b_H_pTRIG1_Hel_scalerRate;   //!
   TBranch        *b_H_pTRIG2_scaler;   //!
   TBranch        *b_H_pTRIG2_scalerCut;   //!
   TBranch        *b_H_pTRIG2_scalerRate;   //!
   TBranch        *b_H_pTRIG2_Hel_scaler;   //!
   TBranch        *b_H_pTRIG2_Hel_scalerCut;   //!
   TBranch        *b_H_pTRIG2_Hel_scalerRate;   //!
   TBranch        *b_H_pTRIG3_scaler;   //!
   TBranch        *b_H_pTRIG3_scalerCut;   //!
   TBranch        *b_H_pTRIG3_scalerRate;   //!
   TBranch        *b_H_pTRIG3_Hel_scaler;   //!
   TBranch        *b_H_pTRIG3_Hel_scalerCut;   //!
   TBranch        *b_H_pTRIG3_Hel_scalerRate;   //!
   TBranch        *b_H_pTRIG4_scaler;   //!
   TBranch        *b_H_pTRIG4_scalerCut;   //!
   TBranch        *b_H_pTRIG4_scalerRate;   //!
   TBranch        *b_H_pTRIG4_Hel_scaler;   //!
   TBranch        *b_H_pTRIG4_Hel_scalerCut;   //!
   TBranch        *b_H_pTRIG4_Hel_scalerRate;   //!
   TBranch        *b_H_pTRIG5_scaler;   //!
   TBranch        *b_H_pTRIG5_scalerCut;   //!
   TBranch        *b_H_pTRIG5_scalerRate;   //!
   TBranch        *b_H_pTRIG5_Hel_scaler;   //!
   TBranch        *b_H_pTRIG5_Hel_scalerCut;   //!
   TBranch        *b_H_pTRIG5_Hel_scalerRate;   //!
   TBranch        *b_H_pTRIG6_scaler;   //!
   TBranch        *b_H_pTRIG6_scalerCut;   //!
   TBranch        *b_H_pTRIG6_scalerRate;   //!
   TBranch        *b_H_pTRIG6_Hel_scaler;   //!
   TBranch        *b_H_pTRIG6_Hel_scalerCut;   //!
   TBranch        *b_H_pTRIG6_Hel_scalerRate;   //!
   TBranch        *b_H_present;   //!
   TBranch        *b_H_rb_dir_x;   //!
   TBranch        *b_H_rb_dir_y;   //!
   TBranch        *b_H_rb_dir_z;   //!
   TBranch        *b_H_rb_e;   //!
   TBranch        *b_H_rb_ok;   //!
   TBranch        *b_H_rb_p;   //!
   TBranch        *b_H_rb_ph;   //!
   TBranch        *b_H_rb_pol;   //!
   TBranch        *b_H_rb_px;   //!
   TBranch        *b_H_rb_py;   //!
   TBranch        *b_H_rb_pz;   //!
   TBranch        *b_H_rb_raster_ebeam_epics;   //!
   TBranch        *b_H_rb_raster_fr_xa;   //!
   TBranch        *b_H_rb_raster_fr_xb;   //!
   TBranch        *b_H_rb_raster_fr_xbpmA;   //!
   TBranch        *b_H_rb_raster_fr_xbpmB;   //!
   TBranch        *b_H_rb_raster_fr_xbpmC;   //!
   TBranch        *b_H_rb_raster_fr_xbpm_tar;   //!
   TBranch        *b_H_rb_raster_fr_ya;   //!
   TBranch        *b_H_rb_raster_fr_yb;   //!
   TBranch        *b_H_rb_raster_fr_ybpmA;   //!
   TBranch        *b_H_rb_raster_fr_ybpmB;   //!
   TBranch        *b_H_rb_raster_fr_ybpmC;   //!
   TBranch        *b_H_rb_raster_fr_ybpm_tar;   //!
   TBranch        *b_H_rb_raster_frxaRawAdc;   //!
   TBranch        *b_H_rb_raster_frxa_adc;   //!
   TBranch        *b_H_rb_raster_frxbRawAdc;   //!
   TBranch        *b_H_rb_raster_frxb_adc;   //!
   TBranch        *b_H_rb_raster_fryaRawAdc;   //!
   TBranch        *b_H_rb_raster_frya_adc;   //!
   TBranch        *b_H_rb_raster_frybRawAdc;   //!
   TBranch        *b_H_rb_raster_fryb_adc;   //!
   TBranch        *b_H_rb_th;   //!
   TBranch        *b_H_rb_x;   //!
   TBranch        *b_H_rb_xpos;   //!
   TBranch        *b_H_rb_y;   //!
   TBranch        *b_H_rb_ypos;   //!
   TBranch        *b_H_rb_z;   //!
   TBranch        *b_H_rb_zpos;   //!
   TBranch        *b_H_react_ok;   //!
   TBranch        *b_H_react_x;   //!
   TBranch        *b_H_react_y;   //!
   TBranch        *b_H_react_z;   //!
   TBranch        *b_H_status;   //!
   TBranch        *b_H_tr_PruneSelect;   //!
   TBranch        *b_H_tr_n;   //!
   TBranch        *b_NPS_cal_etot;   //!
   TBranch        *b_NPS_cal_fly_earray;   //!
   TBranch        *b_NPS_cal_fly_nclust;   //!
   TBranch        *b_NPS_cal_fly_ntracks;   //!
   TBranch        *b_NPS_cal_fly_totNumAdcHits;   //!
   TBranch        *b_NPS_cal_fly_totNumGoodAdcHits;   //!
   TBranch        *b_NPS_cal_nclust;   //!
   TBranch        *b_NPS_cal_nhits;   //!
   TBranch        *b_NPS_cal_vtpErrorFlag;   //!
   TBranch        *b_NPS_kin_secondary_Erecoil;   //!
   TBranch        *b_NPS_kin_secondary_MandelS;   //!
   TBranch        *b_NPS_kin_secondary_MandelT;   //!
   TBranch        *b_NPS_kin_secondary_MandelU;   //!
   TBranch        *b_NPS_kin_secondary_Mrecoil;   //!
   TBranch        *b_NPS_kin_secondary_Prec_x;   //!
   TBranch        *b_NPS_kin_secondary_Prec_y;   //!
   TBranch        *b_NPS_kin_secondary_Prec_z;   //!
   TBranch        *b_NPS_kin_secondary_emiss;   //!
   TBranch        *b_NPS_kin_secondary_emiss_nuc;   //!
   TBranch        *b_NPS_kin_secondary_ph_bq;   //!
   TBranch        *b_NPS_kin_secondary_ph_xq;   //!
   TBranch        *b_NPS_kin_secondary_phb_cm;   //!
   TBranch        *b_NPS_kin_secondary_phx_cm;   //!
   TBranch        *b_NPS_kin_secondary_pmiss;   //!
   TBranch        *b_NPS_kin_secondary_pmiss_x;   //!
   TBranch        *b_NPS_kin_secondary_pmiss_y;   //!
   TBranch        *b_NPS_kin_secondary_pmiss_z;   //!
   TBranch        *b_NPS_kin_secondary_px_cm;   //!
   TBranch        *b_NPS_kin_secondary_t_tot_cm;   //!
   TBranch        *b_NPS_kin_secondary_tb;   //!
   TBranch        *b_NPS_kin_secondary_tb_cm;   //!
   TBranch        *b_NPS_kin_secondary_th_bq;   //!
   TBranch        *b_NPS_kin_secondary_th_xq;   //!
   TBranch        *b_NPS_kin_secondary_thb_cm;   //!
   TBranch        *b_NPS_kin_secondary_thx_cm;   //!
   TBranch        *b_NPS_kin_secondary_tx;   //!
   TBranch        *b_NPS_kin_secondary_tx_cm;   //!
   TBranch        *b_NPS_kin_secondary_xangle;   //!
   TBranch        *b_T_helicity_cycle;   //!
   TBranch        *b_T_helicity_hel;   //!
   TBranch        *b_T_helicity_helicity;   //!
   TBranch        *b_T_helicity_helpred;   //!
   TBranch        *b_T_helicity_helrep;   //!
   TBranch        *b_T_helicity_mps;   //!
   TBranch        *b_T_helicity_nqrt;   //!
   TBranch        *b_T_helicity_pcheck;   //!
   TBranch        *b_T_helicity_qrt;   //!
   TBranch        *b_T_hms_TdcRefTime;   //!
   TBranch        *b_T_hms_h1T_tdcMultiplicity;   //!
   TBranch        *b_T_hms_h1T_tdcTime;   //!
   TBranch        *b_T_hms_h1T_tdcTimeRaw;   //!
   TBranch        *b_T_hms_h1X_tdcMultiplicity;   //!
   TBranch        *b_T_hms_h1X_tdcTime;   //!
   TBranch        *b_T_hms_h1X_tdcTimeRaw;   //!
   TBranch        *b_T_hms_h1Y_tdcMultiplicity;   //!
   TBranch        *b_T_hms_h1Y_tdcTime;   //!
   TBranch        *b_T_hms_h1Y_tdcTimeRaw;   //!
   TBranch        *b_T_hms_h2T_tdcMultiplicity;   //!
   TBranch        *b_T_hms_h2T_tdcTime;   //!
   TBranch        *b_T_hms_h2T_tdcTimeRaw;   //!
   TBranch        *b_T_hms_h2X_tdcMultiplicity;   //!
   TBranch        *b_T_hms_h2X_tdcTime;   //!
   TBranch        *b_T_hms_h2X_tdcTimeRaw;   //!
   TBranch        *b_T_hms_h2Y_tdcMultiplicity;   //!
   TBranch        *b_T_hms_h2Y_tdcTime;   //!
   TBranch        *b_T_hms_h2Y_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hAER_adcMultiplicity;   //!
   TBranch        *b_T_hms_hAER_adcPed;   //!
   TBranch        *b_T_hms_hAER_adcPedRaw;   //!
   TBranch        *b_T_hms_hAER_adcPulseAmp;   //!
   TBranch        *b_T_hms_hAER_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_hAER_adcPulseInt;   //!
   TBranch        *b_T_hms_hAER_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_hAER_adcPulseTime;   //!
   TBranch        *b_T_hms_hAER_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_hAER_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_hAER_adcSampPed;   //!
   TBranch        *b_T_hms_hAER_adcSampPedRaw;   //!
   TBranch        *b_T_hms_hAER_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_hAER_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_hAER_adcSampPulseInt;   //!
   TBranch        *b_T_hms_hAER_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_hAER_adcSampPulseTime;   //!
   TBranch        *b_T_hms_hAER_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_hASUM_adcMultiplicity;   //!
   TBranch        *b_T_hms_hASUM_adcPed;   //!
   TBranch        *b_T_hms_hASUM_adcPedRaw;   //!
   TBranch        *b_T_hms_hASUM_adcPulseAmp;   //!
   TBranch        *b_T_hms_hASUM_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_hASUM_adcPulseInt;   //!
   TBranch        *b_T_hms_hASUM_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_hASUM_adcPulseTime;   //!
   TBranch        *b_T_hms_hASUM_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_hASUM_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_hASUM_adcSampPed;   //!
   TBranch        *b_T_hms_hASUM_adcSampPedRaw;   //!
   TBranch        *b_T_hms_hASUM_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_hASUM_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_hASUM_adcSampPulseInt;   //!
   TBranch        *b_T_hms_hASUM_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_hASUM_adcSampPulseTime;   //!
   TBranch        *b_T_hms_hASUM_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_hASUM_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hASUM_tdcTime;   //!
   TBranch        *b_T_hms_hASUM_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hBSUM_adcMultiplicity;   //!
   TBranch        *b_T_hms_hBSUM_adcPed;   //!
   TBranch        *b_T_hms_hBSUM_adcPedRaw;   //!
   TBranch        *b_T_hms_hBSUM_adcPulseAmp;   //!
   TBranch        *b_T_hms_hBSUM_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_hBSUM_adcPulseInt;   //!
   TBranch        *b_T_hms_hBSUM_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_hBSUM_adcPulseTime;   //!
   TBranch        *b_T_hms_hBSUM_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_hBSUM_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_hBSUM_adcSampPed;   //!
   TBranch        *b_T_hms_hBSUM_adcSampPedRaw;   //!
   TBranch        *b_T_hms_hBSUM_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_hBSUM_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_hBSUM_adcSampPulseInt;   //!
   TBranch        *b_T_hms_hBSUM_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_hBSUM_adcSampPulseTime;   //!
   TBranch        *b_T_hms_hBSUM_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_hBSUM_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hBSUM_tdcTime;   //!
   TBranch        *b_T_hms_hBSUM_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hCER_adcMultiplicity;   //!
   TBranch        *b_T_hms_hCER_adcPed;   //!
   TBranch        *b_T_hms_hCER_adcPedRaw;   //!
   TBranch        *b_T_hms_hCER_adcPulseAmp;   //!
   TBranch        *b_T_hms_hCER_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_hCER_adcPulseInt;   //!
   TBranch        *b_T_hms_hCER_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_hCER_adcPulseTime;   //!
   TBranch        *b_T_hms_hCER_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_hCER_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_hCER_adcSampPed;   //!
   TBranch        *b_T_hms_hCER_adcSampPedRaw;   //!
   TBranch        *b_T_hms_hCER_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_hCER_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_hCER_adcSampPulseInt;   //!
   TBranch        *b_T_hms_hCER_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_hCER_adcSampPulseTime;   //!
   TBranch        *b_T_hms_hCER_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_hCER_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hCER_tdcTime;   //!
   TBranch        *b_T_hms_hCER_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hCSUM_adcMultiplicity;   //!
   TBranch        *b_T_hms_hCSUM_adcPed;   //!
   TBranch        *b_T_hms_hCSUM_adcPedRaw;   //!
   TBranch        *b_T_hms_hCSUM_adcPulseAmp;   //!
   TBranch        *b_T_hms_hCSUM_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_hCSUM_adcPulseInt;   //!
   TBranch        *b_T_hms_hCSUM_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_hCSUM_adcPulseTime;   //!
   TBranch        *b_T_hms_hCSUM_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_hCSUM_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_hCSUM_adcSampPed;   //!
   TBranch        *b_T_hms_hCSUM_adcSampPedRaw;   //!
   TBranch        *b_T_hms_hCSUM_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_hCSUM_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_hCSUM_adcSampPulseInt;   //!
   TBranch        *b_T_hms_hCSUM_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_hCSUM_adcSampPulseTime;   //!
   TBranch        *b_T_hms_hCSUM_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_hCSUM_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hCSUM_tdcTime;   //!
   TBranch        *b_T_hms_hCSUM_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hDCREF1_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hDCREF1_tdcTime;   //!
   TBranch        *b_T_hms_hDCREF1_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hDCREF2_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hDCREF2_tdcTime;   //!
   TBranch        *b_T_hms_hDCREF2_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hDCREF3_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hDCREF3_tdcTime;   //!
   TBranch        *b_T_hms_hDCREF3_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hDCREF4_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hDCREF4_tdcTime;   //!
   TBranch        *b_T_hms_hDCREF4_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hDCREF5_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hDCREF5_tdcTime;   //!
   TBranch        *b_T_hms_hDCREF5_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hDSUM_adcMultiplicity;   //!
   TBranch        *b_T_hms_hDSUM_adcPed;   //!
   TBranch        *b_T_hms_hDSUM_adcPedRaw;   //!
   TBranch        *b_T_hms_hDSUM_adcPulseAmp;   //!
   TBranch        *b_T_hms_hDSUM_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_hDSUM_adcPulseInt;   //!
   TBranch        *b_T_hms_hDSUM_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_hDSUM_adcPulseTime;   //!
   TBranch        *b_T_hms_hDSUM_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_hDSUM_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_hDSUM_adcSampPed;   //!
   TBranch        *b_T_hms_hDSUM_adcSampPedRaw;   //!
   TBranch        *b_T_hms_hDSUM_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_hDSUM_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_hDSUM_adcSampPulseInt;   //!
   TBranch        *b_T_hms_hDSUM_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_hDSUM_adcSampPulseTime;   //!
   TBranch        *b_T_hms_hDSUM_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_hDSUM_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hDSUM_tdcTime;   //!
   TBranch        *b_T_hms_hDSUM_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hEDTM_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hEDTM_tdcTime;   //!
   TBranch        *b_T_hms_hEDTM_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_CLEAN_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hEL_CLEAN_tdcTime;   //!
   TBranch        *b_T_hms_hEL_CLEAN_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_HI_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hEL_HI_tdcTime;   //!
   TBranch        *b_T_hms_hEL_HI_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_LO_LO_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hEL_LO_LO_tdcTime;   //!
   TBranch        *b_T_hms_hEL_LO_LO_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_LO_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hEL_LO_tdcTime;   //!
   TBranch        *b_T_hms_hEL_LO_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hEL_REAL_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hEL_REAL_tdcTime;   //!
   TBranch        *b_T_hms_hEL_REAL_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcMultiplicity;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPed;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPedRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseAmp;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseInt;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseTime;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPed;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPedRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseInt;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseTime;   //!
   TBranch        *b_T_hms_hFADC_TREF_ROC1_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_hHODO_RF_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hHODO_RF_tdcTime;   //!
   TBranch        *b_T_hms_hHODO_RF_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hPRE100_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hPRE100_tdcTime;   //!
   TBranch        *b_T_hms_hPRE100_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hPRE150_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hPRE150_tdcTime;   //!
   TBranch        *b_T_hms_hPRE150_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hPRE200_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hPRE200_tdcTime;   //!
   TBranch        *b_T_hms_hPRE200_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hPRE40_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hPRE40_tdcTime;   //!
   TBranch        *b_T_hms_hPRE40_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hPRHI_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hPRHI_tdcTime;   //!
   TBranch        *b_T_hms_hPRHI_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hPRLO_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hPRLO_tdcTime;   //!
   TBranch        *b_T_hms_hPRLO_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hPSHWR_adcMultiplicity;   //!
   TBranch        *b_T_hms_hPSHWR_adcPed;   //!
   TBranch        *b_T_hms_hPSHWR_adcPedRaw;   //!
   TBranch        *b_T_hms_hPSHWR_adcPulseAmp;   //!
   TBranch        *b_T_hms_hPSHWR_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_hPSHWR_adcPulseInt;   //!
   TBranch        *b_T_hms_hPSHWR_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_hPSHWR_adcPulseTime;   //!
   TBranch        *b_T_hms_hPSHWR_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_hPSHWR_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_hPSHWR_adcSampPed;   //!
   TBranch        *b_T_hms_hPSHWR_adcSampPedRaw;   //!
   TBranch        *b_T_hms_hPSHWR_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_hPSHWR_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_hPSHWR_adcSampPulseInt;   //!
   TBranch        *b_T_hms_hPSHWR_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_hPSHWR_adcSampPulseTime;   //!
   TBranch        *b_T_hms_hPSHWR_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_hRF_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hRF_tdcTime;   //!
   TBranch        *b_T_hms_hRF_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hSHWR_adcMultiplicity;   //!
   TBranch        *b_T_hms_hSHWR_adcPed;   //!
   TBranch        *b_T_hms_hSHWR_adcPedRaw;   //!
   TBranch        *b_T_hms_hSHWR_adcPulseAmp;   //!
   TBranch        *b_T_hms_hSHWR_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_hSHWR_adcPulseInt;   //!
   TBranch        *b_T_hms_hSHWR_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_hSHWR_adcPulseTime;   //!
   TBranch        *b_T_hms_hSHWR_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_hSHWR_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_hSHWR_adcSampPed;   //!
   TBranch        *b_T_hms_hSHWR_adcSampPedRaw;   //!
   TBranch        *b_T_hms_hSHWR_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_hSHWR_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_hSHWR_adcSampPulseInt;   //!
   TBranch        *b_T_hms_hSHWR_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_hSHWR_adcSampPulseTime;   //!
   TBranch        *b_T_hms_hSHWR_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_hSHWR_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hSHWR_tdcTime;   //!
   TBranch        *b_T_hms_hSHWR_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hSTOF_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hSTOF_tdcTime;   //!
   TBranch        *b_T_hms_hSTOF_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hT1_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hT1_tdcTime;   //!
   TBranch        *b_T_hms_hT1_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hT2_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hT2_tdcTime;   //!
   TBranch        *b_T_hms_hT2_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hT3_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hT3_tdcTime;   //!
   TBranch        *b_T_hms_hT3_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hTRIG1_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hTRIG1_tdcTime;   //!
   TBranch        *b_T_hms_hTRIG1_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hTRIG2_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hTRIG2_tdcTime;   //!
   TBranch        *b_T_hms_hTRIG2_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hTRIG3_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hTRIG3_tdcTime;   //!
   TBranch        *b_T_hms_hTRIG3_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hTRIG4_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hTRIG4_tdcTime;   //!
   TBranch        *b_T_hms_hTRIG4_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hTRIG5_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hTRIG5_tdcTime;   //!
   TBranch        *b_T_hms_hTRIG5_tdcTimeRaw;   //!
   TBranch        *b_T_hms_hTRIG6_tdcMultiplicity;   //!
   TBranch        *b_T_hms_hTRIG6_tdcTime;   //!
   TBranch        *b_T_hms_hTRIG6_tdcTimeRaw;   //!
   TBranch        *b_T_hms_npsTRIG1_tdcMultiplicity;   //!
   TBranch        *b_T_hms_npsTRIG1_tdcTime;   //!
   TBranch        *b_T_hms_npsTRIG1_tdcTimeRaw;   //!
   TBranch        *b_T_hms_npsTRIG2_tdcMultiplicity;   //!
   TBranch        *b_T_hms_npsTRIG2_tdcTime;   //!
   TBranch        *b_T_hms_npsTRIG2_tdcTimeRaw;   //!
   TBranch        *b_T_hms_npsTRIG3_tdcMultiplicity;   //!
   TBranch        *b_T_hms_npsTRIG3_tdcTime;   //!
   TBranch        *b_T_hms_npsTRIG3_tdcTimeRaw;   //!
   TBranch        *b_T_hms_npsTRIG4_tdcMultiplicity;   //!
   TBranch        *b_T_hms_npsTRIG4_tdcTime;   //!
   TBranch        *b_T_hms_npsTRIG4_tdcTimeRaw;   //!
   TBranch        *b_T_hms_npsTRIG5_tdcMultiplicity;   //!
   TBranch        *b_T_hms_npsTRIG5_tdcTime;   //!
   TBranch        *b_T_hms_npsTRIG5_tdcTimeRaw;   //!
   TBranch        *b_T_hms_npsTRIG6_tdcMultiplicity;   //!
   TBranch        *b_T_hms_npsTRIG6_tdcTime;   //!
   TBranch        *b_T_hms_npsTRIG6_tdcTimeRaw;   //!
   TBranch        *b_T_hms_pEL_CLEAN_tdcMultiplicity;   //!
   TBranch        *b_T_hms_pEL_CLEAN_tdcTime;   //!
   TBranch        *b_T_hms_pEL_CLEAN_tdcTimeRaw;   //!
   TBranch        *b_T_hms_pEL_HI_tdcMultiplicity;   //!
   TBranch        *b_T_hms_pEL_HI_tdcTime;   //!
   TBranch        *b_T_hms_pEL_HI_tdcTimeRaw;   //!
   TBranch        *b_T_hms_pEL_LO_LO_tdcMultiplicity;   //!
   TBranch        *b_T_hms_pEL_LO_LO_tdcTime;   //!
   TBranch        *b_T_hms_pEL_LO_LO_tdcTimeRaw;   //!
   TBranch        *b_T_hms_pEL_LO_tdcMultiplicity;   //!
   TBranch        *b_T_hms_pEL_LO_tdcTime;   //!
   TBranch        *b_T_hms_pEL_LO_tdcTimeRaw;   //!
   TBranch        *b_T_hms_pEL_REAL_tdcMultiplicity;   //!
   TBranch        *b_T_hms_pEL_REAL_tdcTime;   //!
   TBranch        *b_T_hms_pEL_REAL_tdcTimeRaw;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcMultiplicity;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcPed;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcPedRaw;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcPulseAmp;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcPulseInt;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcPulseTime;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcSampPed;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcSampPedRaw;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcSampPulseInt;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcSampPulseTime;   //!
   TBranch        *b_T_hms_pHEL_MPS_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcMultiplicity;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcPed;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcPedRaw;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcPulseAmp;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcPulseInt;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcPulseTime;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcSampPed;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcSampPedRaw;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcSampPulseInt;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcSampPulseTime;   //!
   TBranch        *b_T_hms_pHEL_NEG_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_pHEL_POS_adcMultiplicity;   //!
   TBranch        *b_T_hms_pHEL_POS_adcPed;   //!
   TBranch        *b_T_hms_pHEL_POS_adcPedRaw;   //!
   TBranch        *b_T_hms_pHEL_POS_adcPulseAmp;   //!
   TBranch        *b_T_hms_pHEL_POS_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_pHEL_POS_adcPulseInt;   //!
   TBranch        *b_T_hms_pHEL_POS_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_pHEL_POS_adcPulseTime;   //!
   TBranch        *b_T_hms_pHEL_POS_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_pHEL_POS_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_pHEL_POS_adcSampPed;   //!
   TBranch        *b_T_hms_pHEL_POS_adcSampPedRaw;   //!
   TBranch        *b_T_hms_pHEL_POS_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_pHEL_POS_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_pHEL_POS_adcSampPulseInt;   //!
   TBranch        *b_T_hms_pHEL_POS_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_pHEL_POS_adcSampPulseTime;   //!
   TBranch        *b_T_hms_pHEL_POS_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcMultiplicity;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcPed;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcPedRaw;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcPulseAmp;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcPulseAmpRaw;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcPulseInt;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcPulseIntRaw;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcPulseTime;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcPulseTimeRaw;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcSampMultiplicity;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcSampPed;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcSampPedRaw;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcSampPulseAmp;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcSampPulseAmpRaw;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcSampPulseInt;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcSampPulseIntRaw;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcSampPulseTime;   //!
   TBranch        *b_T_hms_pHEL_QRT_adcSampPulseTimeRaw;   //!
   TBranch        *b_T_hms_pPRE100_tdcMultiplicity;   //!
   TBranch        *b_T_hms_pPRE100_tdcTime;   //!
   TBranch        *b_T_hms_pPRE100_tdcTimeRaw;   //!
   TBranch        *b_T_hms_pPRE150_tdcMultiplicity;   //!
   TBranch        *b_T_hms_pPRE150_tdcTime;   //!
   TBranch        *b_T_hms_pPRE150_tdcTimeRaw;   //!
   TBranch        *b_T_hms_pPRE200_tdcMultiplicity;   //!
   TBranch        *b_T_hms_pPRE200_tdcTime;   //!
   TBranch        *b_T_hms_pPRE200_tdcTimeRaw;   //!
   TBranch        *b_T_hms_pPRE40_tdcMultiplicity;   //!
   TBranch        *b_T_hms_pPRE40_tdcTime;   //!
   TBranch        *b_T_hms_pPRE40_tdcTimeRaw;   //!
   TBranch        *b_T_hms_pSTOF_tdcMultiplicity;   //!
   TBranch        *b_T_hms_pSTOF_tdcTime;   //!
   TBranch        *b_T_hms_pSTOF_tdcTimeRaw;   //!
   TBranch        *b_g_datatype;   //!
   TBranch        *b_g_evlen;   //!
   TBranch        *b_g_evnum;   //!
   TBranch        *b_g_evtime;   //!
   TBranch        *b_g_evtyp;   //!
   TBranch        *b_g_runnum;   //!
   TBranch        *b_g_runtime;   //!
   TBranch        *b_g_runtype;   //!
   TBranch        *b_g_trigbits;   //!
   TBranch        *b_IBC3H00CRCUR4;   //!
   TBranch        *b_hac_bcm_average;   //!
   TBranch        *b_ibcm1;   //!
   TBranch        *b_ibcm2;   //!
   TBranch        *b_iunser;   //!
   TBranch        *b_itov3out;   //!
   TBranch        *b_itov4out;   //!
   TBranch        *b_ecHMS_Angle;   //!
   TBranch        *b_ecP_HMS;   //!
   TBranch        *b_ecQ1_Set_Current;   //!
   TBranch        *b_ecQ2_I_True;   //!
   TBranch        *b_ecQ2_Set_Current;   //!
   TBranch        *b_ecQ3_Set_Current;   //!
   TBranch        *b_ecQ3_I_True;   //!
   TBranch        *b_ecDI_B_Set_NMR;   //!
   TBranch        *b_ecDI_B_True_NMR;   //!
   TBranch        *b_IPM3H07A_XRAW;   //!
   TBranch        *b_IPM3H07A_YRAW;   //!
   TBranch        *b_IPM3H07B_XRAW;   //!
   TBranch        *b_IPM3H07B_YRAW;   //!
   TBranch        *b_IPM3H07C_XRAW;   //!
   TBranch        *b_IPM3H07C_YRAW;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtTime;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtNum;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtType;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtLen;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fHelicity;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fTrigBits;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fRun;   //!

   phvth(TTree *tree=0);
   virtual ~phvth();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef phvth_cxx
phvth::phvth(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../ROOTfiles/COIN/50k/nps_hms_coin_1195_50000.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../ROOTfiles/COIN/50k/nps_hms_coin_1195_50000.root");
      }
      f->GetObject("T",tree);

   }
   Init(tree);
}

phvth::~phvth()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t phvth::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t phvth::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void phvth::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("FRXAraw_V", &FRXAraw_V, &b_FRXAraw_V);
   fChain->SetBranchAddress("FRXBraw_V", &FRXBraw_V, &b_FRXBraw_V);
   fChain->SetBranchAddress("FRYAraw_V", &FRYAraw_V, &b_FRYAraw_V);
   fChain->SetBranchAddress("FRYBraw_V", &FRYBraw_V, &b_FRYBraw_V);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.emean", &Ndata_H_cal_1pr_emean, &b_Ndata_H_cal_1pr_emean);
   fChain->SetBranchAddress("H.cal.1pr.emean", H_cal_1pr_emean, &b_H_cal_1pr_emean);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.eneg", &Ndata_H_cal_1pr_eneg, &b_Ndata_H_cal_1pr_eneg);
   fChain->SetBranchAddress("H.cal.1pr.eneg", H_cal_1pr_eneg, &b_H_cal_1pr_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.epos", &Ndata_H_cal_1pr_epos, &b_Ndata_H_cal_1pr_epos);
   fChain->SetBranchAddress("H.cal.1pr.epos", H_cal_1pr_epos, &b_H_cal_1pr_epos);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcMult", &Ndata_H_cal_1pr_goodNegAdcMult, &b_Ndata_H_cal_1pr_goodNegAdcMult);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcMult", H_cal_1pr_goodNegAdcMult, &b_H_cal_1pr_goodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcPed", &Ndata_H_cal_1pr_goodNegAdcPed, &b_Ndata_H_cal_1pr_goodNegAdcPed);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcPed", H_cal_1pr_goodNegAdcPed, &b_H_cal_1pr_goodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcPulseAmp", &Ndata_H_cal_1pr_goodNegAdcPulseAmp, &b_Ndata_H_cal_1pr_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcPulseAmp", H_cal_1pr_goodNegAdcPulseAmp, &b_H_cal_1pr_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcPulseInt", &Ndata_H_cal_1pr_goodNegAdcPulseInt, &b_Ndata_H_cal_1pr_goodNegAdcPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcPulseInt", H_cal_1pr_goodNegAdcPulseInt, &b_H_cal_1pr_goodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcPulseIntRaw", &Ndata_H_cal_1pr_goodNegAdcPulseIntRaw, &b_Ndata_H_cal_1pr_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcPulseIntRaw", H_cal_1pr_goodNegAdcPulseIntRaw, &b_H_cal_1pr_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcPulseTime", &Ndata_H_cal_1pr_goodNegAdcPulseTime, &b_Ndata_H_cal_1pr_goodNegAdcPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcPulseTime", H_cal_1pr_goodNegAdcPulseTime, &b_H_cal_1pr_goodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodNegAdcTdcDiffTime", &Ndata_H_cal_1pr_goodNegAdcTdcDiffTime, &b_Ndata_H_cal_1pr_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.1pr.goodNegAdcTdcDiffTime", H_cal_1pr_goodNegAdcTdcDiffTime, &b_H_cal_1pr_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcMult", &Ndata_H_cal_1pr_goodPosAdcMult, &b_Ndata_H_cal_1pr_goodPosAdcMult);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcMult", H_cal_1pr_goodPosAdcMult, &b_H_cal_1pr_goodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcPed", &Ndata_H_cal_1pr_goodPosAdcPed, &b_Ndata_H_cal_1pr_goodPosAdcPed);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcPed", H_cal_1pr_goodPosAdcPed, &b_H_cal_1pr_goodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcPulseAmp", &Ndata_H_cal_1pr_goodPosAdcPulseAmp, &b_Ndata_H_cal_1pr_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcPulseAmp", H_cal_1pr_goodPosAdcPulseAmp, &b_H_cal_1pr_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcPulseInt", &Ndata_H_cal_1pr_goodPosAdcPulseInt, &b_Ndata_H_cal_1pr_goodPosAdcPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcPulseInt", H_cal_1pr_goodPosAdcPulseInt, &b_H_cal_1pr_goodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcPulseIntRaw", &Ndata_H_cal_1pr_goodPosAdcPulseIntRaw, &b_Ndata_H_cal_1pr_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcPulseIntRaw", H_cal_1pr_goodPosAdcPulseIntRaw, &b_H_cal_1pr_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcPulseTime", &Ndata_H_cal_1pr_goodPosAdcPulseTime, &b_Ndata_H_cal_1pr_goodPosAdcPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcPulseTime", H_cal_1pr_goodPosAdcPulseTime, &b_H_cal_1pr_goodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.goodPosAdcTdcDiffTime", &Ndata_H_cal_1pr_goodPosAdcTdcDiffTime, &b_Ndata_H_cal_1pr_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.1pr.goodPosAdcTdcDiffTime", H_cal_1pr_goodPosAdcTdcDiffTime, &b_H_cal_1pr_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcCounter", &Ndata_H_cal_1pr_negAdcCounter, &b_Ndata_H_cal_1pr_negAdcCounter);
   fChain->SetBranchAddress("H.cal.1pr.negAdcCounter", H_cal_1pr_negAdcCounter, &b_H_cal_1pr_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcErrorFlag", &Ndata_H_cal_1pr_negAdcErrorFlag, &b_Ndata_H_cal_1pr_negAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.1pr.negAdcErrorFlag", H_cal_1pr_negAdcErrorFlag, &b_H_cal_1pr_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPed", &Ndata_H_cal_1pr_negAdcPed, &b_Ndata_H_cal_1pr_negAdcPed);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPed", H_cal_1pr_negAdcPed, &b_H_cal_1pr_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPedRaw", &Ndata_H_cal_1pr_negAdcPedRaw, &b_Ndata_H_cal_1pr_negAdcPedRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPedRaw", H_cal_1pr_negAdcPedRaw, &b_H_cal_1pr_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseAmp", &Ndata_H_cal_1pr_negAdcPulseAmp, &b_Ndata_H_cal_1pr_negAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseAmp", H_cal_1pr_negAdcPulseAmp, &b_H_cal_1pr_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseAmpRaw", &Ndata_H_cal_1pr_negAdcPulseAmpRaw, &b_Ndata_H_cal_1pr_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseAmpRaw", H_cal_1pr_negAdcPulseAmpRaw, &b_H_cal_1pr_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseInt", &Ndata_H_cal_1pr_negAdcPulseInt, &b_Ndata_H_cal_1pr_negAdcPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseInt", H_cal_1pr_negAdcPulseInt, &b_H_cal_1pr_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseIntRaw", &Ndata_H_cal_1pr_negAdcPulseIntRaw, &b_Ndata_H_cal_1pr_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseIntRaw", H_cal_1pr_negAdcPulseIntRaw, &b_H_cal_1pr_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseTime", &Ndata_H_cal_1pr_negAdcPulseTime, &b_Ndata_H_cal_1pr_negAdcPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseTime", H_cal_1pr_negAdcPulseTime, &b_H_cal_1pr_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcPulseTimeRaw", &Ndata_H_cal_1pr_negAdcPulseTimeRaw, &b_Ndata_H_cal_1pr_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcPulseTimeRaw", H_cal_1pr_negAdcPulseTimeRaw, &b_H_cal_1pr_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPed", &Ndata_H_cal_1pr_negAdcSampPed, &b_Ndata_H_cal_1pr_negAdcSampPed);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPed", &H_cal_1pr_negAdcSampPed, &b_H_cal_1pr_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPedRaw", &Ndata_H_cal_1pr_negAdcSampPedRaw, &b_Ndata_H_cal_1pr_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPedRaw", &H_cal_1pr_negAdcSampPedRaw, &b_H_cal_1pr_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseAmp", &Ndata_H_cal_1pr_negAdcSampPulseAmp, &b_Ndata_H_cal_1pr_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseAmp", &H_cal_1pr_negAdcSampPulseAmp, &b_H_cal_1pr_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseAmpRaw", &Ndata_H_cal_1pr_negAdcSampPulseAmpRaw, &b_Ndata_H_cal_1pr_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseAmpRaw", &H_cal_1pr_negAdcSampPulseAmpRaw, &b_H_cal_1pr_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseInt", &Ndata_H_cal_1pr_negAdcSampPulseInt, &b_Ndata_H_cal_1pr_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseInt", &H_cal_1pr_negAdcSampPulseInt, &b_H_cal_1pr_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseIntRaw", &Ndata_H_cal_1pr_negAdcSampPulseIntRaw, &b_Ndata_H_cal_1pr_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseIntRaw", &H_cal_1pr_negAdcSampPulseIntRaw, &b_H_cal_1pr_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseTime", &Ndata_H_cal_1pr_negAdcSampPulseTime, &b_Ndata_H_cal_1pr_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseTime", &H_cal_1pr_negAdcSampPulseTime, &b_H_cal_1pr_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negAdcSampPulseTimeRaw", &Ndata_H_cal_1pr_negAdcSampPulseTimeRaw, &b_Ndata_H_cal_1pr_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.1pr.negAdcSampPulseTimeRaw", &H_cal_1pr_negAdcSampPulseTimeRaw, &b_H_cal_1pr_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.numGoodNegAdcHits", &Ndata_H_cal_1pr_numGoodNegAdcHits, &b_Ndata_H_cal_1pr_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.numGoodNegAdcHits", H_cal_1pr_numGoodNegAdcHits, &b_H_cal_1pr_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.numGoodPosAdcHits", &Ndata_H_cal_1pr_numGoodPosAdcHits, &b_Ndata_H_cal_1pr_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.numGoodPosAdcHits", H_cal_1pr_numGoodPosAdcHits, &b_H_cal_1pr_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcCounter", &Ndata_H_cal_1pr_posAdcCounter, &b_Ndata_H_cal_1pr_posAdcCounter);
   fChain->SetBranchAddress("H.cal.1pr.posAdcCounter", H_cal_1pr_posAdcCounter, &b_H_cal_1pr_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcErrorFlag", &Ndata_H_cal_1pr_posAdcErrorFlag, &b_Ndata_H_cal_1pr_posAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.1pr.posAdcErrorFlag", H_cal_1pr_posAdcErrorFlag, &b_H_cal_1pr_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPed", &Ndata_H_cal_1pr_posAdcPed, &b_Ndata_H_cal_1pr_posAdcPed);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPed", H_cal_1pr_posAdcPed, &b_H_cal_1pr_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPedRaw", &Ndata_H_cal_1pr_posAdcPedRaw, &b_Ndata_H_cal_1pr_posAdcPedRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPedRaw", H_cal_1pr_posAdcPedRaw, &b_H_cal_1pr_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseAmp", &Ndata_H_cal_1pr_posAdcPulseAmp, &b_Ndata_H_cal_1pr_posAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseAmp", H_cal_1pr_posAdcPulseAmp, &b_H_cal_1pr_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseAmpRaw", &Ndata_H_cal_1pr_posAdcPulseAmpRaw, &b_Ndata_H_cal_1pr_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseAmpRaw", H_cal_1pr_posAdcPulseAmpRaw, &b_H_cal_1pr_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseInt", &Ndata_H_cal_1pr_posAdcPulseInt, &b_Ndata_H_cal_1pr_posAdcPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseInt", H_cal_1pr_posAdcPulseInt, &b_H_cal_1pr_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseIntRaw", &Ndata_H_cal_1pr_posAdcPulseIntRaw, &b_Ndata_H_cal_1pr_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseIntRaw", H_cal_1pr_posAdcPulseIntRaw, &b_H_cal_1pr_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseTime", &Ndata_H_cal_1pr_posAdcPulseTime, &b_Ndata_H_cal_1pr_posAdcPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseTime", H_cal_1pr_posAdcPulseTime, &b_H_cal_1pr_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcPulseTimeRaw", &Ndata_H_cal_1pr_posAdcPulseTimeRaw, &b_Ndata_H_cal_1pr_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcPulseTimeRaw", H_cal_1pr_posAdcPulseTimeRaw, &b_H_cal_1pr_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPed", &Ndata_H_cal_1pr_posAdcSampPed, &b_Ndata_H_cal_1pr_posAdcSampPed);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPed", &H_cal_1pr_posAdcSampPed, &b_H_cal_1pr_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPedRaw", &Ndata_H_cal_1pr_posAdcSampPedRaw, &b_Ndata_H_cal_1pr_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPedRaw", &H_cal_1pr_posAdcSampPedRaw, &b_H_cal_1pr_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseAmp", &Ndata_H_cal_1pr_posAdcSampPulseAmp, &b_Ndata_H_cal_1pr_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseAmp", &H_cal_1pr_posAdcSampPulseAmp, &b_H_cal_1pr_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseAmpRaw", &Ndata_H_cal_1pr_posAdcSampPulseAmpRaw, &b_Ndata_H_cal_1pr_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseAmpRaw", &H_cal_1pr_posAdcSampPulseAmpRaw, &b_H_cal_1pr_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseInt", &Ndata_H_cal_1pr_posAdcSampPulseInt, &b_Ndata_H_cal_1pr_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseInt", &H_cal_1pr_posAdcSampPulseInt, &b_H_cal_1pr_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseIntRaw", &Ndata_H_cal_1pr_posAdcSampPulseIntRaw, &b_Ndata_H_cal_1pr_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseIntRaw", &H_cal_1pr_posAdcSampPulseIntRaw, &b_H_cal_1pr_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseTime", &Ndata_H_cal_1pr_posAdcSampPulseTime, &b_Ndata_H_cal_1pr_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseTime", &H_cal_1pr_posAdcSampPulseTime, &b_H_cal_1pr_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posAdcSampPulseTimeRaw", &Ndata_H_cal_1pr_posAdcSampPulseTimeRaw, &b_Ndata_H_cal_1pr_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.1pr.posAdcSampPulseTimeRaw", &H_cal_1pr_posAdcSampPulseTimeRaw, &b_H_cal_1pr_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.emean", &Ndata_H_cal_2ta_emean, &b_Ndata_H_cal_2ta_emean);
   fChain->SetBranchAddress("H.cal.2ta.emean", H_cal_2ta_emean, &b_H_cal_2ta_emean);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.eneg", &Ndata_H_cal_2ta_eneg, &b_Ndata_H_cal_2ta_eneg);
   fChain->SetBranchAddress("H.cal.2ta.eneg", H_cal_2ta_eneg, &b_H_cal_2ta_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.epos", &Ndata_H_cal_2ta_epos, &b_Ndata_H_cal_2ta_epos);
   fChain->SetBranchAddress("H.cal.2ta.epos", H_cal_2ta_epos, &b_H_cal_2ta_epos);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcMult", &Ndata_H_cal_2ta_goodNegAdcMult, &b_Ndata_H_cal_2ta_goodNegAdcMult);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcMult", H_cal_2ta_goodNegAdcMult, &b_H_cal_2ta_goodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcPed", &Ndata_H_cal_2ta_goodNegAdcPed, &b_Ndata_H_cal_2ta_goodNegAdcPed);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcPed", H_cal_2ta_goodNegAdcPed, &b_H_cal_2ta_goodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcPulseAmp", &Ndata_H_cal_2ta_goodNegAdcPulseAmp, &b_Ndata_H_cal_2ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcPulseAmp", H_cal_2ta_goodNegAdcPulseAmp, &b_H_cal_2ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcPulseInt", &Ndata_H_cal_2ta_goodNegAdcPulseInt, &b_Ndata_H_cal_2ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcPulseInt", H_cal_2ta_goodNegAdcPulseInt, &b_H_cal_2ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcPulseIntRaw", &Ndata_H_cal_2ta_goodNegAdcPulseIntRaw, &b_Ndata_H_cal_2ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcPulseIntRaw", H_cal_2ta_goodNegAdcPulseIntRaw, &b_H_cal_2ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcPulseTime", &Ndata_H_cal_2ta_goodNegAdcPulseTime, &b_Ndata_H_cal_2ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcPulseTime", H_cal_2ta_goodNegAdcPulseTime, &b_H_cal_2ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodNegAdcTdcDiffTime", &Ndata_H_cal_2ta_goodNegAdcTdcDiffTime, &b_Ndata_H_cal_2ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.2ta.goodNegAdcTdcDiffTime", H_cal_2ta_goodNegAdcTdcDiffTime, &b_H_cal_2ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcMult", &Ndata_H_cal_2ta_goodPosAdcMult, &b_Ndata_H_cal_2ta_goodPosAdcMult);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcMult", H_cal_2ta_goodPosAdcMult, &b_H_cal_2ta_goodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcPed", &Ndata_H_cal_2ta_goodPosAdcPed, &b_Ndata_H_cal_2ta_goodPosAdcPed);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcPed", H_cal_2ta_goodPosAdcPed, &b_H_cal_2ta_goodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcPulseAmp", &Ndata_H_cal_2ta_goodPosAdcPulseAmp, &b_Ndata_H_cal_2ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcPulseAmp", H_cal_2ta_goodPosAdcPulseAmp, &b_H_cal_2ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcPulseInt", &Ndata_H_cal_2ta_goodPosAdcPulseInt, &b_Ndata_H_cal_2ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcPulseInt", H_cal_2ta_goodPosAdcPulseInt, &b_H_cal_2ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcPulseIntRaw", &Ndata_H_cal_2ta_goodPosAdcPulseIntRaw, &b_Ndata_H_cal_2ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcPulseIntRaw", H_cal_2ta_goodPosAdcPulseIntRaw, &b_H_cal_2ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcPulseTime", &Ndata_H_cal_2ta_goodPosAdcPulseTime, &b_Ndata_H_cal_2ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcPulseTime", H_cal_2ta_goodPosAdcPulseTime, &b_H_cal_2ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.goodPosAdcTdcDiffTime", &Ndata_H_cal_2ta_goodPosAdcTdcDiffTime, &b_Ndata_H_cal_2ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.2ta.goodPosAdcTdcDiffTime", H_cal_2ta_goodPosAdcTdcDiffTime, &b_H_cal_2ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcCounter", &Ndata_H_cal_2ta_negAdcCounter, &b_Ndata_H_cal_2ta_negAdcCounter);
   fChain->SetBranchAddress("H.cal.2ta.negAdcCounter", H_cal_2ta_negAdcCounter, &b_H_cal_2ta_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcErrorFlag", &Ndata_H_cal_2ta_negAdcErrorFlag, &b_Ndata_H_cal_2ta_negAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.2ta.negAdcErrorFlag", H_cal_2ta_negAdcErrorFlag, &b_H_cal_2ta_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPed", &Ndata_H_cal_2ta_negAdcPed, &b_Ndata_H_cal_2ta_negAdcPed);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPed", H_cal_2ta_negAdcPed, &b_H_cal_2ta_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPedRaw", &Ndata_H_cal_2ta_negAdcPedRaw, &b_Ndata_H_cal_2ta_negAdcPedRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPedRaw", H_cal_2ta_negAdcPedRaw, &b_H_cal_2ta_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseAmp", &Ndata_H_cal_2ta_negAdcPulseAmp, &b_Ndata_H_cal_2ta_negAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseAmp", H_cal_2ta_negAdcPulseAmp, &b_H_cal_2ta_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseAmpRaw", &Ndata_H_cal_2ta_negAdcPulseAmpRaw, &b_Ndata_H_cal_2ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseAmpRaw", H_cal_2ta_negAdcPulseAmpRaw, &b_H_cal_2ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseInt", &Ndata_H_cal_2ta_negAdcPulseInt, &b_Ndata_H_cal_2ta_negAdcPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseInt", H_cal_2ta_negAdcPulseInt, &b_H_cal_2ta_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseIntRaw", &Ndata_H_cal_2ta_negAdcPulseIntRaw, &b_Ndata_H_cal_2ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseIntRaw", H_cal_2ta_negAdcPulseIntRaw, &b_H_cal_2ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseTime", &Ndata_H_cal_2ta_negAdcPulseTime, &b_Ndata_H_cal_2ta_negAdcPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseTime", H_cal_2ta_negAdcPulseTime, &b_H_cal_2ta_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcPulseTimeRaw", &Ndata_H_cal_2ta_negAdcPulseTimeRaw, &b_Ndata_H_cal_2ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcPulseTimeRaw", H_cal_2ta_negAdcPulseTimeRaw, &b_H_cal_2ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPed", &Ndata_H_cal_2ta_negAdcSampPed, &b_Ndata_H_cal_2ta_negAdcSampPed);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPed", &H_cal_2ta_negAdcSampPed, &b_H_cal_2ta_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPedRaw", &Ndata_H_cal_2ta_negAdcSampPedRaw, &b_Ndata_H_cal_2ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPedRaw", &H_cal_2ta_negAdcSampPedRaw, &b_H_cal_2ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseAmp", &Ndata_H_cal_2ta_negAdcSampPulseAmp, &b_Ndata_H_cal_2ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseAmp", &H_cal_2ta_negAdcSampPulseAmp, &b_H_cal_2ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseAmpRaw", &Ndata_H_cal_2ta_negAdcSampPulseAmpRaw, &b_Ndata_H_cal_2ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseAmpRaw", &H_cal_2ta_negAdcSampPulseAmpRaw, &b_H_cal_2ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseInt", &Ndata_H_cal_2ta_negAdcSampPulseInt, &b_Ndata_H_cal_2ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseInt", &H_cal_2ta_negAdcSampPulseInt, &b_H_cal_2ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseIntRaw", &Ndata_H_cal_2ta_negAdcSampPulseIntRaw, &b_Ndata_H_cal_2ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseIntRaw", &H_cal_2ta_negAdcSampPulseIntRaw, &b_H_cal_2ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseTime", &Ndata_H_cal_2ta_negAdcSampPulseTime, &b_Ndata_H_cal_2ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseTime", &H_cal_2ta_negAdcSampPulseTime, &b_H_cal_2ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negAdcSampPulseTimeRaw", &Ndata_H_cal_2ta_negAdcSampPulseTimeRaw, &b_Ndata_H_cal_2ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.2ta.negAdcSampPulseTimeRaw", &H_cal_2ta_negAdcSampPulseTimeRaw, &b_H_cal_2ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.numGoodNegAdcHits", &Ndata_H_cal_2ta_numGoodNegAdcHits, &b_Ndata_H_cal_2ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.numGoodNegAdcHits", H_cal_2ta_numGoodNegAdcHits, &b_H_cal_2ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.numGoodPosAdcHits", &Ndata_H_cal_2ta_numGoodPosAdcHits, &b_Ndata_H_cal_2ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.numGoodPosAdcHits", H_cal_2ta_numGoodPosAdcHits, &b_H_cal_2ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcCounter", &Ndata_H_cal_2ta_posAdcCounter, &b_Ndata_H_cal_2ta_posAdcCounter);
   fChain->SetBranchAddress("H.cal.2ta.posAdcCounter", H_cal_2ta_posAdcCounter, &b_H_cal_2ta_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcErrorFlag", &Ndata_H_cal_2ta_posAdcErrorFlag, &b_Ndata_H_cal_2ta_posAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.2ta.posAdcErrorFlag", H_cal_2ta_posAdcErrorFlag, &b_H_cal_2ta_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPed", &Ndata_H_cal_2ta_posAdcPed, &b_Ndata_H_cal_2ta_posAdcPed);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPed", H_cal_2ta_posAdcPed, &b_H_cal_2ta_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPedRaw", &Ndata_H_cal_2ta_posAdcPedRaw, &b_Ndata_H_cal_2ta_posAdcPedRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPedRaw", H_cal_2ta_posAdcPedRaw, &b_H_cal_2ta_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseAmp", &Ndata_H_cal_2ta_posAdcPulseAmp, &b_Ndata_H_cal_2ta_posAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseAmp", H_cal_2ta_posAdcPulseAmp, &b_H_cal_2ta_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseAmpRaw", &Ndata_H_cal_2ta_posAdcPulseAmpRaw, &b_Ndata_H_cal_2ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseAmpRaw", H_cal_2ta_posAdcPulseAmpRaw, &b_H_cal_2ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseInt", &Ndata_H_cal_2ta_posAdcPulseInt, &b_Ndata_H_cal_2ta_posAdcPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseInt", H_cal_2ta_posAdcPulseInt, &b_H_cal_2ta_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseIntRaw", &Ndata_H_cal_2ta_posAdcPulseIntRaw, &b_Ndata_H_cal_2ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseIntRaw", H_cal_2ta_posAdcPulseIntRaw, &b_H_cal_2ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseTime", &Ndata_H_cal_2ta_posAdcPulseTime, &b_Ndata_H_cal_2ta_posAdcPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseTime", H_cal_2ta_posAdcPulseTime, &b_H_cal_2ta_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcPulseTimeRaw", &Ndata_H_cal_2ta_posAdcPulseTimeRaw, &b_Ndata_H_cal_2ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcPulseTimeRaw", H_cal_2ta_posAdcPulseTimeRaw, &b_H_cal_2ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPed", &Ndata_H_cal_2ta_posAdcSampPed, &b_Ndata_H_cal_2ta_posAdcSampPed);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPed", &H_cal_2ta_posAdcSampPed, &b_H_cal_2ta_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPedRaw", &Ndata_H_cal_2ta_posAdcSampPedRaw, &b_Ndata_H_cal_2ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPedRaw", &H_cal_2ta_posAdcSampPedRaw, &b_H_cal_2ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseAmp", &Ndata_H_cal_2ta_posAdcSampPulseAmp, &b_Ndata_H_cal_2ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseAmp", &H_cal_2ta_posAdcSampPulseAmp, &b_H_cal_2ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseAmpRaw", &Ndata_H_cal_2ta_posAdcSampPulseAmpRaw, &b_Ndata_H_cal_2ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseAmpRaw", &H_cal_2ta_posAdcSampPulseAmpRaw, &b_H_cal_2ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseInt", &Ndata_H_cal_2ta_posAdcSampPulseInt, &b_Ndata_H_cal_2ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseInt", &H_cal_2ta_posAdcSampPulseInt, &b_H_cal_2ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseIntRaw", &Ndata_H_cal_2ta_posAdcSampPulseIntRaw, &b_Ndata_H_cal_2ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseIntRaw", &H_cal_2ta_posAdcSampPulseIntRaw, &b_H_cal_2ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseTime", &Ndata_H_cal_2ta_posAdcSampPulseTime, &b_Ndata_H_cal_2ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseTime", &H_cal_2ta_posAdcSampPulseTime, &b_H_cal_2ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posAdcSampPulseTimeRaw", &Ndata_H_cal_2ta_posAdcSampPulseTimeRaw, &b_Ndata_H_cal_2ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.2ta.posAdcSampPulseTimeRaw", &H_cal_2ta_posAdcSampPulseTimeRaw, &b_H_cal_2ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.emean", &Ndata_H_cal_3ta_emean, &b_Ndata_H_cal_3ta_emean);
   fChain->SetBranchAddress("H.cal.3ta.emean", H_cal_3ta_emean, &b_H_cal_3ta_emean);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.eneg", &Ndata_H_cal_3ta_eneg, &b_Ndata_H_cal_3ta_eneg);
   fChain->SetBranchAddress("H.cal.3ta.eneg", H_cal_3ta_eneg, &b_H_cal_3ta_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.epos", &Ndata_H_cal_3ta_epos, &b_Ndata_H_cal_3ta_epos);
   fChain->SetBranchAddress("H.cal.3ta.epos", H_cal_3ta_epos, &b_H_cal_3ta_epos);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcMult", &Ndata_H_cal_3ta_goodNegAdcMult, &b_Ndata_H_cal_3ta_goodNegAdcMult);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcMult", H_cal_3ta_goodNegAdcMult, &b_H_cal_3ta_goodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcPed", &Ndata_H_cal_3ta_goodNegAdcPed, &b_Ndata_H_cal_3ta_goodNegAdcPed);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcPed", H_cal_3ta_goodNegAdcPed, &b_H_cal_3ta_goodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcPulseAmp", &Ndata_H_cal_3ta_goodNegAdcPulseAmp, &b_Ndata_H_cal_3ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcPulseAmp", H_cal_3ta_goodNegAdcPulseAmp, &b_H_cal_3ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcPulseInt", &Ndata_H_cal_3ta_goodNegAdcPulseInt, &b_Ndata_H_cal_3ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcPulseInt", H_cal_3ta_goodNegAdcPulseInt, &b_H_cal_3ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcPulseIntRaw", &Ndata_H_cal_3ta_goodNegAdcPulseIntRaw, &b_Ndata_H_cal_3ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcPulseIntRaw", H_cal_3ta_goodNegAdcPulseIntRaw, &b_H_cal_3ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcPulseTime", &Ndata_H_cal_3ta_goodNegAdcPulseTime, &b_Ndata_H_cal_3ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcPulseTime", H_cal_3ta_goodNegAdcPulseTime, &b_H_cal_3ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodNegAdcTdcDiffTime", &Ndata_H_cal_3ta_goodNegAdcTdcDiffTime, &b_Ndata_H_cal_3ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.3ta.goodNegAdcTdcDiffTime", H_cal_3ta_goodNegAdcTdcDiffTime, &b_H_cal_3ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcMult", &Ndata_H_cal_3ta_goodPosAdcMult, &b_Ndata_H_cal_3ta_goodPosAdcMult);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcMult", H_cal_3ta_goodPosAdcMult, &b_H_cal_3ta_goodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcPed", &Ndata_H_cal_3ta_goodPosAdcPed, &b_Ndata_H_cal_3ta_goodPosAdcPed);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcPed", H_cal_3ta_goodPosAdcPed, &b_H_cal_3ta_goodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcPulseAmp", &Ndata_H_cal_3ta_goodPosAdcPulseAmp, &b_Ndata_H_cal_3ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcPulseAmp", H_cal_3ta_goodPosAdcPulseAmp, &b_H_cal_3ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcPulseInt", &Ndata_H_cal_3ta_goodPosAdcPulseInt, &b_Ndata_H_cal_3ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcPulseInt", H_cal_3ta_goodPosAdcPulseInt, &b_H_cal_3ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcPulseIntRaw", &Ndata_H_cal_3ta_goodPosAdcPulseIntRaw, &b_Ndata_H_cal_3ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcPulseIntRaw", H_cal_3ta_goodPosAdcPulseIntRaw, &b_H_cal_3ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcPulseTime", &Ndata_H_cal_3ta_goodPosAdcPulseTime, &b_Ndata_H_cal_3ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcPulseTime", H_cal_3ta_goodPosAdcPulseTime, &b_H_cal_3ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.goodPosAdcTdcDiffTime", &Ndata_H_cal_3ta_goodPosAdcTdcDiffTime, &b_Ndata_H_cal_3ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.3ta.goodPosAdcTdcDiffTime", H_cal_3ta_goodPosAdcTdcDiffTime, &b_H_cal_3ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcCounter", &Ndata_H_cal_3ta_negAdcCounter, &b_Ndata_H_cal_3ta_negAdcCounter);
   fChain->SetBranchAddress("H.cal.3ta.negAdcCounter", &H_cal_3ta_negAdcCounter, &b_H_cal_3ta_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcErrorFlag", &Ndata_H_cal_3ta_negAdcErrorFlag, &b_Ndata_H_cal_3ta_negAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.3ta.negAdcErrorFlag", &H_cal_3ta_negAdcErrorFlag, &b_H_cal_3ta_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPed", &Ndata_H_cal_3ta_negAdcPed, &b_Ndata_H_cal_3ta_negAdcPed);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPed", &H_cal_3ta_negAdcPed, &b_H_cal_3ta_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPedRaw", &Ndata_H_cal_3ta_negAdcPedRaw, &b_Ndata_H_cal_3ta_negAdcPedRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPedRaw", &H_cal_3ta_negAdcPedRaw, &b_H_cal_3ta_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseAmp", &Ndata_H_cal_3ta_negAdcPulseAmp, &b_Ndata_H_cal_3ta_negAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseAmp", &H_cal_3ta_negAdcPulseAmp, &b_H_cal_3ta_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseAmpRaw", &Ndata_H_cal_3ta_negAdcPulseAmpRaw, &b_Ndata_H_cal_3ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseAmpRaw", &H_cal_3ta_negAdcPulseAmpRaw, &b_H_cal_3ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseInt", &Ndata_H_cal_3ta_negAdcPulseInt, &b_Ndata_H_cal_3ta_negAdcPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseInt", &H_cal_3ta_negAdcPulseInt, &b_H_cal_3ta_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseIntRaw", &Ndata_H_cal_3ta_negAdcPulseIntRaw, &b_Ndata_H_cal_3ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseIntRaw", &H_cal_3ta_negAdcPulseIntRaw, &b_H_cal_3ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseTime", &Ndata_H_cal_3ta_negAdcPulseTime, &b_Ndata_H_cal_3ta_negAdcPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseTime", &H_cal_3ta_negAdcPulseTime, &b_H_cal_3ta_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcPulseTimeRaw", &Ndata_H_cal_3ta_negAdcPulseTimeRaw, &b_Ndata_H_cal_3ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcPulseTimeRaw", &H_cal_3ta_negAdcPulseTimeRaw, &b_H_cal_3ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPed", &Ndata_H_cal_3ta_negAdcSampPed, &b_Ndata_H_cal_3ta_negAdcSampPed);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPed", &H_cal_3ta_negAdcSampPed, &b_H_cal_3ta_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPedRaw", &Ndata_H_cal_3ta_negAdcSampPedRaw, &b_Ndata_H_cal_3ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPedRaw", &H_cal_3ta_negAdcSampPedRaw, &b_H_cal_3ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseAmp", &Ndata_H_cal_3ta_negAdcSampPulseAmp, &b_Ndata_H_cal_3ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseAmp", &H_cal_3ta_negAdcSampPulseAmp, &b_H_cal_3ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseAmpRaw", &Ndata_H_cal_3ta_negAdcSampPulseAmpRaw, &b_Ndata_H_cal_3ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseAmpRaw", &H_cal_3ta_negAdcSampPulseAmpRaw, &b_H_cal_3ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseInt", &Ndata_H_cal_3ta_negAdcSampPulseInt, &b_Ndata_H_cal_3ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseInt", &H_cal_3ta_negAdcSampPulseInt, &b_H_cal_3ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseIntRaw", &Ndata_H_cal_3ta_negAdcSampPulseIntRaw, &b_Ndata_H_cal_3ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseIntRaw", &H_cal_3ta_negAdcSampPulseIntRaw, &b_H_cal_3ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseTime", &Ndata_H_cal_3ta_negAdcSampPulseTime, &b_Ndata_H_cal_3ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseTime", &H_cal_3ta_negAdcSampPulseTime, &b_H_cal_3ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negAdcSampPulseTimeRaw", &Ndata_H_cal_3ta_negAdcSampPulseTimeRaw, &b_Ndata_H_cal_3ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.3ta.negAdcSampPulseTimeRaw", &H_cal_3ta_negAdcSampPulseTimeRaw, &b_H_cal_3ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.numGoodNegAdcHits", &Ndata_H_cal_3ta_numGoodNegAdcHits, &b_Ndata_H_cal_3ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.numGoodNegAdcHits", H_cal_3ta_numGoodNegAdcHits, &b_H_cal_3ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.numGoodPosAdcHits", &Ndata_H_cal_3ta_numGoodPosAdcHits, &b_Ndata_H_cal_3ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.numGoodPosAdcHits", H_cal_3ta_numGoodPosAdcHits, &b_H_cal_3ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcCounter", &Ndata_H_cal_3ta_posAdcCounter, &b_Ndata_H_cal_3ta_posAdcCounter);
   fChain->SetBranchAddress("H.cal.3ta.posAdcCounter", H_cal_3ta_posAdcCounter, &b_H_cal_3ta_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcErrorFlag", &Ndata_H_cal_3ta_posAdcErrorFlag, &b_Ndata_H_cal_3ta_posAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.3ta.posAdcErrorFlag", H_cal_3ta_posAdcErrorFlag, &b_H_cal_3ta_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPed", &Ndata_H_cal_3ta_posAdcPed, &b_Ndata_H_cal_3ta_posAdcPed);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPed", H_cal_3ta_posAdcPed, &b_H_cal_3ta_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPedRaw", &Ndata_H_cal_3ta_posAdcPedRaw, &b_Ndata_H_cal_3ta_posAdcPedRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPedRaw", H_cal_3ta_posAdcPedRaw, &b_H_cal_3ta_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseAmp", &Ndata_H_cal_3ta_posAdcPulseAmp, &b_Ndata_H_cal_3ta_posAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseAmp", H_cal_3ta_posAdcPulseAmp, &b_H_cal_3ta_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseAmpRaw", &Ndata_H_cal_3ta_posAdcPulseAmpRaw, &b_Ndata_H_cal_3ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseAmpRaw", H_cal_3ta_posAdcPulseAmpRaw, &b_H_cal_3ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseInt", &Ndata_H_cal_3ta_posAdcPulseInt, &b_Ndata_H_cal_3ta_posAdcPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseInt", H_cal_3ta_posAdcPulseInt, &b_H_cal_3ta_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseIntRaw", &Ndata_H_cal_3ta_posAdcPulseIntRaw, &b_Ndata_H_cal_3ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseIntRaw", H_cal_3ta_posAdcPulseIntRaw, &b_H_cal_3ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseTime", &Ndata_H_cal_3ta_posAdcPulseTime, &b_Ndata_H_cal_3ta_posAdcPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseTime", H_cal_3ta_posAdcPulseTime, &b_H_cal_3ta_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcPulseTimeRaw", &Ndata_H_cal_3ta_posAdcPulseTimeRaw, &b_Ndata_H_cal_3ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcPulseTimeRaw", H_cal_3ta_posAdcPulseTimeRaw, &b_H_cal_3ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPed", &Ndata_H_cal_3ta_posAdcSampPed, &b_Ndata_H_cal_3ta_posAdcSampPed);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPed", H_cal_3ta_posAdcSampPed, &b_H_cal_3ta_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPedRaw", &Ndata_H_cal_3ta_posAdcSampPedRaw, &b_Ndata_H_cal_3ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPedRaw", H_cal_3ta_posAdcSampPedRaw, &b_H_cal_3ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseAmp", &Ndata_H_cal_3ta_posAdcSampPulseAmp, &b_Ndata_H_cal_3ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseAmp", H_cal_3ta_posAdcSampPulseAmp, &b_H_cal_3ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseAmpRaw", &Ndata_H_cal_3ta_posAdcSampPulseAmpRaw, &b_Ndata_H_cal_3ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseAmpRaw", H_cal_3ta_posAdcSampPulseAmpRaw, &b_H_cal_3ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseInt", &Ndata_H_cal_3ta_posAdcSampPulseInt, &b_Ndata_H_cal_3ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseInt", H_cal_3ta_posAdcSampPulseInt, &b_H_cal_3ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseIntRaw", &Ndata_H_cal_3ta_posAdcSampPulseIntRaw, &b_Ndata_H_cal_3ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseIntRaw", H_cal_3ta_posAdcSampPulseIntRaw, &b_H_cal_3ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseTime", &Ndata_H_cal_3ta_posAdcSampPulseTime, &b_Ndata_H_cal_3ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseTime", H_cal_3ta_posAdcSampPulseTime, &b_H_cal_3ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posAdcSampPulseTimeRaw", &Ndata_H_cal_3ta_posAdcSampPulseTimeRaw, &b_Ndata_H_cal_3ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.3ta.posAdcSampPulseTimeRaw", H_cal_3ta_posAdcSampPulseTimeRaw, &b_H_cal_3ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.emean", &Ndata_H_cal_4ta_emean, &b_Ndata_H_cal_4ta_emean);
   fChain->SetBranchAddress("H.cal.4ta.emean", H_cal_4ta_emean, &b_H_cal_4ta_emean);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.eneg", &Ndata_H_cal_4ta_eneg, &b_Ndata_H_cal_4ta_eneg);
   fChain->SetBranchAddress("H.cal.4ta.eneg", H_cal_4ta_eneg, &b_H_cal_4ta_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.epos", &Ndata_H_cal_4ta_epos, &b_Ndata_H_cal_4ta_epos);
   fChain->SetBranchAddress("H.cal.4ta.epos", H_cal_4ta_epos, &b_H_cal_4ta_epos);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcMult", &Ndata_H_cal_4ta_goodNegAdcMult, &b_Ndata_H_cal_4ta_goodNegAdcMult);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcMult", H_cal_4ta_goodNegAdcMult, &b_H_cal_4ta_goodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcPed", &Ndata_H_cal_4ta_goodNegAdcPed, &b_Ndata_H_cal_4ta_goodNegAdcPed);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcPed", H_cal_4ta_goodNegAdcPed, &b_H_cal_4ta_goodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcPulseAmp", &Ndata_H_cal_4ta_goodNegAdcPulseAmp, &b_Ndata_H_cal_4ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcPulseAmp", H_cal_4ta_goodNegAdcPulseAmp, &b_H_cal_4ta_goodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcPulseInt", &Ndata_H_cal_4ta_goodNegAdcPulseInt, &b_Ndata_H_cal_4ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcPulseInt", H_cal_4ta_goodNegAdcPulseInt, &b_H_cal_4ta_goodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcPulseIntRaw", &Ndata_H_cal_4ta_goodNegAdcPulseIntRaw, &b_Ndata_H_cal_4ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcPulseIntRaw", H_cal_4ta_goodNegAdcPulseIntRaw, &b_H_cal_4ta_goodNegAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcPulseTime", &Ndata_H_cal_4ta_goodNegAdcPulseTime, &b_Ndata_H_cal_4ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcPulseTime", H_cal_4ta_goodNegAdcPulseTime, &b_H_cal_4ta_goodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodNegAdcTdcDiffTime", &Ndata_H_cal_4ta_goodNegAdcTdcDiffTime, &b_Ndata_H_cal_4ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.4ta.goodNegAdcTdcDiffTime", H_cal_4ta_goodNegAdcTdcDiffTime, &b_H_cal_4ta_goodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcMult", &Ndata_H_cal_4ta_goodPosAdcMult, &b_Ndata_H_cal_4ta_goodPosAdcMult);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcMult", H_cal_4ta_goodPosAdcMult, &b_H_cal_4ta_goodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcPed", &Ndata_H_cal_4ta_goodPosAdcPed, &b_Ndata_H_cal_4ta_goodPosAdcPed);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcPed", H_cal_4ta_goodPosAdcPed, &b_H_cal_4ta_goodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcPulseAmp", &Ndata_H_cal_4ta_goodPosAdcPulseAmp, &b_Ndata_H_cal_4ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcPulseAmp", H_cal_4ta_goodPosAdcPulseAmp, &b_H_cal_4ta_goodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcPulseInt", &Ndata_H_cal_4ta_goodPosAdcPulseInt, &b_Ndata_H_cal_4ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcPulseInt", H_cal_4ta_goodPosAdcPulseInt, &b_H_cal_4ta_goodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcPulseIntRaw", &Ndata_H_cal_4ta_goodPosAdcPulseIntRaw, &b_Ndata_H_cal_4ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcPulseIntRaw", H_cal_4ta_goodPosAdcPulseIntRaw, &b_H_cal_4ta_goodPosAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcPulseTime", &Ndata_H_cal_4ta_goodPosAdcPulseTime, &b_Ndata_H_cal_4ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcPulseTime", H_cal_4ta_goodPosAdcPulseTime, &b_H_cal_4ta_goodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.goodPosAdcTdcDiffTime", &Ndata_H_cal_4ta_goodPosAdcTdcDiffTime, &b_Ndata_H_cal_4ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cal.4ta.goodPosAdcTdcDiffTime", H_cal_4ta_goodPosAdcTdcDiffTime, &b_H_cal_4ta_goodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcCounter", &Ndata_H_cal_4ta_negAdcCounter, &b_Ndata_H_cal_4ta_negAdcCounter);
   fChain->SetBranchAddress("H.cal.4ta.negAdcCounter", &H_cal_4ta_negAdcCounter, &b_H_cal_4ta_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcErrorFlag", &Ndata_H_cal_4ta_negAdcErrorFlag, &b_Ndata_H_cal_4ta_negAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.4ta.negAdcErrorFlag", &H_cal_4ta_negAdcErrorFlag, &b_H_cal_4ta_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPed", &Ndata_H_cal_4ta_negAdcPed, &b_Ndata_H_cal_4ta_negAdcPed);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPed", &H_cal_4ta_negAdcPed, &b_H_cal_4ta_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPedRaw", &Ndata_H_cal_4ta_negAdcPedRaw, &b_Ndata_H_cal_4ta_negAdcPedRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPedRaw", &H_cal_4ta_negAdcPedRaw, &b_H_cal_4ta_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseAmp", &Ndata_H_cal_4ta_negAdcPulseAmp, &b_Ndata_H_cal_4ta_negAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseAmp", &H_cal_4ta_negAdcPulseAmp, &b_H_cal_4ta_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseAmpRaw", &Ndata_H_cal_4ta_negAdcPulseAmpRaw, &b_Ndata_H_cal_4ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseAmpRaw", &H_cal_4ta_negAdcPulseAmpRaw, &b_H_cal_4ta_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseInt", &Ndata_H_cal_4ta_negAdcPulseInt, &b_Ndata_H_cal_4ta_negAdcPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseInt", &H_cal_4ta_negAdcPulseInt, &b_H_cal_4ta_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseIntRaw", &Ndata_H_cal_4ta_negAdcPulseIntRaw, &b_Ndata_H_cal_4ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseIntRaw", &H_cal_4ta_negAdcPulseIntRaw, &b_H_cal_4ta_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseTime", &Ndata_H_cal_4ta_negAdcPulseTime, &b_Ndata_H_cal_4ta_negAdcPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseTime", &H_cal_4ta_negAdcPulseTime, &b_H_cal_4ta_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcPulseTimeRaw", &Ndata_H_cal_4ta_negAdcPulseTimeRaw, &b_Ndata_H_cal_4ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcPulseTimeRaw", &H_cal_4ta_negAdcPulseTimeRaw, &b_H_cal_4ta_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPed", &Ndata_H_cal_4ta_negAdcSampPed, &b_Ndata_H_cal_4ta_negAdcSampPed);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPed", &H_cal_4ta_negAdcSampPed, &b_H_cal_4ta_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPedRaw", &Ndata_H_cal_4ta_negAdcSampPedRaw, &b_Ndata_H_cal_4ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPedRaw", &H_cal_4ta_negAdcSampPedRaw, &b_H_cal_4ta_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseAmp", &Ndata_H_cal_4ta_negAdcSampPulseAmp, &b_Ndata_H_cal_4ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseAmp", &H_cal_4ta_negAdcSampPulseAmp, &b_H_cal_4ta_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseAmpRaw", &Ndata_H_cal_4ta_negAdcSampPulseAmpRaw, &b_Ndata_H_cal_4ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseAmpRaw", &H_cal_4ta_negAdcSampPulseAmpRaw, &b_H_cal_4ta_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseInt", &Ndata_H_cal_4ta_negAdcSampPulseInt, &b_Ndata_H_cal_4ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseInt", &H_cal_4ta_negAdcSampPulseInt, &b_H_cal_4ta_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseIntRaw", &Ndata_H_cal_4ta_negAdcSampPulseIntRaw, &b_Ndata_H_cal_4ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseIntRaw", &H_cal_4ta_negAdcSampPulseIntRaw, &b_H_cal_4ta_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseTime", &Ndata_H_cal_4ta_negAdcSampPulseTime, &b_Ndata_H_cal_4ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseTime", &H_cal_4ta_negAdcSampPulseTime, &b_H_cal_4ta_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negAdcSampPulseTimeRaw", &Ndata_H_cal_4ta_negAdcSampPulseTimeRaw, &b_Ndata_H_cal_4ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.4ta.negAdcSampPulseTimeRaw", &H_cal_4ta_negAdcSampPulseTimeRaw, &b_H_cal_4ta_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.numGoodNegAdcHits", &Ndata_H_cal_4ta_numGoodNegAdcHits, &b_Ndata_H_cal_4ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.numGoodNegAdcHits", H_cal_4ta_numGoodNegAdcHits, &b_H_cal_4ta_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.numGoodPosAdcHits", &Ndata_H_cal_4ta_numGoodPosAdcHits, &b_Ndata_H_cal_4ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.numGoodPosAdcHits", H_cal_4ta_numGoodPosAdcHits, &b_H_cal_4ta_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcCounter", &Ndata_H_cal_4ta_posAdcCounter, &b_Ndata_H_cal_4ta_posAdcCounter);
   fChain->SetBranchAddress("H.cal.4ta.posAdcCounter", H_cal_4ta_posAdcCounter, &b_H_cal_4ta_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcErrorFlag", &Ndata_H_cal_4ta_posAdcErrorFlag, &b_Ndata_H_cal_4ta_posAdcErrorFlag);
   fChain->SetBranchAddress("H.cal.4ta.posAdcErrorFlag", H_cal_4ta_posAdcErrorFlag, &b_H_cal_4ta_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPed", &Ndata_H_cal_4ta_posAdcPed, &b_Ndata_H_cal_4ta_posAdcPed);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPed", H_cal_4ta_posAdcPed, &b_H_cal_4ta_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPedRaw", &Ndata_H_cal_4ta_posAdcPedRaw, &b_Ndata_H_cal_4ta_posAdcPedRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPedRaw", H_cal_4ta_posAdcPedRaw, &b_H_cal_4ta_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseAmp", &Ndata_H_cal_4ta_posAdcPulseAmp, &b_Ndata_H_cal_4ta_posAdcPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseAmp", H_cal_4ta_posAdcPulseAmp, &b_H_cal_4ta_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseAmpRaw", &Ndata_H_cal_4ta_posAdcPulseAmpRaw, &b_Ndata_H_cal_4ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseAmpRaw", H_cal_4ta_posAdcPulseAmpRaw, &b_H_cal_4ta_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseInt", &Ndata_H_cal_4ta_posAdcPulseInt, &b_Ndata_H_cal_4ta_posAdcPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseInt", H_cal_4ta_posAdcPulseInt, &b_H_cal_4ta_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseIntRaw", &Ndata_H_cal_4ta_posAdcPulseIntRaw, &b_Ndata_H_cal_4ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseIntRaw", H_cal_4ta_posAdcPulseIntRaw, &b_H_cal_4ta_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseTime", &Ndata_H_cal_4ta_posAdcPulseTime, &b_Ndata_H_cal_4ta_posAdcPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseTime", H_cal_4ta_posAdcPulseTime, &b_H_cal_4ta_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcPulseTimeRaw", &Ndata_H_cal_4ta_posAdcPulseTimeRaw, &b_Ndata_H_cal_4ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcPulseTimeRaw", H_cal_4ta_posAdcPulseTimeRaw, &b_H_cal_4ta_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPed", &Ndata_H_cal_4ta_posAdcSampPed, &b_Ndata_H_cal_4ta_posAdcSampPed);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPed", H_cal_4ta_posAdcSampPed, &b_H_cal_4ta_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPedRaw", &Ndata_H_cal_4ta_posAdcSampPedRaw, &b_Ndata_H_cal_4ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPedRaw", H_cal_4ta_posAdcSampPedRaw, &b_H_cal_4ta_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseAmp", &Ndata_H_cal_4ta_posAdcSampPulseAmp, &b_Ndata_H_cal_4ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseAmp", H_cal_4ta_posAdcSampPulseAmp, &b_H_cal_4ta_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseAmpRaw", &Ndata_H_cal_4ta_posAdcSampPulseAmpRaw, &b_Ndata_H_cal_4ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseAmpRaw", H_cal_4ta_posAdcSampPulseAmpRaw, &b_H_cal_4ta_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseInt", &Ndata_H_cal_4ta_posAdcSampPulseInt, &b_Ndata_H_cal_4ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseInt", H_cal_4ta_posAdcSampPulseInt, &b_H_cal_4ta_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseIntRaw", &Ndata_H_cal_4ta_posAdcSampPulseIntRaw, &b_Ndata_H_cal_4ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseIntRaw", H_cal_4ta_posAdcSampPulseIntRaw, &b_H_cal_4ta_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseTime", &Ndata_H_cal_4ta_posAdcSampPulseTime, &b_Ndata_H_cal_4ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseTime", H_cal_4ta_posAdcSampPulseTime, &b_H_cal_4ta_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posAdcSampPulseTimeRaw", &Ndata_H_cal_4ta_posAdcSampPulseTimeRaw, &b_Ndata_H_cal_4ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cal.4ta.posAdcSampPulseTimeRaw", H_cal_4ta_posAdcSampPulseTimeRaw, &b_H_cal_4ta_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cer.adcCounter", &Ndata_H_cer_adcCounter, &b_Ndata_H_cer_adcCounter);
   fChain->SetBranchAddress("H.cer.adcCounter", H_cer_adcCounter, &b_H_cer_adcCounter);
   fChain->SetBranchAddress("Ndata.H.cer.adcErrorFlag", &Ndata_H_cer_adcErrorFlag, &b_Ndata_H_cer_adcErrorFlag);
   fChain->SetBranchAddress("H.cer.adcErrorFlag", H_cer_adcErrorFlag, &b_H_cer_adcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.cer.adcPed", &Ndata_H_cer_adcPed, &b_Ndata_H_cer_adcPed);
   fChain->SetBranchAddress("H.cer.adcPed", H_cer_adcPed, &b_H_cer_adcPed);
   fChain->SetBranchAddress("Ndata.H.cer.adcPedRaw", &Ndata_H_cer_adcPedRaw, &b_Ndata_H_cer_adcPedRaw);
   fChain->SetBranchAddress("H.cer.adcPedRaw", H_cer_adcPedRaw, &b_H_cer_adcPedRaw);
   fChain->SetBranchAddress("Ndata.H.cer.adcPulseAmp", &Ndata_H_cer_adcPulseAmp, &b_Ndata_H_cer_adcPulseAmp);
   fChain->SetBranchAddress("H.cer.adcPulseAmp", H_cer_adcPulseAmp, &b_H_cer_adcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cer.adcPulseAmpRaw", &Ndata_H_cer_adcPulseAmpRaw, &b_Ndata_H_cer_adcPulseAmpRaw);
   fChain->SetBranchAddress("H.cer.adcPulseAmpRaw", H_cer_adcPulseAmpRaw, &b_H_cer_adcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cer.adcPulseInt", &Ndata_H_cer_adcPulseInt, &b_Ndata_H_cer_adcPulseInt);
   fChain->SetBranchAddress("H.cer.adcPulseInt", H_cer_adcPulseInt, &b_H_cer_adcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cer.adcPulseIntRaw", &Ndata_H_cer_adcPulseIntRaw, &b_Ndata_H_cer_adcPulseIntRaw);
   fChain->SetBranchAddress("H.cer.adcPulseIntRaw", H_cer_adcPulseIntRaw, &b_H_cer_adcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cer.adcPulseTime", &Ndata_H_cer_adcPulseTime, &b_Ndata_H_cer_adcPulseTime);
   fChain->SetBranchAddress("H.cer.adcPulseTime", H_cer_adcPulseTime, &b_H_cer_adcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cer.adcPulseTimeRaw", &Ndata_H_cer_adcPulseTimeRaw, &b_Ndata_H_cer_adcPulseTimeRaw);
   fChain->SetBranchAddress("H.cer.adcPulseTimeRaw", H_cer_adcPulseTimeRaw, &b_H_cer_adcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cer.adcSampPed", &Ndata_H_cer_adcSampPed, &b_Ndata_H_cer_adcSampPed);
   fChain->SetBranchAddress("H.cer.adcSampPed", H_cer_adcSampPed, &b_H_cer_adcSampPed);
   fChain->SetBranchAddress("Ndata.H.cer.adcSampPedRaw", &Ndata_H_cer_adcSampPedRaw, &b_Ndata_H_cer_adcSampPedRaw);
   fChain->SetBranchAddress("H.cer.adcSampPedRaw", H_cer_adcSampPedRaw, &b_H_cer_adcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.cer.adcSampPulseAmp", &Ndata_H_cer_adcSampPulseAmp, &b_Ndata_H_cer_adcSampPulseAmp);
   fChain->SetBranchAddress("H.cer.adcSampPulseAmp", H_cer_adcSampPulseAmp, &b_H_cer_adcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cer.adcSampPulseAmpRaw", &Ndata_H_cer_adcSampPulseAmpRaw, &b_Ndata_H_cer_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.cer.adcSampPulseAmpRaw", H_cer_adcSampPulseAmpRaw, &b_H_cer_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.cer.adcSampPulseInt", &Ndata_H_cer_adcSampPulseInt, &b_Ndata_H_cer_adcSampPulseInt);
   fChain->SetBranchAddress("H.cer.adcSampPulseInt", H_cer_adcSampPulseInt, &b_H_cer_adcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.cer.adcSampPulseIntRaw", &Ndata_H_cer_adcSampPulseIntRaw, &b_Ndata_H_cer_adcSampPulseIntRaw);
   fChain->SetBranchAddress("H.cer.adcSampPulseIntRaw", H_cer_adcSampPulseIntRaw, &b_H_cer_adcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cer.adcSampPulseTime", &Ndata_H_cer_adcSampPulseTime, &b_Ndata_H_cer_adcSampPulseTime);
   fChain->SetBranchAddress("H.cer.adcSampPulseTime", H_cer_adcSampPulseTime, &b_H_cer_adcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.cer.adcSampPulseTimeRaw", &Ndata_H_cer_adcSampPulseTimeRaw, &b_Ndata_H_cer_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.cer.adcSampPulseTimeRaw", H_cer_adcSampPulseTimeRaw, &b_H_cer_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.cer.adcSampleCounter", &Ndata_H_cer_adcSampleCounter, &b_Ndata_H_cer_adcSampleCounter);
   fChain->SetBranchAddress("H.cer.adcSampleCounter", H_cer_adcSampleCounter, &b_H_cer_adcSampleCounter);
   fChain->SetBranchAddress("Ndata.H.cer.goodAdcHitUsed", &Ndata_H_cer_goodAdcHitUsed, &b_Ndata_H_cer_goodAdcHitUsed);
   fChain->SetBranchAddress("H.cer.goodAdcHitUsed", H_cer_goodAdcHitUsed, &b_H_cer_goodAdcHitUsed);
   fChain->SetBranchAddress("Ndata.H.cer.goodAdcMult", &Ndata_H_cer_goodAdcMult, &b_Ndata_H_cer_goodAdcMult);
   fChain->SetBranchAddress("H.cer.goodAdcMult", H_cer_goodAdcMult, &b_H_cer_goodAdcMult);
   fChain->SetBranchAddress("Ndata.H.cer.goodAdcPed", &Ndata_H_cer_goodAdcPed, &b_Ndata_H_cer_goodAdcPed);
   fChain->SetBranchAddress("H.cer.goodAdcPed", H_cer_goodAdcPed, &b_H_cer_goodAdcPed);
   fChain->SetBranchAddress("Ndata.H.cer.goodAdcPulseAmp", &Ndata_H_cer_goodAdcPulseAmp, &b_Ndata_H_cer_goodAdcPulseAmp);
   fChain->SetBranchAddress("H.cer.goodAdcPulseAmp", H_cer_goodAdcPulseAmp, &b_H_cer_goodAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.cer.goodAdcPulseInt", &Ndata_H_cer_goodAdcPulseInt, &b_Ndata_H_cer_goodAdcPulseInt);
   fChain->SetBranchAddress("H.cer.goodAdcPulseInt", H_cer_goodAdcPulseInt, &b_H_cer_goodAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.cer.goodAdcPulseIntRaw", &Ndata_H_cer_goodAdcPulseIntRaw, &b_Ndata_H_cer_goodAdcPulseIntRaw);
   fChain->SetBranchAddress("H.cer.goodAdcPulseIntRaw", H_cer_goodAdcPulseIntRaw, &b_H_cer_goodAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.cer.goodAdcPulseTime", &Ndata_H_cer_goodAdcPulseTime, &b_Ndata_H_cer_goodAdcPulseTime);
   fChain->SetBranchAddress("H.cer.goodAdcPulseTime", H_cer_goodAdcPulseTime, &b_H_cer_goodAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.cer.goodAdcTdcDiffTime", &Ndata_H_cer_goodAdcTdcDiffTime, &b_Ndata_H_cer_goodAdcTdcDiffTime);
   fChain->SetBranchAddress("H.cer.goodAdcTdcDiffTime", H_cer_goodAdcTdcDiffTime, &b_H_cer_goodAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.cer.npe", &Ndata_H_cer_npe, &b_Ndata_H_cer_npe);
   fChain->SetBranchAddress("H.cer.npe", H_cer_npe, &b_H_cer_npe);
   fChain->SetBranchAddress("Ndata.H.cer.numAdcHits", &Ndata_H_cer_numAdcHits, &b_Ndata_H_cer_numAdcHits);
   fChain->SetBranchAddress("H.cer.numAdcHits", H_cer_numAdcHits, &b_H_cer_numAdcHits);
   fChain->SetBranchAddress("Ndata.H.cer.numGoodAdcHits", &Ndata_H_cer_numGoodAdcHits, &b_Ndata_H_cer_numGoodAdcHits);
   fChain->SetBranchAddress("H.cer.numGoodAdcHits", H_cer_numGoodAdcHits, &b_H_cer_numGoodAdcHits);
   fChain->SetBranchAddress("Ndata.H.cer.numTracksFired", &Ndata_H_cer_numTracksFired, &b_Ndata_H_cer_numTracksFired);
   fChain->SetBranchAddress("H.cer.numTracksFired", H_cer_numTracksFired, &b_H_cer_numTracksFired);
   fChain->SetBranchAddress("Ndata.H.cer.numTracksMatched", &Ndata_H_cer_numTracksMatched, &b_Ndata_H_cer_numTracksMatched);
   fChain->SetBranchAddress("H.cer.numTracksMatched", H_cer_numTracksMatched, &b_H_cer_numTracksMatched);
   fChain->SetBranchAddress("Ndata.H.dc.1u1.dist", &Ndata_H_dc_1u1_dist, &b_Ndata_H_dc_1u1_dist);
   fChain->SetBranchAddress("H.dc.1u1.dist", H_dc_1u1_dist, &b_H_dc_1u1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1u1.pos", &Ndata_H_dc_1u1_pos, &b_Ndata_H_dc_1u1_pos);
   fChain->SetBranchAddress("H.dc.1u1.pos", H_dc_1u1_pos, &b_H_dc_1u1_pos);
   fChain->SetBranchAddress("Ndata.H.dc.1u1.raw.wirenum", &Ndata_H_dc_1u1_raw_wirenum, &b_Ndata_H_dc_1u1_raw_wirenum);
   fChain->SetBranchAddress("H.dc.1u1.raw.wirenum", H_dc_1u1_raw_wirenum, &b_H_dc_1u1_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.1u1.rawnorefcorrtdc", &Ndata_H_dc_1u1_rawnorefcorrtdc, &b_Ndata_H_dc_1u1_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.1u1.rawnorefcorrtdc", H_dc_1u1_rawnorefcorrtdc, &b_H_dc_1u1_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1u1.rawtdc", &Ndata_H_dc_1u1_rawtdc, &b_Ndata_H_dc_1u1_rawtdc);
   fChain->SetBranchAddress("H.dc.1u1.rawtdc", H_dc_1u1_rawtdc, &b_H_dc_1u1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1u1.time", &Ndata_H_dc_1u1_time, &b_Ndata_H_dc_1u1_time);
   fChain->SetBranchAddress("H.dc.1u1.time", H_dc_1u1_time, &b_H_dc_1u1_time);
   fChain->SetBranchAddress("Ndata.H.dc.1u1.wirenum", &Ndata_H_dc_1u1_wirenum, &b_Ndata_H_dc_1u1_wirenum);
   fChain->SetBranchAddress("H.dc.1u1.wirenum", H_dc_1u1_wirenum, &b_H_dc_1u1_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.1u2.dist", &Ndata_H_dc_1u2_dist, &b_Ndata_H_dc_1u2_dist);
   fChain->SetBranchAddress("H.dc.1u2.dist", H_dc_1u2_dist, &b_H_dc_1u2_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1u2.pos", &Ndata_H_dc_1u2_pos, &b_Ndata_H_dc_1u2_pos);
   fChain->SetBranchAddress("H.dc.1u2.pos", H_dc_1u2_pos, &b_H_dc_1u2_pos);
   fChain->SetBranchAddress("Ndata.H.dc.1u2.raw.wirenum", &Ndata_H_dc_1u2_raw_wirenum, &b_Ndata_H_dc_1u2_raw_wirenum);
   fChain->SetBranchAddress("H.dc.1u2.raw.wirenum", H_dc_1u2_raw_wirenum, &b_H_dc_1u2_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.1u2.rawnorefcorrtdc", &Ndata_H_dc_1u2_rawnorefcorrtdc, &b_Ndata_H_dc_1u2_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.1u2.rawnorefcorrtdc", H_dc_1u2_rawnorefcorrtdc, &b_H_dc_1u2_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1u2.rawtdc", &Ndata_H_dc_1u2_rawtdc, &b_Ndata_H_dc_1u2_rawtdc);
   fChain->SetBranchAddress("H.dc.1u2.rawtdc", H_dc_1u2_rawtdc, &b_H_dc_1u2_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1u2.time", &Ndata_H_dc_1u2_time, &b_Ndata_H_dc_1u2_time);
   fChain->SetBranchAddress("H.dc.1u2.time", H_dc_1u2_time, &b_H_dc_1u2_time);
   fChain->SetBranchAddress("Ndata.H.dc.1u2.wirenum", &Ndata_H_dc_1u2_wirenum, &b_Ndata_H_dc_1u2_wirenum);
   fChain->SetBranchAddress("H.dc.1u2.wirenum", H_dc_1u2_wirenum, &b_H_dc_1u2_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.1v1.dist", &Ndata_H_dc_1v1_dist, &b_Ndata_H_dc_1v1_dist);
   fChain->SetBranchAddress("H.dc.1v1.dist", H_dc_1v1_dist, &b_H_dc_1v1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1v1.pos", &Ndata_H_dc_1v1_pos, &b_Ndata_H_dc_1v1_pos);
   fChain->SetBranchAddress("H.dc.1v1.pos", H_dc_1v1_pos, &b_H_dc_1v1_pos);
   fChain->SetBranchAddress("Ndata.H.dc.1v1.raw.wirenum", &Ndata_H_dc_1v1_raw_wirenum, &b_Ndata_H_dc_1v1_raw_wirenum);
   fChain->SetBranchAddress("H.dc.1v1.raw.wirenum", H_dc_1v1_raw_wirenum, &b_H_dc_1v1_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.1v1.rawnorefcorrtdc", &Ndata_H_dc_1v1_rawnorefcorrtdc, &b_Ndata_H_dc_1v1_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.1v1.rawnorefcorrtdc", H_dc_1v1_rawnorefcorrtdc, &b_H_dc_1v1_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1v1.rawtdc", &Ndata_H_dc_1v1_rawtdc, &b_Ndata_H_dc_1v1_rawtdc);
   fChain->SetBranchAddress("H.dc.1v1.rawtdc", H_dc_1v1_rawtdc, &b_H_dc_1v1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1v1.time", &Ndata_H_dc_1v1_time, &b_Ndata_H_dc_1v1_time);
   fChain->SetBranchAddress("H.dc.1v1.time", H_dc_1v1_time, &b_H_dc_1v1_time);
   fChain->SetBranchAddress("Ndata.H.dc.1v1.wirenum", &Ndata_H_dc_1v1_wirenum, &b_Ndata_H_dc_1v1_wirenum);
   fChain->SetBranchAddress("H.dc.1v1.wirenum", H_dc_1v1_wirenum, &b_H_dc_1v1_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.1v2.dist", &Ndata_H_dc_1v2_dist, &b_Ndata_H_dc_1v2_dist);
   fChain->SetBranchAddress("H.dc.1v2.dist", H_dc_1v2_dist, &b_H_dc_1v2_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1v2.pos", &Ndata_H_dc_1v2_pos, &b_Ndata_H_dc_1v2_pos);
   fChain->SetBranchAddress("H.dc.1v2.pos", H_dc_1v2_pos, &b_H_dc_1v2_pos);
   fChain->SetBranchAddress("Ndata.H.dc.1v2.raw.wirenum", &Ndata_H_dc_1v2_raw_wirenum, &b_Ndata_H_dc_1v2_raw_wirenum);
   fChain->SetBranchAddress("H.dc.1v2.raw.wirenum", H_dc_1v2_raw_wirenum, &b_H_dc_1v2_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.1v2.rawnorefcorrtdc", &Ndata_H_dc_1v2_rawnorefcorrtdc, &b_Ndata_H_dc_1v2_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.1v2.rawnorefcorrtdc", H_dc_1v2_rawnorefcorrtdc, &b_H_dc_1v2_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1v2.rawtdc", &Ndata_H_dc_1v2_rawtdc, &b_Ndata_H_dc_1v2_rawtdc);
   fChain->SetBranchAddress("H.dc.1v2.rawtdc", H_dc_1v2_rawtdc, &b_H_dc_1v2_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1v2.time", &Ndata_H_dc_1v2_time, &b_Ndata_H_dc_1v2_time);
   fChain->SetBranchAddress("H.dc.1v2.time", H_dc_1v2_time, &b_H_dc_1v2_time);
   fChain->SetBranchAddress("Ndata.H.dc.1v2.wirenum", &Ndata_H_dc_1v2_wirenum, &b_Ndata_H_dc_1v2_wirenum);
   fChain->SetBranchAddress("H.dc.1v2.wirenum", H_dc_1v2_wirenum, &b_H_dc_1v2_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.1x1.dist", &Ndata_H_dc_1x1_dist, &b_Ndata_H_dc_1x1_dist);
   fChain->SetBranchAddress("H.dc.1x1.dist", H_dc_1x1_dist, &b_H_dc_1x1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1x1.pos", &Ndata_H_dc_1x1_pos, &b_Ndata_H_dc_1x1_pos);
   fChain->SetBranchAddress("H.dc.1x1.pos", H_dc_1x1_pos, &b_H_dc_1x1_pos);
   fChain->SetBranchAddress("Ndata.H.dc.1x1.raw.wirenum", &Ndata_H_dc_1x1_raw_wirenum, &b_Ndata_H_dc_1x1_raw_wirenum);
   fChain->SetBranchAddress("H.dc.1x1.raw.wirenum", H_dc_1x1_raw_wirenum, &b_H_dc_1x1_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.1x1.rawnorefcorrtdc", &Ndata_H_dc_1x1_rawnorefcorrtdc, &b_Ndata_H_dc_1x1_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.1x1.rawnorefcorrtdc", H_dc_1x1_rawnorefcorrtdc, &b_H_dc_1x1_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1x1.rawtdc", &Ndata_H_dc_1x1_rawtdc, &b_Ndata_H_dc_1x1_rawtdc);
   fChain->SetBranchAddress("H.dc.1x1.rawtdc", H_dc_1x1_rawtdc, &b_H_dc_1x1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1x1.time", &Ndata_H_dc_1x1_time, &b_Ndata_H_dc_1x1_time);
   fChain->SetBranchAddress("H.dc.1x1.time", H_dc_1x1_time, &b_H_dc_1x1_time);
   fChain->SetBranchAddress("Ndata.H.dc.1x1.wirenum", &Ndata_H_dc_1x1_wirenum, &b_Ndata_H_dc_1x1_wirenum);
   fChain->SetBranchAddress("H.dc.1x1.wirenum", H_dc_1x1_wirenum, &b_H_dc_1x1_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.1x2.dist", &Ndata_H_dc_1x2_dist, &b_Ndata_H_dc_1x2_dist);
   fChain->SetBranchAddress("H.dc.1x2.dist", H_dc_1x2_dist, &b_H_dc_1x2_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1x2.pos", &Ndata_H_dc_1x2_pos, &b_Ndata_H_dc_1x2_pos);
   fChain->SetBranchAddress("H.dc.1x2.pos", H_dc_1x2_pos, &b_H_dc_1x2_pos);
   fChain->SetBranchAddress("Ndata.H.dc.1x2.raw.wirenum", &Ndata_H_dc_1x2_raw_wirenum, &b_Ndata_H_dc_1x2_raw_wirenum);
   fChain->SetBranchAddress("H.dc.1x2.raw.wirenum", H_dc_1x2_raw_wirenum, &b_H_dc_1x2_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.1x2.rawnorefcorrtdc", &Ndata_H_dc_1x2_rawnorefcorrtdc, &b_Ndata_H_dc_1x2_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.1x2.rawnorefcorrtdc", H_dc_1x2_rawnorefcorrtdc, &b_H_dc_1x2_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1x2.rawtdc", &Ndata_H_dc_1x2_rawtdc, &b_Ndata_H_dc_1x2_rawtdc);
   fChain->SetBranchAddress("H.dc.1x2.rawtdc", H_dc_1x2_rawtdc, &b_H_dc_1x2_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1x2.time", &Ndata_H_dc_1x2_time, &b_Ndata_H_dc_1x2_time);
   fChain->SetBranchAddress("H.dc.1x2.time", H_dc_1x2_time, &b_H_dc_1x2_time);
   fChain->SetBranchAddress("Ndata.H.dc.1x2.wirenum", &Ndata_H_dc_1x2_wirenum, &b_Ndata_H_dc_1x2_wirenum);
   fChain->SetBranchAddress("H.dc.1x2.wirenum", H_dc_1x2_wirenum, &b_H_dc_1x2_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2u1.dist", &Ndata_H_dc_2u1_dist, &b_Ndata_H_dc_2u1_dist);
   fChain->SetBranchAddress("H.dc.2u1.dist", H_dc_2u1_dist, &b_H_dc_2u1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2u1.pos", &Ndata_H_dc_2u1_pos, &b_Ndata_H_dc_2u1_pos);
   fChain->SetBranchAddress("H.dc.2u1.pos", H_dc_2u1_pos, &b_H_dc_2u1_pos);
   fChain->SetBranchAddress("Ndata.H.dc.2u1.raw.wirenum", &Ndata_H_dc_2u1_raw_wirenum, &b_Ndata_H_dc_2u1_raw_wirenum);
   fChain->SetBranchAddress("H.dc.2u1.raw.wirenum", H_dc_2u1_raw_wirenum, &b_H_dc_2u1_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2u1.rawnorefcorrtdc", &Ndata_H_dc_2u1_rawnorefcorrtdc, &b_Ndata_H_dc_2u1_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.2u1.rawnorefcorrtdc", H_dc_2u1_rawnorefcorrtdc, &b_H_dc_2u1_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2u1.rawtdc", &Ndata_H_dc_2u1_rawtdc, &b_Ndata_H_dc_2u1_rawtdc);
   fChain->SetBranchAddress("H.dc.2u1.rawtdc", H_dc_2u1_rawtdc, &b_H_dc_2u1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2u1.time", &Ndata_H_dc_2u1_time, &b_Ndata_H_dc_2u1_time);
   fChain->SetBranchAddress("H.dc.2u1.time", H_dc_2u1_time, &b_H_dc_2u1_time);
   fChain->SetBranchAddress("Ndata.H.dc.2u1.wirenum", &Ndata_H_dc_2u1_wirenum, &b_Ndata_H_dc_2u1_wirenum);
   fChain->SetBranchAddress("H.dc.2u1.wirenum", H_dc_2u1_wirenum, &b_H_dc_2u1_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2u2.dist", &Ndata_H_dc_2u2_dist, &b_Ndata_H_dc_2u2_dist);
   fChain->SetBranchAddress("H.dc.2u2.dist", H_dc_2u2_dist, &b_H_dc_2u2_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2u2.pos", &Ndata_H_dc_2u2_pos, &b_Ndata_H_dc_2u2_pos);
   fChain->SetBranchAddress("H.dc.2u2.pos", H_dc_2u2_pos, &b_H_dc_2u2_pos);
   fChain->SetBranchAddress("Ndata.H.dc.2u2.raw.wirenum", &Ndata_H_dc_2u2_raw_wirenum, &b_Ndata_H_dc_2u2_raw_wirenum);
   fChain->SetBranchAddress("H.dc.2u2.raw.wirenum", H_dc_2u2_raw_wirenum, &b_H_dc_2u2_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2u2.rawnorefcorrtdc", &Ndata_H_dc_2u2_rawnorefcorrtdc, &b_Ndata_H_dc_2u2_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.2u2.rawnorefcorrtdc", H_dc_2u2_rawnorefcorrtdc, &b_H_dc_2u2_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2u2.rawtdc", &Ndata_H_dc_2u2_rawtdc, &b_Ndata_H_dc_2u2_rawtdc);
   fChain->SetBranchAddress("H.dc.2u2.rawtdc", H_dc_2u2_rawtdc, &b_H_dc_2u2_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2u2.time", &Ndata_H_dc_2u2_time, &b_Ndata_H_dc_2u2_time);
   fChain->SetBranchAddress("H.dc.2u2.time", H_dc_2u2_time, &b_H_dc_2u2_time);
   fChain->SetBranchAddress("Ndata.H.dc.2u2.wirenum", &Ndata_H_dc_2u2_wirenum, &b_Ndata_H_dc_2u2_wirenum);
   fChain->SetBranchAddress("H.dc.2u2.wirenum", H_dc_2u2_wirenum, &b_H_dc_2u2_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2v1.dist", &Ndata_H_dc_2v1_dist, &b_Ndata_H_dc_2v1_dist);
   fChain->SetBranchAddress("H.dc.2v1.dist", H_dc_2v1_dist, &b_H_dc_2v1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2v1.pos", &Ndata_H_dc_2v1_pos, &b_Ndata_H_dc_2v1_pos);
   fChain->SetBranchAddress("H.dc.2v1.pos", H_dc_2v1_pos, &b_H_dc_2v1_pos);
   fChain->SetBranchAddress("Ndata.H.dc.2v1.raw.wirenum", &Ndata_H_dc_2v1_raw_wirenum, &b_Ndata_H_dc_2v1_raw_wirenum);
   fChain->SetBranchAddress("H.dc.2v1.raw.wirenum", H_dc_2v1_raw_wirenum, &b_H_dc_2v1_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2v1.rawnorefcorrtdc", &Ndata_H_dc_2v1_rawnorefcorrtdc, &b_Ndata_H_dc_2v1_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.2v1.rawnorefcorrtdc", H_dc_2v1_rawnorefcorrtdc, &b_H_dc_2v1_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2v1.rawtdc", &Ndata_H_dc_2v1_rawtdc, &b_Ndata_H_dc_2v1_rawtdc);
   fChain->SetBranchAddress("H.dc.2v1.rawtdc", H_dc_2v1_rawtdc, &b_H_dc_2v1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2v1.time", &Ndata_H_dc_2v1_time, &b_Ndata_H_dc_2v1_time);
   fChain->SetBranchAddress("H.dc.2v1.time", H_dc_2v1_time, &b_H_dc_2v1_time);
   fChain->SetBranchAddress("Ndata.H.dc.2v1.wirenum", &Ndata_H_dc_2v1_wirenum, &b_Ndata_H_dc_2v1_wirenum);
   fChain->SetBranchAddress("H.dc.2v1.wirenum", H_dc_2v1_wirenum, &b_H_dc_2v1_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2v2.dist", &Ndata_H_dc_2v2_dist, &b_Ndata_H_dc_2v2_dist);
   fChain->SetBranchAddress("H.dc.2v2.dist", H_dc_2v2_dist, &b_H_dc_2v2_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2v2.pos", &Ndata_H_dc_2v2_pos, &b_Ndata_H_dc_2v2_pos);
   fChain->SetBranchAddress("H.dc.2v2.pos", H_dc_2v2_pos, &b_H_dc_2v2_pos);
   fChain->SetBranchAddress("Ndata.H.dc.2v2.raw.wirenum", &Ndata_H_dc_2v2_raw_wirenum, &b_Ndata_H_dc_2v2_raw_wirenum);
   fChain->SetBranchAddress("H.dc.2v2.raw.wirenum", H_dc_2v2_raw_wirenum, &b_H_dc_2v2_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2v2.rawnorefcorrtdc", &Ndata_H_dc_2v2_rawnorefcorrtdc, &b_Ndata_H_dc_2v2_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.2v2.rawnorefcorrtdc", H_dc_2v2_rawnorefcorrtdc, &b_H_dc_2v2_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2v2.rawtdc", &Ndata_H_dc_2v2_rawtdc, &b_Ndata_H_dc_2v2_rawtdc);
   fChain->SetBranchAddress("H.dc.2v2.rawtdc", H_dc_2v2_rawtdc, &b_H_dc_2v2_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2v2.time", &Ndata_H_dc_2v2_time, &b_Ndata_H_dc_2v2_time);
   fChain->SetBranchAddress("H.dc.2v2.time", H_dc_2v2_time, &b_H_dc_2v2_time);
   fChain->SetBranchAddress("Ndata.H.dc.2v2.wirenum", &Ndata_H_dc_2v2_wirenum, &b_Ndata_H_dc_2v2_wirenum);
   fChain->SetBranchAddress("H.dc.2v2.wirenum", H_dc_2v2_wirenum, &b_H_dc_2v2_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2x1.dist", &Ndata_H_dc_2x1_dist, &b_Ndata_H_dc_2x1_dist);
   fChain->SetBranchAddress("H.dc.2x1.dist", H_dc_2x1_dist, &b_H_dc_2x1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2x1.pos", &Ndata_H_dc_2x1_pos, &b_Ndata_H_dc_2x1_pos);
   fChain->SetBranchAddress("H.dc.2x1.pos", H_dc_2x1_pos, &b_H_dc_2x1_pos);
   fChain->SetBranchAddress("Ndata.H.dc.2x1.raw.wirenum", &Ndata_H_dc_2x1_raw_wirenum, &b_Ndata_H_dc_2x1_raw_wirenum);
   fChain->SetBranchAddress("H.dc.2x1.raw.wirenum", H_dc_2x1_raw_wirenum, &b_H_dc_2x1_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2x1.rawnorefcorrtdc", &Ndata_H_dc_2x1_rawnorefcorrtdc, &b_Ndata_H_dc_2x1_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.2x1.rawnorefcorrtdc", H_dc_2x1_rawnorefcorrtdc, &b_H_dc_2x1_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2x1.rawtdc", &Ndata_H_dc_2x1_rawtdc, &b_Ndata_H_dc_2x1_rawtdc);
   fChain->SetBranchAddress("H.dc.2x1.rawtdc", H_dc_2x1_rawtdc, &b_H_dc_2x1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2x1.time", &Ndata_H_dc_2x1_time, &b_Ndata_H_dc_2x1_time);
   fChain->SetBranchAddress("H.dc.2x1.time", H_dc_2x1_time, &b_H_dc_2x1_time);
   fChain->SetBranchAddress("Ndata.H.dc.2x1.wirenum", &Ndata_H_dc_2x1_wirenum, &b_Ndata_H_dc_2x1_wirenum);
   fChain->SetBranchAddress("H.dc.2x1.wirenum", H_dc_2x1_wirenum, &b_H_dc_2x1_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2x2.dist", &Ndata_H_dc_2x2_dist, &b_Ndata_H_dc_2x2_dist);
   fChain->SetBranchAddress("H.dc.2x2.dist", H_dc_2x2_dist, &b_H_dc_2x2_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2x2.pos", &Ndata_H_dc_2x2_pos, &b_Ndata_H_dc_2x2_pos);
   fChain->SetBranchAddress("H.dc.2x2.pos", H_dc_2x2_pos, &b_H_dc_2x2_pos);
   fChain->SetBranchAddress("Ndata.H.dc.2x2.raw.wirenum", &Ndata_H_dc_2x2_raw_wirenum, &b_Ndata_H_dc_2x2_raw_wirenum);
   fChain->SetBranchAddress("H.dc.2x2.raw.wirenum", H_dc_2x2_raw_wirenum, &b_H_dc_2x2_raw_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.2x2.rawnorefcorrtdc", &Ndata_H_dc_2x2_rawnorefcorrtdc, &b_Ndata_H_dc_2x2_rawnorefcorrtdc);
   fChain->SetBranchAddress("H.dc.2x2.rawnorefcorrtdc", H_dc_2x2_rawnorefcorrtdc, &b_H_dc_2x2_rawnorefcorrtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2x2.rawtdc", &Ndata_H_dc_2x2_rawtdc, &b_Ndata_H_dc_2x2_rawtdc);
   fChain->SetBranchAddress("H.dc.2x2.rawtdc", H_dc_2x2_rawtdc, &b_H_dc_2x2_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2x2.time", &Ndata_H_dc_2x2_time, &b_Ndata_H_dc_2x2_time);
   fChain->SetBranchAddress("H.dc.2x2.time", H_dc_2x2_time, &b_H_dc_2x2_time);
   fChain->SetBranchAddress("Ndata.H.dc.2x2.wirenum", &Ndata_H_dc_2x2_wirenum, &b_Ndata_H_dc_2x2_wirenum);
   fChain->SetBranchAddress("H.dc.2x2.wirenum", H_dc_2x2_wirenum, &b_H_dc_2x2_wirenum);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.UX_posx", &Ndata_H_dc_Ch1_UX_posx, &b_Ndata_H_dc_Ch1_UX_posx);
   fChain->SetBranchAddress("H.dc.Ch1.UX_posx", &H_dc_Ch1_UX_posx, &b_H_dc_Ch1_UX_posx);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.UX_posy", &Ndata_H_dc_Ch1_UX_posy, &b_Ndata_H_dc_Ch1_UX_posy);
   fChain->SetBranchAddress("H.dc.Ch1.UX_posy", &H_dc_Ch1_UX_posy, &b_H_dc_Ch1_UX_posy);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.U_pos", &Ndata_H_dc_Ch1_U_pos, &b_Ndata_H_dc_Ch1_U_pos);
   fChain->SetBranchAddress("H.dc.Ch1.U_pos", &H_dc_Ch1_U_pos, &b_H_dc_Ch1_U_pos);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.VX_posx", &Ndata_H_dc_Ch1_VX_posx, &b_Ndata_H_dc_Ch1_VX_posx);
   fChain->SetBranchAddress("H.dc.Ch1.VX_posx", &H_dc_Ch1_VX_posx, &b_H_dc_Ch1_VX_posx);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.VX_posy", &Ndata_H_dc_Ch1_VX_posy, &b_Ndata_H_dc_Ch1_VX_posy);
   fChain->SetBranchAddress("H.dc.Ch1.VX_posy", &H_dc_Ch1_VX_posy, &b_H_dc_Ch1_VX_posy);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.V_pos", &Ndata_H_dc_Ch1_V_pos, &b_Ndata_H_dc_Ch1_V_pos);
   fChain->SetBranchAddress("H.dc.Ch1.V_pos", &H_dc_Ch1_V_pos, &b_H_dc_Ch1_V_pos);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.X_pos", &Ndata_H_dc_Ch1_X_pos, &b_Ndata_H_dc_Ch1_X_pos);
   fChain->SetBranchAddress("H.dc.Ch1.X_pos", &H_dc_Ch1_X_pos, &b_H_dc_Ch1_X_pos);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.ncombos", &Ndata_H_dc_Ch1_ncombos, &b_Ndata_H_dc_Ch1_ncombos);
   fChain->SetBranchAddress("H.dc.Ch1.ncombos", H_dc_Ch1_ncombos, &b_H_dc_Ch1_ncombos);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.sp_nhits", &Ndata_H_dc_Ch1_sp_nhits, &b_Ndata_H_dc_Ch1_sp_nhits);
   fChain->SetBranchAddress("H.dc.Ch1.sp_nhits", H_dc_Ch1_sp_nhits, &b_H_dc_Ch1_sp_nhits);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.sphit", &Ndata_H_dc_Ch1_sphit, &b_Ndata_H_dc_Ch1_sphit);
   fChain->SetBranchAddress("H.dc.Ch1.sphit", H_dc_Ch1_sphit, &b_H_dc_Ch1_sphit);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.sphit_index", &Ndata_H_dc_Ch1_sphit_index, &b_Ndata_H_dc_Ch1_sphit_index);
   fChain->SetBranchAddress("H.dc.Ch1.sphit_index", H_dc_Ch1_sphit_index, &b_H_dc_Ch1_sphit_index);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.stub_x", &Ndata_H_dc_Ch1_stub_x, &b_Ndata_H_dc_Ch1_stub_x);
   fChain->SetBranchAddress("H.dc.Ch1.stub_x", H_dc_Ch1_stub_x, &b_H_dc_Ch1_stub_x);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.stub_xp", &Ndata_H_dc_Ch1_stub_xp, &b_Ndata_H_dc_Ch1_stub_xp);
   fChain->SetBranchAddress("H.dc.Ch1.stub_xp", H_dc_Ch1_stub_xp, &b_H_dc_Ch1_stub_xp);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.stub_y", &Ndata_H_dc_Ch1_stub_y, &b_Ndata_H_dc_Ch1_stub_y);
   fChain->SetBranchAddress("H.dc.Ch1.stub_y", H_dc_Ch1_stub_y, &b_H_dc_Ch1_stub_y);
   fChain->SetBranchAddress("Ndata.H.dc.Ch1.stub_yp", &Ndata_H_dc_Ch1_stub_yp, &b_Ndata_H_dc_Ch1_stub_yp);
   fChain->SetBranchAddress("H.dc.Ch1.stub_yp", H_dc_Ch1_stub_yp, &b_H_dc_Ch1_stub_yp);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.UX_posx", &Ndata_H_dc_Ch2_UX_posx, &b_Ndata_H_dc_Ch2_UX_posx);
   fChain->SetBranchAddress("H.dc.Ch2.UX_posx", &H_dc_Ch2_UX_posx, &b_H_dc_Ch2_UX_posx);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.UX_posy", &Ndata_H_dc_Ch2_UX_posy, &b_Ndata_H_dc_Ch2_UX_posy);
   fChain->SetBranchAddress("H.dc.Ch2.UX_posy", &H_dc_Ch2_UX_posy, &b_H_dc_Ch2_UX_posy);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.U_pos", &Ndata_H_dc_Ch2_U_pos, &b_Ndata_H_dc_Ch2_U_pos);
   fChain->SetBranchAddress("H.dc.Ch2.U_pos", &H_dc_Ch2_U_pos, &b_H_dc_Ch2_U_pos);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.VX_posx", &Ndata_H_dc_Ch2_VX_posx, &b_Ndata_H_dc_Ch2_VX_posx);
   fChain->SetBranchAddress("H.dc.Ch2.VX_posx", &H_dc_Ch2_VX_posx, &b_H_dc_Ch2_VX_posx);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.VX_posy", &Ndata_H_dc_Ch2_VX_posy, &b_Ndata_H_dc_Ch2_VX_posy);
   fChain->SetBranchAddress("H.dc.Ch2.VX_posy", &H_dc_Ch2_VX_posy, &b_H_dc_Ch2_VX_posy);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.V_pos", &Ndata_H_dc_Ch2_V_pos, &b_Ndata_H_dc_Ch2_V_pos);
   fChain->SetBranchAddress("H.dc.Ch2.V_pos", &H_dc_Ch2_V_pos, &b_H_dc_Ch2_V_pos);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.X_pos", &Ndata_H_dc_Ch2_X_pos, &b_Ndata_H_dc_Ch2_X_pos);
   fChain->SetBranchAddress("H.dc.Ch2.X_pos", &H_dc_Ch2_X_pos, &b_H_dc_Ch2_X_pos);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.ncombos", &Ndata_H_dc_Ch2_ncombos, &b_Ndata_H_dc_Ch2_ncombos);
   fChain->SetBranchAddress("H.dc.Ch2.ncombos", H_dc_Ch2_ncombos, &b_H_dc_Ch2_ncombos);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.sp_nhits", &Ndata_H_dc_Ch2_sp_nhits, &b_Ndata_H_dc_Ch2_sp_nhits);
   fChain->SetBranchAddress("H.dc.Ch2.sp_nhits", H_dc_Ch2_sp_nhits, &b_H_dc_Ch2_sp_nhits);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.sphit", &Ndata_H_dc_Ch2_sphit, &b_Ndata_H_dc_Ch2_sphit);
   fChain->SetBranchAddress("H.dc.Ch2.sphit", H_dc_Ch2_sphit, &b_H_dc_Ch2_sphit);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.sphit_index", &Ndata_H_dc_Ch2_sphit_index, &b_Ndata_H_dc_Ch2_sphit_index);
   fChain->SetBranchAddress("H.dc.Ch2.sphit_index", H_dc_Ch2_sphit_index, &b_H_dc_Ch2_sphit_index);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.stub_x", &Ndata_H_dc_Ch2_stub_x, &b_Ndata_H_dc_Ch2_stub_x);
   fChain->SetBranchAddress("H.dc.Ch2.stub_x", H_dc_Ch2_stub_x, &b_H_dc_Ch2_stub_x);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.stub_xp", &Ndata_H_dc_Ch2_stub_xp, &b_Ndata_H_dc_Ch2_stub_xp);
   fChain->SetBranchAddress("H.dc.Ch2.stub_xp", H_dc_Ch2_stub_xp, &b_H_dc_Ch2_stub_xp);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.stub_y", &Ndata_H_dc_Ch2_stub_y, &b_Ndata_H_dc_Ch2_stub_y);
   fChain->SetBranchAddress("H.dc.Ch2.stub_y", H_dc_Ch2_stub_y, &b_H_dc_Ch2_stub_y);
   fChain->SetBranchAddress("Ndata.H.dc.Ch2.stub_yp", &Ndata_H_dc_Ch2_stub_yp, &b_Ndata_H_dc_Ch2_stub_yp);
   fChain->SetBranchAddress("H.dc.Ch2.stub_yp", H_dc_Ch2_stub_yp, &b_H_dc_Ch2_stub_yp);
   fChain->SetBranchAddress("Ndata.H.dc.dist_best", &Ndata_H_dc_dist_best, &b_Ndata_H_dc_dist_best);
   fChain->SetBranchAddress("H.dc.dist_best", H_dc_dist_best, &b_H_dc_dist_best);
   fChain->SetBranchAddress("Ndata.H.dc.lr_best", &Ndata_H_dc_lr_best, &b_Ndata_H_dc_lr_best);
   fChain->SetBranchAddress("H.dc.lr_best", H_dc_lr_best, &b_H_dc_lr_best);
   fChain->SetBranchAddress("Ndata.H.dc.pos_best", &Ndata_H_dc_pos_best, &b_Ndata_H_dc_pos_best);
   fChain->SetBranchAddress("H.dc.pos_best", H_dc_pos_best, &b_H_dc_pos_best);
   fChain->SetBranchAddress("Ndata.H.dc.residual", &Ndata_H_dc_residual, &b_Ndata_H_dc_residual);
   fChain->SetBranchAddress("H.dc.residual", H_dc_residual, &b_H_dc_residual);
   fChain->SetBranchAddress("Ndata.H.dc.residualExclPlane", &Ndata_H_dc_residualExclPlane, &b_Ndata_H_dc_residualExclPlane);
   fChain->SetBranchAddress("H.dc.residualExclPlane", H_dc_residualExclPlane, &b_H_dc_residualExclPlane);
   fChain->SetBranchAddress("Ndata.H.dc.track_chisq", &Ndata_H_dc_track_chisq, &b_Ndata_H_dc_track_chisq);
   fChain->SetBranchAddress("H.dc.track_chisq", H_dc_track_chisq, &b_H_dc_track_chisq);
   fChain->SetBranchAddress("Ndata.H.dc.track_nhits", &Ndata_H_dc_track_nhits, &b_Ndata_H_dc_track_nhits);
   fChain->SetBranchAddress("H.dc.track_nhits", H_dc_track_nhits, &b_H_dc_track_nhits);
   fChain->SetBranchAddress("Ndata.H.dc.track_nsp", &Ndata_H_dc_track_nsp, &b_Ndata_H_dc_track_nsp);
   fChain->SetBranchAddress("H.dc.track_nsp", H_dc_track_nsp, &b_H_dc_track_nsp);
   fChain->SetBranchAddress("Ndata.H.dc.track_sp1ID", &Ndata_H_dc_track_sp1ID, &b_Ndata_H_dc_track_sp1ID);
   fChain->SetBranchAddress("H.dc.track_sp1ID", H_dc_track_sp1ID, &b_H_dc_track_sp1ID);
   fChain->SetBranchAddress("Ndata.H.dc.track_sp2ID", &Ndata_H_dc_track_sp2ID, &b_Ndata_H_dc_track_sp2ID);
   fChain->SetBranchAddress("H.dc.track_sp2ID", H_dc_track_sp2ID, &b_H_dc_track_sp2ID);
   fChain->SetBranchAddress("Ndata.H.dc.wireHitDid", &Ndata_H_dc_wireHitDid, &b_Ndata_H_dc_wireHitDid);
   fChain->SetBranchAddress("H.dc.wireHitDid", H_dc_wireHitDid, &b_H_dc_wireHitDid);
   fChain->SetBranchAddress("Ndata.H.dc.wireHitShould", &Ndata_H_dc_wireHitShould, &b_Ndata_H_dc_wireHitShould);
   fChain->SetBranchAddress("H.dc.wireHitShould", H_dc_wireHitShould, &b_H_dc_wireHitShould);
   fChain->SetBranchAddress("Ndata.H.dc.x", &Ndata_H_dc_x, &b_Ndata_H_dc_x);
   fChain->SetBranchAddress("H.dc.x", H_dc_x, &b_H_dc_x);
   fChain->SetBranchAddress("Ndata.H.dc.xp", &Ndata_H_dc_xp, &b_Ndata_H_dc_xp);
   fChain->SetBranchAddress("H.dc.xp", H_dc_xp, &b_H_dc_xp);
   fChain->SetBranchAddress("Ndata.H.dc.y", &Ndata_H_dc_y, &b_Ndata_H_dc_y);
   fChain->SetBranchAddress("H.dc.y", H_dc_y, &b_H_dc_y);
   fChain->SetBranchAddress("Ndata.H.dc.yp", &Ndata_H_dc_yp, &b_Ndata_H_dc_yp);
   fChain->SetBranchAddress("H.dc.yp", H_dc_yp, &b_H_dc_yp);
   fChain->SetBranchAddress("Ndata.H.hod.1x.Clus.Flag", &Ndata_H_hod_1x_Clus_Flag, &b_Ndata_H_hod_1x_Clus_Flag);
   fChain->SetBranchAddress("H.hod.1x.Clus.Flag", H_hod_1x_Clus_Flag, &b_H_hod_1x_Clus_Flag);
   fChain->SetBranchAddress("Ndata.H.hod.1x.Clus.Pos", &Ndata_H_hod_1x_Clus_Pos, &b_Ndata_H_hod_1x_Clus_Pos);
   fChain->SetBranchAddress("H.hod.1x.Clus.Pos", H_hod_1x_Clus_Pos, &b_H_hod_1x_Clus_Pos);
   fChain->SetBranchAddress("Ndata.H.hod.1x.Clus.Size", &Ndata_H_hod_1x_Clus_Size, &b_Ndata_H_hod_1x_Clus_Size);
   fChain->SetBranchAddress("H.hod.1x.Clus.Size", H_hod_1x_Clus_Size, &b_H_hod_1x_Clus_Size);
   fChain->SetBranchAddress("Ndata.H.hod.1x.Clus.UsedFlag", &Ndata_H_hod_1x_Clus_UsedFlag, &b_Ndata_H_hod_1x_Clus_UsedFlag);
   fChain->SetBranchAddress("H.hod.1x.Clus.UsedFlag", H_hod_1x_Clus_UsedFlag, &b_H_hod_1x_Clus_UsedFlag);
   fChain->SetBranchAddress("Ndata.H.hod.1x.DiffDisTrackCorr", &Ndata_H_hod_1x_DiffDisTrackCorr, &b_Ndata_H_hod_1x_DiffDisTrackCorr);
   fChain->SetBranchAddress("H.hod.1x.DiffDisTrackCorr", H_hod_1x_DiffDisTrackCorr, &b_H_hod_1x_DiffDisTrackCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodNegAdcHitUsed", &Ndata_H_hod_1x_GoodNegAdcHitUsed, &b_Ndata_H_hod_1x_GoodNegAdcHitUsed);
   fChain->SetBranchAddress("H.hod.1x.GoodNegAdcHitUsed", H_hod_1x_GoodNegAdcHitUsed, &b_H_hod_1x_GoodNegAdcHitUsed);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodNegAdcMult", &Ndata_H_hod_1x_GoodNegAdcMult, &b_Ndata_H_hod_1x_GoodNegAdcMult);
   fChain->SetBranchAddress("H.hod.1x.GoodNegAdcMult", H_hod_1x_GoodNegAdcMult, &b_H_hod_1x_GoodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodNegAdcPed", &Ndata_H_hod_1x_GoodNegAdcPed, &b_Ndata_H_hod_1x_GoodNegAdcPed);
   fChain->SetBranchAddress("H.hod.1x.GoodNegAdcPed", H_hod_1x_GoodNegAdcPed, &b_H_hod_1x_GoodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodNegAdcPulseAmp", &Ndata_H_hod_1x_GoodNegAdcPulseAmp, &b_Ndata_H_hod_1x_GoodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.1x.GoodNegAdcPulseAmp", H_hod_1x_GoodNegAdcPulseAmp, &b_H_hod_1x_GoodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodNegAdcPulseInt", &Ndata_H_hod_1x_GoodNegAdcPulseInt, &b_Ndata_H_hod_1x_GoodNegAdcPulseInt);
   fChain->SetBranchAddress("H.hod.1x.GoodNegAdcPulseInt", H_hod_1x_GoodNegAdcPulseInt, &b_H_hod_1x_GoodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodNegAdcPulseTime", &Ndata_H_hod_1x_GoodNegAdcPulseTime, &b_Ndata_H_hod_1x_GoodNegAdcPulseTime);
   fChain->SetBranchAddress("H.hod.1x.GoodNegAdcPulseTime", H_hod_1x_GoodNegAdcPulseTime, &b_H_hod_1x_GoodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodNegAdcTdcDiffTime", &Ndata_H_hod_1x_GoodNegAdcTdcDiffTime, &b_Ndata_H_hod_1x_GoodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.hod.1x.GoodNegAdcTdcDiffTime", H_hod_1x_GoodNegAdcTdcDiffTime, &b_H_hod_1x_GoodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodNegTdcTimeCorr", &Ndata_H_hod_1x_GoodNegTdcTimeCorr, &b_Ndata_H_hod_1x_GoodNegTdcTimeCorr);
   fChain->SetBranchAddress("H.hod.1x.GoodNegTdcTimeCorr", H_hod_1x_GoodNegTdcTimeCorr, &b_H_hod_1x_GoodNegTdcTimeCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodNegTdcTimeTOFCorr", &Ndata_H_hod_1x_GoodNegTdcTimeTOFCorr, &b_Ndata_H_hod_1x_GoodNegTdcTimeTOFCorr);
   fChain->SetBranchAddress("H.hod.1x.GoodNegTdcTimeTOFCorr", H_hod_1x_GoodNegTdcTimeTOFCorr, &b_H_hod_1x_GoodNegTdcTimeTOFCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodNegTdcTimeUnCorr", &Ndata_H_hod_1x_GoodNegTdcTimeUnCorr, &b_Ndata_H_hod_1x_GoodNegTdcTimeUnCorr);
   fChain->SetBranchAddress("H.hod.1x.GoodNegTdcTimeUnCorr", H_hod_1x_GoodNegTdcTimeUnCorr, &b_H_hod_1x_GoodNegTdcTimeUnCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodNegTdcTimeWalkCorr", &Ndata_H_hod_1x_GoodNegTdcTimeWalkCorr, &b_Ndata_H_hod_1x_GoodNegTdcTimeWalkCorr);
   fChain->SetBranchAddress("H.hod.1x.GoodNegTdcTimeWalkCorr", H_hod_1x_GoodNegTdcTimeWalkCorr, &b_H_hod_1x_GoodNegTdcTimeWalkCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodPosAdcHitUsed", &Ndata_H_hod_1x_GoodPosAdcHitUsed, &b_Ndata_H_hod_1x_GoodPosAdcHitUsed);
   fChain->SetBranchAddress("H.hod.1x.GoodPosAdcHitUsed", H_hod_1x_GoodPosAdcHitUsed, &b_H_hod_1x_GoodPosAdcHitUsed);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodPosAdcMult", &Ndata_H_hod_1x_GoodPosAdcMult, &b_Ndata_H_hod_1x_GoodPosAdcMult);
   fChain->SetBranchAddress("H.hod.1x.GoodPosAdcMult", H_hod_1x_GoodPosAdcMult, &b_H_hod_1x_GoodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodPosAdcPed", &Ndata_H_hod_1x_GoodPosAdcPed, &b_Ndata_H_hod_1x_GoodPosAdcPed);
   fChain->SetBranchAddress("H.hod.1x.GoodPosAdcPed", H_hod_1x_GoodPosAdcPed, &b_H_hod_1x_GoodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodPosAdcPulseAmp", &Ndata_H_hod_1x_GoodPosAdcPulseAmp, &b_Ndata_H_hod_1x_GoodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.1x.GoodPosAdcPulseAmp", H_hod_1x_GoodPosAdcPulseAmp, &b_H_hod_1x_GoodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodPosAdcPulseInt", &Ndata_H_hod_1x_GoodPosAdcPulseInt, &b_Ndata_H_hod_1x_GoodPosAdcPulseInt);
   fChain->SetBranchAddress("H.hod.1x.GoodPosAdcPulseInt", H_hod_1x_GoodPosAdcPulseInt, &b_H_hod_1x_GoodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodPosAdcPulseTime", &Ndata_H_hod_1x_GoodPosAdcPulseTime, &b_Ndata_H_hod_1x_GoodPosAdcPulseTime);
   fChain->SetBranchAddress("H.hod.1x.GoodPosAdcPulseTime", H_hod_1x_GoodPosAdcPulseTime, &b_H_hod_1x_GoodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodPosAdcTdcDiffTime", &Ndata_H_hod_1x_GoodPosAdcTdcDiffTime, &b_Ndata_H_hod_1x_GoodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.hod.1x.GoodPosAdcTdcDiffTime", H_hod_1x_GoodPosAdcTdcDiffTime, &b_H_hod_1x_GoodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodPosTdcTimeCorr", &Ndata_H_hod_1x_GoodPosTdcTimeCorr, &b_Ndata_H_hod_1x_GoodPosTdcTimeCorr);
   fChain->SetBranchAddress("H.hod.1x.GoodPosTdcTimeCorr", H_hod_1x_GoodPosTdcTimeCorr, &b_H_hod_1x_GoodPosTdcTimeCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodPosTdcTimeTOFCorr", &Ndata_H_hod_1x_GoodPosTdcTimeTOFCorr, &b_Ndata_H_hod_1x_GoodPosTdcTimeTOFCorr);
   fChain->SetBranchAddress("H.hod.1x.GoodPosTdcTimeTOFCorr", H_hod_1x_GoodPosTdcTimeTOFCorr, &b_H_hod_1x_GoodPosTdcTimeTOFCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodPosTdcTimeUnCorr", &Ndata_H_hod_1x_GoodPosTdcTimeUnCorr, &b_Ndata_H_hod_1x_GoodPosTdcTimeUnCorr);
   fChain->SetBranchAddress("H.hod.1x.GoodPosTdcTimeUnCorr", H_hod_1x_GoodPosTdcTimeUnCorr, &b_H_hod_1x_GoodPosTdcTimeUnCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1x.GoodPosTdcTimeWalkCorr", &Ndata_H_hod_1x_GoodPosTdcTimeWalkCorr, &b_Ndata_H_hod_1x_GoodPosTdcTimeWalkCorr);
   fChain->SetBranchAddress("H.hod.1x.GoodPosTdcTimeWalkCorr", H_hod_1x_GoodPosTdcTimeWalkCorr, &b_H_hod_1x_GoodPosTdcTimeWalkCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcCounter", &Ndata_H_hod_1x_negAdcCounter, &b_Ndata_H_hod_1x_negAdcCounter);
   fChain->SetBranchAddress("H.hod.1x.negAdcCounter", H_hod_1x_negAdcCounter, &b_H_hod_1x_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcErrorFlag", &Ndata_H_hod_1x_negAdcErrorFlag, &b_Ndata_H_hod_1x_negAdcErrorFlag);
   fChain->SetBranchAddress("H.hod.1x.negAdcErrorFlag", H_hod_1x_negAdcErrorFlag, &b_H_hod_1x_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcPed", &Ndata_H_hod_1x_negAdcPed, &b_Ndata_H_hod_1x_negAdcPed);
   fChain->SetBranchAddress("H.hod.1x.negAdcPed", H_hod_1x_negAdcPed, &b_H_hod_1x_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcPedRaw", &Ndata_H_hod_1x_negAdcPedRaw, &b_Ndata_H_hod_1x_negAdcPedRaw);
   fChain->SetBranchAddress("H.hod.1x.negAdcPedRaw", H_hod_1x_negAdcPedRaw, &b_H_hod_1x_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcPulseAmp", &Ndata_H_hod_1x_negAdcPulseAmp, &b_Ndata_H_hod_1x_negAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.1x.negAdcPulseAmp", H_hod_1x_negAdcPulseAmp, &b_H_hod_1x_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcPulseAmpRaw", &Ndata_H_hod_1x_negAdcPulseAmpRaw, &b_Ndata_H_hod_1x_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.1x.negAdcPulseAmpRaw", H_hod_1x_negAdcPulseAmpRaw, &b_H_hod_1x_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcPulseInt", &Ndata_H_hod_1x_negAdcPulseInt, &b_Ndata_H_hod_1x_negAdcPulseInt);
   fChain->SetBranchAddress("H.hod.1x.negAdcPulseInt", H_hod_1x_negAdcPulseInt, &b_H_hod_1x_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcPulseIntRaw", &Ndata_H_hod_1x_negAdcPulseIntRaw, &b_Ndata_H_hod_1x_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.hod.1x.negAdcPulseIntRaw", H_hod_1x_negAdcPulseIntRaw, &b_H_hod_1x_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcPulseTime", &Ndata_H_hod_1x_negAdcPulseTime, &b_Ndata_H_hod_1x_negAdcPulseTime);
   fChain->SetBranchAddress("H.hod.1x.negAdcPulseTime", H_hod_1x_negAdcPulseTime, &b_H_hod_1x_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcPulseTimeRaw", &Ndata_H_hod_1x_negAdcPulseTimeRaw, &b_Ndata_H_hod_1x_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.1x.negAdcPulseTimeRaw", H_hod_1x_negAdcPulseTimeRaw, &b_H_hod_1x_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcSampPed", &Ndata_H_hod_1x_negAdcSampPed, &b_Ndata_H_hod_1x_negAdcSampPed);
   fChain->SetBranchAddress("H.hod.1x.negAdcSampPed", &H_hod_1x_negAdcSampPed, &b_H_hod_1x_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcSampPedRaw", &Ndata_H_hod_1x_negAdcSampPedRaw, &b_Ndata_H_hod_1x_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.hod.1x.negAdcSampPedRaw", &H_hod_1x_negAdcSampPedRaw, &b_H_hod_1x_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcSampPulseAmp", &Ndata_H_hod_1x_negAdcSampPulseAmp, &b_Ndata_H_hod_1x_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.hod.1x.negAdcSampPulseAmp", &H_hod_1x_negAdcSampPulseAmp, &b_H_hod_1x_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcSampPulseAmpRaw", &Ndata_H_hod_1x_negAdcSampPulseAmpRaw, &b_Ndata_H_hod_1x_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.1x.negAdcSampPulseAmpRaw", &H_hod_1x_negAdcSampPulseAmpRaw, &b_H_hod_1x_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcSampPulseInt", &Ndata_H_hod_1x_negAdcSampPulseInt, &b_Ndata_H_hod_1x_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.hod.1x.negAdcSampPulseInt", &H_hod_1x_negAdcSampPulseInt, &b_H_hod_1x_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcSampPulseIntRaw", &Ndata_H_hod_1x_negAdcSampPulseIntRaw, &b_Ndata_H_hod_1x_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.hod.1x.negAdcSampPulseIntRaw", &H_hod_1x_negAdcSampPulseIntRaw, &b_H_hod_1x_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcSampPulseTime", &Ndata_H_hod_1x_negAdcSampPulseTime, &b_Ndata_H_hod_1x_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.hod.1x.negAdcSampPulseTime", &H_hod_1x_negAdcSampPulseTime, &b_H_hod_1x_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negAdcSampPulseTimeRaw", &Ndata_H_hod_1x_negAdcSampPulseTimeRaw, &b_Ndata_H_hod_1x_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.1x.negAdcSampPulseTimeRaw", &H_hod_1x_negAdcSampPulseTimeRaw, &b_H_hod_1x_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negTdcCounter", &Ndata_H_hod_1x_negTdcCounter, &b_Ndata_H_hod_1x_negTdcCounter);
   fChain->SetBranchAddress("H.hod.1x.negTdcCounter", H_hod_1x_negTdcCounter, &b_H_hod_1x_negTdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negTdcTime", &Ndata_H_hod_1x_negTdcTime, &b_Ndata_H_hod_1x_negTdcTime);
   fChain->SetBranchAddress("H.hod.1x.negTdcTime", H_hod_1x_negTdcTime, &b_H_hod_1x_negTdcTime);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negTdcTimeRaw", &Ndata_H_hod_1x_negTdcTimeRaw, &b_Ndata_H_hod_1x_negTdcTimeRaw);
   fChain->SetBranchAddress("H.hod.1x.negTdcTimeRaw", H_hod_1x_negTdcTimeRaw, &b_H_hod_1x_negTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.numGoodNegAdcHits", &Ndata_H_hod_1x_numGoodNegAdcHits, &b_Ndata_H_hod_1x_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.hod.1x.numGoodNegAdcHits", H_hod_1x_numGoodNegAdcHits, &b_H_hod_1x_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.1x.numGoodNegTdcHits", &Ndata_H_hod_1x_numGoodNegTdcHits, &b_Ndata_H_hod_1x_numGoodNegTdcHits);
   fChain->SetBranchAddress("H.hod.1x.numGoodNegTdcHits", H_hod_1x_numGoodNegTdcHits, &b_H_hod_1x_numGoodNegTdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.1x.numGoodPosAdcHits", &Ndata_H_hod_1x_numGoodPosAdcHits, &b_Ndata_H_hod_1x_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.hod.1x.numGoodPosAdcHits", H_hod_1x_numGoodPosAdcHits, &b_H_hod_1x_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.1x.numGoodPosTdcHits", &Ndata_H_hod_1x_numGoodPosTdcHits, &b_Ndata_H_hod_1x_numGoodPosTdcHits);
   fChain->SetBranchAddress("H.hod.1x.numGoodPosTdcHits", H_hod_1x_numGoodPosTdcHits, &b_H_hod_1x_numGoodPosTdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcCounter", &Ndata_H_hod_1x_posAdcCounter, &b_Ndata_H_hod_1x_posAdcCounter);
   fChain->SetBranchAddress("H.hod.1x.posAdcCounter", H_hod_1x_posAdcCounter, &b_H_hod_1x_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcErrorFlag", &Ndata_H_hod_1x_posAdcErrorFlag, &b_Ndata_H_hod_1x_posAdcErrorFlag);
   fChain->SetBranchAddress("H.hod.1x.posAdcErrorFlag", H_hod_1x_posAdcErrorFlag, &b_H_hod_1x_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcPed", &Ndata_H_hod_1x_posAdcPed, &b_Ndata_H_hod_1x_posAdcPed);
   fChain->SetBranchAddress("H.hod.1x.posAdcPed", H_hod_1x_posAdcPed, &b_H_hod_1x_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcPedRaw", &Ndata_H_hod_1x_posAdcPedRaw, &b_Ndata_H_hod_1x_posAdcPedRaw);
   fChain->SetBranchAddress("H.hod.1x.posAdcPedRaw", H_hod_1x_posAdcPedRaw, &b_H_hod_1x_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcPulseAmp", &Ndata_H_hod_1x_posAdcPulseAmp, &b_Ndata_H_hod_1x_posAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.1x.posAdcPulseAmp", H_hod_1x_posAdcPulseAmp, &b_H_hod_1x_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcPulseAmpRaw", &Ndata_H_hod_1x_posAdcPulseAmpRaw, &b_Ndata_H_hod_1x_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.1x.posAdcPulseAmpRaw", H_hod_1x_posAdcPulseAmpRaw, &b_H_hod_1x_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcPulseInt", &Ndata_H_hod_1x_posAdcPulseInt, &b_Ndata_H_hod_1x_posAdcPulseInt);
   fChain->SetBranchAddress("H.hod.1x.posAdcPulseInt", H_hod_1x_posAdcPulseInt, &b_H_hod_1x_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcPulseIntRaw", &Ndata_H_hod_1x_posAdcPulseIntRaw, &b_Ndata_H_hod_1x_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.hod.1x.posAdcPulseIntRaw", H_hod_1x_posAdcPulseIntRaw, &b_H_hod_1x_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcPulseTime", &Ndata_H_hod_1x_posAdcPulseTime, &b_Ndata_H_hod_1x_posAdcPulseTime);
   fChain->SetBranchAddress("H.hod.1x.posAdcPulseTime", H_hod_1x_posAdcPulseTime, &b_H_hod_1x_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcPulseTimeRaw", &Ndata_H_hod_1x_posAdcPulseTimeRaw, &b_Ndata_H_hod_1x_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.1x.posAdcPulseTimeRaw", H_hod_1x_posAdcPulseTimeRaw, &b_H_hod_1x_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcSampPed", &Ndata_H_hod_1x_posAdcSampPed, &b_Ndata_H_hod_1x_posAdcSampPed);
   fChain->SetBranchAddress("H.hod.1x.posAdcSampPed", &H_hod_1x_posAdcSampPed, &b_H_hod_1x_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcSampPedRaw", &Ndata_H_hod_1x_posAdcSampPedRaw, &b_Ndata_H_hod_1x_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.hod.1x.posAdcSampPedRaw", &H_hod_1x_posAdcSampPedRaw, &b_H_hod_1x_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcSampPulseAmp", &Ndata_H_hod_1x_posAdcSampPulseAmp, &b_Ndata_H_hod_1x_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.hod.1x.posAdcSampPulseAmp", &H_hod_1x_posAdcSampPulseAmp, &b_H_hod_1x_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcSampPulseAmpRaw", &Ndata_H_hod_1x_posAdcSampPulseAmpRaw, &b_Ndata_H_hod_1x_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.1x.posAdcSampPulseAmpRaw", &H_hod_1x_posAdcSampPulseAmpRaw, &b_H_hod_1x_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcSampPulseInt", &Ndata_H_hod_1x_posAdcSampPulseInt, &b_Ndata_H_hod_1x_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.hod.1x.posAdcSampPulseInt", &H_hod_1x_posAdcSampPulseInt, &b_H_hod_1x_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcSampPulseIntRaw", &Ndata_H_hod_1x_posAdcSampPulseIntRaw, &b_Ndata_H_hod_1x_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.hod.1x.posAdcSampPulseIntRaw", &H_hod_1x_posAdcSampPulseIntRaw, &b_H_hod_1x_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcSampPulseTime", &Ndata_H_hod_1x_posAdcSampPulseTime, &b_Ndata_H_hod_1x_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.hod.1x.posAdcSampPulseTime", &H_hod_1x_posAdcSampPulseTime, &b_H_hod_1x_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posAdcSampPulseTimeRaw", &Ndata_H_hod_1x_posAdcSampPulseTimeRaw, &b_Ndata_H_hod_1x_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.1x.posAdcSampPulseTimeRaw", &H_hod_1x_posAdcSampPulseTimeRaw, &b_H_hod_1x_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posTdcCounter", &Ndata_H_hod_1x_posTdcCounter, &b_Ndata_H_hod_1x_posTdcCounter);
   fChain->SetBranchAddress("H.hod.1x.posTdcCounter", H_hod_1x_posTdcCounter, &b_H_hod_1x_posTdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posTdcTime", &Ndata_H_hod_1x_posTdcTime, &b_Ndata_H_hod_1x_posTdcTime);
   fChain->SetBranchAddress("H.hod.1x.posTdcTime", H_hod_1x_posTdcTime, &b_H_hod_1x_posTdcTime);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posTdcTimeRaw", &Ndata_H_hod_1x_posTdcTimeRaw, &b_Ndata_H_hod_1x_posTdcTimeRaw);
   fChain->SetBranchAddress("H.hod.1x.posTdcTimeRaw", H_hod_1x_posTdcTimeRaw, &b_H_hod_1x_posTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.Clus.Flag", &Ndata_H_hod_1y_Clus_Flag, &b_Ndata_H_hod_1y_Clus_Flag);
   fChain->SetBranchAddress("H.hod.1y.Clus.Flag", H_hod_1y_Clus_Flag, &b_H_hod_1y_Clus_Flag);
   fChain->SetBranchAddress("Ndata.H.hod.1y.Clus.Pos", &Ndata_H_hod_1y_Clus_Pos, &b_Ndata_H_hod_1y_Clus_Pos);
   fChain->SetBranchAddress("H.hod.1y.Clus.Pos", H_hod_1y_Clus_Pos, &b_H_hod_1y_Clus_Pos);
   fChain->SetBranchAddress("Ndata.H.hod.1y.Clus.Size", &Ndata_H_hod_1y_Clus_Size, &b_Ndata_H_hod_1y_Clus_Size);
   fChain->SetBranchAddress("H.hod.1y.Clus.Size", H_hod_1y_Clus_Size, &b_H_hod_1y_Clus_Size);
   fChain->SetBranchAddress("Ndata.H.hod.1y.Clus.UsedFlag", &Ndata_H_hod_1y_Clus_UsedFlag, &b_Ndata_H_hod_1y_Clus_UsedFlag);
   fChain->SetBranchAddress("H.hod.1y.Clus.UsedFlag", H_hod_1y_Clus_UsedFlag, &b_H_hod_1y_Clus_UsedFlag);
   fChain->SetBranchAddress("Ndata.H.hod.1y.DiffDisTrackCorr", &Ndata_H_hod_1y_DiffDisTrackCorr, &b_Ndata_H_hod_1y_DiffDisTrackCorr);
   fChain->SetBranchAddress("H.hod.1y.DiffDisTrackCorr", H_hod_1y_DiffDisTrackCorr, &b_H_hod_1y_DiffDisTrackCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodNegAdcHitUsed", &Ndata_H_hod_1y_GoodNegAdcHitUsed, &b_Ndata_H_hod_1y_GoodNegAdcHitUsed);
   fChain->SetBranchAddress("H.hod.1y.GoodNegAdcHitUsed", H_hod_1y_GoodNegAdcHitUsed, &b_H_hod_1y_GoodNegAdcHitUsed);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodNegAdcMult", &Ndata_H_hod_1y_GoodNegAdcMult, &b_Ndata_H_hod_1y_GoodNegAdcMult);
   fChain->SetBranchAddress("H.hod.1y.GoodNegAdcMult", H_hod_1y_GoodNegAdcMult, &b_H_hod_1y_GoodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodNegAdcPed", &Ndata_H_hod_1y_GoodNegAdcPed, &b_Ndata_H_hod_1y_GoodNegAdcPed);
   fChain->SetBranchAddress("H.hod.1y.GoodNegAdcPed", H_hod_1y_GoodNegAdcPed, &b_H_hod_1y_GoodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodNegAdcPulseAmp", &Ndata_H_hod_1y_GoodNegAdcPulseAmp, &b_Ndata_H_hod_1y_GoodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.1y.GoodNegAdcPulseAmp", H_hod_1y_GoodNegAdcPulseAmp, &b_H_hod_1y_GoodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodNegAdcPulseInt", &Ndata_H_hod_1y_GoodNegAdcPulseInt, &b_Ndata_H_hod_1y_GoodNegAdcPulseInt);
   fChain->SetBranchAddress("H.hod.1y.GoodNegAdcPulseInt", H_hod_1y_GoodNegAdcPulseInt, &b_H_hod_1y_GoodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodNegAdcPulseTime", &Ndata_H_hod_1y_GoodNegAdcPulseTime, &b_Ndata_H_hod_1y_GoodNegAdcPulseTime);
   fChain->SetBranchAddress("H.hod.1y.GoodNegAdcPulseTime", H_hod_1y_GoodNegAdcPulseTime, &b_H_hod_1y_GoodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodNegAdcTdcDiffTime", &Ndata_H_hod_1y_GoodNegAdcTdcDiffTime, &b_Ndata_H_hod_1y_GoodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.hod.1y.GoodNegAdcTdcDiffTime", H_hod_1y_GoodNegAdcTdcDiffTime, &b_H_hod_1y_GoodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodNegTdcTimeCorr", &Ndata_H_hod_1y_GoodNegTdcTimeCorr, &b_Ndata_H_hod_1y_GoodNegTdcTimeCorr);
   fChain->SetBranchAddress("H.hod.1y.GoodNegTdcTimeCorr", H_hod_1y_GoodNegTdcTimeCorr, &b_H_hod_1y_GoodNegTdcTimeCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodNegTdcTimeTOFCorr", &Ndata_H_hod_1y_GoodNegTdcTimeTOFCorr, &b_Ndata_H_hod_1y_GoodNegTdcTimeTOFCorr);
   fChain->SetBranchAddress("H.hod.1y.GoodNegTdcTimeTOFCorr", H_hod_1y_GoodNegTdcTimeTOFCorr, &b_H_hod_1y_GoodNegTdcTimeTOFCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodNegTdcTimeUnCorr", &Ndata_H_hod_1y_GoodNegTdcTimeUnCorr, &b_Ndata_H_hod_1y_GoodNegTdcTimeUnCorr);
   fChain->SetBranchAddress("H.hod.1y.GoodNegTdcTimeUnCorr", H_hod_1y_GoodNegTdcTimeUnCorr, &b_H_hod_1y_GoodNegTdcTimeUnCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodNegTdcTimeWalkCorr", &Ndata_H_hod_1y_GoodNegTdcTimeWalkCorr, &b_Ndata_H_hod_1y_GoodNegTdcTimeWalkCorr);
   fChain->SetBranchAddress("H.hod.1y.GoodNegTdcTimeWalkCorr", H_hod_1y_GoodNegTdcTimeWalkCorr, &b_H_hod_1y_GoodNegTdcTimeWalkCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodPosAdcHitUsed", &Ndata_H_hod_1y_GoodPosAdcHitUsed, &b_Ndata_H_hod_1y_GoodPosAdcHitUsed);
   fChain->SetBranchAddress("H.hod.1y.GoodPosAdcHitUsed", H_hod_1y_GoodPosAdcHitUsed, &b_H_hod_1y_GoodPosAdcHitUsed);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodPosAdcMult", &Ndata_H_hod_1y_GoodPosAdcMult, &b_Ndata_H_hod_1y_GoodPosAdcMult);
   fChain->SetBranchAddress("H.hod.1y.GoodPosAdcMult", H_hod_1y_GoodPosAdcMult, &b_H_hod_1y_GoodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodPosAdcPed", &Ndata_H_hod_1y_GoodPosAdcPed, &b_Ndata_H_hod_1y_GoodPosAdcPed);
   fChain->SetBranchAddress("H.hod.1y.GoodPosAdcPed", H_hod_1y_GoodPosAdcPed, &b_H_hod_1y_GoodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodPosAdcPulseAmp", &Ndata_H_hod_1y_GoodPosAdcPulseAmp, &b_Ndata_H_hod_1y_GoodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.1y.GoodPosAdcPulseAmp", H_hod_1y_GoodPosAdcPulseAmp, &b_H_hod_1y_GoodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodPosAdcPulseInt", &Ndata_H_hod_1y_GoodPosAdcPulseInt, &b_Ndata_H_hod_1y_GoodPosAdcPulseInt);
   fChain->SetBranchAddress("H.hod.1y.GoodPosAdcPulseInt", H_hod_1y_GoodPosAdcPulseInt, &b_H_hod_1y_GoodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodPosAdcPulseTime", &Ndata_H_hod_1y_GoodPosAdcPulseTime, &b_Ndata_H_hod_1y_GoodPosAdcPulseTime);
   fChain->SetBranchAddress("H.hod.1y.GoodPosAdcPulseTime", H_hod_1y_GoodPosAdcPulseTime, &b_H_hod_1y_GoodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodPosAdcTdcDiffTime", &Ndata_H_hod_1y_GoodPosAdcTdcDiffTime, &b_Ndata_H_hod_1y_GoodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.hod.1y.GoodPosAdcTdcDiffTime", H_hod_1y_GoodPosAdcTdcDiffTime, &b_H_hod_1y_GoodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodPosTdcTimeCorr", &Ndata_H_hod_1y_GoodPosTdcTimeCorr, &b_Ndata_H_hod_1y_GoodPosTdcTimeCorr);
   fChain->SetBranchAddress("H.hod.1y.GoodPosTdcTimeCorr", H_hod_1y_GoodPosTdcTimeCorr, &b_H_hod_1y_GoodPosTdcTimeCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodPosTdcTimeTOFCorr", &Ndata_H_hod_1y_GoodPosTdcTimeTOFCorr, &b_Ndata_H_hod_1y_GoodPosTdcTimeTOFCorr);
   fChain->SetBranchAddress("H.hod.1y.GoodPosTdcTimeTOFCorr", H_hod_1y_GoodPosTdcTimeTOFCorr, &b_H_hod_1y_GoodPosTdcTimeTOFCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodPosTdcTimeUnCorr", &Ndata_H_hod_1y_GoodPosTdcTimeUnCorr, &b_Ndata_H_hod_1y_GoodPosTdcTimeUnCorr);
   fChain->SetBranchAddress("H.hod.1y.GoodPosTdcTimeUnCorr", H_hod_1y_GoodPosTdcTimeUnCorr, &b_H_hod_1y_GoodPosTdcTimeUnCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1y.GoodPosTdcTimeWalkCorr", &Ndata_H_hod_1y_GoodPosTdcTimeWalkCorr, &b_Ndata_H_hod_1y_GoodPosTdcTimeWalkCorr);
   fChain->SetBranchAddress("H.hod.1y.GoodPosTdcTimeWalkCorr", H_hod_1y_GoodPosTdcTimeWalkCorr, &b_H_hod_1y_GoodPosTdcTimeWalkCorr);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcCounter", &Ndata_H_hod_1y_negAdcCounter, &b_Ndata_H_hod_1y_negAdcCounter);
   fChain->SetBranchAddress("H.hod.1y.negAdcCounter", H_hod_1y_negAdcCounter, &b_H_hod_1y_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcErrorFlag", &Ndata_H_hod_1y_negAdcErrorFlag, &b_Ndata_H_hod_1y_negAdcErrorFlag);
   fChain->SetBranchAddress("H.hod.1y.negAdcErrorFlag", H_hod_1y_negAdcErrorFlag, &b_H_hod_1y_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcPed", &Ndata_H_hod_1y_negAdcPed, &b_Ndata_H_hod_1y_negAdcPed);
   fChain->SetBranchAddress("H.hod.1y.negAdcPed", H_hod_1y_negAdcPed, &b_H_hod_1y_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcPedRaw", &Ndata_H_hod_1y_negAdcPedRaw, &b_Ndata_H_hod_1y_negAdcPedRaw);
   fChain->SetBranchAddress("H.hod.1y.negAdcPedRaw", H_hod_1y_negAdcPedRaw, &b_H_hod_1y_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcPulseAmp", &Ndata_H_hod_1y_negAdcPulseAmp, &b_Ndata_H_hod_1y_negAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.1y.negAdcPulseAmp", H_hod_1y_negAdcPulseAmp, &b_H_hod_1y_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcPulseAmpRaw", &Ndata_H_hod_1y_negAdcPulseAmpRaw, &b_Ndata_H_hod_1y_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.1y.negAdcPulseAmpRaw", H_hod_1y_negAdcPulseAmpRaw, &b_H_hod_1y_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcPulseInt", &Ndata_H_hod_1y_negAdcPulseInt, &b_Ndata_H_hod_1y_negAdcPulseInt);
   fChain->SetBranchAddress("H.hod.1y.negAdcPulseInt", H_hod_1y_negAdcPulseInt, &b_H_hod_1y_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcPulseIntRaw", &Ndata_H_hod_1y_negAdcPulseIntRaw, &b_Ndata_H_hod_1y_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.hod.1y.negAdcPulseIntRaw", H_hod_1y_negAdcPulseIntRaw, &b_H_hod_1y_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcPulseTime", &Ndata_H_hod_1y_negAdcPulseTime, &b_Ndata_H_hod_1y_negAdcPulseTime);
   fChain->SetBranchAddress("H.hod.1y.negAdcPulseTime", H_hod_1y_negAdcPulseTime, &b_H_hod_1y_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcPulseTimeRaw", &Ndata_H_hod_1y_negAdcPulseTimeRaw, &b_Ndata_H_hod_1y_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.1y.negAdcPulseTimeRaw", H_hod_1y_negAdcPulseTimeRaw, &b_H_hod_1y_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcSampPed", &Ndata_H_hod_1y_negAdcSampPed, &b_Ndata_H_hod_1y_negAdcSampPed);
   fChain->SetBranchAddress("H.hod.1y.negAdcSampPed", &H_hod_1y_negAdcSampPed, &b_H_hod_1y_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcSampPedRaw", &Ndata_H_hod_1y_negAdcSampPedRaw, &b_Ndata_H_hod_1y_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.hod.1y.negAdcSampPedRaw", &H_hod_1y_negAdcSampPedRaw, &b_H_hod_1y_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcSampPulseAmp", &Ndata_H_hod_1y_negAdcSampPulseAmp, &b_Ndata_H_hod_1y_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.hod.1y.negAdcSampPulseAmp", &H_hod_1y_negAdcSampPulseAmp, &b_H_hod_1y_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcSampPulseAmpRaw", &Ndata_H_hod_1y_negAdcSampPulseAmpRaw, &b_Ndata_H_hod_1y_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.1y.negAdcSampPulseAmpRaw", &H_hod_1y_negAdcSampPulseAmpRaw, &b_H_hod_1y_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcSampPulseInt", &Ndata_H_hod_1y_negAdcSampPulseInt, &b_Ndata_H_hod_1y_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.hod.1y.negAdcSampPulseInt", &H_hod_1y_negAdcSampPulseInt, &b_H_hod_1y_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcSampPulseIntRaw", &Ndata_H_hod_1y_negAdcSampPulseIntRaw, &b_Ndata_H_hod_1y_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.hod.1y.negAdcSampPulseIntRaw", &H_hod_1y_negAdcSampPulseIntRaw, &b_H_hod_1y_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcSampPulseTime", &Ndata_H_hod_1y_negAdcSampPulseTime, &b_Ndata_H_hod_1y_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.hod.1y.negAdcSampPulseTime", &H_hod_1y_negAdcSampPulseTime, &b_H_hod_1y_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negAdcSampPulseTimeRaw", &Ndata_H_hod_1y_negAdcSampPulseTimeRaw, &b_Ndata_H_hod_1y_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.1y.negAdcSampPulseTimeRaw", &H_hod_1y_negAdcSampPulseTimeRaw, &b_H_hod_1y_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negTdcCounter", &Ndata_H_hod_1y_negTdcCounter, &b_Ndata_H_hod_1y_negTdcCounter);
   fChain->SetBranchAddress("H.hod.1y.negTdcCounter", H_hod_1y_negTdcCounter, &b_H_hod_1y_negTdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negTdcTime", &Ndata_H_hod_1y_negTdcTime, &b_Ndata_H_hod_1y_negTdcTime);
   fChain->SetBranchAddress("H.hod.1y.negTdcTime", H_hod_1y_negTdcTime, &b_H_hod_1y_negTdcTime);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negTdcTimeRaw", &Ndata_H_hod_1y_negTdcTimeRaw, &b_Ndata_H_hod_1y_negTdcTimeRaw);
   fChain->SetBranchAddress("H.hod.1y.negTdcTimeRaw", H_hod_1y_negTdcTimeRaw, &b_H_hod_1y_negTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.numGoodNegAdcHits", &Ndata_H_hod_1y_numGoodNegAdcHits, &b_Ndata_H_hod_1y_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.hod.1y.numGoodNegAdcHits", H_hod_1y_numGoodNegAdcHits, &b_H_hod_1y_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.1y.numGoodNegTdcHits", &Ndata_H_hod_1y_numGoodNegTdcHits, &b_Ndata_H_hod_1y_numGoodNegTdcHits);
   fChain->SetBranchAddress("H.hod.1y.numGoodNegTdcHits", H_hod_1y_numGoodNegTdcHits, &b_H_hod_1y_numGoodNegTdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.1y.numGoodPosAdcHits", &Ndata_H_hod_1y_numGoodPosAdcHits, &b_Ndata_H_hod_1y_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.hod.1y.numGoodPosAdcHits", H_hod_1y_numGoodPosAdcHits, &b_H_hod_1y_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.1y.numGoodPosTdcHits", &Ndata_H_hod_1y_numGoodPosTdcHits, &b_Ndata_H_hod_1y_numGoodPosTdcHits);
   fChain->SetBranchAddress("H.hod.1y.numGoodPosTdcHits", H_hod_1y_numGoodPosTdcHits, &b_H_hod_1y_numGoodPosTdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcCounter", &Ndata_H_hod_1y_posAdcCounter, &b_Ndata_H_hod_1y_posAdcCounter);
   fChain->SetBranchAddress("H.hod.1y.posAdcCounter", H_hod_1y_posAdcCounter, &b_H_hod_1y_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcErrorFlag", &Ndata_H_hod_1y_posAdcErrorFlag, &b_Ndata_H_hod_1y_posAdcErrorFlag);
   fChain->SetBranchAddress("H.hod.1y.posAdcErrorFlag", H_hod_1y_posAdcErrorFlag, &b_H_hod_1y_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcPed", &Ndata_H_hod_1y_posAdcPed, &b_Ndata_H_hod_1y_posAdcPed);
   fChain->SetBranchAddress("H.hod.1y.posAdcPed", H_hod_1y_posAdcPed, &b_H_hod_1y_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcPedRaw", &Ndata_H_hod_1y_posAdcPedRaw, &b_Ndata_H_hod_1y_posAdcPedRaw);
   fChain->SetBranchAddress("H.hod.1y.posAdcPedRaw", H_hod_1y_posAdcPedRaw, &b_H_hod_1y_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcPulseAmp", &Ndata_H_hod_1y_posAdcPulseAmp, &b_Ndata_H_hod_1y_posAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.1y.posAdcPulseAmp", H_hod_1y_posAdcPulseAmp, &b_H_hod_1y_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcPulseAmpRaw", &Ndata_H_hod_1y_posAdcPulseAmpRaw, &b_Ndata_H_hod_1y_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.1y.posAdcPulseAmpRaw", H_hod_1y_posAdcPulseAmpRaw, &b_H_hod_1y_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcPulseInt", &Ndata_H_hod_1y_posAdcPulseInt, &b_Ndata_H_hod_1y_posAdcPulseInt);
   fChain->SetBranchAddress("H.hod.1y.posAdcPulseInt", H_hod_1y_posAdcPulseInt, &b_H_hod_1y_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcPulseIntRaw", &Ndata_H_hod_1y_posAdcPulseIntRaw, &b_Ndata_H_hod_1y_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.hod.1y.posAdcPulseIntRaw", H_hod_1y_posAdcPulseIntRaw, &b_H_hod_1y_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcPulseTime", &Ndata_H_hod_1y_posAdcPulseTime, &b_Ndata_H_hod_1y_posAdcPulseTime);
   fChain->SetBranchAddress("H.hod.1y.posAdcPulseTime", H_hod_1y_posAdcPulseTime, &b_H_hod_1y_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcPulseTimeRaw", &Ndata_H_hod_1y_posAdcPulseTimeRaw, &b_Ndata_H_hod_1y_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.1y.posAdcPulseTimeRaw", H_hod_1y_posAdcPulseTimeRaw, &b_H_hod_1y_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcSampPed", &Ndata_H_hod_1y_posAdcSampPed, &b_Ndata_H_hod_1y_posAdcSampPed);
   fChain->SetBranchAddress("H.hod.1y.posAdcSampPed", &H_hod_1y_posAdcSampPed, &b_H_hod_1y_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcSampPedRaw", &Ndata_H_hod_1y_posAdcSampPedRaw, &b_Ndata_H_hod_1y_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.hod.1y.posAdcSampPedRaw", &H_hod_1y_posAdcSampPedRaw, &b_H_hod_1y_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcSampPulseAmp", &Ndata_H_hod_1y_posAdcSampPulseAmp, &b_Ndata_H_hod_1y_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.hod.1y.posAdcSampPulseAmp", &H_hod_1y_posAdcSampPulseAmp, &b_H_hod_1y_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcSampPulseAmpRaw", &Ndata_H_hod_1y_posAdcSampPulseAmpRaw, &b_Ndata_H_hod_1y_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.1y.posAdcSampPulseAmpRaw", &H_hod_1y_posAdcSampPulseAmpRaw, &b_H_hod_1y_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcSampPulseInt", &Ndata_H_hod_1y_posAdcSampPulseInt, &b_Ndata_H_hod_1y_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.hod.1y.posAdcSampPulseInt", &H_hod_1y_posAdcSampPulseInt, &b_H_hod_1y_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcSampPulseIntRaw", &Ndata_H_hod_1y_posAdcSampPulseIntRaw, &b_Ndata_H_hod_1y_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.hod.1y.posAdcSampPulseIntRaw", &H_hod_1y_posAdcSampPulseIntRaw, &b_H_hod_1y_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcSampPulseTime", &Ndata_H_hod_1y_posAdcSampPulseTime, &b_Ndata_H_hod_1y_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.hod.1y.posAdcSampPulseTime", &H_hod_1y_posAdcSampPulseTime, &b_H_hod_1y_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posAdcSampPulseTimeRaw", &Ndata_H_hod_1y_posAdcSampPulseTimeRaw, &b_Ndata_H_hod_1y_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.1y.posAdcSampPulseTimeRaw", &H_hod_1y_posAdcSampPulseTimeRaw, &b_H_hod_1y_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posTdcCounter", &Ndata_H_hod_1y_posTdcCounter, &b_Ndata_H_hod_1y_posTdcCounter);
   fChain->SetBranchAddress("H.hod.1y.posTdcCounter", H_hod_1y_posTdcCounter, &b_H_hod_1y_posTdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posTdcTime", &Ndata_H_hod_1y_posTdcTime, &b_Ndata_H_hod_1y_posTdcTime);
   fChain->SetBranchAddress("H.hod.1y.posTdcTime", H_hod_1y_posTdcTime, &b_H_hod_1y_posTdcTime);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posTdcTimeRaw", &Ndata_H_hod_1y_posTdcTimeRaw, &b_Ndata_H_hod_1y_posTdcTimeRaw);
   fChain->SetBranchAddress("H.hod.1y.posTdcTimeRaw", H_hod_1y_posTdcTimeRaw, &b_H_hod_1y_posTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.Clus.Flag", &Ndata_H_hod_2x_Clus_Flag, &b_Ndata_H_hod_2x_Clus_Flag);
   fChain->SetBranchAddress("H.hod.2x.Clus.Flag", H_hod_2x_Clus_Flag, &b_H_hod_2x_Clus_Flag);
   fChain->SetBranchAddress("Ndata.H.hod.2x.Clus.Pos", &Ndata_H_hod_2x_Clus_Pos, &b_Ndata_H_hod_2x_Clus_Pos);
   fChain->SetBranchAddress("H.hod.2x.Clus.Pos", H_hod_2x_Clus_Pos, &b_H_hod_2x_Clus_Pos);
   fChain->SetBranchAddress("Ndata.H.hod.2x.Clus.Size", &Ndata_H_hod_2x_Clus_Size, &b_Ndata_H_hod_2x_Clus_Size);
   fChain->SetBranchAddress("H.hod.2x.Clus.Size", H_hod_2x_Clus_Size, &b_H_hod_2x_Clus_Size);
   fChain->SetBranchAddress("Ndata.H.hod.2x.Clus.UsedFlag", &Ndata_H_hod_2x_Clus_UsedFlag, &b_Ndata_H_hod_2x_Clus_UsedFlag);
   fChain->SetBranchAddress("H.hod.2x.Clus.UsedFlag", H_hod_2x_Clus_UsedFlag, &b_H_hod_2x_Clus_UsedFlag);
   fChain->SetBranchAddress("Ndata.H.hod.2x.DiffDisTrackCorr", &Ndata_H_hod_2x_DiffDisTrackCorr, &b_Ndata_H_hod_2x_DiffDisTrackCorr);
   fChain->SetBranchAddress("H.hod.2x.DiffDisTrackCorr", H_hod_2x_DiffDisTrackCorr, &b_H_hod_2x_DiffDisTrackCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodNegAdcHitUsed", &Ndata_H_hod_2x_GoodNegAdcHitUsed, &b_Ndata_H_hod_2x_GoodNegAdcHitUsed);
   fChain->SetBranchAddress("H.hod.2x.GoodNegAdcHitUsed", H_hod_2x_GoodNegAdcHitUsed, &b_H_hod_2x_GoodNegAdcHitUsed);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodNegAdcMult", &Ndata_H_hod_2x_GoodNegAdcMult, &b_Ndata_H_hod_2x_GoodNegAdcMult);
   fChain->SetBranchAddress("H.hod.2x.GoodNegAdcMult", H_hod_2x_GoodNegAdcMult, &b_H_hod_2x_GoodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodNegAdcPed", &Ndata_H_hod_2x_GoodNegAdcPed, &b_Ndata_H_hod_2x_GoodNegAdcPed);
   fChain->SetBranchAddress("H.hod.2x.GoodNegAdcPed", H_hod_2x_GoodNegAdcPed, &b_H_hod_2x_GoodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodNegAdcPulseAmp", &Ndata_H_hod_2x_GoodNegAdcPulseAmp, &b_Ndata_H_hod_2x_GoodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.2x.GoodNegAdcPulseAmp", H_hod_2x_GoodNegAdcPulseAmp, &b_H_hod_2x_GoodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodNegAdcPulseInt", &Ndata_H_hod_2x_GoodNegAdcPulseInt, &b_Ndata_H_hod_2x_GoodNegAdcPulseInt);
   fChain->SetBranchAddress("H.hod.2x.GoodNegAdcPulseInt", H_hod_2x_GoodNegAdcPulseInt, &b_H_hod_2x_GoodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodNegAdcPulseTime", &Ndata_H_hod_2x_GoodNegAdcPulseTime, &b_Ndata_H_hod_2x_GoodNegAdcPulseTime);
   fChain->SetBranchAddress("H.hod.2x.GoodNegAdcPulseTime", H_hod_2x_GoodNegAdcPulseTime, &b_H_hod_2x_GoodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodNegAdcTdcDiffTime", &Ndata_H_hod_2x_GoodNegAdcTdcDiffTime, &b_Ndata_H_hod_2x_GoodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.hod.2x.GoodNegAdcTdcDiffTime", H_hod_2x_GoodNegAdcTdcDiffTime, &b_H_hod_2x_GoodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodNegTdcTimeCorr", &Ndata_H_hod_2x_GoodNegTdcTimeCorr, &b_Ndata_H_hod_2x_GoodNegTdcTimeCorr);
   fChain->SetBranchAddress("H.hod.2x.GoodNegTdcTimeCorr", H_hod_2x_GoodNegTdcTimeCorr, &b_H_hod_2x_GoodNegTdcTimeCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodNegTdcTimeTOFCorr", &Ndata_H_hod_2x_GoodNegTdcTimeTOFCorr, &b_Ndata_H_hod_2x_GoodNegTdcTimeTOFCorr);
   fChain->SetBranchAddress("H.hod.2x.GoodNegTdcTimeTOFCorr", H_hod_2x_GoodNegTdcTimeTOFCorr, &b_H_hod_2x_GoodNegTdcTimeTOFCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodNegTdcTimeUnCorr", &Ndata_H_hod_2x_GoodNegTdcTimeUnCorr, &b_Ndata_H_hod_2x_GoodNegTdcTimeUnCorr);
   fChain->SetBranchAddress("H.hod.2x.GoodNegTdcTimeUnCorr", H_hod_2x_GoodNegTdcTimeUnCorr, &b_H_hod_2x_GoodNegTdcTimeUnCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodNegTdcTimeWalkCorr", &Ndata_H_hod_2x_GoodNegTdcTimeWalkCorr, &b_Ndata_H_hod_2x_GoodNegTdcTimeWalkCorr);
   fChain->SetBranchAddress("H.hod.2x.GoodNegTdcTimeWalkCorr", H_hod_2x_GoodNegTdcTimeWalkCorr, &b_H_hod_2x_GoodNegTdcTimeWalkCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodPosAdcHitUsed", &Ndata_H_hod_2x_GoodPosAdcHitUsed, &b_Ndata_H_hod_2x_GoodPosAdcHitUsed);
   fChain->SetBranchAddress("H.hod.2x.GoodPosAdcHitUsed", H_hod_2x_GoodPosAdcHitUsed, &b_H_hod_2x_GoodPosAdcHitUsed);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodPosAdcMult", &Ndata_H_hod_2x_GoodPosAdcMult, &b_Ndata_H_hod_2x_GoodPosAdcMult);
   fChain->SetBranchAddress("H.hod.2x.GoodPosAdcMult", H_hod_2x_GoodPosAdcMult, &b_H_hod_2x_GoodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodPosAdcPed", &Ndata_H_hod_2x_GoodPosAdcPed, &b_Ndata_H_hod_2x_GoodPosAdcPed);
   fChain->SetBranchAddress("H.hod.2x.GoodPosAdcPed", H_hod_2x_GoodPosAdcPed, &b_H_hod_2x_GoodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodPosAdcPulseAmp", &Ndata_H_hod_2x_GoodPosAdcPulseAmp, &b_Ndata_H_hod_2x_GoodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.2x.GoodPosAdcPulseAmp", H_hod_2x_GoodPosAdcPulseAmp, &b_H_hod_2x_GoodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodPosAdcPulseInt", &Ndata_H_hod_2x_GoodPosAdcPulseInt, &b_Ndata_H_hod_2x_GoodPosAdcPulseInt);
   fChain->SetBranchAddress("H.hod.2x.GoodPosAdcPulseInt", H_hod_2x_GoodPosAdcPulseInt, &b_H_hod_2x_GoodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodPosAdcPulseTime", &Ndata_H_hod_2x_GoodPosAdcPulseTime, &b_Ndata_H_hod_2x_GoodPosAdcPulseTime);
   fChain->SetBranchAddress("H.hod.2x.GoodPosAdcPulseTime", H_hod_2x_GoodPosAdcPulseTime, &b_H_hod_2x_GoodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodPosAdcTdcDiffTime", &Ndata_H_hod_2x_GoodPosAdcTdcDiffTime, &b_Ndata_H_hod_2x_GoodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.hod.2x.GoodPosAdcTdcDiffTime", H_hod_2x_GoodPosAdcTdcDiffTime, &b_H_hod_2x_GoodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodPosTdcTimeCorr", &Ndata_H_hod_2x_GoodPosTdcTimeCorr, &b_Ndata_H_hod_2x_GoodPosTdcTimeCorr);
   fChain->SetBranchAddress("H.hod.2x.GoodPosTdcTimeCorr", H_hod_2x_GoodPosTdcTimeCorr, &b_H_hod_2x_GoodPosTdcTimeCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodPosTdcTimeTOFCorr", &Ndata_H_hod_2x_GoodPosTdcTimeTOFCorr, &b_Ndata_H_hod_2x_GoodPosTdcTimeTOFCorr);
   fChain->SetBranchAddress("H.hod.2x.GoodPosTdcTimeTOFCorr", H_hod_2x_GoodPosTdcTimeTOFCorr, &b_H_hod_2x_GoodPosTdcTimeTOFCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodPosTdcTimeUnCorr", &Ndata_H_hod_2x_GoodPosTdcTimeUnCorr, &b_Ndata_H_hod_2x_GoodPosTdcTimeUnCorr);
   fChain->SetBranchAddress("H.hod.2x.GoodPosTdcTimeUnCorr", H_hod_2x_GoodPosTdcTimeUnCorr, &b_H_hod_2x_GoodPosTdcTimeUnCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2x.GoodPosTdcTimeWalkCorr", &Ndata_H_hod_2x_GoodPosTdcTimeWalkCorr, &b_Ndata_H_hod_2x_GoodPosTdcTimeWalkCorr);
   fChain->SetBranchAddress("H.hod.2x.GoodPosTdcTimeWalkCorr", H_hod_2x_GoodPosTdcTimeWalkCorr, &b_H_hod_2x_GoodPosTdcTimeWalkCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcCounter", &Ndata_H_hod_2x_negAdcCounter, &b_Ndata_H_hod_2x_negAdcCounter);
   fChain->SetBranchAddress("H.hod.2x.negAdcCounter", H_hod_2x_negAdcCounter, &b_H_hod_2x_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcErrorFlag", &Ndata_H_hod_2x_negAdcErrorFlag, &b_Ndata_H_hod_2x_negAdcErrorFlag);
   fChain->SetBranchAddress("H.hod.2x.negAdcErrorFlag", H_hod_2x_negAdcErrorFlag, &b_H_hod_2x_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcPed", &Ndata_H_hod_2x_negAdcPed, &b_Ndata_H_hod_2x_negAdcPed);
   fChain->SetBranchAddress("H.hod.2x.negAdcPed", H_hod_2x_negAdcPed, &b_H_hod_2x_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcPedRaw", &Ndata_H_hod_2x_negAdcPedRaw, &b_Ndata_H_hod_2x_negAdcPedRaw);
   fChain->SetBranchAddress("H.hod.2x.negAdcPedRaw", H_hod_2x_negAdcPedRaw, &b_H_hod_2x_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcPulseAmp", &Ndata_H_hod_2x_negAdcPulseAmp, &b_Ndata_H_hod_2x_negAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.2x.negAdcPulseAmp", H_hod_2x_negAdcPulseAmp, &b_H_hod_2x_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcPulseAmpRaw", &Ndata_H_hod_2x_negAdcPulseAmpRaw, &b_Ndata_H_hod_2x_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.2x.negAdcPulseAmpRaw", H_hod_2x_negAdcPulseAmpRaw, &b_H_hod_2x_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcPulseInt", &Ndata_H_hod_2x_negAdcPulseInt, &b_Ndata_H_hod_2x_negAdcPulseInt);
   fChain->SetBranchAddress("H.hod.2x.negAdcPulseInt", H_hod_2x_negAdcPulseInt, &b_H_hod_2x_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcPulseIntRaw", &Ndata_H_hod_2x_negAdcPulseIntRaw, &b_Ndata_H_hod_2x_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.hod.2x.negAdcPulseIntRaw", H_hod_2x_negAdcPulseIntRaw, &b_H_hod_2x_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcPulseTime", &Ndata_H_hod_2x_negAdcPulseTime, &b_Ndata_H_hod_2x_negAdcPulseTime);
   fChain->SetBranchAddress("H.hod.2x.negAdcPulseTime", H_hod_2x_negAdcPulseTime, &b_H_hod_2x_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcPulseTimeRaw", &Ndata_H_hod_2x_negAdcPulseTimeRaw, &b_Ndata_H_hod_2x_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.2x.negAdcPulseTimeRaw", H_hod_2x_negAdcPulseTimeRaw, &b_H_hod_2x_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcSampPed", &Ndata_H_hod_2x_negAdcSampPed, &b_Ndata_H_hod_2x_negAdcSampPed);
   fChain->SetBranchAddress("H.hod.2x.negAdcSampPed", &H_hod_2x_negAdcSampPed, &b_H_hod_2x_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcSampPedRaw", &Ndata_H_hod_2x_negAdcSampPedRaw, &b_Ndata_H_hod_2x_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.hod.2x.negAdcSampPedRaw", &H_hod_2x_negAdcSampPedRaw, &b_H_hod_2x_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcSampPulseAmp", &Ndata_H_hod_2x_negAdcSampPulseAmp, &b_Ndata_H_hod_2x_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.hod.2x.negAdcSampPulseAmp", &H_hod_2x_negAdcSampPulseAmp, &b_H_hod_2x_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcSampPulseAmpRaw", &Ndata_H_hod_2x_negAdcSampPulseAmpRaw, &b_Ndata_H_hod_2x_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.2x.negAdcSampPulseAmpRaw", &H_hod_2x_negAdcSampPulseAmpRaw, &b_H_hod_2x_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcSampPulseInt", &Ndata_H_hod_2x_negAdcSampPulseInt, &b_Ndata_H_hod_2x_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.hod.2x.negAdcSampPulseInt", &H_hod_2x_negAdcSampPulseInt, &b_H_hod_2x_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcSampPulseIntRaw", &Ndata_H_hod_2x_negAdcSampPulseIntRaw, &b_Ndata_H_hod_2x_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.hod.2x.negAdcSampPulseIntRaw", &H_hod_2x_negAdcSampPulseIntRaw, &b_H_hod_2x_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcSampPulseTime", &Ndata_H_hod_2x_negAdcSampPulseTime, &b_Ndata_H_hod_2x_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.hod.2x.negAdcSampPulseTime", &H_hod_2x_negAdcSampPulseTime, &b_H_hod_2x_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negAdcSampPulseTimeRaw", &Ndata_H_hod_2x_negAdcSampPulseTimeRaw, &b_Ndata_H_hod_2x_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.2x.negAdcSampPulseTimeRaw", &H_hod_2x_negAdcSampPulseTimeRaw, &b_H_hod_2x_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negTdcCounter", &Ndata_H_hod_2x_negTdcCounter, &b_Ndata_H_hod_2x_negTdcCounter);
   fChain->SetBranchAddress("H.hod.2x.negTdcCounter", H_hod_2x_negTdcCounter, &b_H_hod_2x_negTdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negTdcTime", &Ndata_H_hod_2x_negTdcTime, &b_Ndata_H_hod_2x_negTdcTime);
   fChain->SetBranchAddress("H.hod.2x.negTdcTime", H_hod_2x_negTdcTime, &b_H_hod_2x_negTdcTime);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negTdcTimeRaw", &Ndata_H_hod_2x_negTdcTimeRaw, &b_Ndata_H_hod_2x_negTdcTimeRaw);
   fChain->SetBranchAddress("H.hod.2x.negTdcTimeRaw", H_hod_2x_negTdcTimeRaw, &b_H_hod_2x_negTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.numGoodNegAdcHits", &Ndata_H_hod_2x_numGoodNegAdcHits, &b_Ndata_H_hod_2x_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.hod.2x.numGoodNegAdcHits", H_hod_2x_numGoodNegAdcHits, &b_H_hod_2x_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.2x.numGoodNegTdcHits", &Ndata_H_hod_2x_numGoodNegTdcHits, &b_Ndata_H_hod_2x_numGoodNegTdcHits);
   fChain->SetBranchAddress("H.hod.2x.numGoodNegTdcHits", H_hod_2x_numGoodNegTdcHits, &b_H_hod_2x_numGoodNegTdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.2x.numGoodPosAdcHits", &Ndata_H_hod_2x_numGoodPosAdcHits, &b_Ndata_H_hod_2x_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.hod.2x.numGoodPosAdcHits", H_hod_2x_numGoodPosAdcHits, &b_H_hod_2x_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.2x.numGoodPosTdcHits", &Ndata_H_hod_2x_numGoodPosTdcHits, &b_Ndata_H_hod_2x_numGoodPosTdcHits);
   fChain->SetBranchAddress("H.hod.2x.numGoodPosTdcHits", H_hod_2x_numGoodPosTdcHits, &b_H_hod_2x_numGoodPosTdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcCounter", &Ndata_H_hod_2x_posAdcCounter, &b_Ndata_H_hod_2x_posAdcCounter);
   fChain->SetBranchAddress("H.hod.2x.posAdcCounter", H_hod_2x_posAdcCounter, &b_H_hod_2x_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcErrorFlag", &Ndata_H_hod_2x_posAdcErrorFlag, &b_Ndata_H_hod_2x_posAdcErrorFlag);
   fChain->SetBranchAddress("H.hod.2x.posAdcErrorFlag", H_hod_2x_posAdcErrorFlag, &b_H_hod_2x_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcPed", &Ndata_H_hod_2x_posAdcPed, &b_Ndata_H_hod_2x_posAdcPed);
   fChain->SetBranchAddress("H.hod.2x.posAdcPed", H_hod_2x_posAdcPed, &b_H_hod_2x_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcPedRaw", &Ndata_H_hod_2x_posAdcPedRaw, &b_Ndata_H_hod_2x_posAdcPedRaw);
   fChain->SetBranchAddress("H.hod.2x.posAdcPedRaw", H_hod_2x_posAdcPedRaw, &b_H_hod_2x_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcPulseAmp", &Ndata_H_hod_2x_posAdcPulseAmp, &b_Ndata_H_hod_2x_posAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.2x.posAdcPulseAmp", H_hod_2x_posAdcPulseAmp, &b_H_hod_2x_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcPulseAmpRaw", &Ndata_H_hod_2x_posAdcPulseAmpRaw, &b_Ndata_H_hod_2x_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.2x.posAdcPulseAmpRaw", H_hod_2x_posAdcPulseAmpRaw, &b_H_hod_2x_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcPulseInt", &Ndata_H_hod_2x_posAdcPulseInt, &b_Ndata_H_hod_2x_posAdcPulseInt);
   fChain->SetBranchAddress("H.hod.2x.posAdcPulseInt", H_hod_2x_posAdcPulseInt, &b_H_hod_2x_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcPulseIntRaw", &Ndata_H_hod_2x_posAdcPulseIntRaw, &b_Ndata_H_hod_2x_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.hod.2x.posAdcPulseIntRaw", H_hod_2x_posAdcPulseIntRaw, &b_H_hod_2x_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcPulseTime", &Ndata_H_hod_2x_posAdcPulseTime, &b_Ndata_H_hod_2x_posAdcPulseTime);
   fChain->SetBranchAddress("H.hod.2x.posAdcPulseTime", H_hod_2x_posAdcPulseTime, &b_H_hod_2x_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcPulseTimeRaw", &Ndata_H_hod_2x_posAdcPulseTimeRaw, &b_Ndata_H_hod_2x_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.2x.posAdcPulseTimeRaw", H_hod_2x_posAdcPulseTimeRaw, &b_H_hod_2x_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcSampPed", &Ndata_H_hod_2x_posAdcSampPed, &b_Ndata_H_hod_2x_posAdcSampPed);
   fChain->SetBranchAddress("H.hod.2x.posAdcSampPed", &H_hod_2x_posAdcSampPed, &b_H_hod_2x_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcSampPedRaw", &Ndata_H_hod_2x_posAdcSampPedRaw, &b_Ndata_H_hod_2x_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.hod.2x.posAdcSampPedRaw", &H_hod_2x_posAdcSampPedRaw, &b_H_hod_2x_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcSampPulseAmp", &Ndata_H_hod_2x_posAdcSampPulseAmp, &b_Ndata_H_hod_2x_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.hod.2x.posAdcSampPulseAmp", &H_hod_2x_posAdcSampPulseAmp, &b_H_hod_2x_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcSampPulseAmpRaw", &Ndata_H_hod_2x_posAdcSampPulseAmpRaw, &b_Ndata_H_hod_2x_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.2x.posAdcSampPulseAmpRaw", &H_hod_2x_posAdcSampPulseAmpRaw, &b_H_hod_2x_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcSampPulseInt", &Ndata_H_hod_2x_posAdcSampPulseInt, &b_Ndata_H_hod_2x_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.hod.2x.posAdcSampPulseInt", &H_hod_2x_posAdcSampPulseInt, &b_H_hod_2x_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcSampPulseIntRaw", &Ndata_H_hod_2x_posAdcSampPulseIntRaw, &b_Ndata_H_hod_2x_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.hod.2x.posAdcSampPulseIntRaw", &H_hod_2x_posAdcSampPulseIntRaw, &b_H_hod_2x_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcSampPulseTime", &Ndata_H_hod_2x_posAdcSampPulseTime, &b_Ndata_H_hod_2x_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.hod.2x.posAdcSampPulseTime", &H_hod_2x_posAdcSampPulseTime, &b_H_hod_2x_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posAdcSampPulseTimeRaw", &Ndata_H_hod_2x_posAdcSampPulseTimeRaw, &b_Ndata_H_hod_2x_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.2x.posAdcSampPulseTimeRaw", &H_hod_2x_posAdcSampPulseTimeRaw, &b_H_hod_2x_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posTdcCounter", &Ndata_H_hod_2x_posTdcCounter, &b_Ndata_H_hod_2x_posTdcCounter);
   fChain->SetBranchAddress("H.hod.2x.posTdcCounter", H_hod_2x_posTdcCounter, &b_H_hod_2x_posTdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posTdcTime", &Ndata_H_hod_2x_posTdcTime, &b_Ndata_H_hod_2x_posTdcTime);
   fChain->SetBranchAddress("H.hod.2x.posTdcTime", H_hod_2x_posTdcTime, &b_H_hod_2x_posTdcTime);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posTdcTimeRaw", &Ndata_H_hod_2x_posTdcTimeRaw, &b_Ndata_H_hod_2x_posTdcTimeRaw);
   fChain->SetBranchAddress("H.hod.2x.posTdcTimeRaw", H_hod_2x_posTdcTimeRaw, &b_H_hod_2x_posTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.Clus.Flag", &Ndata_H_hod_2y_Clus_Flag, &b_Ndata_H_hod_2y_Clus_Flag);
   fChain->SetBranchAddress("H.hod.2y.Clus.Flag", H_hod_2y_Clus_Flag, &b_H_hod_2y_Clus_Flag);
   fChain->SetBranchAddress("Ndata.H.hod.2y.Clus.Pos", &Ndata_H_hod_2y_Clus_Pos, &b_Ndata_H_hod_2y_Clus_Pos);
   fChain->SetBranchAddress("H.hod.2y.Clus.Pos", H_hod_2y_Clus_Pos, &b_H_hod_2y_Clus_Pos);
   fChain->SetBranchAddress("Ndata.H.hod.2y.Clus.Size", &Ndata_H_hod_2y_Clus_Size, &b_Ndata_H_hod_2y_Clus_Size);
   fChain->SetBranchAddress("H.hod.2y.Clus.Size", H_hod_2y_Clus_Size, &b_H_hod_2y_Clus_Size);
   fChain->SetBranchAddress("Ndata.H.hod.2y.Clus.UsedFlag", &Ndata_H_hod_2y_Clus_UsedFlag, &b_Ndata_H_hod_2y_Clus_UsedFlag);
   fChain->SetBranchAddress("H.hod.2y.Clus.UsedFlag", H_hod_2y_Clus_UsedFlag, &b_H_hod_2y_Clus_UsedFlag);
   fChain->SetBranchAddress("Ndata.H.hod.2y.DiffDisTrackCorr", &Ndata_H_hod_2y_DiffDisTrackCorr, &b_Ndata_H_hod_2y_DiffDisTrackCorr);
   fChain->SetBranchAddress("H.hod.2y.DiffDisTrackCorr", H_hod_2y_DiffDisTrackCorr, &b_H_hod_2y_DiffDisTrackCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodNegAdcHitUsed", &Ndata_H_hod_2y_GoodNegAdcHitUsed, &b_Ndata_H_hod_2y_GoodNegAdcHitUsed);
   fChain->SetBranchAddress("H.hod.2y.GoodNegAdcHitUsed", H_hod_2y_GoodNegAdcHitUsed, &b_H_hod_2y_GoodNegAdcHitUsed);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodNegAdcMult", &Ndata_H_hod_2y_GoodNegAdcMult, &b_Ndata_H_hod_2y_GoodNegAdcMult);
   fChain->SetBranchAddress("H.hod.2y.GoodNegAdcMult", H_hod_2y_GoodNegAdcMult, &b_H_hod_2y_GoodNegAdcMult);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodNegAdcPed", &Ndata_H_hod_2y_GoodNegAdcPed, &b_Ndata_H_hod_2y_GoodNegAdcPed);
   fChain->SetBranchAddress("H.hod.2y.GoodNegAdcPed", H_hod_2y_GoodNegAdcPed, &b_H_hod_2y_GoodNegAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodNegAdcPulseAmp", &Ndata_H_hod_2y_GoodNegAdcPulseAmp, &b_Ndata_H_hod_2y_GoodNegAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.2y.GoodNegAdcPulseAmp", H_hod_2y_GoodNegAdcPulseAmp, &b_H_hod_2y_GoodNegAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodNegAdcPulseInt", &Ndata_H_hod_2y_GoodNegAdcPulseInt, &b_Ndata_H_hod_2y_GoodNegAdcPulseInt);
   fChain->SetBranchAddress("H.hod.2y.GoodNegAdcPulseInt", H_hod_2y_GoodNegAdcPulseInt, &b_H_hod_2y_GoodNegAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodNegAdcPulseTime", &Ndata_H_hod_2y_GoodNegAdcPulseTime, &b_Ndata_H_hod_2y_GoodNegAdcPulseTime);
   fChain->SetBranchAddress("H.hod.2y.GoodNegAdcPulseTime", H_hod_2y_GoodNegAdcPulseTime, &b_H_hod_2y_GoodNegAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodNegAdcTdcDiffTime", &Ndata_H_hod_2y_GoodNegAdcTdcDiffTime, &b_Ndata_H_hod_2y_GoodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("H.hod.2y.GoodNegAdcTdcDiffTime", H_hod_2y_GoodNegAdcTdcDiffTime, &b_H_hod_2y_GoodNegAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodNegTdcTimeCorr", &Ndata_H_hod_2y_GoodNegTdcTimeCorr, &b_Ndata_H_hod_2y_GoodNegTdcTimeCorr);
   fChain->SetBranchAddress("H.hod.2y.GoodNegTdcTimeCorr", H_hod_2y_GoodNegTdcTimeCorr, &b_H_hod_2y_GoodNegTdcTimeCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodNegTdcTimeTOFCorr", &Ndata_H_hod_2y_GoodNegTdcTimeTOFCorr, &b_Ndata_H_hod_2y_GoodNegTdcTimeTOFCorr);
   fChain->SetBranchAddress("H.hod.2y.GoodNegTdcTimeTOFCorr", H_hod_2y_GoodNegTdcTimeTOFCorr, &b_H_hod_2y_GoodNegTdcTimeTOFCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodNegTdcTimeUnCorr", &Ndata_H_hod_2y_GoodNegTdcTimeUnCorr, &b_Ndata_H_hod_2y_GoodNegTdcTimeUnCorr);
   fChain->SetBranchAddress("H.hod.2y.GoodNegTdcTimeUnCorr", H_hod_2y_GoodNegTdcTimeUnCorr, &b_H_hod_2y_GoodNegTdcTimeUnCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodNegTdcTimeWalkCorr", &Ndata_H_hod_2y_GoodNegTdcTimeWalkCorr, &b_Ndata_H_hod_2y_GoodNegTdcTimeWalkCorr);
   fChain->SetBranchAddress("H.hod.2y.GoodNegTdcTimeWalkCorr", H_hod_2y_GoodNegTdcTimeWalkCorr, &b_H_hod_2y_GoodNegTdcTimeWalkCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodPosAdcHitUsed", &Ndata_H_hod_2y_GoodPosAdcHitUsed, &b_Ndata_H_hod_2y_GoodPosAdcHitUsed);
   fChain->SetBranchAddress("H.hod.2y.GoodPosAdcHitUsed", H_hod_2y_GoodPosAdcHitUsed, &b_H_hod_2y_GoodPosAdcHitUsed);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodPosAdcMult", &Ndata_H_hod_2y_GoodPosAdcMult, &b_Ndata_H_hod_2y_GoodPosAdcMult);
   fChain->SetBranchAddress("H.hod.2y.GoodPosAdcMult", H_hod_2y_GoodPosAdcMult, &b_H_hod_2y_GoodPosAdcMult);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodPosAdcPed", &Ndata_H_hod_2y_GoodPosAdcPed, &b_Ndata_H_hod_2y_GoodPosAdcPed);
   fChain->SetBranchAddress("H.hod.2y.GoodPosAdcPed", H_hod_2y_GoodPosAdcPed, &b_H_hod_2y_GoodPosAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodPosAdcPulseAmp", &Ndata_H_hod_2y_GoodPosAdcPulseAmp, &b_Ndata_H_hod_2y_GoodPosAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.2y.GoodPosAdcPulseAmp", H_hod_2y_GoodPosAdcPulseAmp, &b_H_hod_2y_GoodPosAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodPosAdcPulseInt", &Ndata_H_hod_2y_GoodPosAdcPulseInt, &b_Ndata_H_hod_2y_GoodPosAdcPulseInt);
   fChain->SetBranchAddress("H.hod.2y.GoodPosAdcPulseInt", H_hod_2y_GoodPosAdcPulseInt, &b_H_hod_2y_GoodPosAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodPosAdcPulseTime", &Ndata_H_hod_2y_GoodPosAdcPulseTime, &b_Ndata_H_hod_2y_GoodPosAdcPulseTime);
   fChain->SetBranchAddress("H.hod.2y.GoodPosAdcPulseTime", H_hod_2y_GoodPosAdcPulseTime, &b_H_hod_2y_GoodPosAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodPosAdcTdcDiffTime", &Ndata_H_hod_2y_GoodPosAdcTdcDiffTime, &b_Ndata_H_hod_2y_GoodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("H.hod.2y.GoodPosAdcTdcDiffTime", H_hod_2y_GoodPosAdcTdcDiffTime, &b_H_hod_2y_GoodPosAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodPosTdcTimeCorr", &Ndata_H_hod_2y_GoodPosTdcTimeCorr, &b_Ndata_H_hod_2y_GoodPosTdcTimeCorr);
   fChain->SetBranchAddress("H.hod.2y.GoodPosTdcTimeCorr", H_hod_2y_GoodPosTdcTimeCorr, &b_H_hod_2y_GoodPosTdcTimeCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodPosTdcTimeTOFCorr", &Ndata_H_hod_2y_GoodPosTdcTimeTOFCorr, &b_Ndata_H_hod_2y_GoodPosTdcTimeTOFCorr);
   fChain->SetBranchAddress("H.hod.2y.GoodPosTdcTimeTOFCorr", H_hod_2y_GoodPosTdcTimeTOFCorr, &b_H_hod_2y_GoodPosTdcTimeTOFCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodPosTdcTimeUnCorr", &Ndata_H_hod_2y_GoodPosTdcTimeUnCorr, &b_Ndata_H_hod_2y_GoodPosTdcTimeUnCorr);
   fChain->SetBranchAddress("H.hod.2y.GoodPosTdcTimeUnCorr", H_hod_2y_GoodPosTdcTimeUnCorr, &b_H_hod_2y_GoodPosTdcTimeUnCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2y.GoodPosTdcTimeWalkCorr", &Ndata_H_hod_2y_GoodPosTdcTimeWalkCorr, &b_Ndata_H_hod_2y_GoodPosTdcTimeWalkCorr);
   fChain->SetBranchAddress("H.hod.2y.GoodPosTdcTimeWalkCorr", H_hod_2y_GoodPosTdcTimeWalkCorr, &b_H_hod_2y_GoodPosTdcTimeWalkCorr);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcCounter", &Ndata_H_hod_2y_negAdcCounter, &b_Ndata_H_hod_2y_negAdcCounter);
   fChain->SetBranchAddress("H.hod.2y.negAdcCounter", H_hod_2y_negAdcCounter, &b_H_hod_2y_negAdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcErrorFlag", &Ndata_H_hod_2y_negAdcErrorFlag, &b_Ndata_H_hod_2y_negAdcErrorFlag);
   fChain->SetBranchAddress("H.hod.2y.negAdcErrorFlag", H_hod_2y_negAdcErrorFlag, &b_H_hod_2y_negAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcPed", &Ndata_H_hod_2y_negAdcPed, &b_Ndata_H_hod_2y_negAdcPed);
   fChain->SetBranchAddress("H.hod.2y.negAdcPed", H_hod_2y_negAdcPed, &b_H_hod_2y_negAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcPedRaw", &Ndata_H_hod_2y_negAdcPedRaw, &b_Ndata_H_hod_2y_negAdcPedRaw);
   fChain->SetBranchAddress("H.hod.2y.negAdcPedRaw", H_hod_2y_negAdcPedRaw, &b_H_hod_2y_negAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcPulseAmp", &Ndata_H_hod_2y_negAdcPulseAmp, &b_Ndata_H_hod_2y_negAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.2y.negAdcPulseAmp", H_hod_2y_negAdcPulseAmp, &b_H_hod_2y_negAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcPulseAmpRaw", &Ndata_H_hod_2y_negAdcPulseAmpRaw, &b_Ndata_H_hod_2y_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.2y.negAdcPulseAmpRaw", H_hod_2y_negAdcPulseAmpRaw, &b_H_hod_2y_negAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcPulseInt", &Ndata_H_hod_2y_negAdcPulseInt, &b_Ndata_H_hod_2y_negAdcPulseInt);
   fChain->SetBranchAddress("H.hod.2y.negAdcPulseInt", H_hod_2y_negAdcPulseInt, &b_H_hod_2y_negAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcPulseIntRaw", &Ndata_H_hod_2y_negAdcPulseIntRaw, &b_Ndata_H_hod_2y_negAdcPulseIntRaw);
   fChain->SetBranchAddress("H.hod.2y.negAdcPulseIntRaw", H_hod_2y_negAdcPulseIntRaw, &b_H_hod_2y_negAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcPulseTime", &Ndata_H_hod_2y_negAdcPulseTime, &b_Ndata_H_hod_2y_negAdcPulseTime);
   fChain->SetBranchAddress("H.hod.2y.negAdcPulseTime", H_hod_2y_negAdcPulseTime, &b_H_hod_2y_negAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcPulseTimeRaw", &Ndata_H_hod_2y_negAdcPulseTimeRaw, &b_Ndata_H_hod_2y_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.2y.negAdcPulseTimeRaw", H_hod_2y_negAdcPulseTimeRaw, &b_H_hod_2y_negAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcSampPed", &Ndata_H_hod_2y_negAdcSampPed, &b_Ndata_H_hod_2y_negAdcSampPed);
   fChain->SetBranchAddress("H.hod.2y.negAdcSampPed", &H_hod_2y_negAdcSampPed, &b_H_hod_2y_negAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcSampPedRaw", &Ndata_H_hod_2y_negAdcSampPedRaw, &b_Ndata_H_hod_2y_negAdcSampPedRaw);
   fChain->SetBranchAddress("H.hod.2y.negAdcSampPedRaw", &H_hod_2y_negAdcSampPedRaw, &b_H_hod_2y_negAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcSampPulseAmp", &Ndata_H_hod_2y_negAdcSampPulseAmp, &b_Ndata_H_hod_2y_negAdcSampPulseAmp);
   fChain->SetBranchAddress("H.hod.2y.negAdcSampPulseAmp", &H_hod_2y_negAdcSampPulseAmp, &b_H_hod_2y_negAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcSampPulseAmpRaw", &Ndata_H_hod_2y_negAdcSampPulseAmpRaw, &b_Ndata_H_hod_2y_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.2y.negAdcSampPulseAmpRaw", &H_hod_2y_negAdcSampPulseAmpRaw, &b_H_hod_2y_negAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcSampPulseInt", &Ndata_H_hod_2y_negAdcSampPulseInt, &b_Ndata_H_hod_2y_negAdcSampPulseInt);
   fChain->SetBranchAddress("H.hod.2y.negAdcSampPulseInt", &H_hod_2y_negAdcSampPulseInt, &b_H_hod_2y_negAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcSampPulseIntRaw", &Ndata_H_hod_2y_negAdcSampPulseIntRaw, &b_Ndata_H_hod_2y_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.hod.2y.negAdcSampPulseIntRaw", &H_hod_2y_negAdcSampPulseIntRaw, &b_H_hod_2y_negAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcSampPulseTime", &Ndata_H_hod_2y_negAdcSampPulseTime, &b_Ndata_H_hod_2y_negAdcSampPulseTime);
   fChain->SetBranchAddress("H.hod.2y.negAdcSampPulseTime", &H_hod_2y_negAdcSampPulseTime, &b_H_hod_2y_negAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negAdcSampPulseTimeRaw", &Ndata_H_hod_2y_negAdcSampPulseTimeRaw, &b_Ndata_H_hod_2y_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.2y.negAdcSampPulseTimeRaw", &H_hod_2y_negAdcSampPulseTimeRaw, &b_H_hod_2y_negAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negTdcCounter", &Ndata_H_hod_2y_negTdcCounter, &b_Ndata_H_hod_2y_negTdcCounter);
   fChain->SetBranchAddress("H.hod.2y.negTdcCounter", H_hod_2y_negTdcCounter, &b_H_hod_2y_negTdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negTdcTime", &Ndata_H_hod_2y_negTdcTime, &b_Ndata_H_hod_2y_negTdcTime);
   fChain->SetBranchAddress("H.hod.2y.negTdcTime", H_hod_2y_negTdcTime, &b_H_hod_2y_negTdcTime);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negTdcTimeRaw", &Ndata_H_hod_2y_negTdcTimeRaw, &b_Ndata_H_hod_2y_negTdcTimeRaw);
   fChain->SetBranchAddress("H.hod.2y.negTdcTimeRaw", H_hod_2y_negTdcTimeRaw, &b_H_hod_2y_negTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.numGoodNegAdcHits", &Ndata_H_hod_2y_numGoodNegAdcHits, &b_Ndata_H_hod_2y_numGoodNegAdcHits);
   fChain->SetBranchAddress("H.hod.2y.numGoodNegAdcHits", H_hod_2y_numGoodNegAdcHits, &b_H_hod_2y_numGoodNegAdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.2y.numGoodNegTdcHits", &Ndata_H_hod_2y_numGoodNegTdcHits, &b_Ndata_H_hod_2y_numGoodNegTdcHits);
   fChain->SetBranchAddress("H.hod.2y.numGoodNegTdcHits", H_hod_2y_numGoodNegTdcHits, &b_H_hod_2y_numGoodNegTdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.2y.numGoodPosAdcHits", &Ndata_H_hod_2y_numGoodPosAdcHits, &b_Ndata_H_hod_2y_numGoodPosAdcHits);
   fChain->SetBranchAddress("H.hod.2y.numGoodPosAdcHits", H_hod_2y_numGoodPosAdcHits, &b_H_hod_2y_numGoodPosAdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.2y.numGoodPosTdcHits", &Ndata_H_hod_2y_numGoodPosTdcHits, &b_Ndata_H_hod_2y_numGoodPosTdcHits);
   fChain->SetBranchAddress("H.hod.2y.numGoodPosTdcHits", H_hod_2y_numGoodPosTdcHits, &b_H_hod_2y_numGoodPosTdcHits);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcCounter", &Ndata_H_hod_2y_posAdcCounter, &b_Ndata_H_hod_2y_posAdcCounter);
   fChain->SetBranchAddress("H.hod.2y.posAdcCounter", H_hod_2y_posAdcCounter, &b_H_hod_2y_posAdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcErrorFlag", &Ndata_H_hod_2y_posAdcErrorFlag, &b_Ndata_H_hod_2y_posAdcErrorFlag);
   fChain->SetBranchAddress("H.hod.2y.posAdcErrorFlag", H_hod_2y_posAdcErrorFlag, &b_H_hod_2y_posAdcErrorFlag);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcPed", &Ndata_H_hod_2y_posAdcPed, &b_Ndata_H_hod_2y_posAdcPed);
   fChain->SetBranchAddress("H.hod.2y.posAdcPed", H_hod_2y_posAdcPed, &b_H_hod_2y_posAdcPed);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcPedRaw", &Ndata_H_hod_2y_posAdcPedRaw, &b_Ndata_H_hod_2y_posAdcPedRaw);
   fChain->SetBranchAddress("H.hod.2y.posAdcPedRaw", H_hod_2y_posAdcPedRaw, &b_H_hod_2y_posAdcPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcPulseAmp", &Ndata_H_hod_2y_posAdcPulseAmp, &b_Ndata_H_hod_2y_posAdcPulseAmp);
   fChain->SetBranchAddress("H.hod.2y.posAdcPulseAmp", H_hod_2y_posAdcPulseAmp, &b_H_hod_2y_posAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcPulseAmpRaw", &Ndata_H_hod_2y_posAdcPulseAmpRaw, &b_Ndata_H_hod_2y_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.2y.posAdcPulseAmpRaw", H_hod_2y_posAdcPulseAmpRaw, &b_H_hod_2y_posAdcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcPulseInt", &Ndata_H_hod_2y_posAdcPulseInt, &b_Ndata_H_hod_2y_posAdcPulseInt);
   fChain->SetBranchAddress("H.hod.2y.posAdcPulseInt", H_hod_2y_posAdcPulseInt, &b_H_hod_2y_posAdcPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcPulseIntRaw", &Ndata_H_hod_2y_posAdcPulseIntRaw, &b_Ndata_H_hod_2y_posAdcPulseIntRaw);
   fChain->SetBranchAddress("H.hod.2y.posAdcPulseIntRaw", H_hod_2y_posAdcPulseIntRaw, &b_H_hod_2y_posAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcPulseTime", &Ndata_H_hod_2y_posAdcPulseTime, &b_Ndata_H_hod_2y_posAdcPulseTime);
   fChain->SetBranchAddress("H.hod.2y.posAdcPulseTime", H_hod_2y_posAdcPulseTime, &b_H_hod_2y_posAdcPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcPulseTimeRaw", &Ndata_H_hod_2y_posAdcPulseTimeRaw, &b_Ndata_H_hod_2y_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.2y.posAdcPulseTimeRaw", H_hod_2y_posAdcPulseTimeRaw, &b_H_hod_2y_posAdcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcSampPed", &Ndata_H_hod_2y_posAdcSampPed, &b_Ndata_H_hod_2y_posAdcSampPed);
   fChain->SetBranchAddress("H.hod.2y.posAdcSampPed", &H_hod_2y_posAdcSampPed, &b_H_hod_2y_posAdcSampPed);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcSampPedRaw", &Ndata_H_hod_2y_posAdcSampPedRaw, &b_Ndata_H_hod_2y_posAdcSampPedRaw);
   fChain->SetBranchAddress("H.hod.2y.posAdcSampPedRaw", &H_hod_2y_posAdcSampPedRaw, &b_H_hod_2y_posAdcSampPedRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcSampPulseAmp", &Ndata_H_hod_2y_posAdcSampPulseAmp, &b_Ndata_H_hod_2y_posAdcSampPulseAmp);
   fChain->SetBranchAddress("H.hod.2y.posAdcSampPulseAmp", &H_hod_2y_posAdcSampPulseAmp, &b_H_hod_2y_posAdcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcSampPulseAmpRaw", &Ndata_H_hod_2y_posAdcSampPulseAmpRaw, &b_Ndata_H_hod_2y_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("H.hod.2y.posAdcSampPulseAmpRaw", &H_hod_2y_posAdcSampPulseAmpRaw, &b_H_hod_2y_posAdcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcSampPulseInt", &Ndata_H_hod_2y_posAdcSampPulseInt, &b_Ndata_H_hod_2y_posAdcSampPulseInt);
   fChain->SetBranchAddress("H.hod.2y.posAdcSampPulseInt", &H_hod_2y_posAdcSampPulseInt, &b_H_hod_2y_posAdcSampPulseInt);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcSampPulseIntRaw", &Ndata_H_hod_2y_posAdcSampPulseIntRaw, &b_Ndata_H_hod_2y_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("H.hod.2y.posAdcSampPulseIntRaw", &H_hod_2y_posAdcSampPulseIntRaw, &b_H_hod_2y_posAdcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcSampPulseTime", &Ndata_H_hod_2y_posAdcSampPulseTime, &b_Ndata_H_hod_2y_posAdcSampPulseTime);
   fChain->SetBranchAddress("H.hod.2y.posAdcSampPulseTime", &H_hod_2y_posAdcSampPulseTime, &b_H_hod_2y_posAdcSampPulseTime);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posAdcSampPulseTimeRaw", &Ndata_H_hod_2y_posAdcSampPulseTimeRaw, &b_Ndata_H_hod_2y_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("H.hod.2y.posAdcSampPulseTimeRaw", &H_hod_2y_posAdcSampPulseTimeRaw, &b_H_hod_2y_posAdcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posTdcCounter", &Ndata_H_hod_2y_posTdcCounter, &b_Ndata_H_hod_2y_posTdcCounter);
   fChain->SetBranchAddress("H.hod.2y.posTdcCounter", H_hod_2y_posTdcCounter, &b_H_hod_2y_posTdcCounter);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posTdcTime", &Ndata_H_hod_2y_posTdcTime, &b_Ndata_H_hod_2y_posTdcTime);
   fChain->SetBranchAddress("H.hod.2y.posTdcTime", H_hod_2y_posTdcTime, &b_H_hod_2y_posTdcTime);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posTdcTimeRaw", &Ndata_H_hod_2y_posTdcTimeRaw, &b_Ndata_H_hod_2y_posTdcTimeRaw);
   fChain->SetBranchAddress("H.hod.2y.posTdcTimeRaw", H_hod_2y_posTdcTimeRaw, &b_H_hod_2y_posTdcTimeRaw);
   fChain->SetBranchAddress("Ndata.H.tr.GoodPlane3", &Ndata_H_tr_GoodPlane3, &b_Ndata_H_tr_GoodPlane3);
   fChain->SetBranchAddress("H.tr.GoodPlane3", H_tr_GoodPlane3, &b_H_tr_GoodPlane3);
   fChain->SetBranchAddress("Ndata.H.tr.GoodPlane4", &Ndata_H_tr_GoodPlane4, &b_Ndata_H_tr_GoodPlane4);
   fChain->SetBranchAddress("H.tr.GoodPlane4", H_tr_GoodPlane4, &b_H_tr_GoodPlane4);
   fChain->SetBranchAddress("Ndata.H.tr.beta", &Ndata_H_tr_beta, &b_Ndata_H_tr_beta);
   fChain->SetBranchAddress("H.tr.beta", H_tr_beta, &b_H_tr_beta);
   fChain->SetBranchAddress("Ndata.H.tr.betachisq", &Ndata_H_tr_betachisq, &b_Ndata_H_tr_betachisq);
   fChain->SetBranchAddress("H.tr.betachisq", H_tr_betachisq, &b_H_tr_betachisq);
   fChain->SetBranchAddress("Ndata.H.tr.chi2", &Ndata_H_tr_chi2, &b_Ndata_H_tr_chi2);
   fChain->SetBranchAddress("H.tr.chi2", H_tr_chi2, &b_H_tr_chi2);
   fChain->SetBranchAddress("Ndata.H.tr.d_ph", &Ndata_H_tr_d_ph, &b_Ndata_H_tr_d_ph);
   fChain->SetBranchAddress("H.tr.d_ph", H_tr_d_ph, &b_H_tr_d_ph);
   fChain->SetBranchAddress("Ndata.H.tr.d_th", &Ndata_H_tr_d_th, &b_Ndata_H_tr_d_th);
   fChain->SetBranchAddress("H.tr.d_th", H_tr_d_th, &b_H_tr_d_th);
   fChain->SetBranchAddress("Ndata.H.tr.d_x", &Ndata_H_tr_d_x, &b_Ndata_H_tr_d_x);
   fChain->SetBranchAddress("H.tr.d_x", H_tr_d_x, &b_H_tr_d_x);
   fChain->SetBranchAddress("Ndata.H.tr.d_y", &Ndata_H_tr_d_y, &b_Ndata_H_tr_d_y);
   fChain->SetBranchAddress("H.tr.d_y", H_tr_d_y, &b_H_tr_d_y);
   fChain->SetBranchAddress("Ndata.H.tr.dbeta", &Ndata_H_tr_dbeta, &b_Ndata_H_tr_dbeta);
   fChain->SetBranchAddress("H.tr.dbeta", H_tr_dbeta, &b_H_tr_dbeta);
   fChain->SetBranchAddress("Ndata.H.tr.dtime", &Ndata_H_tr_dtime, &b_Ndata_H_tr_dtime);
   fChain->SetBranchAddress("H.tr.dtime", H_tr_dtime, &b_H_tr_dtime);
   fChain->SetBranchAddress("Ndata.H.tr.flag", &Ndata_H_tr_flag, &b_Ndata_H_tr_flag);
   fChain->SetBranchAddress("H.tr.flag", H_tr_flag, &b_H_tr_flag);
   fChain->SetBranchAddress("Ndata.H.tr.fptime", &Ndata_H_tr_fptime, &b_Ndata_H_tr_fptime);
   fChain->SetBranchAddress("H.tr.fptime", H_tr_fptime, &b_H_tr_fptime);
   fChain->SetBranchAddress("Ndata.H.tr.ndof", &Ndata_H_tr_ndof, &b_Ndata_H_tr_ndof);
   fChain->SetBranchAddress("H.tr.ndof", H_tr_ndof, &b_H_tr_ndof);
   fChain->SetBranchAddress("Ndata.H.tr.npmt", &Ndata_H_tr_npmt, &b_Ndata_H_tr_npmt);
   fChain->SetBranchAddress("H.tr.npmt", H_tr_npmt, &b_H_tr_npmt);
   fChain->SetBranchAddress("Ndata.H.tr.p", &Ndata_H_tr_p, &b_Ndata_H_tr_p);
   fChain->SetBranchAddress("H.tr.p", H_tr_p, &b_H_tr_p);
   fChain->SetBranchAddress("Ndata.H.tr.pathl", &Ndata_H_tr_pathl, &b_Ndata_H_tr_pathl);
   fChain->SetBranchAddress("H.tr.pathl", H_tr_pathl, &b_H_tr_pathl);
   fChain->SetBranchAddress("Ndata.H.tr.ph", &Ndata_H_tr_ph, &b_Ndata_H_tr_ph);
   fChain->SetBranchAddress("H.tr.ph", H_tr_ph, &b_H_tr_ph);
   fChain->SetBranchAddress("Ndata.H.tr.px", &Ndata_H_tr_px, &b_Ndata_H_tr_px);
   fChain->SetBranchAddress("H.tr.px", H_tr_px, &b_H_tr_px);
   fChain->SetBranchAddress("Ndata.H.tr.py", &Ndata_H_tr_py, &b_Ndata_H_tr_py);
   fChain->SetBranchAddress("H.tr.py", H_tr_py, &b_H_tr_py);
   fChain->SetBranchAddress("Ndata.H.tr.pz", &Ndata_H_tr_pz, &b_Ndata_H_tr_pz);
   fChain->SetBranchAddress("H.tr.pz", H_tr_pz, &b_H_tr_pz);
   fChain->SetBranchAddress("Ndata.H.tr.r_ph", &Ndata_H_tr_r_ph, &b_Ndata_H_tr_r_ph);
   fChain->SetBranchAddress("H.tr.r_ph", H_tr_r_ph, &b_H_tr_r_ph);
   fChain->SetBranchAddress("Ndata.H.tr.r_th", &Ndata_H_tr_r_th, &b_Ndata_H_tr_r_th);
   fChain->SetBranchAddress("H.tr.r_th", H_tr_r_th, &b_H_tr_r_th);
   fChain->SetBranchAddress("Ndata.H.tr.r_x", &Ndata_H_tr_r_x, &b_Ndata_H_tr_r_x);
   fChain->SetBranchAddress("H.tr.r_x", H_tr_r_x, &b_H_tr_r_x);
   fChain->SetBranchAddress("Ndata.H.tr.r_y", &Ndata_H_tr_r_y, &b_Ndata_H_tr_r_y);
   fChain->SetBranchAddress("H.tr.r_y", H_tr_r_y, &b_H_tr_r_y);
   fChain->SetBranchAddress("Ndata.H.tr.tg_dp", &Ndata_H_tr_tg_dp, &b_Ndata_H_tr_tg_dp);
   fChain->SetBranchAddress("H.tr.tg_dp", H_tr_tg_dp, &b_H_tr_tg_dp);
   fChain->SetBranchAddress("Ndata.H.tr.tg_ph", &Ndata_H_tr_tg_ph, &b_Ndata_H_tr_tg_ph);
   fChain->SetBranchAddress("H.tr.tg_ph", H_tr_tg_ph, &b_H_tr_tg_ph);
   fChain->SetBranchAddress("Ndata.H.tr.tg_th", &Ndata_H_tr_tg_th, &b_Ndata_H_tr_tg_th);
   fChain->SetBranchAddress("H.tr.tg_th", H_tr_tg_th, &b_H_tr_tg_th);
   fChain->SetBranchAddress("Ndata.H.tr.tg_y", &Ndata_H_tr_tg_y, &b_Ndata_H_tr_tg_y);
   fChain->SetBranchAddress("H.tr.tg_y", H_tr_tg_y, &b_H_tr_tg_y);
   fChain->SetBranchAddress("Ndata.H.tr.th", &Ndata_H_tr_th, &b_Ndata_H_tr_th);
   fChain->SetBranchAddress("H.tr.th", H_tr_th, &b_H_tr_th);
   fChain->SetBranchAddress("Ndata.H.tr.time", &Ndata_H_tr_time, &b_Ndata_H_tr_time);
   fChain->SetBranchAddress("H.tr.time", H_tr_time, &b_H_tr_time);
   fChain->SetBranchAddress("Ndata.H.tr.vx", &Ndata_H_tr_vx, &b_Ndata_H_tr_vx);
   fChain->SetBranchAddress("H.tr.vx", H_tr_vx, &b_H_tr_vx);
   fChain->SetBranchAddress("Ndata.H.tr.vy", &Ndata_H_tr_vy, &b_Ndata_H_tr_vy);
   fChain->SetBranchAddress("H.tr.vy", H_tr_vy, &b_H_tr_vy);
   fChain->SetBranchAddress("Ndata.H.tr.vz", &Ndata_H_tr_vz, &b_Ndata_H_tr_vz);
   fChain->SetBranchAddress("H.tr.vz", H_tr_vz, &b_H_tr_vz);
   fChain->SetBranchAddress("Ndata.H.tr.x", &Ndata_H_tr_x, &b_Ndata_H_tr_x);
   fChain->SetBranchAddress("H.tr.x", H_tr_x, &b_H_tr_x);
   fChain->SetBranchAddress("Ndata.H.tr.y", &Ndata_H_tr_y, &b_Ndata_H_tr_y);
   fChain->SetBranchAddress("H.tr.y", H_tr_y, &b_H_tr_y);
   fChain->SetBranchAddress("Ndata.NPS.cal.clusE", &Ndata_NPS_cal_clusE, &b_Ndata_NPS_cal_clusE);
   fChain->SetBranchAddress("NPS.cal.clusE", &NPS_cal_clusE, &b_NPS_cal_clusE);
   fChain->SetBranchAddress("Ndata.NPS.cal.clusT", &Ndata_NPS_cal_clusT, &b_Ndata_NPS_cal_clusT);
   fChain->SetBranchAddress("NPS.cal.clusT", &NPS_cal_clusT, &b_NPS_cal_clusT);
   fChain->SetBranchAddress("Ndata.NPS.cal.clusX", &Ndata_NPS_cal_clusX, &b_Ndata_NPS_cal_clusX);
   fChain->SetBranchAddress("NPS.cal.clusX", &NPS_cal_clusX, &b_NPS_cal_clusX);
   fChain->SetBranchAddress("Ndata.NPS.cal.clusY", &Ndata_NPS_cal_clusY, &b_Ndata_NPS_cal_clusY);
   fChain->SetBranchAddress("NPS.cal.clusY", &NPS_cal_clusY, &b_NPS_cal_clusY);
   fChain->SetBranchAddress("Ndata.NPS.cal.clusZ", &Ndata_NPS_cal_clusZ, &b_Ndata_NPS_cal_clusZ);
   fChain->SetBranchAddress("NPS.cal.clusZ", &NPS_cal_clusZ, &b_NPS_cal_clusZ);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcCounter", &Ndata_NPS_cal_fly_adcCounter, &b_Ndata_NPS_cal_fly_adcCounter);
   fChain->SetBranchAddress("NPS.cal.fly.adcCounter", &NPS_cal_fly_adcCounter, &b_NPS_cal_fly_adcCounter);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcErrorFlag", &Ndata_NPS_cal_fly_adcErrorFlag, &b_Ndata_NPS_cal_fly_adcErrorFlag);
   fChain->SetBranchAddress("NPS.cal.fly.adcErrorFlag", &NPS_cal_fly_adcErrorFlag, &b_NPS_cal_fly_adcErrorFlag);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcPed", &Ndata_NPS_cal_fly_adcPed, &b_Ndata_NPS_cal_fly_adcPed);
   fChain->SetBranchAddress("NPS.cal.fly.adcPed", &NPS_cal_fly_adcPed, &b_NPS_cal_fly_adcPed);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcPedRaw", &Ndata_NPS_cal_fly_adcPedRaw, &b_Ndata_NPS_cal_fly_adcPedRaw);
   fChain->SetBranchAddress("NPS.cal.fly.adcPedRaw", &NPS_cal_fly_adcPedRaw, &b_NPS_cal_fly_adcPedRaw);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcPulseAmp", &Ndata_NPS_cal_fly_adcPulseAmp, &b_Ndata_NPS_cal_fly_adcPulseAmp);
   fChain->SetBranchAddress("NPS.cal.fly.adcPulseAmp", &NPS_cal_fly_adcPulseAmp, &b_NPS_cal_fly_adcPulseAmp);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcPulseAmpRaw", &Ndata_NPS_cal_fly_adcPulseAmpRaw, &b_Ndata_NPS_cal_fly_adcPulseAmpRaw);
   fChain->SetBranchAddress("NPS.cal.fly.adcPulseAmpRaw", &NPS_cal_fly_adcPulseAmpRaw, &b_NPS_cal_fly_adcPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcPulseInt", &Ndata_NPS_cal_fly_adcPulseInt, &b_Ndata_NPS_cal_fly_adcPulseInt);
   fChain->SetBranchAddress("NPS.cal.fly.adcPulseInt", &NPS_cal_fly_adcPulseInt, &b_NPS_cal_fly_adcPulseInt);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcPulseIntRaw", &Ndata_NPS_cal_fly_adcPulseIntRaw, &b_Ndata_NPS_cal_fly_adcPulseIntRaw);
   fChain->SetBranchAddress("NPS.cal.fly.adcPulseIntRaw", &NPS_cal_fly_adcPulseIntRaw, &b_NPS_cal_fly_adcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcPulseTime", &Ndata_NPS_cal_fly_adcPulseTime, &b_Ndata_NPS_cal_fly_adcPulseTime);
   fChain->SetBranchAddress("NPS.cal.fly.adcPulseTime", &NPS_cal_fly_adcPulseTime, &b_NPS_cal_fly_adcPulseTime);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcPulseTimeRaw", &Ndata_NPS_cal_fly_adcPulseTimeRaw, &b_Ndata_NPS_cal_fly_adcPulseTimeRaw);
   fChain->SetBranchAddress("NPS.cal.fly.adcPulseTimeRaw", &NPS_cal_fly_adcPulseTimeRaw, &b_NPS_cal_fly_adcPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcSampPed", &Ndata_NPS_cal_fly_adcSampPed, &b_Ndata_NPS_cal_fly_adcSampPed);
   fChain->SetBranchAddress("NPS.cal.fly.adcSampPed", &NPS_cal_fly_adcSampPed, &b_NPS_cal_fly_adcSampPed);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcSampPedRaw", &Ndata_NPS_cal_fly_adcSampPedRaw, &b_Ndata_NPS_cal_fly_adcSampPedRaw);
   fChain->SetBranchAddress("NPS.cal.fly.adcSampPedRaw", &NPS_cal_fly_adcSampPedRaw, &b_NPS_cal_fly_adcSampPedRaw);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcSampPulseAmp", &Ndata_NPS_cal_fly_adcSampPulseAmp, &b_Ndata_NPS_cal_fly_adcSampPulseAmp);
   fChain->SetBranchAddress("NPS.cal.fly.adcSampPulseAmp", &NPS_cal_fly_adcSampPulseAmp, &b_NPS_cal_fly_adcSampPulseAmp);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcSampPulseAmpRaw", &Ndata_NPS_cal_fly_adcSampPulseAmpRaw, &b_Ndata_NPS_cal_fly_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("NPS.cal.fly.adcSampPulseAmpRaw", &NPS_cal_fly_adcSampPulseAmpRaw, &b_NPS_cal_fly_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcSampPulseInt", &Ndata_NPS_cal_fly_adcSampPulseInt, &b_Ndata_NPS_cal_fly_adcSampPulseInt);
   fChain->SetBranchAddress("NPS.cal.fly.adcSampPulseInt", &NPS_cal_fly_adcSampPulseInt, &b_NPS_cal_fly_adcSampPulseInt);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcSampPulseIntRaw", &Ndata_NPS_cal_fly_adcSampPulseIntRaw, &b_Ndata_NPS_cal_fly_adcSampPulseIntRaw);
   fChain->SetBranchAddress("NPS.cal.fly.adcSampPulseIntRaw", &NPS_cal_fly_adcSampPulseIntRaw, &b_NPS_cal_fly_adcSampPulseIntRaw);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcSampPulseTime", &Ndata_NPS_cal_fly_adcSampPulseTime, &b_Ndata_NPS_cal_fly_adcSampPulseTime);
   fChain->SetBranchAddress("NPS.cal.fly.adcSampPulseTime", &NPS_cal_fly_adcSampPulseTime, &b_NPS_cal_fly_adcSampPulseTime);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcSampPulseTimeRaw", &Ndata_NPS_cal_fly_adcSampPulseTimeRaw, &b_Ndata_NPS_cal_fly_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("NPS.cal.fly.adcSampPulseTimeRaw", &NPS_cal_fly_adcSampPulseTimeRaw, &b_NPS_cal_fly_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.adcSampWaveform", &Ndata_NPS_cal_fly_adcSampWaveform, &b_Ndata_NPS_cal_fly_adcSampWaveform);
   fChain->SetBranchAddress("NPS.cal.fly.adcSampWaveform", &NPS_cal_fly_adcSampWaveform, &b_NPS_cal_fly_adcSampWaveform);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.block_clusterID", &Ndata_NPS_cal_fly_block_clusterID, &b_Ndata_NPS_cal_fly_block_clusterID);
   fChain->SetBranchAddress("NPS.cal.fly.block_clusterID", NPS_cal_fly_block_clusterID, &b_NPS_cal_fly_block_clusterID);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.e", &Ndata_NPS_cal_fly_e, &b_Ndata_NPS_cal_fly_e);
   fChain->SetBranchAddress("NPS.cal.fly.e", NPS_cal_fly_e, &b_NPS_cal_fly_e);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.goodAdcMult", &Ndata_NPS_cal_fly_goodAdcMult, &b_Ndata_NPS_cal_fly_goodAdcMult);
   fChain->SetBranchAddress("NPS.cal.fly.goodAdcMult", NPS_cal_fly_goodAdcMult, &b_NPS_cal_fly_goodAdcMult);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.goodAdcPed", &Ndata_NPS_cal_fly_goodAdcPed, &b_Ndata_NPS_cal_fly_goodAdcPed);
   fChain->SetBranchAddress("NPS.cal.fly.goodAdcPed", NPS_cal_fly_goodAdcPed, &b_NPS_cal_fly_goodAdcPed);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.goodAdcPulseAmp", &Ndata_NPS_cal_fly_goodAdcPulseAmp, &b_Ndata_NPS_cal_fly_goodAdcPulseAmp);
   fChain->SetBranchAddress("NPS.cal.fly.goodAdcPulseAmp", NPS_cal_fly_goodAdcPulseAmp, &b_NPS_cal_fly_goodAdcPulseAmp);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.goodAdcPulseInt", &Ndata_NPS_cal_fly_goodAdcPulseInt, &b_Ndata_NPS_cal_fly_goodAdcPulseInt);
   fChain->SetBranchAddress("NPS.cal.fly.goodAdcPulseInt", NPS_cal_fly_goodAdcPulseInt, &b_NPS_cal_fly_goodAdcPulseInt);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.goodAdcPulseIntRaw", &Ndata_NPS_cal_fly_goodAdcPulseIntRaw, &b_Ndata_NPS_cal_fly_goodAdcPulseIntRaw);
   fChain->SetBranchAddress("NPS.cal.fly.goodAdcPulseIntRaw", NPS_cal_fly_goodAdcPulseIntRaw, &b_NPS_cal_fly_goodAdcPulseIntRaw);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.goodAdcPulseTime", &Ndata_NPS_cal_fly_goodAdcPulseTime, &b_Ndata_NPS_cal_fly_goodAdcPulseTime);
   fChain->SetBranchAddress("NPS.cal.fly.goodAdcPulseTime", NPS_cal_fly_goodAdcPulseTime, &b_NPS_cal_fly_goodAdcPulseTime);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.goodAdcTdcDiffTime", &Ndata_NPS_cal_fly_goodAdcTdcDiffTime, &b_Ndata_NPS_cal_fly_goodAdcTdcDiffTime);
   fChain->SetBranchAddress("NPS.cal.fly.goodAdcTdcDiffTime", NPS_cal_fly_goodAdcTdcDiffTime, &b_NPS_cal_fly_goodAdcTdcDiffTime);
   fChain->SetBranchAddress("Ndata.NPS.cal.fly.numGoodAdcHits", &Ndata_NPS_cal_fly_numGoodAdcHits, &b_Ndata_NPS_cal_fly_numGoodAdcHits);
   fChain->SetBranchAddress("NPS.cal.fly.numGoodAdcHits", NPS_cal_fly_numGoodAdcHits, &b_NPS_cal_fly_numGoodAdcHits);
   fChain->SetBranchAddress("Ndata.NPS.cal.vtpClusE", &Ndata_NPS_cal_vtpClusE, &b_Ndata_NPS_cal_vtpClusE);
   fChain->SetBranchAddress("NPS.cal.vtpClusE", &NPS_cal_vtpClusE, &b_NPS_cal_vtpClusE);
   fChain->SetBranchAddress("Ndata.NPS.cal.vtpClusSize", &Ndata_NPS_cal_vtpClusSize, &b_Ndata_NPS_cal_vtpClusSize);
   fChain->SetBranchAddress("NPS.cal.vtpClusSize", &NPS_cal_vtpClusSize, &b_NPS_cal_vtpClusSize);
   fChain->SetBranchAddress("Ndata.NPS.cal.vtpClusTime", &Ndata_NPS_cal_vtpClusTime, &b_Ndata_NPS_cal_vtpClusTime);
   fChain->SetBranchAddress("NPS.cal.vtpClusTime", &NPS_cal_vtpClusTime, &b_NPS_cal_vtpClusTime);
   fChain->SetBranchAddress("Ndata.NPS.cal.vtpClusX", &Ndata_NPS_cal_vtpClusX, &b_Ndata_NPS_cal_vtpClusX);
   fChain->SetBranchAddress("NPS.cal.vtpClusX", &NPS_cal_vtpClusX, &b_NPS_cal_vtpClusX);
   fChain->SetBranchAddress("Ndata.NPS.cal.vtpClusY", &Ndata_NPS_cal_vtpClusY, &b_Ndata_NPS_cal_vtpClusY);
   fChain->SetBranchAddress("NPS.cal.vtpClusY", &NPS_cal_vtpClusY, &b_NPS_cal_vtpClusY);
   fChain->SetBranchAddress("Ndata.NPS.cal.vtpTrigTime", &Ndata_NPS_cal_vtpTrigTime, &b_Ndata_NPS_cal_vtpTrigTime);
   fChain->SetBranchAddress("NPS.cal.vtpTrigTime", &NPS_cal_vtpTrigTime, &b_NPS_cal_vtpTrigTime);
   fChain->SetBranchAddress("Ndata.NPS.cal.vtpTrigType0", &Ndata_NPS_cal_vtpTrigType0, &b_Ndata_NPS_cal_vtpTrigType0);
   fChain->SetBranchAddress("NPS.cal.vtpTrigType0", &NPS_cal_vtpTrigType0, &b_NPS_cal_vtpTrigType0);
   fChain->SetBranchAddress("Ndata.NPS.cal.vtpTrigType1", &Ndata_NPS_cal_vtpTrigType1, &b_Ndata_NPS_cal_vtpTrigType1);
   fChain->SetBranchAddress("NPS.cal.vtpTrigType1", &NPS_cal_vtpTrigType1, &b_NPS_cal_vtpTrigType1);
   fChain->SetBranchAddress("Ndata.NPS.cal.vtpTrigType2", &Ndata_NPS_cal_vtpTrigType2, &b_Ndata_NPS_cal_vtpTrigType2);
   fChain->SetBranchAddress("NPS.cal.vtpTrigType2", &NPS_cal_vtpTrigType2, &b_NPS_cal_vtpTrigType2);
   fChain->SetBranchAddress("H.1MHz.scaler", &H_1MHz_scaler, &b_H_1MHz_scaler);
   fChain->SetBranchAddress("H.1MHz.scalerCut", &H_1MHz_scalerCut, &b_H_1MHz_scalerCut);
   fChain->SetBranchAddress("H.1MHz.scalerRate", &H_1MHz_scalerRate, &b_H_1MHz_scalerRate);
   fChain->SetBranchAddress("H.1MHz.scalerTime", &H_1MHz_scalerTime, &b_H_1MHz_scalerTime);
   fChain->SetBranchAddress("H.1MHz.scalerTimeCut", &H_1MHz_scalerTimeCut, &b_H_1MHz_scalerTimeCut);
   fChain->SetBranchAddress("H.1MHz_CP.scaler", &H_1MHz_CP_scaler, &b_H_1MHz_CP_scaler);
   fChain->SetBranchAddress("H.1MHz_CP.scalerCut", &H_1MHz_CP_scalerCut, &b_H_1MHz_CP_scalerCut);
   fChain->SetBranchAddress("H.1MHz_CP.scalerRate", &H_1MHz_CP_scalerRate, &b_H_1MHz_CP_scalerRate);
   fChain->SetBranchAddress("H.1MHz_CP.scalerTime", &H_1MHz_CP_scalerTime, &b_H_1MHz_CP_scalerTime);
   fChain->SetBranchAddress("H.1MHz_CP.scalerTimeCut", &H_1MHz_CP_scalerTimeCut, &b_H_1MHz_CP_scalerTimeCut);
   fChain->SetBranchAddress("H.1MHz_Hel.scaler", &H_1MHz_Hel_scaler, &b_H_1MHz_Hel_scaler);
   fChain->SetBranchAddress("H.1MHz_Hel.scalerCut", &H_1MHz_Hel_scalerCut, &b_H_1MHz_Hel_scalerCut);
   fChain->SetBranchAddress("H.1MHz_Hel.scalerRate", &H_1MHz_Hel_scalerRate, &b_H_1MHz_Hel_scalerRate);
   fChain->SetBranchAddress("H.1MHz_Hel.scalerTime", &H_1MHz_Hel_scalerTime, &b_H_1MHz_Hel_scalerTime);
   fChain->SetBranchAddress("H.1MHz_Hel.scalerTimeCut", &H_1MHz_Hel_scalerTimeCut, &b_H_1MHz_Hel_scalerTimeCut);
   fChain->SetBranchAddress("H.ASUM.scaler", &H_ASUM_scaler, &b_H_ASUM_scaler);
   fChain->SetBranchAddress("H.ASUM.scalerCut", &H_ASUM_scalerCut, &b_H_ASUM_scalerCut);
   fChain->SetBranchAddress("H.ASUM.scalerRate", &H_ASUM_scalerRate, &b_H_ASUM_scalerRate);
   fChain->SetBranchAddress("H.BCM1.scaler", &H_BCM1_scaler, &b_H_BCM1_scaler);
   fChain->SetBranchAddress("H.BCM1.scalerCharge", &H_BCM1_scalerCharge, &b_H_BCM1_scalerCharge);
   fChain->SetBranchAddress("H.BCM1.scalerChargeCut", &H_BCM1_scalerChargeCut, &b_H_BCM1_scalerChargeCut);
   fChain->SetBranchAddress("H.BCM1.scalerCurrent", &H_BCM1_scalerCurrent, &b_H_BCM1_scalerCurrent);
   fChain->SetBranchAddress("H.BCM1.scalerCut", &H_BCM1_scalerCut, &b_H_BCM1_scalerCut);
   fChain->SetBranchAddress("H.BCM1.scalerRate", &H_BCM1_scalerRate, &b_H_BCM1_scalerRate);
   fChain->SetBranchAddress("H.BCM1_Hel.scaler", &H_BCM1_Hel_scaler, &b_H_BCM1_Hel_scaler);
   fChain->SetBranchAddress("H.BCM1_Hel.scalerCharge", &H_BCM1_Hel_scalerCharge, &b_H_BCM1_Hel_scalerCharge);
   fChain->SetBranchAddress("H.BCM1_Hel.scalerChargeCut", &H_BCM1_Hel_scalerChargeCut, &b_H_BCM1_Hel_scalerChargeCut);
   fChain->SetBranchAddress("H.BCM1_Hel.scalerCurrent", &H_BCM1_Hel_scalerCurrent, &b_H_BCM1_Hel_scalerCurrent);
   fChain->SetBranchAddress("H.BCM1_Hel.scalerCut", &H_BCM1_Hel_scalerCut, &b_H_BCM1_Hel_scalerCut);
   fChain->SetBranchAddress("H.BCM1_Hel.scalerRate", &H_BCM1_Hel_scalerRate, &b_H_BCM1_Hel_scalerRate);
   fChain->SetBranchAddress("H.BCM2.scaler", &H_BCM2_scaler, &b_H_BCM2_scaler);
   fChain->SetBranchAddress("H.BCM2.scalerCharge", &H_BCM2_scalerCharge, &b_H_BCM2_scalerCharge);
   fChain->SetBranchAddress("H.BCM2.scalerChargeCut", &H_BCM2_scalerChargeCut, &b_H_BCM2_scalerChargeCut);
   fChain->SetBranchAddress("H.BCM2.scalerCurrent", &H_BCM2_scalerCurrent, &b_H_BCM2_scalerCurrent);
   fChain->SetBranchAddress("H.BCM2.scalerCut", &H_BCM2_scalerCut, &b_H_BCM2_scalerCut);
   fChain->SetBranchAddress("H.BCM2.scalerRate", &H_BCM2_scalerRate, &b_H_BCM2_scalerRate);
   fChain->SetBranchAddress("H.BCM2_Hel.scaler", &H_BCM2_Hel_scaler, &b_H_BCM2_Hel_scaler);
   fChain->SetBranchAddress("H.BCM2_Hel.scalerCharge", &H_BCM2_Hel_scalerCharge, &b_H_BCM2_Hel_scalerCharge);
   fChain->SetBranchAddress("H.BCM2_Hel.scalerChargeCut", &H_BCM2_Hel_scalerChargeCut, &b_H_BCM2_Hel_scalerChargeCut);
   fChain->SetBranchAddress("H.BCM2_Hel.scalerCurrent", &H_BCM2_Hel_scalerCurrent, &b_H_BCM2_Hel_scalerCurrent);
   fChain->SetBranchAddress("H.BCM2_Hel.scalerCut", &H_BCM2_Hel_scalerCut, &b_H_BCM2_Hel_scalerCut);
   fChain->SetBranchAddress("H.BCM2_Hel.scalerRate", &H_BCM2_Hel_scalerRate, &b_H_BCM2_Hel_scalerRate);
   fChain->SetBranchAddress("H.BCM4A.scaler", &H_BCM4A_scaler, &b_H_BCM4A_scaler);
   fChain->SetBranchAddress("H.BCM4A.scalerCharge", &H_BCM4A_scalerCharge, &b_H_BCM4A_scalerCharge);
   fChain->SetBranchAddress("H.BCM4A.scalerChargeCut", &H_BCM4A_scalerChargeCut, &b_H_BCM4A_scalerChargeCut);
   fChain->SetBranchAddress("H.BCM4A.scalerCurrent", &H_BCM4A_scalerCurrent, &b_H_BCM4A_scalerCurrent);
   fChain->SetBranchAddress("H.BCM4A.scalerCut", &H_BCM4A_scalerCut, &b_H_BCM4A_scalerCut);
   fChain->SetBranchAddress("H.BCM4A.scalerRate", &H_BCM4A_scalerRate, &b_H_BCM4A_scalerRate);
   fChain->SetBranchAddress("H.BCM4A_Hel.scaler", &H_BCM4A_Hel_scaler, &b_H_BCM4A_Hel_scaler);
   fChain->SetBranchAddress("H.BCM4A_Hel.scalerCharge", &H_BCM4A_Hel_scalerCharge, &b_H_BCM4A_Hel_scalerCharge);
   fChain->SetBranchAddress("H.BCM4A_Hel.scalerChargeCut", &H_BCM4A_Hel_scalerChargeCut, &b_H_BCM4A_Hel_scalerChargeCut);
   fChain->SetBranchAddress("H.BCM4A_Hel.scalerCurrent", &H_BCM4A_Hel_scalerCurrent, &b_H_BCM4A_Hel_scalerCurrent);
   fChain->SetBranchAddress("H.BCM4A_Hel.scalerCut", &H_BCM4A_Hel_scalerCut, &b_H_BCM4A_Hel_scalerCut);
   fChain->SetBranchAddress("H.BCM4A_Hel.scalerRate", &H_BCM4A_Hel_scalerRate, &b_H_BCM4A_Hel_scalerRate);
   fChain->SetBranchAddress("H.BCM4B.scaler", &H_BCM4B_scaler, &b_H_BCM4B_scaler);
   fChain->SetBranchAddress("H.BCM4B.scalerCharge", &H_BCM4B_scalerCharge, &b_H_BCM4B_scalerCharge);
   fChain->SetBranchAddress("H.BCM4B.scalerChargeCut", &H_BCM4B_scalerChargeCut, &b_H_BCM4B_scalerChargeCut);
   fChain->SetBranchAddress("H.BCM4B.scalerCurrent", &H_BCM4B_scalerCurrent, &b_H_BCM4B_scalerCurrent);
   fChain->SetBranchAddress("H.BCM4B.scalerCut", &H_BCM4B_scalerCut, &b_H_BCM4B_scalerCut);
   fChain->SetBranchAddress("H.BCM4B.scalerRate", &H_BCM4B_scalerRate, &b_H_BCM4B_scalerRate);
   fChain->SetBranchAddress("H.BCM4B_Hel.scaler", &H_BCM4B_Hel_scaler, &b_H_BCM4B_Hel_scaler);
   fChain->SetBranchAddress("H.BCM4B_Hel.scalerCharge", &H_BCM4B_Hel_scalerCharge, &b_H_BCM4B_Hel_scalerCharge);
   fChain->SetBranchAddress("H.BCM4B_Hel.scalerChargeCut", &H_BCM4B_Hel_scalerChargeCut, &b_H_BCM4B_Hel_scalerChargeCut);
   fChain->SetBranchAddress("H.BCM4B_Hel.scalerCurrent", &H_BCM4B_Hel_scalerCurrent, &b_H_BCM4B_Hel_scalerCurrent);
   fChain->SetBranchAddress("H.BCM4B_Hel.scalerCut", &H_BCM4B_Hel_scalerCut, &b_H_BCM4B_Hel_scalerCut);
   fChain->SetBranchAddress("H.BCM4B_Hel.scalerRate", &H_BCM4B_Hel_scalerRate, &b_H_BCM4B_Hel_scalerRate);
   fChain->SetBranchAddress("H.BCM4C.scaler", &H_BCM4C_scaler, &b_H_BCM4C_scaler);
   fChain->SetBranchAddress("H.BCM4C.scalerCharge", &H_BCM4C_scalerCharge, &b_H_BCM4C_scalerCharge);
   fChain->SetBranchAddress("H.BCM4C.scalerChargeCut", &H_BCM4C_scalerChargeCut, &b_H_BCM4C_scalerChargeCut);
   fChain->SetBranchAddress("H.BCM4C.scalerCurrent", &H_BCM4C_scalerCurrent, &b_H_BCM4C_scalerCurrent);
   fChain->SetBranchAddress("H.BCM4C.scalerCut", &H_BCM4C_scalerCut, &b_H_BCM4C_scalerCut);
   fChain->SetBranchAddress("H.BCM4C.scalerRate", &H_BCM4C_scalerRate, &b_H_BCM4C_scalerRate);
   fChain->SetBranchAddress("H.BCM4C_Hel.scaler", &H_BCM4C_Hel_scaler, &b_H_BCM4C_Hel_scaler);
   fChain->SetBranchAddress("H.BCM4C_Hel.scalerCharge", &H_BCM4C_Hel_scalerCharge, &b_H_BCM4C_Hel_scalerCharge);
   fChain->SetBranchAddress("H.BCM4C_Hel.scalerChargeCut", &H_BCM4C_Hel_scalerChargeCut, &b_H_BCM4C_Hel_scalerChargeCut);
   fChain->SetBranchAddress("H.BCM4C_Hel.scalerCurrent", &H_BCM4C_Hel_scalerCurrent, &b_H_BCM4C_Hel_scalerCurrent);
   fChain->SetBranchAddress("H.BCM4C_Hel.scalerCut", &H_BCM4C_Hel_scalerCut, &b_H_BCM4C_Hel_scalerCut);
   fChain->SetBranchAddress("H.BCM4C_Hel.scalerRate", &H_BCM4C_Hel_scalerRate, &b_H_BCM4C_Hel_scalerRate);
   fChain->SetBranchAddress("H.BSUM.scaler", &H_BSUM_scaler, &b_H_BSUM_scaler);
   fChain->SetBranchAddress("H.BSUM.scalerCut", &H_BSUM_scalerCut, &b_H_BSUM_scalerCut);
   fChain->SetBranchAddress("H.BSUM.scalerRate", &H_BSUM_scalerRate, &b_H_BSUM_scalerRate);
   fChain->SetBranchAddress("H.CER.scaler", &H_CER_scaler, &b_H_CER_scaler);
   fChain->SetBranchAddress("H.CER.scalerCut", &H_CER_scalerCut, &b_H_CER_scalerCut);
   fChain->SetBranchAddress("H.CER.scalerRate", &H_CER_scalerRate, &b_H_CER_scalerRate);
   fChain->SetBranchAddress("H.CSUM.scaler", &H_CSUM_scaler, &b_H_CSUM_scaler);
   fChain->SetBranchAddress("H.CSUM.scalerCut", &H_CSUM_scalerCut, &b_H_CSUM_scalerCut);
   fChain->SetBranchAddress("H.CSUM.scalerRate", &H_CSUM_scalerRate, &b_H_CSUM_scalerRate);
   fChain->SetBranchAddress("H.DSUM.scaler", &H_DSUM_scaler, &b_H_DSUM_scaler);
   fChain->SetBranchAddress("H.DSUM.scalerCut", &H_DSUM_scalerCut, &b_H_DSUM_scalerCut);
   fChain->SetBranchAddress("H.DSUM.scalerRate", &H_DSUM_scalerRate, &b_H_DSUM_scalerRate);
   fChain->SetBranchAddress("H.EDTM.scaler", &H_EDTM_scaler, &b_H_EDTM_scaler);
   fChain->SetBranchAddress("H.EDTM.scalerCut", &H_EDTM_scalerCut, &b_H_EDTM_scalerCut);
   fChain->SetBranchAddress("H.EDTM.scalerRate", &H_EDTM_scalerRate, &b_H_EDTM_scalerRate);
   fChain->SetBranchAddress("H.EDTM_CP.scaler", &H_EDTM_CP_scaler, &b_H_EDTM_CP_scaler);
   fChain->SetBranchAddress("H.EDTM_CP.scalerCut", &H_EDTM_CP_scalerCut, &b_H_EDTM_CP_scalerCut);
   fChain->SetBranchAddress("H.EDTM_CP.scalerRate", &H_EDTM_CP_scalerRate, &b_H_EDTM_CP_scalerRate);
   fChain->SetBranchAddress("H.Empty.scaler", &H_Empty_scaler, &b_H_Empty_scaler);
   fChain->SetBranchAddress("H.Empty.scalerCut", &H_Empty_scalerCut, &b_H_Empty_scalerCut);
   fChain->SetBranchAddress("H.Empty.scalerRate", &H_Empty_scalerRate, &b_H_Empty_scalerRate);
   fChain->SetBranchAddress("H.Empty_10.scaler", &H_Empty_10_scaler, &b_H_Empty_10_scaler);
   fChain->SetBranchAddress("H.Empty_10.scalerCut", &H_Empty_10_scalerCut, &b_H_Empty_10_scalerCut);
   fChain->SetBranchAddress("H.Empty_10.scalerRate", &H_Empty_10_scalerRate, &b_H_Empty_10_scalerRate);
   fChain->SetBranchAddress("H.Empty_11.scaler", &H_Empty_11_scaler, &b_H_Empty_11_scaler);
   fChain->SetBranchAddress("H.Empty_11.scalerCut", &H_Empty_11_scalerCut, &b_H_Empty_11_scalerCut);
   fChain->SetBranchAddress("H.Empty_11.scalerRate", &H_Empty_11_scalerRate, &b_H_Empty_11_scalerRate);
   fChain->SetBranchAddress("H.Empty_12.scaler", &H_Empty_12_scaler, &b_H_Empty_12_scaler);
   fChain->SetBranchAddress("H.Empty_12.scalerCut", &H_Empty_12_scalerCut, &b_H_Empty_12_scalerCut);
   fChain->SetBranchAddress("H.Empty_12.scalerRate", &H_Empty_12_scalerRate, &b_H_Empty_12_scalerRate);
   fChain->SetBranchAddress("H.Empty_13.scaler", &H_Empty_13_scaler, &b_H_Empty_13_scaler);
   fChain->SetBranchAddress("H.Empty_13.scalerCut", &H_Empty_13_scalerCut, &b_H_Empty_13_scalerCut);
   fChain->SetBranchAddress("H.Empty_13.scalerRate", &H_Empty_13_scalerRate, &b_H_Empty_13_scalerRate);
   fChain->SetBranchAddress("H.Empty_14.scaler", &H_Empty_14_scaler, &b_H_Empty_14_scaler);
   fChain->SetBranchAddress("H.Empty_14.scalerCut", &H_Empty_14_scalerCut, &b_H_Empty_14_scalerCut);
   fChain->SetBranchAddress("H.Empty_14.scalerRate", &H_Empty_14_scalerRate, &b_H_Empty_14_scalerRate);
   fChain->SetBranchAddress("H.Empty_15.scaler", &H_Empty_15_scaler, &b_H_Empty_15_scaler);
   fChain->SetBranchAddress("H.Empty_15.scalerCut", &H_Empty_15_scalerCut, &b_H_Empty_15_scalerCut);
   fChain->SetBranchAddress("H.Empty_15.scalerRate", &H_Empty_15_scalerRate, &b_H_Empty_15_scalerRate);
   fChain->SetBranchAddress("H.Empty_16.scaler", &H_Empty_16_scaler, &b_H_Empty_16_scaler);
   fChain->SetBranchAddress("H.Empty_16.scalerCut", &H_Empty_16_scalerCut, &b_H_Empty_16_scalerCut);
   fChain->SetBranchAddress("H.Empty_16.scalerRate", &H_Empty_16_scalerRate, &b_H_Empty_16_scalerRate);
   fChain->SetBranchAddress("H.Empty_17.scaler", &H_Empty_17_scaler, &b_H_Empty_17_scaler);
   fChain->SetBranchAddress("H.Empty_17.scalerCut", &H_Empty_17_scalerCut, &b_H_Empty_17_scalerCut);
   fChain->SetBranchAddress("H.Empty_17.scalerRate", &H_Empty_17_scalerRate, &b_H_Empty_17_scalerRate);
   fChain->SetBranchAddress("H.Empty_18.scaler", &H_Empty_18_scaler, &b_H_Empty_18_scaler);
   fChain->SetBranchAddress("H.Empty_18.scalerCut", &H_Empty_18_scalerCut, &b_H_Empty_18_scalerCut);
   fChain->SetBranchAddress("H.Empty_18.scalerRate", &H_Empty_18_scalerRate, &b_H_Empty_18_scalerRate);
   fChain->SetBranchAddress("H.Empty_19.scaler", &H_Empty_19_scaler, &b_H_Empty_19_scaler);
   fChain->SetBranchAddress("H.Empty_19.scalerCut", &H_Empty_19_scalerCut, &b_H_Empty_19_scalerCut);
   fChain->SetBranchAddress("H.Empty_19.scalerRate", &H_Empty_19_scalerRate, &b_H_Empty_19_scalerRate);
   fChain->SetBranchAddress("H.Empty_2.scaler", &H_Empty_2_scaler, &b_H_Empty_2_scaler);
   fChain->SetBranchAddress("H.Empty_2.scalerCut", &H_Empty_2_scalerCut, &b_H_Empty_2_scalerCut);
   fChain->SetBranchAddress("H.Empty_2.scalerRate", &H_Empty_2_scalerRate, &b_H_Empty_2_scalerRate);
   fChain->SetBranchAddress("H.Empty_20.scaler", &H_Empty_20_scaler, &b_H_Empty_20_scaler);
   fChain->SetBranchAddress("H.Empty_20.scalerCut", &H_Empty_20_scalerCut, &b_H_Empty_20_scalerCut);
   fChain->SetBranchAddress("H.Empty_20.scalerRate", &H_Empty_20_scalerRate, &b_H_Empty_20_scalerRate);
   fChain->SetBranchAddress("H.Empty_21.scaler", &H_Empty_21_scaler, &b_H_Empty_21_scaler);
   fChain->SetBranchAddress("H.Empty_21.scalerCut", &H_Empty_21_scalerCut, &b_H_Empty_21_scalerCut);
   fChain->SetBranchAddress("H.Empty_21.scalerRate", &H_Empty_21_scalerRate, &b_H_Empty_21_scalerRate);
   fChain->SetBranchAddress("H.Empty_22.scaler", &H_Empty_22_scaler, &b_H_Empty_22_scaler);
   fChain->SetBranchAddress("H.Empty_22.scalerCut", &H_Empty_22_scalerCut, &b_H_Empty_22_scalerCut);
   fChain->SetBranchAddress("H.Empty_22.scalerRate", &H_Empty_22_scalerRate, &b_H_Empty_22_scalerRate);
   fChain->SetBranchAddress("H.Empty_23.scaler", &H_Empty_23_scaler, &b_H_Empty_23_scaler);
   fChain->SetBranchAddress("H.Empty_23.scalerCut", &H_Empty_23_scalerCut, &b_H_Empty_23_scalerCut);
   fChain->SetBranchAddress("H.Empty_23.scalerRate", &H_Empty_23_scalerRate, &b_H_Empty_23_scalerRate);
   fChain->SetBranchAddress("H.Empty_24.scaler", &H_Empty_24_scaler, &b_H_Empty_24_scaler);
   fChain->SetBranchAddress("H.Empty_24.scalerCut", &H_Empty_24_scalerCut, &b_H_Empty_24_scalerCut);
   fChain->SetBranchAddress("H.Empty_24.scalerRate", &H_Empty_24_scalerRate, &b_H_Empty_24_scalerRate);
   fChain->SetBranchAddress("H.Empty_25.scaler", &H_Empty_25_scaler, &b_H_Empty_25_scaler);
   fChain->SetBranchAddress("H.Empty_25.scalerCut", &H_Empty_25_scalerCut, &b_H_Empty_25_scalerCut);
   fChain->SetBranchAddress("H.Empty_25.scalerRate", &H_Empty_25_scalerRate, &b_H_Empty_25_scalerRate);
   fChain->SetBranchAddress("H.Empty_26.scaler", &H_Empty_26_scaler, &b_H_Empty_26_scaler);
   fChain->SetBranchAddress("H.Empty_26.scalerCut", &H_Empty_26_scalerCut, &b_H_Empty_26_scalerCut);
   fChain->SetBranchAddress("H.Empty_26.scalerRate", &H_Empty_26_scalerRate, &b_H_Empty_26_scalerRate);
   fChain->SetBranchAddress("H.Empty_27.scaler", &H_Empty_27_scaler, &b_H_Empty_27_scaler);
   fChain->SetBranchAddress("H.Empty_27.scalerCut", &H_Empty_27_scalerCut, &b_H_Empty_27_scalerCut);
   fChain->SetBranchAddress("H.Empty_27.scalerRate", &H_Empty_27_scalerRate, &b_H_Empty_27_scalerRate);
   fChain->SetBranchAddress("H.Empty_28.scaler", &H_Empty_28_scaler, &b_H_Empty_28_scaler);
   fChain->SetBranchAddress("H.Empty_28.scalerCut", &H_Empty_28_scalerCut, &b_H_Empty_28_scalerCut);
   fChain->SetBranchAddress("H.Empty_28.scalerRate", &H_Empty_28_scalerRate, &b_H_Empty_28_scalerRate);
   fChain->SetBranchAddress("H.Empty_29.scaler", &H_Empty_29_scaler, &b_H_Empty_29_scaler);
   fChain->SetBranchAddress("H.Empty_29.scalerCut", &H_Empty_29_scalerCut, &b_H_Empty_29_scalerCut);
   fChain->SetBranchAddress("H.Empty_29.scalerRate", &H_Empty_29_scalerRate, &b_H_Empty_29_scalerRate);
   fChain->SetBranchAddress("H.Empty_3.scaler", &H_Empty_3_scaler, &b_H_Empty_3_scaler);
   fChain->SetBranchAddress("H.Empty_3.scalerCut", &H_Empty_3_scalerCut, &b_H_Empty_3_scalerCut);
   fChain->SetBranchAddress("H.Empty_3.scalerRate", &H_Empty_3_scalerRate, &b_H_Empty_3_scalerRate);
   fChain->SetBranchAddress("H.Empty_30.scaler", &H_Empty_30_scaler, &b_H_Empty_30_scaler);
   fChain->SetBranchAddress("H.Empty_30.scalerCut", &H_Empty_30_scalerCut, &b_H_Empty_30_scalerCut);
   fChain->SetBranchAddress("H.Empty_30.scalerRate", &H_Empty_30_scalerRate, &b_H_Empty_30_scalerRate);
   fChain->SetBranchAddress("H.Empty_31.scaler", &H_Empty_31_scaler, &b_H_Empty_31_scaler);
   fChain->SetBranchAddress("H.Empty_31.scalerCut", &H_Empty_31_scalerCut, &b_H_Empty_31_scalerCut);
   fChain->SetBranchAddress("H.Empty_31.scalerRate", &H_Empty_31_scalerRate, &b_H_Empty_31_scalerRate);
   fChain->SetBranchAddress("H.Empty_32.scaler", &H_Empty_32_scaler, &b_H_Empty_32_scaler);
   fChain->SetBranchAddress("H.Empty_32.scalerCut", &H_Empty_32_scalerCut, &b_H_Empty_32_scalerCut);
   fChain->SetBranchAddress("H.Empty_32.scalerRate", &H_Empty_32_scalerRate, &b_H_Empty_32_scalerRate);
   fChain->SetBranchAddress("H.Empty_33.scaler", &H_Empty_33_scaler, &b_H_Empty_33_scaler);
   fChain->SetBranchAddress("H.Empty_33.scalerCut", &H_Empty_33_scalerCut, &b_H_Empty_33_scalerCut);
   fChain->SetBranchAddress("H.Empty_33.scalerRate", &H_Empty_33_scalerRate, &b_H_Empty_33_scalerRate);
   fChain->SetBranchAddress("H.Empty_34.scaler", &H_Empty_34_scaler, &b_H_Empty_34_scaler);
   fChain->SetBranchAddress("H.Empty_34.scalerCut", &H_Empty_34_scalerCut, &b_H_Empty_34_scalerCut);
   fChain->SetBranchAddress("H.Empty_34.scalerRate", &H_Empty_34_scalerRate, &b_H_Empty_34_scalerRate);
   fChain->SetBranchAddress("H.Empty_35.scaler", &H_Empty_35_scaler, &b_H_Empty_35_scaler);
   fChain->SetBranchAddress("H.Empty_35.scalerCut", &H_Empty_35_scalerCut, &b_H_Empty_35_scalerCut);
   fChain->SetBranchAddress("H.Empty_35.scalerRate", &H_Empty_35_scalerRate, &b_H_Empty_35_scalerRate);
   fChain->SetBranchAddress("H.Empty_36.scaler", &H_Empty_36_scaler, &b_H_Empty_36_scaler);
   fChain->SetBranchAddress("H.Empty_36.scalerCut", &H_Empty_36_scalerCut, &b_H_Empty_36_scalerCut);
   fChain->SetBranchAddress("H.Empty_36.scalerRate", &H_Empty_36_scalerRate, &b_H_Empty_36_scalerRate);
   fChain->SetBranchAddress("H.Empty_37.scaler", &H_Empty_37_scaler, &b_H_Empty_37_scaler);
   fChain->SetBranchAddress("H.Empty_37.scalerCut", &H_Empty_37_scalerCut, &b_H_Empty_37_scalerCut);
   fChain->SetBranchAddress("H.Empty_37.scalerRate", &H_Empty_37_scalerRate, &b_H_Empty_37_scalerRate);
   fChain->SetBranchAddress("H.Empty_38.scaler", &H_Empty_38_scaler, &b_H_Empty_38_scaler);
   fChain->SetBranchAddress("H.Empty_38.scalerCut", &H_Empty_38_scalerCut, &b_H_Empty_38_scalerCut);
   fChain->SetBranchAddress("H.Empty_38.scalerRate", &H_Empty_38_scalerRate, &b_H_Empty_38_scalerRate);
   fChain->SetBranchAddress("H.Empty_39.scaler", &H_Empty_39_scaler, &b_H_Empty_39_scaler);
   fChain->SetBranchAddress("H.Empty_39.scalerCut", &H_Empty_39_scalerCut, &b_H_Empty_39_scalerCut);
   fChain->SetBranchAddress("H.Empty_39.scalerRate", &H_Empty_39_scalerRate, &b_H_Empty_39_scalerRate);
   fChain->SetBranchAddress("H.Empty_4.scaler", &H_Empty_4_scaler, &b_H_Empty_4_scaler);
   fChain->SetBranchAddress("H.Empty_4.scalerCut", &H_Empty_4_scalerCut, &b_H_Empty_4_scalerCut);
   fChain->SetBranchAddress("H.Empty_4.scalerRate", &H_Empty_4_scalerRate, &b_H_Empty_4_scalerRate);
   fChain->SetBranchAddress("H.Empty_40.scaler", &H_Empty_40_scaler, &b_H_Empty_40_scaler);
   fChain->SetBranchAddress("H.Empty_40.scalerCut", &H_Empty_40_scalerCut, &b_H_Empty_40_scalerCut);
   fChain->SetBranchAddress("H.Empty_40.scalerRate", &H_Empty_40_scalerRate, &b_H_Empty_40_scalerRate);
   fChain->SetBranchAddress("H.Empty_41.scaler", &H_Empty_41_scaler, &b_H_Empty_41_scaler);
   fChain->SetBranchAddress("H.Empty_41.scalerCut", &H_Empty_41_scalerCut, &b_H_Empty_41_scalerCut);
   fChain->SetBranchAddress("H.Empty_41.scalerRate", &H_Empty_41_scalerRate, &b_H_Empty_41_scalerRate);
   fChain->SetBranchAddress("H.Empty_42.scaler", &H_Empty_42_scaler, &b_H_Empty_42_scaler);
   fChain->SetBranchAddress("H.Empty_42.scalerCut", &H_Empty_42_scalerCut, &b_H_Empty_42_scalerCut);
   fChain->SetBranchAddress("H.Empty_42.scalerRate", &H_Empty_42_scalerRate, &b_H_Empty_42_scalerRate);
   fChain->SetBranchAddress("H.Empty_43.scaler", &H_Empty_43_scaler, &b_H_Empty_43_scaler);
   fChain->SetBranchAddress("H.Empty_43.scalerCut", &H_Empty_43_scalerCut, &b_H_Empty_43_scalerCut);
   fChain->SetBranchAddress("H.Empty_43.scalerRate", &H_Empty_43_scalerRate, &b_H_Empty_43_scalerRate);
   fChain->SetBranchAddress("H.Empty_44.scaler", &H_Empty_44_scaler, &b_H_Empty_44_scaler);
   fChain->SetBranchAddress("H.Empty_44.scalerCut", &H_Empty_44_scalerCut, &b_H_Empty_44_scalerCut);
   fChain->SetBranchAddress("H.Empty_44.scalerRate", &H_Empty_44_scalerRate, &b_H_Empty_44_scalerRate);
   fChain->SetBranchAddress("H.Empty_45.scaler", &H_Empty_45_scaler, &b_H_Empty_45_scaler);
   fChain->SetBranchAddress("H.Empty_45.scalerCut", &H_Empty_45_scalerCut, &b_H_Empty_45_scalerCut);
   fChain->SetBranchAddress("H.Empty_45.scalerRate", &H_Empty_45_scalerRate, &b_H_Empty_45_scalerRate);
   fChain->SetBranchAddress("H.Empty_46.scaler", &H_Empty_46_scaler, &b_H_Empty_46_scaler);
   fChain->SetBranchAddress("H.Empty_46.scalerCut", &H_Empty_46_scalerCut, &b_H_Empty_46_scalerCut);
   fChain->SetBranchAddress("H.Empty_46.scalerRate", &H_Empty_46_scalerRate, &b_H_Empty_46_scalerRate);
   fChain->SetBranchAddress("H.Empty_47.scaler", &H_Empty_47_scaler, &b_H_Empty_47_scaler);
   fChain->SetBranchAddress("H.Empty_47.scalerCut", &H_Empty_47_scalerCut, &b_H_Empty_47_scalerCut);
   fChain->SetBranchAddress("H.Empty_47.scalerRate", &H_Empty_47_scalerRate, &b_H_Empty_47_scalerRate);
   fChain->SetBranchAddress("H.Empty_48.scaler", &H_Empty_48_scaler, &b_H_Empty_48_scaler);
   fChain->SetBranchAddress("H.Empty_48.scalerCut", &H_Empty_48_scalerCut, &b_H_Empty_48_scalerCut);
   fChain->SetBranchAddress("H.Empty_48.scalerRate", &H_Empty_48_scalerRate, &b_H_Empty_48_scalerRate);
   fChain->SetBranchAddress("H.Empty_49.scaler", &H_Empty_49_scaler, &b_H_Empty_49_scaler);
   fChain->SetBranchAddress("H.Empty_49.scalerCut", &H_Empty_49_scalerCut, &b_H_Empty_49_scalerCut);
   fChain->SetBranchAddress("H.Empty_49.scalerRate", &H_Empty_49_scalerRate, &b_H_Empty_49_scalerRate);
   fChain->SetBranchAddress("H.Empty_5.scaler", &H_Empty_5_scaler, &b_H_Empty_5_scaler);
   fChain->SetBranchAddress("H.Empty_5.scalerCut", &H_Empty_5_scalerCut, &b_H_Empty_5_scalerCut);
   fChain->SetBranchAddress("H.Empty_5.scalerRate", &H_Empty_5_scalerRate, &b_H_Empty_5_scalerRate);
   fChain->SetBranchAddress("H.Empty_50.scaler", &H_Empty_50_scaler, &b_H_Empty_50_scaler);
   fChain->SetBranchAddress("H.Empty_50.scalerCut", &H_Empty_50_scalerCut, &b_H_Empty_50_scalerCut);
   fChain->SetBranchAddress("H.Empty_50.scalerRate", &H_Empty_50_scalerRate, &b_H_Empty_50_scalerRate);
   fChain->SetBranchAddress("H.Empty_51.scaler", &H_Empty_51_scaler, &b_H_Empty_51_scaler);
   fChain->SetBranchAddress("H.Empty_51.scalerCut", &H_Empty_51_scalerCut, &b_H_Empty_51_scalerCut);
   fChain->SetBranchAddress("H.Empty_51.scalerRate", &H_Empty_51_scalerRate, &b_H_Empty_51_scalerRate);
   fChain->SetBranchAddress("H.Empty_52.scaler", &H_Empty_52_scaler, &b_H_Empty_52_scaler);
   fChain->SetBranchAddress("H.Empty_52.scalerCut", &H_Empty_52_scalerCut, &b_H_Empty_52_scalerCut);
   fChain->SetBranchAddress("H.Empty_52.scalerRate", &H_Empty_52_scalerRate, &b_H_Empty_52_scalerRate);
   fChain->SetBranchAddress("H.Empty_53.scaler", &H_Empty_53_scaler, &b_H_Empty_53_scaler);
   fChain->SetBranchAddress("H.Empty_53.scalerCut", &H_Empty_53_scalerCut, &b_H_Empty_53_scalerCut);
   fChain->SetBranchAddress("H.Empty_53.scalerRate", &H_Empty_53_scalerRate, &b_H_Empty_53_scalerRate);
   fChain->SetBranchAddress("H.Empty_54.scaler", &H_Empty_54_scaler, &b_H_Empty_54_scaler);
   fChain->SetBranchAddress("H.Empty_54.scalerCut", &H_Empty_54_scalerCut, &b_H_Empty_54_scalerCut);
   fChain->SetBranchAddress("H.Empty_54.scalerRate", &H_Empty_54_scalerRate, &b_H_Empty_54_scalerRate);
   fChain->SetBranchAddress("H.Empty_55.scaler", &H_Empty_55_scaler, &b_H_Empty_55_scaler);
   fChain->SetBranchAddress("H.Empty_55.scalerCut", &H_Empty_55_scalerCut, &b_H_Empty_55_scalerCut);
   fChain->SetBranchAddress("H.Empty_55.scalerRate", &H_Empty_55_scalerRate, &b_H_Empty_55_scalerRate);
   fChain->SetBranchAddress("H.Empty_56.scaler", &H_Empty_56_scaler, &b_H_Empty_56_scaler);
   fChain->SetBranchAddress("H.Empty_56.scalerCut", &H_Empty_56_scalerCut, &b_H_Empty_56_scalerCut);
   fChain->SetBranchAddress("H.Empty_56.scalerRate", &H_Empty_56_scalerRate, &b_H_Empty_56_scalerRate);
   fChain->SetBranchAddress("H.Empty_57.scaler", &H_Empty_57_scaler, &b_H_Empty_57_scaler);
   fChain->SetBranchAddress("H.Empty_57.scalerCut", &H_Empty_57_scalerCut, &b_H_Empty_57_scalerCut);
   fChain->SetBranchAddress("H.Empty_57.scalerRate", &H_Empty_57_scalerRate, &b_H_Empty_57_scalerRate);
   fChain->SetBranchAddress("H.Empty_58.scaler", &H_Empty_58_scaler, &b_H_Empty_58_scaler);
   fChain->SetBranchAddress("H.Empty_58.scalerCut", &H_Empty_58_scalerCut, &b_H_Empty_58_scalerCut);
   fChain->SetBranchAddress("H.Empty_58.scalerRate", &H_Empty_58_scalerRate, &b_H_Empty_58_scalerRate);
   fChain->SetBranchAddress("H.Empty_59.scaler", &H_Empty_59_scaler, &b_H_Empty_59_scaler);
   fChain->SetBranchAddress("H.Empty_59.scalerCut", &H_Empty_59_scalerCut, &b_H_Empty_59_scalerCut);
   fChain->SetBranchAddress("H.Empty_59.scalerRate", &H_Empty_59_scalerRate, &b_H_Empty_59_scalerRate);
   fChain->SetBranchAddress("H.Empty_6.scaler", &H_Empty_6_scaler, &b_H_Empty_6_scaler);
   fChain->SetBranchAddress("H.Empty_6.scalerCut", &H_Empty_6_scalerCut, &b_H_Empty_6_scalerCut);
   fChain->SetBranchAddress("H.Empty_6.scalerRate", &H_Empty_6_scalerRate, &b_H_Empty_6_scalerRate);
   fChain->SetBranchAddress("H.Empty_60.scaler", &H_Empty_60_scaler, &b_H_Empty_60_scaler);
   fChain->SetBranchAddress("H.Empty_60.scalerCut", &H_Empty_60_scalerCut, &b_H_Empty_60_scalerCut);
   fChain->SetBranchAddress("H.Empty_60.scalerRate", &H_Empty_60_scalerRate, &b_H_Empty_60_scalerRate);
   fChain->SetBranchAddress("H.Empty_7.scaler", &H_Empty_7_scaler, &b_H_Empty_7_scaler);
   fChain->SetBranchAddress("H.Empty_7.scalerCut", &H_Empty_7_scalerCut, &b_H_Empty_7_scalerCut);
   fChain->SetBranchAddress("H.Empty_7.scalerRate", &H_Empty_7_scalerRate, &b_H_Empty_7_scalerRate);
   fChain->SetBranchAddress("H.Empty_8.scaler", &H_Empty_8_scaler, &b_H_Empty_8_scaler);
   fChain->SetBranchAddress("H.Empty_8.scalerCut", &H_Empty_8_scalerCut, &b_H_Empty_8_scalerCut);
   fChain->SetBranchAddress("H.Empty_8.scalerRate", &H_Empty_8_scalerRate, &b_H_Empty_8_scalerRate);
   fChain->SetBranchAddress("H.Empty_9.scaler", &H_Empty_9_scaler, &b_H_Empty_9_scaler);
   fChain->SetBranchAddress("H.Empty_9.scalerCut", &H_Empty_9_scalerCut, &b_H_Empty_9_scalerCut);
   fChain->SetBranchAddress("H.Empty_9.scalerRate", &H_Empty_9_scalerRate, &b_H_Empty_9_scalerRate);
   fChain->SetBranchAddress("H.HAModStat.scaler", &H_HAModStat_scaler, &b_H_HAModStat_scaler);
   fChain->SetBranchAddress("H.HAModStat.scalerCut", &H_HAModStat_scalerCut, &b_H_HAModStat_scalerCut);
   fChain->SetBranchAddress("H.HAModStat.scalerRate", &H_HAModStat_scalerRate, &b_H_HAModStat_scalerRate);
   fChain->SetBranchAddress("H.PRHI.scaler", &H_PRHI_scaler, &b_H_PRHI_scaler);
   fChain->SetBranchAddress("H.PRHI.scalerCut", &H_PRHI_scalerCut, &b_H_PRHI_scalerCut);
   fChain->SetBranchAddress("H.PRHI.scalerRate", &H_PRHI_scalerRate, &b_H_PRHI_scalerRate);
   fChain->SetBranchAddress("H.PRLO.scaler", &H_PRLO_scaler, &b_H_PRLO_scaler);
   fChain->SetBranchAddress("H.PRLO.scalerCut", &H_PRLO_scalerCut, &b_H_PRLO_scalerCut);
   fChain->SetBranchAddress("H.PRLO.scalerRate", &H_PRLO_scalerRate, &b_H_PRLO_scalerRate);
   fChain->SetBranchAddress("H.S1X.scaler", &H_S1X_scaler, &b_H_S1X_scaler);
   fChain->SetBranchAddress("H.S1X.scalerCut", &H_S1X_scalerCut, &b_H_S1X_scalerCut);
   fChain->SetBranchAddress("H.S1X.scalerRate", &H_S1X_scalerRate, &b_H_S1X_scalerRate);
   fChain->SetBranchAddress("H.S1XS1Y.scaler", &H_S1XS1Y_scaler, &b_H_S1XS1Y_scaler);
   fChain->SetBranchAddress("H.S1XS1Y.scalerCut", &H_S1XS1Y_scalerCut, &b_H_S1XS1Y_scalerCut);
   fChain->SetBranchAddress("H.S1XS1Y.scalerRate", &H_S1XS1Y_scalerRate, &b_H_S1XS1Y_scalerRate);
   fChain->SetBranchAddress("H.S1Y.scaler", &H_S1Y_scaler, &b_H_S1Y_scaler);
   fChain->SetBranchAddress("H.S1Y.scalerCut", &H_S1Y_scalerCut, &b_H_S1Y_scalerCut);
   fChain->SetBranchAddress("H.S1Y.scalerRate", &H_S1Y_scalerRate, &b_H_S1Y_scalerRate);
   fChain->SetBranchAddress("H.S2X.scaler", &H_S2X_scaler, &b_H_S2X_scaler);
   fChain->SetBranchAddress("H.S2X.scalerCut", &H_S2X_scalerCut, &b_H_S2X_scalerCut);
   fChain->SetBranchAddress("H.S2X.scalerRate", &H_S2X_scalerRate, &b_H_S2X_scalerRate);
   fChain->SetBranchAddress("H.S2XS2Y.scaler", &H_S2XS2Y_scaler, &b_H_S2XS2Y_scaler);
   fChain->SetBranchAddress("H.S2XS2Y.scalerCut", &H_S2XS2Y_scalerCut, &b_H_S2XS2Y_scalerCut);
   fChain->SetBranchAddress("H.S2XS2Y.scalerRate", &H_S2XS2Y_scalerRate, &b_H_S2XS2Y_scalerRate);
   fChain->SetBranchAddress("H.S2Y.scaler", &H_S2Y_scaler, &b_H_S2Y_scaler);
   fChain->SetBranchAddress("H.S2Y.scalerCut", &H_S2Y_scalerCut, &b_H_S2Y_scalerCut);
   fChain->SetBranchAddress("H.S2Y.scalerRate", &H_S2Y_scalerRate, &b_H_S2Y_scalerRate);
   fChain->SetBranchAddress("H.SHLO.scaler", &H_SHLO_scaler, &b_H_SHLO_scaler);
   fChain->SetBranchAddress("H.SHLO.scalerCut", &H_SHLO_scalerCut, &b_H_SHLO_scalerCut);
   fChain->SetBranchAddress("H.SHLO.scalerRate", &H_SHLO_scalerRate, &b_H_SHLO_scalerRate);
   fChain->SetBranchAddress("H.Unser.scaler", &H_Unser_scaler, &b_H_Unser_scaler);
   fChain->SetBranchAddress("H.Unser.scalerCharge", &H_Unser_scalerCharge, &b_H_Unser_scalerCharge);
   fChain->SetBranchAddress("H.Unser.scalerChargeCut", &H_Unser_scalerChargeCut, &b_H_Unser_scalerChargeCut);
   fChain->SetBranchAddress("H.Unser.scalerCurrent", &H_Unser_scalerCurrent, &b_H_Unser_scalerCurrent);
   fChain->SetBranchAddress("H.Unser.scalerCut", &H_Unser_scalerCut, &b_H_Unser_scalerCut);
   fChain->SetBranchAddress("H.Unser.scalerRate", &H_Unser_scalerRate, &b_H_Unser_scalerRate);
   fChain->SetBranchAddress("H.Unser_Hel.scaler", &H_Unser_Hel_scaler, &b_H_Unser_Hel_scaler);
   fChain->SetBranchAddress("H.Unser_Hel.scalerCharge", &H_Unser_Hel_scalerCharge, &b_H_Unser_Hel_scalerCharge);
   fChain->SetBranchAddress("H.Unser_Hel.scalerChargeCut", &H_Unser_Hel_scalerChargeCut, &b_H_Unser_Hel_scalerChargeCut);
   fChain->SetBranchAddress("H.Unser_Hel.scalerCurrent", &H_Unser_Hel_scalerCurrent, &b_H_Unser_Hel_scalerCurrent);
   fChain->SetBranchAddress("H.Unser_Hel.scalerCut", &H_Unser_Hel_scalerCut, &b_H_Unser_Hel_scalerCut);
   fChain->SetBranchAddress("H.Unser_Hel.scalerRate", &H_Unser_Hel_scalerRate, &b_H_Unser_Hel_scalerRate);
   fChain->SetBranchAddress("H.cal.1pr.eplane", &H_cal_1pr_eplane, &b_H_cal_1pr_eplane);
   fChain->SetBranchAddress("H.cal.1pr.eplane_neg", &H_cal_1pr_eplane_neg, &b_H_cal_1pr_eplane_neg);
   fChain->SetBranchAddress("H.cal.1pr.eplane_pos", &H_cal_1pr_eplane_pos, &b_H_cal_1pr_eplane_pos);
   fChain->SetBranchAddress("H.cal.1pr.totNumGoodNegAdcHits", &H_cal_1pr_totNumGoodNegAdcHits, &b_H_cal_1pr_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.totNumGoodPosAdcHits", &H_cal_1pr_totNumGoodPosAdcHits, &b_H_cal_1pr_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.totNumNegAdcHits", &H_cal_1pr_totNumNegAdcHits, &b_H_cal_1pr_totNumNegAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.totNumPosAdcHits", &H_cal_1pr_totNumPosAdcHits, &b_H_cal_1pr_totNumPosAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.totnumAdcHits", &H_cal_1pr_totnumAdcHits, &b_H_cal_1pr_totnumAdcHits);
   fChain->SetBranchAddress("H.cal.1pr.totnumGoodAdcHits", &H_cal_1pr_totnumGoodAdcHits, &b_H_cal_1pr_totnumGoodAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.eplane", &H_cal_2ta_eplane, &b_H_cal_2ta_eplane);
   fChain->SetBranchAddress("H.cal.2ta.eplane_neg", &H_cal_2ta_eplane_neg, &b_H_cal_2ta_eplane_neg);
   fChain->SetBranchAddress("H.cal.2ta.eplane_pos", &H_cal_2ta_eplane_pos, &b_H_cal_2ta_eplane_pos);
   fChain->SetBranchAddress("H.cal.2ta.totNumGoodNegAdcHits", &H_cal_2ta_totNumGoodNegAdcHits, &b_H_cal_2ta_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.totNumGoodPosAdcHits", &H_cal_2ta_totNumGoodPosAdcHits, &b_H_cal_2ta_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.totNumNegAdcHits", &H_cal_2ta_totNumNegAdcHits, &b_H_cal_2ta_totNumNegAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.totNumPosAdcHits", &H_cal_2ta_totNumPosAdcHits, &b_H_cal_2ta_totNumPosAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.totnumAdcHits", &H_cal_2ta_totnumAdcHits, &b_H_cal_2ta_totnumAdcHits);
   fChain->SetBranchAddress("H.cal.2ta.totnumGoodAdcHits", &H_cal_2ta_totnumGoodAdcHits, &b_H_cal_2ta_totnumGoodAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.eplane", &H_cal_3ta_eplane, &b_H_cal_3ta_eplane);
   fChain->SetBranchAddress("H.cal.3ta.eplane_neg", &H_cal_3ta_eplane_neg, &b_H_cal_3ta_eplane_neg);
   fChain->SetBranchAddress("H.cal.3ta.eplane_pos", &H_cal_3ta_eplane_pos, &b_H_cal_3ta_eplane_pos);
   fChain->SetBranchAddress("H.cal.3ta.totNumGoodNegAdcHits", &H_cal_3ta_totNumGoodNegAdcHits, &b_H_cal_3ta_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.totNumGoodPosAdcHits", &H_cal_3ta_totNumGoodPosAdcHits, &b_H_cal_3ta_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.totNumNegAdcHits", &H_cal_3ta_totNumNegAdcHits, &b_H_cal_3ta_totNumNegAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.totNumPosAdcHits", &H_cal_3ta_totNumPosAdcHits, &b_H_cal_3ta_totNumPosAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.totnumAdcHits", &H_cal_3ta_totnumAdcHits, &b_H_cal_3ta_totnumAdcHits);
   fChain->SetBranchAddress("H.cal.3ta.totnumGoodAdcHits", &H_cal_3ta_totnumGoodAdcHits, &b_H_cal_3ta_totnumGoodAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.eplane", &H_cal_4ta_eplane, &b_H_cal_4ta_eplane);
   fChain->SetBranchAddress("H.cal.4ta.eplane_neg", &H_cal_4ta_eplane_neg, &b_H_cal_4ta_eplane_neg);
   fChain->SetBranchAddress("H.cal.4ta.eplane_pos", &H_cal_4ta_eplane_pos, &b_H_cal_4ta_eplane_pos);
   fChain->SetBranchAddress("H.cal.4ta.totNumGoodNegAdcHits", &H_cal_4ta_totNumGoodNegAdcHits, &b_H_cal_4ta_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.totNumGoodPosAdcHits", &H_cal_4ta_totNumGoodPosAdcHits, &b_H_cal_4ta_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.totNumNegAdcHits", &H_cal_4ta_totNumNegAdcHits, &b_H_cal_4ta_totNumNegAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.totNumPosAdcHits", &H_cal_4ta_totNumPosAdcHits, &b_H_cal_4ta_totNumPosAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.totnumAdcHits", &H_cal_4ta_totnumAdcHits, &b_H_cal_4ta_totnumAdcHits);
   fChain->SetBranchAddress("H.cal.4ta.totnumGoodAdcHits", &H_cal_4ta_totnumGoodAdcHits, &b_H_cal_4ta_totnumGoodAdcHits);
   fChain->SetBranchAddress("H.cal.eprtrack", &H_cal_eprtrack, &b_H_cal_eprtrack);
   fChain->SetBranchAddress("H.cal.eprtracknorm", &H_cal_eprtracknorm, &b_H_cal_eprtracknorm);
   fChain->SetBranchAddress("H.cal.etot", &H_cal_etot, &b_H_cal_etot);
   fChain->SetBranchAddress("H.cal.etotnorm", &H_cal_etotnorm, &b_H_cal_etotnorm);
   fChain->SetBranchAddress("H.cal.etottracknorm", &H_cal_etottracknorm, &b_H_cal_etottracknorm);
   fChain->SetBranchAddress("H.cal.etrack", &H_cal_etrack, &b_H_cal_etrack);
   fChain->SetBranchAddress("H.cal.etracknorm", &H_cal_etracknorm, &b_H_cal_etracknorm);
   fChain->SetBranchAddress("H.cal.nclust", &H_cal_nclust, &b_H_cal_nclust);
   fChain->SetBranchAddress("H.cal.nclusttrack", &H_cal_nclusttrack, &b_H_cal_nclusttrack);
   fChain->SetBranchAddress("H.cal.nhits", &H_cal_nhits, &b_H_cal_nhits);
   fChain->SetBranchAddress("H.cal.ntracks", &H_cal_ntracks, &b_H_cal_ntracks);
   fChain->SetBranchAddress("H.cal.xclusttrack", &H_cal_xclusttrack, &b_H_cal_xclusttrack);
   fChain->SetBranchAddress("H.cal.xtrack", &H_cal_xtrack, &b_H_cal_xtrack);
   fChain->SetBranchAddress("H.cal.yclusttrack", &H_cal_yclusttrack, &b_H_cal_yclusttrack);
   fChain->SetBranchAddress("H.cal.ytrack", &H_cal_ytrack, &b_H_cal_ytrack);
   fChain->SetBranchAddress("H.cer.RefTime", &H_cer_RefTime, &b_H_cer_RefTime);
   fChain->SetBranchAddress("H.cer.npeSum", &H_cer_npeSum, &b_H_cer_npeSum);
   fChain->SetBranchAddress("H.cer.totNumAdcHits", &H_cer_totNumAdcHits, &b_H_cer_totNumAdcHits);
   fChain->SetBranchAddress("H.cer.totNumGoodAdcHits", &H_cer_totNumGoodAdcHits, &b_H_cer_totNumGoodAdcHits);
   fChain->SetBranchAddress("H.cer.totNumTracksFired", &H_cer_totNumTracksFired, &b_H_cer_totNumTracksFired);
   fChain->SetBranchAddress("H.cer.totNumTracksMatched", &H_cer_totNumTracksMatched, &b_H_cer_totNumTracksMatched);
   fChain->SetBranchAddress("H.cer.xAtCer", &H_cer_xAtCer, &b_H_cer_xAtCer);
   fChain->SetBranchAddress("H.cer.yAtCer", &H_cer_yAtCer, &b_H_cer_yAtCer);
   fChain->SetBranchAddress("H.dc.1u1.RefTime", &H_dc_1u1_RefTime, &b_H_dc_1u1_RefTime);
   fChain->SetBranchAddress("H.dc.1u1.nhit", &H_dc_1u1_nhit, &b_H_dc_1u1_nhit);
   fChain->SetBranchAddress("H.dc.1u2.RefTime", &H_dc_1u2_RefTime, &b_H_dc_1u2_RefTime);
   fChain->SetBranchAddress("H.dc.1u2.nhit", &H_dc_1u2_nhit, &b_H_dc_1u2_nhit);
   fChain->SetBranchAddress("H.dc.1v1.RefTime", &H_dc_1v1_RefTime, &b_H_dc_1v1_RefTime);
   fChain->SetBranchAddress("H.dc.1v1.nhit", &H_dc_1v1_nhit, &b_H_dc_1v1_nhit);
   fChain->SetBranchAddress("H.dc.1v2.RefTime", &H_dc_1v2_RefTime, &b_H_dc_1v2_RefTime);
   fChain->SetBranchAddress("H.dc.1v2.nhit", &H_dc_1v2_nhit, &b_H_dc_1v2_nhit);
   fChain->SetBranchAddress("H.dc.1x1.RefTime", &H_dc_1x1_RefTime, &b_H_dc_1x1_RefTime);
   fChain->SetBranchAddress("H.dc.1x1.nhit", &H_dc_1x1_nhit, &b_H_dc_1x1_nhit);
   fChain->SetBranchAddress("H.dc.1x2.RefTime", &H_dc_1x2_RefTime, &b_H_dc_1x2_RefTime);
   fChain->SetBranchAddress("H.dc.1x2.nhit", &H_dc_1x2_nhit, &b_H_dc_1x2_nhit);
   fChain->SetBranchAddress("H.dc.2u1.RefTime", &H_dc_2u1_RefTime, &b_H_dc_2u1_RefTime);
   fChain->SetBranchAddress("H.dc.2u1.nhit", &H_dc_2u1_nhit, &b_H_dc_2u1_nhit);
   fChain->SetBranchAddress("H.dc.2u2.RefTime", &H_dc_2u2_RefTime, &b_H_dc_2u2_RefTime);
   fChain->SetBranchAddress("H.dc.2u2.nhit", &H_dc_2u2_nhit, &b_H_dc_2u2_nhit);
   fChain->SetBranchAddress("H.dc.2v1.RefTime", &H_dc_2v1_RefTime, &b_H_dc_2v1_RefTime);
   fChain->SetBranchAddress("H.dc.2v1.nhit", &H_dc_2v1_nhit, &b_H_dc_2v1_nhit);
   fChain->SetBranchAddress("H.dc.2v2.RefTime", &H_dc_2v2_RefTime, &b_H_dc_2v2_RefTime);
   fChain->SetBranchAddress("H.dc.2v2.nhit", &H_dc_2v2_nhit, &b_H_dc_2v2_nhit);
   fChain->SetBranchAddress("H.dc.2x1.RefTime", &H_dc_2x1_RefTime, &b_H_dc_2x1_RefTime);
   fChain->SetBranchAddress("H.dc.2x1.nhit", &H_dc_2x1_nhit, &b_H_dc_2x1_nhit);
   fChain->SetBranchAddress("H.dc.2x2.RefTime", &H_dc_2x2_RefTime, &b_H_dc_2x2_RefTime);
   fChain->SetBranchAddress("H.dc.2x2.nhit", &H_dc_2x2_nhit, &b_H_dc_2x2_nhit);
   fChain->SetBranchAddress("H.dc.Ch1.maxhits", &H_dc_Ch1_maxhits, &b_H_dc_Ch1_maxhits);
   fChain->SetBranchAddress("H.dc.Ch1.nhit", &H_dc_Ch1_nhit, &b_H_dc_Ch1_nhit);
   fChain->SetBranchAddress("H.dc.Ch1.spacepoints", &H_dc_Ch1_spacepoints, &b_H_dc_Ch1_spacepoints);
   fChain->SetBranchAddress("H.dc.Ch1.trawhit", &H_dc_Ch1_trawhit, &b_H_dc_Ch1_trawhit);
   fChain->SetBranchAddress("H.dc.Ch2.maxhits", &H_dc_Ch2_maxhits, &b_H_dc_Ch2_maxhits);
   fChain->SetBranchAddress("H.dc.Ch2.nhit", &H_dc_Ch2_nhit, &b_H_dc_Ch2_nhit);
   fChain->SetBranchAddress("H.dc.Ch2.spacepoints", &H_dc_Ch2_spacepoints, &b_H_dc_Ch2_spacepoints);
   fChain->SetBranchAddress("H.dc.Ch2.trawhit", &H_dc_Ch2_trawhit, &b_H_dc_Ch2_trawhit);
   fChain->SetBranchAddress("H.dc.InsideDipoleExit", &H_dc_InsideDipoleExit, &b_H_dc_InsideDipoleExit);
   fChain->SetBranchAddress("H.dc.chisq", &H_dc_chisq, &b_H_dc_chisq);
   fChain->SetBranchAddress("H.dc.gtrack_nsp", &H_dc_gtrack_nsp, &b_H_dc_gtrack_nsp);
   fChain->SetBranchAddress("H.dc.nhit", &H_dc_nhit, &b_H_dc_nhit);
   fChain->SetBranchAddress("H.dc.nsp", &H_dc_nsp, &b_H_dc_nsp);
   fChain->SetBranchAddress("H.dc.ntrack", &H_dc_ntrack, &b_H_dc_ntrack);
   fChain->SetBranchAddress("H.dc.sp1_id", &H_dc_sp1_id, &b_H_dc_sp1_id);
   fChain->SetBranchAddress("H.dc.sp2_id", &H_dc_sp2_id, &b_H_dc_sp2_id);
   fChain->SetBranchAddress("H.dc.stubtest", &H_dc_stubtest, &b_H_dc_stubtest);
   fChain->SetBranchAddress("H.dc.tnhit", &H_dc_tnhit, &b_H_dc_tnhit);
   fChain->SetBranchAddress("H.dc.trawhit", &H_dc_trawhit, &b_H_dc_trawhit);
   fChain->SetBranchAddress("H.dc.x_fp", &H_dc_x_fp, &b_H_dc_x_fp);
   fChain->SetBranchAddress("H.dc.xp_fp", &H_dc_xp_fp, &b_H_dc_xp_fp);
   fChain->SetBranchAddress("H.dc.y_fp", &H_dc_y_fp, &b_H_dc_y_fp);
   fChain->SetBranchAddress("H.dc.yp_fp", &H_dc_yp_fp, &b_H_dc_yp_fp);
   fChain->SetBranchAddress("H.extcor.delta_dp", &H_extcor_delta_dp, &b_H_extcor_delta_dp);
   fChain->SetBranchAddress("H.extcor.delta_p", &H_extcor_delta_p, &b_H_extcor_delta_p);
   fChain->SetBranchAddress("H.extcor.delta_xptar", &H_extcor_delta_xptar, &b_H_extcor_delta_xptar);
   fChain->SetBranchAddress("H.extcor.dp", &H_extcor_dp, &b_H_extcor_dp);
   fChain->SetBranchAddress("H.extcor.ok", &H_extcor_ok, &b_H_extcor_ok);
   fChain->SetBranchAddress("H.extcor.p", &H_extcor_p, &b_H_extcor_p);
   fChain->SetBranchAddress("H.extcor.ph", &H_extcor_ph, &b_H_extcor_ph);
   fChain->SetBranchAddress("H.extcor.px", &H_extcor_px, &b_H_extcor_px);
   fChain->SetBranchAddress("H.extcor.py", &H_extcor_py, &b_H_extcor_py);
   fChain->SetBranchAddress("H.extcor.pz", &H_extcor_pz, &b_H_extcor_pz);
   fChain->SetBranchAddress("H.extcor.th", &H_extcor_th, &b_H_extcor_th);
   fChain->SetBranchAddress("H.extcor.x", &H_extcor_x, &b_H_extcor_x);
   fChain->SetBranchAddress("H.extcor.xsieve", &H_extcor_xsieve, &b_H_extcor_xsieve);
   fChain->SetBranchAddress("H.extcor.y", &H_extcor_y, &b_H_extcor_y);
   fChain->SetBranchAddress("H.extcor.ysieve", &H_extcor_ysieve, &b_H_extcor_ysieve);
   fChain->SetBranchAddress("H.gtr.beta", &H_gtr_beta, &b_H_gtr_beta);
   fChain->SetBranchAddress("H.gtr.dp", &H_gtr_dp, &b_H_gtr_dp);
   fChain->SetBranchAddress("H.gtr.index", &H_gtr_index, &b_H_gtr_index);
   fChain->SetBranchAddress("H.gtr.ok", &H_gtr_ok, &b_H_gtr_ok);
   fChain->SetBranchAddress("H.gtr.p", &H_gtr_p, &b_H_gtr_p);
   fChain->SetBranchAddress("H.gtr.ph", &H_gtr_ph, &b_H_gtr_ph);
   fChain->SetBranchAddress("H.gtr.px", &H_gtr_px, &b_H_gtr_px);
   fChain->SetBranchAddress("H.gtr.py", &H_gtr_py, &b_H_gtr_py);
   fChain->SetBranchAddress("H.gtr.pz", &H_gtr_pz, &b_H_gtr_pz);
   fChain->SetBranchAddress("H.gtr.th", &H_gtr_th, &b_H_gtr_th);
   fChain->SetBranchAddress("H.gtr.x", &H_gtr_x, &b_H_gtr_x);
   fChain->SetBranchAddress("H.gtr.y", &H_gtr_y, &b_H_gtr_y);
   fChain->SetBranchAddress("H.hEL_CLEAN.scaler", &H_hEL_CLEAN_scaler, &b_H_hEL_CLEAN_scaler);
   fChain->SetBranchAddress("H.hEL_CLEAN.scalerCut", &H_hEL_CLEAN_scalerCut, &b_H_hEL_CLEAN_scalerCut);
   fChain->SetBranchAddress("H.hEL_CLEAN.scalerRate", &H_hEL_CLEAN_scalerRate, &b_H_hEL_CLEAN_scalerRate);
   fChain->SetBranchAddress("H.hEL_HI.scaler", &H_hEL_HI_scaler, &b_H_hEL_HI_scaler);
   fChain->SetBranchAddress("H.hEL_HI.scalerCut", &H_hEL_HI_scalerCut, &b_H_hEL_HI_scalerCut);
   fChain->SetBranchAddress("H.hEL_HI.scalerRate", &H_hEL_HI_scalerRate, &b_H_hEL_HI_scalerRate);
   fChain->SetBranchAddress("H.hEL_LO.scaler", &H_hEL_LO_scaler, &b_H_hEL_LO_scaler);
   fChain->SetBranchAddress("H.hEL_LO.scalerCut", &H_hEL_LO_scalerCut, &b_H_hEL_LO_scalerCut);
   fChain->SetBranchAddress("H.hEL_LO.scalerRate", &H_hEL_LO_scalerRate, &b_H_hEL_LO_scalerRate);
   fChain->SetBranchAddress("H.hEL_LO_LO.scaler", &H_hEL_LO_LO_scaler, &b_H_hEL_LO_LO_scaler);
   fChain->SetBranchAddress("H.hEL_LO_LO.scalerCut", &H_hEL_LO_LO_scalerCut, &b_H_hEL_LO_LO_scalerCut);
   fChain->SetBranchAddress("H.hEL_LO_LO.scalerRate", &H_hEL_LO_LO_scalerRate, &b_H_hEL_LO_LO_scalerRate);
   fChain->SetBranchAddress("H.hEL_REAL.scaler", &H_hEL_REAL_scaler, &b_H_hEL_REAL_scaler);
   fChain->SetBranchAddress("H.hEL_REAL.scalerCut", &H_hEL_REAL_scalerCut, &b_H_hEL_REAL_scalerCut);
   fChain->SetBranchAddress("H.hEL_REAL.scalerRate", &H_hEL_REAL_scalerRate, &b_H_hEL_REAL_scalerRate);
   fChain->SetBranchAddress("H.hL1ACCP.scaler", &H_hL1ACCP_scaler, &b_H_hL1ACCP_scaler);
   fChain->SetBranchAddress("H.hL1ACCP.scalerCut", &H_hL1ACCP_scalerCut, &b_H_hL1ACCP_scalerCut);
   fChain->SetBranchAddress("H.hL1ACCP.scalerRate", &H_hL1ACCP_scalerRate, &b_H_hL1ACCP_scalerRate);
   fChain->SetBranchAddress("H.hL1ACCP_Hel.scaler", &H_hL1ACCP_Hel_scaler, &b_H_hL1ACCP_Hel_scaler);
   fChain->SetBranchAddress("H.hL1ACCP_Hel.scalerCut", &H_hL1ACCP_Hel_scalerCut, &b_H_hL1ACCP_Hel_scalerCut);
   fChain->SetBranchAddress("H.hL1ACCP_Hel.scalerRate", &H_hL1ACCP_Hel_scalerRate, &b_H_hL1ACCP_Hel_scalerRate);
   fChain->SetBranchAddress("H.hPRE100.scaler", &H_hPRE100_scaler, &b_H_hPRE100_scaler);
   fChain->SetBranchAddress("H.hPRE100.scalerCut", &H_hPRE100_scalerCut, &b_H_hPRE100_scalerCut);
   fChain->SetBranchAddress("H.hPRE100.scalerRate", &H_hPRE100_scalerRate, &b_H_hPRE100_scalerRate);
   fChain->SetBranchAddress("H.hPRE150.scaler", &H_hPRE150_scaler, &b_H_hPRE150_scaler);
   fChain->SetBranchAddress("H.hPRE150.scalerCut", &H_hPRE150_scalerCut, &b_H_hPRE150_scalerCut);
   fChain->SetBranchAddress("H.hPRE150.scalerRate", &H_hPRE150_scalerRate, &b_H_hPRE150_scalerRate);
   fChain->SetBranchAddress("H.hPRE200.scaler", &H_hPRE200_scaler, &b_H_hPRE200_scaler);
   fChain->SetBranchAddress("H.hPRE200.scalerCut", &H_hPRE200_scalerCut, &b_H_hPRE200_scalerCut);
   fChain->SetBranchAddress("H.hPRE200.scalerRate", &H_hPRE200_scalerRate, &b_H_hPRE200_scalerRate);
   fChain->SetBranchAddress("H.hPRE40.scaler", &H_hPRE40_scaler, &b_H_hPRE40_scaler);
   fChain->SetBranchAddress("H.hPRE40.scalerCut", &H_hPRE40_scalerCut, &b_H_hPRE40_scalerCut);
   fChain->SetBranchAddress("H.hPRE40.scalerRate", &H_hPRE40_scalerRate, &b_H_hPRE40_scalerRate);
   fChain->SetBranchAddress("H.hSTOF.scaler", &H_hSTOF_scaler, &b_H_hSTOF_scaler);
   fChain->SetBranchAddress("H.hSTOF.scalerCut", &H_hSTOF_scalerCut, &b_H_hSTOF_scalerCut);
   fChain->SetBranchAddress("H.hSTOF.scalerRate", &H_hSTOF_scalerRate, &b_H_hSTOF_scalerRate);
   fChain->SetBranchAddress("H.hTREF1.scaler", &H_hTREF1_scaler, &b_H_hTREF1_scaler);
   fChain->SetBranchAddress("H.hTREF1.scalerCut", &H_hTREF1_scalerCut, &b_H_hTREF1_scalerCut);
   fChain->SetBranchAddress("H.hTREF1.scalerRate", &H_hTREF1_scalerRate, &b_H_hTREF1_scalerRate);
   fChain->SetBranchAddress("H.hTRIG1.scaler", &H_hTRIG1_scaler, &b_H_hTRIG1_scaler);
   fChain->SetBranchAddress("H.hTRIG1.scalerCut", &H_hTRIG1_scalerCut, &b_H_hTRIG1_scalerCut);
   fChain->SetBranchAddress("H.hTRIG1.scalerRate", &H_hTRIG1_scalerRate, &b_H_hTRIG1_scalerRate);
   fChain->SetBranchAddress("H.hTRIG1_Hel.scaler", &H_hTRIG1_Hel_scaler, &b_H_hTRIG1_Hel_scaler);
   fChain->SetBranchAddress("H.hTRIG1_Hel.scalerCut", &H_hTRIG1_Hel_scalerCut, &b_H_hTRIG1_Hel_scalerCut);
   fChain->SetBranchAddress("H.hTRIG1_Hel.scalerRate", &H_hTRIG1_Hel_scalerRate, &b_H_hTRIG1_Hel_scalerRate);
   fChain->SetBranchAddress("H.hTRIG2.scaler", &H_hTRIG2_scaler, &b_H_hTRIG2_scaler);
   fChain->SetBranchAddress("H.hTRIG2.scalerCut", &H_hTRIG2_scalerCut, &b_H_hTRIG2_scalerCut);
   fChain->SetBranchAddress("H.hTRIG2.scalerRate", &H_hTRIG2_scalerRate, &b_H_hTRIG2_scalerRate);
   fChain->SetBranchAddress("H.hTRIG2_Hel.scaler", &H_hTRIG2_Hel_scaler, &b_H_hTRIG2_Hel_scaler);
   fChain->SetBranchAddress("H.hTRIG2_Hel.scalerCut", &H_hTRIG2_Hel_scalerCut, &b_H_hTRIG2_Hel_scalerCut);
   fChain->SetBranchAddress("H.hTRIG2_Hel.scalerRate", &H_hTRIG2_Hel_scalerRate, &b_H_hTRIG2_Hel_scalerRate);
   fChain->SetBranchAddress("H.hTRIG3.scaler", &H_hTRIG3_scaler, &b_H_hTRIG3_scaler);
   fChain->SetBranchAddress("H.hTRIG3.scalerCut", &H_hTRIG3_scalerCut, &b_H_hTRIG3_scalerCut);
   fChain->SetBranchAddress("H.hTRIG3.scalerRate", &H_hTRIG3_scalerRate, &b_H_hTRIG3_scalerRate);
   fChain->SetBranchAddress("H.hTRIG3_Hel.scaler", &H_hTRIG3_Hel_scaler, &b_H_hTRIG3_Hel_scaler);
   fChain->SetBranchAddress("H.hTRIG3_Hel.scalerCut", &H_hTRIG3_Hel_scalerCut, &b_H_hTRIG3_Hel_scalerCut);
   fChain->SetBranchAddress("H.hTRIG3_Hel.scalerRate", &H_hTRIG3_Hel_scalerRate, &b_H_hTRIG3_Hel_scalerRate);
   fChain->SetBranchAddress("H.hTRIG4.scaler", &H_hTRIG4_scaler, &b_H_hTRIG4_scaler);
   fChain->SetBranchAddress("H.hTRIG4.scalerCut", &H_hTRIG4_scalerCut, &b_H_hTRIG4_scalerCut);
   fChain->SetBranchAddress("H.hTRIG4.scalerRate", &H_hTRIG4_scalerRate, &b_H_hTRIG4_scalerRate);
   fChain->SetBranchAddress("H.hTRIG4_Hel.scaler", &H_hTRIG4_Hel_scaler, &b_H_hTRIG4_Hel_scaler);
   fChain->SetBranchAddress("H.hTRIG4_Hel.scalerCut", &H_hTRIG4_Hel_scalerCut, &b_H_hTRIG4_Hel_scalerCut);
   fChain->SetBranchAddress("H.hTRIG4_Hel.scalerRate", &H_hTRIG4_Hel_scalerRate, &b_H_hTRIG4_Hel_scalerRate);
   fChain->SetBranchAddress("H.hTRIG5.scaler", &H_hTRIG5_scaler, &b_H_hTRIG5_scaler);
   fChain->SetBranchAddress("H.hTRIG5.scalerCut", &H_hTRIG5_scalerCut, &b_H_hTRIG5_scalerCut);
   fChain->SetBranchAddress("H.hTRIG5.scalerRate", &H_hTRIG5_scalerRate, &b_H_hTRIG5_scalerRate);
   fChain->SetBranchAddress("H.hTRIG5_Hel.scaler", &H_hTRIG5_Hel_scaler, &b_H_hTRIG5_Hel_scaler);
   fChain->SetBranchAddress("H.hTRIG5_Hel.scalerCut", &H_hTRIG5_Hel_scalerCut, &b_H_hTRIG5_Hel_scalerCut);
   fChain->SetBranchAddress("H.hTRIG5_Hel.scalerRate", &H_hTRIG5_Hel_scalerRate, &b_H_hTRIG5_Hel_scalerRate);
   fChain->SetBranchAddress("H.hTRIG6.scaler", &H_hTRIG6_scaler, &b_H_hTRIG6_scaler);
   fChain->SetBranchAddress("H.hTRIG6.scalerCut", &H_hTRIG6_scalerCut, &b_H_hTRIG6_scalerCut);
   fChain->SetBranchAddress("H.hTRIG6.scalerRate", &H_hTRIG6_scalerRate, &b_H_hTRIG6_scalerRate);
   fChain->SetBranchAddress("H.hTRIG6_Hel.scaler", &H_hTRIG6_Hel_scaler, &b_H_hTRIG6_Hel_scaler);
   fChain->SetBranchAddress("H.hTRIG6_Hel.scalerCut", &H_hTRIG6_Hel_scalerCut, &b_H_hTRIG6_Hel_scalerCut);
   fChain->SetBranchAddress("H.hTRIG6_Hel.scalerRate", &H_hTRIG6_Hel_scalerRate, &b_H_hTRIG6_Hel_scalerRate);
   fChain->SetBranchAddress("H.hod.1x.DiffDisTrack", &H_hod_1x_DiffDisTrack, &b_H_hod_1x_DiffDisTrack);
   fChain->SetBranchAddress("H.hod.1x.NegAdcRefDiffTime", &H_hod_1x_NegAdcRefDiffTime, &b_H_hod_1x_NegAdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.1x.NegAdcRefTime", &H_hod_1x_NegAdcRefTime, &b_H_hod_1x_NegAdcRefTime);
   fChain->SetBranchAddress("H.hod.1x.NegTdcRefDiffTime", &H_hod_1x_NegTdcRefDiffTime, &b_H_hod_1x_NegTdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.1x.NegTdcRefTime", &H_hod_1x_NegTdcRefTime, &b_H_hod_1x_NegTdcRefTime);
   fChain->SetBranchAddress("H.hod.1x.NumClus", &H_hod_1x_NumClus, &b_H_hod_1x_NumClus);
   fChain->SetBranchAddress("H.hod.1x.PosAdcRefDiffTime", &H_hod_1x_PosAdcRefDiffTime, &b_H_hod_1x_PosAdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.1x.PosAdcRefTime", &H_hod_1x_PosAdcRefTime, &b_H_hod_1x_PosAdcRefTime);
   fChain->SetBranchAddress("H.hod.1x.PosTdcRefDiffTime", &H_hod_1x_PosTdcRefDiffTime, &b_H_hod_1x_PosTdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.1x.PosTdcRefTime", &H_hod_1x_PosTdcRefTime, &b_H_hod_1x_PosTdcRefTime);
   fChain->SetBranchAddress("H.hod.1x.ScinXPos", &H_hod_1x_ScinXPos, &b_H_hod_1x_ScinXPos);
   fChain->SetBranchAddress("H.hod.1x.ScinYPos", &H_hod_1x_ScinYPos, &b_H_hod_1x_ScinYPos);
   fChain->SetBranchAddress("H.hod.1x.TrackXPos", &H_hod_1x_TrackXPos, &b_H_hod_1x_TrackXPos);
   fChain->SetBranchAddress("H.hod.1x.TrackYPos", &H_hod_1x_TrackYPos, &b_H_hod_1x_TrackYPos);
   fChain->SetBranchAddress("H.hod.1x.fptime", &H_hod_1x_fptime, &b_H_hod_1x_fptime);
   fChain->SetBranchAddress("H.hod.1x.nhits", &H_hod_1x_nhits, &b_H_hod_1x_nhits);
   fChain->SetBranchAddress("H.hod.1x.totNumAdcHits", &H_hod_1x_totNumAdcHits, &b_H_hod_1x_totNumAdcHits);
   fChain->SetBranchAddress("H.hod.1x.totNumGoodAdcHits", &H_hod_1x_totNumGoodAdcHits, &b_H_hod_1x_totNumGoodAdcHits);
   fChain->SetBranchAddress("H.hod.1x.totNumGoodNegAdcHits", &H_hod_1x_totNumGoodNegAdcHits, &b_H_hod_1x_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.hod.1x.totNumGoodNegTdcHits", &H_hod_1x_totNumGoodNegTdcHits, &b_H_hod_1x_totNumGoodNegTdcHits);
   fChain->SetBranchAddress("H.hod.1x.totNumGoodPosAdcHits", &H_hod_1x_totNumGoodPosAdcHits, &b_H_hod_1x_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.hod.1x.totNumGoodPosTdcHits", &H_hod_1x_totNumGoodPosTdcHits, &b_H_hod_1x_totNumGoodPosTdcHits);
   fChain->SetBranchAddress("H.hod.1x.totNumGoodTdcHits", &H_hod_1x_totNumGoodTdcHits, &b_H_hod_1x_totNumGoodTdcHits);
   fChain->SetBranchAddress("H.hod.1x.totNumNegAdcHits", &H_hod_1x_totNumNegAdcHits, &b_H_hod_1x_totNumNegAdcHits);
   fChain->SetBranchAddress("H.hod.1x.totNumNegTdcHits", &H_hod_1x_totNumNegTdcHits, &b_H_hod_1x_totNumNegTdcHits);
   fChain->SetBranchAddress("H.hod.1x.totNumPosAdcHits", &H_hod_1x_totNumPosAdcHits, &b_H_hod_1x_totNumPosAdcHits);
   fChain->SetBranchAddress("H.hod.1x.totNumPosTdcHits", &H_hod_1x_totNumPosTdcHits, &b_H_hod_1x_totNumPosTdcHits);
   fChain->SetBranchAddress("H.hod.1x.totNumTdcHits", &H_hod_1x_totNumTdcHits, &b_H_hod_1x_totNumTdcHits);
   fChain->SetBranchAddress("H.hod.1x1.negScaler", &H_hod_1x1_negScaler, &b_H_hod_1x1_negScaler);
   fChain->SetBranchAddress("H.hod.1x1.negScalerCut", &H_hod_1x1_negScalerCut, &b_H_hod_1x1_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x1.negScalerRate", &H_hod_1x1_negScalerRate, &b_H_hod_1x1_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x1.posScaler", &H_hod_1x1_posScaler, &b_H_hod_1x1_posScaler);
   fChain->SetBranchAddress("H.hod.1x1.posScalerCut", &H_hod_1x1_posScalerCut, &b_H_hod_1x1_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x1.posScalerRate", &H_hod_1x1_posScalerRate, &b_H_hod_1x1_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x10.negScaler", &H_hod_1x10_negScaler, &b_H_hod_1x10_negScaler);
   fChain->SetBranchAddress("H.hod.1x10.negScalerCut", &H_hod_1x10_negScalerCut, &b_H_hod_1x10_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x10.negScalerRate", &H_hod_1x10_negScalerRate, &b_H_hod_1x10_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x10.posScaler", &H_hod_1x10_posScaler, &b_H_hod_1x10_posScaler);
   fChain->SetBranchAddress("H.hod.1x10.posScalerCut", &H_hod_1x10_posScalerCut, &b_H_hod_1x10_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x10.posScalerRate", &H_hod_1x10_posScalerRate, &b_H_hod_1x10_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x11.negScaler", &H_hod_1x11_negScaler, &b_H_hod_1x11_negScaler);
   fChain->SetBranchAddress("H.hod.1x11.negScalerCut", &H_hod_1x11_negScalerCut, &b_H_hod_1x11_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x11.negScalerRate", &H_hod_1x11_negScalerRate, &b_H_hod_1x11_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x11.posScaler", &H_hod_1x11_posScaler, &b_H_hod_1x11_posScaler);
   fChain->SetBranchAddress("H.hod.1x11.posScalerCut", &H_hod_1x11_posScalerCut, &b_H_hod_1x11_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x11.posScalerRate", &H_hod_1x11_posScalerRate, &b_H_hod_1x11_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x12.negScaler", &H_hod_1x12_negScaler, &b_H_hod_1x12_negScaler);
   fChain->SetBranchAddress("H.hod.1x12.negScalerCut", &H_hod_1x12_negScalerCut, &b_H_hod_1x12_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x12.negScalerRate", &H_hod_1x12_negScalerRate, &b_H_hod_1x12_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x12.posScaler", &H_hod_1x12_posScaler, &b_H_hod_1x12_posScaler);
   fChain->SetBranchAddress("H.hod.1x12.posScalerCut", &H_hod_1x12_posScalerCut, &b_H_hod_1x12_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x12.posScalerRate", &H_hod_1x12_posScalerRate, &b_H_hod_1x12_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x13.negScaler", &H_hod_1x13_negScaler, &b_H_hod_1x13_negScaler);
   fChain->SetBranchAddress("H.hod.1x13.negScalerCut", &H_hod_1x13_negScalerCut, &b_H_hod_1x13_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x13.negScalerRate", &H_hod_1x13_negScalerRate, &b_H_hod_1x13_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x13.posScaler", &H_hod_1x13_posScaler, &b_H_hod_1x13_posScaler);
   fChain->SetBranchAddress("H.hod.1x13.posScalerCut", &H_hod_1x13_posScalerCut, &b_H_hod_1x13_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x13.posScalerRate", &H_hod_1x13_posScalerRate, &b_H_hod_1x13_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x14.negScaler", &H_hod_1x14_negScaler, &b_H_hod_1x14_negScaler);
   fChain->SetBranchAddress("H.hod.1x14.negScalerCut", &H_hod_1x14_negScalerCut, &b_H_hod_1x14_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x14.negScalerRate", &H_hod_1x14_negScalerRate, &b_H_hod_1x14_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x14.posScaler", &H_hod_1x14_posScaler, &b_H_hod_1x14_posScaler);
   fChain->SetBranchAddress("H.hod.1x14.posScalerCut", &H_hod_1x14_posScalerCut, &b_H_hod_1x14_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x14.posScalerRate", &H_hod_1x14_posScalerRate, &b_H_hod_1x14_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x15.negScaler", &H_hod_1x15_negScaler, &b_H_hod_1x15_negScaler);
   fChain->SetBranchAddress("H.hod.1x15.negScalerCut", &H_hod_1x15_negScalerCut, &b_H_hod_1x15_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x15.negScalerRate", &H_hod_1x15_negScalerRate, &b_H_hod_1x15_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x15.posScaler", &H_hod_1x15_posScaler, &b_H_hod_1x15_posScaler);
   fChain->SetBranchAddress("H.hod.1x15.posScalerCut", &H_hod_1x15_posScalerCut, &b_H_hod_1x15_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x15.posScalerRate", &H_hod_1x15_posScalerRate, &b_H_hod_1x15_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x16.negScaler", &H_hod_1x16_negScaler, &b_H_hod_1x16_negScaler);
   fChain->SetBranchAddress("H.hod.1x16.negScalerCut", &H_hod_1x16_negScalerCut, &b_H_hod_1x16_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x16.negScalerRate", &H_hod_1x16_negScalerRate, &b_H_hod_1x16_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x16.posScaler", &H_hod_1x16_posScaler, &b_H_hod_1x16_posScaler);
   fChain->SetBranchAddress("H.hod.1x16.posScalerCut", &H_hod_1x16_posScalerCut, &b_H_hod_1x16_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x16.posScalerRate", &H_hod_1x16_posScalerRate, &b_H_hod_1x16_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x2.negScaler", &H_hod_1x2_negScaler, &b_H_hod_1x2_negScaler);
   fChain->SetBranchAddress("H.hod.1x2.negScalerCut", &H_hod_1x2_negScalerCut, &b_H_hod_1x2_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x2.negScalerRate", &H_hod_1x2_negScalerRate, &b_H_hod_1x2_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x2.posScaler", &H_hod_1x2_posScaler, &b_H_hod_1x2_posScaler);
   fChain->SetBranchAddress("H.hod.1x2.posScalerCut", &H_hod_1x2_posScalerCut, &b_H_hod_1x2_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x2.posScalerRate", &H_hod_1x2_posScalerRate, &b_H_hod_1x2_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x3.negScaler", &H_hod_1x3_negScaler, &b_H_hod_1x3_negScaler);
   fChain->SetBranchAddress("H.hod.1x3.negScalerCut", &H_hod_1x3_negScalerCut, &b_H_hod_1x3_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x3.negScalerRate", &H_hod_1x3_negScalerRate, &b_H_hod_1x3_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x3.posScaler", &H_hod_1x3_posScaler, &b_H_hod_1x3_posScaler);
   fChain->SetBranchAddress("H.hod.1x3.posScalerCut", &H_hod_1x3_posScalerCut, &b_H_hod_1x3_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x3.posScalerRate", &H_hod_1x3_posScalerRate, &b_H_hod_1x3_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x4.negScaler", &H_hod_1x4_negScaler, &b_H_hod_1x4_negScaler);
   fChain->SetBranchAddress("H.hod.1x4.negScalerCut", &H_hod_1x4_negScalerCut, &b_H_hod_1x4_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x4.negScalerRate", &H_hod_1x4_negScalerRate, &b_H_hod_1x4_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x4.posScaler", &H_hod_1x4_posScaler, &b_H_hod_1x4_posScaler);
   fChain->SetBranchAddress("H.hod.1x4.posScalerCut", &H_hod_1x4_posScalerCut, &b_H_hod_1x4_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x4.posScalerRate", &H_hod_1x4_posScalerRate, &b_H_hod_1x4_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x5.negScaler", &H_hod_1x5_negScaler, &b_H_hod_1x5_negScaler);
   fChain->SetBranchAddress("H.hod.1x5.negScalerCut", &H_hod_1x5_negScalerCut, &b_H_hod_1x5_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x5.negScalerRate", &H_hod_1x5_negScalerRate, &b_H_hod_1x5_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x5.posScaler", &H_hod_1x5_posScaler, &b_H_hod_1x5_posScaler);
   fChain->SetBranchAddress("H.hod.1x5.posScalerCut", &H_hod_1x5_posScalerCut, &b_H_hod_1x5_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x5.posScalerRate", &H_hod_1x5_posScalerRate, &b_H_hod_1x5_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x6.negScaler", &H_hod_1x6_negScaler, &b_H_hod_1x6_negScaler);
   fChain->SetBranchAddress("H.hod.1x6.negScalerCut", &H_hod_1x6_negScalerCut, &b_H_hod_1x6_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x6.negScalerRate", &H_hod_1x6_negScalerRate, &b_H_hod_1x6_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x6.posScaler", &H_hod_1x6_posScaler, &b_H_hod_1x6_posScaler);
   fChain->SetBranchAddress("H.hod.1x6.posScalerCut", &H_hod_1x6_posScalerCut, &b_H_hod_1x6_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x6.posScalerRate", &H_hod_1x6_posScalerRate, &b_H_hod_1x6_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x7.negScaler", &H_hod_1x7_negScaler, &b_H_hod_1x7_negScaler);
   fChain->SetBranchAddress("H.hod.1x7.negScalerCut", &H_hod_1x7_negScalerCut, &b_H_hod_1x7_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x7.negScalerRate", &H_hod_1x7_negScalerRate, &b_H_hod_1x7_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x7.posScaler", &H_hod_1x7_posScaler, &b_H_hod_1x7_posScaler);
   fChain->SetBranchAddress("H.hod.1x7.posScalerCut", &H_hod_1x7_posScalerCut, &b_H_hod_1x7_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x7.posScalerRate", &H_hod_1x7_posScalerRate, &b_H_hod_1x7_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x8.negScaler", &H_hod_1x8_negScaler, &b_H_hod_1x8_negScaler);
   fChain->SetBranchAddress("H.hod.1x8.negScalerCut", &H_hod_1x8_negScalerCut, &b_H_hod_1x8_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x8.negScalerRate", &H_hod_1x8_negScalerRate, &b_H_hod_1x8_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x8.posScaler", &H_hod_1x8_posScaler, &b_H_hod_1x8_posScaler);
   fChain->SetBranchAddress("H.hod.1x8.posScalerCut", &H_hod_1x8_posScalerCut, &b_H_hod_1x8_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x8.posScalerRate", &H_hod_1x8_posScalerRate, &b_H_hod_1x8_posScalerRate);
   fChain->SetBranchAddress("H.hod.1x9.negScaler", &H_hod_1x9_negScaler, &b_H_hod_1x9_negScaler);
   fChain->SetBranchAddress("H.hod.1x9.negScalerCut", &H_hod_1x9_negScalerCut, &b_H_hod_1x9_negScalerCut);
   fChain->SetBranchAddress("H.hod.1x9.negScalerRate", &H_hod_1x9_negScalerRate, &b_H_hod_1x9_negScalerRate);
   fChain->SetBranchAddress("H.hod.1x9.posScaler", &H_hod_1x9_posScaler, &b_H_hod_1x9_posScaler);
   fChain->SetBranchAddress("H.hod.1x9.posScalerCut", &H_hod_1x9_posScalerCut, &b_H_hod_1x9_posScalerCut);
   fChain->SetBranchAddress("H.hod.1x9.posScalerRate", &H_hod_1x9_posScalerRate, &b_H_hod_1x9_posScalerRate);
   fChain->SetBranchAddress("H.hod.1y.DiffDisTrack", &H_hod_1y_DiffDisTrack, &b_H_hod_1y_DiffDisTrack);
   fChain->SetBranchAddress("H.hod.1y.NegAdcRefDiffTime", &H_hod_1y_NegAdcRefDiffTime, &b_H_hod_1y_NegAdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.1y.NegAdcRefTime", &H_hod_1y_NegAdcRefTime, &b_H_hod_1y_NegAdcRefTime);
   fChain->SetBranchAddress("H.hod.1y.NegTdcRefDiffTime", &H_hod_1y_NegTdcRefDiffTime, &b_H_hod_1y_NegTdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.1y.NegTdcRefTime", &H_hod_1y_NegTdcRefTime, &b_H_hod_1y_NegTdcRefTime);
   fChain->SetBranchAddress("H.hod.1y.NumClus", &H_hod_1y_NumClus, &b_H_hod_1y_NumClus);
   fChain->SetBranchAddress("H.hod.1y.PosAdcRefDiffTime", &H_hod_1y_PosAdcRefDiffTime, &b_H_hod_1y_PosAdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.1y.PosAdcRefTime", &H_hod_1y_PosAdcRefTime, &b_H_hod_1y_PosAdcRefTime);
   fChain->SetBranchAddress("H.hod.1y.PosTdcRefDiffTime", &H_hod_1y_PosTdcRefDiffTime, &b_H_hod_1y_PosTdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.1y.PosTdcRefTime", &H_hod_1y_PosTdcRefTime, &b_H_hod_1y_PosTdcRefTime);
   fChain->SetBranchAddress("H.hod.1y.ScinXPos", &H_hod_1y_ScinXPos, &b_H_hod_1y_ScinXPos);
   fChain->SetBranchAddress("H.hod.1y.ScinYPos", &H_hod_1y_ScinYPos, &b_H_hod_1y_ScinYPos);
   fChain->SetBranchAddress("H.hod.1y.TrackXPos", &H_hod_1y_TrackXPos, &b_H_hod_1y_TrackXPos);
   fChain->SetBranchAddress("H.hod.1y.TrackYPos", &H_hod_1y_TrackYPos, &b_H_hod_1y_TrackYPos);
   fChain->SetBranchAddress("H.hod.1y.fptime", &H_hod_1y_fptime, &b_H_hod_1y_fptime);
   fChain->SetBranchAddress("H.hod.1y.nhits", &H_hod_1y_nhits, &b_H_hod_1y_nhits);
   fChain->SetBranchAddress("H.hod.1y.totNumAdcHits", &H_hod_1y_totNumAdcHits, &b_H_hod_1y_totNumAdcHits);
   fChain->SetBranchAddress("H.hod.1y.totNumGoodAdcHits", &H_hod_1y_totNumGoodAdcHits, &b_H_hod_1y_totNumGoodAdcHits);
   fChain->SetBranchAddress("H.hod.1y.totNumGoodNegAdcHits", &H_hod_1y_totNumGoodNegAdcHits, &b_H_hod_1y_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.hod.1y.totNumGoodNegTdcHits", &H_hod_1y_totNumGoodNegTdcHits, &b_H_hod_1y_totNumGoodNegTdcHits);
   fChain->SetBranchAddress("H.hod.1y.totNumGoodPosAdcHits", &H_hod_1y_totNumGoodPosAdcHits, &b_H_hod_1y_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.hod.1y.totNumGoodPosTdcHits", &H_hod_1y_totNumGoodPosTdcHits, &b_H_hod_1y_totNumGoodPosTdcHits);
   fChain->SetBranchAddress("H.hod.1y.totNumGoodTdcHits", &H_hod_1y_totNumGoodTdcHits, &b_H_hod_1y_totNumGoodTdcHits);
   fChain->SetBranchAddress("H.hod.1y.totNumNegAdcHits", &H_hod_1y_totNumNegAdcHits, &b_H_hod_1y_totNumNegAdcHits);
   fChain->SetBranchAddress("H.hod.1y.totNumNegTdcHits", &H_hod_1y_totNumNegTdcHits, &b_H_hod_1y_totNumNegTdcHits);
   fChain->SetBranchAddress("H.hod.1y.totNumPosAdcHits", &H_hod_1y_totNumPosAdcHits, &b_H_hod_1y_totNumPosAdcHits);
   fChain->SetBranchAddress("H.hod.1y.totNumPosTdcHits", &H_hod_1y_totNumPosTdcHits, &b_H_hod_1y_totNumPosTdcHits);
   fChain->SetBranchAddress("H.hod.1y.totNumTdcHits", &H_hod_1y_totNumTdcHits, &b_H_hod_1y_totNumTdcHits);
   fChain->SetBranchAddress("H.hod.1y1.negScaler", &H_hod_1y1_negScaler, &b_H_hod_1y1_negScaler);
   fChain->SetBranchAddress("H.hod.1y1.negScalerCut", &H_hod_1y1_negScalerCut, &b_H_hod_1y1_negScalerCut);
   fChain->SetBranchAddress("H.hod.1y1.negScalerRate", &H_hod_1y1_negScalerRate, &b_H_hod_1y1_negScalerRate);
   fChain->SetBranchAddress("H.hod.1y1.posScaler", &H_hod_1y1_posScaler, &b_H_hod_1y1_posScaler);
   fChain->SetBranchAddress("H.hod.1y1.posScalerCut", &H_hod_1y1_posScalerCut, &b_H_hod_1y1_posScalerCut);
   fChain->SetBranchAddress("H.hod.1y1.posScalerRate", &H_hod_1y1_posScalerRate, &b_H_hod_1y1_posScalerRate);
   fChain->SetBranchAddress("H.hod.1y10.negScaler", &H_hod_1y10_negScaler, &b_H_hod_1y10_negScaler);
   fChain->SetBranchAddress("H.hod.1y10.negScalerCut", &H_hod_1y10_negScalerCut, &b_H_hod_1y10_negScalerCut);
   fChain->SetBranchAddress("H.hod.1y10.negScalerRate", &H_hod_1y10_negScalerRate, &b_H_hod_1y10_negScalerRate);
   fChain->SetBranchAddress("H.hod.1y10.posScaler", &H_hod_1y10_posScaler, &b_H_hod_1y10_posScaler);
   fChain->SetBranchAddress("H.hod.1y10.posScalerCut", &H_hod_1y10_posScalerCut, &b_H_hod_1y10_posScalerCut);
   fChain->SetBranchAddress("H.hod.1y10.posScalerRate", &H_hod_1y10_posScalerRate, &b_H_hod_1y10_posScalerRate);
   fChain->SetBranchAddress("H.hod.1y2.negScaler", &H_hod_1y2_negScaler, &b_H_hod_1y2_negScaler);
   fChain->SetBranchAddress("H.hod.1y2.negScalerCut", &H_hod_1y2_negScalerCut, &b_H_hod_1y2_negScalerCut);
   fChain->SetBranchAddress("H.hod.1y2.negScalerRate", &H_hod_1y2_negScalerRate, &b_H_hod_1y2_negScalerRate);
   fChain->SetBranchAddress("H.hod.1y2.posScaler", &H_hod_1y2_posScaler, &b_H_hod_1y2_posScaler);
   fChain->SetBranchAddress("H.hod.1y2.posScalerCut", &H_hod_1y2_posScalerCut, &b_H_hod_1y2_posScalerCut);
   fChain->SetBranchAddress("H.hod.1y2.posScalerRate", &H_hod_1y2_posScalerRate, &b_H_hod_1y2_posScalerRate);
   fChain->SetBranchAddress("H.hod.1y3.negScaler", &H_hod_1y3_negScaler, &b_H_hod_1y3_negScaler);
   fChain->SetBranchAddress("H.hod.1y3.negScalerCut", &H_hod_1y3_negScalerCut, &b_H_hod_1y3_negScalerCut);
   fChain->SetBranchAddress("H.hod.1y3.negScalerRate", &H_hod_1y3_negScalerRate, &b_H_hod_1y3_negScalerRate);
   fChain->SetBranchAddress("H.hod.1y3.posScaler", &H_hod_1y3_posScaler, &b_H_hod_1y3_posScaler);
   fChain->SetBranchAddress("H.hod.1y3.posScalerCut", &H_hod_1y3_posScalerCut, &b_H_hod_1y3_posScalerCut);
   fChain->SetBranchAddress("H.hod.1y3.posScalerRate", &H_hod_1y3_posScalerRate, &b_H_hod_1y3_posScalerRate);
   fChain->SetBranchAddress("H.hod.1y4.negScaler", &H_hod_1y4_negScaler, &b_H_hod_1y4_negScaler);
   fChain->SetBranchAddress("H.hod.1y4.negScalerCut", &H_hod_1y4_negScalerCut, &b_H_hod_1y4_negScalerCut);
   fChain->SetBranchAddress("H.hod.1y4.negScalerRate", &H_hod_1y4_negScalerRate, &b_H_hod_1y4_negScalerRate);
   fChain->SetBranchAddress("H.hod.1y4.posScaler", &H_hod_1y4_posScaler, &b_H_hod_1y4_posScaler);
   fChain->SetBranchAddress("H.hod.1y4.posScalerCut", &H_hod_1y4_posScalerCut, &b_H_hod_1y4_posScalerCut);
   fChain->SetBranchAddress("H.hod.1y4.posScalerRate", &H_hod_1y4_posScalerRate, &b_H_hod_1y4_posScalerRate);
   fChain->SetBranchAddress("H.hod.1y5.negScaler", &H_hod_1y5_negScaler, &b_H_hod_1y5_negScaler);
   fChain->SetBranchAddress("H.hod.1y5.negScalerCut", &H_hod_1y5_negScalerCut, &b_H_hod_1y5_negScalerCut);
   fChain->SetBranchAddress("H.hod.1y5.negScalerRate", &H_hod_1y5_negScalerRate, &b_H_hod_1y5_negScalerRate);
   fChain->SetBranchAddress("H.hod.1y5.posScaler", &H_hod_1y5_posScaler, &b_H_hod_1y5_posScaler);
   fChain->SetBranchAddress("H.hod.1y5.posScalerCut", &H_hod_1y5_posScalerCut, &b_H_hod_1y5_posScalerCut);
   fChain->SetBranchAddress("H.hod.1y5.posScalerRate", &H_hod_1y5_posScalerRate, &b_H_hod_1y5_posScalerRate);
   fChain->SetBranchAddress("H.hod.1y6.negScaler", &H_hod_1y6_negScaler, &b_H_hod_1y6_negScaler);
   fChain->SetBranchAddress("H.hod.1y6.negScalerCut", &H_hod_1y6_negScalerCut, &b_H_hod_1y6_negScalerCut);
   fChain->SetBranchAddress("H.hod.1y6.negScalerRate", &H_hod_1y6_negScalerRate, &b_H_hod_1y6_negScalerRate);
   fChain->SetBranchAddress("H.hod.1y6.posScaler", &H_hod_1y6_posScaler, &b_H_hod_1y6_posScaler);
   fChain->SetBranchAddress("H.hod.1y6.posScalerCut", &H_hod_1y6_posScalerCut, &b_H_hod_1y6_posScalerCut);
   fChain->SetBranchAddress("H.hod.1y6.posScalerRate", &H_hod_1y6_posScalerRate, &b_H_hod_1y6_posScalerRate);
   fChain->SetBranchAddress("H.hod.1y7.negScaler", &H_hod_1y7_negScaler, &b_H_hod_1y7_negScaler);
   fChain->SetBranchAddress("H.hod.1y7.negScalerCut", &H_hod_1y7_negScalerCut, &b_H_hod_1y7_negScalerCut);
   fChain->SetBranchAddress("H.hod.1y7.negScalerRate", &H_hod_1y7_negScalerRate, &b_H_hod_1y7_negScalerRate);
   fChain->SetBranchAddress("H.hod.1y7.posScaler", &H_hod_1y7_posScaler, &b_H_hod_1y7_posScaler);
   fChain->SetBranchAddress("H.hod.1y7.posScalerCut", &H_hod_1y7_posScalerCut, &b_H_hod_1y7_posScalerCut);
   fChain->SetBranchAddress("H.hod.1y7.posScalerRate", &H_hod_1y7_posScalerRate, &b_H_hod_1y7_posScalerRate);
   fChain->SetBranchAddress("H.hod.1y8.negScaler", &H_hod_1y8_negScaler, &b_H_hod_1y8_negScaler);
   fChain->SetBranchAddress("H.hod.1y8.negScalerCut", &H_hod_1y8_negScalerCut, &b_H_hod_1y8_negScalerCut);
   fChain->SetBranchAddress("H.hod.1y8.negScalerRate", &H_hod_1y8_negScalerRate, &b_H_hod_1y8_negScalerRate);
   fChain->SetBranchAddress("H.hod.1y8.posScaler", &H_hod_1y8_posScaler, &b_H_hod_1y8_posScaler);
   fChain->SetBranchAddress("H.hod.1y8.posScalerCut", &H_hod_1y8_posScalerCut, &b_H_hod_1y8_posScalerCut);
   fChain->SetBranchAddress("H.hod.1y8.posScalerRate", &H_hod_1y8_posScalerRate, &b_H_hod_1y8_posScalerRate);
   fChain->SetBranchAddress("H.hod.1y9.negScaler", &H_hod_1y9_negScaler, &b_H_hod_1y9_negScaler);
   fChain->SetBranchAddress("H.hod.1y9.negScalerCut", &H_hod_1y9_negScalerCut, &b_H_hod_1y9_negScalerCut);
   fChain->SetBranchAddress("H.hod.1y9.negScalerRate", &H_hod_1y9_negScalerRate, &b_H_hod_1y9_negScalerRate);
   fChain->SetBranchAddress("H.hod.1y9.posScaler", &H_hod_1y9_posScaler, &b_H_hod_1y9_posScaler);
   fChain->SetBranchAddress("H.hod.1y9.posScalerCut", &H_hod_1y9_posScalerCut, &b_H_hod_1y9_posScalerCut);
   fChain->SetBranchAddress("H.hod.1y9.posScalerRate", &H_hod_1y9_posScalerRate, &b_H_hod_1y9_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x.DiffDisTrack", &H_hod_2x_DiffDisTrack, &b_H_hod_2x_DiffDisTrack);
   fChain->SetBranchAddress("H.hod.2x.NegAdcRefDiffTime", &H_hod_2x_NegAdcRefDiffTime, &b_H_hod_2x_NegAdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.2x.NegAdcRefTime", &H_hod_2x_NegAdcRefTime, &b_H_hod_2x_NegAdcRefTime);
   fChain->SetBranchAddress("H.hod.2x.NegTdcRefDiffTime", &H_hod_2x_NegTdcRefDiffTime, &b_H_hod_2x_NegTdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.2x.NegTdcRefTime", &H_hod_2x_NegTdcRefTime, &b_H_hod_2x_NegTdcRefTime);
   fChain->SetBranchAddress("H.hod.2x.NumClus", &H_hod_2x_NumClus, &b_H_hod_2x_NumClus);
   fChain->SetBranchAddress("H.hod.2x.PosAdcRefDiffTime", &H_hod_2x_PosAdcRefDiffTime, &b_H_hod_2x_PosAdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.2x.PosAdcRefTime", &H_hod_2x_PosAdcRefTime, &b_H_hod_2x_PosAdcRefTime);
   fChain->SetBranchAddress("H.hod.2x.PosTdcRefDiffTime", &H_hod_2x_PosTdcRefDiffTime, &b_H_hod_2x_PosTdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.2x.PosTdcRefTime", &H_hod_2x_PosTdcRefTime, &b_H_hod_2x_PosTdcRefTime);
   fChain->SetBranchAddress("H.hod.2x.ScinXPos", &H_hod_2x_ScinXPos, &b_H_hod_2x_ScinXPos);
   fChain->SetBranchAddress("H.hod.2x.ScinYPos", &H_hod_2x_ScinYPos, &b_H_hod_2x_ScinYPos);
   fChain->SetBranchAddress("H.hod.2x.TrackXPos", &H_hod_2x_TrackXPos, &b_H_hod_2x_TrackXPos);
   fChain->SetBranchAddress("H.hod.2x.TrackYPos", &H_hod_2x_TrackYPos, &b_H_hod_2x_TrackYPos);
   fChain->SetBranchAddress("H.hod.2x.fptime", &H_hod_2x_fptime, &b_H_hod_2x_fptime);
   fChain->SetBranchAddress("H.hod.2x.nhits", &H_hod_2x_nhits, &b_H_hod_2x_nhits);
   fChain->SetBranchAddress("H.hod.2x.totNumAdcHits", &H_hod_2x_totNumAdcHits, &b_H_hod_2x_totNumAdcHits);
   fChain->SetBranchAddress("H.hod.2x.totNumGoodAdcHits", &H_hod_2x_totNumGoodAdcHits, &b_H_hod_2x_totNumGoodAdcHits);
   fChain->SetBranchAddress("H.hod.2x.totNumGoodNegAdcHits", &H_hod_2x_totNumGoodNegAdcHits, &b_H_hod_2x_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.hod.2x.totNumGoodNegTdcHits", &H_hod_2x_totNumGoodNegTdcHits, &b_H_hod_2x_totNumGoodNegTdcHits);
   fChain->SetBranchAddress("H.hod.2x.totNumGoodPosAdcHits", &H_hod_2x_totNumGoodPosAdcHits, &b_H_hod_2x_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.hod.2x.totNumGoodPosTdcHits", &H_hod_2x_totNumGoodPosTdcHits, &b_H_hod_2x_totNumGoodPosTdcHits);
   fChain->SetBranchAddress("H.hod.2x.totNumGoodTdcHits", &H_hod_2x_totNumGoodTdcHits, &b_H_hod_2x_totNumGoodTdcHits);
   fChain->SetBranchAddress("H.hod.2x.totNumNegAdcHits", &H_hod_2x_totNumNegAdcHits, &b_H_hod_2x_totNumNegAdcHits);
   fChain->SetBranchAddress("H.hod.2x.totNumNegTdcHits", &H_hod_2x_totNumNegTdcHits, &b_H_hod_2x_totNumNegTdcHits);
   fChain->SetBranchAddress("H.hod.2x.totNumPosAdcHits", &H_hod_2x_totNumPosAdcHits, &b_H_hod_2x_totNumPosAdcHits);
   fChain->SetBranchAddress("H.hod.2x.totNumPosTdcHits", &H_hod_2x_totNumPosTdcHits, &b_H_hod_2x_totNumPosTdcHits);
   fChain->SetBranchAddress("H.hod.2x.totNumTdcHits", &H_hod_2x_totNumTdcHits, &b_H_hod_2x_totNumTdcHits);
   fChain->SetBranchAddress("H.hod.2x1.negScaler", &H_hod_2x1_negScaler, &b_H_hod_2x1_negScaler);
   fChain->SetBranchAddress("H.hod.2x1.negScalerCut", &H_hod_2x1_negScalerCut, &b_H_hod_2x1_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x1.negScalerRate", &H_hod_2x1_negScalerRate, &b_H_hod_2x1_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x1.posScaler", &H_hod_2x1_posScaler, &b_H_hod_2x1_posScaler);
   fChain->SetBranchAddress("H.hod.2x1.posScalerCut", &H_hod_2x1_posScalerCut, &b_H_hod_2x1_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x1.posScalerRate", &H_hod_2x1_posScalerRate, &b_H_hod_2x1_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x10.negScaler", &H_hod_2x10_negScaler, &b_H_hod_2x10_negScaler);
   fChain->SetBranchAddress("H.hod.2x10.negScalerCut", &H_hod_2x10_negScalerCut, &b_H_hod_2x10_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x10.negScalerRate", &H_hod_2x10_negScalerRate, &b_H_hod_2x10_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x10.posScaler", &H_hod_2x10_posScaler, &b_H_hod_2x10_posScaler);
   fChain->SetBranchAddress("H.hod.2x10.posScalerCut", &H_hod_2x10_posScalerCut, &b_H_hod_2x10_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x10.posScalerRate", &H_hod_2x10_posScalerRate, &b_H_hod_2x10_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x11.negScaler", &H_hod_2x11_negScaler, &b_H_hod_2x11_negScaler);
   fChain->SetBranchAddress("H.hod.2x11.negScalerCut", &H_hod_2x11_negScalerCut, &b_H_hod_2x11_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x11.negScalerRate", &H_hod_2x11_negScalerRate, &b_H_hod_2x11_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x11.posScaler", &H_hod_2x11_posScaler, &b_H_hod_2x11_posScaler);
   fChain->SetBranchAddress("H.hod.2x11.posScalerCut", &H_hod_2x11_posScalerCut, &b_H_hod_2x11_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x11.posScalerRate", &H_hod_2x11_posScalerRate, &b_H_hod_2x11_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x12.negScaler", &H_hod_2x12_negScaler, &b_H_hod_2x12_negScaler);
   fChain->SetBranchAddress("H.hod.2x12.negScalerCut", &H_hod_2x12_negScalerCut, &b_H_hod_2x12_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x12.negScalerRate", &H_hod_2x12_negScalerRate, &b_H_hod_2x12_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x12.posScaler", &H_hod_2x12_posScaler, &b_H_hod_2x12_posScaler);
   fChain->SetBranchAddress("H.hod.2x12.posScalerCut", &H_hod_2x12_posScalerCut, &b_H_hod_2x12_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x12.posScalerRate", &H_hod_2x12_posScalerRate, &b_H_hod_2x12_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x13.negScaler", &H_hod_2x13_negScaler, &b_H_hod_2x13_negScaler);
   fChain->SetBranchAddress("H.hod.2x13.negScalerCut", &H_hod_2x13_negScalerCut, &b_H_hod_2x13_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x13.negScalerRate", &H_hod_2x13_negScalerRate, &b_H_hod_2x13_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x13.posScaler", &H_hod_2x13_posScaler, &b_H_hod_2x13_posScaler);
   fChain->SetBranchAddress("H.hod.2x13.posScalerCut", &H_hod_2x13_posScalerCut, &b_H_hod_2x13_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x13.posScalerRate", &H_hod_2x13_posScalerRate, &b_H_hod_2x13_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x14.negScaler", &H_hod_2x14_negScaler, &b_H_hod_2x14_negScaler);
   fChain->SetBranchAddress("H.hod.2x14.negScalerCut", &H_hod_2x14_negScalerCut, &b_H_hod_2x14_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x14.negScalerRate", &H_hod_2x14_negScalerRate, &b_H_hod_2x14_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x14.posScaler", &H_hod_2x14_posScaler, &b_H_hod_2x14_posScaler);
   fChain->SetBranchAddress("H.hod.2x14.posScalerCut", &H_hod_2x14_posScalerCut, &b_H_hod_2x14_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x14.posScalerRate", &H_hod_2x14_posScalerRate, &b_H_hod_2x14_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x15.negScaler", &H_hod_2x15_negScaler, &b_H_hod_2x15_negScaler);
   fChain->SetBranchAddress("H.hod.2x15.negScalerCut", &H_hod_2x15_negScalerCut, &b_H_hod_2x15_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x15.negScalerRate", &H_hod_2x15_negScalerRate, &b_H_hod_2x15_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x15.posScaler", &H_hod_2x15_posScaler, &b_H_hod_2x15_posScaler);
   fChain->SetBranchAddress("H.hod.2x15.posScalerCut", &H_hod_2x15_posScalerCut, &b_H_hod_2x15_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x15.posScalerRate", &H_hod_2x15_posScalerRate, &b_H_hod_2x15_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x16.negScaler", &H_hod_2x16_negScaler, &b_H_hod_2x16_negScaler);
   fChain->SetBranchAddress("H.hod.2x16.negScalerCut", &H_hod_2x16_negScalerCut, &b_H_hod_2x16_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x16.negScalerRate", &H_hod_2x16_negScalerRate, &b_H_hod_2x16_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x16.posScaler", &H_hod_2x16_posScaler, &b_H_hod_2x16_posScaler);
   fChain->SetBranchAddress("H.hod.2x16.posScalerCut", &H_hod_2x16_posScalerCut, &b_H_hod_2x16_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x16.posScalerRate", &H_hod_2x16_posScalerRate, &b_H_hod_2x16_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x2.negScaler", &H_hod_2x2_negScaler, &b_H_hod_2x2_negScaler);
   fChain->SetBranchAddress("H.hod.2x2.negScalerCut", &H_hod_2x2_negScalerCut, &b_H_hod_2x2_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x2.negScalerRate", &H_hod_2x2_negScalerRate, &b_H_hod_2x2_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x2.posScaler", &H_hod_2x2_posScaler, &b_H_hod_2x2_posScaler);
   fChain->SetBranchAddress("H.hod.2x2.posScalerCut", &H_hod_2x2_posScalerCut, &b_H_hod_2x2_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x2.posScalerRate", &H_hod_2x2_posScalerRate, &b_H_hod_2x2_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x3.negScaler", &H_hod_2x3_negScaler, &b_H_hod_2x3_negScaler);
   fChain->SetBranchAddress("H.hod.2x3.negScalerCut", &H_hod_2x3_negScalerCut, &b_H_hod_2x3_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x3.negScalerRate", &H_hod_2x3_negScalerRate, &b_H_hod_2x3_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x3.posScaler", &H_hod_2x3_posScaler, &b_H_hod_2x3_posScaler);
   fChain->SetBranchAddress("H.hod.2x3.posScalerCut", &H_hod_2x3_posScalerCut, &b_H_hod_2x3_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x3.posScalerRate", &H_hod_2x3_posScalerRate, &b_H_hod_2x3_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x4.negScaler", &H_hod_2x4_negScaler, &b_H_hod_2x4_negScaler);
   fChain->SetBranchAddress("H.hod.2x4.negScalerCut", &H_hod_2x4_negScalerCut, &b_H_hod_2x4_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x4.negScalerRate", &H_hod_2x4_negScalerRate, &b_H_hod_2x4_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x4.posScaler", &H_hod_2x4_posScaler, &b_H_hod_2x4_posScaler);
   fChain->SetBranchAddress("H.hod.2x4.posScalerCut", &H_hod_2x4_posScalerCut, &b_H_hod_2x4_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x4.posScalerRate", &H_hod_2x4_posScalerRate, &b_H_hod_2x4_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x5.negScaler", &H_hod_2x5_negScaler, &b_H_hod_2x5_negScaler);
   fChain->SetBranchAddress("H.hod.2x5.negScalerCut", &H_hod_2x5_negScalerCut, &b_H_hod_2x5_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x5.negScalerRate", &H_hod_2x5_negScalerRate, &b_H_hod_2x5_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x5.posScaler", &H_hod_2x5_posScaler, &b_H_hod_2x5_posScaler);
   fChain->SetBranchAddress("H.hod.2x5.posScalerCut", &H_hod_2x5_posScalerCut, &b_H_hod_2x5_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x5.posScalerRate", &H_hod_2x5_posScalerRate, &b_H_hod_2x5_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x6.negScaler", &H_hod_2x6_negScaler, &b_H_hod_2x6_negScaler);
   fChain->SetBranchAddress("H.hod.2x6.negScalerCut", &H_hod_2x6_negScalerCut, &b_H_hod_2x6_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x6.negScalerRate", &H_hod_2x6_negScalerRate, &b_H_hod_2x6_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x6.posScaler", &H_hod_2x6_posScaler, &b_H_hod_2x6_posScaler);
   fChain->SetBranchAddress("H.hod.2x6.posScalerCut", &H_hod_2x6_posScalerCut, &b_H_hod_2x6_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x6.posScalerRate", &H_hod_2x6_posScalerRate, &b_H_hod_2x6_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x7.negScaler", &H_hod_2x7_negScaler, &b_H_hod_2x7_negScaler);
   fChain->SetBranchAddress("H.hod.2x7.negScalerCut", &H_hod_2x7_negScalerCut, &b_H_hod_2x7_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x7.negScalerRate", &H_hod_2x7_negScalerRate, &b_H_hod_2x7_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x7.posScaler", &H_hod_2x7_posScaler, &b_H_hod_2x7_posScaler);
   fChain->SetBranchAddress("H.hod.2x7.posScalerCut", &H_hod_2x7_posScalerCut, &b_H_hod_2x7_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x7.posScalerRate", &H_hod_2x7_posScalerRate, &b_H_hod_2x7_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x8.negScaler", &H_hod_2x8_negScaler, &b_H_hod_2x8_negScaler);
   fChain->SetBranchAddress("H.hod.2x8.negScalerCut", &H_hod_2x8_negScalerCut, &b_H_hod_2x8_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x8.negScalerRate", &H_hod_2x8_negScalerRate, &b_H_hod_2x8_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x8.posScaler", &H_hod_2x8_posScaler, &b_H_hod_2x8_posScaler);
   fChain->SetBranchAddress("H.hod.2x8.posScalerCut", &H_hod_2x8_posScalerCut, &b_H_hod_2x8_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x8.posScalerRate", &H_hod_2x8_posScalerRate, &b_H_hod_2x8_posScalerRate);
   fChain->SetBranchAddress("H.hod.2x9.negScaler", &H_hod_2x9_negScaler, &b_H_hod_2x9_negScaler);
   fChain->SetBranchAddress("H.hod.2x9.negScalerCut", &H_hod_2x9_negScalerCut, &b_H_hod_2x9_negScalerCut);
   fChain->SetBranchAddress("H.hod.2x9.negScalerRate", &H_hod_2x9_negScalerRate, &b_H_hod_2x9_negScalerRate);
   fChain->SetBranchAddress("H.hod.2x9.posScaler", &H_hod_2x9_posScaler, &b_H_hod_2x9_posScaler);
   fChain->SetBranchAddress("H.hod.2x9.posScalerCut", &H_hod_2x9_posScalerCut, &b_H_hod_2x9_posScalerCut);
   fChain->SetBranchAddress("H.hod.2x9.posScalerRate", &H_hod_2x9_posScalerRate, &b_H_hod_2x9_posScalerRate);
   fChain->SetBranchAddress("H.hod.2y.DiffDisTrack", &H_hod_2y_DiffDisTrack, &b_H_hod_2y_DiffDisTrack);
   fChain->SetBranchAddress("H.hod.2y.NegAdcRefDiffTime", &H_hod_2y_NegAdcRefDiffTime, &b_H_hod_2y_NegAdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.2y.NegAdcRefTime", &H_hod_2y_NegAdcRefTime, &b_H_hod_2y_NegAdcRefTime);
   fChain->SetBranchAddress("H.hod.2y.NegTdcRefDiffTime", &H_hod_2y_NegTdcRefDiffTime, &b_H_hod_2y_NegTdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.2y.NegTdcRefTime", &H_hod_2y_NegTdcRefTime, &b_H_hod_2y_NegTdcRefTime);
   fChain->SetBranchAddress("H.hod.2y.NumClus", &H_hod_2y_NumClus, &b_H_hod_2y_NumClus);
   fChain->SetBranchAddress("H.hod.2y.PosAdcRefDiffTime", &H_hod_2y_PosAdcRefDiffTime, &b_H_hod_2y_PosAdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.2y.PosAdcRefTime", &H_hod_2y_PosAdcRefTime, &b_H_hod_2y_PosAdcRefTime);
   fChain->SetBranchAddress("H.hod.2y.PosTdcRefDiffTime", &H_hod_2y_PosTdcRefDiffTime, &b_H_hod_2y_PosTdcRefDiffTime);
   fChain->SetBranchAddress("H.hod.2y.PosTdcRefTime", &H_hod_2y_PosTdcRefTime, &b_H_hod_2y_PosTdcRefTime);
   fChain->SetBranchAddress("H.hod.2y.ScinXPos", &H_hod_2y_ScinXPos, &b_H_hod_2y_ScinXPos);
   fChain->SetBranchAddress("H.hod.2y.ScinYPos", &H_hod_2y_ScinYPos, &b_H_hod_2y_ScinYPos);
   fChain->SetBranchAddress("H.hod.2y.TrackXPos", &H_hod_2y_TrackXPos, &b_H_hod_2y_TrackXPos);
   fChain->SetBranchAddress("H.hod.2y.TrackYPos", &H_hod_2y_TrackYPos, &b_H_hod_2y_TrackYPos);
   fChain->SetBranchAddress("H.hod.2y.fptime", &H_hod_2y_fptime, &b_H_hod_2y_fptime);
   fChain->SetBranchAddress("H.hod.2y.nhits", &H_hod_2y_nhits, &b_H_hod_2y_nhits);
   fChain->SetBranchAddress("H.hod.2y.totNumAdcHits", &H_hod_2y_totNumAdcHits, &b_H_hod_2y_totNumAdcHits);
   fChain->SetBranchAddress("H.hod.2y.totNumGoodAdcHits", &H_hod_2y_totNumGoodAdcHits, &b_H_hod_2y_totNumGoodAdcHits);
   fChain->SetBranchAddress("H.hod.2y.totNumGoodNegAdcHits", &H_hod_2y_totNumGoodNegAdcHits, &b_H_hod_2y_totNumGoodNegAdcHits);
   fChain->SetBranchAddress("H.hod.2y.totNumGoodNegTdcHits", &H_hod_2y_totNumGoodNegTdcHits, &b_H_hod_2y_totNumGoodNegTdcHits);
   fChain->SetBranchAddress("H.hod.2y.totNumGoodPosAdcHits", &H_hod_2y_totNumGoodPosAdcHits, &b_H_hod_2y_totNumGoodPosAdcHits);
   fChain->SetBranchAddress("H.hod.2y.totNumGoodPosTdcHits", &H_hod_2y_totNumGoodPosTdcHits, &b_H_hod_2y_totNumGoodPosTdcHits);
   fChain->SetBranchAddress("H.hod.2y.totNumGoodTdcHits", &H_hod_2y_totNumGoodTdcHits, &b_H_hod_2y_totNumGoodTdcHits);
   fChain->SetBranchAddress("H.hod.2y.totNumNegAdcHits", &H_hod_2y_totNumNegAdcHits, &b_H_hod_2y_totNumNegAdcHits);
   fChain->SetBranchAddress("H.hod.2y.totNumNegTdcHits", &H_hod_2y_totNumNegTdcHits, &b_H_hod_2y_totNumNegTdcHits);
   fChain->SetBranchAddress("H.hod.2y.totNumPosAdcHits", &H_hod_2y_totNumPosAdcHits, &b_H_hod_2y_totNumPosAdcHits);
   fChain->SetBranchAddress("H.hod.2y.totNumPosTdcHits", &H_hod_2y_totNumPosTdcHits, &b_H_hod_2y_totNumPosTdcHits);
   fChain->SetBranchAddress("H.hod.2y.totNumTdcHits", &H_hod_2y_totNumTdcHits, &b_H_hod_2y_totNumTdcHits);
   fChain->SetBranchAddress("H.hod.2y1.negScaler", &H_hod_2y1_negScaler, &b_H_hod_2y1_negScaler);
   fChain->SetBranchAddress("H.hod.2y1.negScalerCut", &H_hod_2y1_negScalerCut, &b_H_hod_2y1_negScalerCut);
   fChain->SetBranchAddress("H.hod.2y1.negScalerRate", &H_hod_2y1_negScalerRate, &b_H_hod_2y1_negScalerRate);
   fChain->SetBranchAddress("H.hod.2y1.posScaler", &H_hod_2y1_posScaler, &b_H_hod_2y1_posScaler);
   fChain->SetBranchAddress("H.hod.2y1.posScalerCut", &H_hod_2y1_posScalerCut, &b_H_hod_2y1_posScalerCut);
   fChain->SetBranchAddress("H.hod.2y1.posScalerRate", &H_hod_2y1_posScalerRate, &b_H_hod_2y1_posScalerRate);
   fChain->SetBranchAddress("H.hod.2y10.negScaler", &H_hod_2y10_negScaler, &b_H_hod_2y10_negScaler);
   fChain->SetBranchAddress("H.hod.2y10.negScalerCut", &H_hod_2y10_negScalerCut, &b_H_hod_2y10_negScalerCut);
   fChain->SetBranchAddress("H.hod.2y10.negScalerRate", &H_hod_2y10_negScalerRate, &b_H_hod_2y10_negScalerRate);
   fChain->SetBranchAddress("H.hod.2y10.posScaler", &H_hod_2y10_posScaler, &b_H_hod_2y10_posScaler);
   fChain->SetBranchAddress("H.hod.2y10.posScalerCut", &H_hod_2y10_posScalerCut, &b_H_hod_2y10_posScalerCut);
   fChain->SetBranchAddress("H.hod.2y10.posScalerRate", &H_hod_2y10_posScalerRate, &b_H_hod_2y10_posScalerRate);
   fChain->SetBranchAddress("H.hod.2y2.negScaler", &H_hod_2y2_negScaler, &b_H_hod_2y2_negScaler);
   fChain->SetBranchAddress("H.hod.2y2.negScalerCut", &H_hod_2y2_negScalerCut, &b_H_hod_2y2_negScalerCut);
   fChain->SetBranchAddress("H.hod.2y2.negScalerRate", &H_hod_2y2_negScalerRate, &b_H_hod_2y2_negScalerRate);
   fChain->SetBranchAddress("H.hod.2y2.posScaler", &H_hod_2y2_posScaler, &b_H_hod_2y2_posScaler);
   fChain->SetBranchAddress("H.hod.2y2.posScalerCut", &H_hod_2y2_posScalerCut, &b_H_hod_2y2_posScalerCut);
   fChain->SetBranchAddress("H.hod.2y2.posScalerRate", &H_hod_2y2_posScalerRate, &b_H_hod_2y2_posScalerRate);
   fChain->SetBranchAddress("H.hod.2y3.negScaler", &H_hod_2y3_negScaler, &b_H_hod_2y3_negScaler);
   fChain->SetBranchAddress("H.hod.2y3.negScalerCut", &H_hod_2y3_negScalerCut, &b_H_hod_2y3_negScalerCut);
   fChain->SetBranchAddress("H.hod.2y3.negScalerRate", &H_hod_2y3_negScalerRate, &b_H_hod_2y3_negScalerRate);
   fChain->SetBranchAddress("H.hod.2y3.posScaler", &H_hod_2y3_posScaler, &b_H_hod_2y3_posScaler);
   fChain->SetBranchAddress("H.hod.2y3.posScalerCut", &H_hod_2y3_posScalerCut, &b_H_hod_2y3_posScalerCut);
   fChain->SetBranchAddress("H.hod.2y3.posScalerRate", &H_hod_2y3_posScalerRate, &b_H_hod_2y3_posScalerRate);
   fChain->SetBranchAddress("H.hod.2y4.negScaler", &H_hod_2y4_negScaler, &b_H_hod_2y4_negScaler);
   fChain->SetBranchAddress("H.hod.2y4.negScalerCut", &H_hod_2y4_negScalerCut, &b_H_hod_2y4_negScalerCut);
   fChain->SetBranchAddress("H.hod.2y4.negScalerRate", &H_hod_2y4_negScalerRate, &b_H_hod_2y4_negScalerRate);
   fChain->SetBranchAddress("H.hod.2y4.posScaler", &H_hod_2y4_posScaler, &b_H_hod_2y4_posScaler);
   fChain->SetBranchAddress("H.hod.2y4.posScalerCut", &H_hod_2y4_posScalerCut, &b_H_hod_2y4_posScalerCut);
   fChain->SetBranchAddress("H.hod.2y4.posScalerRate", &H_hod_2y4_posScalerRate, &b_H_hod_2y4_posScalerRate);
   fChain->SetBranchAddress("H.hod.2y5.negScaler", &H_hod_2y5_negScaler, &b_H_hod_2y5_negScaler);
   fChain->SetBranchAddress("H.hod.2y5.negScalerCut", &H_hod_2y5_negScalerCut, &b_H_hod_2y5_negScalerCut);
   fChain->SetBranchAddress("H.hod.2y5.negScalerRate", &H_hod_2y5_negScalerRate, &b_H_hod_2y5_negScalerRate);
   fChain->SetBranchAddress("H.hod.2y5.posScaler", &H_hod_2y5_posScaler, &b_H_hod_2y5_posScaler);
   fChain->SetBranchAddress("H.hod.2y5.posScalerCut", &H_hod_2y5_posScalerCut, &b_H_hod_2y5_posScalerCut);
   fChain->SetBranchAddress("H.hod.2y5.posScalerRate", &H_hod_2y5_posScalerRate, &b_H_hod_2y5_posScalerRate);
   fChain->SetBranchAddress("H.hod.2y6.negScaler", &H_hod_2y6_negScaler, &b_H_hod_2y6_negScaler);
   fChain->SetBranchAddress("H.hod.2y6.negScalerCut", &H_hod_2y6_negScalerCut, &b_H_hod_2y6_negScalerCut);
   fChain->SetBranchAddress("H.hod.2y6.negScalerRate", &H_hod_2y6_negScalerRate, &b_H_hod_2y6_negScalerRate);
   fChain->SetBranchAddress("H.hod.2y6.posScaler", &H_hod_2y6_posScaler, &b_H_hod_2y6_posScaler);
   fChain->SetBranchAddress("H.hod.2y6.posScalerCut", &H_hod_2y6_posScalerCut, &b_H_hod_2y6_posScalerCut);
   fChain->SetBranchAddress("H.hod.2y6.posScalerRate", &H_hod_2y6_posScalerRate, &b_H_hod_2y6_posScalerRate);
   fChain->SetBranchAddress("H.hod.2y7.negScaler", &H_hod_2y7_negScaler, &b_H_hod_2y7_negScaler);
   fChain->SetBranchAddress("H.hod.2y7.negScalerCut", &H_hod_2y7_negScalerCut, &b_H_hod_2y7_negScalerCut);
   fChain->SetBranchAddress("H.hod.2y7.negScalerRate", &H_hod_2y7_negScalerRate, &b_H_hod_2y7_negScalerRate);
   fChain->SetBranchAddress("H.hod.2y7.posScaler", &H_hod_2y7_posScaler, &b_H_hod_2y7_posScaler);
   fChain->SetBranchAddress("H.hod.2y7.posScalerCut", &H_hod_2y7_posScalerCut, &b_H_hod_2y7_posScalerCut);
   fChain->SetBranchAddress("H.hod.2y7.posScalerRate", &H_hod_2y7_posScalerRate, &b_H_hod_2y7_posScalerRate);
   fChain->SetBranchAddress("H.hod.2y8.negScaler", &H_hod_2y8_negScaler, &b_H_hod_2y8_negScaler);
   fChain->SetBranchAddress("H.hod.2y8.negScalerCut", &H_hod_2y8_negScalerCut, &b_H_hod_2y8_negScalerCut);
   fChain->SetBranchAddress("H.hod.2y8.negScalerRate", &H_hod_2y8_negScalerRate, &b_H_hod_2y8_negScalerRate);
   fChain->SetBranchAddress("H.hod.2y8.posScaler", &H_hod_2y8_posScaler, &b_H_hod_2y8_posScaler);
   fChain->SetBranchAddress("H.hod.2y8.posScalerCut", &H_hod_2y8_posScalerCut, &b_H_hod_2y8_posScalerCut);
   fChain->SetBranchAddress("H.hod.2y8.posScalerRate", &H_hod_2y8_posScalerRate, &b_H_hod_2y8_posScalerRate);
   fChain->SetBranchAddress("H.hod.2y9.negScaler", &H_hod_2y9_negScaler, &b_H_hod_2y9_negScaler);
   fChain->SetBranchAddress("H.hod.2y9.negScalerCut", &H_hod_2y9_negScalerCut, &b_H_hod_2y9_negScalerCut);
   fChain->SetBranchAddress("H.hod.2y9.negScalerRate", &H_hod_2y9_negScalerRate, &b_H_hod_2y9_negScalerRate);
   fChain->SetBranchAddress("H.hod.2y9.posScaler", &H_hod_2y9_posScaler, &b_H_hod_2y9_posScaler);
   fChain->SetBranchAddress("H.hod.2y9.posScalerCut", &H_hod_2y9_posScalerCut, &b_H_hod_2y9_posScalerCut);
   fChain->SetBranchAddress("H.hod.2y9.posScalerRate", &H_hod_2y9_posScalerRate, &b_H_hod_2y9_posScalerRate);
   fChain->SetBranchAddress("H.hod.TimeHist_FpTime_Hits", &H_hod_TimeHist_FpTime_Hits, &b_H_hod_TimeHist_FpTime_Hits);
   fChain->SetBranchAddress("H.hod.TimeHist_FpTime_NumPeaks", &H_hod_TimeHist_FpTime_NumPeaks, &b_H_hod_TimeHist_FpTime_NumPeaks);
   fChain->SetBranchAddress("H.hod.TimeHist_FpTime_Peak", &H_hod_TimeHist_FpTime_Peak, &b_H_hod_TimeHist_FpTime_Peak);
   fChain->SetBranchAddress("H.hod.TimeHist_FpTime_Sigma", &H_hod_TimeHist_FpTime_Sigma, &b_H_hod_TimeHist_FpTime_Sigma);
   fChain->SetBranchAddress("H.hod.TimeHist_StartTime_Hits", &H_hod_TimeHist_StartTime_Hits, &b_H_hod_TimeHist_StartTime_Hits);
   fChain->SetBranchAddress("H.hod.TimeHist_StartTime_NumPeaks", &H_hod_TimeHist_StartTime_NumPeaks, &b_H_hod_TimeHist_StartTime_NumPeaks);
   fChain->SetBranchAddress("H.hod.TimeHist_StartTime_Peak", &H_hod_TimeHist_StartTime_Peak, &b_H_hod_TimeHist_StartTime_Peak);
   fChain->SetBranchAddress("H.hod.TimeHist_StartTime_Sigma", &H_hod_TimeHist_StartTime_Sigma, &b_H_hod_TimeHist_StartTime_Sigma);
   fChain->SetBranchAddress("H.hod.adctdc_offset", &H_hod_adctdc_offset, &b_H_hod_adctdc_offset);
   fChain->SetBranchAddress("H.hod.beta", &H_hod_beta, &b_H_hod_beta);
   fChain->SetBranchAddress("H.hod.betachisqnotrack", &H_hod_betachisqnotrack, &b_H_hod_betachisqnotrack);
   fChain->SetBranchAddress("H.hod.betanotrack", &H_hod_betanotrack, &b_H_hod_betanotrack);
   fChain->SetBranchAddress("H.hod.fpHitsTime", &H_hod_fpHitsTime, &b_H_hod_fpHitsTime);
   fChain->SetBranchAddress("H.hod.goodscinhit", &H_hod_goodscinhit, &b_H_hod_goodscinhit);
   fChain->SetBranchAddress("H.hod.goodstarttime", &H_hod_goodstarttime, &b_H_hod_goodstarttime);
   fChain->SetBranchAddress("H.hod.starttime", &H_hod_starttime, &b_H_hod_starttime);
   fChain->SetBranchAddress("H.kin.Q2", &H_kin_Q2, &b_H_kin_Q2);
   fChain->SetBranchAddress("H.kin.W", &H_kin_W, &b_H_kin_W);
   fChain->SetBranchAddress("H.kin.W2", &H_kin_W2, &b_H_kin_W2);
   fChain->SetBranchAddress("H.kin.epsilon", &H_kin_epsilon, &b_H_kin_epsilon);
   fChain->SetBranchAddress("H.kin.nu", &H_kin_nu, &b_H_kin_nu);
   fChain->SetBranchAddress("H.kin.omega", &H_kin_omega, &b_H_kin_omega);
   fChain->SetBranchAddress("H.kin.ph_q", &H_kin_ph_q, &b_H_kin_ph_q);
   fChain->SetBranchAddress("H.kin.q3m", &H_kin_q3m, &b_H_kin_q3m);
   fChain->SetBranchAddress("H.kin.q_x", &H_kin_q_x, &b_H_kin_q_x);
   fChain->SetBranchAddress("H.kin.q_y", &H_kin_q_y, &b_H_kin_q_y);
   fChain->SetBranchAddress("H.kin.q_z", &H_kin_q_z, &b_H_kin_q_z);
   fChain->SetBranchAddress("H.kin.scat_ang_deg", &H_kin_scat_ang_deg, &b_H_kin_scat_ang_deg);
   fChain->SetBranchAddress("H.kin.scat_ang_rad", &H_kin_scat_ang_rad, &b_H_kin_scat_ang_rad);
   fChain->SetBranchAddress("H.kin.th_q", &H_kin_th_q, &b_H_kin_th_q);
   fChain->SetBranchAddress("H.kin.x_bj", &H_kin_x_bj, &b_H_kin_x_bj);
   fChain->SetBranchAddress("H.pEL_CLEAN.scaler", &H_pEL_CLEAN_scaler, &b_H_pEL_CLEAN_scaler);
   fChain->SetBranchAddress("H.pEL_CLEAN.scalerCut", &H_pEL_CLEAN_scalerCut, &b_H_pEL_CLEAN_scalerCut);
   fChain->SetBranchAddress("H.pEL_CLEAN.scalerRate", &H_pEL_CLEAN_scalerRate, &b_H_pEL_CLEAN_scalerRate);
   fChain->SetBranchAddress("H.pEL_HI.scaler", &H_pEL_HI_scaler, &b_H_pEL_HI_scaler);
   fChain->SetBranchAddress("H.pEL_HI.scalerCut", &H_pEL_HI_scalerCut, &b_H_pEL_HI_scalerCut);
   fChain->SetBranchAddress("H.pEL_HI.scalerRate", &H_pEL_HI_scalerRate, &b_H_pEL_HI_scalerRate);
   fChain->SetBranchAddress("H.pEL_LO.scaler", &H_pEL_LO_scaler, &b_H_pEL_LO_scaler);
   fChain->SetBranchAddress("H.pEL_LO.scalerCut", &H_pEL_LO_scalerCut, &b_H_pEL_LO_scalerCut);
   fChain->SetBranchAddress("H.pEL_LO.scalerRate", &H_pEL_LO_scalerRate, &b_H_pEL_LO_scalerRate);
   fChain->SetBranchAddress("H.pEL_LO_LO.scaler", &H_pEL_LO_LO_scaler, &b_H_pEL_LO_LO_scaler);
   fChain->SetBranchAddress("H.pEL_LO_LO.scalerCut", &H_pEL_LO_LO_scalerCut, &b_H_pEL_LO_LO_scalerCut);
   fChain->SetBranchAddress("H.pEL_LO_LO.scalerRate", &H_pEL_LO_LO_scalerRate, &b_H_pEL_LO_LO_scalerRate);
   fChain->SetBranchAddress("H.pEL_REAL.scaler", &H_pEL_REAL_scaler, &b_H_pEL_REAL_scaler);
   fChain->SetBranchAddress("H.pEL_REAL.scalerCut", &H_pEL_REAL_scalerCut, &b_H_pEL_REAL_scalerCut);
   fChain->SetBranchAddress("H.pEL_REAL.scalerRate", &H_pEL_REAL_scalerRate, &b_H_pEL_REAL_scalerRate);
   fChain->SetBranchAddress("H.pPRE100.scaler", &H_pPRE100_scaler, &b_H_pPRE100_scaler);
   fChain->SetBranchAddress("H.pPRE100.scalerCut", &H_pPRE100_scalerCut, &b_H_pPRE100_scalerCut);
   fChain->SetBranchAddress("H.pPRE100.scalerRate", &H_pPRE100_scalerRate, &b_H_pPRE100_scalerRate);
   fChain->SetBranchAddress("H.pPRE150.scaler", &H_pPRE150_scaler, &b_H_pPRE150_scaler);
   fChain->SetBranchAddress("H.pPRE150.scalerCut", &H_pPRE150_scalerCut, &b_H_pPRE150_scalerCut);
   fChain->SetBranchAddress("H.pPRE150.scalerRate", &H_pPRE150_scalerRate, &b_H_pPRE150_scalerRate);
   fChain->SetBranchAddress("H.pPRE200.scaler", &H_pPRE200_scaler, &b_H_pPRE200_scaler);
   fChain->SetBranchAddress("H.pPRE200.scalerCut", &H_pPRE200_scalerCut, &b_H_pPRE200_scalerCut);
   fChain->SetBranchAddress("H.pPRE200.scalerRate", &H_pPRE200_scalerRate, &b_H_pPRE200_scalerRate);
   fChain->SetBranchAddress("H.pPRE40.scaler", &H_pPRE40_scaler, &b_H_pPRE40_scaler);
   fChain->SetBranchAddress("H.pPRE40.scalerCut", &H_pPRE40_scalerCut, &b_H_pPRE40_scalerCut);
   fChain->SetBranchAddress("H.pPRE40.scalerRate", &H_pPRE40_scalerRate, &b_H_pPRE40_scalerRate);
   fChain->SetBranchAddress("H.pSTOF.scaler", &H_pSTOF_scaler, &b_H_pSTOF_scaler);
   fChain->SetBranchAddress("H.pSTOF.scalerCut", &H_pSTOF_scalerCut, &b_H_pSTOF_scalerCut);
   fChain->SetBranchAddress("H.pSTOF.scalerRate", &H_pSTOF_scalerRate, &b_H_pSTOF_scalerRate);
   fChain->SetBranchAddress("H.pTRIG1.scaler", &H_pTRIG1_scaler, &b_H_pTRIG1_scaler);
   fChain->SetBranchAddress("H.pTRIG1.scalerCut", &H_pTRIG1_scalerCut, &b_H_pTRIG1_scalerCut);
   fChain->SetBranchAddress("H.pTRIG1.scalerRate", &H_pTRIG1_scalerRate, &b_H_pTRIG1_scalerRate);
   fChain->SetBranchAddress("H.pTRIG1_CP.scaler", &H_pTRIG1_CP_scaler, &b_H_pTRIG1_CP_scaler);
   fChain->SetBranchAddress("H.pTRIG1_CP.scalerCut", &H_pTRIG1_CP_scalerCut, &b_H_pTRIG1_CP_scalerCut);
   fChain->SetBranchAddress("H.pTRIG1_CP.scalerRate", &H_pTRIG1_CP_scalerRate, &b_H_pTRIG1_CP_scalerRate);
   fChain->SetBranchAddress("H.pTRIG1_Hel.scaler", &H_pTRIG1_Hel_scaler, &b_H_pTRIG1_Hel_scaler);
   fChain->SetBranchAddress("H.pTRIG1_Hel.scalerCut", &H_pTRIG1_Hel_scalerCut, &b_H_pTRIG1_Hel_scalerCut);
   fChain->SetBranchAddress("H.pTRIG1_Hel.scalerRate", &H_pTRIG1_Hel_scalerRate, &b_H_pTRIG1_Hel_scalerRate);
   fChain->SetBranchAddress("H.pTRIG2.scaler", &H_pTRIG2_scaler, &b_H_pTRIG2_scaler);
   fChain->SetBranchAddress("H.pTRIG2.scalerCut", &H_pTRIG2_scalerCut, &b_H_pTRIG2_scalerCut);
   fChain->SetBranchAddress("H.pTRIG2.scalerRate", &H_pTRIG2_scalerRate, &b_H_pTRIG2_scalerRate);
   fChain->SetBranchAddress("H.pTRIG2_Hel.scaler", &H_pTRIG2_Hel_scaler, &b_H_pTRIG2_Hel_scaler);
   fChain->SetBranchAddress("H.pTRIG2_Hel.scalerCut", &H_pTRIG2_Hel_scalerCut, &b_H_pTRIG2_Hel_scalerCut);
   fChain->SetBranchAddress("H.pTRIG2_Hel.scalerRate", &H_pTRIG2_Hel_scalerRate, &b_H_pTRIG2_Hel_scalerRate);
   fChain->SetBranchAddress("H.pTRIG3.scaler", &H_pTRIG3_scaler, &b_H_pTRIG3_scaler);
   fChain->SetBranchAddress("H.pTRIG3.scalerCut", &H_pTRIG3_scalerCut, &b_H_pTRIG3_scalerCut);
   fChain->SetBranchAddress("H.pTRIG3.scalerRate", &H_pTRIG3_scalerRate, &b_H_pTRIG3_scalerRate);
   fChain->SetBranchAddress("H.pTRIG3_Hel.scaler", &H_pTRIG3_Hel_scaler, &b_H_pTRIG3_Hel_scaler);
   fChain->SetBranchAddress("H.pTRIG3_Hel.scalerCut", &H_pTRIG3_Hel_scalerCut, &b_H_pTRIG3_Hel_scalerCut);
   fChain->SetBranchAddress("H.pTRIG3_Hel.scalerRate", &H_pTRIG3_Hel_scalerRate, &b_H_pTRIG3_Hel_scalerRate);
   fChain->SetBranchAddress("H.pTRIG4.scaler", &H_pTRIG4_scaler, &b_H_pTRIG4_scaler);
   fChain->SetBranchAddress("H.pTRIG4.scalerCut", &H_pTRIG4_scalerCut, &b_H_pTRIG4_scalerCut);
   fChain->SetBranchAddress("H.pTRIG4.scalerRate", &H_pTRIG4_scalerRate, &b_H_pTRIG4_scalerRate);
   fChain->SetBranchAddress("H.pTRIG4_Hel.scaler", &H_pTRIG4_Hel_scaler, &b_H_pTRIG4_Hel_scaler);
   fChain->SetBranchAddress("H.pTRIG4_Hel.scalerCut", &H_pTRIG4_Hel_scalerCut, &b_H_pTRIG4_Hel_scalerCut);
   fChain->SetBranchAddress("H.pTRIG4_Hel.scalerRate", &H_pTRIG4_Hel_scalerRate, &b_H_pTRIG4_Hel_scalerRate);
   fChain->SetBranchAddress("H.pTRIG5.scaler", &H_pTRIG5_scaler, &b_H_pTRIG5_scaler);
   fChain->SetBranchAddress("H.pTRIG5.scalerCut", &H_pTRIG5_scalerCut, &b_H_pTRIG5_scalerCut);
   fChain->SetBranchAddress("H.pTRIG5.scalerRate", &H_pTRIG5_scalerRate, &b_H_pTRIG5_scalerRate);
   fChain->SetBranchAddress("H.pTRIG5_Hel.scaler", &H_pTRIG5_Hel_scaler, &b_H_pTRIG5_Hel_scaler);
   fChain->SetBranchAddress("H.pTRIG5_Hel.scalerCut", &H_pTRIG5_Hel_scalerCut, &b_H_pTRIG5_Hel_scalerCut);
   fChain->SetBranchAddress("H.pTRIG5_Hel.scalerRate", &H_pTRIG5_Hel_scalerRate, &b_H_pTRIG5_Hel_scalerRate);
   fChain->SetBranchAddress("H.pTRIG6.scaler", &H_pTRIG6_scaler, &b_H_pTRIG6_scaler);
   fChain->SetBranchAddress("H.pTRIG6.scalerCut", &H_pTRIG6_scalerCut, &b_H_pTRIG6_scalerCut);
   fChain->SetBranchAddress("H.pTRIG6.scalerRate", &H_pTRIG6_scalerRate, &b_H_pTRIG6_scalerRate);
   fChain->SetBranchAddress("H.pTRIG6_Hel.scaler", &H_pTRIG6_Hel_scaler, &b_H_pTRIG6_Hel_scaler);
   fChain->SetBranchAddress("H.pTRIG6_Hel.scalerCut", &H_pTRIG6_Hel_scalerCut, &b_H_pTRIG6_Hel_scalerCut);
   fChain->SetBranchAddress("H.pTRIG6_Hel.scalerRate", &H_pTRIG6_Hel_scalerRate, &b_H_pTRIG6_Hel_scalerRate);
   fChain->SetBranchAddress("H.present", &H_present, &b_H_present);
   fChain->SetBranchAddress("H.rb.dir.x", &H_rb_dir_x, &b_H_rb_dir_x);
   fChain->SetBranchAddress("H.rb.dir.y", &H_rb_dir_y, &b_H_rb_dir_y);
   fChain->SetBranchAddress("H.rb.dir.z", &H_rb_dir_z, &b_H_rb_dir_z);
   fChain->SetBranchAddress("H.rb.e", &H_rb_e, &b_H_rb_e);
   fChain->SetBranchAddress("H.rb.ok", &H_rb_ok, &b_H_rb_ok);
   fChain->SetBranchAddress("H.rb.p", &H_rb_p, &b_H_rb_p);
   fChain->SetBranchAddress("H.rb.ph", &H_rb_ph, &b_H_rb_ph);
   fChain->SetBranchAddress("H.rb.pol", &H_rb_pol, &b_H_rb_pol);
   fChain->SetBranchAddress("H.rb.px", &H_rb_px, &b_H_rb_px);
   fChain->SetBranchAddress("H.rb.py", &H_rb_py, &b_H_rb_py);
   fChain->SetBranchAddress("H.rb.pz", &H_rb_pz, &b_H_rb_pz);
   fChain->SetBranchAddress("H.rb.raster.ebeam_epics", &H_rb_raster_ebeam_epics, &b_H_rb_raster_ebeam_epics);
   fChain->SetBranchAddress("H.rb.raster.fr_xa", &H_rb_raster_fr_xa, &b_H_rb_raster_fr_xa);
   fChain->SetBranchAddress("H.rb.raster.fr_xb", &H_rb_raster_fr_xb, &b_H_rb_raster_fr_xb);
   fChain->SetBranchAddress("H.rb.raster.fr_xbpmA", &H_rb_raster_fr_xbpmA, &b_H_rb_raster_fr_xbpmA);
   fChain->SetBranchAddress("H.rb.raster.fr_xbpmB", &H_rb_raster_fr_xbpmB, &b_H_rb_raster_fr_xbpmB);
   fChain->SetBranchAddress("H.rb.raster.fr_xbpmC", &H_rb_raster_fr_xbpmC, &b_H_rb_raster_fr_xbpmC);
   fChain->SetBranchAddress("H.rb.raster.fr_xbpm_tar", &H_rb_raster_fr_xbpm_tar, &b_H_rb_raster_fr_xbpm_tar);
   fChain->SetBranchAddress("H.rb.raster.fr_ya", &H_rb_raster_fr_ya, &b_H_rb_raster_fr_ya);
   fChain->SetBranchAddress("H.rb.raster.fr_yb", &H_rb_raster_fr_yb, &b_H_rb_raster_fr_yb);
   fChain->SetBranchAddress("H.rb.raster.fr_ybpmA", &H_rb_raster_fr_ybpmA, &b_H_rb_raster_fr_ybpmA);
   fChain->SetBranchAddress("H.rb.raster.fr_ybpmB", &H_rb_raster_fr_ybpmB, &b_H_rb_raster_fr_ybpmB);
   fChain->SetBranchAddress("H.rb.raster.fr_ybpmC", &H_rb_raster_fr_ybpmC, &b_H_rb_raster_fr_ybpmC);
   fChain->SetBranchAddress("H.rb.raster.fr_ybpm_tar", &H_rb_raster_fr_ybpm_tar, &b_H_rb_raster_fr_ybpm_tar);
   fChain->SetBranchAddress("H.rb.raster.frxaRawAdc", &H_rb_raster_frxaRawAdc, &b_H_rb_raster_frxaRawAdc);
   fChain->SetBranchAddress("H.rb.raster.frxa_adc", &H_rb_raster_frxa_adc, &b_H_rb_raster_frxa_adc);
   fChain->SetBranchAddress("H.rb.raster.frxbRawAdc", &H_rb_raster_frxbRawAdc, &b_H_rb_raster_frxbRawAdc);
   fChain->SetBranchAddress("H.rb.raster.frxb_adc", &H_rb_raster_frxb_adc, &b_H_rb_raster_frxb_adc);
   fChain->SetBranchAddress("H.rb.raster.fryaRawAdc", &H_rb_raster_fryaRawAdc, &b_H_rb_raster_fryaRawAdc);
   fChain->SetBranchAddress("H.rb.raster.frya_adc", &H_rb_raster_frya_adc, &b_H_rb_raster_frya_adc);
   fChain->SetBranchAddress("H.rb.raster.frybRawAdc", &H_rb_raster_frybRawAdc, &b_H_rb_raster_frybRawAdc);
   fChain->SetBranchAddress("H.rb.raster.fryb_adc", &H_rb_raster_fryb_adc, &b_H_rb_raster_fryb_adc);
   fChain->SetBranchAddress("H.rb.th", &H_rb_th, &b_H_rb_th);
   fChain->SetBranchAddress("H.rb.x", &H_rb_x, &b_H_rb_x);
   fChain->SetBranchAddress("H.rb.xpos", &H_rb_xpos, &b_H_rb_xpos);
   fChain->SetBranchAddress("H.rb.y", &H_rb_y, &b_H_rb_y);
   fChain->SetBranchAddress("H.rb.ypos", &H_rb_ypos, &b_H_rb_ypos);
   fChain->SetBranchAddress("H.rb.z", &H_rb_z, &b_H_rb_z);
   fChain->SetBranchAddress("H.rb.zpos", &H_rb_zpos, &b_H_rb_zpos);
   fChain->SetBranchAddress("H.react.ok", &H_react_ok, &b_H_react_ok);
   fChain->SetBranchAddress("H.react.x", &H_react_x, &b_H_react_x);
   fChain->SetBranchAddress("H.react.y", &H_react_y, &b_H_react_y);
   fChain->SetBranchAddress("H.react.z", &H_react_z, &b_H_react_z);
   fChain->SetBranchAddress("H.status", &H_status, &b_H_status);
   fChain->SetBranchAddress("H.tr.PruneSelect", &H_tr_PruneSelect, &b_H_tr_PruneSelect);
   fChain->SetBranchAddress("H.tr.n", &H_tr_n, &b_H_tr_n);
   fChain->SetBranchAddress("NPS.cal.etot", &NPS_cal_etot, &b_NPS_cal_etot);
   fChain->SetBranchAddress("NPS.cal.fly.earray", &NPS_cal_fly_earray, &b_NPS_cal_fly_earray);
   fChain->SetBranchAddress("NPS.cal.fly.nclust", &NPS_cal_fly_nclust, &b_NPS_cal_fly_nclust);
   fChain->SetBranchAddress("NPS.cal.fly.ntracks", &NPS_cal_fly_ntracks, &b_NPS_cal_fly_ntracks);
   fChain->SetBranchAddress("NPS.cal.fly.totNumAdcHits", &NPS_cal_fly_totNumAdcHits, &b_NPS_cal_fly_totNumAdcHits);
   fChain->SetBranchAddress("NPS.cal.fly.totNumGoodAdcHits", &NPS_cal_fly_totNumGoodAdcHits, &b_NPS_cal_fly_totNumGoodAdcHits);
   fChain->SetBranchAddress("NPS.cal.nclust", &NPS_cal_nclust, &b_NPS_cal_nclust);
   fChain->SetBranchAddress("NPS.cal.nhits", &NPS_cal_nhits, &b_NPS_cal_nhits);
   fChain->SetBranchAddress("NPS.cal.vtpErrorFlag", &NPS_cal_vtpErrorFlag, &b_NPS_cal_vtpErrorFlag);
   fChain->SetBranchAddress("NPS.kin.secondary.Erecoil", &NPS_kin_secondary_Erecoil, &b_NPS_kin_secondary_Erecoil);
   fChain->SetBranchAddress("NPS.kin.secondary.MandelS", &NPS_kin_secondary_MandelS, &b_NPS_kin_secondary_MandelS);
   fChain->SetBranchAddress("NPS.kin.secondary.MandelT", &NPS_kin_secondary_MandelT, &b_NPS_kin_secondary_MandelT);
   fChain->SetBranchAddress("NPS.kin.secondary.MandelU", &NPS_kin_secondary_MandelU, &b_NPS_kin_secondary_MandelU);
   fChain->SetBranchAddress("NPS.kin.secondary.Mrecoil", &NPS_kin_secondary_Mrecoil, &b_NPS_kin_secondary_Mrecoil);
   fChain->SetBranchAddress("NPS.kin.secondary.Prec_x", &NPS_kin_secondary_Prec_x, &b_NPS_kin_secondary_Prec_x);
   fChain->SetBranchAddress("NPS.kin.secondary.Prec_y", &NPS_kin_secondary_Prec_y, &b_NPS_kin_secondary_Prec_y);
   fChain->SetBranchAddress("NPS.kin.secondary.Prec_z", &NPS_kin_secondary_Prec_z, &b_NPS_kin_secondary_Prec_z);
   fChain->SetBranchAddress("NPS.kin.secondary.emiss", &NPS_kin_secondary_emiss, &b_NPS_kin_secondary_emiss);
   fChain->SetBranchAddress("NPS.kin.secondary.emiss_nuc", &NPS_kin_secondary_emiss_nuc, &b_NPS_kin_secondary_emiss_nuc);
   fChain->SetBranchAddress("NPS.kin.secondary.ph_bq", &NPS_kin_secondary_ph_bq, &b_NPS_kin_secondary_ph_bq);
   fChain->SetBranchAddress("NPS.kin.secondary.ph_xq", &NPS_kin_secondary_ph_xq, &b_NPS_kin_secondary_ph_xq);
   fChain->SetBranchAddress("NPS.kin.secondary.phb_cm", &NPS_kin_secondary_phb_cm, &b_NPS_kin_secondary_phb_cm);
   fChain->SetBranchAddress("NPS.kin.secondary.phx_cm", &NPS_kin_secondary_phx_cm, &b_NPS_kin_secondary_phx_cm);
   fChain->SetBranchAddress("NPS.kin.secondary.pmiss", &NPS_kin_secondary_pmiss, &b_NPS_kin_secondary_pmiss);
   fChain->SetBranchAddress("NPS.kin.secondary.pmiss_x", &NPS_kin_secondary_pmiss_x, &b_NPS_kin_secondary_pmiss_x);
   fChain->SetBranchAddress("NPS.kin.secondary.pmiss_y", &NPS_kin_secondary_pmiss_y, &b_NPS_kin_secondary_pmiss_y);
   fChain->SetBranchAddress("NPS.kin.secondary.pmiss_z", &NPS_kin_secondary_pmiss_z, &b_NPS_kin_secondary_pmiss_z);
   fChain->SetBranchAddress("NPS.kin.secondary.px_cm", &NPS_kin_secondary_px_cm, &b_NPS_kin_secondary_px_cm);
   fChain->SetBranchAddress("NPS.kin.secondary.t_tot_cm", &NPS_kin_secondary_t_tot_cm, &b_NPS_kin_secondary_t_tot_cm);
   fChain->SetBranchAddress("NPS.kin.secondary.tb", &NPS_kin_secondary_tb, &b_NPS_kin_secondary_tb);
   fChain->SetBranchAddress("NPS.kin.secondary.tb_cm", &NPS_kin_secondary_tb_cm, &b_NPS_kin_secondary_tb_cm);
   fChain->SetBranchAddress("NPS.kin.secondary.th_bq", &NPS_kin_secondary_th_bq, &b_NPS_kin_secondary_th_bq);
   fChain->SetBranchAddress("NPS.kin.secondary.th_xq", &NPS_kin_secondary_th_xq, &b_NPS_kin_secondary_th_xq);
   fChain->SetBranchAddress("NPS.kin.secondary.thb_cm", &NPS_kin_secondary_thb_cm, &b_NPS_kin_secondary_thb_cm);
   fChain->SetBranchAddress("NPS.kin.secondary.thx_cm", &NPS_kin_secondary_thx_cm, &b_NPS_kin_secondary_thx_cm);
   fChain->SetBranchAddress("NPS.kin.secondary.tx", &NPS_kin_secondary_tx, &b_NPS_kin_secondary_tx);
   fChain->SetBranchAddress("NPS.kin.secondary.tx_cm", &NPS_kin_secondary_tx_cm, &b_NPS_kin_secondary_tx_cm);
   fChain->SetBranchAddress("NPS.kin.secondary.xangle", &NPS_kin_secondary_xangle, &b_NPS_kin_secondary_xangle);
   fChain->SetBranchAddress("T.helicity.cycle", &T_helicity_cycle, &b_T_helicity_cycle);
   fChain->SetBranchAddress("T.helicity.hel", &T_helicity_hel, &b_T_helicity_hel);
   fChain->SetBranchAddress("T.helicity.helicity", &T_helicity_helicity, &b_T_helicity_helicity);
   fChain->SetBranchAddress("T.helicity.helpred", &T_helicity_helpred, &b_T_helicity_helpred);
   fChain->SetBranchAddress("T.helicity.helrep", &T_helicity_helrep, &b_T_helicity_helrep);
   fChain->SetBranchAddress("T.helicity.mps", &T_helicity_mps, &b_T_helicity_mps);
   fChain->SetBranchAddress("T.helicity.nqrt", &T_helicity_nqrt, &b_T_helicity_nqrt);
   fChain->SetBranchAddress("T.helicity.pcheck", &T_helicity_pcheck, &b_T_helicity_pcheck);
   fChain->SetBranchAddress("T.helicity.qrt", &T_helicity_qrt, &b_T_helicity_qrt);
   fChain->SetBranchAddress("T.hms.TdcRefTime", &T_hms_TdcRefTime, &b_T_hms_TdcRefTime);
   fChain->SetBranchAddress("T.hms.h1T_tdcMultiplicity", &T_hms_h1T_tdcMultiplicity, &b_T_hms_h1T_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.h1T_tdcTime", &T_hms_h1T_tdcTime, &b_T_hms_h1T_tdcTime);
   fChain->SetBranchAddress("T.hms.h1T_tdcTimeRaw", &T_hms_h1T_tdcTimeRaw, &b_T_hms_h1T_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.h1X_tdcMultiplicity", &T_hms_h1X_tdcMultiplicity, &b_T_hms_h1X_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.h1X_tdcTime", &T_hms_h1X_tdcTime, &b_T_hms_h1X_tdcTime);
   fChain->SetBranchAddress("T.hms.h1X_tdcTimeRaw", &T_hms_h1X_tdcTimeRaw, &b_T_hms_h1X_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.h1Y_tdcMultiplicity", &T_hms_h1Y_tdcMultiplicity, &b_T_hms_h1Y_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.h1Y_tdcTime", &T_hms_h1Y_tdcTime, &b_T_hms_h1Y_tdcTime);
   fChain->SetBranchAddress("T.hms.h1Y_tdcTimeRaw", &T_hms_h1Y_tdcTimeRaw, &b_T_hms_h1Y_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.h2T_tdcMultiplicity", &T_hms_h2T_tdcMultiplicity, &b_T_hms_h2T_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.h2T_tdcTime", &T_hms_h2T_tdcTime, &b_T_hms_h2T_tdcTime);
   fChain->SetBranchAddress("T.hms.h2T_tdcTimeRaw", &T_hms_h2T_tdcTimeRaw, &b_T_hms_h2T_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.h2X_tdcMultiplicity", &T_hms_h2X_tdcMultiplicity, &b_T_hms_h2X_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.h2X_tdcTime", &T_hms_h2X_tdcTime, &b_T_hms_h2X_tdcTime);
   fChain->SetBranchAddress("T.hms.h2X_tdcTimeRaw", &T_hms_h2X_tdcTimeRaw, &b_T_hms_h2X_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.h2Y_tdcMultiplicity", &T_hms_h2Y_tdcMultiplicity, &b_T_hms_h2Y_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.h2Y_tdcTime", &T_hms_h2Y_tdcTime, &b_T_hms_h2Y_tdcTime);
   fChain->SetBranchAddress("T.hms.h2Y_tdcTimeRaw", &T_hms_h2Y_tdcTimeRaw, &b_T_hms_h2Y_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hAER_adcMultiplicity", &T_hms_hAER_adcMultiplicity, &b_T_hms_hAER_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.hAER_adcPed", &T_hms_hAER_adcPed, &b_T_hms_hAER_adcPed);
   fChain->SetBranchAddress("T.hms.hAER_adcPedRaw", &T_hms_hAER_adcPedRaw, &b_T_hms_hAER_adcPedRaw);
   fChain->SetBranchAddress("T.hms.hAER_adcPulseAmp", &T_hms_hAER_adcPulseAmp, &b_T_hms_hAER_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.hAER_adcPulseAmpRaw", &T_hms_hAER_adcPulseAmpRaw, &b_T_hms_hAER_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hAER_adcPulseInt", &T_hms_hAER_adcPulseInt, &b_T_hms_hAER_adcPulseInt);
   fChain->SetBranchAddress("T.hms.hAER_adcPulseIntRaw", &T_hms_hAER_adcPulseIntRaw, &b_T_hms_hAER_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hAER_adcPulseTime", &T_hms_hAER_adcPulseTime, &b_T_hms_hAER_adcPulseTime);
   fChain->SetBranchAddress("T.hms.hAER_adcPulseTimeRaw", &T_hms_hAER_adcPulseTimeRaw, &b_T_hms_hAER_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hAER_adcSampMultiplicity", &T_hms_hAER_adcSampMultiplicity, &b_T_hms_hAER_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.hAER_adcSampPed", &T_hms_hAER_adcSampPed, &b_T_hms_hAER_adcSampPed);
   fChain->SetBranchAddress("T.hms.hAER_adcSampPedRaw", &T_hms_hAER_adcSampPedRaw, &b_T_hms_hAER_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.hAER_adcSampPulseAmp", &T_hms_hAER_adcSampPulseAmp, &b_T_hms_hAER_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.hAER_adcSampPulseAmpRaw", &T_hms_hAER_adcSampPulseAmpRaw, &b_T_hms_hAER_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hAER_adcSampPulseInt", &T_hms_hAER_adcSampPulseInt, &b_T_hms_hAER_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.hAER_adcSampPulseIntRaw", &T_hms_hAER_adcSampPulseIntRaw, &b_T_hms_hAER_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hAER_adcSampPulseTime", &T_hms_hAER_adcSampPulseTime, &b_T_hms_hAER_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.hAER_adcSampPulseTimeRaw", &T_hms_hAER_adcSampPulseTimeRaw, &b_T_hms_hAER_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hASUM_adcMultiplicity", &T_hms_hASUM_adcMultiplicity, &b_T_hms_hASUM_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.hASUM_adcPed", &T_hms_hASUM_adcPed, &b_T_hms_hASUM_adcPed);
   fChain->SetBranchAddress("T.hms.hASUM_adcPedRaw", &T_hms_hASUM_adcPedRaw, &b_T_hms_hASUM_adcPedRaw);
   fChain->SetBranchAddress("T.hms.hASUM_adcPulseAmp", &T_hms_hASUM_adcPulseAmp, &b_T_hms_hASUM_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.hASUM_adcPulseAmpRaw", &T_hms_hASUM_adcPulseAmpRaw, &b_T_hms_hASUM_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hASUM_adcPulseInt", &T_hms_hASUM_adcPulseInt, &b_T_hms_hASUM_adcPulseInt);
   fChain->SetBranchAddress("T.hms.hASUM_adcPulseIntRaw", &T_hms_hASUM_adcPulseIntRaw, &b_T_hms_hASUM_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hASUM_adcPulseTime", &T_hms_hASUM_adcPulseTime, &b_T_hms_hASUM_adcPulseTime);
   fChain->SetBranchAddress("T.hms.hASUM_adcPulseTimeRaw", &T_hms_hASUM_adcPulseTimeRaw, &b_T_hms_hASUM_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hASUM_adcSampMultiplicity", &T_hms_hASUM_adcSampMultiplicity, &b_T_hms_hASUM_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.hASUM_adcSampPed", &T_hms_hASUM_adcSampPed, &b_T_hms_hASUM_adcSampPed);
   fChain->SetBranchAddress("T.hms.hASUM_adcSampPedRaw", &T_hms_hASUM_adcSampPedRaw, &b_T_hms_hASUM_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.hASUM_adcSampPulseAmp", &T_hms_hASUM_adcSampPulseAmp, &b_T_hms_hASUM_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.hASUM_adcSampPulseAmpRaw", &T_hms_hASUM_adcSampPulseAmpRaw, &b_T_hms_hASUM_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hASUM_adcSampPulseInt", &T_hms_hASUM_adcSampPulseInt, &b_T_hms_hASUM_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.hASUM_adcSampPulseIntRaw", &T_hms_hASUM_adcSampPulseIntRaw, &b_T_hms_hASUM_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hASUM_adcSampPulseTime", &T_hms_hASUM_adcSampPulseTime, &b_T_hms_hASUM_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.hASUM_adcSampPulseTimeRaw", &T_hms_hASUM_adcSampPulseTimeRaw, &b_T_hms_hASUM_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hASUM_tdcMultiplicity", &T_hms_hASUM_tdcMultiplicity, &b_T_hms_hASUM_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hASUM_tdcTime", &T_hms_hASUM_tdcTime, &b_T_hms_hASUM_tdcTime);
   fChain->SetBranchAddress("T.hms.hASUM_tdcTimeRaw", &T_hms_hASUM_tdcTimeRaw, &b_T_hms_hASUM_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hBSUM_adcMultiplicity", &T_hms_hBSUM_adcMultiplicity, &b_T_hms_hBSUM_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.hBSUM_adcPed", &T_hms_hBSUM_adcPed, &b_T_hms_hBSUM_adcPed);
   fChain->SetBranchAddress("T.hms.hBSUM_adcPedRaw", &T_hms_hBSUM_adcPedRaw, &b_T_hms_hBSUM_adcPedRaw);
   fChain->SetBranchAddress("T.hms.hBSUM_adcPulseAmp", &T_hms_hBSUM_adcPulseAmp, &b_T_hms_hBSUM_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.hBSUM_adcPulseAmpRaw", &T_hms_hBSUM_adcPulseAmpRaw, &b_T_hms_hBSUM_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hBSUM_adcPulseInt", &T_hms_hBSUM_adcPulseInt, &b_T_hms_hBSUM_adcPulseInt);
   fChain->SetBranchAddress("T.hms.hBSUM_adcPulseIntRaw", &T_hms_hBSUM_adcPulseIntRaw, &b_T_hms_hBSUM_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hBSUM_adcPulseTime", &T_hms_hBSUM_adcPulseTime, &b_T_hms_hBSUM_adcPulseTime);
   fChain->SetBranchAddress("T.hms.hBSUM_adcPulseTimeRaw", &T_hms_hBSUM_adcPulseTimeRaw, &b_T_hms_hBSUM_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hBSUM_adcSampMultiplicity", &T_hms_hBSUM_adcSampMultiplicity, &b_T_hms_hBSUM_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.hBSUM_adcSampPed", &T_hms_hBSUM_adcSampPed, &b_T_hms_hBSUM_adcSampPed);
   fChain->SetBranchAddress("T.hms.hBSUM_adcSampPedRaw", &T_hms_hBSUM_adcSampPedRaw, &b_T_hms_hBSUM_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.hBSUM_adcSampPulseAmp", &T_hms_hBSUM_adcSampPulseAmp, &b_T_hms_hBSUM_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.hBSUM_adcSampPulseAmpRaw", &T_hms_hBSUM_adcSampPulseAmpRaw, &b_T_hms_hBSUM_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hBSUM_adcSampPulseInt", &T_hms_hBSUM_adcSampPulseInt, &b_T_hms_hBSUM_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.hBSUM_adcSampPulseIntRaw", &T_hms_hBSUM_adcSampPulseIntRaw, &b_T_hms_hBSUM_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hBSUM_adcSampPulseTime", &T_hms_hBSUM_adcSampPulseTime, &b_T_hms_hBSUM_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.hBSUM_adcSampPulseTimeRaw", &T_hms_hBSUM_adcSampPulseTimeRaw, &b_T_hms_hBSUM_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hBSUM_tdcMultiplicity", &T_hms_hBSUM_tdcMultiplicity, &b_T_hms_hBSUM_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hBSUM_tdcTime", &T_hms_hBSUM_tdcTime, &b_T_hms_hBSUM_tdcTime);
   fChain->SetBranchAddress("T.hms.hBSUM_tdcTimeRaw", &T_hms_hBSUM_tdcTimeRaw, &b_T_hms_hBSUM_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hCER_adcMultiplicity", &T_hms_hCER_adcMultiplicity, &b_T_hms_hCER_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.hCER_adcPed", &T_hms_hCER_adcPed, &b_T_hms_hCER_adcPed);
   fChain->SetBranchAddress("T.hms.hCER_adcPedRaw", &T_hms_hCER_adcPedRaw, &b_T_hms_hCER_adcPedRaw);
   fChain->SetBranchAddress("T.hms.hCER_adcPulseAmp", &T_hms_hCER_adcPulseAmp, &b_T_hms_hCER_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.hCER_adcPulseAmpRaw", &T_hms_hCER_adcPulseAmpRaw, &b_T_hms_hCER_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hCER_adcPulseInt", &T_hms_hCER_adcPulseInt, &b_T_hms_hCER_adcPulseInt);
   fChain->SetBranchAddress("T.hms.hCER_adcPulseIntRaw", &T_hms_hCER_adcPulseIntRaw, &b_T_hms_hCER_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hCER_adcPulseTime", &T_hms_hCER_adcPulseTime, &b_T_hms_hCER_adcPulseTime);
   fChain->SetBranchAddress("T.hms.hCER_adcPulseTimeRaw", &T_hms_hCER_adcPulseTimeRaw, &b_T_hms_hCER_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hCER_adcSampMultiplicity", &T_hms_hCER_adcSampMultiplicity, &b_T_hms_hCER_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.hCER_adcSampPed", &T_hms_hCER_adcSampPed, &b_T_hms_hCER_adcSampPed);
   fChain->SetBranchAddress("T.hms.hCER_adcSampPedRaw", &T_hms_hCER_adcSampPedRaw, &b_T_hms_hCER_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.hCER_adcSampPulseAmp", &T_hms_hCER_adcSampPulseAmp, &b_T_hms_hCER_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.hCER_adcSampPulseAmpRaw", &T_hms_hCER_adcSampPulseAmpRaw, &b_T_hms_hCER_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hCER_adcSampPulseInt", &T_hms_hCER_adcSampPulseInt, &b_T_hms_hCER_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.hCER_adcSampPulseIntRaw", &T_hms_hCER_adcSampPulseIntRaw, &b_T_hms_hCER_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hCER_adcSampPulseTime", &T_hms_hCER_adcSampPulseTime, &b_T_hms_hCER_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.hCER_adcSampPulseTimeRaw", &T_hms_hCER_adcSampPulseTimeRaw, &b_T_hms_hCER_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hCER_tdcMultiplicity", &T_hms_hCER_tdcMultiplicity, &b_T_hms_hCER_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hCER_tdcTime", &T_hms_hCER_tdcTime, &b_T_hms_hCER_tdcTime);
   fChain->SetBranchAddress("T.hms.hCER_tdcTimeRaw", &T_hms_hCER_tdcTimeRaw, &b_T_hms_hCER_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hCSUM_adcMultiplicity", &T_hms_hCSUM_adcMultiplicity, &b_T_hms_hCSUM_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.hCSUM_adcPed", &T_hms_hCSUM_adcPed, &b_T_hms_hCSUM_adcPed);
   fChain->SetBranchAddress("T.hms.hCSUM_adcPedRaw", &T_hms_hCSUM_adcPedRaw, &b_T_hms_hCSUM_adcPedRaw);
   fChain->SetBranchAddress("T.hms.hCSUM_adcPulseAmp", &T_hms_hCSUM_adcPulseAmp, &b_T_hms_hCSUM_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.hCSUM_adcPulseAmpRaw", &T_hms_hCSUM_adcPulseAmpRaw, &b_T_hms_hCSUM_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hCSUM_adcPulseInt", &T_hms_hCSUM_adcPulseInt, &b_T_hms_hCSUM_adcPulseInt);
   fChain->SetBranchAddress("T.hms.hCSUM_adcPulseIntRaw", &T_hms_hCSUM_adcPulseIntRaw, &b_T_hms_hCSUM_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hCSUM_adcPulseTime", &T_hms_hCSUM_adcPulseTime, &b_T_hms_hCSUM_adcPulseTime);
   fChain->SetBranchAddress("T.hms.hCSUM_adcPulseTimeRaw", &T_hms_hCSUM_adcPulseTimeRaw, &b_T_hms_hCSUM_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hCSUM_adcSampMultiplicity", &T_hms_hCSUM_adcSampMultiplicity, &b_T_hms_hCSUM_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.hCSUM_adcSampPed", &T_hms_hCSUM_adcSampPed, &b_T_hms_hCSUM_adcSampPed);
   fChain->SetBranchAddress("T.hms.hCSUM_adcSampPedRaw", &T_hms_hCSUM_adcSampPedRaw, &b_T_hms_hCSUM_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.hCSUM_adcSampPulseAmp", &T_hms_hCSUM_adcSampPulseAmp, &b_T_hms_hCSUM_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.hCSUM_adcSampPulseAmpRaw", &T_hms_hCSUM_adcSampPulseAmpRaw, &b_T_hms_hCSUM_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hCSUM_adcSampPulseInt", &T_hms_hCSUM_adcSampPulseInt, &b_T_hms_hCSUM_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.hCSUM_adcSampPulseIntRaw", &T_hms_hCSUM_adcSampPulseIntRaw, &b_T_hms_hCSUM_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hCSUM_adcSampPulseTime", &T_hms_hCSUM_adcSampPulseTime, &b_T_hms_hCSUM_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.hCSUM_adcSampPulseTimeRaw", &T_hms_hCSUM_adcSampPulseTimeRaw, &b_T_hms_hCSUM_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hCSUM_tdcMultiplicity", &T_hms_hCSUM_tdcMultiplicity, &b_T_hms_hCSUM_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hCSUM_tdcTime", &T_hms_hCSUM_tdcTime, &b_T_hms_hCSUM_tdcTime);
   fChain->SetBranchAddress("T.hms.hCSUM_tdcTimeRaw", &T_hms_hCSUM_tdcTimeRaw, &b_T_hms_hCSUM_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hDCREF1_tdcMultiplicity", &T_hms_hDCREF1_tdcMultiplicity, &b_T_hms_hDCREF1_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hDCREF1_tdcTime", &T_hms_hDCREF1_tdcTime, &b_T_hms_hDCREF1_tdcTime);
   fChain->SetBranchAddress("T.hms.hDCREF1_tdcTimeRaw", &T_hms_hDCREF1_tdcTimeRaw, &b_T_hms_hDCREF1_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hDCREF2_tdcMultiplicity", &T_hms_hDCREF2_tdcMultiplicity, &b_T_hms_hDCREF2_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hDCREF2_tdcTime", &T_hms_hDCREF2_tdcTime, &b_T_hms_hDCREF2_tdcTime);
   fChain->SetBranchAddress("T.hms.hDCREF2_tdcTimeRaw", &T_hms_hDCREF2_tdcTimeRaw, &b_T_hms_hDCREF2_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hDCREF3_tdcMultiplicity", &T_hms_hDCREF3_tdcMultiplicity, &b_T_hms_hDCREF3_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hDCREF3_tdcTime", &T_hms_hDCREF3_tdcTime, &b_T_hms_hDCREF3_tdcTime);
   fChain->SetBranchAddress("T.hms.hDCREF3_tdcTimeRaw", &T_hms_hDCREF3_tdcTimeRaw, &b_T_hms_hDCREF3_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hDCREF4_tdcMultiplicity", &T_hms_hDCREF4_tdcMultiplicity, &b_T_hms_hDCREF4_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hDCREF4_tdcTime", &T_hms_hDCREF4_tdcTime, &b_T_hms_hDCREF4_tdcTime);
   fChain->SetBranchAddress("T.hms.hDCREF4_tdcTimeRaw", &T_hms_hDCREF4_tdcTimeRaw, &b_T_hms_hDCREF4_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hDCREF5_tdcMultiplicity", &T_hms_hDCREF5_tdcMultiplicity, &b_T_hms_hDCREF5_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hDCREF5_tdcTime", &T_hms_hDCREF5_tdcTime, &b_T_hms_hDCREF5_tdcTime);
   fChain->SetBranchAddress("T.hms.hDCREF5_tdcTimeRaw", &T_hms_hDCREF5_tdcTimeRaw, &b_T_hms_hDCREF5_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hDSUM_adcMultiplicity", &T_hms_hDSUM_adcMultiplicity, &b_T_hms_hDSUM_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.hDSUM_adcPed", &T_hms_hDSUM_adcPed, &b_T_hms_hDSUM_adcPed);
   fChain->SetBranchAddress("T.hms.hDSUM_adcPedRaw", &T_hms_hDSUM_adcPedRaw, &b_T_hms_hDSUM_adcPedRaw);
   fChain->SetBranchAddress("T.hms.hDSUM_adcPulseAmp", &T_hms_hDSUM_adcPulseAmp, &b_T_hms_hDSUM_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.hDSUM_adcPulseAmpRaw", &T_hms_hDSUM_adcPulseAmpRaw, &b_T_hms_hDSUM_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hDSUM_adcPulseInt", &T_hms_hDSUM_adcPulseInt, &b_T_hms_hDSUM_adcPulseInt);
   fChain->SetBranchAddress("T.hms.hDSUM_adcPulseIntRaw", &T_hms_hDSUM_adcPulseIntRaw, &b_T_hms_hDSUM_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hDSUM_adcPulseTime", &T_hms_hDSUM_adcPulseTime, &b_T_hms_hDSUM_adcPulseTime);
   fChain->SetBranchAddress("T.hms.hDSUM_adcPulseTimeRaw", &T_hms_hDSUM_adcPulseTimeRaw, &b_T_hms_hDSUM_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hDSUM_adcSampMultiplicity", &T_hms_hDSUM_adcSampMultiplicity, &b_T_hms_hDSUM_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.hDSUM_adcSampPed", &T_hms_hDSUM_adcSampPed, &b_T_hms_hDSUM_adcSampPed);
   fChain->SetBranchAddress("T.hms.hDSUM_adcSampPedRaw", &T_hms_hDSUM_adcSampPedRaw, &b_T_hms_hDSUM_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.hDSUM_adcSampPulseAmp", &T_hms_hDSUM_adcSampPulseAmp, &b_T_hms_hDSUM_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.hDSUM_adcSampPulseAmpRaw", &T_hms_hDSUM_adcSampPulseAmpRaw, &b_T_hms_hDSUM_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hDSUM_adcSampPulseInt", &T_hms_hDSUM_adcSampPulseInt, &b_T_hms_hDSUM_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.hDSUM_adcSampPulseIntRaw", &T_hms_hDSUM_adcSampPulseIntRaw, &b_T_hms_hDSUM_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hDSUM_adcSampPulseTime", &T_hms_hDSUM_adcSampPulseTime, &b_T_hms_hDSUM_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.hDSUM_adcSampPulseTimeRaw", &T_hms_hDSUM_adcSampPulseTimeRaw, &b_T_hms_hDSUM_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hDSUM_tdcMultiplicity", &T_hms_hDSUM_tdcMultiplicity, &b_T_hms_hDSUM_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hDSUM_tdcTime", &T_hms_hDSUM_tdcTime, &b_T_hms_hDSUM_tdcTime);
   fChain->SetBranchAddress("T.hms.hDSUM_tdcTimeRaw", &T_hms_hDSUM_tdcTimeRaw, &b_T_hms_hDSUM_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEDTM_tdcMultiplicity", &T_hms_hEDTM_tdcMultiplicity, &b_T_hms_hEDTM_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hEDTM_tdcTime", &T_hms_hEDTM_tdcTime, &b_T_hms_hEDTM_tdcTime);
   fChain->SetBranchAddress("T.hms.hEDTM_tdcTimeRaw", &T_hms_hEDTM_tdcTimeRaw, &b_T_hms_hEDTM_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_CLEAN_tdcMultiplicity", &T_hms_hEL_CLEAN_tdcMultiplicity, &b_T_hms_hEL_CLEAN_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hEL_CLEAN_tdcTime", &T_hms_hEL_CLEAN_tdcTime, &b_T_hms_hEL_CLEAN_tdcTime);
   fChain->SetBranchAddress("T.hms.hEL_CLEAN_tdcTimeRaw", &T_hms_hEL_CLEAN_tdcTimeRaw, &b_T_hms_hEL_CLEAN_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_HI_tdcMultiplicity", &T_hms_hEL_HI_tdcMultiplicity, &b_T_hms_hEL_HI_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hEL_HI_tdcTime", &T_hms_hEL_HI_tdcTime, &b_T_hms_hEL_HI_tdcTime);
   fChain->SetBranchAddress("T.hms.hEL_HI_tdcTimeRaw", &T_hms_hEL_HI_tdcTimeRaw, &b_T_hms_hEL_HI_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_LO_LO_tdcMultiplicity", &T_hms_hEL_LO_LO_tdcMultiplicity, &b_T_hms_hEL_LO_LO_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hEL_LO_LO_tdcTime", &T_hms_hEL_LO_LO_tdcTime, &b_T_hms_hEL_LO_LO_tdcTime);
   fChain->SetBranchAddress("T.hms.hEL_LO_LO_tdcTimeRaw", &T_hms_hEL_LO_LO_tdcTimeRaw, &b_T_hms_hEL_LO_LO_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_LO_tdcMultiplicity", &T_hms_hEL_LO_tdcMultiplicity, &b_T_hms_hEL_LO_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hEL_LO_tdcTime", &T_hms_hEL_LO_tdcTime, &b_T_hms_hEL_LO_tdcTime);
   fChain->SetBranchAddress("T.hms.hEL_LO_tdcTimeRaw", &T_hms_hEL_LO_tdcTimeRaw, &b_T_hms_hEL_LO_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hEL_REAL_tdcMultiplicity", &T_hms_hEL_REAL_tdcMultiplicity, &b_T_hms_hEL_REAL_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hEL_REAL_tdcTime", &T_hms_hEL_REAL_tdcTime, &b_T_hms_hEL_REAL_tdcTime);
   fChain->SetBranchAddress("T.hms.hEL_REAL_tdcTimeRaw", &T_hms_hEL_REAL_tdcTimeRaw, &b_T_hms_hEL_REAL_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcMultiplicity", &T_hms_hFADC_TREF_ROC1_adcMultiplicity, &b_T_hms_hFADC_TREF_ROC1_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPed", &T_hms_hFADC_TREF_ROC1_adcPed, &b_T_hms_hFADC_TREF_ROC1_adcPed);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPedRaw", &T_hms_hFADC_TREF_ROC1_adcPedRaw, &b_T_hms_hFADC_TREF_ROC1_adcPedRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseAmp", &T_hms_hFADC_TREF_ROC1_adcPulseAmp, &b_T_hms_hFADC_TREF_ROC1_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseAmpRaw", &T_hms_hFADC_TREF_ROC1_adcPulseAmpRaw, &b_T_hms_hFADC_TREF_ROC1_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseInt", &T_hms_hFADC_TREF_ROC1_adcPulseInt, &b_T_hms_hFADC_TREF_ROC1_adcPulseInt);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseIntRaw", &T_hms_hFADC_TREF_ROC1_adcPulseIntRaw, &b_T_hms_hFADC_TREF_ROC1_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseTime", &T_hms_hFADC_TREF_ROC1_adcPulseTime, &b_T_hms_hFADC_TREF_ROC1_adcPulseTime);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseTimeRaw", &T_hms_hFADC_TREF_ROC1_adcPulseTimeRaw, &b_T_hms_hFADC_TREF_ROC1_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampMultiplicity", &T_hms_hFADC_TREF_ROC1_adcSampMultiplicity, &b_T_hms_hFADC_TREF_ROC1_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPed", &T_hms_hFADC_TREF_ROC1_adcSampPed, &b_T_hms_hFADC_TREF_ROC1_adcSampPed);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPedRaw", &T_hms_hFADC_TREF_ROC1_adcSampPedRaw, &b_T_hms_hFADC_TREF_ROC1_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseAmp", &T_hms_hFADC_TREF_ROC1_adcSampPulseAmp, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseAmpRaw", &T_hms_hFADC_TREF_ROC1_adcSampPulseAmpRaw, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseInt", &T_hms_hFADC_TREF_ROC1_adcSampPulseInt, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseIntRaw", &T_hms_hFADC_TREF_ROC1_adcSampPulseIntRaw, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseTime", &T_hms_hFADC_TREF_ROC1_adcSampPulseTime, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcSampPulseTimeRaw", &T_hms_hFADC_TREF_ROC1_adcSampPulseTimeRaw, &b_T_hms_hFADC_TREF_ROC1_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hHODO_RF_tdcMultiplicity", &T_hms_hHODO_RF_tdcMultiplicity, &b_T_hms_hHODO_RF_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hHODO_RF_tdcTime", &T_hms_hHODO_RF_tdcTime, &b_T_hms_hHODO_RF_tdcTime);
   fChain->SetBranchAddress("T.hms.hHODO_RF_tdcTimeRaw", &T_hms_hHODO_RF_tdcTimeRaw, &b_T_hms_hHODO_RF_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hPRE100_tdcMultiplicity", &T_hms_hPRE100_tdcMultiplicity, &b_T_hms_hPRE100_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hPRE100_tdcTime", &T_hms_hPRE100_tdcTime, &b_T_hms_hPRE100_tdcTime);
   fChain->SetBranchAddress("T.hms.hPRE100_tdcTimeRaw", &T_hms_hPRE100_tdcTimeRaw, &b_T_hms_hPRE100_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hPRE150_tdcMultiplicity", &T_hms_hPRE150_tdcMultiplicity, &b_T_hms_hPRE150_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hPRE150_tdcTime", &T_hms_hPRE150_tdcTime, &b_T_hms_hPRE150_tdcTime);
   fChain->SetBranchAddress("T.hms.hPRE150_tdcTimeRaw", &T_hms_hPRE150_tdcTimeRaw, &b_T_hms_hPRE150_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hPRE200_tdcMultiplicity", &T_hms_hPRE200_tdcMultiplicity, &b_T_hms_hPRE200_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hPRE200_tdcTime", &T_hms_hPRE200_tdcTime, &b_T_hms_hPRE200_tdcTime);
   fChain->SetBranchAddress("T.hms.hPRE200_tdcTimeRaw", &T_hms_hPRE200_tdcTimeRaw, &b_T_hms_hPRE200_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hPRE40_tdcMultiplicity", &T_hms_hPRE40_tdcMultiplicity, &b_T_hms_hPRE40_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hPRE40_tdcTime", &T_hms_hPRE40_tdcTime, &b_T_hms_hPRE40_tdcTime);
   fChain->SetBranchAddress("T.hms.hPRE40_tdcTimeRaw", &T_hms_hPRE40_tdcTimeRaw, &b_T_hms_hPRE40_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hPRHI_tdcMultiplicity", &T_hms_hPRHI_tdcMultiplicity, &b_T_hms_hPRHI_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hPRHI_tdcTime", &T_hms_hPRHI_tdcTime, &b_T_hms_hPRHI_tdcTime);
   fChain->SetBranchAddress("T.hms.hPRHI_tdcTimeRaw", &T_hms_hPRHI_tdcTimeRaw, &b_T_hms_hPRHI_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hPRLO_tdcMultiplicity", &T_hms_hPRLO_tdcMultiplicity, &b_T_hms_hPRLO_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hPRLO_tdcTime", &T_hms_hPRLO_tdcTime, &b_T_hms_hPRLO_tdcTime);
   fChain->SetBranchAddress("T.hms.hPRLO_tdcTimeRaw", &T_hms_hPRLO_tdcTimeRaw, &b_T_hms_hPRLO_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcMultiplicity", &T_hms_hPSHWR_adcMultiplicity, &b_T_hms_hPSHWR_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcPed", &T_hms_hPSHWR_adcPed, &b_T_hms_hPSHWR_adcPed);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcPedRaw", &T_hms_hPSHWR_adcPedRaw, &b_T_hms_hPSHWR_adcPedRaw);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcPulseAmp", &T_hms_hPSHWR_adcPulseAmp, &b_T_hms_hPSHWR_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcPulseAmpRaw", &T_hms_hPSHWR_adcPulseAmpRaw, &b_T_hms_hPSHWR_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcPulseInt", &T_hms_hPSHWR_adcPulseInt, &b_T_hms_hPSHWR_adcPulseInt);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcPulseIntRaw", &T_hms_hPSHWR_adcPulseIntRaw, &b_T_hms_hPSHWR_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcPulseTime", &T_hms_hPSHWR_adcPulseTime, &b_T_hms_hPSHWR_adcPulseTime);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcPulseTimeRaw", &T_hms_hPSHWR_adcPulseTimeRaw, &b_T_hms_hPSHWR_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcSampMultiplicity", &T_hms_hPSHWR_adcSampMultiplicity, &b_T_hms_hPSHWR_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcSampPed", &T_hms_hPSHWR_adcSampPed, &b_T_hms_hPSHWR_adcSampPed);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcSampPedRaw", &T_hms_hPSHWR_adcSampPedRaw, &b_T_hms_hPSHWR_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcSampPulseAmp", &T_hms_hPSHWR_adcSampPulseAmp, &b_T_hms_hPSHWR_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcSampPulseAmpRaw", &T_hms_hPSHWR_adcSampPulseAmpRaw, &b_T_hms_hPSHWR_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcSampPulseInt", &T_hms_hPSHWR_adcSampPulseInt, &b_T_hms_hPSHWR_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcSampPulseIntRaw", &T_hms_hPSHWR_adcSampPulseIntRaw, &b_T_hms_hPSHWR_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcSampPulseTime", &T_hms_hPSHWR_adcSampPulseTime, &b_T_hms_hPSHWR_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.hPSHWR_adcSampPulseTimeRaw", &T_hms_hPSHWR_adcSampPulseTimeRaw, &b_T_hms_hPSHWR_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hRF_tdcMultiplicity", &T_hms_hRF_tdcMultiplicity, &b_T_hms_hRF_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hRF_tdcTime", &T_hms_hRF_tdcTime, &b_T_hms_hRF_tdcTime);
   fChain->SetBranchAddress("T.hms.hRF_tdcTimeRaw", &T_hms_hRF_tdcTimeRaw, &b_T_hms_hRF_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hSHWR_adcMultiplicity", &T_hms_hSHWR_adcMultiplicity, &b_T_hms_hSHWR_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.hSHWR_adcPed", &T_hms_hSHWR_adcPed, &b_T_hms_hSHWR_adcPed);
   fChain->SetBranchAddress("T.hms.hSHWR_adcPedRaw", &T_hms_hSHWR_adcPedRaw, &b_T_hms_hSHWR_adcPedRaw);
   fChain->SetBranchAddress("T.hms.hSHWR_adcPulseAmp", &T_hms_hSHWR_adcPulseAmp, &b_T_hms_hSHWR_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.hSHWR_adcPulseAmpRaw", &T_hms_hSHWR_adcPulseAmpRaw, &b_T_hms_hSHWR_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hSHWR_adcPulseInt", &T_hms_hSHWR_adcPulseInt, &b_T_hms_hSHWR_adcPulseInt);
   fChain->SetBranchAddress("T.hms.hSHWR_adcPulseIntRaw", &T_hms_hSHWR_adcPulseIntRaw, &b_T_hms_hSHWR_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hSHWR_adcPulseTime", &T_hms_hSHWR_adcPulseTime, &b_T_hms_hSHWR_adcPulseTime);
   fChain->SetBranchAddress("T.hms.hSHWR_adcPulseTimeRaw", &T_hms_hSHWR_adcPulseTimeRaw, &b_T_hms_hSHWR_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hSHWR_adcSampMultiplicity", &T_hms_hSHWR_adcSampMultiplicity, &b_T_hms_hSHWR_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.hSHWR_adcSampPed", &T_hms_hSHWR_adcSampPed, &b_T_hms_hSHWR_adcSampPed);
   fChain->SetBranchAddress("T.hms.hSHWR_adcSampPedRaw", &T_hms_hSHWR_adcSampPedRaw, &b_T_hms_hSHWR_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.hSHWR_adcSampPulseAmp", &T_hms_hSHWR_adcSampPulseAmp, &b_T_hms_hSHWR_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.hSHWR_adcSampPulseAmpRaw", &T_hms_hSHWR_adcSampPulseAmpRaw, &b_T_hms_hSHWR_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.hSHWR_adcSampPulseInt", &T_hms_hSHWR_adcSampPulseInt, &b_T_hms_hSHWR_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.hSHWR_adcSampPulseIntRaw", &T_hms_hSHWR_adcSampPulseIntRaw, &b_T_hms_hSHWR_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.hSHWR_adcSampPulseTime", &T_hms_hSHWR_adcSampPulseTime, &b_T_hms_hSHWR_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.hSHWR_adcSampPulseTimeRaw", &T_hms_hSHWR_adcSampPulseTimeRaw, &b_T_hms_hSHWR_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.hSHWR_tdcMultiplicity", &T_hms_hSHWR_tdcMultiplicity, &b_T_hms_hSHWR_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hSHWR_tdcTime", &T_hms_hSHWR_tdcTime, &b_T_hms_hSHWR_tdcTime);
   fChain->SetBranchAddress("T.hms.hSHWR_tdcTimeRaw", &T_hms_hSHWR_tdcTimeRaw, &b_T_hms_hSHWR_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hSTOF_tdcMultiplicity", &T_hms_hSTOF_tdcMultiplicity, &b_T_hms_hSTOF_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hSTOF_tdcTime", &T_hms_hSTOF_tdcTime, &b_T_hms_hSTOF_tdcTime);
   fChain->SetBranchAddress("T.hms.hSTOF_tdcTimeRaw", &T_hms_hSTOF_tdcTimeRaw, &b_T_hms_hSTOF_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hT1_tdcMultiplicity", &T_hms_hT1_tdcMultiplicity, &b_T_hms_hT1_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hT1_tdcTime", &T_hms_hT1_tdcTime, &b_T_hms_hT1_tdcTime);
   fChain->SetBranchAddress("T.hms.hT1_tdcTimeRaw", &T_hms_hT1_tdcTimeRaw, &b_T_hms_hT1_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hT2_tdcMultiplicity", &T_hms_hT2_tdcMultiplicity, &b_T_hms_hT2_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hT2_tdcTime", &T_hms_hT2_tdcTime, &b_T_hms_hT2_tdcTime);
   fChain->SetBranchAddress("T.hms.hT2_tdcTimeRaw", &T_hms_hT2_tdcTimeRaw, &b_T_hms_hT2_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hT3_tdcMultiplicity", &T_hms_hT3_tdcMultiplicity, &b_T_hms_hT3_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hT3_tdcTime", &T_hms_hT3_tdcTime, &b_T_hms_hT3_tdcTime);
   fChain->SetBranchAddress("T.hms.hT3_tdcTimeRaw", &T_hms_hT3_tdcTimeRaw, &b_T_hms_hT3_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hTRIG1_tdcMultiplicity", &T_hms_hTRIG1_tdcMultiplicity, &b_T_hms_hTRIG1_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hTRIG1_tdcTime", &T_hms_hTRIG1_tdcTime, &b_T_hms_hTRIG1_tdcTime);
   fChain->SetBranchAddress("T.hms.hTRIG1_tdcTimeRaw", &T_hms_hTRIG1_tdcTimeRaw, &b_T_hms_hTRIG1_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hTRIG2_tdcMultiplicity", &T_hms_hTRIG2_tdcMultiplicity, &b_T_hms_hTRIG2_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hTRIG2_tdcTime", &T_hms_hTRIG2_tdcTime, &b_T_hms_hTRIG2_tdcTime);
   fChain->SetBranchAddress("T.hms.hTRIG2_tdcTimeRaw", &T_hms_hTRIG2_tdcTimeRaw, &b_T_hms_hTRIG2_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hTRIG3_tdcMultiplicity", &T_hms_hTRIG3_tdcMultiplicity, &b_T_hms_hTRIG3_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hTRIG3_tdcTime", &T_hms_hTRIG3_tdcTime, &b_T_hms_hTRIG3_tdcTime);
   fChain->SetBranchAddress("T.hms.hTRIG3_tdcTimeRaw", &T_hms_hTRIG3_tdcTimeRaw, &b_T_hms_hTRIG3_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hTRIG4_tdcMultiplicity", &T_hms_hTRIG4_tdcMultiplicity, &b_T_hms_hTRIG4_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hTRIG4_tdcTime", &T_hms_hTRIG4_tdcTime, &b_T_hms_hTRIG4_tdcTime);
   fChain->SetBranchAddress("T.hms.hTRIG4_tdcTimeRaw", &T_hms_hTRIG4_tdcTimeRaw, &b_T_hms_hTRIG4_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hTRIG5_tdcMultiplicity", &T_hms_hTRIG5_tdcMultiplicity, &b_T_hms_hTRIG5_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hTRIG5_tdcTime", &T_hms_hTRIG5_tdcTime, &b_T_hms_hTRIG5_tdcTime);
   fChain->SetBranchAddress("T.hms.hTRIG5_tdcTimeRaw", &T_hms_hTRIG5_tdcTimeRaw, &b_T_hms_hTRIG5_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.hTRIG6_tdcMultiplicity", &T_hms_hTRIG6_tdcMultiplicity, &b_T_hms_hTRIG6_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.hTRIG6_tdcTime", &T_hms_hTRIG6_tdcTime, &b_T_hms_hTRIG6_tdcTime);
   fChain->SetBranchAddress("T.hms.hTRIG6_tdcTimeRaw", &T_hms_hTRIG6_tdcTimeRaw, &b_T_hms_hTRIG6_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.npsTRIG1_tdcMultiplicity", &T_hms_npsTRIG1_tdcMultiplicity, &b_T_hms_npsTRIG1_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.npsTRIG1_tdcTime", &T_hms_npsTRIG1_tdcTime, &b_T_hms_npsTRIG1_tdcTime);
   fChain->SetBranchAddress("T.hms.npsTRIG1_tdcTimeRaw", &T_hms_npsTRIG1_tdcTimeRaw, &b_T_hms_npsTRIG1_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.npsTRIG2_tdcMultiplicity", &T_hms_npsTRIG2_tdcMultiplicity, &b_T_hms_npsTRIG2_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.npsTRIG2_tdcTime", &T_hms_npsTRIG2_tdcTime, &b_T_hms_npsTRIG2_tdcTime);
   fChain->SetBranchAddress("T.hms.npsTRIG2_tdcTimeRaw", &T_hms_npsTRIG2_tdcTimeRaw, &b_T_hms_npsTRIG2_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.npsTRIG3_tdcMultiplicity", &T_hms_npsTRIG3_tdcMultiplicity, &b_T_hms_npsTRIG3_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.npsTRIG3_tdcTime", &T_hms_npsTRIG3_tdcTime, &b_T_hms_npsTRIG3_tdcTime);
   fChain->SetBranchAddress("T.hms.npsTRIG3_tdcTimeRaw", &T_hms_npsTRIG3_tdcTimeRaw, &b_T_hms_npsTRIG3_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.npsTRIG4_tdcMultiplicity", &T_hms_npsTRIG4_tdcMultiplicity, &b_T_hms_npsTRIG4_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.npsTRIG4_tdcTime", &T_hms_npsTRIG4_tdcTime, &b_T_hms_npsTRIG4_tdcTime);
   fChain->SetBranchAddress("T.hms.npsTRIG4_tdcTimeRaw", &T_hms_npsTRIG4_tdcTimeRaw, &b_T_hms_npsTRIG4_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.npsTRIG5_tdcMultiplicity", &T_hms_npsTRIG5_tdcMultiplicity, &b_T_hms_npsTRIG5_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.npsTRIG5_tdcTime", &T_hms_npsTRIG5_tdcTime, &b_T_hms_npsTRIG5_tdcTime);
   fChain->SetBranchAddress("T.hms.npsTRIG5_tdcTimeRaw", &T_hms_npsTRIG5_tdcTimeRaw, &b_T_hms_npsTRIG5_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.npsTRIG6_tdcMultiplicity", &T_hms_npsTRIG6_tdcMultiplicity, &b_T_hms_npsTRIG6_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.npsTRIG6_tdcTime", &T_hms_npsTRIG6_tdcTime, &b_T_hms_npsTRIG6_tdcTime);
   fChain->SetBranchAddress("T.hms.npsTRIG6_tdcTimeRaw", &T_hms_npsTRIG6_tdcTimeRaw, &b_T_hms_npsTRIG6_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.pEL_CLEAN_tdcMultiplicity", &T_hms_pEL_CLEAN_tdcMultiplicity, &b_T_hms_pEL_CLEAN_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.pEL_CLEAN_tdcTime", &T_hms_pEL_CLEAN_tdcTime, &b_T_hms_pEL_CLEAN_tdcTime);
   fChain->SetBranchAddress("T.hms.pEL_CLEAN_tdcTimeRaw", &T_hms_pEL_CLEAN_tdcTimeRaw, &b_T_hms_pEL_CLEAN_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.pEL_HI_tdcMultiplicity", &T_hms_pEL_HI_tdcMultiplicity, &b_T_hms_pEL_HI_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.pEL_HI_tdcTime", &T_hms_pEL_HI_tdcTime, &b_T_hms_pEL_HI_tdcTime);
   fChain->SetBranchAddress("T.hms.pEL_HI_tdcTimeRaw", &T_hms_pEL_HI_tdcTimeRaw, &b_T_hms_pEL_HI_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.pEL_LO_LO_tdcMultiplicity", &T_hms_pEL_LO_LO_tdcMultiplicity, &b_T_hms_pEL_LO_LO_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.pEL_LO_LO_tdcTime", &T_hms_pEL_LO_LO_tdcTime, &b_T_hms_pEL_LO_LO_tdcTime);
   fChain->SetBranchAddress("T.hms.pEL_LO_LO_tdcTimeRaw", &T_hms_pEL_LO_LO_tdcTimeRaw, &b_T_hms_pEL_LO_LO_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.pEL_LO_tdcMultiplicity", &T_hms_pEL_LO_tdcMultiplicity, &b_T_hms_pEL_LO_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.pEL_LO_tdcTime", &T_hms_pEL_LO_tdcTime, &b_T_hms_pEL_LO_tdcTime);
   fChain->SetBranchAddress("T.hms.pEL_LO_tdcTimeRaw", &T_hms_pEL_LO_tdcTimeRaw, &b_T_hms_pEL_LO_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.pEL_REAL_tdcMultiplicity", &T_hms_pEL_REAL_tdcMultiplicity, &b_T_hms_pEL_REAL_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.pEL_REAL_tdcTime", &T_hms_pEL_REAL_tdcTime, &b_T_hms_pEL_REAL_tdcTime);
   fChain->SetBranchAddress("T.hms.pEL_REAL_tdcTimeRaw", &T_hms_pEL_REAL_tdcTimeRaw, &b_T_hms_pEL_REAL_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcMultiplicity", &T_hms_pHEL_MPS_adcMultiplicity, &b_T_hms_pHEL_MPS_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcPed", &T_hms_pHEL_MPS_adcPed, &b_T_hms_pHEL_MPS_adcPed);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcPedRaw", &T_hms_pHEL_MPS_adcPedRaw, &b_T_hms_pHEL_MPS_adcPedRaw);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcPulseAmp", &T_hms_pHEL_MPS_adcPulseAmp, &b_T_hms_pHEL_MPS_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcPulseAmpRaw", &T_hms_pHEL_MPS_adcPulseAmpRaw, &b_T_hms_pHEL_MPS_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcPulseInt", &T_hms_pHEL_MPS_adcPulseInt, &b_T_hms_pHEL_MPS_adcPulseInt);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcPulseIntRaw", &T_hms_pHEL_MPS_adcPulseIntRaw, &b_T_hms_pHEL_MPS_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcPulseTime", &T_hms_pHEL_MPS_adcPulseTime, &b_T_hms_pHEL_MPS_adcPulseTime);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcPulseTimeRaw", &T_hms_pHEL_MPS_adcPulseTimeRaw, &b_T_hms_pHEL_MPS_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcSampMultiplicity", &T_hms_pHEL_MPS_adcSampMultiplicity, &b_T_hms_pHEL_MPS_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcSampPed", &T_hms_pHEL_MPS_adcSampPed, &b_T_hms_pHEL_MPS_adcSampPed);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcSampPedRaw", &T_hms_pHEL_MPS_adcSampPedRaw, &b_T_hms_pHEL_MPS_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcSampPulseAmp", &T_hms_pHEL_MPS_adcSampPulseAmp, &b_T_hms_pHEL_MPS_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcSampPulseAmpRaw", &T_hms_pHEL_MPS_adcSampPulseAmpRaw, &b_T_hms_pHEL_MPS_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcSampPulseInt", &T_hms_pHEL_MPS_adcSampPulseInt, &b_T_hms_pHEL_MPS_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcSampPulseIntRaw", &T_hms_pHEL_MPS_adcSampPulseIntRaw, &b_T_hms_pHEL_MPS_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcSampPulseTime", &T_hms_pHEL_MPS_adcSampPulseTime, &b_T_hms_pHEL_MPS_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.pHEL_MPS_adcSampPulseTimeRaw", &T_hms_pHEL_MPS_adcSampPulseTimeRaw, &b_T_hms_pHEL_MPS_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcMultiplicity", &T_hms_pHEL_NEG_adcMultiplicity, &b_T_hms_pHEL_NEG_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcPed", &T_hms_pHEL_NEG_adcPed, &b_T_hms_pHEL_NEG_adcPed);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcPedRaw", &T_hms_pHEL_NEG_adcPedRaw, &b_T_hms_pHEL_NEG_adcPedRaw);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcPulseAmp", &T_hms_pHEL_NEG_adcPulseAmp, &b_T_hms_pHEL_NEG_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcPulseAmpRaw", &T_hms_pHEL_NEG_adcPulseAmpRaw, &b_T_hms_pHEL_NEG_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcPulseInt", &T_hms_pHEL_NEG_adcPulseInt, &b_T_hms_pHEL_NEG_adcPulseInt);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcPulseIntRaw", &T_hms_pHEL_NEG_adcPulseIntRaw, &b_T_hms_pHEL_NEG_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcPulseTime", &T_hms_pHEL_NEG_adcPulseTime, &b_T_hms_pHEL_NEG_adcPulseTime);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcPulseTimeRaw", &T_hms_pHEL_NEG_adcPulseTimeRaw, &b_T_hms_pHEL_NEG_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcSampMultiplicity", &T_hms_pHEL_NEG_adcSampMultiplicity, &b_T_hms_pHEL_NEG_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcSampPed", &T_hms_pHEL_NEG_adcSampPed, &b_T_hms_pHEL_NEG_adcSampPed);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcSampPedRaw", &T_hms_pHEL_NEG_adcSampPedRaw, &b_T_hms_pHEL_NEG_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcSampPulseAmp", &T_hms_pHEL_NEG_adcSampPulseAmp, &b_T_hms_pHEL_NEG_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcSampPulseAmpRaw", &T_hms_pHEL_NEG_adcSampPulseAmpRaw, &b_T_hms_pHEL_NEG_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcSampPulseInt", &T_hms_pHEL_NEG_adcSampPulseInt, &b_T_hms_pHEL_NEG_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcSampPulseIntRaw", &T_hms_pHEL_NEG_adcSampPulseIntRaw, &b_T_hms_pHEL_NEG_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcSampPulseTime", &T_hms_pHEL_NEG_adcSampPulseTime, &b_T_hms_pHEL_NEG_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.pHEL_NEG_adcSampPulseTimeRaw", &T_hms_pHEL_NEG_adcSampPulseTimeRaw, &b_T_hms_pHEL_NEG_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcMultiplicity", &T_hms_pHEL_POS_adcMultiplicity, &b_T_hms_pHEL_POS_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcPed", &T_hms_pHEL_POS_adcPed, &b_T_hms_pHEL_POS_adcPed);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcPedRaw", &T_hms_pHEL_POS_adcPedRaw, &b_T_hms_pHEL_POS_adcPedRaw);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcPulseAmp", &T_hms_pHEL_POS_adcPulseAmp, &b_T_hms_pHEL_POS_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcPulseAmpRaw", &T_hms_pHEL_POS_adcPulseAmpRaw, &b_T_hms_pHEL_POS_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcPulseInt", &T_hms_pHEL_POS_adcPulseInt, &b_T_hms_pHEL_POS_adcPulseInt);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcPulseIntRaw", &T_hms_pHEL_POS_adcPulseIntRaw, &b_T_hms_pHEL_POS_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcPulseTime", &T_hms_pHEL_POS_adcPulseTime, &b_T_hms_pHEL_POS_adcPulseTime);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcPulseTimeRaw", &T_hms_pHEL_POS_adcPulseTimeRaw, &b_T_hms_pHEL_POS_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcSampMultiplicity", &T_hms_pHEL_POS_adcSampMultiplicity, &b_T_hms_pHEL_POS_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcSampPed", &T_hms_pHEL_POS_adcSampPed, &b_T_hms_pHEL_POS_adcSampPed);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcSampPedRaw", &T_hms_pHEL_POS_adcSampPedRaw, &b_T_hms_pHEL_POS_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcSampPulseAmp", &T_hms_pHEL_POS_adcSampPulseAmp, &b_T_hms_pHEL_POS_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcSampPulseAmpRaw", &T_hms_pHEL_POS_adcSampPulseAmpRaw, &b_T_hms_pHEL_POS_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcSampPulseInt", &T_hms_pHEL_POS_adcSampPulseInt, &b_T_hms_pHEL_POS_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcSampPulseIntRaw", &T_hms_pHEL_POS_adcSampPulseIntRaw, &b_T_hms_pHEL_POS_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcSampPulseTime", &T_hms_pHEL_POS_adcSampPulseTime, &b_T_hms_pHEL_POS_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.pHEL_POS_adcSampPulseTimeRaw", &T_hms_pHEL_POS_adcSampPulseTimeRaw, &b_T_hms_pHEL_POS_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcMultiplicity", &T_hms_pHEL_QRT_adcMultiplicity, &b_T_hms_pHEL_QRT_adcMultiplicity);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcPed", &T_hms_pHEL_QRT_adcPed, &b_T_hms_pHEL_QRT_adcPed);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcPedRaw", &T_hms_pHEL_QRT_adcPedRaw, &b_T_hms_pHEL_QRT_adcPedRaw);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcPulseAmp", &T_hms_pHEL_QRT_adcPulseAmp, &b_T_hms_pHEL_QRT_adcPulseAmp);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcPulseAmpRaw", &T_hms_pHEL_QRT_adcPulseAmpRaw, &b_T_hms_pHEL_QRT_adcPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcPulseInt", &T_hms_pHEL_QRT_adcPulseInt, &b_T_hms_pHEL_QRT_adcPulseInt);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcPulseIntRaw", &T_hms_pHEL_QRT_adcPulseIntRaw, &b_T_hms_pHEL_QRT_adcPulseIntRaw);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcPulseTime", &T_hms_pHEL_QRT_adcPulseTime, &b_T_hms_pHEL_QRT_adcPulseTime);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcPulseTimeRaw", &T_hms_pHEL_QRT_adcPulseTimeRaw, &b_T_hms_pHEL_QRT_adcPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcSampMultiplicity", &T_hms_pHEL_QRT_adcSampMultiplicity, &b_T_hms_pHEL_QRT_adcSampMultiplicity);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcSampPed", &T_hms_pHEL_QRT_adcSampPed, &b_T_hms_pHEL_QRT_adcSampPed);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcSampPedRaw", &T_hms_pHEL_QRT_adcSampPedRaw, &b_T_hms_pHEL_QRT_adcSampPedRaw);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcSampPulseAmp", &T_hms_pHEL_QRT_adcSampPulseAmp, &b_T_hms_pHEL_QRT_adcSampPulseAmp);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcSampPulseAmpRaw", &T_hms_pHEL_QRT_adcSampPulseAmpRaw, &b_T_hms_pHEL_QRT_adcSampPulseAmpRaw);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcSampPulseInt", &T_hms_pHEL_QRT_adcSampPulseInt, &b_T_hms_pHEL_QRT_adcSampPulseInt);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcSampPulseIntRaw", &T_hms_pHEL_QRT_adcSampPulseIntRaw, &b_T_hms_pHEL_QRT_adcSampPulseIntRaw);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcSampPulseTime", &T_hms_pHEL_QRT_adcSampPulseTime, &b_T_hms_pHEL_QRT_adcSampPulseTime);
   fChain->SetBranchAddress("T.hms.pHEL_QRT_adcSampPulseTimeRaw", &T_hms_pHEL_QRT_adcSampPulseTimeRaw, &b_T_hms_pHEL_QRT_adcSampPulseTimeRaw);
   fChain->SetBranchAddress("T.hms.pPRE100_tdcMultiplicity", &T_hms_pPRE100_tdcMultiplicity, &b_T_hms_pPRE100_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.pPRE100_tdcTime", &T_hms_pPRE100_tdcTime, &b_T_hms_pPRE100_tdcTime);
   fChain->SetBranchAddress("T.hms.pPRE100_tdcTimeRaw", &T_hms_pPRE100_tdcTimeRaw, &b_T_hms_pPRE100_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.pPRE150_tdcMultiplicity", &T_hms_pPRE150_tdcMultiplicity, &b_T_hms_pPRE150_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.pPRE150_tdcTime", &T_hms_pPRE150_tdcTime, &b_T_hms_pPRE150_tdcTime);
   fChain->SetBranchAddress("T.hms.pPRE150_tdcTimeRaw", &T_hms_pPRE150_tdcTimeRaw, &b_T_hms_pPRE150_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.pPRE200_tdcMultiplicity", &T_hms_pPRE200_tdcMultiplicity, &b_T_hms_pPRE200_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.pPRE200_tdcTime", &T_hms_pPRE200_tdcTime, &b_T_hms_pPRE200_tdcTime);
   fChain->SetBranchAddress("T.hms.pPRE200_tdcTimeRaw", &T_hms_pPRE200_tdcTimeRaw, &b_T_hms_pPRE200_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.pPRE40_tdcMultiplicity", &T_hms_pPRE40_tdcMultiplicity, &b_T_hms_pPRE40_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.pPRE40_tdcTime", &T_hms_pPRE40_tdcTime, &b_T_hms_pPRE40_tdcTime);
   fChain->SetBranchAddress("T.hms.pPRE40_tdcTimeRaw", &T_hms_pPRE40_tdcTimeRaw, &b_T_hms_pPRE40_tdcTimeRaw);
   fChain->SetBranchAddress("T.hms.pSTOF_tdcMultiplicity", &T_hms_pSTOF_tdcMultiplicity, &b_T_hms_pSTOF_tdcMultiplicity);
   fChain->SetBranchAddress("T.hms.pSTOF_tdcTime", &T_hms_pSTOF_tdcTime, &b_T_hms_pSTOF_tdcTime);
   fChain->SetBranchAddress("T.hms.pSTOF_tdcTimeRaw", &T_hms_pSTOF_tdcTimeRaw, &b_T_hms_pSTOF_tdcTimeRaw);
   fChain->SetBranchAddress("g.datatype", &g_datatype, &b_g_datatype);
   fChain->SetBranchAddress("g.evlen", &g_evlen, &b_g_evlen);
   fChain->SetBranchAddress("g.evnum", &g_evnum, &b_g_evnum);
   fChain->SetBranchAddress("g.evtime", &g_evtime, &b_g_evtime);
   fChain->SetBranchAddress("g.evtyp", &g_evtyp, &b_g_evtyp);
   fChain->SetBranchAddress("g.runnum", &g_runnum, &b_g_runnum);
   fChain->SetBranchAddress("g.runtime", &g_runtime, &b_g_runtime);
   fChain->SetBranchAddress("g.runtype", &g_runtype, &b_g_runtype);
   fChain->SetBranchAddress("g.trigbits", &g_trigbits, &b_g_trigbits);
   fChain->SetBranchAddress("IBC3H00CRCUR4", &IBC3H00CRCUR4, &b_IBC3H00CRCUR4);
   fChain->SetBranchAddress("hac_bcm_average", &hac_bcm_average, &b_hac_bcm_average);
   fChain->SetBranchAddress("ibcm1", &ibcm1, &b_ibcm1);
   fChain->SetBranchAddress("ibcm2", &ibcm2, &b_ibcm2);
   fChain->SetBranchAddress("iunser", &iunser, &b_iunser);
   fChain->SetBranchAddress("itov3out", &itov3out, &b_itov3out);
   fChain->SetBranchAddress("itov4out", &itov4out, &b_itov4out);
   fChain->SetBranchAddress("ecHMS_Angle", &ecHMS_Angle, &b_ecHMS_Angle);
   fChain->SetBranchAddress("ecP_HMS", &ecP_HMS, &b_ecP_HMS);
   fChain->SetBranchAddress("ecQ1_Set_Current", &ecQ1_Set_Current, &b_ecQ1_Set_Current);
   fChain->SetBranchAddress("ecQ2_I_True", &ecQ2_I_True, &b_ecQ2_I_True);
   fChain->SetBranchAddress("ecQ2_Set_Current", &ecQ2_Set_Current, &b_ecQ2_Set_Current);
//    fChain->SetBranchAddress("ecQ2_I_True", &ecQ2_I_True, &b_ecQ2_I_True);
   fChain->SetBranchAddress("ecQ3_Set_Current", &ecQ3_Set_Current, &b_ecQ3_Set_Current);
   fChain->SetBranchAddress("ecQ3_I_True", &ecQ3_I_True, &b_ecQ3_I_True);
   fChain->SetBranchAddress("ecDI_B_Set_NMR", &ecDI_B_Set_NMR, &b_ecDI_B_Set_NMR);
   fChain->SetBranchAddress("ecDI_B_True_NMR", &ecDI_B_True_NMR, &b_ecDI_B_True_NMR);
   fChain->SetBranchAddress("IPM3H07A.XRAW", &IPM3H07A_XRAW, &b_IPM3H07A_XRAW);
   fChain->SetBranchAddress("IPM3H07A.YRAW", &IPM3H07A_YRAW, &b_IPM3H07A_YRAW);
   fChain->SetBranchAddress("IPM3H07B.XRAW", &IPM3H07B_XRAW, &b_IPM3H07B_XRAW);
   fChain->SetBranchAddress("IPM3H07B.YRAW", &IPM3H07B_YRAW, &b_IPM3H07B_YRAW);
   fChain->SetBranchAddress("IPM3H07C.XRAW", &IPM3H07C_XRAW, &b_IPM3H07C_XRAW);
   fChain->SetBranchAddress("IPM3H07C.YRAW", &IPM3H07C_YRAW, &b_IPM3H07C_YRAW);
   fChain->SetBranchAddress("fEvtHdr.fEvtTime", &fEvtHdr_fEvtTime, &b_Event_Branch_fEvtHdr_fEvtTime);
   fChain->SetBranchAddress("fEvtHdr.fEvtNum", &fEvtHdr_fEvtNum, &b_Event_Branch_fEvtHdr_fEvtNum);
   fChain->SetBranchAddress("fEvtHdr.fEvtType", &fEvtHdr_fEvtType, &b_Event_Branch_fEvtHdr_fEvtType);
   fChain->SetBranchAddress("fEvtHdr.fEvtLen", &fEvtHdr_fEvtLen, &b_Event_Branch_fEvtHdr_fEvtLen);
   fChain->SetBranchAddress("fEvtHdr.fHelicity", &fEvtHdr_fHelicity, &b_Event_Branch_fEvtHdr_fHelicity);
   fChain->SetBranchAddress("fEvtHdr.fTrigBits", &fEvtHdr_fTrigBits, &b_Event_Branch_fEvtHdr_fTrigBits);
   fChain->SetBranchAddress("fEvtHdr.fRun", &fEvtHdr_fRun, &b_Event_Branch_fEvtHdr_fRun);
   Notify();
}

Bool_t phvth::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void phvth::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t phvth::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef phvth_cxx
