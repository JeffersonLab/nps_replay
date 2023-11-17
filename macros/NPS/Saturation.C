void Saturation(int runnum = 2483){

	gROOT->SetBatch(kTRUE);

	TString rootfilepattern ="../../ROOTfiles/COIN/PRODUCTION/nps_hms_coin_%d_latest.root";

    //convert run from string to int
	TString rootfile = Form(rootfilepattern,runnum);
	//open root file
	TFile *f1 = new TFile(rootfile,"UPDATE");
    if (f1->IsOpen()!=1){
	cout << "Missing ROOTfiles" << " For run " << runnum << endl;
    return;
	}
	//open T Tree
	TTree *t1 = (TTree*) f1->Get("T");
	if (!t1) cout << "Missing T Tree from run " << runnum << endl;

	Int_t nblocks = 1080;

    Double_t adcSampPulseAmp[nblocks];
    Double_t adcCounter[nblocks];
    Double_t adcSampPulsePed[nblocks];
	Double_t adcSampPulseTime[nblocks];
	Double_t adcSampPulseInt[nblocks];
    Int_t  NdataadcCounter;
	Double_t adcSampWaveform[200000] = {};
	Int_t NdataadcSampWaveform;

	t1->SetBranchStatus("*",false);
	t1->SetBranchStatus("Ndata.NPS.cal.fly.adcCounter",true);
	t1->SetBranchStatus("NPS.cal.fly.adcCounter",true);
	t1->SetBranchStatus("NPS.cal.fly.adcSampPulseTime",true);
	t1->SetBranchStatus("NPS.cal.fly.adcSampPulseAmpRaw",true);
	t1->SetBranchStatus("NPS.cal.fly.adcSampPed",true);
	t1->SetBranchStatus("NPS.cal.fly.adcSampPulseInt",true);
	t1->SetBranchStatus("NPS.cal.fly.adcSampWaveform",true);
	t1->SetBranchStatus("Ndata.NPS.cal.fly.adcSampWaveform",true);
    t1->SetBranchAddress("NPS.cal.fly.adcSampPulseAmpRaw",&adcSampPulseAmp);
    t1->SetBranchAddress("Ndata.NPS.cal.fly.adcCounter",&NdataadcCounter);
    t1->SetBranchAddress("NPS.cal.fly.adcCounter",&adcCounter);
    t1->SetBranchAddress("NPS.cal.fly.adcSampPulseInt",&adcSampPulseInt);
    t1->SetBranchAddress("NPS.cal.fly.adcSampPed",&adcSampPulsePed);
    t1->SetBranchAddress("NPS.cal.fly.adcSampPulseTime",&adcSampPulseTime);
	t1->SetBranchAddress("NPS.cal.fly.adcSampWaveform",&adcSampWaveform);
	t1->SetBranchAddress("Ndata.NPS.cal.fly.adcSampWaveform",&NdataadcSampWaveform);

	Int_t sintillatorcounter;
	Double_t threshold = 800.0;
	Int_t saturationcounter[1080] = {};

	Int_t Nsample = 0;
	t1->GetEntry(0);
	Nsample = adcSampWaveform[1];
	Int_t Nperblock = Nsample + 2; // number of elements per block
	TH1D* h_sampwaveform[1080];
	TString histogramname = "h_sampwaveform_block_%d";
	TH1D* h_test;
	h_test = new TH1D("","",Nsample,0,Nsample*4);

	for (int i =0; i < 1080; i++){
		h_sampwaveform[i] = new TH1D(Form(histogramname,i),Form(histogramname,i),Nsample,0,Nsample*4);
		//cout << h_sampwaveform[i]->GetName() << " " << h_sampwaveform[i]->GetTitle() << endl;
	}


	int nentries = t1->GetEntries();
	//TCanvas *c1 = new TCanvas("c1","Waveforms",3200,1800);
		
	//c1->Divide(3,4);
	
	//Event Loop
	for (int i = 0; i < nentries; i++){
		t1->GetEntry(i);
		if ((i % 10000) == 0) cout << "Event : " << i << endl;
		Int_t NofWaveforms = NdataadcSampWaveform / Nperblock; // number of blocks have waveform

		for (int l=0; l<NdataadcCounter; l++){
			if (adcCounter[l] >= 2000)
			cout << "Scintillator has AMP output! ADC counter is " << adcCounter[l] << endl;
		}

		for (int j=0; j<NofWaveforms; j++){
			Int_t blocknumber = adcSampWaveform[Nperblock*j];
			//cout << "Block number is " << blocknumber << endl;

			if (blocknumber >= 2000){
				//cout << "we have scintilator waveforms ??" << " Block number is " << blocknumber << "Some samples are " << adcSampWaveform[Nperblock*j+2] << " " << adcSampWaveform[Nperblock*j+3] << endl;
				sintillatorcounter ++;
				continue;
			}

			bool hassature = 0;
	
			for(int k=0; k<Nsample; k++){
				if (i == 36532 && blocknumber == 969){
					//h_test->SetBinContent(k+1,adcSampWaveform[Nperblock*j+2+k]);
				}
				//h_sampwaveform[blocknumber]->SetBinContent(k+1,adcSampWaveform[Nperblock*j+2+k]); // first sample, 0 + 2 + 0 = 2, thrid element in one block.
				bool waveformsat =  k!=0 && adcSampWaveform[Nperblock*j+2+k] > threshold && adcSampWaveform[Nperblock*j+2+k+1] > threshold && adcSampWaveform[Nperblock*j+2+k-1] > threshold;
				if(waveformsat){
					//use adjacent 3 samples except first sample
					//Now there is overcounting issue, can add break to end this waveform.
					cout << "Block number is " << blocknumber << " Event number is "<< i << endl;
					cout << "The center bin amp is " << adcSampWaveform[Nperblock*j+2+k] << endl;
					hassature = 1;
				}
			}//end looping samples

			bool ampsearchingtest = 0;

			for (int q=0; q<NdataadcCounter; q++){
				if (adcCounter[q] == blocknumber && hassature){
					//I want to compare if certain waveform has saturation, what's the amp value provided by hcana
					cout << "       " << endl;
					cout << "AdcCounter is " << adcCounter[q] << endl;
					cout << "The Raw Amp from hcana is " << adcSampPulseAmp[q] << endl;
					cout << "       " << endl;
					if (adcSampPulseAmp[q] > 4090) ampsearchingtest  = 1;
				}
			}

			

			if ((hassature == 1 && ampsearchingtest == 0 )) {
				cout << "Event number is " << i << "block number is " << blocknumber << endl;
				cout << "Warning, above threshold but not comparing to hcana amp" << endl;
			}
			if (ampsearchingtest == 1 ) saturationcounter[blocknumber]++;


		}// end of each waveform loop

		/*for (int m=0; m<12;m++){
		c1->cd(m+1);
		
		for (int n=0; n<90; n++){
			if (!(h_sampwaveform[m*90+n]->GetEntries() > 0)){
				h_sampwaveform[m*90+n]->Draw("SAME");
			}//drawing each waveform

		}//end of drawing on pad

	}//end of drawing on canvas*/

	} // end of event loop

	//c1->SaveAs("Test.pdf");
	cout << sintillatorcounter << endl;
	//h_test->Draw();

	int Totalcounter = 0;
	for (int p = 0; p < 1080; p++){
		Totalcounter += saturationcounter[p];
	}


	cout << "For Run " << runnum << "We have " << Totalcounter << " Saturation " << "Above " << threshold << "mV"<<endl;

	// Histogram for the block number
	   
    TH2F *h_sat = new TH2F("", "Counter of Amplitude > 1V, empty means good", 30, -0.5, 29.5, 36, -0.5, 35.5);
    h_sat->GetXaxis()->SetTitle("Column Number");
    h_sat->GetYaxis()->SetTitle("Row Number");

    // Histogram for the Mean values

    TH2F* h_sat_count = new TH2F("", "Counter of Amplitude > 1V, empty means good",30,-0.5,29.5,36,-0.5, 35.5);
    h_sat_count->GetXaxis()->SetTitle("Column Number");
    h_sat_count->GetYaxis()->SetTitle("Row Number");

	for (int iBlock = 0; iBlock < 1080; iBlock++) {
        int col = iBlock % 30; // column number
        int row = iBlock / 30; // row number
	        
        if (saturationcounter[iBlock]>0){
            h_sat_count->Fill(29-col,row,saturationcounter[iBlock]);
            h_sat->Fill(29-col,row,iBlock);
        }
	    else {h_sat_count->Fill(29-col,row,0);h_sat->Fill(29-col,row,iBlock);} 
}

         for (int i = 0; i <= 35; i++) {
          std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
          h_sat->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
          }
          h_sat->GetYaxis()->SetTickSize(0.009);
          h_sat->GetYaxis()->SetTickSize(0.009);
          h_sat->SetMarkerStyle(20); 
          //h_Amp->Draw("text same");
          h_sat->SetMarkerSize(0.7);
		  h_sat->SetOption("text");



		  for (int i = 0; i <= 30; i++) {
            std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
            h_sat_count->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
            }

            h_sat_count->GetXaxis()->SetTickSize(0.009);

   	    //y axis

           for (int i = 0; i <= 35; i++) {
           std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
           h_sat_count->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
           }

           h_sat_count->GetYaxis()->SetTickSize(0.009);
           h_sat_count->GetYaxis()->SetTickSize(0.009);
           h_sat_count->SetOption("COLZSAME");
           //h_Mean_Amp->Draw("same");

           // x Axis

           h_sat->GetXaxis()->SetTickSize(0.009);
           for (int i = 0; i <= 30; i++) {
           std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
           h_sat->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
           }


h_sat_count->SetStats(0);
h_sat->SetStats(0);
//h_sat_count->Draw("colz");
//h_sat->Draw("textsame");

f1->WriteTObject(h_sat_count,"h_sat_count");
f1->WriteTObject(h_sat,"h_sat");
f1->Close();


}// end of script