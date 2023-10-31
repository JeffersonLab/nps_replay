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

numEventsk=$2

numSegEvent=$3
numEventjob=$4


#if [ "$numEvents" == 50000 ]; then
 # rootFileDir="./ROOTfiles/COIN/50k/"
  #outFile="${spec}_hms_coin_50k_${runNum}"
  #config="CONFIG/COIN/50k/${spec}_hms_coin_50k.cfg"
  #monPdfDir="./HISTOGRAMS/COIN/PDF/50k/"
 
 
#else
  replayReport="./REPORT_OUTPUT/COIN/replayreport/nps_hms_coin_${runNum}_${numEventsk}k.txt"
  rootFileDir="./ROOTfiles/COIN/PRODUCTION/"
  config="CONFIG/COIN/PRODUCTION/${spec}_hms_coin_all.cfg"
  monPdfDir="./HISTOGRAMS/COIN/PDF/PRODUCTION/"
  outFile="${spec}_hms_coin_all_${runNum}"
#fi

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
runHcana="./run_gen.sh ${runNum} ${numEventsk} ${numSegEvent} ${numEventjob}"
#runHcana="/home/cdaq/cafe-2022/hcana/hcana -q \"${script}(${runNum}, ${numEvents})\""
runOnlineGUI="./online -f ${config} -r ${runNum}"
saveOnlineGUI="./online -f ${config} -r ${runNum} -P"
#saveExpertOnlineGUI="./online -f ${expertConfig} -r ${runNum} -P"
#FIXME: ???
#runReportMon="./${reportMonDir}/reportSummary.py ${runNum} ${numEvents} ${spec} singles"
#openReportMon="emacs ${reportMonOutDir}/${reportMonFile}"
#runHistogram= "root -q \"Amplitude.C(${runNum})\""
# Name of the replay ROOT file nps_eel108_%d.root
replayFile="${spec}_hms_coin_${runNum}_${numEventsk}k_events"
rootFile="${replayFile}.root"
latestRootFile="${rootFileDir}/${spec}_hms_coin_${runNum}_latest.root"

# Names of the monitoring file
monRootFile="${spec}_production_${runNum}.root"
monPdfFile="${spec}_test_zh_${runNum}.pdf"
monExpertPdfFile="${spec}_production_expert_${runNum}.pdf"
latestMonRootFile="${monRootDir}/${spec}_production_latest.root"
latestMonPdfFile="${monPdfDir}/${spec}_hms_coin_latest.pdf"
latestMonPdfFile_hclog="${monPdfDir}/nps_hms_coin_${runNum}_${numEventsk}k.pdf"


# What is base name of onlineGUI output.
outExpertFile="${spec}_production_expert_${runNum}"
outFileMonitor="output.txt"

# Replay out files

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
  echo " -> NEVENTS: ${numEventsk}"
  echo " -> COMMAND: ${runHcana}"
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="

  sleep 2
  cd ../replay_scripts
  eval ${runHcana}

  # Link the ROOT file to latest for online monitoring
  sleep 2
  cd ../nps_replay
  ln -fs ${rootFile} ${latestRootFile}

  echo "" 
  echo ""
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="
  echo ""
  echo " Doing the scaler only replay on the first segment"
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="
  
  hcana -q "SCRIPTS/NPS/SCALERS/replay_nps_scalers_test.C(${runNum})"

  sleep 2

  echo "running histogram scripts"
  
  sleep 2
  cd macros/NPS/
  hcana -q "ALL.C(${runNum},${numEventsk})" 
  hcana -q "NEWPLOTS.C(${runNum},${numEventsk})"
  hcana -q "VTP_hcana.C(${runNum},${numEventsk})"
  hcana -q "helicity.C(${runNum},${numEventsk})"
  hcana -q -b "Pion_plot.C(${runNum})"
  hcana -q -b "Make_scaler_plots.C(${runNum})"
  sleep 2 
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
  mv "${outFile}.pdf" "../${monPdfDir}/nps_hms_coin_${runNum}_${numEventsk}k.pdf"
  cd ..
  ln -fs nps_hms_coin_${runNum}_${numEventsk}k.pdf  ${latestMonPdfFile}


# Where to put log

###########################################################
# function used to prompt user for questions
function yes_or_no(){
  while true; do
    read -p "$* [y/n]: " yn
    case $yn in
      [Yy]*) return 0 ;;
      [Nn]*) echo "No entered" ; return 1 ;;
    esac
  done
}
# post pdfs in hclog
yes_or_no "Upload these plots to logbook HCLOG? " && \
    /site/ace/certified/apps/bin/logentry \
    -cert /home/cdaq/.elogcert \
    -t "${numEventsk}k replay plots for run ${runNum}" \
    -e cdaq \
    -l HCLOG \
    --tag Autolog \
    -a ${latestMonPdfFile_hclog} \
###########################################################


  echo "" 
  echo ""
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="
  echo ""
  echo " Calculating Live Time information"
  echo ""
  echo ":=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:=:="

    hcana -q "macros/NPS/DeadTime_EDTM.C(${runNum})"

  sleep 2

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
  echo "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"
  echo ""
  echo "Keep up the good work!"
  echo ""
  echo "-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|-|"
  echo "" 
  echo ""
  echo ""

}  2>&1 | tee "${replayReport}"
