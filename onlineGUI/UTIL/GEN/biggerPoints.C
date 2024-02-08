void biggerPoints(TString hist1name){
  gStyle->SetOptStat(0);
  TH1F* H1;
  
  H1 = (TH1F*) gDirectory->Get(hist1name);

  H1->SetMarkerStyle(21);
  H1->SetMarkerSize(1.5);

  H1->Draw();
}
