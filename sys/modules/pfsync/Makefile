# $FreeBSD: releng/11.0/sys/modules/pfsync/Makefile 297434 2016-03-30 23:50:23Z bdrewery $

.PATH: ${.CURDIR}/../../netpfil/pf

KMOD=	pfsync
SRCS=	if_pfsync.c \
	opt_pf.h opt_inet.h opt_inet6.h
SRCS+=	bus_if.h device_if.h

.if !defined(KERNBUILDDIR)
.if defined(VIMAGE)
opt_global.h:
	echo "#define VIMAGE 1" >> ${.TARGET}
CFLAGS+=	-include opt_global.h
.endif
.endif

.include <bsd.kmod.mk>
