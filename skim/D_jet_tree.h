#ifndef _D_JET_TREE_H
#define _D_JET_TREE_H

#include "TTree.h"

#include "D_tree.h"
#include "G_tree.h"

#include <vector>

const int nEventsToMix = 24;

class DJetTree {
  public:
    DJetTree() {
        isPP = 0;
        run = 0;
        evt = 0;
        lumi = 0;
        hiBin = -1;
        vz = -99;
        weight = -1;
	pthat = -1;

        njet_akpu3pf = 0;
        njet_akpu4pf = 0;

        RunNo = -99;
        EvtNo = -99;
        LumiNo = -99;
        Dsize = -99;
        PVx = -99;
        PVy = -99;
        PVz = -99;
        PVnchi2 = -99;
        BSx = -99;
        BSy = -99;
        BSz = -99;
        PVxE = -99;
        PVyE = -99;
        PVzE = -99;
        BSxErr = -99;
        BSyErr = -99;
        BSzErr = -99;
        BSdxdz = -99;
        BSdydz = -99;
        BSdxdzErr = -99;
        BSdydzErr = -99;
        BSWidthX = -99;
        BSWidthXErr = -99;
        BSWidthY = -99;
        BSWidthYErr = -99;
    }
    ~DJetTree() {};

    DJetTree(TTree* t) : DJetTree() {
        this->create_tree(t);
    }

    void create_tree(TTree* t);

    void set_hlt_tree(TTree* ht, Bool_t isPP);

    void clear_vectors();
    void copy_variables(DTree dt);
    void copy_variables_gen(GTree gt);
    void copy_index(DTree dt, int i);
    void copy_index_gen(GTree gt, int i);

    int isPP;
    uint32_t run;
    unsigned long long evt;
    uint32_t lumi;
    int hiBin;
    float vz;
    float weight;
    float pthat;

    float hiEvtPlanes[29];

    int njet_akpu3pf;
    std::vector<float> jetptCorr_akpu3pf;
    std::vector<float> jetpt_akpu3pf;
    std::vector<float> jeteta_akpu3pf;
    std::vector<float> jetphi_akpu3pf;
    std::vector<float> gjetpt_akpu3pf;
    std::vector<float> gjeteta_akpu3pf;
    std::vector<float> gjetphi_akpu3pf;
    std::vector<int> gjetflavor_akpu3pf;
    std::vector<float> chargedSum_akpu3pf;
    std::vector<int> subid_akpu3pf;

    int ngen_akpu3pf;
    std::vector<float> genpt_akpu3pf;
    std::vector<float> geneta_akpu3pf;
    std::vector<float> genphi_akpu3pf;
    std::vector<int> gensubid_akpu3pf;

    int njet_akpu4pf;
    std::vector<float> jetptCorr_akpu4pf;
    std::vector<float> jetpt_akpu4pf;
    std::vector<float> jeteta_akpu4pf;
    std::vector<float> jetphi_akpu4pf;
    std::vector<float> gjetpt_akpu4pf;
    std::vector<float> gjeteta_akpu4pf;
    std::vector<float> gjetphi_akpu4pf;
    std::vector<int> gjetflavor_akpu4pf;
    std::vector<float> chargedSum_akpu4pf;
    std::vector<int> subid_akpu4pf;

    int ngen_akpu4pf;
    std::vector<float> genpt_akpu4pf;
    std::vector<float> geneta_akpu4pf;
    std::vector<float> genphi_akpu4pf;
    std::vector<int> gensubid_akpu4pf;

    int           RunNo;
    int           EvtNo;
    int           LumiNo;
    int           Dsize;
    float         PVx;
    float         PVy;
    float         PVz;
    float         PVnchi2;
    float         BSx;
    float         BSy;
    float         BSz;
    float         PVxE;
    float         PVyE;
    float         PVzE;
    float         BSxErr;
    float         BSyErr;
    float         BSzErr;
    float         BSdxdz;
    float         BSdydz;
    float         BSdxdzErr;
    float         BSdydzErr;
    float         BSWidthX;
    float         BSWidthXErr;
    float         BSWidthY;
    float         BSWidthYErr;

