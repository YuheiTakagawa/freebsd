# $FreeBSD: releng/11.0/usr.bin/svn/lib/libsvn_fs_fs/Makefile 289180 2015-10-12 09:53:55Z peter $

.include "${.CURDIR}/../Makefile.inc"

.PATH:	${SVNDIR}/libsvn_fs_fs

INTERNALLIB=	yes
LIB=		svn_fs_fs

SRCS=		cached_data.c caching.c dag.c dump-index.c fs.c fs_fs.c \
		hotcopy.c id.c index.c load-index.c lock.c low_level.c \
		pack.c recovery.c rep-cache.c rev_file.c revprops.c \
		stats.c temp_serializer.c transaction.c tree.c util.c \
		verify.c

CFLAGS+=	-I${SVNDIR}/include -I${SVNDIR} -I${.CURDIR}/../.. \
		-I${.CURDIR}/../libapr \
		-I${APR}/include/arch/unix \
		-I${APR}/include \
		-I${.CURDIR}/../libapr_util \
		-I${APRU}/include/private \
		-I${APRU}/include

.include <bsd.lib.mk>
