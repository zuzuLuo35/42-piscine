cat /etc/passwd | grep -v "^#" | awk "NR%2==1" | sed "s/\:.*//" | rev | sort | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | paste -s -d , - | sed "s/,/, /g" | sed "s/$/./"
