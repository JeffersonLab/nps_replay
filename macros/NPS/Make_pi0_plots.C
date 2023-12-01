#include <TString.h>
#include <TFile.h>
#include <TTree.h>
#include <iostream>
#include <fstream>
#include "TROOT.h"
#include "TMath.h"
#include <TVector3.h>
#include <TH1F.h>
#include <TLorentzVector.h>

using namespace std;

const double_t convdeg = TMath::Pi()/180.;
const double_t MinClusSize = 3;
const double_t clusTmax = 152.; // Changed Nov. 30 by Zheng to adopt the new Cluster T peak
const double_t clusTmin = 140.;
const double_t LH2_10cm_target = 1.00794*931.5/1000.;
const double_t LD2_10cm_target = 2.014*931.5/1000./2.;
const double_t electron_mass = 0.51099895e-3;


void GetPvect(double_t clx, double_t cly,double_t clz, double_t cle, TVector3 &vtx, TVector3 &pvect, double_t angle){

	double nps_angle = angle * convdeg;
    
	double cth = cos(nps_angle);
	double sth = sin(nps_angle);

	double xlab = clx*cth + clz*sth - vtx.X();
	double ylab = cly - vtx.Y();
	double zlab = -clx*sth + clz*cth - vtx.Z();

	TVector3 rvect(xlab, ylab, zlab);
	double th = rvect.Theta();
	double ph = rvect.Phi();   

	pvect.SetXYZ(cle * cos(ph) * sin(th),
	cle * sin(ph) * sin(th),
	cle * cos(th));

	return;
}

