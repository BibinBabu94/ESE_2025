#!/bin/bash
count=0
maxcount=50
echo -e "enter the string"
read string
while [ "$count" -lt "$maxcount" ]
do 
data=`date +%m-%d-%y_%N`
touch "newlog_$data.txt" 
grep -m `expr $count + 1` $string words.txt | tail -1 >>newlog_$data.txt
h=`cat newlog_$data.txt`
host www.$h.com >>temp.txt
out="$(grep -o "found" newlog_$data.txt)"
get="found"
if [ "$out" -eq "$get" ]
then
echo "not found" >>newlog_$data.txt
else
head -n 1 temp.txt|tail -c -14   >> newlog_$data.txt
fi 
sleep 10
let "count =+ 1"
done
echo
rm temp.txt
exit 0 






