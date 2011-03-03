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
QMAKE_CXXFLAGS += -fstrict-aliasing -Wstrict-aliasing=2 \
    -fprofile-arcs -ftest-coverage

LIBS += -lgcov

SOURCES += main.cc \
    gmock/gmock-gtest-all.cc \
    softfloat/softfloatfast.cc \
    softfloat/test/softfloatfast_unittest.cc \
    base/test/types_unittest.cc \
    debugger/ptracedebugger.cc \
    debugger/instructionprint.cc \
    debugger/floatinstructions.cc \
    debugger/test/instructionprint_unittest.cc \
    debugger/test/debuggerinterface_unittest.cc \
    profiler/printfloatingoperations.cc \
    debugger/test/floatinstructions_unittest.cc

HEADERS += \
    softfloat/softfloat_interface.h \
    softfloat/softfloatfast.h \
    base/types.h \
    debugger/memoryreader.h \
    debugger/debuggerinterface.h \
    debugger/ptracedebugger.h \
    debugger/instructionobserver.h \
    debugger/instructionprint.h \
    debugger/floatinstructions.h \
    debugger/test/mockinstructionobserver.h \
    debugger/test/mockdebuggerinterface.h \
    profiler/floatingobserver.h \
    profiler/printfloatingoperations.h \
    profiler/test/mockfloatingobserver.h \
    debugger/test/mockmemoryreader.h

message( Source directory is $$PWD )

# Custom build step for softfloat
softfloat2b.target = $$PWD/softfloat/softfloat/bits64/386-Win32-GCC/softfloat.o
softfloat2b.commands = make -C $$PWD/softfloat/softfloat/bits64/386-Win32-GCC/
softfloat2b.depends = FORCE
QMAKE_EXTRA_TARGETS += softfloat2b

OBJECTS += $$PWD/softfloat/softfloat/bits64/386-Win32-GCC/softfloat.o

# Custom build step for asm_test
asm_test.target = asm_test
asm_test.depends = $$PWD/asm/test.asm
asm_test.commands = nasm -f elf $$asm_test.depends -o test.o && ld -s -o asm_test test.o
QMAKE_EXTRA_TARGETS += asm_test

POST_TARGETDEPS += asm_test

# Custom build step for ndisasm
NASMOBJ = nasm/disasm.o nasm/regdis.o nasm/insnsd.o \
          nasm/nasmlib.o nasm/insnsn.o nasm/regs.o \
          nasm/sync.o nasm/insnsb.o

ndisasm.target = nasm/disasm.o
ndisasm.commands = cd $$PWD/nasm/ && ./configure && make
ndisasm.depends = FORCE
QMAKE_EXTRA_TARGETS += ndisasm

OBJECTS += $$NASMOBJ

# Google lint
lint.target = lint
lint.commands = $$PWD/lint.sh
lint.depends = FORCE
QMAKE_EXTRA_TARGETS += lint
PRE_TARGETDEPS += lint
