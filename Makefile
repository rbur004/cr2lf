BIN=/usr/local/bin

all: cr2lf lf2cr lf2crlf

cr2lf: cr2lf.c
	cc -o cr2lf cr2lf.c

lf2cr: lf2cr.c
	cc -o lf2cr lf2cr.c

lf2crlf: lf2crlf.c
	cc -o lf2crlf lf2crlf.c

install: all
	cp cr2lf lf2cr lf2crlf ${BIN}
