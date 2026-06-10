// including the header file created earlier
#include "llvm/Transforms/Utils/FunctionNamePass.h"

// needed because run() receives Function &F object and calls F.getName() to print funciton name.
#include "llvm/IR/Function.h"

// To access LLVM's raw output stream utilities, including errs().
// errs() used to print diagnostic output to stderr
#include "llvm/Support/raw_ostream.h"


using namespace llvm;

// Defining run() method declared in FunctionNamePass.h
PreservedAnalyses FunctionNamePass::run(Function &F, FunctionAnalysisManager &AM) {
  // F is current LLVM IR function being visited by the pass
  errs() << F.getName() << "\n";

  return PreservedAnalyses::all();
}