#include <TFile.h>
#include <TTree.h>
#include <TString.h>
#include <iostream>
#include <fstream>
#include <TH2D.h>
#include <TGraph.h>
#include <TCanvas.h>

using namespace std;

void Make_scaler_plots(Int_t RunNo){
    TString FilePath_PS = "../../REPORT_OUTPUT/COIN/HMSONLY/";
    TString Input_File_PS = FilePath_PS + Form("scaler_report_%d.report",RunNo);
    ifstream inputFile(Input_File_PS);
    int Ps1_factor, Ps2_factor, Ps3_factor, Ps4_factor, Ps5_factor, Ps6_factor;
    std::string line;
    while (std::getline(inputFile, line)) {
        if (line.find("Ps1_factor") != std::string::npos) {
            std::sscanf(line.c_str(), "Ps1_factor = %d", &Ps1_factor);
        } else if (line.find("Ps2_factor") != std::string::npos) {
            std::sscanf(line.c_str(), "Ps2_factor = %d", &Ps2_factor);
        } else if (line.find("Ps3_factor") != std::string::npos) {
            std::sscanf(line.c_str(), "Ps3_factor = %d", &Ps3_factor);
        } else if (line.find("Ps4_factor") != std::string::npos) {
            std::sscanf(line.c_str(), "Ps4_factor = %d", &Ps4_factor);
        } else if (line.find("Ps5_factor") != std::string::npos) {
            std::sscanf(line.c_str(), "Ps5_factor = %d", &Ps5_factor);
        } else if (line.find("Ps6_factor") != std::string::npos) {
            std::sscanf(line.c_str(), "Ps6_factor = %d", &Ps6_factor);
        }
    }
    int ps[6];
    Double_t Ps[6];
    ps[0] = Ps1_factor;
    ps[1] = Ps2_factor;
    ps[2] = Ps3_factor;
    ps[3] = Ps4_factor;
    ps[4] = Ps5_factor;
    ps[5] = Ps6_factor;

    for(int i=0;i<6;i++){
       if(ps[i]==-1) Ps[i] = -1.;
       else if(ps[i]==1) Ps[i] = 0.;
       else Ps[i] = log2((ps[i]-1)*1.)+1.;
    }

    TString FilePath = "../../ROOTfiles/NPS/SCALERS/";
    TString Input_File = FilePath + Form("nps_replay_scalers_%d_1_-1.root",RunNo);
    TFile *file = new TFile(Input_File , "READ");


    // -------------------------------- T Tree --------------------------------
    TTree *treeT = (TTree *)file->Get("T");
    treeT->SetBranchStatus("*",false);
    treeT->SetBranchStatus("T.hms.hEDTM_tdcTime",true);
    treeT->SetBranchStatus("H.EDTM.scaler",true);
    treeT->SetBranchStatus("H.BCM4A.scaler",true);
    treeT->SetBranchStatus("H.BCM4A.scalerRate",true);
    treeT->SetBranchStatus("H.BCM4A.scalerCurrent",true);
    treeT->SetBranchStatus("H.hL1ACCP.scaler",true);
    treeT->SetBranchStatus("H.hTRIG1.scaler",true);
    treeT->SetBranchStatus("H.hTRIG2.scaler",true);
    treeT->SetBranchStatus("H.hTRIG3.scaler",true);
    treeT->SetBranchStatus("H.hTRIG4.scaler",true);
    treeT->SetBranchStatus("H.hTRIG5.scaler",true);
    treeT->SetBranchStatus("H.hTRIG6.scaler",true);
    treeT->SetBranchStatus("H.1MHz.scaler",true);

    Double_t T_hms_hEDTM_tdcMultiplicity, T_hms_hEDTM_tdcTime, T_hms_hEDTM_tdcTimeRaw;
    Double_t H_EDTM_scaler, H_BCM4A_scalerRate, H_BCM4A_scalerCurrent;
    Double_t H_hL1ACCP_scaler, H_hTRIG5_scaler, H_hTRIG6_scaler, H_hTRIG3_scaler;
    Double_t H_hTRIG1_scaler, H_hTRIG2_scaler, H_hTRIG4_scaler;
    Double_t H_1MHz_scaler, H_BCM4A_scaler;
    treeT->SetBranchAddress("T.hms.hEDTM_tdcTime",&T_hms_hEDTM_tdcTime);
    treeT->SetBranchAddress("H.EDTM.scaler",&H_EDTM_scaler);
    treeT->SetBranchAddress("H.BCM4A.scaler",&H_BCM4A_scaler);
    treeT->SetBranchAddress("H.BCM4A.scalerRate",&H_BCM4A_scalerRate);
    treeT->SetBranchAddress("H.BCM4A.scalerCurrent",&H_BCM4A_scalerCurrent);
    treeT->SetBranchAddress("H.hL1ACCP.scaler",&H_hL1ACCP_scaler);
    treeT->SetBranchAddress("H.hTRIG1.scaler",&H_hTRIG1_scaler);
    treeT->SetBranchAddress("H.hTRIG2.scaler",&H_hTRIG2_scaler);
    treeT->SetBranchAddress("H.hTRIG3.scaler",&H_hTRIG3_scaler);
    treeT->SetBranchAddress("H.hTRIG4.scaler",&H_hTRIG4_scaler);
    treeT->SetBranchAddress("H.hTRIG5.scaler",&H_hTRIG5_scaler);
    treeT->SetBranchAddress("H.hTRIG6.scaler",&H_hTRIG6_scaler);
    treeT->SetBranchAddress("H.1MHz.scaler",&H_1MHz_scaler);


    Double_t H_hL1ACCP_scaler_last, H_1MHz_scaler_last, H_BCM4A_scaler_last;
    Double_t H_hTRIG1_scaler_last, H_hTRIG2_scaler_last, H_hTRIG3_scaler_last;
    Double_t H_hTRIG4_scaler_last, H_hTRIG5_scaler_last, H_hTRIG6_scaler_last;
    Double_t time, time_diff; //s

    vector<double> TT, L1ACCP_rate, BCM4A_rate, TI_livetime;
    Double_t L1ACCP_rate_max, L1ACCP_rate_min, L1ACCP_rate_i, BCM4A_rate_max, livetime;
    Double_t current;
    L1ACCP_rate_max = 0.;
    BCM4A_rate_max = 0.;
    

    treeT->GetEntry(0);
    H_hL1ACCP_scaler_last = H_hL1ACCP_scaler;
    H_1MHz_scaler_last = H_1MHz_scaler;
    H_BCM4A_scaler_last = H_BCM4A_scaler;
    H_hTRIG1_scaler_last = H_hTRIG1_scaler;
    H_hTRIG2_scaler_last = H_hTRIG2_scaler;
    H_hTRIG3_scaler_last = H_hTRIG3_scaler;
    H_hTRIG4_scaler_last = H_hTRIG4_scaler;
    H_hTRIG5_scaler_last = H_hTRIG5_scaler;
    H_hTRIG6_scaler_last = H_hTRIG6_scaler;
    
    Long64_t NofEntries_T = treeT->GetEntries();
    for(Long64_t iEntry = 1; iEntry < NofEntries_T; ++iEntry){
        treeT->GetEntry(iEntry);

        if(H_1MHz_scaler-H_1MHz_scaler_last>100.){
            time = H_1MHz_scaler/1000000.;
            time_diff = (H_1MHz_scaler-H_1MHz_scaler_last)/1000000.;
            L1ACCP_rate_i = (H_hL1ACCP_scaler-H_hL1ACCP_scaler_last)/time_diff;
            current = ((H_BCM4A_scaler-H_BCM4A_scaler_last)/time_diff-1605.)/9570.;

            TT.push_back(time/60.);
            L1ACCP_rate.push_back(L1ACCP_rate_i);
            BCM4A_rate.push_back(current);
            if(ps[5]!=-1){
                if(H_hTRIG6_scaler-H_hTRIG6_scaler_last>0.) livetime = (H_hL1ACCP_scaler-H_hL1ACCP_scaler_last)/(H_hTRIG6_scaler-H_hTRIG6_scaler_last)*ps[5];
                else livetime = 1.;
            }
            else if(ps[4]!=-1){
                if(H_hTRIG5_scaler-H_hTRIG5_scaler_last>0.) livetime = (H_hL1ACCP_scaler-H_hL1ACCP_scaler_last)/(H_hTRIG5_scaler-H_hTRIG5_scaler_last)*ps[4];
                else livetime = 1.;
            }
            else if(ps[3]!=-1){
                if(H_hTRIG4_scaler-H_hTRIG4_scaler_last>0.) livetime = (H_hL1ACCP_scaler-H_hL1ACCP_scaler_last)/(H_hTRIG4_scaler-H_hTRIG4_scaler_last)*ps[3];
                else livetime = 1.;
            }
            else if(ps[2]!=-1){
                if(H_hTRIG3_scaler-H_hTRIG3_scaler_last>0.) livetime = (H_hL1ACCP_scaler-H_hL1ACCP_scaler_last)/(H_hTRIG3_scaler-H_hTRIG3_scaler_last)*ps[2];
                else livetime = 1.;
            }
            else if(ps[1]!=-1){
                if(H_hTRIG2_scaler-H_hTRIG2_scaler_last>0.) livetime = (H_hL1ACCP_scaler-H_hL1ACCP_scaler_last)/(H_hTRIG2_scaler-H_hTRIG2_scaler_last)*ps[1];
                else livetime = 1.;
            }
            else if(ps[0]!=-1){
                if(H_hTRIG1_scaler-H_hTRIG1_scaler_last>0.) livetime = (H_hL1ACCP_scaler-H_hL1ACCP_scaler_last)/(H_hTRIG1_scaler-H_hTRIG1_scaler_last)*ps[0];
                else livetime = 1.;
            }
            else livetime = 0.;
            TI_livetime.push_back(livetime);

            if(L1ACCP_rate_i > L1ACCP_rate_max && time/60.>1) L1ACCP_rate_max = L1ACCP_rate_i;
            if(current > BCM4A_rate_max) BCM4A_rate_max = current;
            
        }

        H_hL1ACCP_scaler_last = H_hL1ACCP_scaler;
        H_1MHz_scaler_last = H_1MHz_scaler;
        H_BCM4A_scaler_last = H_BCM4A_scaler;
        H_hTRIG1_scaler_last = H_hTRIG1_scaler;
        H_hTRIG2_scaler_last = H_hTRIG2_scaler;
        H_hTRIG3_scaler_last = H_hTRIG3_scaler;
        H_hTRIG4_scaler_last = H_hTRIG4_scaler;
        H_hTRIG5_scaler_last = H_hTRIG5_scaler;
        H_hTRIG6_scaler_last = H_hTRIG6_scaler;
    }

    // -------------------------------- TSHelH Tree --------------------------------
    TTree *treeTSHelH = (TTree *)file->Get("TSHelH");
    treeTSHelH->SetBranchStatus("*",false);
    treeTSHelH->SetBranchStatus("actualHelicity",true);
    treeTSHelH->SetBranchStatus("quartetPhase",true);
    treeTSHelH->SetBranchStatus("H.1MHz_Hel.scaler",true);
    treeTSHelH->SetBranchStatus("evNumber",true);
    treeTSHelH->SetBranchStatus("H.BCM4A_Hel.scaler*",true);

    Double_t ActualHel, QuartetPhase, H_1MHz_Hel_scaler, EventNo;
    Double_t H_BCM4A_Hel_scaler, H_BCM4A_Hel_scalerCurrent, H_BCM4A_Hel_scalerCharge, H_BCM4A_Hel_scalerRate;
    treeTSHelH->SetBranchAddress("actualHelicity",&ActualHel);
    treeTSHelH->SetBranchAddress("quartetPhase",&QuartetPhase);
    treeTSHelH->SetBranchAddress("H.1MHz_Hel.scaler",&H_1MHz_Hel_scaler);
    treeTSHelH->SetBranchAddress("evNumber",&EventNo);
    treeTSHelH->SetBranchAddress("H.BCM4A_Hel.scaler",&H_BCM4A_Hel_scaler);
    treeTSHelH->SetBranchAddress("H.BCM4A_Hel.scalerCurrent",&H_BCM4A_Hel_scalerCurrent);
    treeTSHelH->SetBranchAddress("H.BCM4A_Hel.scalerCharge",&H_BCM4A_Hel_scalerCharge);
    treeTSHelH->SetBranchAddress("H.BCM4A_Hel.scalerRate",&H_BCM4A_Hel_scalerRate);
    // treeTSHelH->SetBranchAddress("",&);

    vector<double> Charge_Asymmetry;
    Double_t Asymmetry, Asymmetry_Total, Asymmetry_max;
    Asymmetry_max = 0.;
    Int_t QuartetPhase_Flag;
    Long64_t NofEntries_TSHelH = treeTSHelH->GetEntries();
    for(Long64_t iEntry = 1; iEntry < NofEntries_TSHelH; ++iEntry){
        treeTSHelH->GetEntry(iEntry);

        if(fabs(ActualHel)>0.1 && QuartetPhase<0.5){
            QuartetPhase_Flag = 0;
            Asymmetry = 0.;
            Asymmetry_Total = 0.;
            Asymmetry += ActualHel*(H_BCM4A_Hel_scalerRate-1605.)/9570.;
            Asymmetry_Total += (H_BCM4A_Hel_scalerRate-1605.)/9570.;
        }
        if(fabs(ActualHel)>0.1 && QuartetPhase>0.5 && QuartetPhase<1.5 && QuartetPhase_Flag == 0){
            QuartetPhase_Flag = 1;
            Asymmetry += ActualHel*(H_BCM4A_Hel_scalerRate-1605.)/9570.;
            Asymmetry_Total += (H_BCM4A_Hel_scalerRate-1605.)/9570.;
        }
        if(fabs(ActualHel)>0.1 && QuartetPhase>1.5 && QuartetPhase<2.5 && QuartetPhase_Flag == 1){
            QuartetPhase_Flag = 2;
            Asymmetry += ActualHel*(H_BCM4A_Hel_scalerRate-1605.)/9570.;
            Asymmetry_Total += (H_BCM4A_Hel_scalerRate-1605.)/9570.;
        }
        if(fabs(ActualHel)>0.1 && QuartetPhase>2.5 && QuartetPhase<3.5 && QuartetPhase_Flag == 2){
            QuartetPhase_Flag = 3;
            Asymmetry += ActualHel*(H_BCM4A_Hel_scalerRate-1605.)/9570.;
            Asymmetry_Total += (H_BCM4A_Hel_scalerRate-1605.)/9570.;

            Asymmetry = Asymmetry/Asymmetry_Total*1000000; // ppm
            Charge_Asymmetry.push_back(Asymmetry);
            if(Asymmetry>Asymmetry_max) Asymmetry_max = Asymmetry;
            // cout<<EventNo<<"\t"<<QuartetPhase<<"\t"<<Asymmetry<<endl;
        }
        // cout<<EventNo<<"\t"<<QuartetPhase<<"\t"<<ActualHel<<"\t"<<(H_BCM4A_Hel_scalerRate-1605.)/9570.<<"\t"<<H_BCM4A_Hel_scalerCurrent<<endl;
    }


    // -------------------------------- Make Plots and Save to root file --------------------------------
    TH2D* h_L1ACCP_rate = new TH2D("h_L1ACCP_rate","L1ACCP Rate;Time / min;Rate / Hz",100,0,time/60.,100,0,L1ACCP_rate_max);
    h_L1ACCP_rate->SetDrawOption("SCAT");
    h_L1ACCP_rate->SetStats(0);
    h_L1ACCP_rate->SetMarkerStyle(29);
    for(int i=0;i<TT.size();i++) h_L1ACCP_rate->Fill(TT[i],L1ACCP_rate[i]);

    TH2D* h_BCM4A_rate = new TH2D("h_BCM4A_rate","BCM4A Rate;Time / min;Current / #muA",100,0,time/60.,100,0,BCM4A_rate_max+2);
    h_BCM4A_rate->SetDrawOption("SCAT");
    h_BCM4A_rate->SetStats(0);
    h_BCM4A_rate->SetMarkerStyle(29);
    for(int i=0;i<TT.size();i++) h_BCM4A_rate->Fill(TT[i],BCM4A_rate[i]);

    TH2D* h_TI_Livetime;
    if(ps[5]!=-1){
        h_TI_Livetime = new TH2D("h_TI_Livetime","TI Livetime (L1ACCP/TRIG6*PS6);Time / min;Live Time",100,0,time/60.,100,0,1.1);
    }
    else if(ps[4]!=-1){
        h_TI_Livetime = new TH2D("h_TI_Livetime","TI Livetime (L1ACCP/TRIG5*PS5);Time / min;Live Time",100,0,time/60.,100,0,1.1);
    }
    else if(ps[3]!=-1){
        h_TI_Livetime = new TH2D("h_TI_Livetime","TI Livetime (L1ACCP/TRIG4*PS4);Time / min;Live Time",100,0,time/60.,100,0,1.1);
    }
    else if(ps[2]!=-1){
        h_TI_Livetime = new TH2D("h_TI_Livetime","TI Livetime (L1ACCP/TRIG3*PS3);Time / min;Live Time",100,0,time/60.,100,0,1.1);
    }
    else if(ps[1]!=-1){
        h_TI_Livetime = new TH2D("h_TI_Livetime","TI Livetime (L1ACCP/TRIG2*PS2);Time / min;Live Time",100,0,time/60.,100,0,1.1);
    }
    else if(ps[0]!=-1){
        h_TI_Livetime = new TH2D("h_TI_Livetime","TI Livetime (L1ACCP/TRIG1*PS1);Time / min;Live Time",100,0,time/60.,100,0,1.1);
    }
    else h_TI_Livetime = new TH2D("h_TI_Livetime","TI Livetime (Error Occured);Time / min;Live Time",100,0,time/60.,100,0,1.1);
    h_TI_Livetime->SetDrawOption("SCAT");
    h_TI_Livetime->SetStats(0);
    h_TI_Livetime->SetMarkerStyle(29);
    for(int i=0;i<TT.size();i++) h_TI_Livetime->Fill(TT[i],TI_livetime[i]);

    TH1D* h_Charge_Asymmetry = new TH1D("h_Charge_Asymmetry","Charge Asymmetry Hall C BCM4A;Charge Asymmetry / ppm;Counts",1000,-Asymmetry_max*1.1,Asymmetry_max*1.1);
    for(int i=0;i<Charge_Asymmetry.size();i++) h_Charge_Asymmetry->Fill(Charge_Asymmetry[i]);

    // TCanvas* c1 = new TCanvas("c1","c1",1200,800);
    // c1->SetLogy();
    // h_L1ACCP_rate->Draw();
    // h_BCM4A_rate->Draw();
    // h_TI_Livetime->Draw();
    // h_Charge_Asymmetry->Draw();
    // c1->SaveAs("macros/NPS/L1ACCP_Rate.pdf");

    // TFile *rootFile = new TFile("macros/NPS/output.root", "RECREATE");
    TFile *rootFile = new TFile(Form("../../ROOTfiles/COIN/PRODUCTION/nps_hms_coin_%d_latest.root",RunNo), "UPDATE");
    
    h_L1ACCP_rate->SetOption("SCAT");
    h_BCM4A_rate->SetOption("SCAT");
    h_TI_Livetime->SetOption("SCAT");

    h_L1ACCP_rate->Write("L1ACCP_Rate");
    h_BCM4A_rate->Write("BCM4A_rate");
    h_TI_Livetime->Write("TI_Livetime");
    h_Charge_Asymmetry->Write("Charge_Asymmetry");
    rootFile->Close();
    delete rootFile;

    file->Close();
    
}
