#!/bin/bash

spec="nps"
SPEC="NPS"

# Two input args
runNum=$1
nEvent=$2

# Modify as you need
#--------------------------------------------------
SCRDIR="/volatile/hallc/nps/panta/nps_replay"         # source dir
BASEDIR="/volatile/hallc/nps/panta/nps_replay"        # log output dir
SCRIPT="SCRIPTS/${SPEC}/eel108_replay.C"              # script to run
APPTAINER_IMAGE="/volatile/hallc/nps/panta/nps.sif"   # apptainer image location
RAWDIR="/cache/hallc/c-nps/raw/"
#---------------------------------------------------


cd $SCRDIR

# Check if SCRDIR and BASEDIR are the same
if [ "$SCRDIR" == "$BASEDIR" ]; then
    # If same, only create directories in SCRDIR
    OUTDIR="${SCRDIR}/ROOTfiles"
    REPORTDIR="${SCRDIR}/REPORT_OUTPUT"

    # Create directories if they don't exist
    if [ ! -d "$OUTDIR" ]; then
        echo "OUTDIR does not exist.. creating"
        mkdir -p "$OUTDIR"
    fi

    if [ ! -d "$REPORTDIR" ]; then
        echo "REPORTDIR does not exist.. creating"
        mkdir -p "$REPORTDIR"
    fi
else
    # SCR and BASE DIR are different need to do symlink
    # need to consult with nps_replay user/developer
    # ADD ME
fi

# Q. Is the following the way to handle input raw data?
if [ ! -L "raw" ]; then
    ln -sf "$RAWDIR" "raw"
fi
if [ ! -L "cache" ]; then
    ln -sf "$RAWDIR" "cache"
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

runStr="apptainer exec --bind ${SCRDIR} --bind ${BASEDIR} --bind ${SCRIPT} ${APPTAINER_IMAGE} bash -c \"hcana -q ${SCRIPT}\(${runNum},${nEvent}\)\""
eval ${runStr}
