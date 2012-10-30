//===-- CppBackendTargetInfo.cpp - CppBackend Target Implementation -------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#include "EpiphanyTargetMachine.h"
#include "llvm/Module.h"
#include "llvm/Support/TargetRegistry.h"
using namespace llvm;

Target llvm::TheEpiphanyTarget;

static unsigned Epiphany_TripleMatchQuality(const std::string &TT) {
  // This class always works, but shouldn't be the default in most cases.
  return 1;
}

extern "C" void LLVMInitializeEpiphanyTargetInfo() { 
  TargetRegistry::RegisterTarget(TheEpiphanyTarget, "epiphany",    
                                  "Epiphany",
                                  &Epiphany_TripleMatchQuality);
}

extern "C" void LLVMInitializeEpiphanyTargetMC() {}
