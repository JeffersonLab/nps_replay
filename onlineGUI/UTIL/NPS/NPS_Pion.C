void NPS_Pion(int opt){
	TH1F* H1;
	TH1F* H2;
	TH1F* H3;
	
	 H1 = (TH1F*) gDirectory->Get("Pion_Invariant_Mass");
	 H2 = (TH1F*) gDirectory->Get("missing_mass_square");
	 H3 = (TH1F*) gDirectory->Get("pi0_energy");

	 if (opt == 1){
	 TF1 * fit = new TF1("fit","gaus",0.0967,0.126);
	 fit->SetParameters(1,1,1);
	 fit->SetLineColor(6);
	 fit->SetParNames("Normalization","Mean","Sigma");
	 gStyle->SetOptFit(1011);
	 H1->Fit(fit,"R");
	 H1->Draw();
	 }
	 if(opt == 2){
		H2->Draw();
	 }
	 if(opt == 3){
		H3->Draw();
	 }

	 
}