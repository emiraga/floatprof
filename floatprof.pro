#-------------------------------------------------
#
# Project created by QtCreator 2011-02-23T08:34:03
#
#-------------------------------------------------

QT       -= core

QT       -= gui

TARGET = floatprof
CONFIG   -= console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cc \
    gmock-gtest-all.cc \
    softfloat/softfloatfast.cc \
    softfloat/softfloatfast_unittest.cc \
    base/types_unittest.cc

HEADERS += \
    types.h \
    softfloat/softfloat_interface.h \
    softfloat/softfloatfast.h \
    base/types.h

softfloat2b.target = ../floatprof/softfloat/softfloat/bits64/386-Win32-GCC/softfloat.o
softfloat2b.commands = make -C ../floatprof/softfloat/softfloat/bits64/386-Win32-GCC/
softfloat2b.depends = FORCE

QMAKE_EXTRA_TARGETS += softfloat2b

OBJECTS += ../floatprof/softfloat/softfloat/bits64/386-Win32-GCC/softfloat.o
