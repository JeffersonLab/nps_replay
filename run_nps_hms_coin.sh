#! /bin/bash

# Which spectrometer are we analyzing.
spec="nps"
SPEC="NPS"

# What is the last run number for the spectrometer.
# The pre-fix zero must be stripped because ROOT is ... well ROOT
# FIXME: change to corresponding run number for nps.
lastRun=$( \
    ls raw/"${spec}"_all_*.dat raw/../raw.copiedtotape/"${spec}"_all_*.dat -R 2>/dev/null | perl -ne 'if(/0*(\d+)/) {print "$1\n"}' | sort -n | tail -1 \
)

# Which run to analyze.
runNum=$1
if [ -z "$runNum" ]; then
  runNum=$lastRun
fi

numEvents=$2
if [ -z "$numEvents" ]; then
  numEvents=50000
fi

if [ "$numEvents" == 50000 ]; then
  rootFileDir="./ROOTfiles/COIN/50k/"
  outFile="${spec}_hms_coin_50k_${runNum}"
  config="CONFIG/COIN/50k/${spec}_hms_coin_50k.cfg"
  monPdfDir="./HISTOGRAMS/COIN/PDF/50k/"
 
 
else
  rootFileDir="./ROOTfiles/COIN/PRODUCTION/"
  config="CONFIG/COIN/PRODUCTION/${spec}_hms_coin_all.cfg"
  monPdfDir="./HISTOGRAMS/COIN/PDF/PRODUCTION/"
  outFile="${spec}_hms_coin_all_${runNum}"
fi

firstEvent=1

# Which scripts to run. This is online display cfg file, not hcana cfg file.

script="SCRIPTS/${SPEC}/replay_production_coin_NPS_HMS.C" 

#expertConfig="CONFIG/${SPEC}/PRODUCTION/${spec}_production_expert.cfg" #FIXME: expert file missing

#hmsCounter="./UTIL_XEM/el_counter.C" #FIXME: ??? 
#shmsCounter="./UTIL_XEM/el_counter.C"

# Define some useful directories

monRootDir="./HISTOGRAMS/${SPEC}/ROOT"
r="./HISTOGRAMS/NPS/PDF/"
reportFileDir="./REPORT_OUTPUT/COIN/replayreport/"
reportMonDir="./UTIL_OL/REP_MON"
reportMonOutDir="./MON_OUTPUT/${SPEC}/REPORT"

# Name of the report monitoring file
reportMonFile="summary_output_${runNum}.txt"

# Which commands to run.
runHcana="hcana -q \"${script}(${runNum}, ${numEvents})\""
#runHcana="/home/cdaq/cafe-2022/hcana/hcana -q \"${script}(${runNum}, ${numEvents})\""
runOnlineGUI="./online -f ${config} -r ${runNum}"
saveOnlineGUI="./online -f ${config} -r ${runNum} -P"
#saveExpertOnlineGUI="./online -f ${expertConfig} -r ${runNum} -P"
#FIXME: ???
#runReportMon="./${reportMonDir}/reportSummary.py ${runNum} ${numEvents} ${spec} singles"
#openReportMon="emacs ${reportMonOutDir}/${reportMonFile}"
#runHistogram= "root -q \"Amplitude.C(${runNum})\""

# Name of the replay ROOT file nps_eel108_%d.root
replayFile="${spec}_hms_coin_${runNum}_${firstEvent}_${numEvents}"
rootFile="${replayFile}.root"
latestRootFile="${rootFileDir}/${spec}_hms_coin_${runNum}_latest.root"

# Names of the monitoring file
monRootFile="${spec}_production_${runNum}.root"
monPdfFile="${spec}_test_zh_${runNum}.pdf"
monExpertPdfFile="${spec}_production_expert_${runNum}.pdf"
latestMonRootFile="${monRootDir}/${spec}_production_latest.root"
latestMonPdfFile="${monPdfDir}/${spec}_hms_coin_latest.pdf"

# Where to put log
reportFile="${reportFileDir}/replay_${spec}_production_${runNum}_${numEvents}.report"
summaryFile="${reportFileDir}/summary_production_${runNum}_${numEvents}.txt"

# What is base name of onlineGUI output.
outExpertFile="${spec}_production_expert_${runNum}"
outFileMonitor="output.txt"

# Replay out files
replayReport="${reportFileDir}/replayReport_${spec}_hms_coin_${runNum}_${numEvents}.txt"

# Start analysis and monitoring plots.
{
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="
  echo "" 
  date
  echo ""
  echo "Running ${SPEC} analysis on the run ${runNum}:"
  echo " -> SCRIPT:  ${script}"
  echo " -> RUN:     ${runNum}"
  echo " -> NEVENTS: ${numEvents}"
  echo " -> COMMAND: ${runHcana}"
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="

  sleep 2
  eval ${runHcana}

  # Link the ROOT file to latest for online monitoring
  ln -fs ${rootFile} ${latestRootFile}

  echo "running histogram scripts"
  
  sleep 2
  cd macros/NPS/
  hcana -q "ALL.C(${runNum},${numEvents})"
  sleep 2
  hcana -q "NEWPLOTS.C(${runNum},${numEvents})"
  sleep 2
  hcana -q "VTP_hcana.C(${runNum},${numEvents})"
  sleep 2
  hcana -q "helicity.C(${runNum},${numEvents})"
  cd ../..

  echo "" 
  echo ""
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="
  echo ""
  echo "Running onlineGUI for analyzed ${SPEC} run ${runNum}:"
  echo " -> CONFIG:  ${config}"
  echo " -> RUN:     ${runNum}"
  echo " -> COMMAND: ${runOnlineGUI}"
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="

  sleep 2
  cd onlineGUI
  eval ${runOnlineGUI}
  eval ${saveOnlineGUI}
  mv "${outFile}.pdf" "../${monPdfDir}/nps_hms_coin_${runNum}_${numEvents}.pdf"
  cd ..
  ln -fs nps_hms_coin_${runNum}_${numEvents}.pdf  ${latestMonPdfFile}

  echo "" 
  echo ""
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="
  echo ""
  echo "Done analyzing ${SPEC} run ${runNum}."
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="

  sleep 2

  echo "" 
  echo ""
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="
  echo ""
  echo "Generating report file monitoring data file ${SPEC} run ${runNum}."
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="

#  eval ${runReportMon}
#  mv "${outFileMonitor}" "${reportMonOutDir}/${reportMonFile}"
#  eval ${openReportMon}

  sleep 2

  echo ""
  echo ""
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="
  echo ""
  echo "Counting good electrons in root file ${latestRootFile}"
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="


#if [[ "${spec}" == "shms" ]]; then
#  ./hcana -l << EOF
#  .L ${shmsCounter}
#  run_el_counter_${spec}("${latestRootFile}");
#EOF
#fi
#if [[ "${spec}" == "hms" ]]; then
#  ./hcana -l << EOF
#  .L ${hmsCounter}
#  run_el_counter_${spec}("${latestRootFile}");
#EOF
#fi

  sleep 2

  echo ""
  echo ""
  echo ""
  echo "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"
  echo ""
  echo "Keep up the good work!"
  echo ""
  echo "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"
  echo "" 
  echo ""
  echo ""

}  2>&1 | tee "${replayReport}"
