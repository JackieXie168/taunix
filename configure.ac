#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.64])
AC_INIT([libtaunix], [0.7.4], [jackie.CPlusPlus@gmail.com])
AC_CONFIG_SRCDIR([demo/demo_priList.c])
AC_CONFIG_HEADERS([config.h])

# Setup AM
AM_INIT_AUTOMAKE([foreign])

# Checks for programs.
AC_PROG_AWK
AC_PROG_CXX
AC_PROG_CC
AC_PROG_INSTALL
AC_PROG_MAKE_SET
AC_PROG_RANLIB
AC_PROG_LIBTOOL

# Checks for libraries.

# Checks for header files.
AC_CHECK_HEADERS([stdio.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_INLINE

# Checks for library functions.

# Conditionals

AC_ARG_WITH([x240],
	[  --without-x240        Disable x240 module],
	[x240=false],
	[x240=true])
AM_CONDITIONAL([WITH_X240], [test x$x240 = xtrue])
AM_COND_IF([WITH_X240],
	[AC_DEFINE([WITH_X240], [1], [Enable x240 module])])

AC_ARG_WITH([x243],
	[  --without-x243        Disable x243 module],
	[x243=false],
	[x243=true])
AM_CONDITIONAL([WITH_X243], [test x$x243 = xtrue])
AM_COND_IF([WITH_X243],
	[AC_DEFINE([WITH_X243], [1], [Enable x243 module])])


AC_CONFIG_FILES([Makefile
                 src/Makefile
                 include/Makefile
                 demo/Makefile])
AC_OUTPUT
