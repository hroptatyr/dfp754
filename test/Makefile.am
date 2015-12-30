# Help the Developers and yourself. Just use the C locale and settings
# for the compilation. They can still be overriden by make LANG=<whatever>
# but that is general a not very good idea
include $(top_builddir)/version.mk

LANG = C
LC_ALL = C

AM_CFLAGS = $(EXTRA_CFLAGS)
AM_CPPFLAGS = -D_POSIX_C_SOURCE=200112L -D_XOPEN_SOURCE=600 -D_BSD_SOURCE
AM_CPPFLAGS += -DTEST
AM_CPPFLAGS += -D__STDC_WANT_DEC_FP__
AM_CPPFLAGS += -I$(top_srcdir)/src

EXTRA_DIST = $(BUILT_SOURCES) $(TESTS)
TESTS =
TEST_EXTENSIONS =
BUILT_SOURCES =
dt_tests =
bin_tests =
batch_tests =
check_PROGRAMS =
CLEANFILES = $(check_PROGRAMS)
noinst_LIBRARIES =

## summon our helper
include clitoris.am
AM_CLIT_LOG_FLAGS = -v --builddir $(top_builddir)/src
TESTS_ENVIRONMENT = root=$(top_srcdir)


check_PROGRAMS += pr-d32_01
pr_d32_01_SOURCES = pr-d32_01.c
pr_d32_01_CPPFLAGS = $(AM_CPPFLAGS) $(dfp754_CFLAGS)
pr_d32_01_LDADD = $(top_builddir)/src/libdfp754.a
TESTS += pr-d32_01

check_PROGRAMS += pr-d64_01
pr_d64_01_SOURCES = pr-d64_01.c
pr_d64_01_CPPFLAGS = $(AM_CPPFLAGS) $(dfp754_CFLAGS)
pr_d64_01_LDADD = $(top_builddir)/src/libdfp754.a
TESTS += pr-d64_01

check_PROGRAMS += scalbnd32_01
scalbnd32_01_SOURCES = scalbnd32_01.c
scalbnd32_01_CPPFLAGS = $(AM_CPPFLAGS) $(dfp754_CFLAGS)
scalbnd32_01_LDADD = $(top_builddir)/src/libdfp754.a
TESTS += scalbnd32_01

check_PROGRAMS += scalbnd64_01
scalbnd64_01_SOURCES = scalbnd64_01.c
scalbnd64_01_CPPFLAGS = $(AM_CPPFLAGS) $(dfp754_CFLAGS)
scalbnd64_01_LDADD = $(top_builddir)/src/libdfp754.a
TESTS += scalbnd64_01

## Makefile.am ends here
