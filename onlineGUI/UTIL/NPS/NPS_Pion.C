void NPS_Pion(){
	TH1F* H1;
	TF1* F1;

	 H1 = (TH1F*) gDirectory->Get("Pion_Invariant_Mass");
	 TF1 * fit = new TF1("fit","gaus",0.0967,0.126);
	 fit->SetParameters(1,1,1);
	 fit->SetLineColor(6);
	 fit->SetParNames("Normalization","Mean","Sigma");
	 gStyle->SetOptFit(1011);
	 H1->Fit(fit,"R");
	 H1->Draw();
}