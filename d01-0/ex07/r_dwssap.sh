cat /etc/passwd | grep -v "^#" | awk 'NR % 2 == 0' | cut -d ':' -f1 | rev | sort -r | awk "NR >= $FT_LINE1 && NR <= $FT_LINE2" | sed 's/$/,/' | tr '\n' ' ' | sed 's/.\{2\}$//' | tr '\n' '.'
