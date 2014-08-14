noinst_PROGRAMS = demo_priList demo_priList_insert demo_Sem

demo_priList_SOURCES = demo_priList.c
demo_priList_insert_SOURCES = demo_priList_insert.c
demo_Sem_SOURCES = demo_Sem.c

demo_priList_LDADD = $(top_srcdir)/src/libtaunix.la
demo_priList_insert_LDADD = $(top_srcdir)/src/libtaunix.la
demo_Sem_LDADD = $(top_srcdir)/src/libtaunix.la

AM_CFLAGS = -I$(top_srcdir)/include -I$(top_srcdir)/include/Taunix -I$(top_srcdir)/include/Taunix/x240 -I$(top_srcdir)/include/Taunix/x243
