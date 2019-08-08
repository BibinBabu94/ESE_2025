#!/bin/bash
#cleanup
NOWORD=0
echo -e "enter the file name : \c"
read file_name
echo -e "enter the letter : \c"
read WORD
if [ -f $file_name ] 
then
echo "$file_name exist!"
else
echo "$file_name not exist!"
fi
WORD_cn=$(grep -i -o $WORD $file_name | wc -l)

if [ "$WORD_cn" -ne "$NOWORD" ]
then
echo "WORD FOUND "
echo "The word "$WORD" appeard ="
echo "$WORD_cn"
else
echo "NO WORD FOUND"
fi 


exit 0


