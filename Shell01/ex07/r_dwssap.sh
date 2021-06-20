#!/bin/bash

cat /etc/passwd | grep -v '\#' | cut -d":" -f1 | sed '1!n;d' | rev | sort -r | sed -n $FT_LINE1','$FT_LINE2'p' | tr '\n' ' ' | sed 's/ /, /g' | sed 's/\(.*\), /\1./' | tr -d '\n'