void Make_pi0_plots(Int_t RunNo = 2834){
    TString FilePath_Angle = "../../DBASE/NPS/";
    // TString FilePath_Angle = "/home/cdaq/nps-2023/nps_replay/DBASE/NPS/";
    TString Input_File_Angle = FilePath_Angle + "standard_coin.kinematics";
    ifstream inputFile_Angle(Input_File_Angle);
    Double_t SHMS_Angle, NPS_Offset, NPS_Angle, gpbeam;
    std::string line;
    while (std::getline(inputFile_Angle, line)) {
        if (line.find("stheta_lab =") != std::string::npos) {
            std::sscanf(line.c_str(), "stheta_lab = %lf", &SHMS_Angle);
        }
        if (line.find("nps_theta_offset=") != std::string::npos) {
            std::sscanf(line.c_str(), "nps_theta_offset= %lf", &NPS_Offset);
        }
        if (line.find("gpbeam = ") != std::string::npos) {
            std::sscanf(line.c_str(), "gpbeam = %lf", &gpbeam);
        }
    }
    NPS_Angle = SHMS_Angle + NPS_Offset;
    // cout<<SHMS_Angle<<"\t"<<NPS_Offset<<"\t"<<NPS_Angle<<"\t"<<gpbeam<<endl;


    TString FilePath_TG = "../../REPORT_OUTPUT/COIN/";
    // TString FilePath_TG = "/home/cdaq/nps-2023/nps_replay/REPORT_OUTPUT/COIN/";
    TString Input_File_TG = FilePath_TG + Form("coin_NPS_HMS_report_%d_5000.report",RunNo);
    ifstream inputFile_TG(Input_File_TG);
    Double_t Target_Type;
    while (std::getline(inputFile_TG, line)) {
        if (line.find("Target AMU") != std::string::npos){
            std::sscanf(line.c_str(), "Target AMU  : %lf", &Target_Type);
            break;
        }
    }
    // cout<<Target_Type<<endl;


    TString FilePath = "../../ROOTfiles/COIN/PRODUCTION/";
    // TString FilePath = "/home/cdaq/nps-2023/nps_replay/ROOTfiles/COIN/PRODUCTION/";
    TString Input_File = FilePath + Form("nps_hms_coin_%d_latest.root",RunNo);
    TFile *file = new TFile(Input_File , "UPDATE");
    TTree *treeT = (TTree *)file->Get("T");
    treeT->SetBranchStatus("*",false);
    treeT->SetBranchStatus("NPS.cal.clusE", true);
    treeT->SetBranchStatus("NPS.cal.clusT", true);
    treeT->SetBranchStatus("NPS.cal.clusX", true);
    treeT->SetBranchStatus("NPS.cal.clusY", true);
    treeT->SetBranchStatus("NPS.cal.clusZ", true);
    treeT->SetBranchStatus("NPS.cal.clusSize", true);
    treeT->SetBranchStatus("NPS.cal.nclust", true);
    treeT->SetBranchStatus("H.react.ok", true);
    treeT->SetBranchStatus("H.react.x", true);
    treeT->SetBranchStatus("H.react.y", true);
    treeT->SetBranchStatus("H.react.z", true);
    treeT->SetBranchStatus("NPS.cal.trk.px", true);
    treeT->SetBranchStatus("NPS.cal.trk.py", true);
    treeT->SetBranchStatus("NPS.cal.trk.pz", true);
    treeT->SetBranchStatus("H.gtr.px", true);
    treeT->SetBranchStatus("H.gtr.py", true);
    treeT->SetBranchStatus("H.gtr.pz", true);
    treeT->SetBranchStatus("H.gtr.ok", true);
    treeT->SetBranchStatus("H.gtr.dp", true);
    treeT->SetBranchStatus("H.cal.etracknorm", true);
    treeT->SetBranchStatus("H.cer.npeSum", true);

    //Cluster info
    Double_t nclust;
    Double_t clusX[100];
    Double_t clusY[100];
    Double_t clusZ[100];
    Double_t clusT[100];
    Double_t clusE[100];
    Double_t clusSize[100];

    // Vertex Position
    Double_t vtx_ok;
    Double_t vtx_x;
    Double_t vtx_y;
    Double_t vtx_z;

    // HMS golden track
    Double_t gtr_px;
    Double_t gtr_py;
    Double_t gtr_pz;
    Double_t gtr_ok;
    Double_t gtr_dp;
    Double_t etracknorm;
    Double_t npesum;

    treeT->SetBranchAddress("NPS.cal.clusE", clusE);
    treeT->SetBranchAddress("NPS.cal.clusT", clusT);
    treeT->SetBranchAddress("NPS.cal.clusX", clusX);
    treeT->SetBranchAddress("NPS.cal.clusY", clusY);
    treeT->SetBranchAddress("NPS.cal.clusZ", clusZ);
    treeT->SetBranchAddress("NPS.cal.clusSize", clusSize);
    treeT->SetBranchAddress("NPS.cal.nclust", &nclust);
    treeT->SetBranchAddress("H.react.ok", &vtx_ok);
    treeT->SetBranchAddress("H.react.x", &vtx_x);
    treeT->SetBranchAddress("H.react.y", &vtx_y);
    treeT->SetBranchAddress("H.react.z", &vtx_z);
    treeT->SetBranchAddress("H.gtr.px",&gtr_px);
    treeT->SetBranchAddress("H.gtr.py",&gtr_py);
    treeT->SetBranchAddress("H.gtr.pz",&gtr_pz);
    treeT->SetBranchAddress("H.gtr.ok",&gtr_ok);
    treeT->SetBranchAddress("H.gtr.dp", &gtr_dp);
    treeT->SetBranchAddress("H.cal.etracknorm", &etracknorm);
    treeT->SetBranchAddress("H.cer.npeSum", &npesum);

    TH1F* miss_mass = new TH1F("missingmass2","#pi_{0} Missing mass square",200,0,5);
    miss_mass->GetXaxis()->SetTitle("Missing mass square(GeV^{2})");

    TH1F* pi0_energy = new TH1F("pi0_energy","#pi_{0} energy;Energy(GeV);Counts",200,0,6);

    Long64_t nentries = treeT->GetEntries();
    for(Long64_t evt=0; evt<nentries; evt++){
        if (evt % 10000 == 0) cout << evt << endl;
        treeT->GetEntry(evt);
        if(abs(vtx_z)>4.) continue;
        if(nclust<1.5) continue;
        if(vtx_ok < 1) continue;
        TVector3 v_vtx(vtx_x, vtx_y, vtx_z);
        if(gtr_dp < -10 || gtr_dp > 10) continue;
        if(etracknorm < 0.7 || etracknorm>1.3) continue;
        if(npesum < 2) continue;
        if(gtr_ok < 1) continue;
        TLorentzVector sele_vect;
        if(gtr_px > 1.e30) continue;
        sele_vect.SetXYZM(gtr_px,gtr_py,gtr_pz,electron_mass);

        for(int i=0; i<nclust;i++){
            for(int j=i+1; j<nclust;j++){
                if(clusSize[i] < MinClusSize || clusSize[j] <MinClusSize) continue;
                if(clusT[i] < clusTmin || clusT[i] > clusTmax) continue;
                if(clusT[j] <= clusTmin || clusT[j] >= clusTmax) continue;
                if(clusE[i]<0.5||clusE[j]<0.5) continue;

                TVector3 v_Q1, v_Q2;
                GetPvect(clusX[i], clusY[i],clusZ[i],clusE[i], v_vtx, v_Q1, NPS_Angle);
                GetPvect(clusX[j], clusY[j],clusZ[j],clusE[j], v_vtx, v_Q2, NPS_Angle);

                TLorentzVector Q1;
                TLorentzVector Q2;
                TLorentzVector Q3;

                Q1.SetPxPyPzE(v_Q1[0], v_Q1[1], v_Q1[2], clusE[i]);
                Q2.SetPxPyPzE(v_Q2[0], v_Q2[1], v_Q2[2], clusE[j]);
                Q3=Q1+Q2;

                pi0_energy->Fill(Q3.Energy());

                Double_t im2 = Q3.M2();
                Double_t invmass = sqrt(im2);

                TLorentzVector beam_vect;
                beam_vect.SetXYZM(0,0,gpbeam,electron_mass);

                TLorentzVector target_vect;
                Double_t Targetname;
                if(Target_Type>1.0&&Target_Type<2.0) Targetname = LH2_10cm_target;
                else if(Target_Type>2.0&&Target_Type<3.0) Targetname = LD2_10cm_target;
                else Targetname = LH2_10cm_target;
                target_vect.SetXYZM(0,0,0,Targetname);

                TLorentzVector X_vect;
                X_vect = (beam_vect + target_vect - sele_vect - Q1 - Q2);
                if (invmass < 0.1 || invmass > 0.13) continue;
                Double_t mm2 = X_vect.M2();
                miss_mass->Fill(mm2);
            }
        }
    }
    // TFile *rootFile = new TFile("output.root", "UPDATE");
    // TFile *rootFile = new TFile("macros/NPS/output.root", "UPDATE");
    file->WriteTObject(miss_mass,"missing_mass_square");
    file->WriteTObject(pi0_energy,"pi0_energy");
    file->Close();

}