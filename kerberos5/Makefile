# $FreeBSD: releng/11.0/kerberos5/Makefile 297434 2016-03-30 23:50:23Z bdrewery $

SUBDIR=	lib .WAIT \
	libexec tools usr.bin usr.sbin
SUBDIR_PARALLEL=

# These are the programs which depend on Kerberos.
KPROGS=	lib/libpam \
	secure/lib/libssh secure/usr.bin/ssh secure/usr.sbin/sshd

# This target is used to rebuild these programs WITH Kerberos.
kerberize:
.for entry in ${KPROGS}
	cd ${.CURDIR}/../${entry}; \
	${MAKE} cleandir; \
	${MAKE} obj; \
	${MAKE} all; \
	${MAKE} install
.endfor

# This target is used to rebuild these programs WITHOUT Kerberos.
dekerberize:
.for entry in ${KPROGS}
	cd ${.CURDIR}/../${entry}; \
	${MAKE} MK_KERBEROS=no cleandir; \
	${MAKE} MK_KERBEROS=no obj; \
	${MAKE} MK_KERBEROS=no all; \
	${MAKE} MK_KERBEROS=no install
.endfor

.include <bsd.subdir.mk>
