// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef DEBUGGER_PTRACEDEBUGGER_H_
#define DEBUGGER_PTRACEDEBUGGER_H_

#include <unistd.h>
#include <sys/ptrace.h>
#include <sys/user.h>
#include "debugger/memoryreader.h"
#include "debugger/debuggerinterface.h"

namespace floatprof {
class PtraceDebugger : public DebuggerInterface, public MemoryReader {
 public:
  PtraceDebugger();
  virtual ~PtraceDebugger();
  int Init();
  int Run(char *const *args);
  //  From DebuggerInterface

  //  From MemoryReader interface
  virtual LongDouble get_fx80_from_st(int st) {
  }
  virtual LongDouble get_fx80(void *addr) {
  }
  virtual Double get_f64(void *addr) {
  }
  virtual Float get_f32(void *addr) {
  }
  virtual uint32_t get_uint32(void *addr) {
    return ptrace(PTRACE_PEEKDATA, pid_, addr, NULL);
  }
  virtual uint16_t get_uint16(void *addr) {
  }

  // Accessors
  pid_t pid() const {
    return pid_;
  }
 private:
  pid_t pid_;
  Instruction instruction_;
  struct user_fpxregs_struct fpregs_;
  struct user_regs_struct regs_;

  void start();
  void step();
  void end();
};
}  // namespace floatprof

#endif  // DEBUGGER_PTRACEDEBUGGER_H_
