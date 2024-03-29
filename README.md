# cr2lf utilities

* Source https://github.com/rbur004/cr2lf

## DESCRIPTION:

* cr2lf reads from the standard input, changes LF's into CR's, and writes to the standard output
* lf2cr reads from the standard input, changes CR's into LF's, and writes to the standard output
* lf2crlf reads from the standard input, adds a CR before each LF, and writes to the standard output
* lfcr2lf reads from the standard input, converts LFCR to LF (and lone CR to LF), and writes to the standard output
* crlf2lf reads from the standard input, converts CRLF to LF (and lone CR to LF), and writes to the standard output
* bin/cr2lf.sh takes multiple file arguments and runs cr2lf with each file as stdin and file.lf as stdout
* platypus config for a Mac OS X app files can be dropped on, to run cr2lf.sh

## FEATURES/PROBLEMS:


## SYNOPSIS:


## REQUIREMENTS:

	Unix/Linux
	
## INSTALL:

* make
* make install
  Installs into /usr/local/bin

## LICENSE:

(The MIT License)

Copyright (c) 2013

1. You may make and give away verbatim copies of the source form of the
   software without restriction, provided that you duplicate all of the
   original copyright notices and associated disclaimers.

2. You may modify your copy of the software in any way, provided that
   you do at least ONE of the following:
    *  place your modifications in the Public Domain or otherwise make them Freely Available, such as by posting said modifications to Usenet or an equivalent medium, or by allowing the author to include your modifications in the software.
    *  use the modified software only within your corporation or organization.
    *  rename any non-standard executables so the names do not conflict with standard executables, which must also be provided.
    *  make other distribution arrangements with the author.

3. You may distribute the software in object code or executable form, provided that you do at least ONE of the following:
    * distribute the executables and library files of the software,
  together with instructions (in the manual page or equivalent)
  on where to get the original distribution.
    * accompany the distribution with the machine-readable source of
  the software.
    * give non-standard executables non-standard names, with
        instructions on where to get the original software distribution.
    * make other distribution arrangements with the author.

4. You may modify and include the part of the software into any other
   software (possibly commercial).  But some files or libraries used by
   code in this distribution  may not written by the author, so that they 
   are not under these terms.

5. The scripts and library files supplied as input to or produced as 
   output from the software do not automatically fall under the
   copyright of the software, but belong to whomever generated them, 
   and may be sold commercially, and may be aggregated with this
   software.

6. THIS SOFTWARE IS PROVIDED "AS IS" AND WITHOUT ANY EXPRESS OR
   IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
   WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
   PURPOSE.
