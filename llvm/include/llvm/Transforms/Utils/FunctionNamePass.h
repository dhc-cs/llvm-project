#ifndef LLVM_TRANSFORMS_FUNCTIONNAMEPASS_H // include guard
#define LLVM_TRANSFORMS_FUNCTIONNAMEPASS_H // include guard name

#include "llvm/IR/PassManager.h" // Importing LLVM pass manager definitions

namespace llvm { // putting class in llvm namespace to not pollute global namespace

// My pass only prints function names. It doesn't require correctness. Thus Optional is used
class FunctionNamePass : public OptionalPassInfoMixin<FunctionNamePass> {
public:
  // prints names of funcs to stderr for diagnostic-style printing
  // running PreservedAnalysis bc nothing is modified
  PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM); // declaring method that actually runs the pass
};

} // namespace llvm

#endif // LLVM_TRANSFORMS_FUNCTIONNAMEPASS_Hi
