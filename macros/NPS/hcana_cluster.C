//MAIN FUNCTION

void hcana_cluster(Int_t nrun = 972, Int_t nevent = 100) {
//gStyle->SetOptStat(0);
	//CONSTANTS
	cout << nrun << nevent << endl;
const int nrows = 36; // all rows
const int ncols = 30; // all columns
int nblocks = 1080; // the precise number of blocks
TFile *f;
	
	// Tree Variables
	
Double_t nclust;
Int_t clusblocknum;
Int_t block_clusterID[1080];
Double_t clusE[100];
Double_t clusT[100];
Double_t clusX[100];
Double_t clusY[100];
Double_t clusZ[100];
f = new TFile("/net/cdaq/cdaql1data/cdaq/hallc-online-nps2023/ROOTFiles/nps_972.root", "READ");
if (f->IsOpen()){
}
else{
  cout << "File not opened" << endl;
}

        //Run over root files and trees
        /*if (nevent == 50000){
         f= new TFile(Form("../../ROOTfiles/COIN/50k/nps_hms_coin_%i_latest.root",RunNumber),"UPDATE");
        }
        else{
         f= new TFile(Form("../../ROOTfiles/COIN/PRODUCTION/nps_hms_coin_%i_latest.root",RunNumber),"UPDATE");
        }*/

	 
TChain *t;// = new TChain("T");
t= (TChain *) f->Get("T");
//t->Add(f->GetName(),-1);
t->SetBranchStatus("*",false);
t->SetBranchStatus("NPS.cal.clusE",true);
t->SetBranchStatus("NPS.cal.clusT",true);
t->SetBranchStatus("NPS.cal.clusX",true);
t->SetBranchStatus("NPS.cal.clusY",true);
t->SetBranchStatus("NPS.cal.clusZ",true);
t->SetBranchStatus("NPS.cal.fly.block_clusterID",true);
t->SetBranchStatus("NPS.cal.fly.nclust",true);
t->SetBranchAddress("NPS.cal.clusE",&clusE);
t->SetBranchAddress("NPS.cal.clusT",&clusT);
t->SetBranchAddress("NPS.cal.clusX",&clusX);
t->SetBranchAddress("NPS.cal.clusY",&clusY);
t->SetBranchAddress("NPS.cal.clusZ",&clusZ);
t->SetBranchAddress("NPS.cal.fly.block_clusterID",&block_clusterID);
t->SetBranchAddress("NPS.cal.fly.nclust",&nclust);

TH2D *h1 = new TH2D("h1","",30,0,30,36,0,36);
for (int i=0; i<30; i++){
  TString xbinlabel = Form("%d",i);
  h1->GetXaxis()->SetBinLabel(i+1,xbinlabel);
}
for (int i=0; i<36; i++){
  TString ybinlabel = Form("%d",i);
  h1->GetYaxis()->SetBinLabel(i+1,ybinlabel);
}

TRandom3 randomGenerator;
for (int i = 0; i < 1000; ++i) {
  double randomX = randomGenerator.Uniform(0,30); // Generate a random X coordinate between 0 and 1
  double randomY = randomGenerator.Uniform(0,36); // Generate a random Y coordinate between 0 and 1
  h1->Fill(randomX, randomY); // Fill the 2D histogram with the random values
}
//TCanvas *c1 = new TCanvas("c1","",800,800);
//c1->cd();
h1->Draw("colz");

TArrow* arrowX = new TArrow(0,18,30,18); 
arrowX->SetLineColor(kRed);
arrowX->SetLineStyle(1);
arrowX->SetLineWidth(2); 
arrowX->SetArrowSize(0.02); 
arrowX->Draw();
TArrow* arrowY = new TArrow(15,0,15,36); 

arrowY->SetLineColor(kRed);
arrowY->SetLineStyle(1);
arrowY->SetLineWidth(2); 
arrowY->SetArrowSize(0.02); 
arrowY->Draw();
cout << nrun << endl;
t->GetEntry(1);

int clustercounter[int(nclust)][50];
int blockcounter[int(nclust)];

for (int i = 0; i < nclust; i++){
  for (int j = 0; j < 50; j++){
    clustercounter[i][j] = 0;
  }
}


if (int (nclust) != 0){
  for (int i = 0; i < 1080; i++){
    if (block_clusterID[i] == -1){
      continue;
    }
    else{
      //clustercounter[block_clusterID[i]][blockcounter[block_clusterID[i]]] = i;
      //blockcounter[block_clusterID[i]] += 1;
    }
  }
}
else{
  cout << "Error: nclust == 0 for event " << nevent << endl;
}
cout << "In Run " << nrun << " nevent " << nevent << "We have " << nclust << " clusters"<< endl;
/*for (int i = 0; i < nclust; i++){
  cout << "For cluster " << i << " We have block ";
  for (int j = 0; j < 50; j++){
    if (blockcounter[j] == 0){
      break;
    }
    else{
      cout << clustercounter[i][j] << " ";
    }
  }
  cout << "\n";
}*/




//Double_t xCoords[] = {3.0, 4.0, 6.0, 7.0, 4.5};
//Double_t yCoords[] = {3.0, 4.0, 5.0, 7.0, 7.5};
//Int_t numPoints = sizeof(xCoords) / sizeof(yCoords);
//TPolyLine* polyLine = new TPolyLine(numPoints, xCoords, yCoords);
//polyLine->SetFillStyle(0); // Set fill style to transparent (no fill)
//polyLine->SetLineColor(kBlack); // Set line color to black
//polyLine->SetLineWidth(2);
//polyLine->Draw();
	    
}//end of the program
	








