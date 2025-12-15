echo "Enter your choice"

read choice

case $choice in 
	1) ls -1 ;;
	2) ps -f ;;
	3) date ;;
	4) whoami ;;
	5) exit ;;
	*) echo "Invalid option, Enter valid option" ;;
esac
