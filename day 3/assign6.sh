if [ $# -eq 0 ]; then
	echo "Usage : $0 <logfile>"
	exit 1
fi

logfile=$1
grep "ERROR" "$logfile"
