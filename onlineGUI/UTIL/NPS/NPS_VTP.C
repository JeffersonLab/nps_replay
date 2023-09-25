/*******************************
 * NPS VTP ONLINEGUI
 *
 * 
 *******************************/

void NPS_VTP(int opt){
  TH1F* H1;
  TH1F* H2;
  TH1F* H3;
  TH1F* H4;
  TH1F* H5;
  TH2F* H6;
  TH2F* H7;
  TH2F* H8;
  TH2F* H9;
  TH2F* H10;
  TH2F* H11;
  
  H1 = (TH1F*) gDirectory->Get("h_vtp_cluster_energy");
  H2 = (TH1F*) gDirectory->Get("h_vtp_cluster_size");
  H3 = (TH1F*) gDirectory->Get("h_vtp_cluster_time");
  H4 = (TH1F*) gDirectory->Get("h_vtp_cluster_x_position");
  H5 = (TH1F*) gDirectory->Get("h_vtp_cluster_y_position");
  H6 = (TH2F*) gDirectory->Get("h_Mean_Amp");
  H7 = (TH2F*) gDirectory->Get("h_Amp");
  H8 = (TH2F*) gDirectory->Get("h_time1");
  H9 = (TH2F*) gDirectory->Get("h_time");
  H10 = (TH2F*) gDirectory->Get("h_clust_numb1");
  H11 = (TH2F*) gDirectory->Get("h_clust_numb");
 

  //H1->GetXaxis()->SetTitle("");   
  if(opt == 1){
     gStyle->SetOptStat(0);
     gStyle->SetOptFit(0);
     H1->Draw();
     gPad->SetLogy();
  }
  if(opt == 2){
     gStyle->SetOptStat(0);
     gStyle->SetOptFit(0);
     H2->Draw();
     gPad->SetLogy();
  }
  if(opt == 3){
     gStyle->SetOptStat(0);
     gStyle->SetOptFit(0);
     H3->Draw();
     gPad->SetLogy();
  }
  if(opt == 4){
     gStyle->SetOptStat(0);
     gStyle->SetOptFit(0);
     H4->Draw();
     gPad->SetLogy();
  }
  if(opt == 5){
     gStyle->SetOptStat(0);
     gStyle->SetOptFit(0);
     H5->Draw();
     gPad->SetLogy();
  }
  if(opt == 6){
     gStyle->SetTitleAlign(33);
     gStyle->SetTitleX(.99);
     gStyle->SetPalette(kRainBow);
     gPad->SetLogz();
     H6->Draw("COLZ");
     H7->Draw("textsame");
     TLine *ln_Amp = new TLine();
     ln_Amp->SetLineStyle(2);
     ln_Amp->SetLineColor(kBlack);
     for ( Int_t i=-1;i<29;i++){
	     ln_Amp->DrawLine(i+0.5,-0.5,i+0.5,35.5);
           }

     // Vertical lines of the y axis
  
     for (Int_t i=1; i<=H7->GetNbinsY(); i++) {
    
             ln_Amp->SetLineStyle(2);
             ln_Amp->SetLineColor(kBlack);
             ln_Amp->DrawLine(-0.5,H7->GetYaxis()->GetBinUpEdge(i),29.5,H7->GetYaxis()->GetBinUpEdge(i));
            }
  }
  if(opt == 7){
     gStyle->SetPalette(kRainBow);
     gStyle->SetTitleAlign(33);
     gStyle->SetTitleX(.99);
     gPad->SetLogz();
     H8->Draw("COLZ");
     H9->Draw("textsame");
     TLine *ln_Amp = new TLine();
     ln_Amp->SetLineStyle(2);
     ln_Amp->SetLineColor(kBlack);
     for ( Int_t i=-1;i<29;i++){
	     ln_Amp->DrawLine(i+0.5,-0.5,i+0.5,35.5);
           }

     // Vertical lines of the y axis
  
     for (Int_t i=1; i<=H9->GetNbinsY(); i++) {
    
             ln_Amp->SetLineStyle(2);
             ln_Amp->SetLineColor(kBlack);
             ln_Amp->DrawLine(-0.5,H9->GetYaxis()->GetBinUpEdge(i),29.5,H9->GetYaxis()->GetBinUpEdge(i));
            }

  }
  if(opt == 8){
   gStyle->SetPalette(kRainBow);
     gStyle->SetTitleAlign(33);
     gStyle->SetTitleX(.99);
     gPad->SetLogz();
     H10->Draw("COLZ");
     H11->Draw("textsame");
     TLine *ln_Amp = new TLine();
          ln_Amp->SetLineStyle(2);
          ln_Amp->SetLineColor(kBlack);
          //c_clust_numb->cd();

	       // Vertical lines on the x axis

          for ( Int_t i=-1;i<29;i++){
	     ln_Amp->DrawLine(i+0.5,-0.5,i+0.5,35.5);
           }

     // Vertical lines of the y axis
  
     for (Int_t i=1; i<=H11->GetNbinsY(); i++) {
    
             ln_Amp->SetLineStyle(2);
             ln_Amp->SetLineColor(kBlack);
             ln_Amp->DrawLine(-0.5,H11->GetYaxis()->GetBinUpEdge(i),29.5,H11->GetYaxis()->GetBinUpEdge(i));
            }
  }
}
