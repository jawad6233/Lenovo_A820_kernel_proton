#
# Standard e2fsprogs prologue....
#

srcdir = .
top_srcdir = ..

top_builddir = ..
my_dir = misc
INSTALL = /usr/bin/install -c

# Beginning of file MCONFIG

all::

check::

SHELL = /bin/sh

COMPRESS_EXT = gz bz2 bz Z

prefix = /usr
root_prefix = 
exec_prefix = ${prefix}
root_bindir = ${root_prefix}/bin
root_sbindir = ${root_prefix}/sbin
root_libdir = ${root_prefix}/lib
datarootdir = ${prefix}/share
bindir = ${exec_prefix}/bin
sbindir = ${exec_prefix}/sbin
libdir = ${exec_prefix}/lib
datadir= ${datarootdir}
localedir = $(datadir)/locale
root_sysconfdir= ${root_prefix}/etc
includedir = ${prefix}/include
mandir = ${datarootdir}/man
man1dir = $(mandir)/man1
man3dir = $(mandir)/man3
man5dir = $(mandir)/man5
man8dir = $(mandir)/man8
infodir = ${datarootdir}/info
datadir = ${datarootdir}



 V =
 ifeq ($(strip $(V)),)
 #  E = @echo
 #  Q = @
    E = @echo
    Q = @
 else
    E = @\#
    Q =
 endif

# E = @echo
# Q = @

CC = arm-linux-gcc
BUILD_CC = gcc
DEFS = -DLOCALEDIR=\"$(localedir)\" -DROOT_SYSCONFDIR=\"$(root_sysconfdir)\" -DPACKAGE_NAME=\"\" -DPACKAGE_TARNAME=\"\" -DPACKAGE_VERSION=\"\" -DPACKAGE_STRING=\"\" -DPACKAGE_BUGREPORT=\"\" -DPACKAGE_URL=\"\" -DHAVE_DLOPEN=1 -DSTDC_HEADERS=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_MEMORY_H=1 -DHAVE_STRINGS_H=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_UNISTD_H=1 -DENABLE_HTREE=1 -DCONFIG_TESTIO_DEBUG=1 -DCONFIG_BUILD_FINDFS=1 -DUSE_UUIDD=1 -DPACKAGE=\"e2fsprogs\" -DVERSION=\"0.14.1\" -DHAVE_LONG_LONG=1 -DHAVE_LONG_DOUBLE=1 -DHAVE_WCHAR_T=1 -DHAVE_WINT_T=1 -DHAVE_INTTYPES_H_WITH_UINTMAX=1 -DHAVE_STDINT_H_WITH_UINTMAX=1 -DHAVE_INTMAX_T=1 -DHAVE_POSIX_PRINTF=1 -DHAVE_ALLOCA_H=1 -DHAVE_ALLOCA=1 -DHAVE_STDLIB_H=1 -DHAVE_UNISTD_H=1 -DHAVE_GETPAGESIZE=1 -DINTDIV0_RAISES_SIGFPE=0 -DHAVE_UNSIGNED_LONG_LONG=1 -DHAVE_UINTMAX_T=1 -DHAVE_INTTYPES_H=1 -DHAVE_STDINT_H=1 -DHAVE_STDINT_H=1 -DHAVE_ARGZ_H=1 -DHAVE_LIMITS_H=1 -DHAVE_LOCALE_H=1 -DHAVE_NL_TYPES_H=1 -DHAVE_MALLOC_H=1 -DHAVE_STDDEF_H=1 -DHAVE_STDLIB_H=1 -DHAVE_STRING_H=1 -DHAVE_UNISTD_H=1 -DHAVE_SYS_PARAM_H=1 -DHAVE_ASPRINTF=1 -DHAVE_FWPRINTF=1 -DHAVE_GETCWD=1 -DHAVE_GETEGID=1 -DHAVE_GETEUID=1 -DHAVE_GETGID=1 -DHAVE_GETUID=1 -DHAVE_MEMPCPY=1 -DHAVE_MUNMAP=1 -DHAVE_PUTENV=1 -DHAVE_SETENV=1 -DHAVE_SETLOCALE=1 -DHAVE_SNPRINTF=1 -DHAVE_STPCPY=1 -DHAVE_STRCASECMP=1 -DHAVE_STRDUP=1 -DHAVE_STRTOUL=1 -DHAVE_TSEARCH=1 -DHAVE_WCSLEN=1 -DHAVE___ARGZ_COUNT=1 -DHAVE___ARGZ_STRINGIFY=1 -DHAVE___ARGZ_NEXT=1 -DHAVE___FSETLOCKING=1 -DHAVE_DECL__SNPRINTF=0 -DHAVE_DECL__SNWPRINTF=0 -DHAVE_DECL_FEOF_UNLOCKED=1 -DHAVE_DECL_FGETS_UNLOCKED=0 -DHAVE_DECL_GETC_UNLOCKED=1 -DHAVE_ICONV=1 -DICONV_CONST= -DHAVE_LANGINFO_CODESET=1 -DHAVE_LC_MESSAGES=1 -DENABLE_NLS=1 -DHAVE_GETTEXT=1 -DHAVE_DCGETTEXT=1 -DHAVE_DIRENT_H=1 -DHAVE_ERRNO_H=1 -DHAVE_GETOPT_H=1 -DHAVE_MALLOC_H=1 -DHAVE_MNTENT_H=1 -DHAVE_PATHS_H=1 -DHAVE_SEMAPHORE_H=1 -DHAVE_SETJMP_H=1 -DHAVE_SIGNAL_H=1 -DHAVE_STDARG_H=1 -DHAVE_STDINT_H=1 -DHAVE_STDLIB_H=1 -DHAVE_TERMIOS_H=1 -DHAVE_TERMIO_H=1 -DHAVE_UNISTD_H=1 -DHAVE_UTIME_H=1 -DHAVE_LINUX_FD_H=1 -DHAVE_LINUX_MAJOR_H=1 -DHAVE_NETINET_IN_H=1 -DHAVE_SYS_FILE_H=1 -DHAVE_SYS_IOCTL_H=1 -DHAVE_SYS_MMAN_H=1 -DHAVE_SYS_PRCTL_H=1 -DHAVE_SYS_QUEUE_H=1 -DHAVE_SYS_RESOURCE_H=1 -DHAVE_SYS_SELECT_H=1 -DHAVE_SYS_SOCKET_H=1 -DHAVE_SYS_STAT_H=1 -DHAVE_SYS_SYSCALL_H=1 -DHAVE_SYS_SYSMACROS_H=1 -DHAVE_SYS_TIME_H=1 -DHAVE_SYS_TYPES_H=1 -DHAVE_SYS_UN_H=1 -DHAVE_SYS_WAIT_H=1 -DHAVE_SYS_MOUNT_H=1 -DHAVE_NET_IF_H=1 -DHAVE_VPRINTF=1 -DHAVE_RECLEN_DIRENT=1 -DHAVE_TYPE_SSIZE_T=1 -DHAVE_LSEEK64_PROTOTYPE=1 -DSIZEOF_SHORT=2 -DSIZEOF_INT=4 -DSIZEOF_LONG=4 -DSIZEOF_LONG_LONG=8 -DHAVE_INTTYPES_H=1 -DHAVE_INTPTR_T=1 -DHAVE_GETRUSAGE=1 -DHAVE_LLSEEK=1 -DHAVE_LSEEK64=1 -DHAVE_OPEN64=1 -DHAVE_FSTAT64=1 -DHAVE_FTRUNCATE64=1 -DHAVE_STRTOULL=1 -DHAVE_STRCASECMP=1 -DHAVE_SRANDOM=1 -DHAVE_JRAND48=1 -DHAVE_FCHOWN=1 -DHAVE_MALLINFO=1 -DHAVE_FDATASYNC=1 -DHAVE_STRNLEN=1 -DHAVE_STRPTIME=1 -DHAVE_STRDUP=1 -DHAVE_SYSCONF=1 -DHAVE_PATHCONF=1 -DHAVE_POSIX_MEMALIGN=1 -DHAVE_MEMALIGN=1 -DHAVE_VALLOC=1 -DHAVE___SECURE_GETENV=1 -DHAVE_PRCTL=1 -DHAVE_MMAP=1 -DHAVE_UTIME=1 -DHAVE_SETRESUID=1 -DHAVE_SETRESGID=1 -DHAVE_USLEEP=1 -DHAVE_NANOSLEEP=1 -DHAVE_GETDTABLESIZE=1 -DHAVE_GETRLIMIT=1 -DHAVE_SEM_INIT=1 -DHAVE_EXT2_IOCTLS=1
CFLAGS = -g -O2
CPPFLAGS =  -I$(top_builddir)/lib -I$(top_srcdir)/lib 
INTL_FLAGS = 
ALL_CFLAGS = $(CPPFLAGS) $(DEFS) $(USE_WFLAGS) $(CFLAGS) $(XTRA_CFLAGS) \
	$(INTL_FLAGS) $(LINUX_INCLUDE) 
