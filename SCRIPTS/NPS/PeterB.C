// Filename: PeterB.C

// Makes skim files with needed variables for good el. in HMS
// and pi0 in NPS. Also makes a few histograms
// Needs runnumber
#include <stdio.h>  

void PeterB(Int_t runNumber, Int_t targ=1){

// Set up the Skim files
  TString fileNameSkim = 
    "/net/cdaq/cdaql2data/cdaq/skimfiles/Skim" ;
     //"/w/hallc-scshelf2102/nps/bosted/Skimfiles/Skim" ;
  TString fileNameSkimeff = 
    "/net/cdaq/cdaql2data/cdaq/skimfiles/Skimeff" ;
    //"/w/hallc-scshelf2102/nps/bosted/Skimfiles/Skimeff" ;
  TString fileNameChist = 
    "/net/cdaq/cdaql2data/cdaq/skimfiles/Skimhist" ;
    //"/w/hallc-scshelf2102/nps/bosted/Skimfiles/Hhist" ;
  TString fileNameSkimnps = 
    "/net/cdaq/cdaql2data/cdaq/skimfiles/Skimnps" ;
  fileNameSkim += runNumber; 
  fileNameSkimeff += runNumber; 
  fileNameChist += runNumber; 
  fileNameSkimnps += runNumber; 
  fileNameSkim += ".txt"; 
  fileNameSkimeff += ".txt"; 
  fileNameChist += ".top";
  fileNameSkimnps += ".txt"; 
  //fileNameSkim += "_20K.txt"; 
  //fileNameSkimp += "_20K.txt"; 
  FILE *f2 = fopen(fileNameSkim,"w");
  //  FILE *f5 = fopen(fileNameSkimeff,"w");
  //  FILE *f4 = fopen("test.top","w");
  FILE *f6 = fopen(fileNameChist,"w");
  FILE *f7 = fopen("blktime.txt","w");
  FILE *f8 = fopen(fileNameSkimnps,"w");

// open the rootfile to be analyzed
  //TString fileNameD = "/w/hallc-scifs17exp/c-sidis18/bosted/ROOTfiles/" ;
  //  if(runNumber<1710) {
  //  TString fileNameD = 
  //    "/net/cdaq/cdaql1data/cdaq/hallc-online-nps2023/ROOTFiles/COIN/PRODUCTION/";}
  TString fileNameD = 
    "/net/cdaq/cdaql2data/cdaq/hallc-online-nps2023/ROOTfiles/COIN/PRODUCTION/";
  // "/work/hallc/nps/bosted/ROOTFILES/";
  //  fileNameD += "nps_hms_coin_1582_7150k_events.root" ;
 fileNameD += "nps_hms_coin_"; //read the root file from data
 fileNameD += runNumber; //read the root file from data
  //  fileNameD += "_1_-1.root"; //read the root file from data
 fileNameD += "_50k_events.root"; //read the root file from dat
 

  TFile *f1 = new TFile(fileNameD);
  if(f1->GetSize()!=-1){ 

  TTree *tt = (TTree*)f1->Get("T");
  //get the relevant branch
  int nentriesD = tt->GetEntries();
  cout<<"Entries:\t"<<nentriesD<<endl;

  gROOT->SetBatch(kTRUE);
  
  Double_t HgtrX, HgtrTh, HgtrPh, hdelta ; 
  Double_t hdcx,hdcxp,hdcy,hdcyp ; 
  Double_t evtType, HgtrP ;
  Double_t cointime, HhodStatus, starttime, fptime, paeronpe,paeropt[99],paeront[99],paeroptd[99],paerontd[99];
  Double_t ntime,xexit,yexit ; 
  Double_t hbeta, hcalepr, hcaletot, hcernpe ;
  Double_t sum1,sum2,counters[10],ethcntr[10];
  Double_t  helmpsa,helnega,helposa,hgtry,pgtry,pcaltot,pgdsc,gdtrk,trkeff,trkeffer,prf, hrf, prfraw, hrfraw, hztar, pztar,trkeffg,trkeffger,trkefft,trkeffter,htof1,htof2 ;
  Double_t  hgdsc,htrkeff,htrkeffer,phbig,ppbig,t1big,t2big,sum3,sum4,sum5,sum6,sum7,sum8 ;
  Double_t hel1,helpred,helrep,helmps,helnqrt,hcaltot ;  
  Int_t  helmpsi,helnegi,helposi,icc,chist[100],chistp[100],chistpt[100];
  Int_t chistpg[100],chistt[100],chistg[100], cltimehist6[100] ;
  Int_t t16diffh[100],td1h[100],td6h[100], td16h[100] ;
  Int_t ctxh[100][20], ctyh[100][20],eclhist[100][20];
  Int_t cteh[100][20] ;
  Int_t ctimehist[120], cltimehist[120], vcltimehist[100] ;
  Int_t evtypecnr[10],ptdcmulth[15],icluster;
  Double_t trig1tdc,trig6tdc,edtmtdc ;
  Double_t  hdchit1,hdchit2,hntrk,ngcorr ;
  Double_t  clusE[10000],clusX[10000],clusY[10000],clusT[10000] ;
  Double_t  vclusE[10000],vclusX[10000],vclusY[10000],vclusT[10000] ;
  Int_t vclusSize[10000] ;
  int vnclus ;
  Double_t nclust,block_e[2000],cluster_ID[2000] ;
  Double_t block_x[2000],block_y[2000],block_t[2000] ;
  Double_t ctpi1,ctpi2,hst,pst,hpst;
  Int_t nchist[100], mallhist[100], mbesthist[100] ;
  Int_t epihist[100], mvbesthist[100], msbesthist[100] ;
  Int_t cthist1[120],cthist6[120],cthist16[120],cthist0[120] ;  
  Int_t eoverphist[100],cerhist[100],blktimeh[1080][20] ;  
  Int_t nevnt=0, trg1,trg6,ic1,ic2,iclo,ichi,clth[100][5];
  Int_t nevntall=0;
  Double_t enorm = 30. ; 

  if(runNumber>1656) enorm = 2.4 ;
  if(runNumber>1710) enorm = 1.3 ;

  for(icc=0 ; icc<100 ;  icc++) {
    nchist[icc]=0. ;
    mallhist[icc]=0. ;
    mbesthist[icc]=0. ;
    mvbesthist[icc]=0. ;
    msbesthist[icc]=0. ;
    epihist[icc]=0. ;
    ctimehist[icc]=0 ;
    cthist0[icc]=0 ;
    cthist1[icc]=0 ;
    cthist6[icc]=0 ;
    cthist16[icc]=0 ;
    cltimehist[icc]=0 ;
    cltimehist6[icc]=0 ;
    vcltimehist[icc]=0 ;
    t16diffh[icc]=0 ;
    td1h[icc]=0 ;
    td16h[icc]=0 ;
    td6h[icc]=0 ;
    for(int jj=0 ; jj<20 ; jj++) {
      ctxh[icc][jj]=0 ;
      ctyh[icc][jj]=0 ;
      eclhist[icc][jj]=0 ;
      cteh[icc][jj]=0 ;
    }
  }
  for(icc=0 ; icc<1080 ;  icc++) {
    for(int jj=0 ; jj<20 ; jj++) {
      blktimeh[icc][jj]=0 ;
    }
  }
  for(icc=0 ; icc<100 ;  icc++) {
    for(int jj=0 ; jj<5 ; jj++) {
      clth[icc][jj]=0 ;
    }
  }
  for(icc=0 ; icc<120 ;  icc++) {
    ctimehist[icc]=0 ;
    cthist0[icc]=0 ;
    cthist1[icc]=0 ;
    cthist6[icc]=0 ;
    cthist16[icc]=0 ;
  }
  for(icc=0 ; icc<10 ;  icc++) {
    counters[icc]=0 ;
    ethcntr[icc]=0 ;
    evtypecnr[icc]=0 ;
  }
 
  tt->SetBranchAddress("H.dc.x_fp",  &hdcx); 
  tt->SetBranchAddress("H.dc.y_fp",  &hdcy); 
  tt->SetBranchAddress("H.dc.xp_fp", &hdcxp); 
  tt->SetBranchAddress("H.dc.yp_fp", &hdcyp); 
  tt->SetBranchAddress("H.gtr.y", &hgtry); 
  tt->SetBranchAddress("H.gtr.x", &HgtrX); 
  tt->SetBranchAddress("H.gtr.p", &HgtrP); 
  tt->SetBranchAddress("H.gtr.beta", &hbeta); 
  tt->SetBranchAddress("H.gtr.dp", &hdelta);   
  tt->SetBranchAddress("H.gtr.th", &HgtrTh);   
  tt->SetBranchAddress("H.gtr.ph", &HgtrPh);   
  tt->SetBranchAddress("H.react.z", &hztar);  
  tt->SetBranchAddress("H.cal.eprtracknorm", &hcalepr);
  tt->SetBranchAddress("H.cal.etottracknorm", &hcaletot);  
  tt->SetBranchAddress("H.cal.etotnorm", &hcaltot); 
  tt->SetBranchAddress("H.cer.npeSum", &hcernpe); 
  tt->SetBranchAddress("H.hod.goodscinhit", &hgdsc);

  tt->SetBranchAddress("T.helicity.hel",&hel1) ;
  tt->SetBranchAddress("T.helicity.helpred",&helpred) ;
  tt->SetBranchAddress("T.helicity.helrep",&helrep) ; 
  tt->SetBranchAddress("T.helicity.mps",&helmps) ;
  tt->SetBranchAddress("T.helicity.nqrt",&helnqrt) ;
                    
  tt->SetBranchAddress("H.hod.starttime", &starttime);       

  tt->SetBranchAddress("CTime.epCoinTime1_ROC1", &ctpi1);
  tt->SetBranchAddress("CTime.epCoinTime2_ROC1", &ctpi2);
  tt->SetBranchAddress("H.hod.fpHitsTime", &fptime); 
  tt->SetBranchAddress("H.dc.ntrack", &hntrk); 
  
  tt->SetBranchAddress("NPS.cal.nclust", &nclust); 
  tt->SetBranchAddress("NPS.cal.clusE", &clusE); 
  tt->SetBranchAddress("NPS.cal.clusX", &clusX); 
  tt->SetBranchAddress("NPS.cal.clusY", &clusY); 
  tt->SetBranchAddress("NPS.cal.clusT", &clusT); 
  tt->SetBranchAddress("NPS.cal.fly.block_clusterID",&cluster_ID);
  tt->SetBranchAddress("NPS.cal.fly.e",&block_e) ;
  tt->SetBranchAddress("NPS.cal.fly.x",&block_x) ;
  tt->SetBranchAddress("NPS.cal.fly.y",&block_y) ;
  tt->SetBranchAddress("NPS.cal.fly.goodAdcTdcDiffTime",&block_t) ;
  tt->SetBranchAddress("NPS.cal.vtpClusE",&vclusE);
  tt->SetBranchAddress("NPS.cal.vtpClusSize",&vclusSize);
  tt->SetBranchAddress("NPS.cal.vtpClusTime",&vclusT);
  tt->SetBranchAddress("NPS.cal.vtpClusX",&vclusX);
  tt->SetBranchAddress("NPS.cal.vtpClusY",&vclusY);
  tt->SetBranchAddress("Ndata.NPS.cal.vtpClusY",&vnclus);
  tt->SetBranchAddress("T.hms.npsTRIG1_tdcTimeRaw",&trig1tdc);
  tt->SetBranchAddress("T.hms.npsTRIG6_tdcTimeRaw",&trig6tdc);
  tt->SetBranchAddress("T.hms.hEDTM_tdcTimeRaw",&edtmtdc);
  Double_t ctimepi, ctimepinew, ctimeK, ctimep,ctimeraw,tmp ;                          
  //  fprintf(f2,"  0.00  0.00 0.00\n") ;

// Start of loop over events
  for (int kk=0; kk<nentriesD;  kk++){
//  for (int kk=0; kk<10000;  kk++){

    tt->GetEntry(kk);
    evtType = tt->GetLeaf("fEvtHdr.fEvtType")->GetValue(); 
    if(kk>0 && kk<10) printf("kk,evtype %d %3.1f edtm=%8.1f %8.1f %8.1f \n",kk,evtType,edtmtdc,trig1tdc, trig6tdc) ;
// skip etdm events and no-track HMS events
    if(edtmtdc<0.1 && hdelta > -15. && hdelta < 15.) {
// look at HMS 
    if(hdelta>-100. && hdelta<100. &&
      HgtrTh>-1. && HgtrTh<1. && hcaletot>0.001 &&
      HgtrPh>-1. && HgtrPh<1. ) {
      if(kk>300 && kk<400) printf("HMS %d %3.1f %6.2f %7.4f %7.4f %5.2f %5.2f\n",
	kk,evtType,hdelta,HgtrTh,HgtrPh,hcaletot,hcernpe) ;
      /*    fprintf(f7,"%6.2f %7.4f %7.4f %7.4f %7.4f %7.4f %7.4f\n",
	    hdelta,HgtrTh,HgtrPh,hdcx,hdcxp,hdcy,hdcyp) ; */
    }

// normalize cluster energies
    for(int n1=0 ; n1 < nclust ; n1++) {
      clusE[n1] *= enorm ;
    }
    
// normalize block energies
    for(int n1=0 ; n1 < 1080 ; n1++) {
      block_e[n1] *= enorm ;
    }

// look at NPS
    if(kk>10 && kk<300 && nclust > 1.) {
      printf("ct= %8.2f %8.2f %8.0f %8.0f %8.0f %8.0f %8.0f \n",
        ctpi1,ctpi2,trig1tdc,trig6tdc,edtmtdc,starttime,fptime) ;
      printf("kk=%d et=%3.1f nclust= %6.1f vnclus=%d\n",
	     kk,evtType,nclust,vnclus) ;
      if(nclust>0) {
       int ic=100 ;
       if(nclust<ic) ic = nclust ;
       for(int i=0 ; i < ic ; i++) {
         if(clusE[i]>0.3) {
           printf("%5d %6.3f %5.1f %5.1f %5.1f \n",
		  i,clusE[i],clusX[i],clusY[i],clusT[i]) ;
	   for(int j=0 ; j < 1080 ; j++) {
	     icluster = (int)cluster_ID[j] ; 
	     if(icluster == i && block_e[j]>0.) 
	     printf("      %4d %3d %10.4f %10.4f \n",
		  j,icluster,block_e[j],block_t[j]) ;
	   }
	 }
       }
     }
/*     if(vnclus>0) {
       int ic=100 ;
       if(vnclus<ic) ic = vnclus ;
         for(int i=0 ; i < ic ; i++) {
           if(vclusE[i]>400.)
	   printf("%d %5.0f %5.1f %5.1f  %5.1f \n",
		  i,vclusE[i],vclusX[i],vclusY[i],vclusT[i]) ;
		  } */
    }
// dump out VTP
    int nbig=0 ;
    int nmed=0.;
    for(int i=0 ; i < vnclus ; i++) {
      if(vclusE[i]>1400.) nbig++ ;
      if(vclusE[i]>500.) nmed++ ;
    }

    /*    if(nbig<1 && nmed<2){
      fprintf(f7,"epcointime=%.2f \n",ctpi1);
      fprintf(f7,"event=%d nVTPcluters=%d\n trig1tdc=%8.0f trig6tdc=%8.0f edtm=%.1f\n",kk,vnclus,trig1tdc,trig6tdc,edtmtdc) ;
      fprintf(f7,"incex  energy  X   Y  time\n");
      for(int i=0 ; i < vnclus ; i++) {
       fprintf(f7,"%5d %6.0f %5.1f %5.1f  %5.1f \n",
		  i,vclusE[i],vclusX[i],vclusY[i],vclusT[i]) ;
      }
      } */

// Get helicity: differene for sping18 and later
// xxx need to fix
    helmpsi = 0 ;
    if(helmps > 0) helmpsi = 1 ;
    helnegi = 0 ;
    if(hel1 < 0) helnegi = 1 ;
    helposi = 0 ;
    if(hel1 > 0) helposi = 1 ;

    counters[0] = counters[0]+1 ;
    
    if(hdelta > -20 && hdelta < 20) {
      counters[1] = counters[1]+1 ;
    }

// ncluster histogram
    icc = nclust ; 
    if(icc < 0) icc = 0 ;
    if(icc > 99) icc = 99 ;
    nchist[icc]++ ;

// coin time histogram all events
    icc = ctpi1 - 50 ;
    if(icc < 0) icc = 0 ;
    if(icc > 119) icc = 119 ;
    ctimehist[icc]++ ;

// cluster time hist all events
    for(int n1=0 ; n1 < nclust ; n1++) {
      icc = (int)clusT[n1] - 105 ; 
      if(icc < 0) icc = 0 ;
      if(icc > 99) icc = 99 ;
      if(clusE[n1]>0.3) cltimehist[icc]++ ;
    }
// cluster time hist all vtp events
    for(int n1=0 ; n1 < vnclus ; n1++) {
      icc = (int)clusT[n1] - 105 ; 
      if(icc < 0) icc = 0 ;
      if(icc > 99) icc = 99 ;
      if(vclusE[n1]>400) vcltimehist[icc]++ ;
    }

// Look for the two cluster most likely to be a pi0, if >2
    int n1best = 0 ; 
    int n2best = 1 ;
    Double_t ebest = 0. ;
    Double_t mbest = 0. ;
    Double_t massmin = 10000. ;
    Double_t dnps = 310. ; // targ to NPS dist.
    if(nclust > 1 && nclust <2000) {
      for(int n1=0 ; n1 < nclust-1 ; n1++) {
        for(int n2=n1+1 ; n2 < nclust ; n2++) {
          Double_t tdiff = clusT[n1] - clusT[n2] ;
	  if(tdiff > -8. && tdiff < 8.) {
            Double_t xdiff = clusX[n1] - clusX[n2] ;
            Double_t ydiff = clusY[n1] - clusY[n2] ;
	    Double_t theta = sqrt(xdiff * xdiff + ydiff * ydiff) / dnps ;
	    Double_t sth2 = sin(theta/2.) ;
	    Double_t sinsq = sth2 * sth2 ; 
	    Double_t mass = sqrt(4. * clusE[n1] * clusE[n2] * sinsq) ;
	    Double_t chkk = sqrt(2.*clusE[n1]*clusE[n2]*theta*theta/2.) ;
	    Double_t mdiff = mass - 0.135 ; 
	    if(kk<10) printf("%d %d %6.1f %6.1f %6.3f %6.3f %6.3f\n",n1,n2,xdiff,ydiff,theta,mass,chkk) ;  
	    icc = (int)(mass / 0.135 * 50) ;
            if(icc < 0) icc = 0 ;
	    if(icc > 99) icc = 99 ;
	    mallhist[icc]++ ;
	    if(mdiff < 0) mdiff = -1.0 * mdiff ;
	    if(mdiff < massmin) {
	      massmin = mdiff ;
	      ebest = (clusE[n1] + clusE[n2]) ;
	      mbest = mass ; 
	      n1best = n1 ;
	      n2best = n2 ;
	    }
	  }
	}
      }
    }
    if(ebest > 0.) {
     icc = (int)(mbest / 0.135 * 50.) ;
     if(icc < 0) icc = 0 ;
     if(icc > 99) icc = 99 ;
     mbesthist[icc]++ ;
     if(clusT[n1best]>146. && clusT[n1best]<158.&&
        clusT[n2best]>146. && clusT[n2best]<158.) mvbesthist[icc]++ ;
     if(clusT[n1best]>146. && clusT[n1best]<158.&&
        clusE[n1best]>0.8  && clusE[n2best]>0.8 &&
        clusT[n2best]>146. && clusT[n2best]<158.) {
       msbesthist[icc]++ ;
// good pi0 in coincidence peak
       if(clusT[n1best]>148. && clusT[n1best]<156.&&
         clusT[n2best]>148. && clusT[n2best]<156. &&
	  mbest>0.11 && mbest<0.16) {
         icc = (int)(ebest * 10.) ;
         if(icc<0) icc = 0 ;
         if(icc > 99) icc = 99 ;
         epihist[icc]++ ;
	 ethcntr[0]++;
	 if(clusE[n1best]>0.6  && clusE[n2best]>0.6) ethcntr[1]++; 
	 if(clusE[n1best]>0.65  && clusE[n2best]>0.65) ethcntr[2]++; 
	 if(clusE[n1best]>0.7   && clusE[n2best]>0.70) ethcntr[3]++; 
	 if(clusE[n1best]>0.75  && clusE[n2best]>0.75) ethcntr[4]++; 
	 if(clusE[n1best]>0.8   && clusE[n2best]>0.80) ethcntr[5]++; 
	 if(clusE[n1best]>0.85  && clusE[n2best]>0.85) ethcntr[6]++; 
	 if(clusE[n1best]>0.90  && clusE[n2best]>0.90) ethcntr[7]++; 
	 if(clusE[n1best]>0.95  && clusE[n2best]>0.95) ethcntr[8]++; 
	 if(clusE[n1best]>1.0   && clusE[n2best]>1.00) ethcntr[9]++; 
       }
     }
    }
    
// Electron in HMS and 2 clusters in NPS
    if(hdelta > -18 && hdelta < 18. && 
              hcaletot>0.6 && hcernpe > 0.5 ) { 

      counters[2] = counters[2]+1 ;

      icc = ctpi1 - 50. ;
      if(icc < 0) icc = 0 ;
      if(icc > 119) icc = 119 ;
      ic1 = clusE[n1best]/0.05 ;
      ic2 = clusE[n2best]/0.05 ;
      if(ic1<0) ic1=0 ; if(ic1>99) ic1=99 ;
      if(ic2<0) ic2=0 ; if(ic2>99) ic2=99 ;
      ichi = -100 ;
      iclo = -100 ;
      if(clusE[n1best] > clusE[n2best]){
	ichi = ic1 ; iclo = ic2 ;
      } else {
	ichi = ic2 ; iclo = ic1 ;
      }
      if(ichi<0 || iclo<0) printf("error %d %d %.0f %.0f\n",
       iclo,ichi,trig1tdc,trig6tdc) ;

      int j1= clusT[n1best]  - ctpi1 ;
      int j2= clusT[n2best]  - ctpi1 ;
      if(kk>1000 && kk<1010) Printf
	("ct,cl1,cl2 %d %d %8.2f %8.2f %8.2f\n", 
	 j1,j2,ctpi1, clusT[n1best],clusT[n2best]) ;
      if(j1<0) j1=0 ; if(j1>99) j1=99 ;
      if(j2<0) j2=0 ; if(j2>99) j2=99 ;

      trg1 = 0 ;
      if(trig1tdc>31400 && trig1tdc<35000) trg1 = 1;
      trg6 = 0 ;
      if(trig6tdc>31400 && trig6tdc<35000) trg6 = 1;

      if(mbest>0.11 && mbest<0.16 && nclust>1 &&
	 clusT[iclo] - clusT[ichi] > -5.0 &&
	 clusT[iclo] - clusT[ichi] <  5.0 ) {
	if(trg6>0 && trg1==0) {
         eclhist[iclo][0]++ ;
         eclhist[ichi][1]++ ;
	 td1h[j1]++ ;
	 td16h[j2]++ ;
	}
	if(trg1>0 && trg6==0) { 
         eclhist[iclo][2]++ ;
         eclhist[ichi][3]++ ;
	 td6h[j1]++ ;
	 td6h[j2]++ ;
	}
      }  

      if(trg1>0 && trg6==0) cthist1[icc]++ ;

      if(trg1>0 && trg6>0) {
        cthist16[icc]++ ;
        icc = (trig1tdc - trig6tdc)/10.  + 50 ;
	if(icc<0) icc=0 ; if(icc>99) icc = 99 ;
	t16diffh[icc]++ ;
      }
      if(trg6>0 && trg1==0) {
       cthist6[icc]++ ;
      }
      if(trg1==0 && trg6==0) {
        cthist1[icc]++ ;
	printf("error, no trig1 or trg6 %.0f %.0f \n",trig1tdc,trig6tdc) ;
      }
      if(mbest>0.1 && mbest<0.2 && kk>2000 && kk<2050) 
        printf("%7.3f %7.1f %8.1f %8.1f %d %d \n",mbest,ctpi1,
         trig1tdc,trig6tdc,trg1,trg6) ;
// cluster times for trig6 only
      if(trg6>0 && trg1==0) {
        for(int n1=0 ; n1 < nclust ; n1++) {
        icc = (int)clusT[n1] - 105 ; 
        if(icc < 0) icc = 0 ;
        if(icc > 99) icc = 99 ;
        if(clusE[n1]>0.3) cltimehist6[icc]++ ;
	}
      }
// histos of cluster time for good pi0 mass
      iclo = n1best ; ichi = n2best ;
      if(clusE[n1best] > clusE[n2best]){
       iclo = n2best ; ichi = n1best ;
      }
      if(mbest>0.11 && mbest<0.16 && nclust>1 &&
	 iclo > -1 && ichi > -1) {
	icc = (clusT[iclo] - 140.)/0.2 ;
	if(icc > -1 && icc < 100) clth[icc][0]++ ;
	icc = (clusT[ichi] - 140.)/0.2 ;
	if(icc > -1 && icc < 100) clth[icc][1]++ ;
        double avt = (clusT[n2best] + clusT[n2best]) / 2. ;
	icc = (avt - 140.)/0.2 ;
	if(icc > -1 && icc < 100) clth[icc][2]++ ;
        avt = (clusT[n2best] * clusE[n1best] + 
              clusT[n2best] * clusE[n2best]) / 
    	     (clusE[n1best] + clusE[n2best]) ;
	icc = (avt - 140.)/0.2 ;
	if(icc > -1 && icc < 100) clth[icc][3]++ ;
// starting with run 1860 or so, this no longer needed!
/*	icc = avt - starttime - 55 ;
	if(icc > -1 && icc < 100) clth[icc][2]++ ;
	icc = avt - fptime - 55 ;
	if(icc > -1 && icc < 100) clth[icc][3]++ ; */
      }

      ctpi2 = 0. ; //xxx temporary

      if(ctpi2 > -30. && ctpi2 < 30) { 
	counters[3] = counters[3]+1 ;
	if(nclust>1 && mbest > 0. &&
          clusE[n1best] > -999. && clusE[n1best] <999. &&
          clusX[n1best] > -999. && clusX[n1best] <999. &&
          clusY[n1best] > -999. && clusY[n1best] <999. &&
          clusT[n1best] > -999. && clusT[n1best] <999. &&
          clusE[n2best] > -999. && clusE[n2best] <999. &&
          clusX[n2best] > -999. && clusX[n2best] <999. &&
          clusY[n2best] > -999. && clusY[n2best] <999. &&
	  clusT[n2best] > -999. && clusT[n2best] <999.) { 
  	  counters[4] = counters[4]+1 ;
	  fprintf(f2,
"%6.2f %1d %1d %1d %6.2f %7.4f %7.4f %6.2f %7.4f %7.4f %6.2f %6.2f %7.4f %7.4f %7.4f %7.2f %7.2f %7.2f %7.4f %7.2f %7.2f %7.2f   \n",
	  ctpi2,(int)hel1+1,(int)helrep+1,(int)helmps+1,
          hdelta,HgtrTh,HgtrPh,hcernpe,hcalepr,hcaletot,
	  hdcx, hdcy, hdcxp, hdcyp,
	  clusE[n1best],clusX[n1best],clusY[n1best],clusT[n1best],
	  clusE[n2best],clusX[n2best],clusY[n2best],clusT[n2best]) ;
// write out block energies for good clusters for calibration
//	  fprintf(f8,"%10.5f %10.5f %10.5f %10.5f %3d %3d \n",mbest,ebest,
//		  clusE[n1best],clusE[n2best],n1best,n2best) ;
	  double etot  =clusE[n1best]+clusE[n2best] ;
          for(int j=0 ; j < 2 ; j++) {
	    int nn=0 ;
	    if(j == 0) nn = n1best ;
	    if(j == 1) nn = n2best ;
	    if(kk>500 && kk<700)
            printf("%5d %6.3f %5.1f %5.1f %5.1f \n",
		  j,clusE[nn],clusX[nn],clusY[nn],clusT[nn]) ;
            for(int i=0 ; i < 1080 ; i++) {
	      icluster = (int)cluster_ID[i] ; 
  	      if(icluster > nn - 0.5  && icluster < nn+0.5
                && block_e[i]>0.) {
 	        fprintf(f2,"%4d %3d %8.4f %8.1f \n",
		  i,icluster,block_e[i],block_t[i]) ;
		int jj = block_t[i] - 142. ;
		if(jj > -1 && jj<20) blktimeh[i][jj]++ ;
	        if(kk>500 && kk<700) 
                  printf("%4d %3d %8.4f %8.1f \n",
		  i,icluster,block_e[i],block_t[i]) ;
		if(block_e[i] > etot/5.) {
		  int j = (clusX[nn] + 30.)/3. ;
		  int jy = (clusY[nn] + 36.)/3. ;
		  int je = clusE[nn]/0.2 ;
		  if(je<0) je=0 ; if(je>19) je=19 ;
		  int i = ctpi1 - 50. ;
		  if(i>=0 && i<100 && j>=0 && j<20 &&
		     jy>0 && jy<20) {
		    ctxh[i][0]++ ; 
		    ctyh[i][0]++ ; 
		    cteh[i][0]++ ; 
		    ctxh[i][j]++ ; 
		    ctyh[i][jy]++ ; 
		    cteh[i][je]++ ; 
		  }
		}
	      }
	    }
	  fprintf(f2,"  -1     0.000 \n") ;
	  }
	} // values in range 
      } // cointime check
    }  // delta, PID cut
   }  // edtm check
  } // loop over events
  

  for(icc=0 ; icc<100 ; icc++){
    printf("%2d %4d %4d %4d %4d %4d %4d %4d %4d %4d %4d %4d \n",
      icc,nchist[icc],mallhist[icc],mbesthist[icc],
      mvbesthist[icc],msbesthist[icc],
      epihist[icc],cthist1[icc],cthist6[icc],
	   cthist16[icc],cltimehist[icc],cltimehist6[icc]);
	   //ctimehist[icc],cltimehist[icc],vcltimehist[icc]) ;
  }
  for(icc=0 ; icc<100 ; icc++){
    printf("%2d %4d %4d %4d %4d %4d %4d %4d %5d  \n",
	   icc,t16diffh[icc],td1h[icc],td16h[icc],td6h[icc],
           eclhist[icc][0],eclhist[icc][1],eclhist[icc][2],
           eclhist[icc][3]) ;
  }
  /*  for(int i=0 ; i<100 ; i++){
    printf("%2d %4d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d\n",
  i,ctxh[i][0],ctxh[i][1],ctxh[i][2], ctxh[i][3], ctxh[i][4], ctxh[i][5],
    ctxh[i][6], ctxh[i][7], ctxh[i][8], ctxh[i][9], ctxh[i][10],ctxh[i][11],
    ctxh[i][12],ctxh[i][13],ctxh[i][14],ctxh[i][15],ctxh[i][16],ctxh[i][17],
    ctxh[i][18],ctxh[i][19]) ;
  }
  for(int i=0 ; i<100 ; i++){
    printf("%2d %4d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d\n",
  i,ctyh[i][0],ctyh[i][1],ctyh[i][2], ctyh[i][3], ctyh[i][4], ctyh[i][5],
    ctyh[i][6], ctyh[i][7], ctyh[i][8], ctyh[i][9], ctyh[i][10],ctyh[i][11],
    ctyh[i][12],ctyh[i][13],ctyh[i][14],ctyh[i][15],ctyh[i][16],ctyh[i][17],
    ctyh[i][18],ctyh[i][19]) ;
  }

  for(int i=0 ; i<100 ; i++){
    printf("%2d %4d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d %2d\n",
  i,cteh[i][0],cteh[i][1],cteh[i][2], cteh[i][3], cteh[i][4], cteh[i][5],
    cteh[i][6], cteh[i][7], cteh[i][8], cteh[i][9], cteh[i][10],cteh[i][11],
    cteh[i][12],cteh[i][13],cteh[i][14],cteh[i][15],cteh[i][16],cteh[i][17],
    cteh[i][18],cteh[i][19]) ;
  }
  */
  for(icc=0 ; icc<99 ; icc++){
    printf(" %2d %5d %5d %5d %5d  \n",icc,clth[icc][0],
	   clth[icc][1],clth[icc][2],clth[icc][3]) ;
  }

  for(icc=0 ; icc<5 ; icc++){
    printf(" %7.0f %7.3f \n",counters[icc],
	   counters[icc]/counters[0]) ;
  }
  for(icc=0 ; icc<10 ; icc++){
    printf(" %.2f %7.0f %7.3f \n",0.05*(icc+11),ethcntr[icc],
	   ethcntr[icc]/ethcntr[0]) ;
  }
  for(int i=0 ; i<1080 ; i++){
    fprintf(f7,"%4d ",i) ;
    for(int j=0 ; j<19 ; j++) fprintf(f7," %2d",blktimeh[i][j]) ;
    fprintf(f7," %2d \n",blktimeh[i][19]) ;
    //printf(" %4d %2d \n",i,blktimeh[i][19]) ;
  }

//topdrawer plots
  fprintf(f6,"set device postscript \n") ;
// pi0 mass
  fprintf(f6," set window x 1 of 2 y 1 of 2\n") ;
  fprintf(f6," title bottom 'M0GG1 (GeV)' \n") ;
  fprintf(f6," case         ' XGGX'\n") ;
  fprintf(f6," title top 'run %d' \n",runNumber) ;
  for(icc=20 ; icc<80 ; icc++){
    fprintf(f6,"%.3f %d\n",0.135/50.*(icc-0.5),mbesthist[icc]) ;
  }
  fprintf(f6,"hist\n") ;
  for(icc=20 ; icc<80 ; icc++){
    fprintf(f6,"%.3f %d\n",0.135/50.*(icc-0.5),mvbesthist[icc]) ;
  }
  fprintf(f6,"hist\n") ;
  for(icc=20 ; icc<80 ; icc++){
    fprintf(f6,"%.3f %d\n",0.135/50.*(icc-0.5),msbesthist[icc]) ;
  }
  fprintf(f6,"hist\n") ;
// pi0 energy
  fprintf(f6," set window x 2 of 2 y 1 of 2\n") ;
  fprintf(f6," title bottom 'E0GG1 (GeV)' \n") ;
  fprintf(f6," case         ' XGGX'\n") ;
  fprintf(f6," title top 'run %d' \n",runNumber) ;
  for(icc=1 ; icc<80 ; icc++){
    fprintf(f6,"%.3f %d\n",0.1*(icc-0.5),epihist[icc]) ;
  }
  fprintf(f6,"hist\n") ;
// Cointime
  fprintf(f6," set window x 1 of 2 y 2 of 2\n") ;
  fprintf(f6," title bottom 'Cluster time (nsec)' \n") ;
  fprintf(f6," title top 'black low E  blue high E' \n") ;
  for(icc=1 ; icc<100 ; icc++){
    fprintf(f6,"%.3f %d\n",0.2*(icc-0.5)+140.,clth[icc][0]) ;
  }
  fprintf(f6,"hist\n") ;
  fprintf(f6," set color blue \n") ;
  for(icc=1 ; icc<119 ; icc++){
    fprintf(f6,"%.3f %d\n",0.2*(icc-0.5)+140.,clth[icc][1]) ;
  }
  fprintf(f6,"hist\n") ;

  fprintf(f6," set color white \n") ;
  fprintf(f6," set window x 2 of 2 y 2 of 2\n") ;
  fprintf(f6," title bottom 'Cointime(nsec)' \n") ;
  fprintf(f6," title top '2-photon ave black:straight blue: e-weighted' \n") ;
  for(icc=1 ; icc<100 ; icc++){
    fprintf(f6,"%.3f %d\n",0.2*(icc-0.5)+140.,clth[icc][2]) ;
  }
  fprintf(f6,"hist\n") ;
  fprintf(f6," set color blue \n") ;
  for(icc=1 ; icc<119 ; icc++){
    fprintf(f6,"%.3f %d\n",0.2*(icc-0.5)+140.,clth[icc][3]) ;
  }
  fprintf(f6,"hist\n") ;


  fprintf(f2,"  0.00  0.00 0.00\n") ;

  fclose(f2) ;
  //  fclose(f5) ;
  fclose(f6) ;
  } else {
      printf("--------\n") ;
      printf("run %d not FOUND\n",runNumber) ;
      printf("--------\n") ;

    gSystem->Exit(1) ;
  } 

  gROOT
->SetBatch(kFALSE);

  gSystem->Exit(1) ; 
}

