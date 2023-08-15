void rootlogon() {
  cout << "rootlogon.C: loading libNPS" << endl;

  // Assumes that the library can be found in (DY)LD_LIBRARY_PATH
  gSystem->Load("libNPS");
}
