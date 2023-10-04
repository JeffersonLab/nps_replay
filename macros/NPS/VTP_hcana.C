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
#include <iostream>
#include <iomanip>

//MAIN FUNCTION

void VTP_hcana(int RunNumber, int nevent = -1) {

	//CONSTANTS

	Int_t evt;

	int evtmax; // number of events we want to analyze
        
    // Tfiles and trees
		 
	TFile *f;
	TChain *t;
	
	// Tree Variables

    Double_t vtp_cluster_energy[20000];
    Double_t vtp_cluster_size[20000];
    Double_t vtp_cluster_time[20000];
    Double_t vtp_cluster_x_position[2000];
    Double_t vtp_cluster_y_position[2000];
	int Ndata_NPS_cal_vtpClusE;

    // Tree branches

    //if (nevent == 50000){
      //  f= new TFile(Form("../../ROOTfiles/COIN/50k/nps_hms_coin_%i_latest.root",RunNumber),"UPDATE");
        //}
    //else{
        f= new TFile(Form("../../ROOTfiles/COIN/PRODUCTION/nps_hms_coin_%i_latest.root",RunNumber),"UPDATE");
      //  }
    t= new TChain("T");
    t->Add(f->GetName(), -1);
    t->SetBranchStatus("*", false); // disable all branches

    // STATUS OF BRANCHES 
    t->SetBranchStatus("NPS.cal.vtpClusE", true);
    t->SetBranchStatus("NPS.cal.vtpClusSize", true);
    t->SetBranchStatus("NPS.cal.vtpClusTime", true);
    t->SetBranchStatus("NPS.cal.vtpClusX", true);
    t->SetBranchStatus("NPS.cal.vtpClusY", true);
    t->SetBranchStatus("NPS.cal.vtpClusSize", true);
	t->SetBranchStatus("Ndata.NPS.cal.vtpClusE", true);


    t->SetBranchAddress("NPS.cal.vtpClusE",&vtp_cluster_energy);
	t->SetBranchAddress("NPS.cal.vtpClusSize",&vtp_cluster_size);
    t->SetBranchAddress("NPS.cal.vtpClusTime",&vtp_cluster_time);
    t->SetBranchAddress("NPS.cal.vtpClusX",&vtp_cluster_x_position);
    t->SetBranchAddress("NPS.cal.vtpClusY",&vtp_cluster_y_position);
	t->SetBranchAddress("Ndata.NPS.cal.vtpClusY",&Ndata_NPS_cal_vtpClusE);

	 //Histograms

       TH1F *h_vtp_cluster_energy;
       TH1F *h_vtp_cluster_size;
       TH1F *h_vtp_cluster_time;
       TH1F *h_vtp_cluster_x_position;
       TH1F *h_vtp_cluster_y_position;

	  
	  h_vtp_cluster_energy = new TH1F("h_vtp_cluster_energy"," Cluster Energy",5000, 0,10000);
      h_vtp_cluster_energy->SetFillColor(2);
	  h_vtp_cluster_energy->SetMarkerColor(kRed);
	  h_vtp_cluster_energy->SetMarkerSize(34);
          	
	  h_vtp_cluster_time = new TH1F("h_vtp_cluster_time"," Hit Time In Each Block",200,0, 400);
      h_vtp_cluster_time->SetFillColor(2);
	  h_vtp_cluster_time->SetMarkerColor(kRed);
	  h_vtp_cluster_time->SetMarkerSize(34);
          	
	  h_vtp_cluster_size = new TH1F("h_vtp_cluster_size"," Cluster Size",20, -0.5,10.5);
      h_vtp_cluster_size->SetFillColor(2);
	  h_vtp_cluster_size->SetMarkerColor(kRed);
	  h_vtp_cluster_size->SetMarkerSize(34);
          
	  h_vtp_cluster_x_position = new TH1F("h_vtp_cluster_x_position"," X position of clusters ",82, -0.5,40);
      h_vtp_cluster_x_position->SetFillColor(2);
	  h_vtp_cluster_x_position->SetMarkerColor(kRed);
	  h_vtp_cluster_x_position->SetMarkerSize(34);

	  h_vtp_cluster_y_position = new TH1F("h_vtp_cluster_y_position"," Y position of clusters",82, -0.5,40);
      h_vtp_cluster_y_position->SetFillColor(2);
	  h_vtp_cluster_y_position->SetMarkerColor(kRed);
	  h_vtp_cluster_y_position->SetMarkerSize(34);

	// FILL HISTOGRAM FOR EACH BLOCK
    //if (nevent == -1){
      evtmax = t->GetEntries();
     //}
     //else{
      //evtmax = nevent;
     //}
 

    for (Int_t evt = 0; evt <evtmax; evt++) {
       if (evt % 10000 == 0)
        cout << evt << endl;

       t->GetEntry(evt);

       // Fill histograms for the current event
  
       for (Int_t i = 0; i < Ndata_NPS_cal_vtpClusE; i++) {
		    h_vtp_cluster_energy->Fill(vtp_cluster_energy[i]);
        h_vtp_cluster_y_position->Fill(vtp_cluster_y_position[i]);
		    h_vtp_cluster_x_position->Fill(vtp_cluster_x_position[i]);
	     	h_vtp_cluster_size->Fill(vtp_cluster_size[i]);
	    	h_vtp_cluster_time->Fill((vtp_cluster_time[i])*4);
        }
        }



//NUMBER OF EVENT ===>> NUMBER OF CLUSTERS ====>> ENERGY ===> TIME ====> X POSITION ====> Y POSITION//























/*
        // PRINT ENERGY VALUES

        std::ofstream EnergyFile;
        EnergyFile.open("VTP_hcana_Energy.txt");
        for (Int_t evt = 0; evt < t->GetEntries(); evt++) {
        t->GetEntry(evt);

        // Print variables to the text file
        for (Int_t i = 0; i < Ndata_NPS_cal_vtpClusE; i++) {
            EnergyFile << vtp_cluster_energy[i] << std::endl;
           // outputFile << vtp_cluster_y_position[i] << "\t";
           // outputFile << vtp_cluster_x_position[i] << "\t";
           // outputFile << vtp_cluster_size[i] << "\t";
           // outputFile << vtp_cluster_time[i];
        }
        }

        // Close the output file
        EnergyFile.close();


        // PRINT TIME VALUES

        std::ofstream TimeFile;
        TimeFile.open("VTP_hcana_Time.txt");
        for (Int_t evt = 0; evt < t->GetEntries(); evt++) {
        t->GetEntry(evt);

        // Print variables to the text file
        for (Int_t i = 0; i < Ndata_NPS_cal_vtpClusE; i++) {
          //  TimeFile << vtp_cluster_energy[i] << "\t";
           // outputFile << vtp_cluster_y_position[i] << "\t";
           // outputFile << vtp_cluster_x_position[i] << "\t";
           // outputFile << vtp_cluster_size[i] << "\t";
            TimeFile << (vtp_cluster_time[i])*4<<std::endl;
        }
        }

        // Close the output file
        TimeFile.close();


       // PRINT X POSITION VALUES

        std::ofstream POSXFile;
        POSXFile.open("VTP_hcana_POSX.txt");
        for (Int_t evt = 0; evt < t->GetEntries(); evt++) {
        t->GetEntry(evt);

        // Print variables to the text file
        for (Int_t i = 0; i < Ndata_NPS_cal_vtpClusE; i++) {
          //  TimeFile << vtp_cluster_energy[i] << "\t";
           // outputFile << vtp_cluster_y_position[i] << "\t";
            POSXFile << vtp_cluster_x_position[i] << std::endl;
           // outputFile << vtp_cluster_size[i] << "\t";
           // TimeFile << vtp_cluster_time[i]<<std::endl;
        }
        }

        // Close the output file
        POSXFile.close();


       // PRINT Y POSITION VALUES

        std::ofstream POSYFile;
        POSYFile.open("VTP_hcana_POSY.txt");
        for (Int_t evt = 0; evt < t->GetEntries(); evt++) {
        t->GetEntry(evt);

        // Print variables to the text file
        for (Int_t i = 0; i < Ndata_NPS_cal_vtpClusE; i++) {
          //  TimeFile << vtp_cluster_energy[i] << "\t";
           // outputFile << vtp_cluster_y_position[i] << "\t";
            POSYFile << vtp_cluster_y_position[i] << std::endl;
           // outputFile << vtp_cluster_size[i] << "\t";
           // TimeFile << vtp_cluster_time[i]<<std::endl;
        }
        }

        // Close the output file
        POSYFile.close();
*/

  

 ////////////////////////////////INDIVIDUAL PLOTS/////////////////////////////////////

      // DRAWING PLOTS 

        gStyle->SetOptStat(0);
        gStyle->SetOptFit(0);

	  //Cluster Energy
	   
	   //TCanvas *c_energy = new TCanvas ("c_energy","c_energy",800,600);
	   //c_energy->cd();
	   //c_energy->SetLogy();
	   h_vtp_cluster_energy->GetXaxis()->SetTitle("Cluster Energy (MeV)");
	   h_vtp_cluster_energy->GetYaxis()->SetTitle("Events");  
	   //h_vtp_cluster_energy->Draw();
       f->WriteTObject(h_vtp_cluster_energy,"h_vtp_cluster_energy");                                                                                                   
	   //c_energy->Print("../VTP_PLOTS/Cluster_Energy.pdf");


	  //Cluster Size
	   
	   //TCanvas *c_size = new TCanvas ("c_size","c_size",800,600);
	   //c_size->cd();
	   //c_size->SetLogy();
	   h_vtp_cluster_size->GetXaxis()->SetTitle("Cluster Size");
	   h_vtp_cluster_size->GetYaxis()->SetTitle("Events"); 
	   //h_vtp_cluster_size->Draw();
       f->WriteTObject(h_vtp_cluster_size,"h_vtp_cluster_size");                                                                                                   
	   //c_size->Print("../VTP_PLOTS/Cluster_Size.pdf");
	   

	   //Cluster Time
	   
	   //TCanvas *c_timee = new TCanvas ("c_time","c_time",800,600);
	   //c_timee->cd();
	   //c_timee->SetLogy();
	   h_vtp_cluster_time->GetXaxis()->SetTitle("Accumulating Hit Time In Each Block");
	   h_vtp_cluster_time->GetYaxis()->SetTitle("Events");  
	   //h_vtp_cluster_time->Draw();
       f->WriteTObject(h_vtp_cluster_time,"h_vtp_cluster_time");                                                                                                   
	   //c_timee->Print("../VTP_PLOTS/Cluster_Time.pdf");
	   


	   //Cluster X Position
	   
	   //TCanvas *c_x_position = new TCanvas ("c_x_position","c_x_position",800,600);
	   //c_x_position->cd();
	   //c_x_position->SetLogy();
	   h_vtp_cluster_x_position->GetXaxis()->SetTitle("Cluster X Position");
	   h_vtp_cluster_x_position->GetYaxis()->SetTitle("Events");  
	   //h_vtp_cluster_x_position->Draw();
       f->WriteTObject(h_vtp_cluster_x_position,"h_vtp_cluster_x_position");                                                                                                   
	   //c_x_position->Print("../VTP_PLOTS/Cluster_X_Position.pdf");
	   

	   //Cluster Y Position
	   
	   //TCanvas *c_y_position = new TCanvas ("c_y_position","c_y_position",800,600);
	   //c_y_position->cd();
	   //c_y_position->SetLogy();
	   h_vtp_cluster_y_position->GetXaxis()->SetTitle("Cluster Y Position");
	   h_vtp_cluster_y_position->GetYaxis()->SetTitle("Events");  
	   //h_vtp_cluster_y_position->Draw();
       f->WriteTObject(h_vtp_cluster_y_position,"h_vtp_cluster_y_position");                                                                                                   
	   //c_y_position->Print("../VTP_PLOTS/Cluster_Y_Position.pdf");

///////////////////////////////////COMBOINED PLOTS///////////////////////////////////////////////////// 

// ENERGY OF CLUSTERS AS A FUNCTION OF X AND Y POSITION IN THE DETECTOR 


          // Int_t nblocks = 1080;
           
           // DECLARATION OF CANVAS'S

            Int_t nblocks = 1080;
	        //TCanvas *c_Amp = new TCanvas("", "c_Amp", 800, 600);
            //c_Amp->cd();
            gStyle->SetPalette(kRainBow);
            //gPad->SetLogz();
	   
            // Histogram for the block number
	   
           TH2F *h_Amp = new TH2F("h_Amp", "ACCUMULATED ENERGY IN EACH BLOCK (MeV) ", 30, -0.5, 29.5, 36, -0.5, 35.5);
           h_Amp->GetXaxis()->SetTitle("Column Number");
           h_Amp->GetYaxis()->SetTitle("Row Number");
           //h_Amp->SetMinimum(100);
           // Histogram for the Fit values

           TH2F* h_Mean_Amp = new TH2F("h_Mean_Amp", "ACCUMULATED ENERGY IN EACH BLOCK (MeV) ",30,-0.5,29.5,36,-0.5, 35.5);
           h_Mean_Amp->GetXaxis()->SetTitle("Column Number");
           h_Mean_Amp->GetYaxis()->SetTitle("Row Number");
	        //h_Mean_Amp->SetMinimum(100);

           for (Int_t evt = 0; evt < evtmax; ++evt) {

           t->GetEntry(evt); 

           for (Int_t n = 0; n < Ndata_NPS_cal_vtpClusE; ++n) {

             // if (evt_nps_cluster_energy[n] > 0 && evt_nps_cluster_energy[n] < 2000)  {
                // if ((int)(vtp_cluster_energy[n])>0 ){  
                       int col = vtp_cluster_x_position[n]; // column number
                       int row = vtp_cluster_y_position[n]; // row number
                       h_Mean_Amp->Fill(29-col,row,vtp_cluster_energy[n]);}
                       // cout <<"   n    " << n << "   X  POSITION "<< vtp_cluster_x_position[n] <<"    Y POSITION  "<< vtp_cluster_y_position[n]<<"    ENERGY   "<<vtp_cluster_energy[n]<<endl;
                   //   }
              //  }               
            }

          //Assigne number of blocks 

           for (int iBlock = 0; iBlock < nblocks; iBlock++) { 

              //cout << "Block   = "<< iBlock <<endl;   
              int col = iBlock % 30; // column number
              int row = iBlock / 30; // row number
              h_Amp->Fill(29-col,row,iBlock);

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
           f->WriteTObject(h_Mean_Amp,"h_Mean_Amp");

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
          f->WriteTObject(h_Amp,"h_Amp");

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

           //c_Amp->Print("../VTP_PLOTS/ENERGY_CLUSTERS.pdf"); 


      // TIME OF CLUSTERS INSIDE THE DETECTOR 


           //Int_t nblocks = 1080;
           
           // DECLARATION OF CANVAS'S

	        //TCanvas *c_time = new TCanvas("", "c_time", 800, 600);
           //c_time->cd();
           gStyle->SetPalette(kRainBow);
           //gPad->SetLogz();
	   
            // Histogram for the block number
	   
           TH2F *h_time = new TH2F("h_time", "Hit Time In Each Block (ns) ", 30, -0.5, 29.5, 36, -0.5, 35.5);
           h_time->GetXaxis()->SetTitle("Column Number");
           h_time->GetYaxis()->SetTitle("Row Number");
           //h_time->SetMinimum(100);

           // Histogram for the Fit values

           TH2F* h_time1 = new TH2F("h_time1", "Hit Time In Each Block (ns) ",30,-0.5,29.5,36,-0.5, 35.5);
           h_time1->GetXaxis()->SetTitle("Column Number");
           h_time1->GetYaxis()->SetTitle("Row Number");
	       // h_time1->SetMinimum(100);

           for (Int_t entry = 0; entry < evtmax; ++entry) {

           t->GetEntry(entry); 

           for (Int_t n = 0; n < Ndata_NPS_cal_vtpClusE; ++n) {


                       int col = vtp_cluster_x_position[n]; // column number
                       int row = vtp_cluster_y_position[n]; // row number
                       h_time1->Fill(29-col,row,vtp_cluster_time[n]);
                                        
                }
           }

           for (int iBlock = 0; iBlock < nblocks; iBlock++) { 

             //cout << "Block   = "<< iBlock <<endl;   

              int col = iBlock % 30; // column number
              int row = iBlock / 30; // row number
              h_time->Fill(29-col,row,iBlock);

	         }
            // Draw histograms

            gStyle->SetTitleAlign(33);
            gStyle->SetTitleX(.99);
         
            // Set bin labels for the time
	    
            //c_time->cd();	 

            //x Axis

            for (int i = 0; i <= 30; i++) {
            std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
            h_time1->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
            }

            h_time1->GetXaxis()->SetTickSize(0.009);

   	     //y axis

           for (int i = 0; i <= 35; i++) {
           std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
           h_time1->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
           }

           h_time1->GetYaxis()->SetTickSize(0.009);
           h_time1->GetYaxis()->SetTickSize(0.009);
           h_time1->SetOption("COLZ");
           //h_time1->Draw("same");
           f->WriteTObject(h_time1,"h_time1");
           

           // x Axis

           h_time->GetXaxis()->SetTickSize(0.009);
           for (int i = 0; i <= 30; i++) {
           std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
           h_time->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
           }

          // y axis

          for (int i = 0; i <= 35; i++) {
          std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
          h_time->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
          }
          h_time->GetYaxis()->SetTickSize(0.009);
          h_time->GetYaxis()->SetTickSize(0.009);
          h_time->SetMarkerStyle(20); 
          //h_time->Draw("text same");
          h_time->SetMarkerSize(0.7);
          f->WriteTObject(h_time,"h_time");

	       //Draw vertical and horizontal lines to delimit blocks

          TLine *ln_time = new TLine();
          ln_time->SetLineStyle(2);
          ln_time->SetLineColor(kBlack);
          //c_time->cd();

	       // Vertical lines on the x axis

          for ( Int_t i=-2;i<29;i++){
	           //ln_time->DrawLine(i+0.5,-0.5,i+0.5,36.5);
           }

	       // Vertical lines of the y axis
  
          for (Int_t i=1; i<=h_time->GetNbinsY(); i++) {
    
               ln_time->SetLineStyle(2);
               ln_time->SetLineColor(kBlack);
               //ln_time->DrawLine(-1.5,h_time->GetYaxis()->GetBinUpEdge(i),29.5,h_time->GetYaxis()->GetBinUpEdge(i));
            }

           //c_time->Print("../VTP_PLOTS/TIME_CLUSTERS.pdf"); 




           // SIZE OF  CLUSTERS INSIDE EACH BLOCK


           //Int_t nblocks = 1080;
           
           // DECLARATION OF CANVAS'S

	        //TCanvas *c_clust_numb = new TCanvas("", "c_clust_numb", 800, 600);
           //c_clust_numb->cd();
           gStyle->SetPalette(kRainBow);
           //gPad->SetLogz();
	   
            // Histogram for the block number
	   
           TH2F *h_clust_numb = new TH2F("h_clust_hits", " ACCUMULATED NUMBER OF HITS IN EACH BLOCK ", 30, -0.5, 29.5, 36, -0.5, 35.5);
           h_clust_numb->GetXaxis()->SetTitle("Column Number");
           h_clust_numb->GetYaxis()->SetTitle("Row Number");
           //h_clust_numb->SetMinimum(100);

           // Histogram for the Fit values

           TH2F* h_clust_numb1 = new TH2F("h_clust_hits", " ACCUMULATED NUMBER OF HITS IN EACH BLOCK ",30,-0.5,29.5,36,-0.5, 35.5);
           h_clust_numb1->GetXaxis()->SetTitle("Column Number");
           h_clust_numb1->GetYaxis()->SetTitle("Row Number");

	       // h_clust_numb1->SetMinimum(100);

           for (Int_t entry = 0; entry < evtmax; ++entry) {

           t->GetEntry(entry); 

           for (Int_t n = 0; n < Ndata_NPS_cal_vtpClusE ; ++n) {

                       int col = vtp_cluster_x_position[n]; // column number
                       int row = vtp_cluster_y_position[n]; // row number
                       h_clust_numb1->Fill(29-col,row,vtp_cluster_size[n]);
                                        
                }
           }

           for (int iBlock = 0; iBlock < nblocks; iBlock++) { 

            //  cout << "Block   = "<< iBlock <<endl;   

              int col = iBlock % 30; // column number
              int row = iBlock / 30; // row number
              h_clust_numb->Fill(29-col,row,iBlock);

	         }
            // Draw histograms

            gStyle->SetTitleAlign(33);
            gStyle->SetTitleX(.99);
         
            // Set bin labels for the clust_numb
	    
            //c_clust_numb->cd();	 

            //x Axis

            for (int i = 0; i <= 30; i++) {
            std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
            h_clust_numb1->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
            }

            h_clust_numb1->GetXaxis()->SetTickSize(0.009);

   	     //y axis

           for (int i = 0; i <= 35; i++) {
           std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
           h_clust_numb1->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
           }

           h_clust_numb1->GetYaxis()->SetTickSize(0.009);
           h_clust_numb1->GetYaxis()->SetTickSize(0.009);
           h_clust_numb1->SetOption("COLZ");
           //h_clust_numb1->Draw("same");
           f->WriteTObject(h_clust_numb1,"h_clust_numb1");

           // x Axis

           h_clust_numb->GetXaxis()->SetTickSize(0.009);
           for (int i = 0; i <= 30; i++) {
           std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
           h_clust_numb->GetXaxis()->SetBinLabel(30-i, label.c_str()); // Set label for current bin
           }

          // y axis

          for (int i = 0; i <= 35; i++) {
          std::string label = std::to_string(i); // Create label string as "1", "2", "3", etc.
          h_clust_numb->GetYaxis()->SetBinLabel(i+1, label.c_str()); // Set label for current bin
          }
          h_clust_numb->GetYaxis()->SetTickSize(0.009);
          h_clust_numb->GetYaxis()->SetTickSize(0.009);
          h_clust_numb->SetMarkerStyle(20); 
          //h_clust_numb->Draw("text same");
          h_clust_numb->SetMarkerSize(0.7);
          f->WriteTObject(h_clust_numb,"h_clust_numb");

	       //Draw vertical and horizontal lines to delimit blocks

          TLine *ln_clust_numb = new TLine();
          ln_clust_numb->SetLineStyle(2);
          ln_clust_numb->SetLineColor(kBlack);
          //c_clust_numb->cd();

	       // Vertical lines on the x axis

          for ( Int_t i=-2;i<29;i++){
	           //ln_clust_numb->DrawLine(i+0.5,-0.5,i+0.5,36.5);
           }

	       // Vertical lines of the y axis
  
          for (Int_t i=1; i<=h_clust_numb->GetNbinsY(); i++) {
    
               ln_clust_numb->SetLineStyle(2);
               ln_clust_numb->SetLineColor(kBlack);
               //ln_clust_numb->DrawLine(-1.5,h_clust_numb->GetYaxis()->GetBinUpEdge(i),29.5,h_clust_numb->GetYaxis()->GetBinUpEdge(i));
            }

           //c_clust_numb->Print("../VTP_PLOTS/SIZE_OF_CLUSTERS.pdf"); 























}//end of the program
	
