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
