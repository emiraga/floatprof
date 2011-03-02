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
  //  From DebuggerInterface
  virtual int Init();
  virtual int Run(char *const *args);

  //  From MemoryReader interface
  virtual LongDouble get_fx80_from_st(int st) {
    LongDouble operand;
    for (int k = 0; k < 4; k++)
      operand.integers[k] = fpregs_.st_space[k + 4*st];
    return operand;
  }
  virtual LongDouble get_fx80(void *addr) {
    uint32_t *user_addr = reinterpret_cast<uint32_t*>(addr);
    LongDouble operand;
    operand.integers[0] = ptrace(PTRACE_PEEKDATA, pid_, user_addr, NULL);
    operand.integers[1] = ptrace(PTRACE_PEEKDATA, pid_, user_addr + 1, NULL);
    operand.integers[2] = ptrace(PTRACE_PEEKDATA, pid_, user_addr + 2, NULL);
    return operand;
  }
  virtual Double get_f64(void *addr) {
    uint32_t *user_addr = reinterpret_cast<uint32_t*>(addr);
    Double operand;
    operand.integers[0] = ptrace(PTRACE_PEEKDATA, pid_, user_addr, NULL);
    operand.integers[1] = ptrace(PTRACE_PEEKDATA, pid_, user_addr + 1, NULL);
    return operand;
  }
  virtual Float get_f32(void *addr) {
    Float operand;
    operand.integers[0] = ptrace(PTRACE_PEEKDATA, pid_, addr, NULL);
    return operand;
  }
  virtual uint32_t get_uint32(void *addr) {
    return ptrace(PTRACE_PEEKDATA, pid_, addr, NULL);
  }
  virtual uint16_t get_uint16(void *addr) {
    return ptrace(PTRACE_PEEKDATA, pid_, addr, NULL);
  }
  virtual Instruction current_instruction() {
    return instruction_;
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
