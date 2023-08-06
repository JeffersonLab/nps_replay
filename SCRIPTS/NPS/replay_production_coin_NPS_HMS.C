ifstream bcmFile;
void replay_production_coin_NPS_HMS(Int_t RunNumber=0, Int_t MaxEvent=0)
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
  const char* RunFileNamePattern="nps_%d.dat.0"; 
  pathList.push_back(".");
  pathList.push_back("./raw");
  pathList.push_back("./raw/../raw.copiedtotape");
  pathList.push_back("./cache");
  pathList.push_back("/net/cdaq/cdaql1data/coda/data/raw");
  const char* ROOTFileNamePattern = "ROOTfiles/nps_%d.root";
  
  // Add variables to global list.
  gHcParms->Define("gen_run_number", "Run Number", RunNumber); 
  gHcParms->AddString("g_ctp_database_filename", "DBASE/NPS/standard_coin.database");  // FIXME: DBASE FOR HMS+NPS;
  gHcParms->Load(gHcParms->GetString("g_ctp_database_filename"), RunNumber);
  gHcParms->Load(gHcParms->GetString("g_ctp_parm_filename"));
  gHcParms->Load(gHcParms->GetString("g_ctp_kinematics_filename"), RunNumber);
  gHcParms->Load(gHcParms->GetString("g_ctp_det_calib_filename"));
  gHcParms->Load(gHcParms->GetString("g_ctp_bcm_calib_filename"));
  gHcParms->Load(gHcParms->GetString("g_ctp_optics_filename"));
  // Load parameters for SHMS trigger configuration
  gHcParms->Load(gHcParms->GetString("g_ctp_trig_config_filename"));
  // Load hpcentral momentum offset 
  gHcParms->Load("PARAM/HMS/GEN/hpcentral_function_sp18.param");
  // Load fadc debug parameters
  gHcParms->Load("PARAM/HMS/GEN/h_fadc_debug_sp18.param");

  // Load params for COIN trigger configuration
  //gHcParms->Load("PARAM/TRIG/tcoin.param"); //FIXME: COIN TRIG CONFIG

   
  // Load the Hall C style detector map 
  gHcDetectorMap = new THcDetectorMap();
  gHcDetectorMap->Load("MAPS/NPS/DETEC/pcal_nps_coin.map"); //FIXME: CHANGE TO COIN MAP
  //gHcDetectorMap->Load("MAPS/NPS/DETEC/pcal_nps_standard.map");

  /*// Dec data
  gHaApps->Add(new Podd::DecData("D","Decoder raw data")); //FIXME: NEED THIS ONE?*/

    // Load BCM values
  ifstream bcmFile;
  //  TString bcmParamFile = Form("PARAM/HMS/BCM/bcmcurrent_%d.param", RunNumber);
  //  bcmFile.open(bcmParamFile);
  //  if (bcmFile.is_open()) gHcParms->Load(bcmParamFile);

  //=:=:=
  // HMS 
  //=:=:=

  THcHallCSpectrometer* HMS = new THcHallCSpectrometer("H", "HMS");
  /*HMS->SetEvtType(2);
  HMS->AddEvtType(4);
  HMS->AddEvtType(5);
  HMS->AddEvtType(6);
  HMS->AddEvtType(7);*/
  gHaApps->Add(HMS);
  // Add drift chambers to HMS apparatus
  THcDC* hdc = new THcDC("dc", "Drift Chambers");
  HMS->AddDetector(hdc);
  // Add hodoscope to HMS apparatus
  THcHodoscope* hhod = new THcHodoscope("hod", "Hodoscope");
  HMS->AddDetector(hhod);
  // Add Cherenkov to HMS apparatus
  THcCherenkov* hcer = new THcCherenkov("cer", "Heavy Gas Cherenkov");
  HMS->AddDetector(hcer);
  // Add Aerogel Cherenkov to HMS apparatus
  // THcAerogel* haero = new THcAerogel("aero", "Aerogel");
  // HMS->AddDetector(haero);
  // Add calorimeter to HMS apparatus
  THcShower* hcal = new THcShower("cal", "Calorimeter");
  HMS->AddDetector(hcal);

  // Add rastered beam apparatus
  THaApparatus* hbeam = new THcRasteredBeam("H.rb", "Rastered Beamline");
  gHaApps->Add(hbeam);

  if (bcmFile.is_open()) {
    THcBCMCurrent* bcm = new THcBCMCurrent("H.bcm", "BCM Module");
    gHaPhysics->Add(bcm);
  }  
  // Add physics modules
  // Calculate reaction point
  THcReactionPoint* hrp = new THcReactionPoint("H.react", "HMS reaction point", "H", "H.rb");
  gHaPhysics->Add(hrp);
  // Calculate extended target corrections
  THcExtTarCor* hext = new THcExtTarCor("H.extcor", "HMS extended target corrections", "H", "H.react");
  gHaPhysics->Add(hext);
  // Calculate golden track quantities
  THaGoldenTrack* gtr = new THaGoldenTrack("H.gtr", "HMS Golden Track", "H");
  gHaPhysics->Add(gtr);
  // Calculate primary (scattered beam - usually electrons) kinematics
  THcPrimaryKine* hkin = new THcPrimaryKine("H.kin", "HMS Single Arm Kinematics", "H", "H.rb");
  gHaPhysics->Add(hkin);
  // Calculate the hodoscope efficiencies
  THcHodoEff* heff = new THcHodoEff("hhodeff", "HMS hodo efficiency", "H.hod");
  gHaPhysics->Add(heff);

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

  // Add event handler for helicity scalers
  //  THcHelicityScaler *hhelscaler = new THcHelicityScaler("H", "Hall C helicity scaler");
  //  hhelscaler->SetDebugFile("HHelScaler.txt");
  //  hhelscaler->SetROC(5);
  //  hhelscaler->SetUseFirstEvent(kTRUE);
  //  gHaEvtHandlers->Add(hhelscaler);

  // Add event handler for DAQ configuration event
  THcConfigEvtHandler *hconfig = new THcConfigEvtHandler("hconfig", "Hall C configuration event handler");
  gHaEvtHandlers->Add(hconfig);
  
  //=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=
  // Kinematics Modules
  //=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=

  /*// Add Physics Module to calculate primary (scattered electrons) beam kinematics
  THcPrimaryKine* hkin_primary = new THcPrimaryKine("H.kin.primary", "HMS Single Arm Kinematics", "H", "H.rb");
  gHaPhysics->Add(hkin_primary);
  // Add Physics Module to calculate secondary (scattered hadrons) beam kinematics
  THcSecondaryKine* pkin_secondary = new THcSecondaryKine("P.kin.secondary", "SHMS Single Arm Kinematics", "P", "H.kin.primary");
  gHaPhysics->Add(pkin_secondary); // FIXME: CHANGE SHMS to NPS?*/

  


  //=:=:=
  // NPS
  //=:=:=

  //Add NPS spectrometer apparatus
  THaApparatus* NPS = new THcNPSApparatus("NPS","NPS");
  gHaApps->Add(NPS);

  //Add NPS Calorimeter to NPS apparatus
  THcNPSCalorimeter* cal = new THcNPSCalorimeter("cal", "Calorimeter");
  NPS->AddDetector(cal);



  //=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=
  // Global Objects & Event Handlers
  //=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=

  // Add trigger apparatus
  THaApparatus* TRG = new THcTrigApp("T", "TRG");
  gHaApps->Add(TRG);

  // Add trigger detector to trigger apparatus
  /*THcTrigDet* coin = new THcTrigDet("coin", "Coincidence Trigger Information");
  // Suppress missing reference time warnings for these event types
  coin->SetEvtType(1);
  coin->AddEvtType(2);
  TRG->AddDetector(coin);*/

  THcTrigDet* hms = new THcTrigDet("hms", "HMS Trigger Information");
  TRG->AddDetector(hms); 

  /*//Add coin physics module THcCoinTime::THcCoinTime (const char *name, const char* description, const char* hadArmName, 
  // const char* elecArmName, const char* coinname) :
  THcCoinTime* coinTime = new THcCoinTime("CTime", "Coincidende Time Determination", "P", "H", "T.coin");
  gHaPhysics->Add(coinTime);*/

  // Add event handler for EPICS events
  THaEpicsEvtHandler* hcepics = new THaEpicsEvtHandler("epics", "HC EPICS event type 180");
  gHaEvtHandlers->Add(hcepics);
  
  // Add handler for prestart event 125.
  THcConfigEvtHandler* ev125 = new THcConfigEvtHandler("HC", "Config Event type 125");
  gHaEvtHandlers->Add(ev125);


  // Set up the analyzer - we use the standard one,
  // but this could be an experiment-specific one as well.
  // The Analyzer controls the reading of the data, executes
  // tests/cuts, loops over Acpparatus's and PhysicsModules,
  // and executes the output routines.
  
  THcAnalyzer* analyzer = new THcAnalyzer;

  // A simple event class to be output to the resulting tree.
  // Creating your own descendant of THaEvent is one way of
  // defining and controlling the output.
  THaEvent* event = new THaEvent;

  //Define the run(s) that we want to analyze.
  THcRun* run = new THcRun( pathList, Form(RunFileNamePattern, RunNumber) );
  
  // Set to read in Hall C run database parameters
  run->SetRunParamClass("THcRunParameters");
  run->SetEventRange(1, MaxEvent);    
  run->SetNscan(1);
  run->SetDataRequired(0x7);
  run->Print();
  
  // Define the analysis parameters
  TString ROOTFileName = Form(ROOTFileNamePattern, RunNumber);

  // Define the analysis parameters
  analyzer->SetEvent(event);
  // Set EPICS event type
  analyzer->SetEpicsEvtType(180);
  analyzer->AddEpicsEvtType(181);
  analyzer->SetCountMode(2);  // 0 = counter is # of physics triggers
                              // 1 = counter is # of all decode reads
                              // 2 = counter is event number

  // Define output ROOT file
  analyzer->SetOutFile(ROOTFileName.Data());
  // Define crate map
  analyzer->SetCrateMapFileName("MAPS/NPS/db_cratemap_coin.dat") ; //FIXME: CHANGE
  // Define DEF-file+
  analyzer->SetOdefFile("DEF-files/NPS/NPS_coin.def"); //FIXME: CHANGE
  // Define cuts file
  analyzer->SetCutFile("DEF-files/NPS/NPS_cuts_coin.def"); //FIXME: CHANGE
  // File to record accounting information for cuts
  //analyzer->SetSummaryFile(Form("REPORT_OUTPUT/COIN/PRODUCTION/summary_production_%d_%d.report", RunNumber, MaxEvent));  // optional //FIXME: CHANGE
  // start the actual analysis
  analyzer->Process(run);     
  // Create report file from template.
  analyzer->PrintReport("TEMPLATES/NPS/NPS_coin.template",
			Form("REPORT_OUTPUT/NPS/eel108/eel108_report_%d_%d.report", RunNumber, MaxEvent)); //FIXME:CHANGE
  
}
