#!/bin/bash
rm -rf sequence.txt
rm -rf total.csv

for D in */; do cd "$D";
#echo "$D"
HB="$( echo $D | cut -d '_' -f 4 | cut -d '/' -f 1)"
LB="$( echo $D | cut -d '_' -f 3)"
rm -rf order.txt
rm -rf s3fp_results.csv
for d in *;do
if [[ $d == *32 ]];
then
#    echo "$d"
NAME=$(echo "$d" | cut -d '_' -f 1)
tt="_32"
ote="_128"
LP=$NAME$tt
HP=$NAME$ote
VAR="RT = BGRT
N_VARS = 1
TIMEOUT = 60
RESOURCE = SVE
RSEED = 22
REL_DELTA = 1e-40
ERR_FUNC = REL
ERR_OPT = LAST
INPUT_FILE = random_input
EXE_LP = $LP
OUTPUT_LP = output_lp
EXE_HP = $HP
OUTPUT_HP = output_hp
UNIFORM_INPUT = true
UNIFORM_INPUTLB = $LB
UNIFORM_INPUTUB = $HB"
#echo "$VAR"
rm -rf s3fp_setting
echo "$VAR" >> s3fp_setting
TXT="_orig.txt"
FILENAME=$NAME$TXT
../../../../../src/s3fp >> $FILENAME
echo $FILENAME
echo "$NAME" >> order.txt
fi
done

rm -rf tmp0.csv
rm -rf tmp1.csv
rm -rf tmp2.csv
DIR="$( echo $D | cut -d '/' -f 1)"
rm -rf $DIR
cat order.txt|cut -d '-' -f 1 >> $DIR
cat s3fp_results.csv | cut -d ',' -f 4-7 >> tmp1.csv
awk '{print $0, FILENAME}' $DIR >> tmp2.csv
#cat tmp2.csv
ONAME="res.csv"
FNAME=$DIR$ONAME
rm -rf $FNAME
paste -d ',' tmp2.csv tmp1.csv >> $FNAME
cat "$FNAME" >> ../total_result_e-40.csv


cd ../;
echo "$D" >> sequence.txt
done



#echo "$VAR" >> tmp.txt

