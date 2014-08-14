AUTOMAKE_OPTIONS = subdir-objects

lib_LTLIBRARIES = libtaunix.la

libtaunix_la_SOURCES = \
	AT.c \
	DIFFLIST.c \
	PRILIST.c \
	PRINSERT.c \
	SSECS.c \
	TASK.c \
	event.c \
	CMPCTSTR.c\
	PIPE.c \
	SLEEP.c \
	Sem.c \
	TRAPNMI.c \
	ws_gen.c

if WITH_X240
libtaunix_la_SOURCES += x240/CAPTURE.c \
						x240/SCI.c \
						x240/TINT1.c \
						x240/TINT23.c \
						x240/adc.c \
						x240/gpt.c \
						x240/pwm.c \
						x240/tint6.c \
						x240/wdrti.c
endif

if WITH_X243
libtaunix_la_SOURCES += x243/CAPTURE.c \
						x243/SCI.c \
						x243/TINT1.c \
						x243/TINT23.c \
						x243/adc.c \
						x243/gpt.c \
						x243/pwm.c \
						x243/tint6.c \
						x243/WDRTI.c
endif

AM_CFLAGS = -I$(top_srcdir)/include -I$(top_srcdir)/include/Taunix -I$(top_srcdir)/include/Taunix/x240 -I$(top_srcdir)/include/Taunix/x243
