#ifndef _PREFILTERS_H_
#define _PREFILTERS_H_

#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <TString.h>

Float_t ptBins[] = {4, 20, 999};
Float_t drBins[] = {0, 0.1, 0.2, 0.5};
Float_t zBins[] = {0, 0.2, 0.4, 0.6, 0.8, 1.0};
const int nCoBins = 2;
std::map<TString, int> collsyst_list = {{"pp", 0}, {"PbPb", 1}};
TString tMC[] = {"data", "MC"};
//
const int nPtBins = sizeof(ptBins)/sizeof(ptBins[0])-1;
const int nDrBins = sizeof(drBins)/sizeof(drBins[0])-1;
const int nZBins = sizeof(zBins)/sizeof(zBins[0])-1;

std::vector<TString> cutval_list_skim[nCoBins] = {{"pBeamScrapingFilter", "pPAprimaryVertexFilter"}, 
                                                  {"pclusterCompatibilityFilter", "pprimaryVertexFilter", "phfCoincFilter3"}};

// Hlt selections
std::vector<TString> cutval_list_hlt[nCoBins][nPtBins] = 
  {
    {{"HLT_DmesonPPTrackingGlobal_Dpt15_v1"}, 
     {"HLT_DmesonPPTrackingGlobal_Dpt15_v1"}},
    {{"HLT_HIDmesonHITrackingGlobal_Dpt20_v1"}, 
     {"HLT_HIDmesonHITrackingGlobal_Dpt20_v1"}}
  };

Float_t cutval_Dy = 2.0;
/**
{
// --- dR bin ---
  {{xx,  xx,  xx},   //  pp    4-20    GeV
  {xx,   xx,  xx}},  //  pp    20-999  GeV
  {{xx,  xx,  xx},   //  PbPb  4-20    GeV
  {xx,   xx,  xx}}   //  PbPb  20-999  GeV
};
**/
Float_t cutval_list_Dsvpv[nCoBins][nPtBins][nDrBins] = 
  {
    {{4.06,  4.06,  4.06},  
     {4.06,  4.06,  4.06}},  
    {{6.0,   6.0,   6.0},   
     {6.0,   6.0,   6.0}}
  };
Float_t cutval_list_Dalpha[nCoBins][nPtBins][nDrBins] = 
  {
    {{0.12,  0.12,  0.12},  
     {0.12,  0.12,  0.12}},  
    {{0.12,  0.12,  0.12},  
     {0.12,  0.12,  0.12}}
  };
Float_t cutval_list_Dchi2cl[nCoBins][nPtBins][nDrBins] = 
  {
    {{0.1,   0.1,   0.1},   
     {0.1,   0.1,   0.1}},   
    {{0.1,   0.1,   0.1},   
     {0.1,   0.1,   0.1}}
  };
Float_t cutval_list_trkPt[nCoBins][nPtBins][nDrBins] = 
  {
    {{2.0,   2.0,   2.0}, 
     {2.0,   2.0,   2.0}},
    {{2.0,   2.0,   2.0},  
     {2.0,   2.0,   2.0}} 
  };
Float_t cutval_list_trkEta[nCoBins][nPtBins][nDrBins] = 
  {
    {{2.0,   2.0,   2.0},   
     {2.0,   2.0,   2.0}},   
    {{2.0,   2.0,   2.0},   
     {2.0,   2.0,   2.0}}
  };
Float_t cutval_list_trkPtErr[nCoBins][nPtBins][nDrBins] = 
  {
    {{0.3,   0.3,   0.3},   
     {0.3,   0.3,   0.3}},   
    {{0.3,   0.3,   0.3},   
     {0.3,   0.3,   0.3}}
  };

//

Float_t cutval_trkPt;
Float_t cutval_trkEta;
Float_t cutval_trkPtErr;
Float_t cutval_Dsvpv;
Float_t cutval_Dalpha;
Float_t cutval_Dchi2cl;
std::vector<TString> cutval_skim;
std::vector<TString> cutval_hlt;

int initcutval(TString collisionsyst)
{
  if(collsyst_list.find(collisionsyst)==collsyst_list.end())
    {
      std::cout<<"\033[1;31merror:\033[0m invalid \"collisionsyst\" - initcutval()"<<std::endl;
      return 1;
    }
  int icollsyst = collsyst_list[collisionsyst];
  cutval_skim = cutval_list_skim[icollsyst];
}

int initcutval_bindep(TString collisionsyst, int ipt, int idr)
{
  if(collsyst_list.find(collisionsyst)==collsyst_list.end())
    {
      std::cout<<"\033[1;31merror:\033[0m invalid \"collisionsyst\" - initcutval()"<<std::endl;
      return 1;
    }
  if(ipt<0 || idr<0 || ipt>=nPtBins || idr>=nDrBins) return 2;

  int icollsyst = collsyst_list[collisionsyst];
  cutval_trkPt = cutval_list_trkPt[icollsyst][ipt][idr];
  cutval_trkEta = cutval_list_trkEta[icollsyst][ipt][idr];
  cutval_trkPtErr = cutval_list_trkPtErr[icollsyst][ipt][idr];
  cutval_Dsvpv = cutval_list_Dsvpv[icollsyst][ipt][idr];
  cutval_Dalpha = cutval_list_Dalpha[icollsyst][ipt][idr];
  cutval_Dchi2cl = cutval_list_Dchi2cl[icollsyst][ipt][idr];
  cutval_hlt = cutval_list_hlt[icollsyst][ipt];
  return 0;
}

#endif