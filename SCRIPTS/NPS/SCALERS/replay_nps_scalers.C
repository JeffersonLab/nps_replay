#include "MultiFileRun.h"

void replay_nps_scalers(int RunNumber=0, int MaxEvent=0, int FirstEvent = 1, int MaxSegment = 1, int FirstSegment = 0, const char* fname_prefix = "nps_coin")
{

  // Get RunNumber and MaxEvent if not provided.
  if(RunNumber == 0) {
    cout << "Enter a Run Number (-1 to exit): ";
    cin >> RunNumber;
    if( RunNumber<=0 ) return;
  }
  if(MaxEvent == 0) {
    cout << "\nNumber of Events to analyze: ";
    cin >> MaxEvent;
    if(MaxEvent == 0) {
      cerr << "...Invalid entry\n";
      exit;
    }
  }

  // Create file name patterns.
  //  const char* RunFileNamePattern="NPS_3crate_%d.evio.0";
  const char* RunFileNamePattern="%s_%d.dat.%u"; 
  vector<string> pathList;
  pathList.push_back(".");
  pathList.push_back("./raw");
  pathList.push_back("./raw/../raw.copiedtotape");
  pathList.push_back("./cache");
  pathList.push_back("/net/cdaq/cdaql1data/coda/data/raw");

  const char* ROOTFileNamePattern;
  ROOTFileNamePattern = "ROOTfiles/NPS/SCALERS/nps_replay_scalers_%d_%d_%d.root";

  // Add variables to global list.
  gHcParms->Define("gen_run_number", "Run Number", RunNumber); 
  gHcParms->AddString("g_ctp_database_filename", "DBASE/NPS/standard_coin.database");  // FIXME: DBASE FOR HMS+NPS;
  gHcParms->Load(gHcParms->GetString("g_ctp_database_filename"), RunNumber);
  gHcParms->Load(gHcParms->GetString("g_ctp_parm_filename"));
  gHcParms->Load(gHcParms->GetString("g_ctp_kinematics_filename"), RunNumber);
  gHcParms->Load(gHcParms->GetString("g_ctp_det_calib_filename"));
  gHcParms->Load(gHcParms->GetString("g_ctp_bcm_calib_filename"));
  gHcParms->Load(gHcParms->GetString("g_ctp_bpm_calib_filename"));
  gHcParms->Load(gHcParms->GetString("g_ctp_optics_filename"));
  // Load parameters for SHMS trigger configuration
  gHcParms->Load(gHcParms->GetString("g_ctp_trig_config_filename"));
  // Load hpcentral momentum offset 
  //gHcParms->Load("PARAM/HMS/GEN/hpcentral_function_sp18.param");
  // Load fadc debug parameters
  gHcParms->Load("PARAM/HMS/GEN/h_fadc_debug_sp18.param");

  // Load params for COIN trigger configuration
  gHcParms->Load("PARAM/TRIG/thms_fa22.param"); //FIXME: I modified here to see if we can get waveforms from HODO ADCs.

   
  // Load the Hall C style detector map 
  gHcDetectorMap = new THcDetectorMap();
  gHcDetectorMap->Load("MAPS/NPS/DETEC/pcal_nps_coin.map"); //FIXME: CHANGE TO COIN MAP

  // Add trigger apparatus
  THaApparatus* TRG = new THcTrigApp("T", "TRG");
  gHaApps->Add(TRG);
  // Add trigger apparatus
  THcTrigDet* hms = new THcTrigDet("hms", "HMS Trigger Information");
  TRG->AddDetector(hms); 

  THcHelicityScaler *hhelscaler = new THcHelicityScaler("H", "Hall C helicity scaler");
  //hhelscaler->SetDebugFile("HHelScaler.txt");
  hhelscaler->SetROC(5);
  hhelscaler->SetUseFirstEvent(kTRUE);
  gHaEvtHandlers->Add(hhelscaler);
  THcHelicity* helicity = new THcHelicity("helicity", "Helicity Detector");
  TRG->AddDetector(helicity);

  // Add event handler for EPICS events
  THaEpicsEvtHandler* hcepics = new THaEpicsEvtHandler("epics", "HC EPICS event type 180");
  gHaEvtHandlers->Add(hcepics);
  // Add handler for scaler events
  THcScalerEvtHandler *hscaler = new THcScalerEvtHandler("H", "Hall C scaler event type 2");  
  hscaler->AddEvtType(1);
  //  hscaler->AddEvtType(140);
  hscaler->AddEvtType(129);
  hscaler->AddEvtType(130);
  hscaler->SetDelayedType(129);
  hscaler->SetDelayedType(130);
  hscaler->SetUseFirstEvent(kTRUE);
  gHaEvtHandlers->Add(hscaler);

  // Add event handler for DAQ configuration event
  THcConfigEvtHandler *hconfig = new THcConfigEvtHandler("hconfig", "Hall C configuration event handler");
  gHaEvtHandlers->Add(hconfig);

  THcAnalyzer* analyzer = new THcAnalyzer;

  // A simple event class to be output to the resulting tree.
  // Creating your own descendant of THaEvent is one way of
  // defining and controlling the output.
  THaEvent* event = new THaEvent;

  //Define the run(s) that we want to analyze.
  //THcRun* run = new THcRun( pathList, Form(RunFileNamePattern, RunNumber) );
  vector<string> fileNames = {};
  for(Int_t iseg = FirstSegment; iseg <= MaxSegment; iseg++) {
    TString codafilename;
    codafilename.Form(RunFileNamePattern, fname_prefix, RunNumber, iseg);
    cout << "codafilename = " << codafilename << endl;
    fileNames.emplace_back(codafilename.Data());
  }
  auto* run = new Podd::MultiFileRun( pathList, fileNames);

  // Set to read in Hall C run database parameters
  run->SetRunParamClass("THcRunParameters");
  run->SetEventRange(FirstEvent, MaxEvent);    
  run->SetNscan(1);
  run->SetDataRequired(0x7);
  run->Print();
  
  // Define the analysis parameters
  TString ROOTFileName = Form(ROOTFileNamePattern, RunNumber, FirstEvent, MaxEvent);

  // Define the analysis parameters
  analyzer->SetEvent(event);
  // Set EPICS event type
  analyzer->SetEpicsEvtType(180);
  analyzer->AddEpicsEvtType(181);
  analyzer->AddEpicsEvtType(182);
  analyzer->AddEpicsEvtType(183);
  analyzer->AddEpicsEvtType(184);
  analyzer->AddEpicsEvtType(185);
  analyzer->AddEpicsEvtType(186);
  analyzer->AddEpicsEvtType(187);
  analyzer->AddEpicsEvtType(188);
  analyzer->AddEpicsEvtType(189);
  analyzer->AddEpicsEvtType(190);
  analyzer->AddEpicsEvtType(191);
  
  analyzer->SetCountMode(2);  // 0 = counter is # of physics triggers
                              // 1 = counter is # of all decode reads
                              // 2 = counter is event number

  // Define output ROOT file
  analyzer->SetOutFile(ROOTFileName.Data());
  // Define crate map
  analyzer->SetCrateMapFileName("MAPS/NPS/CRATE/db_cratemap_coin.dat") ; //FIXME: CHANGE
  // Define DEF-file+
  analyzer->SetOdefFile("DEF-files/HMS/EPICS/epics_short.def");
  //analyzer->SetOdefFile("DEF-files/NPS/NPS_coin.def"); //FIXME: CHANGE
  // Define cuts file
  analyzer->SetCutFile("DEF-files/NPS/NPS_cuts_coin.def"); //FIXME: CHANGE
  // File to record accounting information for cuts
  //analyzer->SetSummaryFile(Form("REPORT_OUTPUT/COIN/PRODUCTION/summary_production_%d_%d.report", RunNumber, MaxEvent));  // optional //FIXME: CHANGE
  // start the actual analysis
  analyzer->Process(run);     
  // Create report file from template.
  analyzer->PrintReport("TEMPLATES/NPS/NPS_coin.template",
  			Form("REPORT_OUTPUT/COIN/SCALERS/coin_NPS_HMS_report_%d_%d.report", RunNumber, MaxEvent)); //FIXME:CHANGE
  
}
