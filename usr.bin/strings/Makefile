# $FreeBSD: releng/11.0/usr.bin/strings/Makefile 298401 2016-04-21 12:58:29Z emaste $

.include <src.opts.mk>

ELFTCDIR=	${SRCTOP}/contrib/elftoolchain

.PATH: ${ELFTCDIR}/strings

PROG=	strings

LIBADD=	elftc elf

CFLAGS+=-I${ELFTCDIR}/libelftc -I${ELFTCDIR}/common

.include <bsd.prog.mk>