    std::vector<int>       Dindex;
    std::vector<int>       Dtype;
    std::vector<float>     Dmass;
    std::vector<float>     Dpt;
    std::vector<float>     Deta;
    std::vector<float>     Dphi;
    std::vector<float>     Dy;
    std::vector<float>     DvtxX;
    std::vector<float>     DvtxY;
    std::vector<float>     Dd0;
    std::vector<float>     Dd0Err;
    std::vector<float>     Ddxyz;
    std::vector<float>     DdxyzErr;
    std::vector<float>     Dchi2ndf;
    std::vector<float>     Dchi2cl;
    std::vector<float>     Ddtheta;
    std::vector<float>     Dlxy;
    std::vector<float>     Dalpha;
    std::vector<float>     DsvpvDistance;
    std::vector<float>     DsvpvDisErr;
    std::vector<float>     DsvpvDistance_2D;
    std::vector<float>     DsvpvDisErr_2D;
    std::vector<float>     DtktkRes_chi2ndf;
    std::vector<float>     DtktkRes_chi2cl;
    std::vector<float>     DtktkRes_alpha;
    std::vector<float>     DtktkRes_svpvDistance;
    std::vector<float>     DtktkRes_svpvDisErr;
    std::vector<float>     DlxyBS;
    std::vector<float>     DlxyBSErr;
    std::vector<float>     DMaxDoca;
    std::vector<float>     Dtrk1Pt;
    std::vector<float>     Dtrk2Pt;
    std::vector<float>     Dtrk1Eta;
    std::vector<float>     Dtrk2Eta;
    std::vector<float>     Dtrk1Phi;
    std::vector<float>     Dtrk2Phi;
    std::vector<float>     Dtrk1PtErr;
    std::vector<float>     Dtrk2PtErr;
    std::vector<float>     Dtrk1Dxy;
    std::vector<float>     Dtrk2Dxy;
    std::vector<float>     Dtrk1PixelHit;
    std::vector<float>     Dtrk2PixelHit;
    std::vector<float>     Dtrk1StripHit;
    std::vector<float>     Dtrk2StripHit;
    std::vector<float>     Dtrk1nStripLayer;
    std::vector<float>     Dtrk2nStripLayer;
    std::vector<float>     Dtrk1nPixelLayer;
    std::vector<float>     Dtrk2nPixelLayer;
    std::vector<float>     Dtrk1Chi2ndf;
    std::vector<float>     Dtrk2Chi2ndf;
    std::vector<float>     Dtrk1MassHypo;
    std::vector<float>     Dtrk2MassHypo;
    std::vector<int>       Dtrk1Algo;
    std::vector<int>       Dtrk2Algo;
    std::vector<int>       Dtrk1originalAlgo;
    std::vector<int>       Dtrk2originalAlgo;
    std::vector<bool>      Dtrk1highPurity;
    std::vector<bool>      Dtrk2highPurity;
    std::vector<float>     Dtrk3Pt;
    std::vector<float>     Dtrk4Pt;
    std::vector<float>     Dtrk3Eta;
    std::vector<float>     Dtrk4Eta;
    std::vector<float>     Dtrk3Phi;
    std::vector<float>     Dtrk4Phi;
    std::vector<float>     Dtrk3PtErr;
    std::vector<float>     Dtrk4PtErr;
    std::vector<float>     Dtrk3Dxy;
    std::vector<float>     Dtrk4Dxy;
    std::vector<float>     Dtrk3PixelHit;
    std::vector<float>     Dtrk4PixelHit;
    std::vector<float>     Dtrk3StripHit;
    std::vector<float>     Dtrk4StripHit;
    std::vector<float>     Dtrk3nStripLayer;
    std::vector<float>     Dtrk4nStripLayer;
    std::vector<float>     Dtrk3nPixelLayer;
    std::vector<float>     Dtrk4nPixelLayer;
    std::vector<float>     Dtrk3Chi2ndf;
    std::vector<float>     Dtrk4Chi2ndf;
    std::vector<float>     Dtrk3MassHypo;
    std::vector<float>     Dtrk4MassHypo;
    std::vector<int>       Dtrk3Algo;
    std::vector<int>       Dtrk4Algo;
    std::vector<int>       Dtrk3originalAlgo;
    std::vector<int>       Dtrk4originalAlgo;
    std::vector<bool>      Dtrk3highPurity;
    std::vector<bool>      Dtrk4highPurity;
    std::vector<int>       Dtrk1Idx;
    std::vector<int>       Dtrk2Idx;
    std::vector<float>     Dtrk1EtaErr;
    std::vector<float>     Dtrk2EtaErr;
    std::vector<float>     Dtrk1PhiErr;
    std::vector<float>     Dtrk2PhiErr;
    std::vector<float>     Dtrk1Y;
    std::vector<float>     Dtrk2Y;
    std::vector<float>     Dtrk1D0Err;
    std::vector<float>     Dtrk2D0Err;
    std::vector<float>     Dtrk1MVAVal;
    std::vector<float>     Dtrk2MVAVal;
    std::vector<int>       Dtrk1Quality;
    std::vector<int>       Dtrk2Quality;
    std::vector<int>       Dtrk3Idx;
    std::vector<int>       Dtrk4Idx;
    std::vector<float>     Dtrk3EtaErr;
    std::vector<float>     Dtrk4EtaErr;
    std::vector<float>     Dtrk3PhiErr;
    std::vector<float>     Dtrk4PhiErr;
    std::vector<float>     Dtrk3Y;
    std::vector<float>     Dtrk4Y;
    std::vector<float>     Dtrk3D0Err;
    std::vector<float>     Dtrk4D0Err;
    std::vector<float>     Dtrk3MVAVal;
    std::vector<float>     Dtrk4MVAVal;
    std::vector<int>       Dtrk3Quality;
    std::vector<int>       Dtrk4Quality;
    std::vector<float>     DtktkResmass;
    std::vector<float>     DtktkRespt;
    std::vector<float>     DtktkReseta;
    std::vector<float>     DtktkResphi;
    std::vector<float>     DRestrk1Pt;
    std::vector<float>     DRestrk1Eta;
    std::vector<float>     DRestrk1Phi;
    std::vector<float>     DRestrk1Y;
    std::vector<float>     DRestrk1Dxy;
    std::vector<float>     DRestrk1D0Err;
    std::vector<int>       DRestrk1originalAlgo;
    std::vector<float>     DRestrk2Pt;
    std::vector<float>     DRestrk2Eta;
    std::vector<float>     DRestrk2Phi;
    std::vector<float>     DRestrk2Y;
    std::vector<float>     DRestrk2Dxy;
    std::vector<float>     DRestrk2D0Err;
    std::vector<int>       DRestrk2originalAlgo;
    std::vector<float>     DRestrk3Pt;
    std::vector<float>     DRestrk3Eta;
    std::vector<float>     DRestrk3Phi;
    std::vector<float>     DRestrk3Y;
    std::vector<float>     DRestrk3Dxy;
    std::vector<float>     DRestrk3D0Err;
    std::vector<int>       DRestrk3originalAlgo;
    std::vector<float>     DRestrk4Pt;
    std::vector<float>     DRestrk4Eta;
    std::vector<float>     DRestrk4Phi;
    std::vector<float>     DRestrk4Y;
    std::vector<float>     DRestrk4Dxy;
    std::vector<float>     DRestrk4D0Err;
    std::vector<int>       DRestrk4originalAlgo;
    std::vector<float>     Dgen;
    std::vector<int>       DgenIndex;
    std::vector<int>       DgennDa;
    std::vector<float>     Dgenpt;
    std::vector<float>     Dgeneta;
    std::vector<float>     Dgenphi;
    std::vector<float>     Dgeny;
    std::vector<int>       DgencollisionId;
    std::vector<float>     DgenBAncestorpt;
    std::vector<int>       DgenBAncestorpdgId;

    int                    Gsize;
    std::vector<float>     Gy;
    std::vector<float>     Geta;
    std::vector<float>     Gphi;
    std::vector<float>     Gpt;
    std::vector<int>       GpdgId;
    std::vector<int>       GcollisionId;
    std::vector<int>       GisSignal;
    std::vector<float>     GBAncestorpt;
    std::vector<int>       GBAncestorpdgId;
    std::vector<float>     Gtk1pt;
    std::vector<float>     Gtk1eta;
    std::vector<float>     Gtk1y;
    std::vector<float>     Gtk1phi;
    std::vector<float>     Gtk2pt;
    std::vector<float>     Gtk2eta;
    std::vector<float>     Gtk2y;
    std::vector<float>     Gtk2phi;

};

