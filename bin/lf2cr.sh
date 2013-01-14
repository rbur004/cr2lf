#!/bin/sh
FILES="$@"
for f in $FILES
do
	lf2cr < "$f" > "$f".lf
done
