#!/bin/bash

run=$1
nevt=$2
jobname=$3

# MODIFY THIS PART AS YOU NEED
#-----------------------------------------
jobdir=`pwd`
script="${jobdir}/run.sh"
outdir="/volatile/hallc/nps/sanghwa/log"
#-----------------------------------------

if [ ! -d ${outdir} ]
then
    mkdir -p ${outdir}
fi

logfile=${outdir}/log_${jobname}.out
errfile=${outdir}/log_${jobname}.err

# prepare the command string
SBATCH="sbatch --ntasks=1 --job-name=${jobname} --account=hallc --partition=production --mem-per-cpu=1000 --output=${logfile} --error=${errfile}"

${SBATCH} ${script} ${run} ${nevt}
