void rootlogon() {
  cout << "rootlogon.C: loading libNPSlib" << endl;

  // Assumes that the library can be found in (DY)LD_LIBRARY_PATH
  gSystem->Load("libNPSlib");
}
