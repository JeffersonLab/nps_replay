\#include <TFile.h>
#include <TTree.h>
#include <TString.h>
#include <iostream>
#include <fstream>
#include <TH2D.h>
#include <TGraph.h>
#include <TCanvas.h>

using namespace std;

void Make_scaler_plots(Int_t RunNo){
    TString FilePath_PS = "REPORT_OUTPUT/COIN/HMSONLY/";
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

    TString FilePath = "ROOTfiles/NPS/SCALERS/";
    TString Input_File = FilePath + Form("nps_replay_scalers_%d_1_-1.root",RunNo);
    TFile *file = new TFile(Input_File , "READ");

    TTree *treeT = (TTree *)file->Get("T");
    treeT->SetBranchStatus("*",false);
    treeT->SetBranchStatus("T.hms.hEDTM_tdcTime",true);
    treeT->SetBranchStatus("H.EDTM.scaler",true);
    // treeT->SetBranchStatus("H.BCM4A.scaler",true);
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
    // treeT->SetBranchAddress("H.BCM4A.scaler",&H_BCM4A_scaler);
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
    Double_t time; //s

    vector<double> TT, L1ACCP_rate, BCM4A_rate;
    Double_t L1ACCP_rate_max, L1ACCP_rate_min, L1ACCP_rate_i, BCM4A_rate_max;
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
            L1ACCP_rate_i = (H_hL1ACCP_scaler-H_hL1ACCP_scaler_last)/time;
            current = ((H_BCM4A_scaler-H_BCM4A_scaler_last)/time+1605.)/9570.;

            TT.push_back(time/60.);
            L1ACCP_rate.push_back(L1ACCP_rate_i);
            BCM4A_rate.push_back(current);

            cout<<time/60.<<"\t"<<L1ACCP_rate_i<<"\t"<<H_hL1ACCP_scaler<<endl;
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

    TH2D* h_L1ACCP_rate = new TH2D("h_L1ACCP_rate","L1ACCP Rate;Time / min;Rate / Hz",100,0,time/60.,100,0,L1ACCP_rate_max);
    h_L1ACCP_rate->SetDrawOption("SCAT");
    h_L1ACCP_rate->SetStats(0);
    h_L1ACCP_rate->SetMarkerStyle(29);
    for(int i=0;i<TT.size();i++) h_L1ACCP_rate->Fill(TT[i],L1ACCP_rate[i]);

    TH2D* h_BCM4A_rate = new TH2D("h_BCM4A_rate","BCM4A Rate;Time / min;Current / #muA",100,0,time/60.,100,0,BCM4A_rate_max);
    h_BCM4A_rate->SetDrawOption("SCAT");
    h_BCM4A_rate->SetStats(0);
    h_BCM4A_rate->SetMarkerStyle(29);
    for(int i=0;i<TT.size();i++) h_BCM4A_rate->Fill(TT[i],BCM4A_rate[i]);

    TCanvas* c1 = new TCanvas("c1","c1",1200,800);
    h_BCM4A_rate->Draw();
    c1->SaveAs("macros/NPS/L1ACCP_Rate.pdf");

    TFile *rootFile = new TFile("macros/NPS/output.root", "RECREATE");
    // TFile *rootFile = new TFile("output.root", "UPDATE");
    h_L1ACCP_rate->Write("L1ACCP_Rate");
    h_BCM4A_rate->Write("BCM4A_rate");
    rootFile->Close();
    delete rootFile;

    file->Close();


    // Double_t NoEDTM_Events = 0.;
    // Double_t NoEDTM_Events_high_Current = 0.;
    // Double_t NoEDTM_LowCurrent = 0.;
    // Int_t Current_high_Flag = 1;
    // Double_t EDTM_scaler_highCurrent;
    // Double_t NofhL1ACCP, NofhTRIG5, NofhTRIG6, NofhTRIG3;
    // Double_t NofhL1ACCP_highCurrent, NofhTRIG5_highCurrent, NofhTRIG6_highCurrent, NofhTRIG3_highCurrent;
    // Double_t NofhL1ACCP_LowCurrent = 0.;
    // Double_t NofhTRIG5_LowCurrent = 0.;
    // Double_t NofhTRIG6_LowCurrent = 0.;
    // Double_t NofhTRIG3_LowCurrent = 0.;
    // treeT->GetEntry(0);
    // EDTM_scaler_highCurrent = H_EDTM_scaler;
    // NofhL1ACCP_highCurrent = H_hL1ACCP_scaler;
    // NofhTRIG5_highCurrent = H_hTRIG5_scaler;
    // NofhTRIG6_highCurrent = H_hTRIG6_scaler;
    // NofhTRIG3_highCurrent = H_hTRIG3_scaler;
    // for(Long64_t iEntry = 0; iEntry < NofEntries_T; ++iEntry){
    //     treeT->GetEntry(iEntry);

    //     if(T_hms_hEDTM_tdcTime>1.) NoEDTM_Events++;

    //     if(H_BCM4A_scalerCurrent>2.){
    //         if(Current_high_Flag==0){
    //             NoEDTM_LowCurrent += H_EDTM_scaler-EDTM_scaler_highCurrent;
    //             NofhL1ACCP_LowCurrent += H_hL1ACCP_scaler-NofhL1ACCP_highCurrent;
    //             NofhTRIG5_LowCurrent += H_hTRIG5_scaler-NofhTRIG5_highCurrent;
    //             NofhTRIG6_LowCurrent += H_hTRIG6_scaler-NofhTRIG6_highCurrent;
	// 	NofhTRIG3_LowCurrent += H_hTRIG3_scaler-NofhTRIG3_highCurrent;
    //         }
    //         if(T_hms_hEDTM_tdcTime>1.) NoEDTM_Events_high_Current++;
    //         EDTM_scaler_highCurrent = H_EDTM_scaler;
    //         NofhL1ACCP_highCurrent = H_hL1ACCP_scaler;
    //         NofhTRIG5_highCurrent = H_hTRIG5_scaler;
    //         NofhTRIG6_highCurrent = H_hTRIG6_scaler;
	//     NofhTRIG3_highCurrent = H_hTRIG3_scaler;
    //         Current_high_Flag = 1;
    //     }
    //     else{
    //         Current_high_Flag = 0;
    //     }

    // }
    // NoEDTM_LowCurrent += H_EDTM_scaler-EDTM_scaler_highCurrent;
    // NofhL1ACCP_LowCurrent += H_hL1ACCP_scaler-NofhL1ACCP_highCurrent;
    // NofhTRIG5_LowCurrent += H_hTRIG5_scaler-NofhTRIG5_highCurrent;
    // NofhTRIG6_LowCurrent += H_hTRIG6_scaler-NofhTRIG6_highCurrent;
    // NofhTRIG3_LowCurrent += H_hTRIG3_scaler-NofhTRIG3_highCurrent;

    // Double_t EDTM_Total = H_EDTM_scaler - NoEDTM_LowCurrent;
    // Double_t EDTM_Event_high_Current = NoEDTM_Events_high_Current;
    // NofhL1ACCP = H_hL1ACCP_scaler - NofhL1ACCP_LowCurrent;
    // NofhTRIG5 = H_hTRIG5_scaler - NofhTRIG5_LowCurrent;
    // NofhTRIG6 = H_hTRIG6_scaler - NofhTRIG6_LowCurrent;
    // NofhTRIG3 = H_hTRIG3_scaler - NofhTRIG3_LowCurrent;

    // cout<<endl;
    // cout<<endl;
    // cout<<"-----------------------------EDTM Live Time Results------------------------------"<<endl;
    // cout<<endl;
    // cout<<"----------------------------Results for the whole run----------------------------"<<endl;
    // cout<<"Total EDTM signals during the run: "<<H_EDTM_scaler<<endl;
    // cout<<"EDTM events in the root file: "<<NoEDTM_Events<<endl;
    // cout<<"Electronics live time: "<<NoEDTM_Events/H_EDTM_scaler<<endl;
    // cout<<endl;
    // cout<<"----------------------------Results for current>2uA------------------------------"<<endl;
    // cout<<"Total EDTM signals during the run: "<<EDTM_Total<<endl;
    // cout<<"EDTM events in the root file: "<<EDTM_Event_high_Current<<endl;
    // cout<<"Electronics live time: "<<EDTM_Event_high_Current/EDTM_Total<<endl;
    // cout<<endl;
    // cout<<endl;
    // cout<<"-------------------------------TI Live Time Results------------------------------"<<endl;
    // cout<<"\t ps1 = "<<Ps[0]<<", ps2 = "<<Ps[1]<<", ps3 = "<<Ps[2]<<", ps4 = "<<Ps[3]<<", ps5 = "<<Ps[4]<<", ps6 = "<<Ps[5]<<endl;
    // cout<<endl;
    // cout<<"L1ACCP/TRIG5(after ps) and L1ACCP/TRIG6(after ps) will be printed out only when the ps!=-1."<<endl;
    // cout<<endl;
    // cout<<"----------------------------Results for the whole run----------------------------"<<endl;
    // cout<<"Total L1ACCP during the run: "<<H_hL1ACCP_scaler<<endl;
    // cout<<"Total TRIG5 during the run: "<<H_hTRIG5_scaler<<endl;
    // cout<<"Total TRIG6 during the run: "<<H_hTRIG6_scaler<<endl;
    // cout<<"Total TRIG3 during the run: "<<H_hTRIG3_scaler<<endl;
    // if(ps[4]!=-1) cout<<"L1ACCP/TRIG5(after ps): "<<H_hL1ACCP_scaler/H_hTRIG5_scaler*ps[4]<<endl;
    // if(ps[5]!=-1) cout<<"L1ACCP/TRIG6(after ps): "<<H_hL1ACCP_scaler/H_hTRIG6_scaler*ps[5]<<endl;
    // if(ps[2]!=-1) cout<<"L1ACCP/TRIG3(after ps): "<<H_hL1ACCP_scaler/H_hTRIG3_scaler*ps[2]<<endl;
    // cout<<endl;
    // cout<<"----------------------------Results for current>2uA------------------------------"<<endl;
    // cout<<"Total L1ACCP during the run: "<<NofhL1ACCP<<endl;
    // cout<<"Total TRIG5 during the run: "<<NofhTRIG5<<endl;
    // cout<<"Total TRIG6 during the run: "<<NofhTRIG6<<endl;
    // cout<<"Total TRIG3 during the run: "<<NofhTRIG3<<endl;
    // if(ps[4]!=-1) cout<<"L1ACCP/TRIG5(after ps): "<<NofhL1ACCP/NofhTRIG5*ps[4]<<endl;
    // if(ps[5]!=-1) cout<<"L1ACCP/TRIG6(after ps): "<<NofhL1ACCP/NofhTRIG6*ps[5]<<endl;
    // if(ps[2]!=-1) cout<<"L1ACCP/TRIG3(after ps): "<<NofhL1ACCP/NofhTRIG3*ps[2]<<endl;
    // cout<<endl;
    // cout<<endl;
    
}