void DJetTree::create_tree(TTree* t) {
    t->Branch("isPP", &isPP, "isPP/I");
    t->Branch("run", &run, "run/i");
    t->Branch("evt", &evt, "evt/l");
    t->Branch("lumi", &lumi, "lumi/i");
    t->Branch("hiBin", &hiBin, "hiBin/I");
    t->Branch("vz", &vz, "vz/F");
    t->Branch("weight", &weight, "weight/F");
    t->Branch("pthat", &pthat, "pthat/F");

    t->Branch("hiEvtPlanes", hiEvtPlanes, "hiEvtPlanes[29]/F");

    t->Branch("njet_akpu3pf", &njet_akpu3pf, "njet_akpu3pf/I");
    t->Branch("jetptCorr_akpu3pf", &jetptCorr_akpu3pf);
    t->Branch("jetpt_akpu3pf", &jetpt_akpu3pf);
    t->Branch("jeteta_akpu3pf", &jeteta_akpu3pf);
    t->Branch("jetphi_akpu3pf", &jetphi_akpu3pf);
    t->Branch("gjetpt_akpu3pf", &gjetpt_akpu3pf);
    t->Branch("gjeteta_akpu3pf", &gjeteta_akpu3pf);
    t->Branch("gjetphi_akpu3pf", &gjetphi_akpu3pf);
    t->Branch("gjetflavor_akpu3pf", &gjetflavor_akpu3pf);
    t->Branch("chargedSum_akpu3pf", &chargedSum_akpu3pf);
    t->Branch("subid_akpu3pf", &subid_akpu3pf);

    t->Branch("ngen_akpu3pf", &ngen_akpu3pf, "ngen_akpu3pf/I");
    t->Branch("genpt_akpu3pf", &genpt_akpu3pf);
    t->Branch("geneta_akpu3pf", &geneta_akpu3pf);
    t->Branch("genphi_akpu3pf", &genphi_akpu3pf);
    t->Branch("gensubid_akpu3pf", &gensubid_akpu3pf);

    t->Branch("njet_akpu4pf", &njet_akpu4pf, "njet_akpu4pf/I");
    t->Branch("jetptCorr_akpu4pf", &jetptCorr_akpu4pf);
    t->Branch("jetpt_akpu4pf", &jetpt_akpu4pf);
    t->Branch("jeteta_akpu4pf", &jeteta_akpu4pf);
    t->Branch("jetphi_akpu4pf", &jetphi_akpu4pf);
    t->Branch("gjetpt_akpu4pf", &gjetpt_akpu4pf);
    t->Branch("gjeteta_akpu4pf", &gjeteta_akpu4pf);
    t->Branch("gjetphi_akpu4pf", &gjetphi_akpu4pf);
    t->Branch("gjetflavor_akpu4pf", &gjetflavor_akpu4pf);
    t->Branch("chargedSum_akpu4pf", &chargedSum_akpu4pf);
    t->Branch("subid_akpu4pf", &subid_akpu4pf);

    t->Branch("ngen_akpu4pf", &ngen_akpu4pf, "ngen_akpu4pf/I");
    t->Branch("genpt_akpu4pf", &genpt_akpu4pf);
    t->Branch("geneta_akpu4pf", &geneta_akpu4pf);
    t->Branch("genphi_akpu4pf", &genphi_akpu4pf);
    t->Branch("gensubid_akpu4pf", &gensubid_akpu4pf);

    t->Branch("RunNo", &RunNo, "RunNo/I");
    t->Branch("EvtNo", &EvtNo, "EvtNo/I");
    t->Branch("LumiNo", &LumiNo, "LumiNo/I");
    t->Branch("Dsize", &Dsize, "Dsize/I");
    t->Branch("PVx", &PVx, "PVx/F");
    t->Branch("PVy", &PVy, "PVy/F");
    t->Branch("PVz", &PVz, "PVz/F");
    t->Branch("PVnchi2", &PVnchi2, "PVnchi2/F");
    t->Branch("BSx", &BSx, "BSx/F");
    t->Branch("BSy", &BSy, "BSy/F");
    t->Branch("BSz", &BSz, "BSz/F");
    t->Branch("PVxE", &PVxE, "PVxE/F");
    t->Branch("PVyE", &PVyE, "PVyE/F");
    t->Branch("PVzE", &PVzE, "PVzE/F");
    t->Branch("BSxErr", &BSxErr, "BSxErr/F");
    t->Branch("BSyErr", &BSyErr, "BSyErr/F");
    t->Branch("BSzErr", &BSzErr, "BSzErr/F");
    t->Branch("BSdxdz", &BSdxdz, "BSdxdz/F");
    t->Branch("BSdydz", &BSdydz, "BSdydz/F");
    t->Branch("BSdxdzErr", &BSdxdzErr, "BSdxdzErr/F");
    t->Branch("BSdydzErr", &BSdydzErr, "BSdydzErr/F");
    t->Branch("BSWidthX", &BSWidthX, "BSWidthX/F");
    t->Branch("BSWidthXErr", &BSWidthXErr, "BSWidthXErr/F");
    t->Branch("BSWidthY", &BSWidthY, "BSWidthY/F");
    t->Branch("BSWidthYErr", &BSWidthYErr, "BSWidthYErr/F");

    t->Branch("BSWidthY", &BSWidthY, "BSWidthY/F");
    t->Branch("BSWidthYErr", &BSWidthYErr, "BSWidthYErr/F");

    t->Branch("Dindex", &Dindex);
    t->Branch("Dtype", &Dtype);
    t->Branch("Dmass", &Dmass);
    t->Branch("Dpt", &Dpt);
    t->Branch("Deta", &Deta);
    t->Branch("Dphi", &Dphi);
    t->Branch("Dy", &Dy);
    t->Branch("DvtxX", &DvtxX);
    t->Branch("DvtxY", &DvtxY);
    t->Branch("Dd0", &Dd0);
    t->Branch("Dd0Err", &Dd0Err);
    t->Branch("Ddxyz", &Ddxyz);
    t->Branch("DdxyzErr", &DdxyzErr);
    t->Branch("Dchi2ndf", &Dchi2ndf);
    t->Branch("Dchi2cl", &Dchi2cl);
    t->Branch("Ddtheta", &Ddtheta);
    t->Branch("Dlxy", &Dlxy);
    t->Branch("Dalpha", &Dalpha);
    t->Branch("DsvpvDistance", &DsvpvDistance);
    t->Branch("DsvpvDisErr", &DsvpvDisErr);
    t->Branch("DsvpvDistance_2D", &DsvpvDistance_2D);
    t->Branch("DsvpvDisErr_2D", &DsvpvDisErr_2D);
    t->Branch("DtktkRes_chi2ndf", &DtktkRes_chi2ndf);
    t->Branch("DtktkRes_chi2cl", &DtktkRes_chi2cl);
    t->Branch("DtktkRes_alpha", &DtktkRes_alpha);
    t->Branch("DtktkRes_svpvDistance", &DtktkRes_svpvDistance);
    t->Branch("DtktkRes_svpvDisErr", &DtktkRes_svpvDisErr);
    t->Branch("DlxyBS", &DlxyBS);
    t->Branch("DlxyBSErr", &DlxyBSErr);
    t->Branch("DMaxDoca", &DMaxDoca);
    t->Branch("Dtrk1Pt", &Dtrk1Pt);
    t->Branch("Dtrk2Pt", &Dtrk2Pt);
    t->Branch("Dtrk1Eta", &Dtrk1Eta);
    t->Branch("Dtrk2Eta", &Dtrk2Eta);
    t->Branch("Dtrk1Phi", &Dtrk1Phi);
    t->Branch("Dtrk2Phi", &Dtrk2Phi);
    t->Branch("Dtrk1PtErr", &Dtrk1PtErr);
    t->Branch("Dtrk2PtErr", &Dtrk2PtErr);
    t->Branch("Dtrk1Dxy", &Dtrk1Dxy);
    t->Branch("Dtrk2Dxy", &Dtrk2Dxy);
    t->Branch("Dtrk1PixelHit", &Dtrk1PixelHit);
    t->Branch("Dtrk2PixelHit", &Dtrk2PixelHit);
    t->Branch("Dtrk1StripHit", &Dtrk1StripHit);
    t->Branch("Dtrk2StripHit", &Dtrk2StripHit);
    t->Branch("Dtrk1nStripLayer", &Dtrk1nStripLayer);
    t->Branch("Dtrk2nStripLayer", &Dtrk2nStripLayer);
    t->Branch("Dtrk1nPixelLayer", &Dtrk1nPixelLayer);
    t->Branch("Dtrk2nPixelLayer", &Dtrk2nPixelLayer);
    t->Branch("Dtrk1Chi2ndf", &Dtrk1Chi2ndf);
    t->Branch("Dtrk2Chi2ndf", &Dtrk2Chi2ndf);
    t->Branch("Dtrk1MassHypo", &Dtrk1MassHypo);
    t->Branch("Dtrk2MassHypo", &Dtrk2MassHypo);
    t->Branch("Dtrk1Algo", &Dtrk1Algo);
    t->Branch("Dtrk2Algo", &Dtrk2Algo);
    t->Branch("Dtrk1originalAlgo", &Dtrk1originalAlgo);
    t->Branch("Dtrk2originalAlgo", &Dtrk2originalAlgo);
    t->Branch("Dtrk1highPurity", &Dtrk1highPurity);
    t->Branch("Dtrk2highPurity", &Dtrk2highPurity);
    t->Branch("Dtrk3Pt", &Dtrk3Pt);
    t->Branch("Dtrk4Pt", &Dtrk4Pt);
    t->Branch("Dtrk3Eta", &Dtrk3Eta);
    t->Branch("Dtrk4Eta", &Dtrk4Eta);
    t->Branch("Dtrk3Phi", &Dtrk3Phi);
    t->Branch("Dtrk4Phi", &Dtrk4Phi);
    t->Branch("Dtrk3PtErr", &Dtrk3PtErr);
    t->Branch("Dtrk4PtErr", &Dtrk4PtErr);
    t->Branch("Dtrk3Dxy", &Dtrk3Dxy);
    t->Branch("Dtrk4Dxy", &Dtrk4Dxy);
    t->Branch("Dtrk3PixelHit", &Dtrk3PixelHit);
    t->Branch("Dtrk4PixelHit", &Dtrk4PixelHit);
    t->Branch("Dtrk3StripHit", &Dtrk3StripHit);
    t->Branch("Dtrk4StripHit", &Dtrk4StripHit);
    t->Branch("Dtrk3nStripLayer", &Dtrk3nStripLayer);
    t->Branch("Dtrk4nStripLayer", &Dtrk4nStripLayer);
    t->Branch("Dtrk3nPixelLayer", &Dtrk3nPixelLayer);
    t->Branch("Dtrk4nPixelLayer", &Dtrk4nPixelLayer);
    t->Branch("Dtrk3Chi2ndf", &Dtrk3Chi2ndf);
    t->Branch("Dtrk4Chi2ndf", &Dtrk4Chi2ndf);
    t->Branch("Dtrk3MassHypo", &Dtrk3MassHypo);
    t->Branch("Dtrk4MassHypo", &Dtrk4MassHypo);
    t->Branch("Dtrk3Algo", &Dtrk3Algo);
    t->Branch("Dtrk4Algo", &Dtrk4Algo);
    t->Branch("Dtrk3originalAlgo", &Dtrk3originalAlgo);
    t->Branch("Dtrk4originalAlgo", &Dtrk4originalAlgo);
    t->Branch("Dtrk3highPurity", &Dtrk3highPurity);
    t->Branch("Dtrk4highPurity", &Dtrk4highPurity);
    t->Branch("Dtrk1Idx", &Dtrk1Idx);
    t->Branch("Dtrk2Idx", &Dtrk2Idx);
    t->Branch("Dtrk1EtaErr", &Dtrk1EtaErr);
    t->Branch("Dtrk2EtaErr", &Dtrk2EtaErr);
    t->Branch("Dtrk1PhiErr", &Dtrk1PhiErr);
    t->Branch("Dtrk2PhiErr", &Dtrk2PhiErr);
    t->Branch("Dtrk1Y", &Dtrk1Y);
    t->Branch("Dtrk2Y", &Dtrk2Y);
    t->Branch("Dtrk1D0Err", &Dtrk1D0Err);
    t->Branch("Dtrk2D0Err", &Dtrk2D0Err);
    t->Branch("Dtrk1MVAVal", &Dtrk1MVAVal);
    t->Branch("Dtrk2MVAVal", &Dtrk2MVAVal);
    t->Branch("Dtrk1Quality", &Dtrk1Quality);
    t->Branch("Dtrk2Quality", &Dtrk2Quality);
    t->Branch("Dtrk3Idx", &Dtrk3Idx);
    t->Branch("Dtrk4Idx", &Dtrk4Idx);
    t->Branch("Dtrk3EtaErr", &Dtrk3EtaErr);
    t->Branch("Dtrk4EtaErr", &Dtrk4EtaErr);
    t->Branch("Dtrk3PhiErr", &Dtrk3PhiErr);
    t->Branch("Dtrk4PhiErr", &Dtrk4PhiErr);
    t->Branch("Dtrk3Y", &Dtrk3Y);
    t->Branch("Dtrk4Y", &Dtrk4Y);
    t->Branch("Dtrk3D0Err", &Dtrk3D0Err);
    t->Branch("Dtrk4D0Err", &Dtrk4D0Err);
    t->Branch("Dtrk3MVAVal", &Dtrk3MVAVal);
    t->Branch("Dtrk4MVAVal", &Dtrk4MVAVal);
    t->Branch("Dtrk3Quality", &Dtrk3Quality);
    t->Branch("Dtrk4Quality", &Dtrk4Quality);
    t->Branch("DtktkResmass", &DtktkResmass);
    t->Branch("DtktkRespt", &DtktkRespt);
    t->Branch("DtktkReseta", &DtktkReseta);
    t->Branch("DtktkResphi", &DtktkResphi);
    t->Branch("DRestrk1Pt", &DRestrk1Pt);
    t->Branch("DRestrk1Eta", &DRestrk1Eta);
    t->Branch("DRestrk1Phi", &DRestrk1Phi);
    t->Branch("DRestrk1Y", &DRestrk1Y);
    t->Branch("DRestrk1Dxy", &DRestrk1Dxy);
    t->Branch("DRestrk1D0Err", &DRestrk1D0Err);
    t->Branch("DRestrk1originalAlgo", &DRestrk1originalAlgo);
    t->Branch("DRestrk2Pt", &DRestrk2Pt);
    t->Branch("DRestrk2Eta", &DRestrk2Eta);
    t->Branch("DRestrk2Phi", &DRestrk2Phi);
    t->Branch("DRestrk2Y", &DRestrk2Y);
    t->Branch("DRestrk2Dxy", &DRestrk2Dxy);
    t->Branch("DRestrk2D0Err", &DRestrk2D0Err);
    t->Branch("DRestrk2originalAlgo", &DRestrk2originalAlgo);
    t->Branch("DRestrk3Pt", &DRestrk3Pt);
    t->Branch("DRestrk3Eta", &DRestrk3Eta);
    t->Branch("DRestrk3Phi", &DRestrk3Phi);
    t->Branch("DRestrk3Y", &DRestrk3Y);
    t->Branch("DRestrk3Dxy", &DRestrk3Dxy);
    t->Branch("DRestrk3D0Err", &DRestrk3D0Err);
    t->Branch("DRestrk3originalAlgo", &DRestrk3originalAlgo);
    t->Branch("DRestrk4Pt", &DRestrk4Pt);
    t->Branch("DRestrk4Eta", &DRestrk4Eta);
    t->Branch("DRestrk4Phi", &DRestrk4Phi);
    t->Branch("DRestrk4Y", &DRestrk4Y);
    t->Branch("DRestrk4Dxy", &DRestrk4Dxy);
    t->Branch("DRestrk4D0Err", &DRestrk4D0Err);
    t->Branch("DRestrk4originalAlgo", &DRestrk4originalAlgo);
    t->Branch("Dgen", &Dgen);
    t->Branch("DgenIndex", &DgenIndex);
    t->Branch("DgennDa", &DgennDa);
    t->Branch("Dgenpt", &Dgenpt);
    t->Branch("Dgeneta", &Dgeneta);
    t->Branch("Dgenphi", &Dgenphi);
    t->Branch("Dgeny", &Dgeny);
    t->Branch("DgencollisionId", &DgencollisionId);
    t->Branch("DgenBAncestorpt", &DgenBAncestorpt);
    t->Branch("DgenBAncestorpdgId", &DgenBAncestorpdgId);

    t->Branch("Gsize",&Gsize,"Gsize/I");
    t->Branch("Gy",&Gy);
    t->Branch("Geta",&Geta);
    t->Branch("Gphi",&Gphi);
    t->Branch("Gpt",&Gpt);
    t->Branch("GpdgId",&GpdgId);
    t->Branch("GcollisionId",&GcollisionId);
    t->Branch("GisSignal",&GisSignal);
    t->Branch("GBAncestorpt",&GBAncestorpt);
    t->Branch("GBAncestorpdgId",&GBAncestorpdgId);
    t->Branch("Gtk1pt",&Gtk1pt);
    t->Branch("Gtk1eta",&Gtk1eta);
    t->Branch("Gtk1y",&Gtk1y);
    t->Branch("Gtk1phi",&Gtk1phi);
    t->Branch("Gtk2pt",&Gtk2pt);
    t->Branch("Gtk2eta",&Gtk2eta);
    t->Branch("Gtk2y",&Gtk2y);
    t->Branch("Gtk2phi",&Gtk2phi);

}

