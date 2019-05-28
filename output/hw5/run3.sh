#!/bin/bash
touch total_result.csv
for D in */; do cd "$D";
#echo "$D"
rm -rf tmp0.csv
rm -rf tmp1.csv
rm -rf tmp2.csv
DIR="$( echo $D | cut -d '/' -f 1)"
rm -rf $DIR
cat order.txt|cut -d '-' -f 1 >> $DIR
cat s3fp_results.csv | cut -d ',' -f 4-7 >> tmp1.csv
awk '{print $0, FILENAME}' $DIR >> tmp2.csv
cat tmp2.csv
ONAME="_ordered_res.csv"
FNAME=$DIR$ONAME
rm -rf $FNAME
paste -d ',' tmp2.csv tmp1.csv >> $FNAME
cat "$FNAME" >> ../total_result.csv
cd ../;

done;

#!/bin/bash
for D in */; do cd "$D";
#echo "$D"
#HB="$( echo $D | cut -d '_' -f 4 | cut -d '/' -f 1)"
#LB="$( echo $D | cut -d '_' -f 3)"



#rm -rf tmp0.csv
#rm -rf tmp1.csv
#rm -rf tmp2.csv
DIR="$( echo $D | cut -d '/' -f 1)"
rm -rf $DIR
cat order.txt|cut -d '-' -f 2 >> $DIR
#cat s3fp_results.csv | cut -d ',' -f 4-7 >> tmp1.csv
awk '{print $0, FILENAME}' $DIR >> ../total_name.csv
echo " " >> ../total_name.csv
#cat tmp2.csv
#ONAME="_ordered_res.csv"
#FNAME=$DIR$ONAME
#rm -rf $FNAME
#paste -d ',' tmp2.csv tmp1.csv >> $FNAME
#cat "$FNAME" >> ../total_result_orig.csv


cd ../;
done

