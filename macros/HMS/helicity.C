#include <cmath>

void helicity( Int_t nrun=20990, Int_t nevent = -1) {
    // if full replay : fullreplay = 1;
    // if single event: nevent = event number, replay = 1, fullreplay != 1;
    // if 20k replay: replay = 20k, fullreplay != 1;
    gStyle->SetOptStat(0);
    // --------------------------------------------------------------------------------
    
    TChain *t;
    TChain *heltree;
    TFile *f;
        //if (nevent == 50000){
         //f= new TFile(Form("../../ROOTfiles/COIN/50k/nps_hms_coin_%i_latest.root",nrun),"UPDATE");
        //}
        //else{
         f= new TFile(Form("../../ROOTfiles/HMS/hms50k/hms_replay_production_%i_latest.root",nrun),"UPDATE");
        //}
    t = new TChain("T");
    heltree = new TChain("TSHelH");
    t->Add(f->GetName(),-1);
    heltree->Add(f->GetName(),-1);
    t->SetBranchStatus("*",false);
    heltree->SetBranchStatus("*",false);
    t->SetBranchStatus("T.helicity.hel",true);
    t->SetBranchStatus("T.helicity.helpred",true);
    t->SetBranchStatus("T.helicity.helrep",true);
    heltree->SetBranchStatus("evNumber",true);
    heltree->SetBranchStatus("actualHelicity",true);
    
    
    // Branch declaration -------------------------------------------------------------
    
    Double_t hel;
    t->SetBranchAddress("T.helicity.hel",&hel);
    Double_t helpred;
    t->SetBranchAddress("T.helicity.helpred",&helpred);
    Double_t helrep;
    t->SetBranchAddress("T.helicity.helrep",&helrep);
    Double_t evNum;
    heltree->SetBranchAddress("evNumber",&evNum);
    Double_t actualHel;
    heltree->SetBranchAddress("actualHelicity",&actualHel);
    
    //Histogram------------------------------------------------------------------------
    TH1D *h_hel = new TH1D("h_hel","T.helicity.hel",100,-1.5,1.5);
    TH1D *h_hel_diff = new TH1D("h_hel_diff","helpred - helrep",100,-2.5,2.5);
    TH1D *h_hel_actual = new TH1D("h_hel_actual","TSHelH.actualhelicity_full",100,-1.5,1.5);
    TH2D *h_hel_vs_ev = new TH2D("h_hel_vs_ev","actual_vs_evNum_full",100,0,10000,10,-1.5,1.5);

    //Filling Histogram
    int nentries;
    int nentries1;
    //if (nevent == -1){
        nentries = t->GetEntries();
        nentries1 = heltree->GetEntries();
    //}
    //else{
        //nentries = nevent;
      //  nentries1 = heltree->GetEntries();
    //}

    for(Int_t i=0; i<nentries; i++){
        t->GetEntry(i);
        h_hel->Fill(hel);
        h_hel_diff->Fill(helpred - helrep);
    }

    for(Int_t i=0; i<nentries1; i++){
        heltree->GetEntry(i);
        h_hel_actual->Fill(actualHel);
        h_hel_vs_ev->Fill(evNum,actualHel);
    }
    /*TCanvas *c1 = new TCanvas("","",800,600);
    c1->Divide(2,2);
    c1->cd(1);
    h_hel->Draw();
    c1->cd(2);
    h_hel_diff->Draw();
    c1->cd(3);
    h_hel_actual->Draw();
    c1->cd(4);
    h_hel_vs_ev->Draw("colz");*/

    f->WriteTObject(h_hel, "h_hel");
    f->WriteTObject(h_hel_diff,"h_hel_diff");
    f->WriteTObject(h_hel_actual,"h_hel_actual");
    f->WriteTObject(h_hel_vs_ev,"h_hel_vs_ev");
    f->Close();
    }

/*Event number is 2Block number is 47Pulse number is 4
Event number is 45Block number is 63Pulse number is 4
Event number is 47Block number is 8Pulse number is 4
Event number is 55Block number is 0Pulse number is 4
Event number is 68Block number is 27Pulse number is 4
Event number is 76Block number is 18Pulse number is 4
Event number is 118Block number is 61Pulse number is 4
Event number is 159Block number is 87Pulse number is 4
Event number is 160Block number is 61Pulse number is 4
Event number is 218Block number is 54Pulse number is 4
Event number is 227Block number is 18Pulse number is 4
Event number is 241Block number is 61Pulse number is 4
Event number is 267Block number is 87Pulse number is 4
Event number is 327Block number is 18Pulse number is 4
Event number is 491Block number is 60Pulse number is 4
Event number is 502Block number is 61Pulse number is 4
Event number is 545Block number is 18Pulse number is 4
Event number is 554Block number is 18Pulse number is 4
Event number is 578Block number is 87Pulse number is 4
Event number is 598Block number is 99Pulse number is 4
Event number is 605Block number is 18Pulse number is 4
Event number is 646Block number is 89Pulse number is 4
Event number is 672Block number is 52Pulse number is 4
Event number is 673Block number is 61Pulse number is 4
Event number is 692Block number is 58Pulse number is 4
Event number is 724Block number is 58Pulse number is 4
Event number is 731Block number is 87Pulse number is 4
Event number is 846Block number is 58Pulse number is 4
Event number is 919Block number is 52Pulse number is 4
Event number is 931Block number is 87Pulse number is 4
Event number is 965Block number is 87Pulse number is 4
Event number is 970Block number is 27Pulse number is 4
Event number is 990Block number is 18Pulse number is 4
Event number is 1082Block number is 85Pulse number is 4
Event number is 1107Block number is 196Pulse number is 4
Event number is 1128Block number is 58Pulse number is 4
Event number is 1130Block number is 61Pulse number is 4
Event number is 1135Block number is 87Pulse number is 4
Event number is 1230Block number is 101Pulse number is 4
Event number is 1234Block number is 18Pulse number is 4
Event number is 1291Block number is 61Pulse number is 4
Event number is 1340Block number is 61Pulse number is 4
Event number is 1358Block number is 61Pulse number is 4
Event number is 1365Block number is 196Pulse number is 4
Event number is 1431Block number is 196Pulse number is 4
Event number is 1462Block number is 87Pulse number is 4
Event number is 1486Block number is 60Pulse number is 4*/



//GOOD PULSE NUMBER
// NO 2 pulses event if apply strict timing cut