void DJetTree::copy_variables_gen(GTree gt)
{
  Gsize = gt.Gsize;
}

void DJetTree::copy_variables(DTree dt) {
    RunNo = dt.RunNo;
    EvtNo = dt.EvtNo;
    LumiNo = dt.LumiNo;
    Dsize = dt.Dsize;
    PVx = dt.PVx;
    PVy = dt.PVy;
    PVz = dt.PVz;
    PVnchi2 = dt.PVnchi2;
    BSx = dt.BSx;
    BSy = dt.BSy;
    BSz = dt.BSz;
    PVxE = dt.PVxE;
    PVyE = dt.PVyE;
    PVzE = dt.PVzE;
    BSxErr = dt.BSxErr;
    BSyErr = dt.BSyErr;
    BSzErr = dt.BSzErr;
    BSdxdz = dt.BSdxdz;
    BSdydz = dt.BSdydz;
    BSdxdzErr = dt.BSdxdzErr;
    BSdydzErr = dt.BSdydzErr;
    BSWidthX = dt.BSWidthX;
    BSWidthXErr = dt.BSWidthXErr;
    BSWidthY = dt.BSWidthY;
    BSWidthYErr = dt.BSWidthYErr;
}

void DJetTree::copy_index_gen(GTree gt, int i)
{
  Gy.push_back(gt.Gy[i]);
  Geta.push_back(gt.Geta[i]);
  Gphi.push_back(gt.Gphi[i]);
  Gpt.push_back(gt.Gpt[i]);
  GpdgId.push_back(gt.GpdgId[i]);
  GcollisionId.push_back(gt.GcollisionId[i]);
  GisSignal.push_back(gt.GisSignal[i]);
  GBAncestorpt.push_back(gt.GBAncestorpt[i]);
  GBAncestorpdgId.push_back(gt.GBAncestorpdgId[i]);
  Gtk1pt.push_back(gt.Gtk1pt[i]);
  Gtk1eta.push_back(gt.Gtk1eta[i]);
  Gtk1y.push_back(gt.Gtk1y[i]);
  Gtk1phi.push_back(gt.Gtk1phi[i]);
  Gtk2pt.push_back(gt.Gtk2pt[i]);
  Gtk2eta.push_back(gt.Gtk2eta[i]);
  Gtk2y.push_back(gt.Gtk2y[i]);
  Gtk2phi.push_back(gt.Gtk2phi[i]);
}

