# Makefile.in generated automatically by automake 1.4-p6 from Makefile.am

# Copyright (C) 1994, 1995-8, 1999, 2001 Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.

# $Id: Makefile.am,v 1.17 2003/06/26 18:23:01 rjkaes Exp $
#
# Copyright (C) 2000  Robert James Kaes (rjkaes@flarenet.com)
#
# This program is free software; you can redistribute it and/or modify it
# under the terms of the GNU General Public License as published by the
# Free Software Foundation; either version 2, or (at your option) any
# later version.
#
# This program is distributed in the hope that it will be useful, but
# WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
# General Public License for more details.
#


SHELL = /bin/sh

srcdir = .
top_srcdir = ..

prefix = /usr/local
exec_prefix = ${prefix}

bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libexecdir = ${exec_prefix}/libexec
datadir = ${prefix}/share
sysconfdir = ${prefix}/etc
sharedstatedir = ${prefix}/com
localstatedir = ${prefix}/var
libdir = ${exec_prefix}/lib
infodir = ${prefix}/info
mandir = ${prefix}/man
includedir = ${prefix}/include
oldincludedir = /usr/include

DESTDIR =

pkgdatadir = $(datadir)/tinyproxy
pkglibdir = $(libdir)/tinyproxy
pkgincludedir = $(includedir)/tinyproxy

top_builddir = ..

ACLOCAL = /projects/arm/source/tinyproxy/missing aclocal-1.4
AUTOCONF = autoconf
AUTOMAKE = /projects/arm/source/tinyproxy/missing automake-1.4
AUTOHEADER = autoheader

INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL} $(AM_INSTALL_PROGRAM_FLAGS)
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL}
transform = s,x,x,

NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
host_alias = arm-linux
host_triplet = arm-unknown-linux-gnu
ADDITIONAL_OBJECTS =  filter.o gnuregex.o
AR = arm-linux-ar
AS = @AS@
CC = arm-brcm-linux-uclibcgnueabi-gcc
CFLAGS = -O2 -DNDEBUG 
CPP = arm-brcm-linux-uclibcgnueabi-gcc -E
CPPFLAGS = 
CXX = arm-linux-g++
CXXCPP = arm-linux-g++ -E
DLLTOOL = @DLLTOOL@
ECHO = echo
EGREP = grep -E
EXEEXT = 
F77 = f95
GCJ = @GCJ@
GCJFLAGS = @GCJFLAGS@
HAVE_LIB = @HAVE_LIB@
LEX = flex
LEX_FLAGS = 
LIB = @LIB@
LIBS = -lresolv -lnsl 
LIBTOOL = $(SHELL) $(top_builddir)/libtool
LN_S = ln -s
LTLIB = @LTLIB@
MAKEINFO = makeinfo
OBJDUMP = @OBJDUMP@
OBJEXT = o
PACKAGE = tinyproxy
RANLIB = arm-linux-ranlib
RC = @RC@
STRIP = strip
TINYPROXY_CONFIG_DIR = /usr/local/etc/tinyproxy
TINYPROXY_CONFIG_FILE = tinyproxy.conf
U = 
VERSION = 1.6.3
YACC = bison -y

YFLAGS = -d
LDFLAGS = -static 

sbin_PROGRAMS = tinyproxy

tinyproxy_SOURCES =  	acl.c acl.h 	anonymous.c anonymous.h 	buffer.c buffer.h 	child.c child.h 	common.h 	conns.c conns.h 	daemon.c daemon.h 	hashmap.c hashmap.h 	heap.c heap.h 	htmlerror.c htmlerror.h 	http_message.c http_message.h 	log.c log.h 	network.c network.h 	reqs.c reqs.h 	sock.c sock.h 	stats.c stats.h 	text.c text.h 	tinyproxy.c tinyproxy.h 	utils.c utils.h 	vector.c vector.h 	grammar.y scanner.l 	regexp.h


