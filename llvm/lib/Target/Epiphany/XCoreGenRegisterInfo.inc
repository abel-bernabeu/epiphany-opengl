//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Register Enum Values
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_ENUM
#undef GET_REGINFO_ENUM
namespace llvm {

class MCRegisterClass;
extern const MCRegisterClass XCoreMCRegisterClasses[];

namespace XCore {
enum {
  NoRegister,
  CP = 1,
  DP = 2,
  LR = 3,
  R0 = 4,
  R1 = 5,
  R2 = 6,
  R3 = 7,
  R4 = 8,
  R5 = 9,
  R6 = 10,
  R7 = 11,
  R8 = 12,
  R9 = 13,
  R10 = 14,
  R11 = 15,
  SP = 16,
  NUM_TARGET_REGS 	// 17
};
}

// Register classes
namespace XCore {
enum {
  GRRegsRegClassID = 0,
  RRegsRegClassID = 1
  };
}
} // End llvm namespace 
#endif // GET_REGINFO_ENUM

//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// MC Register Information
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_MC_DESC
#undef GET_REGINFO_MC_DESC
namespace llvm {

extern const uint16_t XCoreRegLists[] = {
  /* 0 */ XCore::CP, 0,
  /* 2 */ XCore::DP, 0,
  /* 4 */ XCore::LR, 0,
  /* 6 */ XCore::R0, 0,
  /* 8 */ XCore::R1, 0,
  /* 10 */ XCore::R2, 0,
  /* 12 */ XCore::R3, 0,
  /* 14 */ XCore::R4, 0,
  /* 16 */ XCore::R5, 0,
  /* 18 */ XCore::R6, 0,
  /* 20 */ XCore::R7, 0,
  /* 22 */ XCore::R8, 0,
  /* 24 */ XCore::R9, 0,
  /* 26 */ XCore::R10, 0,
  /* 28 */ XCore::R11, 0,
  /* 30 */ XCore::SP, 0,
};

extern const MCRegisterDesc XCoreRegDesc[] = { // Descriptors
  { "NOREG", 0, 0, 0 },
  { "CP", 0, 1, 1 },
  { "DP", 2, 1, 1 },
  { "LR", 4, 1, 1 },
  { "R0", 6, 1, 1 },
  { "R1", 8, 1, 1 },
  { "R2", 10, 1, 1 },
  { "R3", 12, 1, 1 },
  { "R4", 14, 1, 1 },
  { "R5", 16, 1, 1 },
  { "R6", 18, 1, 1 },
  { "R7", 20, 1, 1 },
  { "R8", 22, 1, 1 },
  { "R9", 24, 1, 1 },
  { "R10", 26, 1, 1 },
  { "R11", 28, 1, 1 },
  { "SP", 30, 1, 1 },
};

namespace {     // Register classes...
  // GRRegs Register Class...
  const uint16_t GRRegs[] = {
    XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R11, XCore::R4, XCore::R5, XCore::R6, XCore::R7, XCore::R8, XCore::R9, XCore::R10, 
  };

  // GRRegs Bit set.
  const uint8_t GRRegsBits[] = {
    0xf0, 0xff, 
  };

  // RRegs Register Class...
  const uint16_t RRegs[] = {
    XCore::CP, XCore::DP, XCore::SP, XCore::LR, 
  };

