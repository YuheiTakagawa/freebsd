#	from: Makefile.inc,v 1.1 1993/09/03 19:04:23 jtc Exp
# $FreeBSD: releng/11.0/lib/libc/amd64/sys/Makefile.inc 302092 2016-06-22 21:11:27Z brooks $

SRCS+=	amd64_get_fsbase.c amd64_get_gsbase.c amd64_set_fsbase.c \
	amd64_set_gsbase.c __vdso_gettc.c

MDASM=	vfork.S brk.S cerror.S exect.S getcontext.S ptrace.S \
	sbrk.S setlogin.S sigreturn.S

# Don't generate default code for these syscalls:
NOASM=	break.o exit.o getlogin.o openbsd_poll.o sstk.o vfork.o yield.o

PSEUDO=	_getlogin.o _exit.o
