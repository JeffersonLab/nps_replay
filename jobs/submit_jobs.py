#!/apps/bin/python3
from subprocess import call
import sys, os, time
import argparse

def get_usage():
    return """
         To see options:
         > submit_jobs.py --help

         Examples:
         > python submit_jobs.py --runs=<run numbers, range> --nevt=<number of events to replay> --email=<your email address, optional>
         > python submit_jobs.py --runs=123,135-144,119 --nevt=1000

         To just test the script without submitting actual jobs, add --test 
         > python submit_jobs.py --runs=123 --nevt=1000 --test
    """

# parser
description = "Script to submit batch jobs"
parser = argparse.ArgumentParser(description=description, usage=get_usage())
parser.add_argument("--runs", type=str, help="Run number/range arrays", required=True)
parser.add_argument("--nevt", type=int, help="Number of events to replay, default value is -1 (full replay)", default=-1)
parser.add_argument("--email", type=str, help="email address. If set, it will send emails to the user. Default option: false")
parser.add_argument("--test", help="Test the script, no actual job to be submitted", action="store_true")
parser.add_argument("--mem", help="(physical) memory request per core")
args = parser.parse_args()

def main():

    # MODIFY THIS PART AS YOU NEED
    #-------------------------------
    config = "pass1"
    sourceDir = "/work/hallc/nps/sanghwa/nps_replay"
    outDir = "/volatile/hallc/nps/sanghwa/log"
    script = sourceDir+"/jobs/run.sh"
    #-------------------------------

    if not os.path.exists(outDir):
       os.makedirs(outDir)

    # Make run list
    runlist = get_runlist(args.runs)

    # mail-user: default = false
    send_email = False
    if args.email:
        send_email = True

    # number of events to replay. default: -1 (full replay)
    nEvt = -1
    if args.nevt:
        nEvt = args.nevt

    # Test or submit
    submit = 1
    if args.test:
        submit  = 0

    jobName= "replay_" + config

    for run in runlist:

        print("Starting job setup for run: " + str(run))

        jobFullName = jobName + '_' + str(run)

        createSBATCHfile(sourceDir,outDir,jobFullName,script,run,nEvt)

        print("All done for config ", config," for run ", run)

        if submit==1:
            print("submitting", jobFullName)
            call(["sbatch",sourceDir+"/jobs/"+jobFullName+".sh"])

def createSBATCHfile(sourceDir,outDir,jobName,script,run,nEvt):

    if not os.path.exists(sourceDir+"/jobs"):
        os.makedirs(sourceDir+"/jobs")

    f=open(sourceDir+"/jobs/"+jobName+".sh","w")
    f.write("#!/bin/bash\n")
    f.write("#SBATCH --ntasks=1\n")
    f.write("#SBATCH --job-name="+jobName+"\n")
    f.write("#SBATCH --output="+outDir+"/log_"+jobName + ".out\n")
    f.write("#SBATCH --error="+outDir+"/log_"+jobName + ".err\n")
    f.write("#SBATCH --partition=production\n")
    f.write("#SBATCH --account=hallc\n")
    if args.mem:
        # it might be a good idea to set a limit, just in case?
        f.write("#SBATCH --mem-per-cpu=" + args.mem + "\n")
    else:
        # default value set to 1000
        f.write("#SBATCH --mem-per-cpu=1000\n")

    f.write(script + ' ' + str(run) + ' ' + str(nEvt) + "\n")

    return 0


def get_runlist(runs):

    runlist = []
    for run in [x for x in runs.split(",")]:
        if "-" in run:
            brun = int(run.split("-")[0])
            erun = int(run.split("-")[1])
            for irun in range(brun, erun+1):
                runlist.append(irun)
        else:
            runlist.append(int(run))

    # remove duplicates and return
    return list(set(runlist))

if __name__ == '__main__':

    main()

