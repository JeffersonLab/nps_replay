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

//MAIN FUNCTION

void ALL(int RunNumber = 2724, int nevent = -1) {

	//CONSTANTS
	
         const int nrows = 36; // all rows
         const int ncols = 30; // all columns
	 int nblocks = 1080; // the precise number of blocks
	  Int_t replaynumber;

	 // const int nrun=1; // number of runs to analyze

	 //   Int_t run[nrun]={352}; // which runs to analyze

	 // const int evtmax=5000; // number of events we want to analyze
        
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

        //Run over root files and trees
        //if (nevent == 50000){
         //f= new TFile(Form("../../ROOTfiles/COIN/50k/nps_hms_coin_%i_latest.root",RunNumber),"UPDATE");
        //}
        //else{
         f= new TFile(Form("../../ROOTfiles/COIN/PRODUCTION/nps_hms_coin_%i_latest.root",RunNumber),"UPDATE");
        //}
	
	 
       t = new TChain("T");
       t->Add(f->GetName(),-1);
	     t->SetBranchStatus("*",false);
	         t->SetBranchStatus("Ndata.NPS.cal.fly.adcCounter",true);
		     t->SetBranchStatus("NPS.cal.fly.adcCounter",true);
		         t->SetBranchStatus("NPS.cal.fly.adcSampPulseTime",true);
			     t->SetBranchStatus("NPS.cal.fly.adcSampPulseAmp",true);
			     t->SetBranchStatus("NPS.cal.fly.adcSampPed",true);
			     t->SetBranchStatus("NPS.cal.fly.adcSampPulseInt",true);
            t->SetBranchAddress("NPS.cal.fly.adcSampPulseAmp",&adcSampPulseAmp) ;
            t->SetBranchAddress("Ndata.NPS.cal.fly.adcCounter",&NdataadcCounter) ;
            t->SetBranchAddress("NPS.cal.fly.adcCounter",&adcCounter) ;
            t->SetBranchAddress("NPS.cal.fly.adcSampPulseInt",&adcSampPulseInt) ;
            t->SetBranchAddress("NPS.cal.fly.adcSampPed",&adcSampPulsePed) ;
            t->SetBranchAddress("NPS.cal.fly.adcSampPulseTime",&adcSampPulseTime) ;

           
	 //Histograms

        TH1F *h_adcSampPulseAmp[nblocks];
        TH1F *h_adcSampPulseInt[nblocks];
        TH1F *h_adcSampPulsePed[nblocks];
        TH1F *h_adcSampPulseTime[nblocks];       

	// Double_t   totalEvents = T->GetEntries()

        gStyle->SetOptStat(1);
        gStyle->SetOptFit(1);
       		            
 				    
	// divide pad into nrows x ncols 	 

        //TCanvas *c = new TCanvas("c","c",800,600);
				    
	  //c->Divide(ncols, nrows,0,0); // divide pad into nrows x ncols

        // LOOP OVER BLOCKS TO CREATE HISTOGRAMS
	  
        for (int iBlock = 0; iBlock < nblocks; iBlock++){

	 
          h_adcSampPulseAmp[iBlock] = new TH1F(Form("h_adcSampPulseAmplitude_%i", iBlock),Form("Block %i: ADC Sample Pulse Amplitude", iBlock),500, 0,1000);
          h_adcSampPulseAmp[iBlock]->SetFillColor(2);
	  h_adcSampPulseAmp[iBlock]->SetMarkerColor(kRed);
	  h_adcSampPulseAmp[iBlock]->SetMarkerSize(34);
          h_adcSampPulseAmp[iBlock]->SetAxisRange(0, 1.3, "Y");          

          h_adcSampPulseInt[iBlock] = new TH1F(Form("h_adcSampPulseIntegral_%i", iBlock),Form("Block %i: ADC Sample Pulse Integral", iBlock),500, 0,1000);
          h_adcSampPulseInt[iBlock]->SetFillColor(2);
	  h_adcSampPulseInt[iBlock]->SetMarkerColor(kRed);
	  h_adcSampPulseInt[iBlock]->SetMarkerSize(34);
	  //  h_adcSampPulseInt[iBlock]->SetAxisRange(0, 1.3, "Y");

          h_adcSampPulseTime[iBlock] = new TH1F(Form("h_adcSampPulseTime_%i", iBlock),Form("Block %i: ADC Sample Pulse Time", iBlock),150, 100,250);
          h_adcSampPulseTime[iBlock]->SetFillColor(2);
	  h_adcSampPulseTime[iBlock]->SetMarkerColor(kRed);
	  h_adcSampPulseTime[iBlock]->SetMarkerSize(34);
	  //   h_adcSampPulseTime[iBlock]->SetAxisRange(0, 1.3, "Y");


          h_adcSampPulsePed[iBlock] = new TH1F(Form("h_adcSampPulsePed_%i", iBlock),Form("Block %i: ADC Sample Pedestal", iBlock),250, 0,500);
          h_adcSampPulsePed[iBlock]->SetFillColor(2);
	  h_adcSampPulsePed[iBlock]->SetMarkerColor(kRed);
	  h_adcSampPulsePed[iBlock]->SetMarkerSize(34);
	  //  h_adcSampPulsePed[iBlock]->SetAxisRange(0, 1.3, "Y");

          }
	  

       
	  // FILL HISTOGRAM FOR EACH BLOCK
     
     //if (nevent == -1){
      replaynumber = t->GetEntries();
     //}
     //else{
      //replaynumber = nevent;
     //}
 
       
        	for (Int_t evt = 0; evt < replaynumber  ; evt++) {//  loop over the events

			  if(evt%10000==0)cout<<evt<<endl;

                                   t->GetEntry(evt);
				   
				       	 for (Int_t iNdata = 0; iNdata < NdataadcCounter; iNdata++) {// loop over the size of parameters
		  			       if (adcCounter[iNdata] >= 0 && adcCounter[iNdata] <nblocks) { // fill only for the right number of blocks

			       	                     h_adcSampPulseAmp[(int)(adcCounter[iNdata])]->Fill(adcSampPulseAmp[iNdata]);
                                                         
					             h_adcSampPulseInt[(int)(adcCounter[iNdata])]->Fill(adcSampPulseInt[iNdata]); 
                                                     
                                                     h_adcSampPulseTime[(int)(adcCounter[iNdata])]->Fill(adcSampPulseTime[iNdata]);
                                                  
                                                     h_adcSampPulsePed[(int)(adcCounter[iNdata])]->Fill(adcSampPulsePed[iNdata]);
                                                  
	      	 }//end if condition
	         }//end loop over iNdata				   			 					 		     
		 } //end loop over evt



/////////////////////////////////// Touched blocks with the mean value of each one for each parameter ////////////////////////////////////////////////////


           gStyle->SetOptStat(0);
           gStyle->SetOptFit(0);
         
           Double_t Mean_Amp[nblocks];
           Double_t Mean_Int[nblocks];
           Double_t Mean_Ped[nblocks];
           Double_t Mean_Time[nblocks];

       
 	   //AMPLITUDE 

           // DECLARATION OF CANVAS'S

	   //TCanvas *c_Amp = new TCanvas("", "c_Amp", 800, 600);
           //c_Amp->cd();
            
            // Histogram for the block number
	   
           TH2F *h_Amp = new TH2F("", "Mean Values : Sample Pulse Amplitude ", 30, -0.5, 29.5, 36, -0.5, 35.5);
           h_Amp->GetXaxis()->SetTitle("Column Number");
           h_Amp->GetYaxis()->SetTitle("Row Number");

           // Histogram for the Mean values

           TH2D* h_Mean_Amp = new TH2D("", "Mean Values : Sample Pulse Amplitude ",30,-0.5,29.5,36,-0.5, 35.5);
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

            for (int i = 0; i <= 30; i++) {
            std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
            h_Mean_Amp->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
            }

            h_Mean_Amp->GetXaxis()->SetTickSize(0.009);

   	    //y axis

           for (int i = 0; i <= 35; i++) {
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

          for (int i = 0; i <= 35; i++) {
          std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
          h_Amp->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
          }
          h_Amp->GetYaxis()->SetTickSize(0.009);
          h_Amp->GetYaxis()->SetTickSize(0.009);
          h_Amp->SetMarkerStyle(20); 
          //h_Amp->Draw("text same");
          h_Amp->SetMarkerSize(0.7);

	  //Draw vertical and horizontal lines to delimit blocks

          TLine *ln_Amp = new TLine();
          ln_Amp->SetLineStyle(2);
          ln_Amp->SetLineColor(kBlack);
          //c_Amp->cd();

	  // Vertical lines on the x axis

          for ( Int_t i=-2;i<29;i++){
	     //ln_Amp->DrawLine(i+0.5,-0.5,i+0.5,36.5);
           }

	  // Vertical lines of the y axis
  
          for (Int_t i=1; i<=h_Amp->GetNbinsY(); i++) {
    
               ln_Amp->SetLineStyle(2);
               ln_Amp->SetLineColor(kBlack);
               //ln_Amp->DrawLine(-1.5,h_Amp->GetYaxis()->GetBinUpEdge(i),29.5,h_Amp->GetYaxis()->GetBinUpEdge(i));
            }

            
	   //c_Amp->Print("AMPLITUDE_MEAN_VALUES.pdf");
	    
	  // TFile *F1= new TFile(Form("HISTOGRAM_NPS_%f.root",RunNumber),"RECREATE");
	  //   F1->WriteTObject(h_Amp, "Amplitude");
	  //   F1->Close();



	  
	   //INTEGRAL 

           //TCanvas *c_Int = new TCanvas("", "c_Int", 800, 600);
            
           //c_Int->cd();

           // Histogram for the block number

           TH2F *h_Int = new TH2F("", "Mean Values : Sample Pulse Integral ", 30, -0.5, 29.5, 36, -0.5, 35.5);
           h_Int->GetXaxis()->SetTitle("Column Number");
           h_Int->GetYaxis()->SetTitle("Row Number");

           //Histogram for the Mean values

           TH2D* h_Mean_Int = new TH2D("", "Mean Values : Sample Pulse Integral ",30,-0.5,29.5,36,-0.5, 35.5);
           h_Mean_Int->GetXaxis()->SetTitle("Column Number");
           h_Mean_Int->GetYaxis()->SetTitle("Row Number");


           for (int iBlock = 0; iBlock < nblocks; iBlock++) {
              int col = iBlock % 30; // column number
              int row = iBlock / 30; // row number
	      
	      Mean_Int[iBlock] = h_adcSampPulseInt[iBlock]->GetMean();
            if (Mean_Int[iBlock]>0){
                h_Mean_Int->Fill(29-col,row,Mean_Int[iBlock]);
                h_Int->Fill(29-col,row,iBlock);
	      }
	     else {h_Mean_Int->Fill(29-col,row,0);h_Int->Fill(29-col,row,iBlock);}  
  	    
	   }

         // Set bin labels for the Integral histogram
	    
         //c_Int->cd();	 

         // x Axis

        for (int i = 0; i <= 30; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Mean_Int->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
        }

        h_Mean_Int->GetXaxis()->SetTickSize(0.009);

	 // y axis

        for (int i = 0; i <= 35; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Mean_Int->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
        }

         h_Mean_Int->GetYaxis()->SetTickSize(0.009);
         h_Mean_Int->GetYaxis()->SetTickSize(0.009);
         h_Mean_Int->SetOption("COLZ");
         //h_Mean_Int->Draw("same");

         // x Axis

        h_Int->GetXaxis()->SetTickSize(0.009);
        for (int i = 0; i <= 30; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Int->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
        }

         // y axis

        for (int i = 0; i <= 35; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Int->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
        }
         h_Int->GetYaxis()->SetTickSize(0.009);
         h_Int->GetYaxis()->SetTickSize(0.009);
         h_Int->SetMarkerStyle(20); 
         //h_Int->Draw("text same");
         h_Int->SetMarkerSize(0.7);

	 // Draw vertical and horizontal lines to delimit blocks

         TLine *ln_Int = new TLine();
         ln_Int->SetLineStyle(2);
         ln_Int->SetLineColor(kBlack);
         

	 // Vertical lines on the x axis

           for ( Int_t i=-2;i<29;i++){
	     //ln_Int->DrawLine(i+0.5,-0.5,i+0.5,36.5);
           }

	 // Vertical lines of the y axis
  
           for (Int_t i=1; i<=h_Int->GetNbinsY(); i++) {
    
               ln_Int->SetLineStyle(2);
               ln_Int->SetLineColor(kBlack);
               //ln_Int->DrawLine(-1.5,h_Int->GetYaxis()->GetBinUpEdge(i),29.5,h_Int->GetYaxis()->GetBinUpEdge(i));
            }
	    
	   //c_Int->Print("INTEGRAL_MEAN_VALUES.pdf");



	  

	   
	   // PEDESTAL


           //TCanvas *c_Ped = new TCanvas("", "c_Ped", 800, 600);
            
           //c_Ped->cd();

           // Histogram for the block number

           TH2F *h_Ped = new TH2F("", "Mean Values : Sample Pulse Pedestal ", 30, -0.5, 29.5, 36, -0.5, 35.5);
           h_Ped->GetXaxis()->SetTitle("Column Number");
           h_Ped->GetYaxis()->SetTitle("Row Number");

           //Histogram for the Mean values

           TH2D* h_Mean_Ped = new TH2D("", "Mean Values : Sample Pulse Pedestal ",30,-0.5,29.5,36,-0.5, 35.5);
           h_Mean_Ped->GetXaxis()->SetTitle("Column Number");
           h_Mean_Ped->GetYaxis()->SetTitle("Row Number");


           for (int iBlock = 0; iBlock < nblocks; iBlock++) {
              int col = iBlock % 30; // column number
              int row = iBlock / 30; // row number
	      
	      Mean_Ped[iBlock] = h_adcSampPulsePed[iBlock]->GetMean();
	       if (Mean_Ped[iBlock]>0){
                h_Mean_Ped->Fill(29-col,row,Mean_Ped[iBlock]);
                h_Ped->Fill(29-col,row,iBlock);
		 }
	     else {h_Mean_Ped->Fill(29-col,row,0);h_Ped->Fill(29-col,row,iBlock);}  
  	    
	   }

         // Set bin labels for the Pedestal histogram
	    
         //c_Ped->cd();	 

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
         h_Mean_Ped->SetOption("COLZ");
         //h_Mean_Ped->Draw("same");

         // x Axis

        h_Ped->GetXaxis()->SetTickSize(0.009);
        for (int i = 0; i <= 30; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Ped->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
        }

         // y axis

        for (int i = 0; i <= 35; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Ped->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
        }
         h_Ped->GetYaxis()->SetTickSize(0.009);
         h_Ped->GetYaxis()->SetTickSize(0.009);
         h_Ped->SetMarkerStyle(20); 
         //h_Ped->Draw("text same");
         h_Ped->SetMarkerSize(0.7);

	 // Draw vertical and horizontal lines to delimit blocks

         TLine *ln_Ped = new TLine();
         ln_Ped->SetLineStyle(2);
         ln_Ped->SetLineColor(kBlack);
         

	 // Vertical lines on the x axis

           for ( Int_t i=-2;i<29;i++){
	     //ln_Ped->DrawLine(i+0.5,-0.5,i+0.5,36.5);
           }

	 // Vertical lines of the y axis
  
           for (Int_t i=1; i<=h_Ped->GetNbinsY(); i++) {
    
               ln_Ped->SetLineStyle(2);
               ln_Ped->SetLineColor(kBlack);
               //ln_Ped->DrawLine(-1.5,h_Ped->GetYaxis()->GetBinUpEdge(i),29.5,h_Ped->GetYaxis()->GetBinUpEdge(i));
            }
	    
	   //c_Ped->Print("PEDESTAL_MEAN_VALUES.pdf");


	   // Time




           //TCanvas *c_Time = new TCanvas("", "c_Time", 800, 600);
            
           //c_Time->cd();

           // Histogram for the block number

           TH2F *h_Time = new TH2F("", "Mean Values : Sample Pulse Time ", 30, -0.5, 29.5, 36, -0.5, 35.5);
           h_Time->GetXaxis()->SetTitle("Column Number");
           h_Time->GetYaxis()->SetTitle("Row Number");

           //Histogram for the Mean values

           TH2D* h_Mean_Time = new TH2D("", "Mean Values : Sample Pulse Time ",30,-0.5,29.5,36,-0.5, 35.5);
           h_Mean_Time->GetXaxis()->SetTitle("Column Number");
           h_Mean_Time->GetYaxis()->SetTitle("Row Number");


           for (int iBlock = 0; iBlock < nblocks; iBlock++) {
              int col = iBlock % 30; // column number
              int row = iBlock / 30; // row number
	      
	      Mean_Time[iBlock] = h_adcSampPulseTime[iBlock]->GetMean();
            if (Mean_Time[iBlock]>0){
                h_Mean_Time->Fill(29-col,row,Mean_Time[iBlock]);
                h_Time->Fill(29-col,row,iBlock);
	      }
	     else {h_Mean_Time->Fill(29-col,row,0);h_Time->Fill(29-col,row,iBlock);}  
  	    
	   }

         // Set bin labels for the Time histogram
	    
         //c_Time->cd();	 

         // x Axis

        for (int i = 0; i <= 30; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Mean_Time->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
        }
        h_Mean_Time->GetXaxis()->SetTickSize(0.009);

	 // y axis

        for (int i = 0; i <= 35; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Mean_Time->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
        }

         h_Mean_Time->GetYaxis()->SetTickSize(0.009);
         h_Mean_Time->GetYaxis()->SetTickSize(0.009);
         h_Mean_Time->SetOption("COLZ");
         //h_Mean_Time->Draw("same");

         // x Axis

        h_Time->GetXaxis()->SetTickSize(0.009);
        for (int i = 0; i <= 30; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Time->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
        }

         // y axis

        for (int i = 0; i <= 35; i++) {
        std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
        h_Time->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
        }
         h_Time->GetYaxis()->SetTickSize(0.009);
         h_Time->GetYaxis()->SetTickSize(0.009);
         h_Time->SetMarkerStyle(20); 
         //h_Time->Draw("text same");
         h_Time->SetMarkerSize(0.7);

	 // Draw vertical and horizontal lines to delimit blocks

         TLine *ln_Time = new TLine();
         ln_Time->SetLineStyle(2);
         ln_Time->SetLineColor(kBlack);
         

	 // Vertical lines on the x axis

           for ( Int_t i=-2;i<29;i++){
	     //ln_Time->DrawLine(i+0.5,-0.5,i+0.5,36.5);
           }

	 // Vertical lines of the y axis
  
           for (Int_t i=1; i<=h_Time->GetNbinsY(); i++) {
    
               ln_Time->SetLineStyle(2);
               ln_Time->SetLineColor(kBlack);
               //ln_Time->DrawLine(-1.5,h_Time->GetYaxis()->GetBinUpEdge(i),29.5,h_Time->GetYaxis()->GetBinUpEdge(i));
            }
	    
	   //c_Time->Print("TIME_MEAN_VALUES.pdf");
      f->WriteTObject(h_Amp, "Amplitude");
      f->WriteTObject(h_Mean_Amp,"Amplitude_Mean");
      f->WriteTObject(h_Int, "Integral");
      f->WriteTObject(h_Mean_Int,"Integral_Mean");
      f->WriteTObject(h_Ped, "Pedestal");
      f->WriteTObject(h_Mean_Ped,"Pedestal_Mean");
      f->WriteTObject(h_Time, "Time");
      f->WriteTObject(h_Mean_Time,"Time_Mean");
      f->Close();



	   













































	    
}//end of the program
	








