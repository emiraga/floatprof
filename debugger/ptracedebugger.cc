// Copyright 2011, Emir Habul <emiraga@gmail.com>

#include "debugger/ptracedebugger.h"
#include <errno.h>
#include <sys/wait.h>
#include <cstdio>

namespace floatprof {
PtraceDebugger::PtraceDebugger()
  : pid_(-1) {
}

PtraceDebugger::~PtraceDebugger() {
}

int PtraceDebugger::Init() {
  return 0;
}

int PtraceDebugger::Run(char *const *args) {
  switch (pid_ = fork()) {
    case -1: {
      perror("fork");
      fprintf(stderr, "fork() failed.\n");
      return 1;
      break;
    }
    case 0: {
      // must be called in order to allow the
      // control over the child process
      ptrace(PTRACE_TRACEME, 0, 0, 0);
      execv(args[0], args);
      // child process ends
      break;
    }
    default: {
      pid_t val;
      // parent process starts
      wait(&val);

      start();
      step();
      // wait for child to stop at next instruction
      while (1) {
        if (ptrace(PTRACE_SINGLESTEP, pid_, 0, 0) != 0) {
          perror("ptrace");
          fprintf(stderr, "ptrace() failed.\n");
          return 1;
        }
        wait(&val);
        if (val != 1407)
          break;
          step();
        }
        // continue to stop, wait and release until
        // the child is finished; val != 1407
        // Low=0177L and High=05 (SIGTRAP)
        end();
    }
  }
  return 0;
}

void PtraceDebugger::start() {
  //
}
void PtraceDebugger::step() {
  // Fill register structures from user program
  if(ptrace(PTRACE_GETREGS, pid_, NULL, &regs_) < 0) {
    perror("ptrace PTRACE_GETREGS");
    return;
  }
  // Fill extended floating point registers
  if(ptrace(PTRACE_GETFPXREGS, pid_, NULL, &fpregs_) < 0) {
    perror("ptrace PTRACE_GETFPXREGS");
    return;
  }
  // Read 32 bytes from eip which contains next instruction
  for(int i = 0; i < instruction_.SIZE32; i++) {
    instruction_.iopcode[i] = get_uint32(
        reinterpret_cast<void*>(regs_.eip + (i*4)));
  }
  notifyObservers(instruction_);
}
void PtraceDebugger::end() {
  //
}
}  // namespace floatprof
