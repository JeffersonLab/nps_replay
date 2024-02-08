/*******************************
 * NPS PED ONLINEGUI TESTING
 *
 * 
 *******************************/

void NPS_CONFIG_PED(){
  gStyle->SetOptStat(0);
  TH1F* H1;
  TH1F* H2;
  
  H1 = (TH1F*) gDirectory->Get("h_Mean_Ped");
  H2 = (TH1F*) gDirectory->Get("h_Ped");

  //Specify the canvas

  gStyle->SetTitleAlign(33);
  gStyle->SetTitleX(.99);
  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);
  H2->GetZaxis()->SetLabelOffset(-0.05);

     //Draw vertical and horizontal lines to delimit blocks

     
     H2->Draw("colz");
     H1->Draw("text,same");
        TLine *ln_Ped = new TLine();
         ln_Ped->SetLineStyle(2);
         ln_Ped->SetLineColor(kBlack);
         

	 // Vertical lines on the x axis

           for ( Int_t i=-1;i<29;i++){
	     ln_Ped->DrawLine(i+0.5,-0.5,i+0.5,35.5);
           }

	 // Vertical lines of the y axis
  
           for (Int_t i=1; i<=h_Ped->GetNbinsY(); i++) {
    
               ln_Ped->SetLineStyle(2);
               ln_Ped->SetLineColor(kBlack);
               ln_Ped->DrawLine(-0.5,h_Ped->GetYaxis()->GetBinUpEdge(i),29.5,h_Ped->GetYaxis()->GetBinUpEdge(i));
            }
     

}
