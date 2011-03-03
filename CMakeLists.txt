project ( floatprof )
cmake_minimum_required ( VERSION 2.6 )
set ( CMAKE_BUILD_TYPE Release )
add_definitions ( -Wall -fstrict-aliasing -Wstrict-aliasing=2 )

include_directories (
    ${CMAKE_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR}
)

set ( floatprof_SRCS
    softfloat/softfloatfast.cc
    debugger/ptracedebugger.cc
    debugger/instructionprint.cc
    debugger/floatinstructions.cc
    profiler/printfloatingoperations.cc
)

set ( testfloatprof_SRCS
    base/test/types_unittest.cc
    gmock/gmock-gtest-all.cc
    softfloat/test/softfloatfast_unittest.cc
    debugger/test/instructionprint_unittest.cc
    debugger/test/debuggerinterface_unittest.cc
    debugger/test/floatinstructions_unittest.cc
)

add_library ( ndisasm STATIC IMPORTED )
add_custom_command (
    OUTPUT libndisasm.a
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/nasm
    COMMAND ./configure
    COMMAND make
    COMMAND ar rcs ${CMAKE_CURRENT_BINARY_DIR}/libndisasm.a disasm.o regdis.o insnsd.o nasmlib.o insnsn.o regs.o sync.o insnsb.o
)
set_target_properties ( ndisasm PROPERTIES
      IMPORTED_LOCATION ${CMAKE_CURRENT_BINARY_DIR}/libndisasm.a )

add_library ( softfloat STATIC IMPORTED )
add_custom_command (
    OUTPUT libsoftfloat.a
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}/softfloat/softfloat/bits64/386-Win32-GCC/
    COMMAND make
    COMMAND ar rcs ${CMAKE_CURRENT_BINARY_DIR}/libsoftfloat.a softfloat.o
)
set_target_properties ( softfloat PROPERTIES
      IMPORTED_LOCATION ${CMAKE_CURRENT_BINARY_DIR}/libsoftfloat.a )

set ( main_extra_deps
    libndisasm.a
    libsoftfloat.a
)

set ( main_libs
    pthread
    ndisasm
    softfloat
)

add_executable ( floatprof
    main.cc
    ${floatprof_SRCS}
    ${main_extra_deps}
)
target_link_libraries ( floatprof ${main_libs} )

add_executable ( testfloatprof
    main_test.cc
    ${floatprof_SRCS}
    ${testfloatprof_SRCS}
    ${main_extra_deps}
)
target_link_libraries ( testfloatprof ${main_libs} )

add_custom_target ( google_lint ALL
    COMMAND ${CMAKE_SOURCE_DIR}/lint.sh
)

add_custom_target ( asm_test
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    DEPENDS asm/test.asm
    COMMAND nasm -f elf ${CMAKE_SOURCE_DIR}/asm/test.asm -o test.o
    COMMAND ld -s -o asm_test test.o
)

add_dependencies ( floatprof asm_test )