EXTRA_DIST = gnuregex.c gnuregex.h
EXTRA_tinyproxy_SOURCES = filter.c filter.h grammar.h
tinyproxy_DEPENDENCIES =  filter.o gnuregex.o
tinyproxy_LDADD =  filter.o gnuregex.o
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = ../config.h
CONFIG_CLEAN_FILES = 
sbin_PROGRAMS =  tinyproxy$(EXEEXT)
PROGRAMS =  $(sbin_PROGRAMS)


DEFS = -DHAVE_CONFIG_H -I. -I$(srcdir) -I..
tinyproxy_OBJECTS =  acl.$(OBJEXT) anonymous.$(OBJEXT) buffer.$(OBJEXT) \
child.$(OBJEXT) conns.$(OBJEXT) daemon.$(OBJEXT) hashmap.$(OBJEXT) \
heap.$(OBJEXT) htmlerror.$(OBJEXT) http_message.$(OBJEXT) log.$(OBJEXT) \
network.$(OBJEXT) reqs.$(OBJEXT) sock.$(OBJEXT) stats.$(OBJEXT) \
text.$(OBJEXT) tinyproxy.$(OBJEXT) utils.$(OBJEXT) vector.$(OBJEXT) \
grammar.$(OBJEXT) scanner.$(OBJEXT)
tinyproxy_LDFLAGS = 
LEX_OUTPUT_ROOT = lex.yy
LEXLIB = 
COMPILE = $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
LTCOMPILE = $(LIBTOOL) --mode=compile $(CC) $(DEFS) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(LIBTOOL) --mode=link $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(LDFLAGS) -o $@
DIST_COMMON =  Makefile.am Makefile.in grammar.c scanner.c


DISTFILES = $(DIST_COMMON) $(SOURCES) $(HEADERS) $(TEXINFOS) $(EXTRA_DIST)

TAR = tar
GZIP_ENV = --best
SOURCES = $(tinyproxy_SOURCES) $(EXTRA_tinyproxy_SOURCES)
OBJECTS = $(tinyproxy_OBJECTS)

all: all-redirect
.SUFFIXES:
.SUFFIXES: .S .c .l .lo .o .obj .s .y
$(srcdir)/Makefile.in: Makefile.am $(top_srcdir)/configure.ac $(ACLOCAL_M4) 
	cd $(top_srcdir) && $(AUTOMAKE) --gnu --include-deps src/Makefile

Makefile: $(srcdir)/Makefile.in  $(top_builddir)/config.status
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/$@ CONFIG_HEADERS= $(SHELL) ./config.status


mostlyclean-sbinPROGRAMS:

clean-sbinPROGRAMS:
	-test -z "$(sbin_PROGRAMS)" || rm -f $(sbin_PROGRAMS)

distclean-sbinPROGRAMS:

maintainer-clean-sbinPROGRAMS:

install-sbinPROGRAMS: $(sbin_PROGRAMS)
	@$(NORMAL_INSTALL)
	$(mkinstalldirs) $(DESTDIR)$(sbindir)
	@list='$(sbin_PROGRAMS)'; for p in $$list; do \
	  if test -f $$p; then \
	    echo " $(LIBTOOL)  --mode=install $(INSTALL_PROGRAM) $$p $(DESTDIR)$(sbindir)/`echo $$p|sed 's/$(EXEEXT)$$//'|sed '$(transform)'|sed 's/$$/$(EXEEXT)/'`"; \
	    $(LIBTOOL)  --mode=install $(INSTALL_PROGRAM) $$p $(DESTDIR)$(sbindir)/`echo $$p|sed 's/$(EXEEXT)$$//'|sed '$(transform)'|sed 's/$$/$(EXEEXT)/'`; \
	  else :; fi; \
	done

uninstall-sbinPROGRAMS:
	@$(NORMAL_UNINSTALL)
	list='$(sbin_PROGRAMS)'; for p in $$list; do \
	  rm -f $(DESTDIR)$(sbindir)/`echo $$p|sed 's/$(EXEEXT)$$//'|sed '$(transform)'|sed 's/$$/$(EXEEXT)/'`; \
	done

.c.o:
	$(COMPILE) -c $<

# FIXME: We should only use cygpath when building on Windows,
# and only if it is available.
.c.obj:
	$(COMPILE) -c `cygpath -w $<`

