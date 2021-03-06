# $FreeBSD: releng/11.0/sys/boot/pc98/libpc98/Makefile 280031 2015-03-15 13:31:13Z dim $
#
LIB=			pc98
INTERNALLIB=

.PATH:	${.CURDIR}/../../i386/libi386

SRCS=	bioscd.c biosdisk.c biosmem.c biospnp.c \
	biospci.c biossmap.c bootinfo.c bootinfo32.c \
	comconsole.c devicename.c elf32_freebsd.c \
	i386_copy.c i386_module.c nullconsole.c pc98_sys.c pxe.c pxetramp.s \
	time.c vidconsole.c
.PATH:	${.CURDIR}/../../zfs
SRCS+=	devicename_stubs.c

# Enable PXE TFTP or NFS support, not both.
.if defined(LOADER_TFTP_SUPPORT)
CFLAGS+=	-DLOADER_TFTP_SUPPORT
.else
CFLAGS+=	-DLOADER_NFS_SUPPORT
.endif

BOOT_COMCONSOLE_PORT?= 0x238
CFLAGS+=	-DCOMPORT=${BOOT_COMCONSOLE_PORT}

BOOT_COMCONSOLE_SPEED?= 9600
CFLAGS+=	-DCOMSPEED=${BOOT_COMCONSOLE_SPEED}

.ifdef(BOOT_BIOSDISK_DEBUG)
# Make the disk code more talkative
CFLAGS+= -DDISK_DEBUG
.endif

# Include simple terminal emulation (cons25-compatible)
CFLAGS+= -DTERM_EMU

# XXX: make alloca() useable
CFLAGS+= -Dalloca=__builtin_alloca

CFLAGS+=	-I${.CURDIR}/../../common \
		-I${.CURDIR}/../btx/lib \
		-I${.CURDIR}/../../i386/libi386 \
		-I${.CURDIR}/../../.. -I.
# the location of libstand
CFLAGS+=	-I${.CURDIR}/../../../../lib/libstand/

# Handle FreeBSD specific %b and %D printf format specifiers
CFLAGS+= ${FORMAT_EXTENSIONS}

.include <bsd.lib.mk>
