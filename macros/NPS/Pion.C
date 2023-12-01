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
 #include "TLine.h"
 #include "TLatex.h"
 #include "TMatrixD.h"
 #include <iostream>
 #include <fstream>
 #include <vector>
 
const double_t angle = 20.61; 
const double_t convdeg = TMath::Pi()/180.;
const double_t MinClusSize = 3;
const double_t clusTmax = 152; // Changed Nov. 30 by Zheng to adopt new Cluster T Peak
const double_t clusTmin = 140;

//forward declaration;
void GetPvect(double_t clx, double_t cly,double_t clz, double_t cle, TVector3 &vtx, TVector3 &pvect);
void pi0_script();
double gausfunc(double *x, double *p);
void fit_invmass();

 
void pi0_script(int RunNo){

	TString FilePath = "../../ROOTfiles/COIN/PRODUCTION/";
    TString Input_File = FilePath + Form("nps_hms_coin_%d_latest.root",RunNo);
    TFile *f1 = new TFile(Input_File , "UPDATE");
	TTree* oldtree = (TTree *) f1 -> Get("T");
    if (!oldtree) cout << "Tree T does not find in rootfile" << endl;

	Int_t nentries = (Int_t)oldtree-> GetEntries();
	
 double_t nclust;
 // increase size to be 40, in run 2253 observed nclust > 20 caused the script to fail.
 double_t clusX[40];
 double_t clusY[40];
 double_t clusZ[40];
 double_t clusT[40];
 double_t clusE[40];
 double_t clusSize[40];

  // Vertex Position
  double_t vtx_ok;
  double_t vtx_x;
  double_t vtx_y;
  double_t vtx_z;

  // HMS golden track
  double_t gtr_ok;
  double_t gtr_dp;
  double_t etracknorm;
  double_t npesum;

  // Missing Momentum & Energy 
    Double_t pmiss = 0;
	Double_t pmissx = 0;
    Double_t pmissy = 0;
    Double_t pmissz = 0;    
    Double_t emiss = 0;

    oldtree->SetBranchStatus("*",false);
    oldtree->SetBranchStatus("NPS.cal.clusE", true);
	oldtree->SetBranchStatus("NPS.cal.clusT", true);
	oldtree->SetBranchStatus("NPS.cal.clusX", true);
    oldtree->SetBranchStatus("NPS.cal.clusY", true);
    oldtree->SetBranchStatus("NPS.cal.clusZ", true);
    oldtree->SetBranchStatus("NPS.cal.clusSize", true);
    oldtree->SetBranchStatus("NPS.cal.nclust", true);

    oldtree->SetBranchStatus("H.react.ok", true);
    oldtree->SetBranchStatus("H.react.x", true);
	oldtree->SetBranchStatus("H.react.y", true);
	oldtree->SetBranchStatus("H.react.z", true);

	oldtree->SetBranchStatus("NPS.cal.nclust", true);

    oldtree->SetBranchStatus("NPS.kin.secondary.pmiss_x", true);
    oldtree->SetBranchStatus("NPS.kin.secondary.pmiss_y", true);
    oldtree->SetBranchStatus("NPS.kin.secondary.pmiss_z", true);
    oldtree->SetBranchStatus("NPS.kin.secondary.emiss", true);
    
    oldtree->SetBranchStatus("H.gtr.ok",true);
    oldtree->SetBranchStatus("H.gtr.dp", true);

    oldtree->SetBranchStatus("H.cal.etracknorm", true);
    oldtree->SetBranchStatus("H.cer.npeSum", true);

    
    
	oldtree->SetBranchAddress("NPS.cal.clusE", clusE);
	oldtree->SetBranchAddress("NPS.cal.clusT", clusT);
	oldtree->SetBranchAddress("NPS.cal.clusX", clusX);
    oldtree->SetBranchAddress("NPS.cal.clusY", clusY);
    oldtree->SetBranchAddress("NPS.cal.clusZ", clusZ);
    oldtree->SetBranchAddress("NPS.cal.clusSize", clusSize);
    oldtree->SetBranchAddress("NPS.cal.nclust", &nclust);

    oldtree->SetBranchAddress("H.react.ok", &vtx_ok);
    oldtree->SetBranchAddress("H.react.x", &vtx_x);
	oldtree->SetBranchAddress("H.react.y", &vtx_y);
	oldtree->SetBranchAddress("H.react.z", &vtx_z);

	oldtree->SetBranchAddress("NPS.cal.nclust", &nclust);

    oldtree->SetBranchAddress("NPS.kin.secondary.pmiss_x", &pmissx);
    oldtree->SetBranchAddress("NPS.kin.secondary.pmiss_y", &pmissy);
    oldtree->SetBranchAddress("NPS.kin.secondary.pmiss_z", &pmissz);
    oldtree->SetBranchAddress("NPS.kin.secondary.emiss", &emiss);
    
    oldtree->SetBranchAddress("H.gtr.ok",&gtr_ok);
    oldtree->SetBranchAddress("H.gtr.dp", &gtr_dp);

    oldtree->SetBranchAddress("H.cal.etracknorm", &etracknorm);
    oldtree->SetBranchAddress("H.cer.npeSum", &npesum);
    
    TTree *newtree = new TTree("NPS.Pion","Cluster_info");
     
  double_t ene[2];
  double_t x[2];
  double_t y[2];
  double_t px[2];
  double_t py[2];
  double_t pz[2];
  double_t minv;
  double_t mmiss2;  
  double_t nclust_new;

    TBranch * c_ene = newtree->Branch("energy",ene,"ene[2]/D");
    TBranch * c_x = newtree->Branch("x" ,x, "x[2]/D");
    TBranch * c_y = newtree->Branch("y" ,y, "y[2]/D");
    TBranch * c_px = newtree->Branch("px" ,px, "px[2]/D");
    TBranch * c_py = newtree->Branch("py", py, "py[2]/D");
    TBranch * c_pz = newtree->Branch("pz",pz, "pz[2]/D");
    TBranch * invm = newtree->Branch("minv",&minv, "minv/D");
    TBranch * missm = newtree->Branch("mmiss2", &mmiss2, "mmiss2/D"); 
	TBranch * B_nclust = newtree->Branch("nclust",&nclust_new,"nclust_new/D");
	cout << "We have " << nentries << " Event." << endl;
    	
		for(int evt=0; evt<nentries;evt++){
		
	oldtree->GetEntry(evt);
	    if (evt % 10000 == 0) cout << "Event number = " << evt << endl;
	
	    if(abs(vtx_z)>4.) continue;

    if(nclust<2) continue;
    
    if(vtx_ok < 1) continue;
    TVector3 v_vtx(vtx_x, vtx_y, vtx_z);    

    if(pmissx>1000) continue;
    
    if(pmissy>1000) continue;
    
    if(pmissz>1000) continue;
    
    if(emiss>1000) continue;
    
    if(gtr_dp < -10 || gtr_dp > 10) continue;
    
    if(etracknorm < 0.7) continue;
    
    if(npesum < 2) continue;
    
    if(gtr_ok < 1) continue;

			for(int i=0; i<nclust;i++){			
				for(int j=i+1; j<nclust;j++){

	                if(clusSize[i] < MinClusSize || clusSize[j] <MinClusSize) continue;

	                if(clusT[i] < clusTmin || clusT[i] > clusTmax) continue;
	                if(clusT[j] < clusTmin || clusT[j] > clusTmax) continue;

                    TVector3 v_Q1, v_Q2;
	                GetPvect(clusX[i], clusY[i],clusZ[i],clusE[i], v_vtx, v_Q1);
					GetPvect(clusX[j], clusY[j],clusZ[j],clusE[j], v_vtx, v_Q2);
					
					TLorentzVector Q1;
					TLorentzVector Q2;
					TLorentzVector Q3;
					
					Q1.SetPxPyPzE(v_Q1[0], v_Q1[1], v_Q1[2], clusE[i]);
					Q2.SetPxPyPzE(v_Q2[0], v_Q2[1], v_Q2[2], clusE[j]);
					Q3=Q1+Q2;
					
					double_t im2 = Q3.M2();
					double_t invmass = sqrt(im2);
					
		            TVector3 momvec(pmissx,pmissy,pmissz);
                    pmiss = momvec.Mag();
            
                    TLorentzVector M(pmissx,pmissy,pmissz,emiss);
                    M.SetPxPyPzE(pmissx,pmissy,pmissz,emiss);
                    double_t mmass2 = M.M2();

                    nclust_new = nclust;
	                ene[0] = clusE[i];
	                ene[1] = clusE[j];
	                x[0] = clusX[i];
	                x[1] = clusX[j];
	                y[0] = clusY[i];
	                y[1] = clusY[j];
	                px[0] = Q1[0];
	                px[1] = Q2[0];
	                py[0] = Q1[1];
	                py[1] = Q2[1];
	                pz[0] = Q1[2];
                   	pz[1] = Q2[2];

	                minv = invmass;
	                mmiss2 = mmass2;
                    					
					newtree->Fill();   
				
				}
				
		    }        
	    }
	cout << "Finished filling new Tree" << endl; 
	f1->cd();
	newtree->Write();
	f1->Close();
}