void DJetTree::copy_index(DTree dt, int i) {
    Dindex.push_back(dt.Dindex[i]);
    Dtype.push_back(dt.Dtype[i]);
    Dmass.push_back(dt.Dmass[i]);
    Dpt.push_back(dt.Dpt[i]);
    Deta.push_back(dt.Deta[i]);
    Dphi.push_back(dt.Dphi[i]);
    Dy.push_back(dt.Dy[i]);
    DvtxX.push_back(dt.DvtxX[i]);
    DvtxY.push_back(dt.DvtxY[i]);
    Dd0.push_back(dt.Dd0[i]);
    Dd0Err.push_back(dt.Dd0Err[i]);
    Ddxyz.push_back(dt.Ddxyz[i]);
    DdxyzErr.push_back(dt.DdxyzErr[i]);
    Dchi2ndf.push_back(dt.Dchi2ndf[i]);
    Dchi2cl.push_back(dt.Dchi2cl[i]);
    Ddtheta.push_back(dt.Ddtheta[i]);
    Dlxy.push_back(dt.Dlxy[i]);
    Dalpha.push_back(dt.Dalpha[i]);
    DsvpvDistance.push_back(dt.DsvpvDistance[i]);
    DsvpvDisErr.push_back(dt.DsvpvDisErr[i]);
    DsvpvDistance_2D.push_back(dt.DsvpvDistance_2D[i]);
    DsvpvDisErr_2D.push_back(dt.DsvpvDisErr_2D[i]);
    DtktkRes_chi2ndf.push_back(dt.DtktkRes_chi2ndf[i]);
    DtktkRes_chi2cl.push_back(dt.DtktkRes_chi2cl[i]);
    DtktkRes_alpha.push_back(dt.DtktkRes_alpha[i]);
    DtktkRes_svpvDistance.push_back(dt.DtktkRes_svpvDistance[i]);
    DtktkRes_svpvDisErr.push_back(dt.DtktkRes_svpvDisErr[i]);
    DlxyBS.push_back(dt.DlxyBS[i]);
    DlxyBSErr.push_back(dt.DlxyBSErr[i]);
    DMaxDoca.push_back(dt.DMaxDoca[i]);
    Dtrk1Pt.push_back(dt.Dtrk1Pt[i]);
    Dtrk2Pt.push_back(dt.Dtrk2Pt[i]);
    Dtrk1Eta.push_back(dt.Dtrk1Eta[i]);
    Dtrk2Eta.push_back(dt.Dtrk2Eta[i]);
    Dtrk1Phi.push_back(dt.Dtrk1Phi[i]);
    Dtrk2Phi.push_back(dt.Dtrk2Phi[i]);
    Dtrk1PtErr.push_back(dt.Dtrk1PtErr[i]);
    Dtrk2PtErr.push_back(dt.Dtrk2PtErr[i]);
    Dtrk1Dxy.push_back(dt.Dtrk1Dxy[i]);
    Dtrk2Dxy.push_back(dt.Dtrk2Dxy[i]);
    Dtrk1PixelHit.push_back(dt.Dtrk1PixelHit[i]);
    Dtrk2PixelHit.push_back(dt.Dtrk2PixelHit[i]);
    Dtrk1StripHit.push_back(dt.Dtrk1StripHit[i]);
    Dtrk2StripHit.push_back(dt.Dtrk2StripHit[i]);
    Dtrk1nStripLayer.push_back(dt.Dtrk1nStripLayer[i]);
    Dtrk2nStripLayer.push_back(dt.Dtrk2nStripLayer[i]);
    Dtrk1nPixelLayer.push_back(dt.Dtrk1nPixelLayer[i]);
    Dtrk2nPixelLayer.push_back(dt.Dtrk2nPixelLayer[i]);
    Dtrk1Chi2ndf.push_back(dt.Dtrk1Chi2ndf[i]);
    Dtrk2Chi2ndf.push_back(dt.Dtrk2Chi2ndf[i]);
    Dtrk1MassHypo.push_back(dt.Dtrk1MassHypo[i]);
    Dtrk2MassHypo.push_back(dt.Dtrk2MassHypo[i]);
    Dtrk1Algo.push_back(dt.Dtrk1Algo[i]);
    Dtrk2Algo.push_back(dt.Dtrk2Algo[i]);
    Dtrk1originalAlgo.push_back(dt.Dtrk1originalAlgo[i]);
    Dtrk2originalAlgo.push_back(dt.Dtrk2originalAlgo[i]);
    Dtrk1highPurity.push_back(dt.Dtrk1highPurity[i]);
    Dtrk2highPurity.push_back(dt.Dtrk2highPurity[i]);
    Dtrk3Pt.push_back(dt.Dtrk3Pt[i]);
    Dtrk4Pt.push_back(dt.Dtrk4Pt[i]);
    Dtrk3Eta.push_back(dt.Dtrk3Eta[i]);
    Dtrk4Eta.push_back(dt.Dtrk4Eta[i]);
    Dtrk3Phi.push_back(dt.Dtrk3Phi[i]);
    Dtrk4Phi.push_back(dt.Dtrk4Phi[i]);
    Dtrk3PtErr.push_back(dt.Dtrk3PtErr[i]);
    Dtrk4PtErr.push_back(dt.Dtrk4PtErr[i]);
    Dtrk3Dxy.push_back(dt.Dtrk3Dxy[i]);
    Dtrk4Dxy.push_back(dt.Dtrk4Dxy[i]);
    Dtrk3PixelHit.push_back(dt.Dtrk3PixelHit[i]);
    Dtrk4PixelHit.push_back(dt.Dtrk4PixelHit[i]);
    Dtrk3StripHit.push_back(dt.Dtrk3StripHit[i]);
    Dtrk4StripHit.push_back(dt.Dtrk4StripHit[i]);
    Dtrk3nStripLayer.push_back(dt.Dtrk3nStripLayer[i]);
    Dtrk4nStripLayer.push_back(dt.Dtrk4nStripLayer[i]);
    Dtrk3nPixelLayer.push_back(dt.Dtrk3nPixelLayer[i]);
    Dtrk4nPixelLayer.push_back(dt.Dtrk4nPixelLayer[i]);
    Dtrk3Chi2ndf.push_back(dt.Dtrk3Chi2ndf[i]);
    Dtrk4Chi2ndf.push_back(dt.Dtrk4Chi2ndf[i]);
    Dtrk3MassHypo.push_back(dt.Dtrk3MassHypo[i]);
    Dtrk4MassHypo.push_back(dt.Dtrk4MassHypo[i]);
    Dtrk3Algo.push_back(dt.Dtrk3Algo[i]);
    Dtrk4Algo.push_back(dt.Dtrk4Algo[i]);
    Dtrk3originalAlgo.push_back(dt.Dtrk3originalAlgo[i]);
    Dtrk4originalAlgo.push_back(dt.Dtrk4originalAlgo[i]);
    Dtrk3highPurity.push_back(dt.Dtrk3highPurity[i]);
    Dtrk4highPurity.push_back(dt.Dtrk4highPurity[i]);
    Dtrk1Idx.push_back(dt.Dtrk1Idx[i]);
    Dtrk2Idx.push_back(dt.Dtrk2Idx[i]);
    Dtrk1EtaErr.push_back(dt.Dtrk1EtaErr[i]);
    Dtrk2EtaErr.push_back(dt.Dtrk2EtaErr[i]);
    Dtrk1PhiErr.push_back(dt.Dtrk1PhiErr[i]);
    Dtrk2PhiErr.push_back(dt.Dtrk2PhiErr[i]);
    Dtrk1Y.push_back(dt.Dtrk1Y[i]);
    Dtrk2Y.push_back(dt.Dtrk2Y[i]);
    Dtrk1D0Err.push_back(dt.Dtrk1D0Err[i]);
    Dtrk2D0Err.push_back(dt.Dtrk2D0Err[i]);
    Dtrk1MVAVal.push_back(dt.Dtrk1MVAVal[i]);
    Dtrk2MVAVal.push_back(dt.Dtrk2MVAVal[i]);
    Dtrk1Quality.push_back(dt.Dtrk1Quality[i]);
    Dtrk2Quality.push_back(dt.Dtrk2Quality[i]);
    Dtrk3Idx.push_back(dt.Dtrk3Idx[i]);
    Dtrk4Idx.push_back(dt.Dtrk4Idx[i]);
    Dtrk3EtaErr.push_back(dt.Dtrk3EtaErr[i]);
    Dtrk4EtaErr.push_back(dt.Dtrk4EtaErr[i]);
    Dtrk3PhiErr.push_back(dt.Dtrk3PhiErr[i]);
    Dtrk4PhiErr.push_back(dt.Dtrk4PhiErr[i]);
    Dtrk3Y.push_back(dt.Dtrk3Y[i]);
    Dtrk4Y.push_back(dt.Dtrk4Y[i]);
    Dtrk3D0Err.push_back(dt.Dtrk3D0Err[i]);
    Dtrk4D0Err.push_back(dt.Dtrk4D0Err[i]);
    Dtrk3MVAVal.push_back(dt.Dtrk3MVAVal[i]);
    Dtrk4MVAVal.push_back(dt.Dtrk4MVAVal[i]);
    Dtrk3Quality.push_back(dt.Dtrk3Quality[i]);
    Dtrk4Quality.push_back(dt.Dtrk4Quality[i]);
    DtktkResmass.push_back(dt.DtktkResmass[i]);
    DtktkRespt.push_back(dt.DtktkRespt[i]);
    DtktkReseta.push_back(dt.DtktkReseta[i]);
    DtktkResphi.push_back(dt.DtktkResphi[i]);
    DRestrk1Pt.push_back(dt.DRestrk1Pt[i]);
    DRestrk1Eta.push_back(dt.DRestrk1Eta[i]);
    DRestrk1Phi.push_back(dt.DRestrk1Phi[i]);
    DRestrk1Y.push_back(dt.DRestrk1Y[i]);
    DRestrk1Dxy.push_back(dt.DRestrk1Dxy[i]);
    DRestrk1D0Err.push_back(dt.DRestrk1D0Err[i]);
    DRestrk1originalAlgo.push_back(dt.DRestrk1originalAlgo[i]);
    DRestrk2Pt.push_back(dt.DRestrk2Pt[i]);
    DRestrk2Eta.push_back(dt.DRestrk2Eta[i]);
    DRestrk2Phi.push_back(dt.DRestrk2Phi[i]);
    DRestrk2Y.push_back(dt.DRestrk2Y[i]);
    DRestrk2Dxy.push_back(dt.DRestrk2Dxy[i]);
    DRestrk2D0Err.push_back(dt.DRestrk2D0Err[i]);
    DRestrk2originalAlgo.push_back(dt.DRestrk2originalAlgo[i]);
    DRestrk3Pt.push_back(dt.DRestrk3Pt[i]);
    DRestrk3Eta.push_back(dt.DRestrk3Eta[i]);
    DRestrk3Phi.push_back(dt.DRestrk3Phi[i]);
    DRestrk3Y.push_back(dt.DRestrk3Y[i]);
    DRestrk3Dxy.push_back(dt.DRestrk3Dxy[i]);
    DRestrk3D0Err.push_back(dt.DRestrk3D0Err[i]);
    DRestrk3originalAlgo.push_back(dt.DRestrk3originalAlgo[i]);
    DRestrk4Pt.push_back(dt.DRestrk4Pt[i]);
    DRestrk4Eta.push_back(dt.DRestrk4Eta[i]);
    DRestrk4Phi.push_back(dt.DRestrk4Phi[i]);
    DRestrk4Y.push_back(dt.DRestrk4Y[i]);
    DRestrk4Dxy.push_back(dt.DRestrk4Dxy[i]);
    DRestrk4D0Err.push_back(dt.DRestrk4D0Err[i]);
    DRestrk4originalAlgo.push_back(dt.DRestrk4originalAlgo[i]);
    Dgen.push_back(dt.Dgen[i]);
    DgenIndex.push_back(dt.DgenIndex[i]);
    DgennDa.push_back(dt.DgennDa[i]);
    Dgenpt.push_back(dt.Dgenpt[i]);
    Dgeneta.push_back(dt.Dgeneta[i]);
    Dgenphi.push_back(dt.Dgenphi[i]);
    Dgeny.push_back(dt.Dgeny[i]);
    DgencollisionId.push_back(dt.DgencollisionId[i]);
    DgenBAncestorpt.push_back(dt.DgenBAncestorpt[i]);
    DgenBAncestorpdgId.push_back(dt.DgenBAncestorpdgId[i]);
}

