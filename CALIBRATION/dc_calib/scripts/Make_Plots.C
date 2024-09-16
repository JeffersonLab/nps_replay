#include "../../../onlineGUI/UTIL/GEN/overlay2.C"

void Make_Plots_Nocuts(Int_t RunNo);
void Make_Plots_elec(Int_t RunNo);
void overlay2(TH1F* H1, TH1F* H2, TString label1="", TString label2="", TString htitle="", Bool_t golden=false,TString samestr="");

void Make_Plots(Int_t RunNo){
    // Make_Plots_Nocuts(RunNo);
    Make_Plots_elec(RunNo);
}

void Make_Plots_Nocuts(Int_t RunNo){
    // TFile* file = TFile::Open(Form("../../../ROOTfiles/COIN/PRODUCTION/nps_hms_coin_%d_1_50000.root",RunNo));
    // TFile* file = TFile::Open(Form("../../../ROOTfiles/COIN/50k/nps_hms_coin_%d_1_50000.root",RunNo));
    TFile* file = TFile::Open(Form("../../../ROOTfiles/COIN/SKIM/nps_hms_skim_%d_1_50000.root",RunNo));
    if (!file || file->IsZombie()) {
        std::cerr << "Can't open root file. " << std::endl;
        delete file;
        return;
    }

    TString Output_Name_begin = Form("Plots/DC_Plots_%d.pdf[",RunNo);
    TString Output_Name = Form("Plots/DC_Plots_%d.pdf",RunNo);
    TString Output_Name_end = Form("Plots/DC_Plots_%d.pdf]",RunNo);
    TCanvas* output_canvas = new TCanvas("output_canvas", "", 1200,1600);
    output_canvas->Print(Output_Name_begin);

    TLatex label;

    TCanvas* c_hits = new TCanvas(Form("c_hits_%d",RunNo),"c_hits",1200,1600);
    c_hits->Divide(2,3);
    c_hits->cd(1);
    overlay2("hdc1u1_rawwirenum","hdc2v1_rawwirenum","1U1","2V1");
    c_hits->cd(2);
    overlay2("hdc1u2_rawwirenum","hdc2v2_rawwirenum","1U2","2V2");
    c_hits->cd(3);
    overlay2("hdc1x1_rawwirenum","hdc2x1_rawwirenum","1X1","2X1");
    c_hits->cd(4);
    overlay2("hdc1x2_rawwirenum","hdc2x2_rawwirenum","1X2","2X2");
    c_hits->cd(5);
    overlay2("hdc1v1_rawwirenum","hdc2u1_rawwirenum","1V1","2U1");
    c_hits->cd(6);
    overlay2("hdc1v2_rawwirenum","hdc2u2_rawwirenum","1V2","2U2");
    // c_hits->SaveAs("Plots/test.pdf");
    c_hits->cd();
    TString Print_info = Form("HMS Drift Chamber Wire Maps All Hits (Run %d)",RunNo);
    label.SetNDC();
    label.SetTextSize(0.02);
    label.DrawLatex(0.01, 0.98, Print_info);
    c_hits->Print(Output_Name);

    TCanvas* c_drift_distance = new TCanvas(Form("c_drift_distance_%d",RunNo),"c_drift_distance",1200,1600);
    c_drift_distance->Divide(2,3);
    c_drift_distance->cd(1);
    overlay2("hdc1u1_ddist","hdc2v1_ddist","1U1","2V1");
    c_drift_distance->cd(2);
    overlay2("hdc1u2_ddist","hdc2v2_ddist","1U2","2V2");
    c_drift_distance->cd(3);
    overlay2("hdc1x1_ddist","hdc2x1_ddist","1X1","2X1");
    c_drift_distance->cd(4);
    overlay2("hdc1x2_ddist","hdc2x2_ddist","1X2","2X2");
    c_drift_distance->cd(5);
    overlay2("hdc1v1_ddist","hdc2u1_ddist","1V1","2U1");
    c_drift_distance->cd(6);
    overlay2("hdc1v2_ddist","hdc2u2_ddist","1V2","2U2");
    c_drift_distance->cd();
    TString Print_info_1 = Form("HMS Drift Chamber Drift Distance (Run %d)",RunNo);
    label.SetNDC();
    label.SetTextSize(0.02);
    label.DrawLatex(0.01, 0.98, Print_info_1);
    c_drift_distance->Print(Output_Name);

    TCanvas* c_drift_time = new TCanvas(Form("c_drift_time_%d",RunNo),"c_drift_time",1200,1600);
    c_drift_time->Divide(2,3);
    c_drift_time->cd(1);
    overlay2("hdc1u1_drifttime","hdc2v1_drifttime","1U1","2V1");
    c_drift_time->cd(2);
    overlay2("hdc1u2_drifttime","hdc2v1_drifttime","1U2","2V2");
    c_drift_time->cd(3);
    overlay2("hdc1x1_drifttime","hdc2x1_drifttime","1X1","2X1");
    c_drift_time->cd(4);
    overlay2("hdc1x2_drifttime","hdc2x2_drifttime","1X2","2X2");
    c_drift_time->cd(5);
    overlay2("hdc1v1_drifttime","hdc2u1_drifttime","1V1","2U1");
    c_drift_time->cd(6);
    overlay2("hdc1v2_drifttime","hdc2u2_drifttime","1V2","2U2");
    c_drift_time->cd(7);
    c_drift_time->cd();
    TString Print_info_2 = Form("HMS Drift Chamber Drift Time (Run %d)",RunNo);
    label.SetNDC();
    label.SetTextSize(0.02);
    label.DrawLatex(0.01, 0.98, Print_info_2);
    c_drift_time->Print(Output_Name);

    output_canvas->Print(Output_Name_end);
    delete output_canvas;
}

