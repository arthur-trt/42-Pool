echo $FT_NBR1 + $FT_NBR2 | tr "\'\\\\\"\?\1" "01234" | tr "mrdoc" "01234" | awk '$0="ibase=5\;obase=23\;"$0' | bc | tr "0123456789ABC" "gtaio luSnemf"
