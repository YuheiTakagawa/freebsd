# $FreeBSD: releng/11.0/contrib/pjdfstest/Makefile 271294 2014-09-09 02:50:09Z ngie $

PROG=	pjdfstest

${PROG}:	${PROG}.c
	@OSTYPE=`uname`; \
	CFLAGS=-D__OS_$${OSTYPE}__; \
	if [ $$OSTYPE = "FreeBSD" ]; then \
		CFLAGS="$$CFLAGS -DHAS_LCHMOD -DHAS_CHFLAGS -DHAS_FCHFLAGS -DHAS_CHFLAGSAT -DHAS_LCHFLAGS -DHAS_FREEBSD_ACL -DHAS_BINDAT -DHAS_CONNECTAT -DHAS_LPATHCONF"; \
	elif [ $$OSTYPE = "SunOS" ]; then \
		CFLAGS="$$CFLAGS -DHAS_TRUNCATE64 -DHAS_STAT64"; \
		CFLAGS="$$CFLAGS -lsocket"; \
	elif [ $$OSTYPE = "Darwin" ]; then \
		CFLAGS="$$CFLAGS -DHAS_LCHMOD -DHAS_CHFLAGS -DHAS_LCHFLAGS"; \
	elif [ $$OSTYPE == "Linux" ]; then \
		CFLAGS="$$CFLAGS -D_GNU_SOURCE"; \
	else \
		echo "Unsupported operating system: ${OSTYPE}."; \
		exit 1; \
	fi; \
	cmd="gcc -Wall $$CFLAGS ${PROG}.c -o ${PROG}"; \
	echo $$cmd; \
	$$cmd

clean:
	rm -f ${PROG}
