#    GPP -- Generic Pretty-Printer
#    Copyright (C) 1998-2001  Merijn de Jonge (Merijn.de.Jonge@cwi.nl). 
#
#    This program is free software; you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation; either version 2 of the License, or
#    (at your option) any later version.
#
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with this program; if not, write to the Free Software
#    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
#
# $Id: gpp.Makefile,v 1.9 2001/10/06 14:06:15 visser Exp $
#
# GNU make specific generic make rules for the generation of pretty-printed
# documents.
#
# usage:
#   -include "gpp.makefile" in your Makefile
#    example:
#       include /home/xt/xt/share/gpp/gpp.makefile
#
#   -define which pretty-print tables are used for the generation of
#    a box representation of your .asfix files.
#
#    example:
#       file1.abox: foo1.pp bar.pp
#       file2.abox: foo2.pp bar.pp
#
#    This specifies that "foo1.pp" and "bar.pp" are used as
#    pretty-print tables to generate "file1.abox" Similarly, "foo2.pp"
#    and "bar.pp" are use to generate file2.abox.
#
#   -for LaTeX output:
#    define which abbreviations files are to be used to generate LaTeX code.
#    example:
#       file1.tex: foo.abbrevs
#
#    This specifies that the abbreviations defined in "foo.abbrevs"
#    are used for the generation of "file1.tex".
#
#   -for HTML output:
#    define the title of the document
#    example:
#       file1_title = Hello World
#
#    This sets the title of file1.html to "Hello World"
#
#   -define which parse table to use for parsing your input terms to obtain
#    their AsFix representation..
#
#    example:
#       file1.asfix: table1.tbl
#       file2.asfix: table2.tbl
#
#    This specifies that "table1.tbl" is used for parsing in order to
#    generate file1.asfix. Similarly, "table2.tbl" is used to obtain
#    "file2.asfix".
#
# Note: this makefile assumes the suffixes ".pp" for pretty-print tables,
# ".trm" for input terms, ".tbl" for parse tables, and ".def" for SDF2
# definitions. Parse tables are automatically generated from SDF2
# definitions when necessary.
#

ASFIX2ABOX    = PATH=__ASFIX2ABOX__/bin:$${PATH} asfix2abox
ABOX2LATEX    = PATH=__ABOX2LATEX__/bin:$${PATH} abox2latex
ABOX2HTML     = PATH=__ABOX2HTML__/bin:$${PATH} abox2html
SGLR          = PATH=/bin:$${PATH} sglr -2
IMPLODE_ASFIX = PATH=__ASFIXTOOLS__/bin:$${PATH} implode-asfix
PREFIX        = /home/xt/xt

.PRECIOUS: %.css

# the rules below define how to obtain .html and .tex file from .asfix files

# rule how to make an abox file from an AsFix file. It uses $^ do determine
# which pretty-print tables should be used.
%.abox : %.asfix 
	@echo "building $@ from $<."
	@set -- $(^:%= -p %) ; shift ; shift;\
	$(ASFIX2ABOX) -i $< -o $@ $$*

# rule how to make a LaTeX file from an abox file. It uses $^ do determine
# which abbreviations should be used.
%.tex : %.abox
	@echo "building $@ from $<."
	@set $(^) ; shift ;\
	$(ABOX2LATEX) -i $< -o $@ $$*


# rule how to make HTML from an abox file
%.html : %.abox box2html.css
	@echo "building $@ from $<."
	@if [ "a$($(*)_title)" != "a" ]; then \
	   $(ABOX2HTML) -t "$($(*)_title)" -i $< -o $@ ;\
	else \
	   $(ABOX2HTML) -i $< -o $@ ;\
	fi

# rule to generate cascading style sheet
%.css:
	$(ABOX2HTML) -c > $@


# the rules below define how to obtain .asfix files from .trm files.

# rule how to parse a .trm file. $^ is used to determine the parse table to
# use.
%.trm.asfix : %.trm
	@set $^ ; shift ;\
	$(SGLR) -p $$* -i $< -o $@

# rule to generate imploded pretty-print tables
%.pp.af : %.pp
	@echo "Building $@"
	$(SGLR) -p $(PREFIX)/share/gpp/pp-tables.tbl -i $< \
	   | $(IMPLODE_ASFIX) -S -o $@ 
