#include "../../../onlineGUI/UTIL/GEN/overlay2.C"

void Make_Plots(Int_t RunNo){
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
