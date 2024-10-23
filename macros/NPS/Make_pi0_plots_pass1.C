//=======================================================================================-//
// This is used for generating the pi0 mass plots after finishing the replay
// Make sure the replayed rootfile and report file exist before excuting this macro
// 
// To run it, do hcana -b -q 'macro/NPS/Make_pi0_plots_pass1.C(runnumber)'
//
// In the mean time (10/19/2024), the directories and names of input rootfiles and report files
// are not fixed. Need to be modified before running it.
//
// Contact Hao Huang (hhuang@jlab.org) if you have any questions
//========================================================================================//

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

// The directory to replayed rootfiles and report files (change it accordingly)
TString rootfileDir = "ROOTfiles/COIN/SKIM";
TString reportDir = "REPORT_OUTPUT/COIN/SKIM";
// The director to output file of histogram (change it accordingly)
TFile *output = new TFile(Form("%s/out_histo/NPS_Mgg_%d.root", rootfileDir.Data() RunNo), "recreate");

const double_t electron_mass = 0.51099895e-3;

void GetPvect(double_t clx, double_t cly,double_t clz, double_t cle, TVector3 &vtx, TVector3 &pvect, double_t angle);
Int_t GetKinematics(int run, double &HMS_mom, double &Target_amu, double &HMS_ang, double &SHMS_ang, double &Beam_energy);

