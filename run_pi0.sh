#! /bin/bash

# This script is to process an HMS-NPS coincidence
# ROOT file, look for pi0 events, and write them
# out to simple text files.
# Peter Bosted Oct. 4 2023

# Which run to use
runNum=$1
if [ -z "$runNum" ]; then
    echo " give Run Number to use"
    exit
fi

# default distance from target to center of NPS in cm
    dnps=310

# Which scripts to run.
script="SCRIPTS/NPS/PeterB.C"

## Which commands to run.
runbc="root -l -b -n -q -x \"${script}(${runNum}, ${dnps})\""
eval ${runbc}

# look at histograms
cd /net/cdaq/cdaql2data/cdaq/skimfiles/Skimhist
fname = "Skimhist(${runNum}.top"
./td fanme