LDFLAGS = 
ALL_LDFLAGS = $(LDFLAGS) 
LDFLAGS_STATIC = $(LDFLAGS) -static
BUILD_CFLAGS = 
BUILD_LDFLAGS = 
LINK_BUILD_FLAGS = 
LINK_INSTALL_FLAGS = -f
RM = /bin/rm
LN = /bin/ln
LN_S = ln -s
MV = /bin/mv
CP = /bin/cp
CHMOD = /bin/chmod
AR = arm-linux-ar
AWK = gawk
SED = /bin/sed
PERL = /usr/bin/perl
RANLIB = arm-linux-ranlib
STRIP = arm-linux-strip
LD = $(PURE) arm-linux-gcc
ARUPD = $(AR) r
ARGEN = $(AR) rc
LDCONFIG = /sbin/ldconfig
INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_SCRIPT = ${INSTALL}
MKINSTALLDIRS = $(top_builddir)/config/mkinstalldirs

#
# Library definitions
#
LIB = $(top_builddir)/lib
LIBSS = $(LIB)/libss.a  -ldl
LIBCOM_ERR = $(LIB)/libcom_err.a  -lpthread
LIBE2P = $(LIB)/libe2p.a
LIBEXT2FS = $(LIB)/libext2fs.a
LIBUUID = $(LIB)/libuuid.a 
LIBBLKID = $(LIB)/libblkid.a  $(LIBUUID)
LIBINTL = 
DEPLIBSS = $(LIB)/libss.a
DEPLIBCOM_ERR = $(LIB)/libcom_err.a
DEPLIBUUID = $(LIB)/libuuid.a
DEPLIBBLKID = $(LIB)/libblkid.a  $(DEPLIBUUID)

STATIC_LIBSS = $(LIB)/libss.a -ldl
STATIC_LIBCOM_ERR = $(LIB)/libcom_err.a -lpthread
STATIC_LIBE2P = $(LIB)/libe2p.a
STATIC_LIBEXT2FS = $(LIB)/libext2fs.a
STATIC_LIBUUID = $(LIB)/libuuid.a 
STATIC_LIBBLKID = $(LIB)/libblkid.a $(STATIC_LIBUUID)
DEPSTATIC_LIBSS = $(LIB)/libss.a
DEPSTATIC_LIBCOM_ERR = $(LIB)/libcom_err.a
DEPSTATIC_LIBUUID = $(LIB)/libuuid.a
DEPSTATIC_LIBBLKID = $(LIB)/libblkid.a $(STATIC_LIBUUID)

PROFILED_LIBSS = $(LIB)/libss.a -ldl
PROFILED_LIBCOM_ERR = $(LIB)/libcom_err.a -lpthread
PROFILED_LIBE2P = $(LIB)/libe2p.a
PROFILED_LIBEXT2FS = $(LIB)/libext2fs.a
PROFILED_LIBUUID = $(LIB)/libuuid.a 
PROFILED_LIBBLKID = $(LIB)/libblkid.a $(PROFILED_LIBUUID)
DEPPROFILED_LIBSS = $(LIB)/libss.a
DEPPROFILED_LIBCOM_ERR = $(LIB)/libcom_err.a
DEPPROFILED_LIBUUID = $(LIB)/libuuid.a
DEPPROFILED_LIBBLKID = $(LIB)/libblkid.a $(PROFILED_LIBUUID)

# An include directive pointing to a directory holding enough linux-like
# include files to satisfy some programs here
LINUX_INCLUDE=