void Make_pi0_plots_pass1(Int_t RunNo = 0){

    if(!RunNo){
        cout<<"ERROR: Please input a run number!!"<<endl;
        return;
    }

    Double_t HMS_mom, Target_amu, HMS_ang, SHMS_Angle, gpbeam;
    Int_t hasKine = GetKinematics(RunNo, HMS_mom, Target_amu, HMS_ang, SHMS_Angle, gpbeam);
    Double_t NPS_Offset = -16.3;
    Double_t NPS_Angle = (SHMS_Angle + NPS_Offset)*TMath::DegToRad();

    // cout<<RunNo<<" "<<HMS_mom<<" "<<Target_amu<<" "<<HMS_ang<<" "<<SHMS_Angle<<" "<<gpbeam<<endl;

    if(!hasKine){
        cout<<"ERROR: Did not get the kinematics from report file, pi0 plots won't be made!!"<<endl;
        return;
    }

    // Get the replayed rootfile and the tree
    // TFile *file = TFile::Open(Form("%s/nps_hms_skim_%d_*_*.root", rootfileDir.Data(), RunNo), "update");
    // TTree *treeT = (TTree *)file->Get("T");

    TChain *treeT = new TChain("T");
    treeT->Add(Form("%s/nps_hms_skim_%d_*.root", rootfileDir.Data(), RunNo));

    treeT->SetBranchStatus("*",false);
    treeT->SetBranchStatus("H.gtr.dp", true);
    treeT->SetBranchStatus("H.gtr.ph", true);
    treeT->SetBranchStatus("H.gtr.px", true);
    treeT->SetBranchStatus("H.gtr.py", true);
    treeT->SetBranchStatus("H.gtr.pz", true);
    treeT->SetBranchStatus("H.react.x", true);
    treeT->SetBranchStatus("H.react.y", true);
    treeT->SetBranchStatus("H.react.z", true);
    treeT->SetBranchStatus("H.hod.beta", true);
    treeT->SetBranchStatus("H.cal.etottracknorm", true);
    treeT->SetBranchStatus("H.cer.npeSum", true);

    treeT->SetBranchStatus("NPS.cal.nclust", true);
    treeT->SetBranchStatus("NPS.cal.clusE", true);
    treeT->SetBranchStatus("NPS.cal.clusT", true);
    treeT->SetBranchStatus("NPS.cal.clusX", true);
    treeT->SetBranchStatus("NPS.cal.clusY", true);
    treeT->SetBranchStatus("NPS.cal.clusZ", true);
    treeT->SetBranchStatus("NPS.cal.clusSize", true);
    treeT->SetBranchStatus("NPS.cal.trk.px", true);
    treeT->SetBranchStatus("NPS.cal.trk.py", true);
    treeT->SetBranchStatus("NPS.cal.trk.pz", true);
    
    // Vertex Position
    Double_t vtx_x;
    Double_t vtx_y;
    Double_t vtx_z;

    // HMS golden track
    Double_t gtr_px;
    Double_t gtr_py;
    Double_t gtr_pz;
    Double_t gtr_ph;
    Double_t gtr_dp;
    Double_t hod_beta;
    Double_t etottracknorm;
    Double_t npesum;

    //Cluster info
    Double_t nclust;
    Double_t clusX[100];
    Double_t clusY[100];
    Double_t clusZ[100];
    Double_t clusT[100];
    Double_t clusE[100];
    Double_t clusSize[100];

    treeT->SetBranchAddress("H.react.x", &vtx_x);
    treeT->SetBranchAddress("H.react.y", &vtx_y);
    treeT->SetBranchAddress("H.react.z", &vtx_z);
    treeT->SetBranchAddress("H.gtr.px",&gtr_px);
    treeT->SetBranchAddress("H.gtr.py",&gtr_py);
    treeT->SetBranchAddress("H.gtr.pz",&gtr_pz);
    treeT->SetBranchAddress("H.gtr.ph",&gtr_ph);
    treeT->SetBranchAddress("H.gtr.dp", &gtr_dp);
    treeT->SetBranchAddress("H.cal.etottracknorm", &etottracknorm);
    treeT->SetBranchAddress("H.cer.npeSum", &npesum);
    treeT->SetBranchAddress("H.hod.beta", &hod_beta);

    treeT->SetBranchAddress("NPS.cal.clusE", clusE);
    treeT->SetBranchAddress("NPS.cal.clusT", clusT);
    treeT->SetBranchAddress("NPS.cal.clusX", clusX);
    treeT->SetBranchAddress("NPS.cal.clusY", clusY);
    treeT->SetBranchAddress("NPS.cal.clusZ", clusZ);
    treeT->SetBranchAddress("NPS.cal.clusSize", clusSize);
    treeT->SetBranchAddress("NPS.cal.nclust", &nclust);

    // invariant mass distributions with different energy cut on photons
    TH1F *h_invmass1 = new TH1F("h_invmass1","M_{#gamma#gamma} (both E_{#gamma} > 0.7 GeV);M_{#gamma#gamma} [GeV/c^{2}];Counts", 300, 0, 0.3);
    TH1F *h_invmass2 = new TH1F("h_invmass2","M_{#gamma#gamma} (both E_{#gamma} > 1 GeV);M_{#gamma#gamma} [GeV/c^{2}];Counts", 300, 0, 0.3);

    Long64_t nentries = treeT->GetEntries();

    // Run over 100k events to look for the mean value of cluster timing
    TH1F *h_clusT = new TH1F("h_clusT","", 60, 120, 180);
    for(Long64_t evt = 0; evt < 100000; evt++){
        treeT->GetEntry(evt);
        if (evt % 10000 == 0) cout << evt << endl;

        // cut on vertex and HMS tracks
        if(!(abs(vtx_z) < 4.)) continue;
        if(!(abs(gtr_dp) < 10)) continue;
        if(!(TMath::Abs(gtr_ph) < 0.03)) continue;
        if(!(TMath::Abs(hod_beta-1.) < 0.2)) continue;
        if(!(etottracknorm > 0.6)) continue;
        if(!(npesum > 2)) continue;

        for(int i = 0; i < nclust; i++) h_clusT->Fill(clusT[i]);
    }

    Double_t mean_clusT = h_clusT->GetBinCenter(h_clusT->GetMaximumBin());
    h_clusT->Reset("ICESM");

    // Fill the invariant mass histogram
    for(Long64_t evt = 0; evt < nentries; evt++){
        treeT->GetEntry(evt);
        if (evt % 10000 == 0) cout << evt << endl;
        
        // cut on vertex and HMS tracks
        if(!(abs(vtx_z) < 4.)) continue;
        if(!(abs(gtr_dp) < 10)) continue;
        if(!(TMath::Abs(gtr_ph) < 0.03)) continue;
        if(!(TMath::Abs(hod_beta-1.) < 0.2)) continue;
        if(!(etottracknorm > 0.6)) continue;
        if(!(npesum > 2)) continue;
        
        // Only look at event with 2 clusters in the NPS 
        if(nclust != 2) continue;

        // cut on the cluster timing
        if(!(abs(clusT[0] - mean_clusT) < 3)) continue;
        if(!(abs(clusT[1] - mean_clusT) < 3)) continue;
        
        TVector3 v_vtx(vtx_x, vtx_y, vtx_z);
        TLorentzVector sele_vect;
        sele_vect.SetXYZM(gtr_px,gtr_py,gtr_pz,electron_mass);

        TVector3 v_Q1, v_Q2;
        GetPvect(clusX[0], clusY[0], clusZ[0], clusE[0], v_vtx, v_Q1, NPS_Angle);
        GetPvect(clusX[1], clusY[1], clusZ[1], clusE[1], v_vtx, v_Q2, NPS_Angle);

        TLorentzVector Q1;
        TLorentzVector Q2;
        TLorentzVector Q3;

        Q1.SetPxPyPzE(v_Q1[0], v_Q1[1], v_Q1[2], clusE[0]);
        Q2.SetPxPyPzE(v_Q2[0], v_Q2[1], v_Q2[2], clusE[1]);
        Q3=Q1+Q2;

        Double_t Egg = Q3.E();
        Double_t Mgg = Q3.M();

        if(Egg > 0.7) h_invmass1->Fill(Mgg);
        if(Egg > 1) h_invmass2->Fill(Mgg);
    }

    output->cd()
    h_invmass1->Write();
    h_invmass2->Write();
    output->Close();
}

