/*
  Display NPS calorimeter waveforms
  Block ids, positions (increase from left to right, bottom to top)
  How to use:
  Input: hallc_replay rootfile, should have adcSampWaveform filled
  From root session
    > .x wfview.C("<root file name>")
    > show_next_event()        --- to see the next event
    > show_prev_event()        --- to see the previous event
    > show_event(int eventNum) --- show waveforms for a given event 
    > zoom(int block#)         --- show waveform for a given block, on a separate canvas. Run show_next_event() and click the canvas to update
*/

const int nx = 30;
const int ny = 36;
const int fNChannel = 1080;
const int fNSample = 110;
const int fMaxArray = 123000;

static TTree *tree;
static TCanvas *c1, *c2;
static unsigned current = 0;
static TH1D **hH = 0;

Int_t    NadcSampWaveform;
Double_t adcSampWaveform[fMaxArray];
Double_t wf[fNChannel][fNSample];

static void decode_array(void)
{
  int this_block = 0;
  int counter = 0;
  for(int i=0; i<NadcSampWaveform; i++) {
    // find block ids
    if(i%(fNSample + 2)==0) {
      this_block = adcSampWaveform[i];
      //recent sample counter
      counter = 0;
      continue;      
    }
    // sample number
    if(i%(fNSample + 2)==1)
      continue;
    
    // only looking for block 0-1079
    if(this_block > fNChannel -1) continue;
    
    wf[this_block][counter] = adcSampWaveform[i];
    counter++;
  }
}

static void zoom(int blockid)
{
  // zoom in plot for a particular block
  if(!c2)
    c2 = new TCanvas("c2", "c2");
  
  auto hh = hH[blockid];
  c2->cd();
  hh->Draw();
}

static void show_next_event( void )
{
  tree->GetEntry(current++);
  decode_array();
  cout << "Event: " << current << endl;

  for(int ix=0; ix<nx; ix++)
    for(int iy=0; iy<ny; iy++) {
      int blockid = iy*nx + ix;
      auto hh = hH[blockid];
      
      for(int ismp=0; ismp<fNSample; ismp++)
	hh->SetBinContent(ismp+1, wf[blockid][ismp]);
      
      int cid = -(iy-ny+1)*nx + ix + 1;
      c1->cd(cid);
      hh->Draw();
    }// ix..iy

}

static void show_prev_event( void )
{
  current -= 2;
  show_next_event();

}

static void show_event(int ievt)
{
  current = ievt-1;
  show_next_event();  
}

static void show_this_event( void )
{
  current -= 1;
  show_next_event();
}

void wfview(TString fin)
{

  gStyle->SetOptStat(0);

  auto file = new TFile(fin);
  tree = (TTree*)file->Get("T");

  {
    c1 = new TCanvas("c1", "NPS Waveforms", 0, 0, nx*100, ny*100);
    c1->Divide(nx, ny, 0, 0);

    tree->SetBranchAddress("Ndata.NPS.cal.fly.adcSampWaveform", &NadcSampWaveform);
    tree->SetBranchAddress("NPS.cal.fly.adcSampWaveform",       adcSampWaveform);

    hH = new TH1D*[nx*ny]; // do it once
    for(int ix=0; ix<nx; ix++)
      for(int iy=0; iy<ny; iy++) {
	int ich = iy*nx + ix;
	TString hname; hname.Form("wf_%d", ich);
	hH[ich] = new TH1D(hname.Data(), hname.Data(), fNSample, 0, fNSample);
      }
    
  }

  show_this_event();
}
