echo " Enter file "
read fname

if [ -f $fname ]; then
	echo " File exists"
else
	echo "File not found"
fi