void DJetTree::clear_vectors() {
    jetptCorr_akpu3pf.clear();
    jetpt_akpu3pf.clear();
    jeteta_akpu3pf.clear();
    jetphi_akpu3pf.clear();
    gjetpt_akpu3pf.clear();
    gjeteta_akpu3pf.clear();
    gjetphi_akpu3pf.clear();
    gjetflavor_akpu3pf.clear();
    chargedSum_akpu3pf.clear();
    subid_akpu3pf.clear();

    genpt_akpu3pf.clear();
    geneta_akpu3pf.clear();
    genphi_akpu3pf.clear();
    gensubid_akpu3pf.clear();

    jetptCorr_akpu4pf.clear();
    jetpt_akpu4pf.clear();
    jeteta_akpu4pf.clear();
    jetphi_akpu4pf.clear();
    gjetpt_akpu4pf.clear();
    gjeteta_akpu4pf.clear();
    gjetphi_akpu4pf.clear();
    gjetflavor_akpu4pf.clear();
    chargedSum_akpu4pf.clear();
    subid_akpu4pf.clear();

    genpt_akpu4pf.clear();
    geneta_akpu4pf.clear();
    genphi_akpu4pf.clear();
    gensubid_akpu4pf.clear();

    Dindex.clear();
    Dtype.clear();
    Dmass.clear();
    Dpt.clear();
    Deta.clear();
    Dphi.clear();
    Dy.clear();
    DvtxX.clear();
    DvtxY.clear();
    Dd0.clear();
    Dd0Err.clear();
    Ddxyz.clear();
    DdxyzErr.clear();
    Dchi2ndf.clear();
    Dchi2cl.clear();
    Ddtheta.clear();
    Dlxy.clear();
    Dalpha.clear();
    DsvpvDistance.clear();
    DsvpvDisErr.clear();
    DsvpvDistance_2D.clear();
    DsvpvDisErr_2D.clear();
    DtktkRes_chi2ndf.clear();
    DtktkRes_chi2cl.clear();
    DtktkRes_alpha.clear();
    DtktkRes_svpvDistance.clear();
    DtktkRes_svpvDisErr.clear();
    DlxyBS.clear();
    DlxyBSErr.clear();
    DMaxDoca.clear();
    Dtrk1Pt.clear();
    Dtrk2Pt.clear();
    Dtrk1Eta.clear();
    Dtrk2Eta.clear();
    Dtrk1Phi.clear();
    Dtrk2Phi.clear();
    Dtrk1PtErr.clear();
    Dtrk2PtErr.clear();
    Dtrk1Dxy.clear();
    Dtrk2Dxy.clear();
    Dtrk1PixelHit.clear();
    Dtrk2PixelHit.clear();
    Dtrk1StripHit.clear();
    Dtrk2StripHit.clear();
    Dtrk1nStripLayer.clear();
    Dtrk2nStripLayer.clear();
    Dtrk1nPixelLayer.clear();
    Dtrk2nPixelLayer.clear();
    Dtrk1Chi2ndf.clear();
    Dtrk2Chi2ndf.clear();
    Dtrk1MassHypo.clear();
    Dtrk2MassHypo.clear();
    Dtrk1Algo.clear();
    Dtrk2Algo.clear();
    Dtrk1originalAlgo.clear();
    Dtrk2originalAlgo.clear();
    Dtrk1highPurity.clear();
    Dtrk2highPurity.clear();
    Dtrk3Pt.clear();
    Dtrk4Pt.clear();
    Dtrk3Eta.clear();
    Dtrk4Eta.clear();
    Dtrk3Phi.clear();
    Dtrk4Phi.clear();
    Dtrk3PtErr.clear();
    Dtrk4PtErr.clear();
    Dtrk3Dxy.clear();
    Dtrk4Dxy.clear();
    Dtrk3PixelHit.clear();
    Dtrk4PixelHit.clear();
    Dtrk3StripHit.clear();
    Dtrk4StripHit.clear();
    Dtrk3nStripLayer.clear();
    Dtrk4nStripLayer.clear();
    Dtrk3nPixelLayer.clear();
    Dtrk4nPixelLayer.clear();
    Dtrk3Chi2ndf.clear();
    Dtrk4Chi2ndf.clear();
    Dtrk3MassHypo.clear();
    Dtrk4MassHypo.clear();
    Dtrk3Algo.clear();
    Dtrk4Algo.clear();
    Dtrk3originalAlgo.clear();
    Dtrk4originalAlgo.clear();
    Dtrk3highPurity.clear();
    Dtrk4highPurity.clear();
    Dtrk1Idx.clear();
    Dtrk2Idx.clear();
    Dtrk1EtaErr.clear();
    Dtrk2EtaErr.clear();
    Dtrk1PhiErr.clear();
    Dtrk2PhiErr.clear();
    Dtrk1Y.clear();
    Dtrk2Y.clear();
    Dtrk1D0Err.clear();
    Dtrk2D0Err.clear();
    Dtrk1MVAVal.clear();
    Dtrk2MVAVal.clear();
    Dtrk1Quality.clear();
    Dtrk2Quality.clear();
    Dtrk3Idx.clear();
    Dtrk4Idx.clear();
    Dtrk3EtaErr.clear();
    Dtrk4EtaErr.clear();
    Dtrk3PhiErr.clear();
    Dtrk4PhiErr.clear();
    Dtrk3Y.clear();
    Dtrk4Y.clear();
    Dtrk3D0Err.clear();
    Dtrk4D0Err.clear();
    Dtrk3MVAVal.clear();
    Dtrk4MVAVal.clear();
    Dtrk3Quality.clear();
    Dtrk4Quality.clear();
    DtktkResmass.clear();
    DtktkRespt.clear();
    DtktkReseta.clear();
    DtktkResphi.clear();
    DRestrk1Pt.clear();
    DRestrk1Eta.clear();
    DRestrk1Phi.clear();
    DRestrk1Y.clear();
    DRestrk1Dxy.clear();
    DRestrk1D0Err.clear();
    DRestrk1originalAlgo.clear();
    DRestrk2Pt.clear();
    DRestrk2Eta.clear();
    DRestrk2Phi.clear();
    DRestrk2Y.clear();
    DRestrk2Dxy.clear();
    DRestrk2D0Err.clear();
    DRestrk2originalAlgo.clear();
    DRestrk3Pt.clear();
    DRestrk3Eta.clear();
    DRestrk3Phi.clear();
    DRestrk3Y.clear();
    DRestrk3Dxy.clear();
    DRestrk3D0Err.clear();
    DRestrk3originalAlgo.clear();
    DRestrk4Pt.clear();
    DRestrk4Eta.clear();
    DRestrk4Phi.clear();
    DRestrk4Y.clear();
    DRestrk4Dxy.clear();
    DRestrk4D0Err.clear();
    DRestrk4originalAlgo.clear();
    Dgen.clear();
    DgenIndex.clear();
    DgennDa.clear();
    Dgenpt.clear();
    Dgeneta.clear();
    Dgenphi.clear();
    Dgeny.clear();
    DgencollisionId.clear();
    DgenBAncestorpt.clear();
    DgenBAncestorpdgId.clear();

    Gy.clear();
    Geta.clear();
    Gphi.clear();
    Gpt.clear();
    GpdgId.clear();
    GcollisionId.clear();
    GisSignal.clear();
    GBAncestorpt.clear();
    GBAncestorpdgId.clear();
    Gtk1pt.clear();
    Gtk1eta.clear();
    Gtk1y.clear();
    Gtk1phi.clear();
    Gtk2pt.clear();
    Gtk2eta.clear();
    Gtk2y.clear();
    Gtk2phi.clear();
}