#
# A fast substitution command for fixing up man pages, shell scripts, etc.
#
SUBST_CONF=$(top_builddir)/util/subst.conf
SUBSTITUTE= $(top_builddir)/util/subst -f $(SUBST_CONF)
SUBSTITUTE_UPTIME= $(top_builddir)/util/subst -t -f $(SUBST_CONF)
DEP_SUBSTITUTE= $(top_builddir)/util/subst $(SUBST_CONF)

$(top_builddir)/util/subst:
	cd $(top_builddir)/util ; $(MAKE) subst

#
# Warning flags
#
# Run make gcc-wall to do a build with warning messages.
#
#
WFLAGS=		-std=c99 -D_XOPEN_SOURCE=600 -D_GNU_SOURCE \
			-pedantic $(WFLAGS_EXTRA) \
			-Wall -W -Wwrite-strings -Wpointer-arith \
			-Wcast-qual -Wcast-align -Wno-variadic-macros \
			-Wstrict-prototypes -Wmissing-prototypes \
			-Wformat-security  -Wformat-nonliteral \
			-Wmissing-format-attribute -O2 -Wstrict-aliasing \
			-Wnested-externs -Winline -DNO_INLINE_FUNCS -Wshadow \
			-UENABLE_NLS

gcc-wall-new:
	(make USE_WFLAGS="$(WFLAGS)" > /dev/null) 2>&1 | sed -f $(top_srcdir)/util/gcc-wall-cleanup 

gcc-wall:
	make clean > /dev/null
	make gcc-wall-new

#
# Installation user and groups
#
BINGRP=		bin
BINOWN=		bin
BINMODE=	555
INCGRP=		bin
INCOWN=		bin
INCMODE=	444
LIBOWN=		bin
LIBGRP=		bin
LIBMODE=	444
MANGRP=		bin
MANOWN=		bin
MANMODE=	444

#
# Autoconf magic...
#

DEP_LIB_MAKEFILES = $(top_srcdir)/lib/Makefile.library \
	$(top_srcdir)/lib/Makefile.elf-lib  \
	$(top_srcdir)/lib/Makefile.bsd-lib $(top_srcdir)/lib/Makefile.darwin-lib \
	$(top_srcdir)/lib/Makefile.solaris-lib $(top_srcdir)/lib/Makefile.checker \
	$(top_srcdir)/lib/Makefile.profile

$(top_builddir)/config.status: $(top_srcdir)/configure
	cd $(top_builddir); ./config.status --recheck