.s.o:
	$(COMPILE) -c $<

.S.o:
	$(COMPILE) -c $<

mostlyclean-compile:
	-rm -f *.o core *.core
	-rm -f *.$(OBJEXT)

clean-compile:

distclean-compile:
	-rm -f *.tab.c

maintainer-clean-compile:

.c.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

.s.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

.S.lo:
	$(LIBTOOL) --mode=compile $(COMPILE) -c $<

mostlyclean-libtool:
	-rm -f *.lo

clean-libtool:
	-rm -rf .libs _libs

distclean-libtool:

maintainer-clean-libtool:

tinyproxy$(EXEEXT): $(tinyproxy_OBJECTS) $(tinyproxy_DEPENDENCIES)
	@rm -f tinyproxy$(EXEEXT)
	$(LINK) $(tinyproxy_LDFLAGS) $(tinyproxy_OBJECTS) $(tinyproxy_LDADD) $(LIBS)
.l.c:
	$(LEX) $(AM_LFLAGS) $(LFLAGS) $< && mv $(LEX_OUTPUT_ROOT).c $@
.y.c:
	$(YACC) $(AM_YFLAGS) $(YFLAGS) $< && mv y.tab.c $*.c
	if test -f y.tab.h; then \
	if cmp -s y.tab.h $*.h; then rm -f y.tab.h; else mv y.tab.h $*.h; fi; \
	else :; fi
grammar.h: grammar.c


tags: TAGS

ID: $(HEADERS) $(SOURCES) $(LISP)
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	here=`pwd` && cd $(srcdir) \
	  && mkid -f$$here/ID $$unique $(LISP)

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)'; \
	unique=`for i in $$list; do echo $$i; done | \
	  awk '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$unique$(LISP)$$tags" \
	  || (cd $(srcdir) && etags -o $$here/TAGS $(ETAGS_ARGS) $$tags  $$unique $(LISP))

mostlyclean-tags:

clean-tags:

distclean-tags:
	-rm -f TAGS ID

maintainer-clean-tags:

distdir = $(top_builddir)/$(PACKAGE)-$(VERSION)/$(subdir)

subdir = src

distdir: $(DISTFILES)
	@for file in $(DISTFILES); do \
	  d=$(srcdir); \
	  if test -d $$d/$$file; then \
	    cp -pr $$d/$$file $(distdir)/$$file; \
	  else \
	    test -f $(distdir)/$$file \
	    || ln $$d/$$file $(distdir)/$$file 2> /dev/null \
	    || cp -p $$d/$$file $(distdir)/$$file || :; \
	  fi; \
	done
acl.o: acl.c tinyproxy.h common.h ../config.h acl.h heap.h log.h sock.h
anonymous.o: anonymous.c tinyproxy.h common.h ../config.h anonymous.h \
	hashmap.h heap.h log.h
buffer.o: buffer.c tinyproxy.h common.h ../config.h buffer.h heap.h \
	log.h
child.o: child.c tinyproxy.h common.h ../config.h child.h daemon.h \
	filter.h heap.h log.h reqs.h sock.h utils.h
conns.o: conns.c tinyproxy.h common.h ../config.h buffer.h conns.h \
	heap.h log.h stats.h
daemon.o: daemon.c tinyproxy.h common.h ../config.h daemon.h
filter.o: filter.c tinyproxy.h common.h ../config.h filter.h heap.h \
	log.h regexp.h reqs.h
grammar.o: grammar.c tinyproxy.h common.h ../config.h acl.h anonymous.h \
	child.h filter.h htmlerror.h log.h reqs.h
hashmap.o: hashmap.c tinyproxy.h common.h ../config.h hashmap.h heap.h
heap.o: heap.c tinyproxy.h common.h ../config.h heap.h text.h
htmlerror.o: htmlerror.c tinyproxy.h common.h ../config.h buffer.h \
	conns.h heap.h htmlerror.h network.h utils.h
http_message.o: http_message.c common.h ../config.h heap.h \
	http_message.h network.h