void DJetTree::set_hlt_tree(TTree* ht, Bool_t isPP)
{
  ht->SetBranchStatus("*", 0);
  if(isPP) //pp
    {
      ht->SetBranchStatus("HLT_L1MinimumBias*",1);
      ht->SetBranchStatus("HLT_Dmeson*",1);
      ht->SetBranchStatus("HLT_AK4CaloJet40_Eta5p1_v1*",1);
      ht->SetBranchStatus("HLT_AK4CaloJet60_Eta5p1_v1*",1);
      ht->SetBranchStatus("HLT_AK4CaloJet80_Eta5p1_v1*",1);
      ht->SetBranchStatus("L1_SingleJet16_BptxAND*",1);
      ht->SetBranchStatus("L1_SingleJet24_BptxAND*",1);
      ht->SetBranchStatus("L1_SingleJet28_BptxAND*",1);
      ht->SetBranchStatus("L1_SingleJet40_BptxAND*",1);
      ht->SetBranchStatus("L1_SingleJet48_BptxAND*",1);      
    }
  else //PbPb
    {
      ht->SetBranchStatus("HLT_HIL1MinimumBias*",1);
      ht->SetBranchStatus("HLT_HIDmeson*",1);
      ht->SetBranchStatus("HLT_HIPuAK4CaloJet*",1);
      ht->SetBranchStatus("L1_MinimumBiasHF1_AND",1);
      ht->SetBranchStatus("L1_MinimumBiasHF2_AND",1);
      ht->SetBranchStatus("L1_SingleS1Jet16_BptxAND*", 1);
      ht->SetBranchStatus("L1_SingleS1Jet28_BptxAND*", 1);
      ht->SetBranchStatus("L1_SingleS1Jet32_BptxAND*", 1);
      ht->SetBranchStatus("L1_SingleJet44_BptxAND*",   1);
      ht->SetBranchStatus("L1_SingleS1Jet52_BptxAND*", 1);
      ht->SetBranchStatus("L1_SingleS1Jet56_BptxAND*", 1);
      ht->SetBranchStatus("L1_SingleS1Jet64_BptxAND*", 1);
    }

}

#endif
