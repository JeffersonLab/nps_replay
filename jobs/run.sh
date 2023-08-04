#!/bin/bash

spec="nps"
SPEC="NPS"

# Two input args
runNum=$1
nEvent=$2

# Modify as you need
#-----------------------------------------
SCRDIR="/work/hallc/nps/sanghwa/nps_replay"  # source dir
BASEDIR="/volatile/hallc/nps/sanghwa"        # log output dir
script="SCRIPTS/${SPEC}/eel108_replay.C"     # script to run
#-----------------------------------------

cd $SCRDIR

# check if env vars are set properly
# if not run the setup script
if [ -z "$HCANA" ]
then
    echo "HCANA not set.."
    echo "run the setup script.."
    setup_farm.sh
fi


# ROOT output directory
OUTDIR=${BASEDIR}/ROOTfiles
if [ ! -d ${OUTDIR} ]
then
    echo "ROOT output directory does not exist.. make new one"
    mkdir -p ${OUTDIR}
fi

# set symbolic link in the current working dir, if not done already
if [ ! -d ROOTfiles ] 
then
    ln -sf $OUTDIR ROOTfiles
fi
    
# REPORT OUTPUT directory
REPORTDIR=${BASEDIR}/REPORT_OUTPUT
if [ ! -d ${REPORTDIR} ]
then
    echo "ROOT output directory does not exist.. make new one"
fi

# set symbolic link in the current working dir, if not done already
if [ ! -d REPORT_OUTPUT ] 
then
    mkdir -p ${REPORTDIR}
    ln -sf $REPORTDIR REPORT_OUTPUT
fi

echo 
echo "----------------------------------------------"
echo "NPS SINGLE REPLAY for ${runNum}. NEvent=${nEvent}" 
echo "----------------------------------------------"
echo 

runStr="./hcana -q \"${script}(${runNum}, ${nEvent})\""
eval ${runStr}