void GetPvect(double_t clx, double_t cly,double_t clz, double_t cle, TVector3 &vtx, TVector3 &pvect)
{

  double nps_angle = angle * convdeg;
  
  double cth = cos(nps_angle);
  double sth = sin(nps_angle);

  double xlab = clx*cth + clz*sth - vtx.X();
  double ylab = cly - vtx.Y();
  double zlab = -clx*sth + clz*cth - vtx.Z();

  TVector3 rvect(xlab, ylab, zlab);
  double th = rvect.Theta();
  double ph = rvect.Phi();   


  pvect.SetXYZ(cle * cos(ph) * sin(th),
	       cle * sin(ph) * sin(th),
	       cle * cos(th));
  return;
}

double gausfunc(double *x, double *p)
{
    double a = 0;
    a = (x[0]-p[1])/p[2];
    double fun = p[0]*TMath::Exp(-0.5*a*a);
    return fun;
}

void fit_invmass(int RunNo)
{
    TString FilePath = "../../ROOTfiles/COIN/PRODUCTION/";
    TString Input_File = FilePath + Form("nps_hms_coin_%d_latest.root",RunNo);
    TFile * f = new TFile(Input_File , "UPDATE");
    TTree * T = (TTree *) f -> Get("NPS.Pion");

    Int_t nentries = (Int_t) T->GetEntries();

    Double_t nclust;
    Double_t minv;

    T->SetBranchAddress("nclust",&nclust);
    T->SetBranchAddress("minv", &minv);
    
    TH1F* inv_mass = new TH1F("invariant_mass","",70,0,0.3);
    
    for(int evt = 0; evt<nentries; evt++){
    T->GetEntry(evt);
    
    inv_mass -> Fill(minv);
    
    }

    //TCanvas * c1 = new TCanvas("c1", "invariant_mass");
    //c1->SetLineWidth(4);
    inv_mass -> GetXaxis()->SetTitle("Energy(GeV)");
	inv_mass -> SetLineWidth(4);
    
    //TF1 * fit = new TF1("fit","gaus",0.0967,0.126,3);
    
    inv_mass -> SetLineColor(4);
    //fit->SetParameters(1,1,1);
    //fit->SetLineColor(6);
    //fit->SetParNames("Normalization","Mean","Sigma");
    
    //inv_mass ->Fit("fit","R");
    
    // Draw fit results on plot
    //inv_mass->SetOptFit(1111);

	f->WriteTObject(inv_mass, "Pion_Invariant_Mass");
	f->Close();


}
