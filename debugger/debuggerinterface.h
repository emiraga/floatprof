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

  void addObserver(shared_ptr<InstructionObserver> observer) {
    observers_.push_back(weak_ptr<InstructionObserver>(observer));
  }
  void notifyObservers(const Instruction &instruction) {
    for (size_t i = 0; i < observers_.size(); i++) {
      if (!observers_[i].expired())
        observers_[i].lock()->notifyInstruction(instruction);
    }
  }
 private:
  vector<weak_ptr<InstructionObserver> > observers_;
};
}  // namespace floatprof

#endif  // DEBUGGER_DEBUGGERINTERFACE_H_
