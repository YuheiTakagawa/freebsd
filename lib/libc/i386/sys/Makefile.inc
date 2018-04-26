#	from: Makefile.inc,v 1.1 1993/09/03 19:04:23 jtc Exp
# $FreeBSD: releng/11.0/lib/libc/i386/sys/Makefile.inc 302092 2016-06-22 21:11:27Z brooks $

.if !defined(COMPAT_32BIT)
SRCS+=	i386_clr_watch.c i386_set_watch.c i386_vm86.c
.endif
SRCS+=	i386_get_fsbase.c i386_get_gsbase.c i386_get_ioperm.c i386_get_ldt.c \
	i386_set_fsbase.c i386_set_gsbase.c i386_set_ioperm.c i386_set_ldt.c \
	__vdso_gettc.c

MDASM=	Ovfork.S brk.S cerror.S exect.S getcontext.S ptrace.S \
	sbrk.S setlogin.S sigreturn.S syscall.S

# Don't generate default code for these syscalls:
NOASM=	break.o exit.o getlogin.o openbsd_poll.o sstk.o vfork.o yield.o

PSEUDO=	_getlogin.o _exit.o

MAN+=	i386_get_ioperm.2 i386_get_ldt.2 i386_vm86.2
MAN+=	i386_set_watch.3

MLINKS+=i386_get_ioperm.2 i386_set_ioperm.2
MLINKS+=i386_get_ldt.2 i386_set_ldt.2
MLINKS+=i386_set_watch.3 i386_clr_watch.3