void GetPvect(double_t clx, double_t cly,double_t clz, double_t cle, TVector3 &vtx, TVector3 &pvect, double_t angle){
    
	double cth = cos(angle);
	double sth = sin(angle);

	double xlab = clx*cth + clz*sth - vtx.X();
	double ylab = cly - vtx.Y();
	double zlab = -clx*sth + clz*cth - vtx.Z();

	TVector3 rvect(xlab, ylab, zlab);
	double th = rvect.Theta();
	double ph = rvect.Phi();

	pvect.SetXYZ(cle*cos(ph)*sin(th), cle*sin(ph)*sin(th), cle*cos(th));

	return;
}

Int_t GetKinematics(int run, double &HMS_mom, double &Target_amu, double &HMS_ang, double &SHMS_ang, double &Beam_energy)
{
    ifstream inputFile;
    inputFile.open(Form("%s/skim_NPS_HMS_report_%d_-1.report", reportDir.Data(), run));
    
    // inputFile.open(Form("/work/hallc/nps/nps-ana/REPORT_OUTPUT/REPORT_OUTPUT/COIN/coin_NPS_HMS_report_%d_0_1_-1.report", run));

    // if(!inputFile.is_open()){
    //     inputFile.open(Form("/work/hallc/nps/nps-ana/REPORT_OUTPUT/REPORT_OUTPUT/REPORT_OUTPUT2/COIN/coin_NPS_HMS_report_%d_0_1_-1.report", run));
    // }

    // if(!inputFile.is_open()){
    //     inputFile.open(Form("/volatile/hallc/nps/nps-ana/REPORT_OUTPUT/REPORT_OUTPUT2/COIN/SKIM/skim_NPS_HMS_report_%d_-1.report", run));
    // }
    // if(!inputFile.is_open()){
    //     inputFile.open(Form("/volatile/hallc/nps/nps-ana/REPORT_OUTPUT/COIN/SKIM/skim_NPS_HMS_report_%d_-1.report", run));
    // }
    
    if(inputFile.is_open()){
        cout<<"Get the report file of run "<<run<<endl;
    }
    else if(!inputFile.is_open()){
        cout<<"Error: Report file of run "<<run<<" is not found!!"<<endl;
        return 0;
    }

    string line;
    while(std::getline(inputFile, line))
    {   
        if(line.find("Momentum") != std::string::npos) {
            std::sscanf(line.c_str(), "Momentum : %lf", &HMS_mom);
        }
        else if(line.find("Target AMU") != std::string::npos){
            std::sscanf(line.c_str(), "Target AMU  : %lf", &Target_amu);
        }
        else if(line.find("SHMS Theta") != std::string::npos){
            std::sscanf(line.c_str(), "SHMS Theta  : %lf", &SHMS_ang);
        }
        else if(line.find("HMS Theta") != std::string::npos){
            std::sscanf(line.c_str(), "HMS Theta  : %lf", &HMS_ang);
        }
        else if(line.find("Beam Energy") != std::string::npos) {
            std::sscanf(line.c_str(), "Beam Energy : %lf", &Beam_energy);
            break;
        }
    }
    inputFile.close();
    return 1;
}
