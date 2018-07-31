echo $FT_NBR1 + $FT_NBR2 | tr mrdoc 01234 | tr "\'\\\?" 013 | tr "\"\!" 24 | xargs echo "ibase=5; obase=23;" | bc | tr "0123456789ABC" "gtaio luSnemf"
