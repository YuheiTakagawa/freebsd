# $FreeBSD: releng/11.0/kerberos5/tools/asn1_compile/Makefile 275022 2014-11-25 09:57:42Z bapt $

PROG=	asn1_compile
MAN=
LIBROKEN_A=	${.OBJDIR}/../../lib/libroken/libroken.a
LIBADD=	vers
LDADD=	${LIBROKEN_A}
DPADD=	${LIBROKEN_A}

SRCS=	\
	asn1parse.y \
	gen.c \
	gen_copy.c \
	gen_decode.c \
	gen_encode.c \
	gen_free.c \
	gen_glue.c \
	gen_length.c \
	gen_seq.c \
	gen_template.c \
	hash.c \
	lex.l \
	main.c \
	roken.h \
	symbol.c

CFLAGS+=-I${KRB5DIR}/lib/roken -I${KRB5DIR}/lib/asn1 -I.

CLEANFILES= roken.h lex.c parse.c

roken.h:
	 make-roken > ${.TARGET}

.include <bsd.prog.mk>

.PATH: ${KRB5DIR}/lib/asn1
