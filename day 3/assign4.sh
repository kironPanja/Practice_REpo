mkdir -p TestDir

for i in {1..10}
do
	filename="File${i}.txt"
	echo"$filename" > "TestDir/$filename"
done
echo "10 files created inside TestDir with their name as content"

