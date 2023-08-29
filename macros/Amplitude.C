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


/*
TH2F *h_Amp;
TCanvas *c_Amp;
void BlockClick(Int_t event, Int_t px, Int_t py, TObject *obj)
{
        const int nrows = 36; // all rows
	const int ncols = 30; // all columns
	int nblocks = nrows*ncols; // the precise number of blocks
std::vector<TH1F*> h_adcSampPulseAmp(nblocks);

    if (event == kMouseEnter) {
        TVirtualPad *pad = (TVirtualPad *)obj;
        Int_t bin = h_Amp->FindBin(pad->AbsPixeltoX(px), pad->AbsPixeltoY(py));

        // Calculate the row and column from the bin number

        Int_t row = bin % 37;
        Int_t col = (bin - row) / 37;

        // Create a new canvas for the block histogram

        TCanvas *c_BlockHist = new TCanvas("", TString::Format("Block Histogram: %d", bin), 800, 600);

        // Get the histogram of the selected block

        TH1F *h_Block = h_adcSampPulseAmp[bin]; // Assuming h_adcSampPulseAmp is an array of histograms
        h_Block->Draw();

        // Update the canvas

        c_BlockHist->Update();
        c_BlockHist->Modified();
        c_BlockHist->WaitPrimitive();
    }
}

*/



//MAIN FUNCTION

