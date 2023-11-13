#!/bin/bash

spec="nps"
SPEC="NPS"

# Two input args
runNum=$1
nEvent=$2

# Modify as you need
#-----------------------------------------
SCRDIR="/work/hallc/nps/panta/nps_replay"  # source dir
BASEDIR="/volatile/hallc/nps/panta"        # log output dir
script="SCRIPTS/${SPEC}/eel108_replay.C"   # script to run
APPTAINER_IMAGE="/xxx/xxxx/xx.sif"         # apptainer image location

#-----------------------------------------

cd $SCRDIR


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

# Check if apptainer is available
if command -v apptainer > /dev/null 2>&1; then
    echo "apptainer is already available."
else
    # Load apptainer if not available
    echo "Loading apptainer..."
    eval module load apptainer
fi

echo 
echo "---------------------------------------------------------------------------------------------"
echo "NPS SINGLE REPLAY for ${runNum}. NEvent=${nEvent} using NPSlib container=${APPTAINER_IMAGE}"
echo "----------------------------------------------------------------------------------------------"
echo 

runStr="apptainer exec --bind ${SCRDIR} --bind ${BASEDIR} --bind ${script} ${APPTAINER_IMAGE} bash -c \"hcana -q SCRIPTS/NPS/eel108_replay.C\(${runNum},${nEvent}\)\""
eval ${runStr}
