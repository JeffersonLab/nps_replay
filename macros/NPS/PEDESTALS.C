#include "TCanvas.h"
 #include "TROOT.h"
 #include "TGraphErrors.h"
 #include "TF1.h"
 #include "TH1F.h"
 #include "TH2F.h"
 #include "TLegend.h"
 #include "TMath.h"
 #include "TLorentzVector.h"
 #include "TChain.h"
 #include "TTree.h"
 #include "TStyle.h"
 #include "TSystem.h"
 #include "TRandom.h"
 #include "TFile.h"
 #include "TMatrixD.h"
 #include "TLatex.h"
 #include "TVirtualFFT.h"
 #include <iostream>
 #include <fstream>
 #include "TLine.h"
#include <TButton.h>
#include <TGButton.h>
#include "TPaletteAxis.h"
#include <fstream>   
#include "TExec.h"

void PEDESTALS(int RunNumber = 2731){

	  //CONSTANTS
	
          const int nrows = 36; // all rows
	  const int ncols = 30; // all columns
	  int nblocks = 1080; // the precise number of blocks
 
          TFile  *f;
	  TChain *t;
	
   	  // Tree Variables
       
  	  // NPS VARIABLES 

          Double_t adcCounter[nblocks];
          Double_t adcSampPulsePed[nblocks];
          Int_t     NdataadcCounter;

          //Run over root files and trees
	
	  f= new TFile(Form("../../ROOTfiles/COIN/PRODUCTION/nps_hms_coin_%i_latest.root",RunNumber),"UPDATE");
	   //  f= new TFile(Form("../ROOTfiles/nps_%i.root",RunNumber));
	   t= new TChain("T");
	   t->Add(f->GetName(), -1);

          //Branch status (NPS)

          t->SetBranchStatus("*", false); // disable all branches         
          t->SetBranchStatus("Ndata.NPS.cal.fly.adcCounter", true);
          t->SetBranchStatus("NPS.cal.fly.adcCounter", true) ;
          t->SetBranchStatus("NPS.cal.fly.adcSampPed", true) ;
         //Branch variable name for NPS

         t->SetBranchAddress("Ndata.NPS.cal.fly.adcCounter",&NdataadcCounter) ;
         t->SetBranchAddress("NPS.cal.fly.adcCounter",&adcCounter) ;
         t->SetBranchAddress("NPS.cal.fly.adcSampPed",&adcSampPulsePed) ;

	//Histograms


        gStyle->SetOptStat(1);
        gStyle->SetOptFit(1);
       		            
 TH1F *h_adcSampPulsePed[nblocks];

for (int iBlock = 0; iBlock < nblocks; iBlock++){

     h_adcSampPulsePed[iBlock] = new TH1F(Form("h_adcSampPulsePed_%i", iBlock),Form("Block %i: ADC Sample Pedestal", iBlock),1000, 0,1000);
          h_adcSampPulsePed[iBlock]->SetFillColor(2);
	  h_adcSampPulsePed[iBlock]->SetMarkerColor(kRed);
h_adcSampPulsePed[iBlock]->SetMarkerSize(34);}



	 for (Int_t evt = 0; evt < t->GetEntries(); evt++) {//  loop over the events

			  if(evt%1000==0)cout<<evt<<endl;

                                   t->GetEntry(evt);
			
				       	 for (Int_t iNdata = 0; iNdata < NdataadcCounter; iNdata++) {// loop over the size of parameters
					   if (adcCounter[iNdata] >= 0 && adcCounter[iNdata] <nblocks) { // fill only for the right number of blocks
					     
                                                     h_adcSampPulsePed[(int)(adcCounter[iNdata])]->Fill(adcSampPulsePed[iNdata]);
						     						   
					   }
					 }// end of if statement over Time
	 // end of loop  statement over adcCounter
	 }//end if condition over iNdata
	 

           gStyle->SetOptStat(0);
           gStyle->SetOptFit(0);
         

           Double_t Mean_Ped[nblocks];

	  

	    
	   // PEDESTAL



           // Histogram for the block number

           TH2F *h_Ped = new TH2F("", "Peds(Data) - Peds(Configuration) ", 30, -0.5, 29.5, 36, -0.5, 35.5);
           h_Ped->GetXaxis()->SetTitle("Column Number");
           h_Ped->GetYaxis()->SetTitle("Row Number");

           // Histogram for the difference 

           TH2D* h_Mean_Ped = new TH2D("", "Peds(data) - Peds(configuration) ",30,-0.5,29.5,36,-0.5, 35.5);
           h_Mean_Ped->GetXaxis()->SetTitle("Column Number");
           h_Mean_Ped->GetYaxis()->SetTitle("Row Number");
         
           // PARAMETERS

          Double_t  difference[1080];
	  // Double_t  values[1080]; 


           
            std::vector<double> values(1080);
            std::ifstream inputFile("OVERALL_PEDS.txt");
            for (int i = 0; i < 1079; i++) {
            if (inputFile >> values[i]) {
            
            } else {
           
            std::cerr << "Error: Insufficient values in the file." << std::endl;
            
            }
            }
            for (int iBlock = 0; iBlock < 1079; iBlock++) {
              int col = iBlock % 30; // column number
              int row = iBlock / 30; // row number
	      
	        Mean_Ped[iBlock] = h_adcSampPulsePed[iBlock]->GetMean();
                if (Mean_Ped[iBlock] > 0){
               difference[iBlock] = static_cast<int>((Mean_Ped[iBlock] * (4096. / 1000.)) - values[iBlock]);

		// cout<<"Block Number  = "<< iBlock<<  "    Pedestal  = "<<Mean_Ped[iBlock]<<endl;
                h_Mean_Ped->Fill(29-col,row,difference[iBlock]);
                h_Ped->Fill(29-col,row,difference[iBlock]);
		}
	    }

         // Set bin labels for the Pedestal histogram

         // x Axis

        for (int i = 0; i <= 30; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Mean_Ped->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
        }
        h_Mean_Ped->GetXaxis()->SetTickSize(0.009);

	 // y axis

        for (int i = 0; i <= 35; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Mean_Ped->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
        }

         h_Mean_Ped->GetYaxis()->SetTickSize(0.009);
         h_Mean_Ped->GetYaxis()->SetTickSize(0.009);
         h_Mean_Ped->SetOption("text COLZ");

         // x Axis

        h_Ped->GetXaxis()->SetTickSize(0.009);
        for (int i = 0; i <= 30; i++) {
        std::string label = std::to_string(i); 
        h_Ped->GetXaxis()->SetBinLabel(30-i, label.c_str()); 
        }

         // y axis

        for (int i = 0; i <= 35; i++) {
        std::string label = std::to_string(i); 
        h_Ped->GetYaxis()->SetBinLabel(i+1, label.c_str()); 
        }
         h_Ped->GetYaxis()->SetTickSize(0.009);
         h_Ped->GetYaxis()->SetTickSize(0.009);
         h_Ped->SetMarkerStyle(20); 
	 // h_Ped->Draw("same");
         h_Ped->SetMarkerSize(0.7);

	 // Draw vertical and horizontal lines to delimit blocks

            f->WriteTObject(h_Mean_Ped, "h_Mean_Ped");
            f->WriteTObject(h_Ped, "h_Ped");
            f->Close();


	  


}