$(top_builddir)/MCONFIG: $(top_srcdir)/MCONFIG.in $(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=MCONFIG ./config.status

$(top_builddir)/lib/substitute_sh: $(top_srcdir)/lib/substitute_sh.in \
		$(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=lib/substitute_sh ./config.status

$(top_builddir)/util/subst.conf: $(top_srcdir)/util/subst.conf.in \
		$(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=util/subst.conf ./config.status

Makefile: $(srcdir)/Makefile.in $(top_builddir)/MCONFIG \
		$(DEP_MAKEFILE) $(top_builddir)/config.status
	cd $(top_builddir); CONFIG_FILES=$(my_dir)/Makefile ./config.status

#$(top_srcdir)/configure: $(top_srcdir)/configure.in
#	cd $(top_srcdir) && autoconf

#
# Make depend magic...
#

.depend: Makefile $(SRCS) $(top_srcdir)/depfix.sed $(top_srcdir)/wordwrap.pl
	if test -n "$(SRCS)" ; then \
		$(CC) -M $(ALL_CFLAGS) $(SRCS) | \
			$(SED) -f $(top_srcdir)/depfix.sed \
			    -e 's; $(srcdir)/; $$(srcdir)/;g' \
			    -e 's; $(top_srcdir)/; $$(top_srcdir)/;g' \
			    -e 's; $(top_builddir)/; $$(top_builddir)/;g' \
			    -e 's; \./; ;g' \
			    -e '/^#/d' \
			    -e '/^ *\\$$/d' | \
			$(PERL) $(top_srcdir)/wordwrap.pl > .depend; \
	else :; fi

depend:: .depend
	if test -n "$(SRCS)" ; then \
		sed -e '/^# +++ Dependency line eater +++/,$$d' \
			< $(srcdir)/Makefile.in | cat - .depend \
			> $(srcdir)/Makefile.in.new; \
	if cmp -s $(srcdir)/Makefile.in $(srcdir)/Makefile.in.new ; then \
		$(RM) $(srcdir)/Makefile.in.new ; \
	else \
		$(MV) $(srcdir)/Makefile.in $(srcdir)/Makefile.in.old; \
		$(MV) $(srcdir)/Makefile.in.new $(srcdir)/Makefile.in; \
	fi ; else :; fi

# End of file MCONFIG

E2IMAGE_PROG= e2image
E2IMAGE_MAN= e2image.8

UUIDD_PROG= uuidd
UUIDD_MAN= uuidd.8

BLKID_PROG= blkid
BLKID_MAN= blkid.8

FINDFS_LINK= findfs
FINDFS_MAN= findfs.8

SPROGS=		mke2fs badblocks tune2fs dumpe2fs $(BLKID_PROG) logsave \
			$(E2IMAGE_PROG) fsck e2undo
USPROGS=	mklost+found filefrag e2freefrag $(UUIDD_PROG)
SMANPAGES=	tune2fs.8 mklost+found.8 mke2fs.8 dumpe2fs.8 badblocks.8 \
			e2label.8 $(FINDFS_MAN) $(BLKID_MAN) $(E2IMAGE_MAN) \
			logsave.8 filefrag.8 e2freefrag.8 e2undo.8 $(UUIDD_MAN) fsck.8
FMANPAGES=	mke2fs.conf.5

UPROGS=		chattr lsattr  uuidgen
UMANPAGES=	chattr.1 lsattr.1  uuidgen.1

LPROGS=		e2initrd_helper

TUNE2FS_OBJS=	tune2fs.o util.o
MKLPF_OBJS=	mklost+found.o
MKE2FS_OBJS=	mke2fs.o util.o profile.o prof_err.o default_profile.o
CHATTR_OBJS=	chattr.o
LSATTR_OBJS=	lsattr.o
UUIDGEN_OBJS=	uuidgen.o
UUIDD_OBJS=	uuidd.o
DUMPE2FS_OBJS=	dumpe2fs.o
BADBLOCKS_OBJS=	badblocks.o
E2IMAGE_OBJS=	e2image.o
FSCK_OBJS=	fsck.o base_device.o ismounted.o
BLKID_OBJS=	blkid.o
FILEFRAG_OBJS=	filefrag.o
E2UNDO_OBJS=  e2undo.o
E2FREEFRAG_OBJS= e2freefrag.o

PROFILED_TUNE2FS_OBJS=	profiled/tune2fs.o profiled/util.o
PROFILED_MKLPF_OBJS=	profiled/mklost+found.o
PROFILED_MKE2FS_OBJS=	profiled/mke2fs.o profiled/util.o profiled/profile.o \
			profiled/prof_err.o profiled/default_profile.o
PROFILED_CHATTR_OBJS=	profiled/chattr.o
PROFILED_LSATTR_OBJS=	profiled/lsattr.o
PROFILED_UUIDGEN_OBJS=	profiled/uuidgen.o
PROFILED_UUIDD_OBJS=	profiled/uuidd.o
PROFILED_DUMPE2FS_OBJS=	profiled/dumpe2fs.o
PROFILED_BADBLOCKS_OBJS=	profiled/badblocks.o
PROFILED_E2IMAGE_OBJS=	profiled/e2image.o
PROFILED_FSCK_OBJS=	profiled/fsck.o profiled/base_device.o \
			profiled/ismounted.o
PROFILED_BLKID_OBJS=	profiled/blkid.o
PROFILED_FILEFRAG_OBJS=	profiled/filefrag.o
PROFILED_E2UNDO_OBJS=	profiled/e2undo.o


XTRA_CFLAGS=	-I$(srcdir)/../e2fsck -I.

SRCS=	$(srcdir)/tune2fs.c $(srcdir)/mklost+found.c $(srcdir)/mke2fs.c \
		$(srcdir)/chattr.c $(srcdir)/lsattr.c $(srcdir)/dumpe2fs.c \
		$(srcdir)/badblocks.c $(srcdir)/fsck.c $(srcdir)/util.c \
		$(srcdir)/uuidgen.c $(srcdir)/blkid.c $(srcdir)/logsave.c \
		$(srcdir)/filefrag.c $(srcdir)/base_device.c \
		$(srcdir)/ismounted.c $(srcdir)/../e2fsck/profile.c \
		$(srcdir)/e2undo.c $(srcdir)/e2freefrag.c

LIBS= $(LIBEXT2FS) $(LIBCOM_ERR) 
DEPLIBS= $(LIBEXT2FS) $(DEPLIBCOM_ERR)
PROFILED_LIBS= $(PROFILED_LIBEXT2FS) $(PROFILED_LIBCOM_ERR)
PROFILED_DEPLIBS= $(PROFILED_LIBEXT2FS) $(DEPPROFILED_LIBCOM_ERR)

STATIC_LIBS= $(STATIC_LIBEXT2FS) $(STATIC_LIBCOM_ERR) 
STATIC_DEPLIBS= $(STATIC_LIBEXT2FS) $(DEPSTATIC_LIBCOM_ERR) 

LIBS_E2P= $(LIBE2P) $(LIBCOM_ERR) 
DEPLIBS_E2P= $(LIBE2P) $(DEPLIBCOM_ERR) 

COMPILE_ET=$(top_builddir)/lib/et/compile_et --build-tree

.c.o:
	$(E) "	CC $<"
	$(Q) $(CC) -c $(ALL_CFLAGS) $< -o $@
#	$(Q) $(CC) $(ALL_CFLAGS) -g -pg -o profiled/$*.o -c $<

all:: profiled $(SPROGS) $(UPROGS) $(USPROGS) $(SMANPAGES) $(UMANPAGES) \
	$(FMANPAGES) $(LPROGS)

#all:: tune2fs.profiled blkid.profiled e2image.profiled \
	e2undo.profiled mke2fs.profiled dumpe2fs.profiled fsck.profiled \
	logsave.profiled filefrag.profiled uuidgen.profiled uuidd.profiled \
	e2image.profiled

profiled:
#	$(E) "	MKDIR $@"
#	$(Q) mkdir profiled

prof_err.c prof_err.h: $(srcdir)/../e2fsck/prof_err.et
	$(E) "	COMPILE_ET prof_err.et"
	$(Q) $(COMPILE_ET) $(srcdir)/../e2fsck/prof_err.et

default_profile.c: $(srcdir)/mke2fs.conf $(srcdir)/profile-to-c.awk
	$(E) "	PROFILE_TO_C mke2fs.conf"
	$(Q) $(AWK) -f $(srcdir)/profile-to-c.awk < $(srcdir)/mke2fs.conf \
		>  default_profile.c
profile.o:
	$(E) "	CC $<"
	$(Q) $(CC) -c $(ALL_CFLAGS) $(srcdir)/../e2fsck/profile.c -o $@
#	$(Q) $(CC) $(ALL_CFLAGS) -g -pg -o profiled/profile.o -c \
#	$(srcdir)/../e2fsck/profile.c

findsuper: findsuper.o
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o findsuper findsuper.o

partinfo: partinfo.o
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o partinfo partinfo.o

e2initrd_helper: e2initrd_helper.o $(DEPLIBS) $(DEPLIBBLKID) $(LIBEXT2FS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o e2initrd_helper e2initrd_helper.o $(LIBS) \
		$(LIBBLKID) $(LIBEXT2FS) $(LIBINTL)

tune2fs: $(TUNE2FS_OBJS) $(DEPLIBS) $(DEPLIBS_E2P) $(DEPLIBBLKID) \
		$(DEPLIBUUID) $(LIBEXT2FS) 
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o tune2fs $(TUNE2FS_OBJS) $(LIBS) \
		$(LIBBLKID) $(LIBUUID) $(LIBEXT2FS) $(LIBS_E2P) $(LIBINTL)

tune2fs.static: $(TUNE2FS_OBJS) $(STATIC_DEPLIBS) $(STATIC_LIBE2P) $(DEPSTATIC_LIBBLKID)
	$(E) "	LD $@"
	$(Q) $(CC) $(LDFLAGS_STATIC) -o tune2fs.static $(TUNE2FS_OBJS) \
		$(STATIC_LIBS) $(STATIC_LIBBLKID) $(STATIC_LIBUUID) \
		$(STATIC_LIBE2P) $(LIBINTL)

tune2fs.profiled: $(PROFILED_TUNE2FS_OBJS) $(PROFILED_DEPLIBS) \
		$(PROFILED_E2P) $(DEPPROFILED_LIBBLKID) $(DEPPROFILED_LIBUUID)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o tune2fs.profiled \
		$(PROFILED_TUNE2FS_OBJS) $(PROFILED_LIBBLKID) \
		$(PROFILED_LIBUUID) $(PROFILED_LIBE2P) $(LIBINTL) \
		$(PROFILED_LIBS) 

blkid: $(BLKID_OBJS) $(DEPLIBBLKID) $(LIBEXT2FS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o blkid $(BLKID_OBJS) $(LIBBLKID) $(LIBINTL) \
		$(LIBEXT2FS)

blkid.static: $(BLKID_OBJS) $(STATIC_DEPLIBS) $(DEPSTATIC_LIBBLKID)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o blkid.static $(BLKID_OBJS) $(STATIC_LIBS) \
		$(STATIC_LIBBLKID) $(LIBINTL)

blkid.profiled: $(PROFILED_BLKID_OBJS) $(DEPPROFILED_LIBBLKID) \
		$(PROFILED_LIBEXT2FS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o blkid.profiled $(PROFILED_BLKID_OBJS) \
		$(PROFILED_LIBBLKID) $(LIBINTL) $(PROFILED_LIBEXT2FS)

e2image: $(E2IMAGE_OBJS) $(DEPLIBS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o e2image $(E2IMAGE_OBJS) $(LIBS) $(LIBINTL)

e2image.profiled: $(PROFILED_E2IMAGE_OBJS) $(PROFILED_DEPLIBS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o e2image.profiled \
		$(PROFILED_E2IMAGE_OBJS) $(PROFILED_LIBS) $(LIBINTL)

e2undo: $(E2UNDO_OBJS) $(DEPLIBS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o e2undo $(E2UNDO_OBJS) $(LIBS) $(LIBINTL)

e2undo.profiled: $(PROFILED_E2UNDO_OBJS) $(PROFILED_DEPLIBS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o e2undo.profiled \
		$(PROFILED_E2UNDO_OBJS) $(PROFILED_LIBS) $(LIBINTL)

base_device: base_device.c
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_CFLAGS) $(ALL_LDFLAGS) $(srcdir)/base_device.c \
		-DDEBUG -o base_device

check:: base_device
	./base_device < $(srcdir)/base_device.tst > base_device.out
	cmp $(srcdir)/base_device.tst base_device.out

mklost+found: $(MKLPF_OBJS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o mklost+found $(MKLPF_OBJS) $(LIBINTL)

mke2fs: $(MKE2FS_OBJS) $(DEPLIBS) $(LIBE2P) $(DEPLIBBLKID) $(DEPLIBUUID) \
		$(LIBEXT2FS) 
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o mke2fs $(MKE2FS_OBJS) $(LIBS) $(LIBBLKID) \
		$(LIBUUID) $(LIBEXT2FS) $(LIBE2P) $(LIBINTL)

mke2fs.static: $(MKE2FS_OBJS) $(STATIC_DEPLIBS) $(STATIC_LIBE2P) $(DEPSTATIC_LIBUUID) $(DEPSTATIC_LIBBLKID)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -static -o mke2fs.static $(MKE2FS_OBJS) \
		$(STATIC_LIBS) $(STATIC_LIBE2P) $(STATIC_LIBBLKID) \
		$(STATIC_LIBUUID) $(LIBINTL)

mke2fs.profiled: $(PROFILED_MKE2FS_OBJS) $(PROFILED_DEPLIBS) \
	$(PROFILED_LIBE2P) $(PROFILED_DEPLIBBLKID) $(PROFILED_DEPLIBUUID) 
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o mke2fs.profiled \
		$(PROFILED_MKE2FS_OBJS) $(PROFILED_LIBBLKID) \
		$(PROFILED_LIBUUID) $(PROFILED_LIBE2P) $(LIBINTL) \
		$(PROFILED_LIBS)

chattr: $(CHATTR_OBJS) $(DEPLIBS_E2P)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o chattr $(CHATTR_OBJS) $(LIBS_E2P) $(LIBINTL)

lsattr: $(LSATTR_OBJS) $(DEPLIBS_E2P)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o lsattr $(LSATTR_OBJS) $(LIBS_E2P) $(LIBINTL)

uuidgen: $(UUIDGEN_OBJS) $(DEPLIBUUID)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o uuidgen $(UUIDGEN_OBJS) $(LIBUUID) $(LIBINTL)

uuidgen.profiled: $(PROFILED_UUIDGEN_OBJS) $(PROFILED_DEPLIBUUID)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o uuidgen.profiled \
		$(PROFILED_UUIDGEN_OBJS) $(PROFILED_LIBUUID) $(LIBINTL)

uuidd: $(UUIDD_OBJS) $(DEPLIBUUID)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o uuidd $(UUIDD_OBJS) $(LIBUUID) $(LIBINTL)

uuidd.profiled: $(PROFILED_UUIDD_OBJS) $(PROFILED_DEPLIBUUID)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o uuidd.profiled $(PROFILED_UUIDD_OBJS) \
		$(PROFILED_LIBUUID) $(LIBINTL)

dumpe2fs: $(DUMPE2FS_OBJS) $(DEPLIBS) $(DEPLIBS_E2P) $(DEPLIBUUID)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o dumpe2fs $(DUMPE2FS_OBJS) $(LIBS) \
		$(LIBS_E2P) $(LIBUUID) $(LIBINTL)

dumpe2fs.profiled: $(PROFILED_DUMPE2FS_OBJS) $(PROFILED_DEPLIBS) \
		$(PROFILED_LIBE2P) $(PROFILED_DEPLIBUUID)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o dumpe2fs.profiled \
		$(PROFILED_DUMPE2FS_OBJS) $(PROFILED_LIBS) \
		$(PROFILED_LIBE2P) $(PROFILED_LIBUUID) $(LIBINTL)

fsck: $(FSCK_OBJS) $(DEPLIBBLKID)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o fsck $(FSCK_OBJS) $(LIBBLKID) $(LIBINTL)

fsck.profiled: $(PROFILED_FSCK_OBJS) $(PROFILED_DEPLIBBLKID)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o fsck.profiled $(PROFILED_FSCK_OBJS) \
		$(PROFILED_LIBBLKID) $(LIBINTL)

badblocks: $(BADBLOCKS_OBJS) $(DEPLIBS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o badblocks $(BADBLOCKS_OBJS) $(LIBS) $(LIBINTL)

badblocks.profiled: $(PROFILED_BADBLOCKS_OBJS) $(PROFILED_DEPLIBS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o badblocks.profiled \
		$(PROFILED_BADBLOCKS_OBJS) $(PROFILED_LIBS) $(LIBINTL)

logsave: logsave.o
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o logsave logsave.o

logsave.profiled: profiled/logsave.o
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o logsave.profiled profiled/logsave.o

e2freefrag: $(E2FREEFRAG_OBJS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o e2freefrag $(E2FREEFRAG_OBJS) $(LIBS)

filefrag: $(FILEFRAG_OBJS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -o filefrag $(FILEFRAG_OBJS) 

filefrag.profiled: $(PROFILED_FILEFRAG_OBJS)
	$(E) "	LD $@"
	$(Q) $(CC) $(ALL_LDFLAGS) -g -pg -o filefrag.profiled \
		$(PROFILED_FILEFRAG_OBJS) 

tst_ismounted: $(srcdir)/ismounted.c $(STATIC_LIBEXT2FS) $(DEPLIBCOM_ERR)
	$(E) "	LD $@"
	$(CC) -o tst_ismounted $(srcdir)/ismounted.c -DDEBUG $(ALL_CFLAGS) \
		$(LIBCOM_ERR)

tune2fs.8: $(DEP_SUBSTITUTE) $(srcdir)/tune2fs.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/tune2fs.8.in tune2fs.8

mklost+found.8: $(DEP_SUBSTITUTE) $(srcdir)/mklost+found.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/mklost+found.8.in mklost+found.8

mke2fs.8: $(DEP_SUBSTITUTE) $(srcdir)/mke2fs.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/mke2fs.8.in mke2fs.8

mke2fs.conf.5: $(DEP_SUBSTITUTE) $(srcdir)/mke2fs.conf.5.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/mke2fs.conf.5.in mke2fs.conf.5

e2label.8: $(DEP_SUBSTITUTE) $(srcdir)/e2label.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/e2label.8.in e2label.8

e2undo.8: $(DEP_SUBSTITUTE) $(srcdir)/e2undo.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/e2undo.8.in e2undo.8

findfs.8: $(DEP_SUBSTITUTE) $(srcdir)/findfs.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/findfs.8.in findfs.8

e2image.8: $(DEP_SUBSTITUTE) $(srcdir)/e2image.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/e2image.8.in e2image.8

dumpe2fs.8: $(DEP_SUBSTITUTE) $(srcdir)/dumpe2fs.8.in 
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/dumpe2fs.8.in dumpe2fs.8

badblocks.8: $(DEP_SUBSTITUTE) $(srcdir)/badblocks.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/badblocks.8.in badblocks.8	

fsck.8: $(DEP_SUBSTITUTE) $(srcdir)/fsck.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/fsck.8.in fsck.8 

blkid.8: $(DEP_SUBSTITUTE) $(srcdir)/blkid.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/blkid.8.in blkid.8

logsave.8: $(DEP_SUBSTITUTE) $(srcdir)/logsave.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/logsave.8.in logsave.8

uuidd.8: $(DEP_SUBSTITUTE) $(srcdir)/uuidd.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/uuidd.8.in uuidd.8

chattr.1: $(DEP_SUBSTITUTE) $(srcdir)/chattr.1.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/chattr.1.in chattr.1 

lsattr.1: $(DEP_SUBSTITUTE) $(srcdir)/lsattr.1.in 
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/lsattr.1.in lsattr.1 

uuidgen.1: $(DEP_SUBSTITUTE) $(srcdir)/uuidgen.1.in 
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/uuidgen.1.in uuidgen.1 

blkid.1: $(DEP_SUBSTITUTE) $(srcdir)/blkid.1.in 
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/blkid.1.in blkid.1 

e2freefrag.8: $(DEP_SUBSTITUTE) $(srcdir)/e2freefrag.8.in
	@echo "	SUBST $@"
	@$(SUBSTITUTE_UPTIME) $(srcdir)/e2freefrag.8.in e2freefrag.8

filefrag.8: $(DEP_SUBSTITUTE) $(srcdir)/filefrag.8.in
	$(E) "	SUBST $@"
	$(Q) $(SUBSTITUTE_UPTIME) $(srcdir)/filefrag.8.in filefrag.8

installdirs:
	$(E) "	MKINSTALLDIRS $(sbindir) $(root_sbindir) $(bindir) $(man1dir) $(man8dir) $(libdir) $(root_sysconfdir)"
	$(Q) $(MKINSTALLDIRS) $(DESTDIR)$(sbindir) \
		$(DESTDIR)$(root_sbindir) $(DESTDIR)$(bindir) \
		$(DESTDIR)$(man1dir) $(DESTDIR)$(man8dir) \
		$(DESTDIR)$(man1dir) $(DESTDIR)$(man5dir) \
		$(DESTDIR)$(libdir) $(DESTDIR)/$(root_sysconfdir)

install: all $(SMANPAGES) $(UMANPAGES) installdirs
	$(Q) for i in $(SPROGS); do \
		echo "	INSTALL $(root_sbindir)/$$i"; \
		$(INSTALL_PROGRAM) $$i $(DESTDIR)$(root_sbindir)/$$i; \
	done
	$(Q) for i in $(USPROGS); do \
		echo "	INSTALL $(sbindir)/$$i"; \
		$(INSTALL_PROGRAM) $$i $(DESTDIR)$(sbindir)/$$i; \
	done
	$(Q) for i in ext2 ext3 ext4 ext4dev; do \
		echo "	LINK $(root_sbindir)/mkfs.$$i"; \
		(cd $(DESTDIR)$(root_sbindir); \
			$(LN) $(LINK_INSTALL_FLAGS) mke2fs mkfs.$$i); \
	done
	$(Q) (cd $(DESTDIR)$(root_sbindir); \
		$(LN) $(LINK_INSTALL_FLAGS) tune2fs e2label)
	$(Q) if test -n "$(FINDFS_LINK)"; then \
		echo "	LINK $(root_sbindir)/findfs"; \
		(cd $(DESTDIR)$(root_sbindir); \
		$(LN) $(LINK_INSTALL_FLAGS) tune2fs $(FINDFS_LINK)); \
	fi
	$(Q) for i in $(UPROGS); do \
		echo "	INSTALL $(bindir)/$$i"; \
		$(INSTALL_PROGRAM) $$i $(DESTDIR)$(bindir)/$$i; \
	done
	$(Q) for i in $(LPROGS); do \
		echo "	INSTALL $(libdir)/$$i"; \
		$(INSTALL_PROGRAM) $$i $(DESTDIR)$(libdir)/$$i; \
	done
	$(Q) for i in $(SMANPAGES); do \
		for j in $(COMPRESS_EXT); do \
			$(RM) -f $(DESTDIR)$(man8dir)/$$i.$$j; \
		done; \
		echo "	INSTALL_DATA $(man8dir)/$$i"; \
		$(INSTALL_DATA) $$i $(DESTDIR)$(man8dir)/$$i; \
	done
	$(Q) $(RM) -f $(DESTDIR)$(man8dir)/mkfs.ext2.8.gz \
		$(DESTDIR)$(man8dir)/mkfs.ext3.8.gz
	$(Q) for i in ext2 ext3 ext4 ext4dev; do \
		echo "	LINK mkfs.$$i.8"; \
		(cd $(DESTDIR)$(man8dir); \
			$(LN) $(LINK_INSTALL_FLAGS) mke2fs.8 mkfs.$$i.8); \
	done
	$(Q) for i in $(UMANPAGES); do \
		for j in $(COMPRESS_EXT); do \
			$(RM) -f $(DESTDIR)$(man1dir)/$$i.$$j; \
		done; \
		echo "	INSTALL_DATA $(man1dir)/$$i"; \
		$(INSTALL_DATA) $$i $(DESTDIR)$(man1dir)/$$i; \
	done
	$(Q) for i in $(FMANPAGES); do \
		for j in $(COMPRESS_EXT); do \
			$(RM) -f $(DESTDIR)$(man5dir)/$$i.$$j; \
		done; \
		echo "	INSTALL_DATA $(man5dir)/$$i"; \
		$(INSTALL_DATA) $$i $(DESTDIR)$(man5dir)/$$i; \
	done
	$(Q) if test -f $(DESTDIR)$(root_sysconfdir)/mke2fs.conf; then \
		if cmp -s $(DESTDIR)$(root_sysconfdir)/mke2fs.conf \
			$(srcdir)/mke2fs.conf; then \
			true; \
		else \
			if grep -q ext4dev $(DESTDIR)$(root_sysconfdir)/mke2fs.conf ; then \
				echo "	INSTALL_DATA $(root_sysconfdir)/mke2fs.conf.e2fsprogs-new"; \
				$(INSTALL_DATA) $(srcdir)/mke2fs.conf \
					$(DESTDIR)$(root_sysconfdir)/mke2fs.conf.e2fsprogs-new; \
				echo "Warning: installing mke2fs.conf in $(DESTDIR)$(root_sysconfdir)/mke2fs.conf.e2fsprogs-new"; \
				echo "Check to see if you need to update your $(root_sysconfdir)/mke2fs.conf"; \
			else \
				echo "	INSTALL_DATA $(root_sysconfdir)/mke2fs.conf"; \
				mv $(DESTDIR)$(root_sysconfdir)/mke2fs.conf \
				   $(DESTDIR)$(root_sysconfdir)/mke2fs.conf.e2fsprogs-old; \
				$(INSTALL_DATA) $(srcdir)/mke2fs.conf \
					$(DESTDIR)$(root_sysconfdir)/mke2fs.conf; \
				echo "Your mke2fs.conf is too old.  Backing up old version in"; \
				echo "$(DESTDIR)$(root_sysconfdir)/mke2fs.conf.e2fsprogs-old.  Please check to see"; \
				echo "if you have any local customizations that you wish to preserve."; \
			fi; \
			echo " "; \
		fi; \
	else \
		echo "	INSTALL_DATA $(root_sysconfdir)/mke2fs.conf"; \
		$(INSTALL_DATA) $(srcdir)/mke2fs.conf \
			$(DESTDIR)$(root_sysconfdir)/mke2fs.conf; \
	fi

install-strip: install
	$(Q) for i in $(SPROGS); do \
		echo "	STRIP $(root_sbindir)/$$i"; \
		$(STRIP) $(DESTDIR)$(root_sbindir)/$$i; \
	done
	$(Q) for i in $(USPROGS); do \
		echo "	STRIP $(sbindir)/$$i"; \
		$(STRIP) $(DESTDIR)$(sbindir)/$$i; \
	done

uninstall:
	for i in $(SPROGS); do \
		$(RM) -f $(DESTDIR)$(root_sbindir)/$$i; \
	done
	for i in $(USPROGS); do \
		$(RM) -f $(DESTDIR)$(sbindir)/$$i; \
	done
	for i in $(LPROGS); do \
		$(RM) -f $(DESTDIR)$(libdir)/$$i; \
	done
	$(RM) -f $(DESTDIR)$(root_sbindir)/mkfs.ext2 \
			$(DESTDIR)$(root_sbindir)/mkfs.ext3 \
			$(DESTDIR)$(root_sbindir)/mkfs.ext4 \
			$(DESTDIR)$(root_sbindir)/mkfs.ext4dev
	for i in $(UPROGS); do \
		$(RM) -f $(DESTDIR)$(bindir)/$$i; \
	done
	for i in $(SMANPAGES); do \
		$(RM) -f $(DESTDIR)$(man8dir)/$$i; \
	done
	$(RM) -f $(DESTDIR)$(man8dir)/mkfs.ext2.8 \
		$(DESTDIR)$(man8dir)/mkfs.ext3.8 \
		$(DESTDIR)$(man8dir)/mkfs.ext4.8 \
		$(DESTDIR)$(man8dir)/mkfs.ext4dev.8
	for i in $(UMANPAGES); do \
		$(RM) -f $(DESTDIR)$(man1dir)/$$i; \
	done
	for i in $(FINDFS_LINK) e2label ; do \
		$(RM) -f $(DESTDIR)$(root_sbindir)/$$i; \
	done
	for i in $(FMANPAGES); do \
		$(RM) -f $(DESTDIR)$(man5dir)/$$i; \
	done
	if cmp -s $(srcdir)/mke2fs.conf $(DESTDIR)/$(root_sysconfdir)/mke2fs.conf; then \
		$(RM) $(DESTDIR)/$(root_sysconfdir)/mke2fs.conf; \
	fi

clean:
	$(RM) -f $(SPROGS) $(USPROGS) $(UPROGS) $(UMANPAGES) $(SMANPAGES) \
		$(FMANPAGES) \
		base_device base_device.out mke2fs.static filefrag e2freefrag \
		e2initrd_helper partinfo prof_err.[ch] default_profile.c \
		uuidd e2image tune2fs.static tst_ismounted fsck.profiled \
		blkid.profiled tune2fs.profiled e2image.profiled \
		e2undo.profiled mke2fs.profiled dumpe2fs.profiled \
		logsave.profiled filefrag.profiled uuidgen.profiled \
		uuidd.profiled e2image.profiled \
		profiled/*.o \#* *.s *.o *.a *~ core gmon.out

mostlyclean: clean
distclean: clean
	$(RM) -f .depend Makefile $(srcdir)/TAGS $(srcdir)/Makefile.in.old

# +++ Dependency line eater +++
# 
# Makefile dependencies follow.  This must be the last section in
# the Makefile.in file
#
tune2fs.o: $(srcdir)/tune2fs.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_srcdir)/lib/ext2fs/ext3_extents.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_io.h $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/bitops.h \
 $(top_srcdir)/lib/e2p/e2p.h $(srcdir)/jfs_user.h \
 $(top_srcdir)/lib/ext2fs/kernel-jbd.h $(top_srcdir)/lib/ext2fs/jfs_compat.h \
 $(top_srcdir)/lib/ext2fs/kernel-list.h $(srcdir)/util.h \
 $(top_srcdir)/version.h $(srcdir)/nls-enable.h
mklost+found.o: $(srcdir)/mklost+found.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/version.h \
 $(srcdir)/nls-enable.h
mke2fs.o: $(srcdir)/mke2fs.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/e2p/e2p.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_srcdir)/lib/ext2fs/ext3_extents.h $(top_srcdir)/lib/ext2fs/ext2_io.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/bitops.h \
 $(srcdir)/util.h $(srcdir)/../e2fsck/profile.h prof_err.h \
 $(top_srcdir)/version.h $(srcdir)/nls-enable.h
chattr.o: $(srcdir)/chattr.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/e2p/e2p.h $(top_srcdir)/version.h $(srcdir)/nls-enable.h
lsattr.o: $(srcdir)/lsattr.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/e2p/e2p.h $(top_srcdir)/version.h $(srcdir)/nls-enable.h
dumpe2fs.o: $(srcdir)/dumpe2fs.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_srcdir)/lib/ext2fs/ext3_extents.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_io.h $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/bitops.h \
 $(top_srcdir)/lib/e2p/e2p.h $(srcdir)/jfs_user.h \
 $(top_srcdir)/lib/ext2fs/kernel-jbd.h $(top_srcdir)/lib/ext2fs/jfs_compat.h \
 $(top_srcdir)/lib/ext2fs/kernel-list.h $(top_srcdir)/version.h \
 $(srcdir)/nls-enable.h
badblocks.o: $(srcdir)/badblocks.c $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_io.h $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_srcdir)/lib/ext2fs/ext3_extents.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/bitops.h \
 $(srcdir)/nls-enable.h
fsck.o: $(srcdir)/fsck.c $(top_srcdir)/version.h $(srcdir)/nls-enable.h \
 $(srcdir)/fsck.h
util.o: $(srcdir)/util.c $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/e2p/e2p.h $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_srcdir)/lib/ext2fs/ext3_extents.h $(top_srcdir)/lib/ext2fs/ext2_io.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/bitops.h \
 $(srcdir)/nls-enable.h $(srcdir)/util.h
uuidgen.o: $(srcdir)/uuidgen.c $(srcdir)/nls-enable.h
blkid.o: $(srcdir)/blkid.c $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_srcdir)/lib/ext2fs/ext3_extents.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_io.h $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/bitops.h
logsave.o: $(srcdir)/logsave.c
filefrag.o: $(srcdir)/filefrag.c $(top_builddir)/lib/ext2fs/ext2_types.h \
 $(top_srcdir)/lib/ext2fs/fiemap.h
base_device.o: $(srcdir)/base_device.c $(srcdir)/fsck.h
ismounted.o: $(srcdir)/ismounted.c $(srcdir)/fsck.h \
 $(top_srcdir)/lib/et/com_err.h
profile.o: $(srcdir)/../e2fsck/profile.c $(top_srcdir)/lib/et/com_err.h \
 $(srcdir)/../e2fsck/profile.h prof_err.h
e2undo.o: $(srcdir)/e2undo.c $(top_srcdir)/lib/ext2fs/tdb.h \
 $(top_srcdir)/lib/ext2fs/ext2fs.h $(top_builddir)/lib/ext2fs/ext2_types.h \
 $(top_srcdir)/lib/ext2fs/ext2_fs.h $(top_srcdir)/lib/ext2fs/ext3_extents.h \
 $(top_srcdir)/lib/et/com_err.h $(top_srcdir)/lib/ext2fs/ext2_io.h \
 $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/bitops.h \
 $(srcdir)/nls-enable.h
e2freefrag.o: $(srcdir)/e2freefrag.c $(top_srcdir)/lib/ext2fs/ext2_fs.h \
 $(top_builddir)/lib/ext2fs/ext2_types.h $(top_srcdir)/lib/ext2fs/ext2fs.h \
 $(top_srcdir)/lib/ext2fs/ext3_extents.h $(top_srcdir)/lib/et/com_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_io.h $(top_builddir)/lib/ext2fs/ext2_err.h \
 $(top_srcdir)/lib/ext2fs/ext2_ext_attr.h $(top_srcdir)/lib/ext2fs/bitops.h \
 $(srcdir)/e2freefrag.h
