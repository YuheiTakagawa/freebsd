# $FreeBSD: releng/11.0/sys/modules/bhnd/bcma_bhndb/Makefile 298935 2016-05-02 18:48:37Z adrian $

.PATH:	${.CURDIR}/../../../dev/bhnd/bcma

KMOD=	bcma_bhndb
SRCS=	bcma_bhndb.c

SRCS+=	bhnd_bus_if.h bhndb_bus_if.h bhndb_if.h
SRCS+=	device_if.h bus_if.h

.include <bsd.kmod.mk>
