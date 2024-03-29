/*******************************
 * NPS INT ONLINEGUI TESTING
 *
 * 
 *******************************/

void NPS_INT(){
  gStyle->SetOptStat(0);
  TH2F* H1;
  TH2F* H2;
  
  H1 = (TH2F*) gDirectory->Get("Integral");
  H2 = (TH2F*) gDirectory->Get("Integral_Mean");

  //Specify the canvas

  gStyle->SetTitleAlign(33);
  gStyle->SetTitleX(.99);
  gPad->SetLogz(1);

     //Draw vertical and horizontal lines to delimit blocks

     

     int numcontour = 17;
     Double_t contourlevels[17] = {0,1,2,3,4,5,6,7,8,9,10,15,20,25,30,35,1500}; 
     H2->SetContour(numcontour,contourlevels);
     H2->GetZaxis()->SetTickSize(0.01);
     H2->GetZaxis()->SetLabelOffset(-0.05);
     H2->GetZaxis()->SetRangeUser(0,1500);
      H2->Draw("colz,CJUST=0.0");
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