void Make_Plots_elec(Int_t RunNo){
    TChain	*ch1 = new TChain("T");
    TString File_Path;
    File_Path = "../../../ROOTfiles/COIN/SKIM/";
    TString FileName = File_Path + Form("nps_hms_skim_%d_1_50000.root",RunNo);

    TFile* inputFile_root = new TFile(FileName, "READ");
    if (!inputFile_root || inputFile_root->IsZombie()) {
        cout<<"Can't open the input root file."<<endl;
        return;
    }

    ch1->Add(FileName);
    ch1->SetBranchStatus("*",false);
    ch1->SetBranchStatus("H.dc.1u1.dist", true);
    ch1->SetBranchStatus("H.dc.1u2.dist", true);
    ch1->SetBranchStatus("H.dc.1x1.dist", true);
    ch1->SetBranchStatus("H.dc.1x2.dist", true);
    ch1->SetBranchStatus("H.dc.1v1.dist", true);
    ch1->SetBranchStatus("H.dc.1v2.dist", true);
    ch1->SetBranchStatus("H.dc.2u2.dist", true);
    ch1->SetBranchStatus("H.dc.2u1.dist", true);
    ch1->SetBranchStatus("H.dc.2x2.dist", true);
    ch1->SetBranchStatus("H.dc.2x1.dist", true);
    ch1->SetBranchStatus("H.dc.2v2.dist", true);
    ch1->SetBranchStatus("H.dc.2v1.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.1u1.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.1u2.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.1x1.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.1x2.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.1v1.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.1v2.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.2u2.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.2u1.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.2x2.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.2x1.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.2v2.dist", true);
    ch1->SetBranchStatus("Ndata.H.dc.2v1.dist", true);
    ch1->SetBranchStatus("H.cal.etotnorm", true);
    ch1->SetBranchStatus("H.cer.npeSum", true);

    Int_t Ndata_H_dc_1u1_dist, Ndata_H_dc_1u2_dist, Ndata_H_dc_1x1_dist, Ndata_H_dc_1x2_dist, Ndata_H_dc_1v1_dist, Ndata_H_dc_1v2_dist;
    Int_t Ndata_H_dc_2u2_dist, Ndata_H_dc_2u1_dist, Ndata_H_dc_2x2_dist, Ndata_H_dc_2x1_dist, Ndata_H_dc_2v2_dist, Ndata_H_dc_2v1_dist;
    Double_t H_cal_etot, H_cer_npeSum;

    const Int_t MaxNofHits = 100;
    Double_t H_dc_1u1_dist[MaxNofHits], H_dc_1u2_dist[MaxNofHits], H_dc_1x1_dist[MaxNofHits], H_dc_1x2_dist[MaxNofHits], H_dc_1v1_dist[MaxNofHits], H_dc_1v2_dist[MaxNofHits];
    Double_t H_dc_2u2_dist[MaxNofHits], H_dc_2u1_dist[MaxNofHits], H_dc_2x2_dist[MaxNofHits], H_dc_2x1_dist[MaxNofHits], H_dc_2v2_dist[MaxNofHits], H_dc_2v1_dist[MaxNofHits];

    ch1->SetBranchAddress("Ndata.H.dc.1u1.dist", &Ndata_H_dc_1u1_dist);
    ch1->SetBranchAddress("Ndata.H.dc.1u2.dist", &Ndata_H_dc_1u2_dist);
    ch1->SetBranchAddress("Ndata.H.dc.1x1.dist", &Ndata_H_dc_1x1_dist);
    ch1->SetBranchAddress("Ndata.H.dc.1x2.dist", &Ndata_H_dc_1x2_dist);
    ch1->SetBranchAddress("Ndata.H.dc.1v1.dist", &Ndata_H_dc_1v1_dist);
    ch1->SetBranchAddress("Ndata.H.dc.1v2.dist", &Ndata_H_dc_1v2_dist);
    ch1->SetBranchAddress("Ndata.H.dc.2u2.dist", &Ndata_H_dc_2u2_dist);
    ch1->SetBranchAddress("Ndata.H.dc.2u1.dist", &Ndata_H_dc_2u1_dist);
    ch1->SetBranchAddress("Ndata.H.dc.2x2.dist", &Ndata_H_dc_2x2_dist);
    ch1->SetBranchAddress("Ndata.H.dc.2x1.dist", &Ndata_H_dc_2x1_dist);
    ch1->SetBranchAddress("Ndata.H.dc.2v2.dist", &Ndata_H_dc_2v2_dist);
    ch1->SetBranchAddress("Ndata.H.dc.2v1.dist", &Ndata_H_dc_2v1_dist);
    ch1->SetBranchAddress("H.dc.1u1.dist", H_dc_1u1_dist);
    ch1->SetBranchAddress("H.dc.1u2.dist", H_dc_1u2_dist);
    ch1->SetBranchAddress("H.dc.1x1.dist", H_dc_1x1_dist);
    ch1->SetBranchAddress("H.dc.1x2.dist", H_dc_1x2_dist);
    ch1->SetBranchAddress("H.dc.1v1.dist", H_dc_1v1_dist);
    ch1->SetBranchAddress("H.dc.1v2.dist", H_dc_1v2_dist);
    ch1->SetBranchAddress("H.dc.2u2.dist", H_dc_2u2_dist);
    ch1->SetBranchAddress("H.dc.2u1.dist", H_dc_2u1_dist);
    ch1->SetBranchAddress("H.dc.2x2.dist", H_dc_2x2_dist);
    ch1->SetBranchAddress("H.dc.2x1.dist", H_dc_2x1_dist);
    ch1->SetBranchAddress("H.dc.2v2.dist", H_dc_2v2_dist);
    ch1->SetBranchAddress("H.dc.2v1.dist", H_dc_2v1_dist);
    ch1->SetBranchAddress("H.cal.etotnorm", &H_cal_etot);
    ch1->SetBranchAddress("H.cer.npeSum", &H_cer_npeSum);

    TH1F* hdc1u1_ddist = new TH1F("hdc1u1_ddist","HMS 1U1 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);
    TH1F* hdc1u2_ddist = new TH1F("hdc1u2_ddist","HMS 1U2 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);
    TH1F* hdc1x1_ddist = new TH1F("hdc1x1_ddist","HMS 1X1 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);
    TH1F* hdc1x2_ddist = new TH1F("hdc1x2_ddist","HMS 1X2 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);
    TH1F* hdc1v1_ddist = new TH1F("hdc1v1_ddist","HMS 1V1 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);
    TH1F* hdc1v2_ddist = new TH1F("hdc1v2_ddist","HMS 1V2 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);

    TH1F* hdc2u2_ddist = new TH1F("hdc2u2_ddist","HMS 2U2 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);
    TH1F* hdc2u1_ddist = new TH1F("hdc2u1_ddist","HMS 2U1 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);
    TH1F* hdc2x2_ddist = new TH1F("hdc2x2_ddist","HMS 2X2 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);
    TH1F* hdc2x1_ddist = new TH1F("hdc2x1_ddist","HMS 2X1 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);
    TH1F* hdc2v2_ddist = new TH1F("hdc2v2_ddist","HMS 2V2 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);
    TH1F* hdc2v1_ddist = new TH1F("hdc2v1_ddist","HMS 2V1 Drift Distance; Drift Distance (cm); Number of Entries",28, -0.1, 0.6);

    Long64_t nentries = ch1->GetEntries();
    Int_t Good_event;
    for(Long64_t i=0; i<nentries; i++){
        ch1->GetEntry(i);

        Good_event = 0;
        if(H_cal_etot>0.1 && H_cer_npeSum>1.0) Good_event = 1;
        if(Good_event == 0) continue;

        for(int i=0;i<Ndata_H_dc_1u1_dist;i++) hdc1u1_ddist->Fill(H_dc_1u1_dist[i]);
        for(int i=0;i<Ndata_H_dc_1u2_dist;i++) hdc1u2_ddist->Fill(H_dc_1u2_dist[i]);
        for(int i=0;i<Ndata_H_dc_1x1_dist;i++) hdc1x1_ddist->Fill(H_dc_1x1_dist[i]);
        for(int i=0;i<Ndata_H_dc_1x2_dist;i++) hdc1x2_ddist->Fill(H_dc_1x2_dist[i]);
        for(int i=0;i<Ndata_H_dc_1v1_dist;i++) hdc1v1_ddist->Fill(H_dc_1v1_dist[i]);
        for(int i=0;i<Ndata_H_dc_1v2_dist;i++) hdc1v2_ddist->Fill(H_dc_1v2_dist[i]);

        for(int i=0;i<Ndata_H_dc_2u2_dist;i++) hdc2u2_ddist->Fill(H_dc_2u2_dist[i]);
        for(int i=0;i<Ndata_H_dc_2u1_dist;i++) hdc2u1_ddist->Fill(H_dc_2u1_dist[i]);
        for(int i=0;i<Ndata_H_dc_2x2_dist;i++) hdc2x2_ddist->Fill(H_dc_2x2_dist[i]);
        for(int i=0;i<Ndata_H_dc_2x1_dist;i++) hdc2x1_ddist->Fill(H_dc_2x1_dist[i]);
        for(int i=0;i<Ndata_H_dc_2v2_dist;i++) hdc2v2_ddist->Fill(H_dc_2v2_dist[i]);
        for(int i=0;i<Ndata_H_dc_2v1_dist;i++) hdc2v1_ddist->Fill(H_dc_2v1_dist[i]);
    }

    TLatex label;

    TCanvas* c_drift_distance = new TCanvas(Form("c_drift_distance_%d",RunNo),"c_drift_distance",1200,1600);
    c_drift_distance->Divide(2,3);
    c_drift_distance->cd(1);
    overlay2(hdc1u1_ddist,hdc2v1_ddist,"1U1","2V1");
    c_drift_distance->cd(2);
    overlay2(hdc1u2_ddist,hdc2v2_ddist,"1U2","2V2");
    c_drift_distance->cd(3);
    overlay2(hdc1x1_ddist,hdc2x1_ddist,"1X1","2X1");
    c_drift_distance->cd(4);
    overlay2(hdc1x2_ddist,hdc2x2_ddist,"1X2","2X2");
    c_drift_distance->cd(5);
    overlay2(hdc1v1_ddist,hdc2u1_ddist,"1V1","2U1");
    c_drift_distance->cd(6);
    overlay2(hdc1v2_ddist,hdc2u2_ddist,"1V2","2U2");
    c_drift_distance->cd();
    TString Print_info_1 = Form("HMS Drift Chamber Drift Distance (Run %d)",RunNo);
    label.SetNDC();
    label.SetTextSize(0.02);
    label.DrawLatex(0.01, 0.98, Print_info_1);
    c_drift_distance->SaveAs(Form("Plots_elec/DC_Plots_elec_%d.pdf",RunNo));

}

void overlay2(TH1F* H1, TH1F* H2, TString label1="", TString label2="", TString htitle="", Bool_t golden=false,TString samestr=""){
  if (H1 && H2) {
    if(golden){
        H1->SetLineColor(30);
        H1->SetFillColor(30);
        H1->SetFillStyle(3027);
        H2->SetLineColor(46);
        H2->SetFillColor(46);
        H2->SetFillStyle(3027);
    } 
    else {
        H1->SetLineColor(4);
        H1->SetLineWidth(2);
        H2->SetLineWidth(2);
        H2->SetLineColor(2);
        H1->SetMinimum(1);
        H2->SetMinimum(1);
        H1->SetStats(0);
        H2->SetStats(0);
        H1->SetTitle(htitle);
        H2->SetTitle(htitle);
        H1->GetXaxis()->SetTitleSize(0.035);
        H1->GetYaxis()->SetTitleSize(0.035);
        H2->GetXaxis()->SetTitleSize(0.035);
        H2->GetYaxis()->SetTitleSize(0.035);
        H1->GetXaxis()->SetLabelSize(0.03);
        H1->GetYaxis()->SetLabelSize(0.03);
        H2->GetXaxis()->SetLabelSize(0.03);
        H2->GetYaxis()->SetLabelSize(0.03);
    }
    
    double xpos = H1->GetXaxis()->GetBinCenter(H1->GetXaxis()->GetFirst()+4);
    double ypos = 0.95*H1->GetMaximum();

    TText* t1 = new TText(xpos,0.4*ypos,label1);
    t1->SetTextColor(4);
    TText* t2 = new TText(xpos,0.5*ypos,label2);
    t2->SetTextColor(2);
    
    if(golden){
        if(!samestr.Contains("sames")) samestr += "sames";
        H1->Draw(samestr);
        H2->Draw(samestr);
    } 
    else {
        if(!golden && !samestr.Contains("sames")){
            // pick which hist to draw first:
            if(H1->GetMaximum() > H2->GetMaximum()){
                H1->Draw(samestr);
                if(!samestr.Contains("sames")) samestr += "sames";
                H2->Draw(samestr);
                t1->Draw();
                t2->Draw();
            } 
            else {
                H2->Draw(samestr);
                if(!samestr.Contains("sames")) samestr += "sames";
                H1->Draw(samestr);
                t1->Draw();
                t2->Draw();
            }
        } 
        else {
            H1->Draw(samestr);
            if(!samestr.Contains("sames")) samestr += "sames";
            H2->Draw(samestr);
            t1->Draw();
            t2->Draw();

            H2->GetXaxis()->SetTitleOffset(.55);
            H2->GetXaxis()->SetTitleSize(0.075);
            H2->GetYaxis()->SetTitleOffset(.75);
            H2->GetYaxis()->SetTitleSize(0.075);
        }
    }
  }
}