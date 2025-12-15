echo "Enter a number : "
read num

if [ "$num" -eq 0 ]; then
	echo "Enter a valid number "
	break
fi
if [ $((num % 2)) -eq 0 ]; then
	echo "$num is even"
else
	echo "$num is odd"
fi

