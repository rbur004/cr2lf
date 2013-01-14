#!/bin/sh
FILES="$@"
for f in $FILES
do
	cr2lf < "$f" > "$f".lf
done