void Amplitude(int RunNumber) {

	 //CONSTANTS
	
        const int nrows = 36; // all rows
	const int ncols = 30; // all columns
	int nblocks = nrows*ncols; // the precise number of blocks
	Int_t evt;
	//	const int nrun=10; // number of runs to analyze
	//	Int_t run[nrun]={539,541,542,547,548,553,557,558,559,560}; // which runs to analyze	const int evtmax=20000; // number of events we want to analyze
        
        // Tfiles and trees
		 
	TFile *f;
        TChain *t;
	
 	// Tree Variables
	
	Double_t adcSampPulseAmp[nblocks];
        Double_t adcCounter[nblocks];
        Double_t adcSampPulsePed[nblocks];
        Double_t adcSampPulseTime[nblocks];
	Double_t adcSampPulseInt[nblocks];
        Int_t  NdataadcCounter;

        //Run over root files and trees needed for the plots only
	/*
 
    // Find the index of the specified run number
    int runIndex = -1;
    for (int i = 0; i < nrun; i++) {
        if (run[i] == RunNumber) {
            runIndex = i;
            break;
        }
    }

    if (runIndex == -1) {
        cout << "Invalid run number. Please provide a valid run number." << endl;
        return;
    }
	*/
    // Open the TFile and TChain for the specified run number

    f = new TFile(Form("../../ROOTfiles/nps_eel108_%i_latest.root", RunNumber));
    t = new TChain("T");
    t->Add(f->GetName(), -1);
    t->SetBranchStatus("*", false); // disable all branches
    t->SetBranchStatus("NPS.cal.fly.adcSampPulseAmp", true);
    t->SetBranchStatus("Ndata.NPS.cal.fly.adcCounter", true);
    t->SetBranchStatus("NPS.cal.fly.adcCounter", true);
    t->SetBranchStatus("NPS.cal.fly.adcSampPulseInt", true);
    t->SetBranchStatus("NPS.cal.fly.adcSampPed", true);
    t->SetBranchStatus("NPS.cal.fly.adcSampPulseTime", true);
    t->SetBranchAddress("NPS.cal.fly.adcSampPulseAmp", &adcSampPulseAmp);
    t->SetBranchAddress("Ndata.NPS.cal.fly.adcCounter", &NdataadcCounter);
    t->SetBranchAddress("NPS.cal.fly.adcCounter", &adcCounter);
    t->SetBranchAddress("NPS.cal.fly.adcSampPulseInt", &adcSampPulseInt);
    t->SetBranchAddress("NPS.cal.fly.adcSampPed", &adcSampPulsePed);
    t->SetBranchAddress("NPS.cal.fly.adcSampPulseTime", &adcSampPulseTime);

	//HISTOGRAMS

        TH1F *h_adcSampPulseAmp[nblocks];
        TH1F *h_adcSampPulseInt[nblocks];
        TH1F *h_adcSampPulsePed[nblocks];
        TH1F *h_adcSampPulseTime[nblocks];

        gStyle->SetOptStat(1);
        gStyle->SetOptFit(1);
       		            

        // LOOP OVER BLOCKS TO CREATE HISTOGRAMS

        for (int iBlock = 0; iBlock < nblocks; iBlock++) {

	  // CREATE A NEW HISTOGRAM FOR THE PULSE AMPLITUDE

          h_adcSampPulseAmp[iBlock] = new TH1F(Form("h_adcSampPulseAmp_%i", iBlock),Form("Block %i: ADC Sample Pulse Amplitude", iBlock),50, 0,50);
          h_adcSampPulseAmp[iBlock]->SetFillColor(2);
	  h_adcSampPulseAmp[iBlock]->SetMarkerColor(kRed);
	  h_adcSampPulseAmp[iBlock]->SetMarkerSize(34);
          

	  // CREATE A NEW HISTOGRAM FOR THE PULSE INTEGRAL 

          h_adcSampPulseInt[iBlock] = new TH1F(Form("h_adcSampPulseInt_%i", iBlock),Form("Block %i: ADC Sample Pulse Integral", iBlock),100, 0,100);
          h_adcSampPulseInt[iBlock]->SetFillColor(2);
	  h_adcSampPulseInt[iBlock]->SetMarkerColor(kRed);
	  h_adcSampPulseInt[iBlock]->SetMarkerSize(34);
          

	  // CREATE A NEW HISTOGRAM FOR THE PULSE PEDESTAL

          h_adcSampPulsePed[iBlock] = new TH1F(Form("h_adcSampPulsePed_%i", iBlock),Form("Block %i: ADC Sample Pulse Pedestal", iBlock),150, 50,100);
          h_adcSampPulsePed[iBlock]->SetFillColor(2);
	  h_adcSampPulsePed[iBlock]->SetMarkerColor(kRed);
	  h_adcSampPulsePed[iBlock]->SetMarkerSize(34);
          

	  // CREATE A NEW HISTOGRAM FOR THE PULSE TIME

          h_adcSampPulseTime[iBlock] = new TH1F(Form("h_adcSampPulseTime_%i", iBlock),Form("Block %i: ADC Sample Pulse Time", iBlock),150, 100,250);
          h_adcSampPulseTime[iBlock]->SetFillColor(2);
	  h_adcSampPulseTime[iBlock]->SetMarkerColor(kRed);
	  h_adcSampPulseTime[iBlock]->SetMarkerSize(34);
          }

	  // FILL HISTOGRAM FOR EACH BLOCK
 
          cout << "Run Number  =  " << RunNumber << endl;

          for (Int_t evt = 0; evt < t->GetEntries(); evt++) { // loop over the events

              t->GetEntry(evt);
	      cout <<"This is iteration " << evt << endl;

                for (Int_t iNdata = 0; iNdata < NdataadcCounter; iNdata++) { // loop over the size of parameters
                     if (adcCounter[iNdata] >= 0 && adcCounter[iNdata] < nblocks) { // fill only for the right number of blocks
                          h_adcSampPulseAmp[(int)(adcCounter[iNdata])]->Fill(adcSampPulseAmp[iNdata]);
                          h_adcSampPulseInt[(int)(adcCounter[iNdata])]->Fill(adcSampPulseInt[iNdata]);
                          h_adcSampPulsePed[(int)(adcCounter[iNdata])]->Fill(adcSampPulsePed[iNdata]);
                          h_adcSampPulseTime[(int)(adcCounter[iNdata])]->Fill(adcSampPulseTime[iNdata]);
                           }
                     }
            }


/////////////////////////////////// Touched blocks with the mean Fit value of each one for each parameter ////////////////////////////////////////////////////



           gStyle->SetOptStat(0);
           gStyle->SetOptFit(0);
         
           Double_t Mean_Amp[nblocks];
           Double_t Mean_Int[nblocks];
           Double_t Mean_Ped[nblocks];
           Double_t Mean_Time[nblocks];



 	   //AMPLITUDE 

           // DECLARATION OF CANVAS'S

	  // TCanvas *c_Amp = new TCanvas("", "c_Amp", 800, 600);
           //c_Amp->cd();
            
            // Histogram for the block number
	   
           TH2F *h_Amp = new TH2F("", "Mean Values : Sample Pulse Amplitude ", 31, -1.5, 29.5, 37, -0.5, 36.5);
           h_Amp->GetXaxis()->SetTitle("Column Number");
           h_Amp->GetYaxis()->SetTitle("Row Number");

           // Histogram for the Fit values

           TH2D* h_Mean_Amp = new TH2D("", "Mean Values : Sample Pulse Amplitude ",31,-1.5,29.5,37,-0.5, 36.5);
           h_Mean_Amp->GetXaxis()->SetTitle("Column Number");
           h_Mean_Amp->GetYaxis()->SetTitle("Row Number");
	   

           for (int iBlock = 0; iBlock < nblocks; iBlock++) {
              int col = iBlock % 30; // column number
              int row = iBlock / 30; // row number
	      
	 
              Mean_Amp[iBlock] = h_adcSampPulseAmp[iBlock]->GetMean();	  
              if (Mean_Amp[iBlock]>0){
                h_Mean_Amp->Fill(29-col,row,Mean_Amp[iBlock]);
                h_Amp->Fill(29-col,row,iBlock);
            }
	    else {h_Mean_Amp->Fill(29-col,row,0);h_Amp->Fill(29-col,row,iBlock);}  
	   }
	
            // Draw histograms

            gStyle->SetTitleAlign(33);
            gStyle->SetTitleX(.99);
         

            // Set bin labels for the Amplitude
	    
            //c_Amp->cd();	 

            //x Axis

            for (int i = 0; i <= 31; i++) {
            std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
            h_Mean_Amp->GetXaxis()->SetBinLabel(31-i, label.c_str()); // Set label for current bin
            }

            h_Mean_Amp->GetXaxis()->SetTickSize(0.009);

   	    //y axis

           for (int i = 0; i <= 36; i++) {
           std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
           h_Mean_Amp->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
           }

           h_Mean_Amp->GetYaxis()->SetTickSize(0.009);
           h_Mean_Amp->GetYaxis()->SetTickSize(0.009);
           h_Mean_Amp->SetOption("COLZ");
           //h_Mean_Amp->Draw("same");

           // x Axis

           h_Amp->GetXaxis()->SetTickSize(0.009);
           for (int i = 0; i <= 30; i++) {
           std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
           h_Amp->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
           }

          // y axis

          for (int i = 0; i <= 36; i++) {
          std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
          h_Amp->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
          }
          h_Amp->GetYaxis()->SetTickSize(0.009);
          h_Amp->GetYaxis()->SetTickSize(0.009);
          h_Amp->SetMarkerStyle(20); 
          //h_Amp->Draw("text same");
          h_Amp->SetMarkerSize(0.7);

	  //Draw vertical and horizontal lines to delimit blocks

          /*TLine *ln_Amp = new TLine();
          ln_Amp->SetLineStyle(2);
          ln_Amp->SetLineColor(kBlack);
          //c_Amp->cd();

	  // Vertical lines on the x axis

          for ( Int_t i=-2;i<29;i++){
	     ln_Amp->DrawLine(i+0.5,-0.5,i+0.5,36.5);
           }

	  // Vertical lines of the y axis
  
          for (Int_t i=1; i<=h_Amp->GetNbinsY(); i++) {
    
               ln_Amp->SetLineStyle(2);
               ln_Amp->SetLineColor(kBlack);
               ln_Amp->DrawLine(-1.5,h_Amp->GetYaxis()->GetBinUpEdge(i),29.5,h_Amp->GetYaxis()->GetBinUpEdge(i));
            }

            */
	  // c_Amp->Print("AMPLITUDE_FIT_VALUES.pdf");
	    
	  TFile *F1= new TFile(Form("../../ROOTfiles/histogram/HISTOGRAM_NPS_%i.root",RunNumber),"RECREATE");
          F1->WriteTObject(h_Amp, "Amplitude");
	  F1->WriteTObject(h_Mean_Amp,"Amplitude_Mean");
          F1->Close();
          


            // Check the fit values for each block of the calorimeter


            // Open the output file for writing

            std::ofstream fitfile("Mean_Values.txt");

            // Check if the file was opened successfully

            if (!fitfile.is_open()) {
            cout << "Error: Could not open fit file." <<endl;
            }

            // Loop over the blocks and write the output to the file

            for (int iBlock = 0; iBlock < nblocks; iBlock++) {
             
	      fitfile << "Block = " << iBlock << ", Amplitude = " << Mean_Amp[iBlock] <<endl;
	      
            fitfile << "Block = " << iBlock << ", Integral  = " << Mean_Int[iBlock] <<endl;
            fitfile << "Block = " << iBlock << ", Pedestal  = " << Mean_Ped[iBlock] <<endl;
            fitfile << "Block = " << iBlock << ", Time      = " << Mean_Time[iBlock] <<endl;
            }

            // Close the output file
 
            fitfile.close();


}//end of the program
	








