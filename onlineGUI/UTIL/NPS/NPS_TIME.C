/*******************************
 * NPS TIME ONLINEGUI TESTING
 *
 * 
 *******************************/

void NPS_TIME(){
  TH2F* H1;
  TH2F* H2;
  
  H1 = (TH2F*) gDirectory->Get("Time");
  H2 = (TH2F*) gDirectory->Get("Time_Mean");

  //Specify the canvas

  gStyle->SetTitleAlign(33);
  gStyle->SetTitleX(.99);
  H2->GetZaxis()->SetLabelOffset(-0.05);

     //Draw vertical and horizontal lines to delimit blocks

     
     H2->Draw("colz");
     H1->Draw("text,same");
     TLine *ln_Amp = new TLine();
     ln_Amp->SetLineStyle(2);
     ln_Amp->SetLineColor(kBlack);
     

     // Vertical lines on the x axis

     for ( Int_t i=-1;i<29;i++){
	     ln_Amp->DrawLine(i+0.5,-0.5,i+0.5,35.5);
           }

     // Vertical lines of the y axis
  
     for (Int_t i=1; i<=H1->GetNbinsY(); i++) {
    
             ln_Amp->SetLineStyle(2);
             ln_Amp->SetLineColor(kBlack);
             ln_Amp->DrawLine(-0.5,H1->GetYaxis()->GetBinUpEdge(i),29.5,H1->GetYaxis()->GetBinUpEdge(i));
            }

}