log.o: log.c tinyproxy.h common.h ../config.h heap.h log.h utils.h \
	vector.h
network.o: network.c tinyproxy.h common.h ../config.h heap.h network.h
reqs.o: reqs.c tinyproxy.h common.h ../config.h acl.h anonymous.h \
	buffer.h conns.h filter.h hashmap.h heap.h htmlerror.h log.h \
	network.h regexp.h reqs.h sock.h stats.h text.h utils.h \
	vector.h
scanner.o: scanner.c tinyproxy.h common.h ../config.h grammar.h
sock.o: sock.c tinyproxy.h common.h ../config.h log.h heap.h sock.h \
	text.h
stats.o: stats.c tinyproxy.h common.h ../config.h log.h heap.h \
	htmlerror.h stats.h conns.h utils.h
text.o: text.c tinyproxy.h common.h ../config.h text.h
tinyproxy.o: tinyproxy.c tinyproxy.h common.h ../config.h anonymous.h \
	buffer.h daemon.h heap.h filter.h child.h log.h reqs.h sock.h \
	stats.h conns.h utils.h
utils.o: utils.c tinyproxy.h common.h ../config.h conns.h heap.h \
	http_message.h utils.h
vector.o: vector.c tinyproxy.h common.h ../config.h heap.h vector.h

info-am:
info: info-am
dvi-am:
dvi: dvi-am
check-am: all-am
check: check-am
installcheck-am:
installcheck: installcheck-am
install-exec-am: install-sbinPROGRAMS
install-exec: install-exec-am

install-data-am:
install-data: install-data-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am
install: install-am
uninstall-am: uninstall-sbinPROGRAMS
uninstall: uninstall-am
all-am: Makefile $(PROGRAMS)
all-redirect: all-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) AM_INSTALL_PROGRAM_FLAGS=-s install
installdirs:
	$(mkinstalldirs)  $(DESTDIR)$(sbindir)


mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f Makefile $(CONFIG_CLEAN_FILES)
	-rm -f config.cache config.log stamp-h stamp-h[0-9]*

maintainer-clean-generic:
	-test -z "scannercgrammarhgrammarc" || rm -f scannerc grammarh grammarc
mostlyclean-am:  mostlyclean-sbinPROGRAMS mostlyclean-compile \
		mostlyclean-libtool mostlyclean-tags \
		mostlyclean-generic

mostlyclean: mostlyclean-am

clean-am:  clean-sbinPROGRAMS clean-compile clean-libtool clean-tags \
		clean-generic mostlyclean-am

clean: clean-am

distclean-am:  distclean-sbinPROGRAMS distclean-compile \
		distclean-libtool distclean-tags distclean-generic \
		clean-am
	-rm -f libtool

distclean: distclean-am

maintainer-clean-am:  maintainer-clean-sbinPROGRAMS \
		maintainer-clean-compile maintainer-clean-libtool \
		maintainer-clean-tags maintainer-clean-generic \
		distclean-am
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."

maintainer-clean: maintainer-clean-am

.PHONY: mostlyclean-sbinPROGRAMS distclean-sbinPROGRAMS \
clean-sbinPROGRAMS maintainer-clean-sbinPROGRAMS uninstall-sbinPROGRAMS \
install-sbinPROGRAMS mostlyclean-compile distclean-compile \
clean-compile maintainer-clean-compile mostlyclean-libtool \
distclean-libtool clean-libtool maintainer-clean-libtool tags \
mostlyclean-tags distclean-tags clean-tags maintainer-clean-tags \
distdir info-am info dvi-am dvi check check-am installcheck-am \
installcheck install-exec-am install-exec install-data-am install-data \
install-am install uninstall-am uninstall all-redirect all-am all \
installdirs mostlyclean-generic distclean-generic clean-generic \
maintainer-clean-generic clean mostlyclean distclean maintainer-clean


scanner.c: scanner.l grammar.h
	$(LEX) $(LEX_FLAGS) $(LFLAGS) -i $< && mv $(LEX_OUTPUT_ROOT).c $@

clean:
	rm -f *.da
	rm -f gmon.out

# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
