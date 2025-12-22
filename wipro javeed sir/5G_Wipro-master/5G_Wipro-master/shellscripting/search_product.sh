

echo "Searching product "


grep   "$1"  products.txt   &&  echo "product found"


grep  "$1"  products.txt ||   echo "product not found"

echo "End of search"



