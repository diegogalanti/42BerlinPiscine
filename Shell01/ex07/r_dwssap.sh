#! /bin/sh

cat /etc/passwd | grep -v "#" | awk "NR % 2 == 0" |  sed 's/:.*//' | rev | sort -r | head -$FT_LINE2 | tail +$FT_LINE1 |sed -z 's/\n/, /g' | sed 's/..$/./'
