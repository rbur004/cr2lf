BIN=/usr/local/bin

all: cr2lf lf2cr lf2crlf lfcr2lf crlf2lf

cr2lf: cr2lf.c
	cc -o cr2lf cr2lf.c

lf2cr: lf2cr.c
	cc -o lf2cr lf2cr.c

lf2crlf: lf2crlf.c
	cc -o lf2crlf lf2crlf.c

lfcr2lf: lfcr2lf.c
	cc -o lfcr2lf lfcr2lf.c

crlf2lf: crlf2lf.c
	cc -o crlf2lf crlf2lf.c

install: all
	cp cr2lf lf2cr lf2crlf lfcr2lf crlf2lf ${BIN}
