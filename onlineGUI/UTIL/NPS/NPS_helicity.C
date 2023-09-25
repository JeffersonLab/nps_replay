/*******************************
 * NPS AMP ONLINEGUI TESTING
 *
 * 
 *******************************/

void NPS_helicity(int opt){
  TH1D* H1;
  TH1D* H2;
  TH1D* H3;
  TH2D* H4;
  
  H1 = (TH1D*) gDirectory->Get("h_hel");
  H2 = (TH1D*) gDirectory->Get("h_hel_diff");
  H3 = (TH1D*) gDirectory->Get("h_hel_actual");
  H4 = (TH2D*) gDirectory->Get("h_hel_vs_ev");

  //H1->GetXaxis()->SetTitle("");   
  if(opt == 1){
     H1->GetXaxis()->SetTitle("Helicity");
     H1->GetYaxis()->SetTitle("evNum");
     H1->Draw();
  }
  if(opt == 2){
     H2->GetXaxis()->SetTitle("Helicity_diff");
     H2->GetYaxis()->SetTitle("evNum");
     H2->Draw();
  }
  if(opt == 3){
     H3->GetXaxis()->SetTitle("ScalerHelicity");
     H3->GetYaxis()->SetTitle("evNum(always all events)");
     H3->Draw();
  }
  if(opt == 4){
     H4->GetXaxis()->SetTitle("evNum(always all events)");
     H4->GetYaxis()->SetTitle("ScalerHelicity");
     H4->Draw("colz");
  }
}
