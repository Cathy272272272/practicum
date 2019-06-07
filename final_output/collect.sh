for D in */; do cd "$D";
#if [[ $D == *cp ]];
#then
TYPE="$( echo $D |cut -d '/' -f 1 |  cut -d '_' -f 2,3)"
#NAME = ""
SUF="_orig.csv"
NAME="$TYPE$SUF"
SUF1="_rewrite.csv"
NAME1="$TYPE$SUF1"
if [[ $D == *cp* ]];
then
#echo "$D"

#SUF = "_orig.csv"
#NAME = "$TYPE$SUF"
#cp total_result_orig_e-40.csv "$NAME"
cp total* "$NAME"
mv "$NAME" ../data_collection
#echo "$NAME"
else
#echo "$NAME1"
#SUF = ".csv"
#NAME = "$TYPE$SUF"
#cp total_result_e-40.csv "$NAME1"
#fi
cp total* "$NAME1"
mv "$NAME1" ../data_collection

fi
cd ..
done
#done


