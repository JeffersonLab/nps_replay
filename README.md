# NPS Replay

Analysis scripts and databases for the Hall C NPS experiments

You should create a fork of this repo in your personal github account.

You can work on cdaql3 or the ifarm group directories

Starting on the cdaql3 machines:
1) login into cdaql3 through the gateway
2) cd  /data1/cdaq/eel108
3) mkdir "name"  ( make a subdirectory with your "name")
4) cd "name"
5) git clone git clone https://github.com/"githubUserName"/nps_replay
6) cd nps_replay
7) mkdir /data1/cdaq/eel108/output/ROOTfiles/"name"
8) ln -sf /data1/cdaq/eel108/output/ROOTfiles/"name" ROOTfiles
9) mkdir /data1/cdaq/eel108/output/REPORT_OUTPUT/"name"
9a) mkdir /data1/cdaq/eel108/output/REPORT_OUTPUT/"name"/NPS
9b) mkdir /data1/cdaq/eel108/output/REPORT_OUTPUT/"name"/NPS/eel108
9c) ln -sf /data1/cdaq/eel108/output/REPORT_OUTPUT REPORT_OUTPUT/"name"
10) ln -sf /data1/cdaq/NPS/ cache  ( do not have access to cache disk)
11) ln -sf /data1/cdaq/NPS/ raw

To run on the cdaql3:
1) cd /data1/cdaq/eel108/"name"/nps_replay
2) source setup.csh ( this will use the defualt hcana)
3) hcana
   hcana [0] .x SCRIPTS/NPS/eel108_replay.C(707,1000)
4) Root file will be in the ROOTfiles directory

Suggest that one makes a separate subdirectory under
/data1/cdaq/eel10/"name" for analyzing the root files
rather than in the nps_replay directory.
 

 



