#include <TChain.h>
#include <TH2F.h>
#include <TCanvas.h>

void make_plot(int RunNo, int EventNo){
    TChain ch_T("T");
    ch_T.Add(Form("../../ROOTfiles/NPS/nps_coin_%d.root",RunNo));
    ch_T.SetBranchStatus("*",false);
    ch_T.SetBranchStatus("H.hod.1x.adcPosSampWaveform",true);
    ch_T.SetBranchStatus("H.hod.1x.adcNegSampWaveform",true);
    ch_T.SetBranchStatus("H.hod.1y.adcPosSampWaveform",true);
    ch_T.SetBranchStatus("H.hod.1y.adcNegSampWaveform",true);
    ch_T.SetBranchStatus("H.hod.2x.adcPosSampWaveform",true);
    ch_T.SetBranchStatus("H.hod.2x.adcNegSampWaveform",true);
    ch_T.SetBranchStatus("H.hod.2y.adcPosSampWaveform",true);
    ch_T.SetBranchStatus("H.hod.2y.adcNegSampWaveform",true);
    ch_T.SetBranchStatus("T.hms.hFADC_TREF_ROC1_adcPulseTimeRaw",true);
    ch_T.SetBranchStatus("T.hms.hT1_tdcTimeRaw",true);
    ch_T.SetBranchStatus("T.hms.hT2_tdcTimeRaw",true);
    ch_T.SetBranchStatus("T.hms.hDCREF1_tdcTimeRaw",true);
    ch_T.SetBranchStatus("T.hms.hDCREF2_tdcTimeRaw",true);
    ch_T.SetBranchStatus("T.hms.hDCREF3_tdcTimeRaw",true);
    ch_T.SetBranchStatus("T.hms.hDCREF4_tdcTimeRaw",true);
    ch_T.SetBranchStatus("T.hms.hDCREF5_tdcTimeRaw",true);
    ch_T.SetBranchStatus("H.cal.1pr.adcPosSampWaveform",true);

    Double_t H_hod_1x_adcPosSampWaveform[2032], H_hod_1x_adcNegSampWaveform[2032];
    ch_T.SetBranchAddress("H.hod.1x.adcPosSampWaveform",&H_hod_1x_adcPosSampWaveform);
    ch_T.SetBranchAddress("H.hod.1x.adcNegSampWaveform",&H_hod_1x_adcNegSampWaveform);
    Double_t H_hod_1y_adcPosSampWaveform[1270], H_hod_1y_adcNegSampWaveform[1270];
    ch_T.SetBranchAddress("H.hod.1y.adcPosSampWaveform",&H_hod_1y_adcPosSampWaveform);
    ch_T.SetBranchAddress("H.hod.1y.adcNegSampWaveform",&H_hod_1y_adcNegSampWaveform);
    Double_t H_hod_2x_adcPosSampWaveform[2032], H_hod_2x_adcNegSampWaveform[2032];
    ch_T.SetBranchAddress("H.hod.2x.adcPosSampWaveform",&H_hod_2x_adcPosSampWaveform);
    ch_T.SetBranchAddress("H.hod.2x.adcNegSampWaveform",&H_hod_2x_adcNegSampWaveform);
    Double_t H_hod_2y_adcPosSampWaveform[1270], H_hod_2y_adcNegSampWaveform[1270];
    ch_T.SetBranchAddress("H.hod.2y.adcPosSampWaveform",&H_hod_2y_adcPosSampWaveform);
    ch_T.SetBranchAddress("H.hod.2y.adcNegSampWaveform",&H_hod_2y_adcNegSampWaveform);
    Double_t T_hms_hFADC_TREF_ROC1_adcPulseTimeRaw;
    Double_t T_hms_hT1_tdcTimeRaw, T_hms_hT2_tdcTimeRaw;
    Double_t T_hms_hDCREF1_tdcTimeRaw,T_hms_hDCREF2_tdcTimeRaw,T_hms_hDCREF3_tdcTimeRaw,T_hms_hDCREF4_tdcTimeRaw,T_hms_hDCREF5_tdcTimeRaw;
    ch_T.SetBranchAddress("T.hms.hFADC_TREF_ROC1_adcPulseTimeRaw",&T_hms_hFADC_TREF_ROC1_adcPulseTimeRaw);
    ch_T.SetBranchAddress("T.hms.hT1_tdcTimeRaw",&T_hms_hT1_tdcTimeRaw);
    ch_T.SetBranchAddress("T.hms.hT2_tdcTimeRaw",&T_hms_hT2_tdcTimeRaw);
    ch_T.SetBranchAddress("T.hms.hDCREF1_tdcTimeRaw",&T_hms_hDCREF1_tdcTimeRaw);
    ch_T.SetBranchAddress("T.hms.hDCREF2_tdcTimeRaw",&T_hms_hDCREF2_tdcTimeRaw);
    ch_T.SetBranchAddress("T.hms.hDCREF3_tdcTimeRaw",&T_hms_hDCREF3_tdcTimeRaw);
    ch_T.SetBranchAddress("T.hms.hDCREF4_tdcTimeRaw",&T_hms_hDCREF4_tdcTimeRaw);
    ch_T.SetBranchAddress("T.hms.hDCREF5_tdcTimeRaw",&T_hms_hDCREF5_tdcTimeRaw);
    Double_t H_cal_1pr_adcPosSampWaveform[1651];
    ch_T.SetBranchAddress("H.cal.1pr.adcPosSampWaveform",&H_cal_1pr_adcPosSampWaveform);

    int NofBins_hodo_1x_Pos = 125, NofChannels_hodo_1x_Pos = 16;
    int NofBins_hodo_1x_Neg = 125, NofChannels_hodo_1x_Neg = 16;
    int NofBins_hodo_1y_Pos = 125, NofChannels_hodo_1y_Pos = 10;
    int NofBins_hodo_1y_Neg = 125, NofChannels_hodo_1y_Neg = 10;
    int NofBins_hodo_2x_Pos = 125, NofChannels_hodo_2x_Pos = 16;
    int NofBins_hodo_2x_Neg = 125, NofChannels_hodo_2x_Neg = 16;
    int NofBins_hodo_2y_Pos = 125, NofChannels_hodo_2y_Pos = 10;
    int NofBins_hodo_2y_Neg = 125, NofChannels_hodo_2y_Neg = 10;
    
    /*
    ch_T.GetEntry(0);
    int NofBins_hodo_1x_Pos, NofChannels_hodo_1x_Pos;
    NofBins_hodo_1x_Pos = H_hod_1x_adcPosSampWaveform[1];
    NofChannels_hodo_1x_Pos = sizeof(H_hod_1x_adcPosSampWaveform)/sizeof(H_hod_1x_adcPosSampWaveform[0])/(NofBins_hodo_1x_Pos+2);
    int NofBins_hodo_1x_Neg, NofChannels_hodo_1x_Neg;
    NofBins_hodo_1x_Neg = H_hod_1x_adcNegSampWaveform[1];
    NofChannels_hodo_1x_Neg = sizeof(H_hod_1x_adcNegSampWaveform)/sizeof(H_hod_1x_adcNegSampWaveform[0])/(NofBins_hodo_1x_Neg+2);
    int NofBins_hodo_1y_Pos, NofChannels_hodo_1y_Pos;
    NofBins_hodo_1y_Pos = H_hod_1y_adcPosSampWaveform[1];
    NofChannels_hodo_1y_Pos = sizeof(H_hod_1y_adcPosSampWaveform)/sizeof(H_hod_1y_adcPosSampWaveform[0])/(NofBins_hodo_1y_Pos+2);
    int NofBins_hodo_1y_Neg, NofChannels_hodo_1y_Neg;
    NofBins_hodo_1y_Neg = H_hod_1y_adcNegSampWaveform[1];
    NofChannels_hodo_1y_Neg = sizeof(H_hod_1y_adcNegSampWaveform)/sizeof(H_hod_1y_adcNegSampWaveform[0])/(NofBins_hodo_1y_Neg+2);
    int NofBins_hodo_2x_Pos, NofChannels_hodo_2x_Pos;
    NofBins_hodo_2x_Pos = H_hod_2x_adcPosSampWaveform[1];
    NofChannels_hodo_2x_Pos = sizeof(H_hod_2x_adcPosSampWaveform)/sizeof(H_hod_2x_adcPosSampWaveform[0])/(NofBins_hodo_2x_Pos+2);
    int NofBins_hodo_2x_Neg, NofChannels_hodo_2x_Neg;
    NofBins_hodo_2x_Neg = H_hod_2x_adcNegSampWaveform[1];
    NofChannels_hodo_2x_Neg = sizeof(H_hod_2x_adcNegSampWaveform)/sizeof(H_hod_2x_adcNegSampWaveform[0])/(NofBins_hodo_2x_Neg+2);
    int NofBins_hodo_2y_Pos, NofChannels_hodo_2y_Pos;
    NofBins_hodo_2y_Pos = H_hod_2y_adcPosSampWaveform[1];
    NofChannels_hodo_2y_Pos = sizeof(H_hod_2y_adcPosSampWaveform)/sizeof(H_hod_2y_adcPosSampWaveform[0])/(NofBins_hodo_2y_Pos+2);
    int NofBins_hodo_2y_Neg, NofChannels_hodo_2y_Neg;
    NofBins_hodo_2y_Neg = H_hod_2y_adcNegSampWaveform[1];
    NofChannels_hodo_2y_Neg = sizeof(H_hod_2y_adcNegSampWaveform)/sizeof(H_hod_2y_adcNegSampWaveform[0])/(NofBins_hodo_2y_Neg+2);
   */

    TH2F* h_hodo_1x_Pos[NofChannels_hodo_1x_Pos];
    TH2F* h_hodo_1x_Neg[NofChannels_hodo_1x_Neg];
    TH2F* h_hodo_1y_Pos[NofChannels_hodo_1y_Pos];
    TH2F* h_hodo_1y_Neg[NofChannels_hodo_1y_Neg];
    TH2F* h_hodo_2x_Pos[NofChannels_hodo_2x_Pos];
    TH2F* h_hodo_2x_Neg[NofChannels_hodo_2x_Neg];
    TH2F* h_hodo_2y_Pos[NofChannels_hodo_2y_Pos];
    TH2F* h_hodo_2y_Neg[NofChannels_hodo_2y_Neg];
    TH2F* h_cal_1pr_Neg[13];
    TH1F* h_TDC[8];
    for(int ChannelNo=0;ChannelNo<NofChannels_hodo_1x_Pos;ChannelNo++){
        h_hodo_1x_Pos[ChannelNo] = new TH2F(Form("h_hodo_1x_Pos_%i",ChannelNo),
                        Form("hodo_1x_Pos_channel[%i]",ChannelNo),1000,0,NofBins_hodo_1x_Pos,1000,0,1000);
    }
    for(int ChannelNo=0;ChannelNo<NofChannels_hodo_1x_Neg;ChannelNo++){
        h_hodo_1x_Neg[ChannelNo] = new TH2F(Form("h_hodo_1x_Neg%i",ChannelNo),
                        Form("hodo_1x_Pos_channel[%i]",ChannelNo),1000,0,NofBins_hodo_1x_Neg,1000,0,1000);
    }
    for(int ChannelNo=0;ChannelNo<NofChannels_hodo_1y_Pos;ChannelNo++){
        h_hodo_1y_Pos[ChannelNo] = new TH2F(Form("h_hodo_1y_Pos_%i",ChannelNo),
                        Form("hodo_1y_Pos_channel[%i]",ChannelNo),1000,0,NofBins_hodo_1y_Pos,1000,0,1000);
    }
    for(int ChannelNo=0;ChannelNo<NofChannels_hodo_1y_Neg;ChannelNo++){
        h_hodo_1y_Neg[ChannelNo] = new TH2F(Form("h_hodo_1y_Neg%i",ChannelNo),
                        Form("hodo_1y_Pos_channel[%i]",ChannelNo),1000,0,NofBins_hodo_1y_Neg,1000,0,1000);
    }
    for(int ChannelNo=0;ChannelNo<NofChannels_hodo_2x_Pos;ChannelNo++){
        h_hodo_2x_Pos[ChannelNo] = new TH2F(Form("h_hodo_2x_Pos_%i",ChannelNo),
                        Form("hodo_2x_Pos_channel[%i]",ChannelNo),1000,0,NofBins_hodo_2x_Pos,1000,0,1000);
    }
    for(int ChannelNo=0;ChannelNo<NofChannels_hodo_2x_Neg;ChannelNo++){
        h_hodo_2x_Neg[ChannelNo] = new TH2F(Form("h_hodo_2x_Neg%i",ChannelNo),
                        Form("hodo_2x_Pos_channel[%i]",ChannelNo),1000,0,NofBins_hodo_2x_Neg,1000,0,1000);
    }
    for(int ChannelNo=0;ChannelNo<NofChannels_hodo_2y_Pos;ChannelNo++){
        h_hodo_2y_Pos[ChannelNo] = new TH2F(Form("h_hodo_2y_Pos_%i",ChannelNo),
                        Form("hodo_2y_Pos_channel[%i]",ChannelNo),1000,0,NofBins_hodo_2y_Pos,1000,0,1000);
    }
    for(int ChannelNo=0;ChannelNo<NofChannels_hodo_2y_Neg;ChannelNo++){
        h_hodo_2y_Neg[ChannelNo] = new TH2F(Form("h_hodo_2y_Neg%i",ChannelNo),
                        Form("hodo_2y_Pos_channel[%i]",ChannelNo),1000,0,NofBins_hodo_2y_Neg,1000,0,1000);
    }

    for(int i=0;i<13;i++){
        h_cal_1pr_Neg[i] = new TH2F(Form("h_cal_1pr_Neg_%i",i),
                        Form("cal_1pr_Neg_channel[%i]",i),1000,0,125,1000,0,1000);
    }

    h_TDC[0] = new TH1F("T.hms.hFADC_TREF_ROC1_adcPulseTimeRaw","T.hms.hFADC_TREF_ROC1_adcPulseTimeRaw",100,40,70);
    // h_TDC[1] = new TH1F("T.hms.hT1_tdcTimeRaw","T.hms.hT1_tdcTimeRaw",100,19000,20000);
    // h_TDC[2] = new TH1F("T.hms.hT2_tdcTimeRaw","T.hms.hT2_tdcTimeRaw",100,19000,20000);
    // h_TDC[3] = new TH1F("T.hms.hDCREF1_tdcTimeRaw","T.hms.hDCREF1_tdcTimeRaw",1000,20000,23000);
    // h_TDC[4] = new TH1F("T.hms.hDCREF2_tdcTimeRaw","T.hms.hDCREF2_tdcTimeRaw",1000,20000,23000);
    // h_TDC[5] = new TH1F("T.hms.hDCREF3_tdcTimeRaw","T.hms.hDCREF3_tdcTimeRaw",1000,20000,23000);
    // h_TDC[6] = new TH1F("T.hms.hDCREF4_tdcTimeRaw","T.hms.hDCREF4_tdcTimeRaw",1000,20000,23000);
    // h_TDC[7] = new TH1F("T.hms.hDCREF5_tdcTimeRaw","T.hms.hDCREF5_tdcTimeRaw",1000,20000,23000);
    h_TDC[1] = new TH1F("T.hms.hT1_tdcTimeRaw","T.hms.hT1_tdcTimeRaw",100,0,4000);
    h_TDC[2] = new TH1F("T.hms.hT2_tdcTimeRaw","T.hms.hT2_tdcTimeRaw",100,0,4000);
    h_TDC[3] = new TH1F("T.hms.hDCREF1_tdcTimeRaw","T.hms.hDCREF1_tdcTimeRaw",100,16000,20000);
    h_TDC[4] = new TH1F("T.hms.hDCREF2_tdcTimeRaw","T.hms.hDCREF2_tdcTimeRaw",100,16000,20000);
    h_TDC[5] = new TH1F("T.hms.hDCREF3_tdcTimeRaw","T.hms.hDCREF3_tdcTimeRaw",100,16000,20000);
    h_TDC[6] = new TH1F("T.hms.hDCREF4_tdcTimeRaw","T.hms.hDCREF4_tdcTimeRaw",100,16000,20000);
    h_TDC[7] = new TH1F("T.hms.hDCREF5_tdcTimeRaw","T.hms.hDCREF5_tdcTimeRaw",100,16000,20000);

    Long64_t nentries;
    int jentry_begin = 0;
    if(EventNo==-1){
        nentries = ch_T.GetEntries();
        jentry_begin = 0;
    }
    else{
        nentries = EventNo+1;
        jentry_begin = EventNo;
    }
    
    for (Long64_t jentry=jentry_begin; jentry<nentries;jentry++) {
        cout<<jentry<<endl;
        ch_T.GetEntry(jentry);

        for(int ChannelNo=0;ChannelNo<NofChannels_hodo_1x_Pos;ChannelNo++){
            for(int i=0;i<NofBins_hodo_1x_Pos;i++){
                h_hodo_1x_Pos[ChannelNo]->Fill(i,H_hod_1x_adcPosSampWaveform[2+(2+NofBins_hodo_1x_Pos)*ChannelNo+i]);
            }
        }
        for(int ChannelNo=0;ChannelNo<NofChannels_hodo_1x_Neg;ChannelNo++){
            for(int i=0;i<NofBins_hodo_1x_Neg;i++){
                h_hodo_1x_Neg[ChannelNo]->Fill(i,H_hod_1x_adcNegSampWaveform[2+(2+NofBins_hodo_1x_Neg)*ChannelNo+i]);
            }
        }
        for(int ChannelNo=0;ChannelNo<NofChannels_hodo_1y_Pos;ChannelNo++){
            for(int i=0;i<NofBins_hodo_1y_Pos;i++){
                h_hodo_1y_Pos[ChannelNo]->Fill(i,H_hod_1y_adcPosSampWaveform[2+(2+NofBins_hodo_1y_Pos)*ChannelNo+i]);
            }
        }
        for(int ChannelNo=0;ChannelNo<NofChannels_hodo_1y_Neg;ChannelNo++){
            for(int i=0;i<NofBins_hodo_1y_Neg;i++){
                h_hodo_1y_Neg[ChannelNo]->Fill(i,H_hod_1y_adcNegSampWaveform[2+(2+NofBins_hodo_1y_Neg)*ChannelNo+i]);
            }
        }
        for(int ChannelNo=0;ChannelNo<NofChannels_hodo_2x_Pos;ChannelNo++){
            for(int i=0;i<NofBins_hodo_2x_Pos;i++){
                h_hodo_2x_Pos[ChannelNo]->Fill(i,H_hod_2x_adcPosSampWaveform[2+(2+NofBins_hodo_2x_Pos)*ChannelNo+i]);
            }
        }
        for(int ChannelNo=0;ChannelNo<NofChannels_hodo_2x_Neg;ChannelNo++){
            for(int i=0;i<NofBins_hodo_2x_Neg;i++){
                h_hodo_2x_Neg[ChannelNo]->Fill(i,H_hod_2x_adcNegSampWaveform[2+(2+NofBins_hodo_2x_Neg)*ChannelNo+i]);
            }
        }
        for(int ChannelNo=0;ChannelNo<NofChannels_hodo_2y_Pos;ChannelNo++){
            for(int i=0;i<NofBins_hodo_2y_Pos;i++){
                h_hodo_2y_Pos[ChannelNo]->Fill(i,H_hod_2y_adcPosSampWaveform[2+(2+NofBins_hodo_2y_Pos)*ChannelNo+i]);
            }
        }
        for(int ChannelNo=0;ChannelNo<NofChannels_hodo_2y_Neg;ChannelNo++){
            for(int i=0;i<NofBins_hodo_2y_Neg;i++){
                h_hodo_2y_Neg[ChannelNo]->Fill(i,H_hod_2y_adcNegSampWaveform[2+(2+NofBins_hodo_2y_Neg)*ChannelNo+i]);
            }
        }

        for(int ChannelNo=0;ChannelNo<13;ChannelNo++){
            for(int i=0;i<125;i++){
                h_cal_1pr_Neg[ChannelNo]->Fill(i,H_cal_1pr_adcPosSampWaveform[2+(2+125)*ChannelNo+i]);
            }
        }

        h_TDC[0]->Fill(T_hms_hFADC_TREF_ROC1_adcPulseTimeRaw);
        h_TDC[1]->Fill(T_hms_hT1_tdcTimeRaw);
        h_TDC[2]->Fill(T_hms_hT2_tdcTimeRaw);
        h_TDC[3]->Fill(T_hms_hDCREF1_tdcTimeRaw);
        h_TDC[4]->Fill(T_hms_hDCREF2_tdcTimeRaw);
        h_TDC[5]->Fill(T_hms_hDCREF3_tdcTimeRaw);
        h_TDC[6]->Fill(T_hms_hDCREF4_tdcTimeRaw);
        h_TDC[7]->Fill(T_hms_hDCREF5_tdcTimeRaw);
    }

    TCanvas* c_hodo_1x_Pos = new TCanvas("c_hodo_1x_Pos","c_hodo_1x_Pos",800,800);
    c_hodo_1x_Pos->Divide(4,4);
    for(int i=0;i<NofChannels_hodo_1x_Pos;i++){
       c_hodo_1x_Pos->cd(i+1);
       h_hodo_1x_Pos[i]->Draw();
    }
    TCanvas* c_hodo_1x_Neg = new TCanvas("c_hodo_1x_Neg","c_hodo_1x_Neg",800,800);
    c_hodo_1x_Neg->Divide(4,4);
    for(int i=0;i<NofChannels_hodo_1x_Neg;i++){
       c_hodo_1x_Neg->cd(i+1);
       h_hodo_1x_Neg[i]->Draw();
    }
    // TCanvas* c_hodo_1y_Pos = new TCanvas("c_hodo_1y_Pos","c_hodo_1y_Pos",800,800);
    // c_hodo_1y_Pos->Divide(4,4);
    // for(int i=0;i<NofChannels_hodo_1y_Pos;i++){
    //    c_hodo_1y_Pos->cd(i+1);
    //    h_hodo_1y_Pos[i]->Draw();
    // }
    // TCanvas* c_hodo_1y_Neg = new TCanvas("c_hodo_1y_Neg","c_hodo_1y_Neg",800,800);
    // c_hodo_1y_Neg->Divide(4,4);
    // for(int i=0;i<NofChannels_hodo_1y_Neg;i++){
    //    c_hodo_1y_Neg->cd(i+1);
    //    h_hodo_1y_Neg[i]->Draw();
    // }
    // TCanvas* c_hodo_2x_Pos = new TCanvas("c_hodo_2x_Pos","c_hodo_2x_Pos",800,800);
    // c_hodo_2x_Pos->Divide(4,4);
    // for(int i=0;i<NofChannels_hodo_2x_Pos;i++){
    //    c_hodo_2x_Pos->cd(i+1);
    //    h_hodo_2x_Pos[i]->Draw();
    // }
    // TCanvas* c_hodo_2x_Neg = new TCanvas("c_hodo_2x_Neg","c_hodo_2x_Neg",800,800);
    // c_hodo_2x_Neg->Divide(4,4);
    // for(int i=0;i<NofChannels_hodo_2x_Neg;i++){
    //    c_hodo_2x_Neg->cd(i+1);
    //    h_hodo_2x_Neg[i]->Draw();
    // }
    // TCanvas* c_hodo_2y_Pos = new TCanvas("c_hodo_2y_Pos","c_hodo_2y_Pos",800,800);
    // c_hodo_2y_Pos->Divide(4,4);
    // for(int i=0;i<NofChannels_hodo_2y_Pos;i++){
    //    c_hodo_2y_Pos->cd(i+1);
    //    h_hodo_2y_Pos[i]->Draw();
    // }
    // TCanvas* c_hodo_2y_Neg = new TCanvas("c_hodo_2y_Neg","c_hodo_2y_Neg",800,800);
    // c_hodo_2y_Neg->Divide(4,4);
    // for(int i=0;i<NofChannels_hodo_2y_Neg;i++){
    //    c_hodo_2y_Neg->cd(i+1);
    //    h_hodo_2y_Neg[i]->Draw();
    // }

    TCanvas* c_cal_1pr_Neg = new TCanvas("c_cal_1pr_Neg","c_cal_1pr_Neg",800,800);
    c_cal_1pr_Neg->Divide(4,4);
    for(int i=0;i<13;i++){
       c_cal_1pr_Neg->cd(i+1);
       h_cal_1pr_Neg[i]->Draw();
    }

    TCanvas* c_TDC = new TCanvas("c_TDC","c_TDC",800,800);
    c_TDC->Divide(3,3);
    for(int i=0;i<8;i++){
        c_TDC->cd(i+1);
        h_TDC[i]->Draw();
    }
 

   // h_hodo_1x_Pos[0]->Draw();
   // cout<<NofBins_hodo_1y_Pos<<endl;
   // cout<<NofChannels_hodo_1y_Pos<<endl;

}
