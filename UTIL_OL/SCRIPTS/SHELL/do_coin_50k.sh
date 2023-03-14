#! /bin/bash

function print_the_help {
  echo "USAGE: replay_50k [--type=coin] "
  echo "  OPTIONS: "
  echo "            -r,--run-number    Run type (coin, hms, shms) [default: latest_run]"
  echo "            -s,--skip          Run type (coin, hms, shms) [default: 250000]"
  echo "            -t,--type          Run type (coin, hms, shms) [default: coin]"
  echo "            -d,--dir           raw dir to use [default: /net/cdaq/cdaql3data/coda/data/raw]"
  echo "            -c,--cache         Use the mss cache directory (same as using --dir /cache/hallc/spring17/raw)"
  echo "            -h,--help          print help"
  exit 
}

function yes_or_no {
  while true; do
    read -p "$* [y/n]: " yn
    case $yn in
      [Yy]*) return 0 ;;
      [Nn]*) echo "No entered" ; return 1 ;;
    esac
  done
}
#yes_or_no "Upload these ? " && some_command

#if [[ $# -eq 0 ]] ; then
#  print_the_help
#  exit 
#fi



CODATYPE=coin
USE_RAW_DIR=
SKIPNUMBER=250000
RUNNUMBER=

POSITIONAL=()
while [[ $# -gt 0 ]]
do
  key="$1"

  case $key in
    -h|--help)
      shift # past argument
      print_the_help
      ;;
    -r|--run-number)
      RUNNUMBER="$2"
      shift # past argument
      shift # past value
      ;;
    -t|--type)
      CODATYPE="$2"
      shift # past argument
      shift # past value
      ;;
    -s|--skip)
      SKIPNUMBER="$2"
      shift # past argument
      shift # past value
      ;;
    -d|--dir)
      USE_RAW_DIR="$2"

      shift # past argument
      shift # past value
      ;;
    -c|--cache)
      USE_RAW_DIR="/cache/hallc/spring17/raw"
      shift # past value
      ;;
    #-a|--all)
      #  LOG_ALL_PLOTS=1
      #  shift # past argument
      #  #shift # past value
      #  ;;
    #-o|--online-only)
      #  ONLINE_ONLY=1
      #  shift # past argument
      #  #shift # past value
      #  ;;
    *)    # unknown option
      POSITIONAL+=("$1") # save it in an array for later
      #echo "unknown option $1"
      #print_the_help
      shift # past argument
      ;;
  esac
done
set -- "${POSITIONAL[@]}" # restore positional parameters


spec=hms
SPEC=HMS
if [[ -n "${1}" ]] ; then
  spec=$(echo ${1} | tr '[:upper:]' '[:lower:]')
  SPEC=$(echo ${1} | tr '[:lower:]' '[:upper:]')
  echo $spec
  echo $SPEC
fi

#if [[ -n "${LOG_ALL_PLOTS}" ]] ; then
#  ONLINE_ONLY=
#fi
#echo "Number files in SEARCH PATH with EXTENSION:" $(ls -1 "${SEARCHPATH}"/*."${EXTENSION}" | wc -l)
#if [[ -n $1 ]]; then
#    echo "Last line of file specified as non-opt/last argument:"
#    tail -1 "$1"
#fi

# Which spectrometer are we analyzing.
spec=${0##*_}
spec=${spec%%.sh}
SPEC=$(echo "$spec" | tr '[:lower:]' '[:upper:]')

if [[ -z "${RUNNUMBER}" ]] ; then
  # assuming coin type for now...
  RUNNUMBER=$(latest_run)
fi

lastRun=$( latest_run )


#echo "do_50k_hms ${RUNNUMBER} 0"
./run_coin_hms.sh  ${RUNNUMBER} 
./run_coin_shms.sh ${RUNNUMBER} 

while [ "$(latest_event_number)" -lt "500000" ] ; do 

  
#  echo " Waiting for 1M events..."
  echo " Waiting for 0.5M events..."
  sleep 10
  latest_event_number
  sleep 10

done

#echo "do_50k_hms ${RUNNUMBER} 0"
./run_coin_hms.sh ${RUNNUMBER} 500000
./run_coin_shms.sh ${RUNNUMBER} 500000

