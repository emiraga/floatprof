// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef DEBUGGER_DEBUGGERINTERFACE_H_
#define DEBUGGER_DEBUGGERINTERFACE_H_

#include <boost/smart_ptr.hpp>
#include <vector>

#include "debugger/instructionobserver.h"

using std::vector;
using boost::shared_ptr;
using boost::weak_ptr;

namespace floatprof {

class DebuggerInterface {
 public:
  DebuggerInterface() {}
  virtual ~DebuggerInterface() {}
  virtual int Init() = 0;
  virtual int Run(char *const *args) = 0;

  void addObserver(shared_ptr<InstructionObserver> observer) {
    observers_.push_back(weak_ptr<InstructionObserver>(observer));
  }
  void notifyObservers(MemoryReader *usermemory) {
    for (size_t i = 0; i < observers_.size(); i++) {
      if (!observers_[i].expired())
        observers_[i].lock()->notifyInstruction(usermemory);
    }
  }
 private:
  vector<weak_ptr<InstructionObserver> > observers_;
};

}  // namespace floatprof

#endif  // DEBUGGER_DEBUGGERINTERFACE_H_
