# $FreeBSD: releng/11.0/lib/libelftc/Makefile 301471 2016-06-05 23:05:14Z bdrewery $
.include <bsd.own.mk>

PACKAGE=lib${LIB}
INTERNALLIB=

ELFTCDIR=	${SRCTOP}/contrib/elftoolchain

.PATH:	${ELFTCDIR}/libelftc

LIB=	elftc

SRCS=	elftc_bfdtarget.c                       \
	elftc_copyfile.c                        \
	elftc_demangle.c                        \
	elftc_reloc_type_str.c			\
	elftc_set_timestamps.c                  \
	elftc_string_table.c                    \
	elftc_version.c                         \
	libelftc_bfdtarget.c                    \
	libelftc_dem_arm.c                      \
	libelftc_dem_gnu2.c                     \
	libelftc_dem_gnu3.c                     \
	libelftc_hash.c                         \
	libelftc_vstr.c

INCS=	libelftc.h
CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

MAN=

# This same hack is in lib/libelf/Makefile and usr.bin/readelf/Makefile
# We need to link against the correct version of these files. One
# solution is to include ../../sys in the include path. This causes
# problems when a header file in sys depends on a file in another
# part of the tree, e.g. a machine dependent header.
#
SRCS+=		sys/elf_common.h
CLEANDIRS=	sys
CFLAGS+=	-I.
sys/elf_common.h: ${SRCTOP}/sys/${.TARGET} .NOMETA
	mkdir -p ${.OBJDIR}/sys
	ln -sf ${.ALLSRC} ${.TARGET}

.include <bsd.lib.mk>
