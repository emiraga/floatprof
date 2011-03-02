// Copyright 2011, Emir Habul <emiraga@gmail.com>

#ifndef DEBUGGER_FLOATINSTRUCTIONS_H_
#define DEBUGGER_FLOATINSTRUCTIONS_H_

#include <boost/smart_ptr.hpp>
#include <vector>

#include "debugger/instructionobserver.h"
#include "profiler/floatingobserver.h"

using boost::weak_ptr;
using boost::shared_ptr;

namespace floatprof {

class FloatInstructions : public InstructionObserver {
 public:
  FloatInstructions();
  virtual void notifyInstruction(MemoryReader *usermemory);

  void addObserver(shared_ptr<FloatingObserver> observer) {
    observers_.push_back(weak_ptr<FloatingObserver>(observer));
  }

  void notifyObserversAdd(LongDouble a, LongDouble b) {
    for (size_t i = 0; i < observers_.size(); i++) {
      if (!observers_[i].expired())
        observers_[i].lock()->addx80(a, b);
    }
  }

 private:
  template<class FT1>
  void found_add(LongDouble a, FT1 b, int eopc);
  // Specialized for int32
  void found_add(LongDouble a, uint32_t b32, int eopc) {
    LongDouble b(static_cast<long double>(b32));
    found_add(a, b, eopc);
  }
  // Specialized for int16
  void found_add(LongDouble a, uint16_t b16, int eopc) {
    LongDouble b(static_cast<long double>(b16));
    found_add(a, b, eopc);
  }
  // Keep list of observers of floating point operations
  std::vector<weak_ptr<FloatingObserver> > observers_;
};

}  // namespace floatprof

#endif  // DEBUGGER_FLOATINSTRUCTIONS_H_
