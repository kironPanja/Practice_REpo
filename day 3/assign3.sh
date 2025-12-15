count_line(){
	echo "Enter file name"
	read filename

	filename=$1
	
	if [ -f "$filename" ]; then
		lines=$(wc -l -gt "$filename")
		echo " File : $filename has $lines lines"
	else
		echo " File ; $filename does not exist."
	fi
}

