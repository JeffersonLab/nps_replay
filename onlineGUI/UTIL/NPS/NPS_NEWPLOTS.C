/*******************************
 * NPS AMP ONLINEGUI TESTING
 *
 * 
 *******************************/

void NPS_NEWPLOTS(int opt){
  TH2D* H1;
  TH2D* H2;
  TH2D* H3;
  TH1D* H4;
  TH1D* H5;
  TH1D* H6;
  TH2D* H7;
  TH2D* H8;
  
  H1 = (TH2D*) gDirectory->Get("TimeBlock");
  H2 = (TH2D*) gDirectory->Get("TimeBlock_Zoom");
  H3 = (TH2D*) gDirectory->Get("AmpBlock");
  H4 = (TH1D*) gDirectory->Get("TotalHit");
  H5 = (TH1D*) gDirectory->Get("TotalGoodHit");
  H6 = (TH1D*) gDirectory->Get("GoodHitPerBlock");
  H7 = (TH2D*) gDirectory->Get("PulseBlock");
  H8 = (TH2D*) gDirectory->Get("GoodPulseBlock");
  //H1->GetXaxis()->SetTitle("");   
  if(opt == 1){
     H1->GetXaxis()->SetTitle("Block_Number");
     H1->GetYaxis()->SetTitle("Timing(ns)");
     H1->Draw("colz");
  }
  if(opt == 2){
     H2->GetXaxis()->SetTitle("Block_Number");
     H2->GetYaxis()->SetTitle("Timing(ns)");
     H2->Draw("colz");
  }
  if(opt == 3){
     H3->GetXaxis()->SetTitle("Block_Number");
     H3->GetYaxis()->SetTitle("Amplitude(mV)");
     H3->Draw("colz");
  }
  if(opt == 4){
     H4->GetXaxis()->SetTitle("#_of_Events_Above_4mV");
     H4->Draw();
  }
  if(opt == 5){
     H5->GetXaxis()->SetTitle("#_of_Events_Above_4mV_Pass_Timing_Cut");
     H5->Draw();
  }
  if(opt == 6){
     H6->GetXaxis()->SetTitle("Block_Number");
     H6->Draw();
  }
  if(opt == 7){
     H7->GetXaxis()->SetTitle("Block_Number");
     H7->GetYaxis()->SetTitle("#_of_Pulse");
     H7->Draw("colz");
  }
  if(opt == 8){
     H8->GetXaxis()->SetTitle("Block_Number");
     H8->GetYaxis()->SetTitle("#_of_Pulse");
     H8->Draw("colz");
  }
}
