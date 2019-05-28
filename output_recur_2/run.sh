for D in */; do cd "$D";
cp ../Makefile .;
make;
cd ../;
done;