  // RRegs Bit set.
  const uint8_t RRegsBits[] = {
    0x0e, 0x00, 0x01, 
  };

}

extern const MCRegisterClass XCoreMCRegisterClasses[] = {
  { "GRRegs", GRRegs, GRRegsBits, 12, sizeof(GRRegsBits), XCore::GRRegsRegClassID, 4, 4, 1, 1 },
  { "RRegs", RRegs, RRegsBits, 4, sizeof(RRegsBits), XCore::RRegsRegClassID, 4, 4, 1, 0 },
};

// XCore Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair XCoreDwarfFlavour0Dwarf2L[] = {
  { 0U, XCore::R0 },
  { 1U, XCore::R1 },
  { 2U, XCore::R2 },
  { 3U, XCore::R3 },
  { 4U, XCore::R4 },
  { 5U, XCore::R5 },
  { 6U, XCore::R6 },
  { 7U, XCore::R7 },
  { 8U, XCore::R8 },
  { 9U, XCore::R9 },
  { 10U, XCore::R10 },
  { 11U, XCore::R11 },
  { 12U, XCore::CP },
  { 13U, XCore::DP },
  { 14U, XCore::SP },
  { 15U, XCore::LR },
};
extern const unsigned XCoreDwarfFlavour0Dwarf2LSize = sizeof(XCoreDwarfFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreEHFlavour0Dwarf2L[] = {
  { 0U, XCore::R0 },
  { 1U, XCore::R1 },
  { 2U, XCore::R2 },
  { 3U, XCore::R3 },
  { 4U, XCore::R4 },
  { 5U, XCore::R5 },
  { 6U, XCore::R6 },
  { 7U, XCore::R7 },
  { 8U, XCore::R8 },
  { 9U, XCore::R9 },
  { 10U, XCore::R10 },
  { 11U, XCore::R11 },
  { 12U, XCore::CP },
  { 13U, XCore::DP },
  { 14U, XCore::SP },
  { 15U, XCore::LR },
};
extern const unsigned XCoreEHFlavour0Dwarf2LSize = sizeof(XCoreEHFlavour0Dwarf2L)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreDwarfFlavour0L2Dwarf[] = {
  { XCore::CP, 12U },
  { XCore::DP, 13U },
  { XCore::LR, 15U },
  { XCore::R0, 0U },
  { XCore::R1, 1U },
  { XCore::R2, 2U },
  { XCore::R3, 3U },
  { XCore::R4, 4U },
  { XCore::R5, 5U },
  { XCore::R6, 6U },
  { XCore::R7, 7U },
  { XCore::R8, 8U },
  { XCore::R9, 9U },
  { XCore::R10, 10U },
  { XCore::R11, 11U },
  { XCore::SP, 14U },
};
extern const unsigned XCoreDwarfFlavour0L2DwarfSize = sizeof(XCoreDwarfFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreEHFlavour0L2Dwarf[] = {
  { XCore::CP, 12U },
  { XCore::DP, 13U },
  { XCore::LR, 15U },
  { XCore::R0, 0U },
  { XCore::R1, 1U },
  { XCore::R2, 2U },
  { XCore::R3, 3U },
  { XCore::R4, 4U },
  { XCore::R5, 5U },
  { XCore::R6, 6U },
  { XCore::R7, 7U },
  { XCore::R8, 8U },
  { XCore::R9, 9U },
  { XCore::R10, 10U },
  { XCore::R11, 11U },
  { XCore::SP, 14U },
};
extern const unsigned XCoreEHFlavour0L2DwarfSize = sizeof(XCoreEHFlavour0L2Dwarf)/sizeof(MCRegisterInfo::DwarfLLVMRegPair);

static inline void InitXCoreMCRegisterInfo(MCRegisterInfo *RI, unsigned RA, unsigned DwarfFlavour = 0, unsigned EHFlavour = 0) {
  RI->InitMCRegisterInfo(XCoreRegDesc, 17, RA, XCoreMCRegisterClasses, 2, XCoreRegLists, NULL, 0);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(XCoreDwarfFlavour0Dwarf2L, XCoreDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapDwarfRegsToLLVMRegs(XCoreEHFlavour0Dwarf2L, XCoreEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(XCoreDwarfFlavour0L2Dwarf, XCoreDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    RI->mapLLVMRegsToDwarfRegs(XCoreEHFlavour0L2Dwarf, XCoreEHFlavour0L2DwarfSize, true);
    break;
  }
}

} // End llvm namespace 
#endif // GET_REGINFO_MC_DESC

//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Header Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_HEADER
#undef GET_REGINFO_HEADER
#include "llvm/Target/TargetRegisterInfo.h"

namespace llvm {

struct XCoreGenRegisterInfo : public TargetRegisterInfo {
  explicit XCoreGenRegisterInfo(unsigned RA, unsigned D = 0, unsigned E = 0);
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned composeSubRegIndices(unsigned, unsigned) const;
  const TargetRegisterClass *getSubClassWithSubReg(const TargetRegisterClass*, unsigned) const;
  const TargetRegisterClass *getMatchingSuperRegClass(const TargetRegisterClass*, const TargetRegisterClass*, unsigned) const;
  const RegClassWeight &getRegClassWeight(const TargetRegisterClass *RC) const;
  unsigned getNumRegPressureSets() const;
  unsigned getRegPressureSetLimit(unsigned Idx) const;
  const int *getRegClassPressureSets(const TargetRegisterClass *RC) const;
};

namespace XCore { // Register classes
  extern const TargetRegisterClass GRRegsRegClass;
  static const TargetRegisterClass * const GRRegsRegisterClass = &GRRegsRegClass;
  extern const TargetRegisterClass RRegsRegClass;
  static const TargetRegisterClass * const RRegsRegisterClass = &RRegsRegClass;
} // end of namespace XCore

} // End llvm namespace 
#endif // GET_REGINFO_HEADER

//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Register and Register Classes Information
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_REGINFO_TARGET_DESC
#undef GET_REGINFO_TARGET_DESC
namespace llvm {

extern const MCRegisterClass XCoreMCRegisterClasses[];

static const MVT::SimpleValueType VTLists[] = {
  /* 0 */ MVT::i32, MVT::Other,
};

static const TargetRegisterClass *const NullRegClasses[] = { NULL };

static const uint32_t GRRegsSubclassMask[] = {
  0x00000001, 
};

static const uint32_t RRegsSubclassMask[] = {
  0x00000002, 
};

namespace XCore {   // Register class instances
  extern const TargetRegisterClass GRRegsRegClass = {
    &XCoreMCRegisterClasses[GRRegsRegClassID],
    VTLists + 0,
    GRRegsSubclassMask,
    NullRegClasses,
    NullRegClasses,
    0
  };

  extern const TargetRegisterClass RRegsRegClass = {
    &XCoreMCRegisterClasses[RRegsRegClassID],
    VTLists + 0,
    RRegsSubclassMask,
    NullRegClasses,
    NullRegClasses,
    0
  };

}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &XCore::GRRegsRegClass,
    &XCore::RRegsRegClass,
  };
}

static const TargetRegisterInfoDesc XCoreRegInfoDesc[] = { // Extra Descriptors
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 0 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 1 },
  { 0, 0 },
};

static const char *const XCoreSubRegIndexTable[] = { "" };


unsigned XCoreGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

const TargetRegisterClass *XCoreGenRegisterInfo::getSubClassWithSubReg(const TargetRegisterClass *RC, unsigned Idx) const {
  assert(Idx == 0 && "Target has no sub-registers");
  return RC;
}

const TargetRegisterClass *XCoreGenRegisterInfo::getMatchingSuperRegClass(const TargetRegisterClass *A, const TargetRegisterClass *B, unsigned Idx) const {
  llvm_unreachable("Target has no sub-registers");
}

/// Get the weight in units of pressure for this register class.
const RegClassWeight &XCoreGenRegisterInfo::
getRegClassWeight(const TargetRegisterClass *RC) const {
  static const RegClassWeight RCWeightTable[] = {
    {1, 12},  	// GRRegs
    {0, 0},  	// RRegs
    {0, 0} };
  return RCWeightTable[RC->getID()];
}


// Get the number of dimensions of register pressure.
unsigned XCoreGenRegisterInfo::getNumRegPressureSets() const {
  return 1;
}

// Get the register unit pressure limit for this dimension.
// This limit must be adjusted dynamically for reserved registers.
unsigned XCoreGenRegisterInfo::
getRegPressureSetLimit(unsigned Idx) const {
  static const unsigned PressureLimitTable[] = {
    12,  	// 0: GRRegs
    0 };
  return PressureLimitTable[Idx];
}

/// Get the dimensions of register pressure impacted by this register class.
/// Returns a -1 terminated array of pressure set IDs
const int* XCoreGenRegisterInfo::
getRegClassPressureSets(const TargetRegisterClass *RC) const {
  static const int RCSetsTable[] = {
    0,  -1,  	// GRRegs
    -1,  	// RRegs
    -1 };
  static const unsigned RCSetStartTable[] = {
    0,2,0 };
  unsigned SetListStart = RCSetStartTable[RC->getID()];
  return &RCSetsTable[SetListStart];
}

extern const MCRegisterDesc XCoreRegDesc[];
extern const uint16_t XCoreRegLists[];
// XCore Dwarf<->LLVM register mappings.
extern const MCRegisterInfo::DwarfLLVMRegPair XCoreDwarfFlavour0Dwarf2L[];
extern const unsigned XCoreDwarfFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreEHFlavour0Dwarf2L[];
extern const unsigned XCoreEHFlavour0Dwarf2LSize;

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreDwarfFlavour0L2Dwarf[];
extern const unsigned XCoreDwarfFlavour0L2DwarfSize;

extern const MCRegisterInfo::DwarfLLVMRegPair XCoreEHFlavour0L2Dwarf[];
extern const unsigned XCoreEHFlavour0L2DwarfSize;

XCoreGenRegisterInfo::
XCoreGenRegisterInfo(unsigned RA, unsigned DwarfFlavour, unsigned EHFlavour)
  : TargetRegisterInfo(XCoreRegInfoDesc, RegisterClasses, RegisterClasses+2,
             XCoreSubRegIndexTable) {
  InitMCRegisterInfo(XCoreRegDesc, 17, RA,
                     XCoreMCRegisterClasses, 2,
                     XCoreRegLists,
                     NULL, 0);

  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(XCoreDwarfFlavour0Dwarf2L, XCoreDwarfFlavour0Dwarf2LSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapDwarfRegsToLLVMRegs(XCoreEHFlavour0Dwarf2L, XCoreEHFlavour0Dwarf2LSize, true);
    break;
  }
  switch (DwarfFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(XCoreDwarfFlavour0L2Dwarf, XCoreDwarfFlavour0L2DwarfSize, false);
    break;
  }
  switch (EHFlavour) {
  default:
    llvm_unreachable("Unknown DWARF flavour");
  case 0:
    mapLLVMRegsToDwarfRegs(XCoreEHFlavour0L2Dwarf, XCoreEHFlavour0L2DwarfSize, true);
    break;
  }
}



} // End llvm namespace 
#endif // GET_REGINFO_TARGET_DESC

