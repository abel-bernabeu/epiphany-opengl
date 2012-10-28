//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Instruction Enum Values
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace XCore {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    PROLOG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    ADD_2rus	= 15,
    ADD_3r	= 16,
    ADJCALLSTACKDOWN	= 17,
    ADJCALLSTACKUP	= 18,
    ANDNOT_2r	= 19,
    AND_3r	= 20,
    ASHR_l2rus	= 21,
    ASHR_l3r	= 22,
    BAU_1r	= 23,
    BITREV_l2r	= 24,
    BLA_1r	= 25,
    BL_lu10	= 26,
    BL_u10	= 27,
    BRBF_lru6	= 28,
    BRBF_ru6	= 29,
    BRBT_lru6	= 30,
    BRBT_ru6	= 31,
    BRBU_lu6	= 32,
    BRBU_u6	= 33,
    BRFF_lru6	= 34,
    BRFF_ru6	= 35,
    BRFT_lru6	= 36,
    BRFT_ru6	= 37,
    BRFU_lu6	= 38,
    BRFU_u6	= 39,
    BR_JT	= 40,
    BR_JT32	= 41,
    BYTEREV_l2r	= 42,
    CHKCT_2r	= 43,
    CHKCT_rus	= 44,
    CLRE_0R	= 45,
    CLRSR_branch_lu6	= 46,
    CLRSR_branch_u6	= 47,
    CLRSR_lu6	= 48,
    CLRSR_u6	= 49,
    CLZ_l2r	= 50,
    CRC8_l4r	= 51,
    CRC_l3r	= 52,
    DIVS_l3r	= 53,
    DIVU_l3r	= 54,
    ECALLF_1r	= 55,
    ECALLT_1r	= 56,
    EEU_1r	= 57,
    ENDIN_l2r	= 58,
    ENTSP_lu6	= 59,
    ENTSP_u6	= 60,
    EQ_2rus	= 61,
    EQ_3r	= 62,
    EXTSP_lu6	= 63,
    EXTSP_u6	= 64,
    FREER_1r	= 65,
    GETED_0R	= 66,
    GETET_0R	= 67,
    GETID_0R	= 68,
    GETPS_l2r	= 69,
    GETR_rus	= 70,
    GETST_2r	= 71,
    GETTS_2r	= 72,
    INCT_2r	= 73,
    INITCP_2r	= 74,
    INITDP_2r	= 75,
    INITLR_l2r	= 76,
    INITPC_2r	= 77,
    INITSP_2r	= 78,
    INSHR_2r	= 79,
    INT_2r	= 80,
    IN_2r	= 81,
    LADD_l5r	= 82,
    LD16S_3r	= 83,
    LD8U_3r	= 84,
    LDA16B_l3r	= 85,
    LDA16F_l3r	= 86,
    LDAP_lu10	= 87,
    LDAP_lu10_ba	= 88,
    LDAP_u10	= 89,
    LDAWB_l2rus	= 90,
    LDAWB_l3r	= 91,
    LDAWCP_lu6	= 92,
    LDAWCP_u6	= 93,
    LDAWDP_lru6	= 94,
    LDAWDP_ru6	= 95,
    LDAWFI	= 96,
    LDAWF_l2rus	= 97,
    LDAWF_l3r	= 98,
    LDAWSP_lru6	= 99,
    LDAWSP_lru6_RRegs	= 100,
    LDAWSP_ru6	= 101,
    LDAWSP_ru6_RRegs	= 102,
    LDC_lru6	= 103,
    LDC_ru6	= 104,
    LDIV_l5r	= 105,
    LDWCP_lru6	= 106,
    LDWCP_ru6	= 107,
    LDWDP_lru6	= 108,
    LDWDP_ru6	= 109,
    LDWFI	= 110,
    LDWSP_lru6	= 111,
    LDWSP_ru6	= 112,
    LDW_2rus	= 113,
    LDW_3r	= 114,
    LMUL_l6r	= 115,
    LSS_3r	= 116,
    LSUB_l5r	= 117,
    LSU_3r	= 118,
    MACCS_l4r	= 119,
    MACCU_l4r	= 120,
    MJOIN_1r	= 121,
    MKMSK_2r	= 122,
    MKMSK_rus	= 123,
    MSYNC_1r	= 124,
    MUL_l3r	= 125,
    NEG	= 126,
    NOT	= 127,
    OR_3r	= 128,
    OUTCT_2r	= 129,
    OUTCT_rus	= 130,
    OUTSHR_2r	= 131,
    OUTT_2r	= 132,
    OUT_2r	= 133,
    PEEK_l2r	= 134,
    REMS_l3r	= 135,
    REMU_l3r	= 136,
    RETSP_lu6	= 137,
    RETSP_u6	= 138,
    SELECT_CC	= 139,
    SETCLK_l2r	= 140,
    SETC_l2r	= 141,
    SETC_lru6	= 142,
    SETC_ru6	= 143,
    SETD_2r	= 144,
    SETEV_1r	= 145,
    SETPSC_l2r	= 146,
    SETPS_l2r	= 147,
    SETPT_2r	= 148,
    SETRDY_l2r	= 149,
    SETSP_1r	= 150,
    SETSR_branch_lu6	= 151,
    SETSR_branch_u6	= 152,
    SETSR_lu6	= 153,
    SETSR_u6	= 154,
    SETTW_l2r	= 155,
    SETV_1r	= 156,
    SEXT_2r	= 157,
    SEXT_rus	= 158,
    SHL_2rus	= 159,
    SHL_3r	= 160,
    SHR_2rus	= 161,
    SHR_3r	= 162,
    SSYNC_0r	= 163,
    ST16_l3r	= 164,
    ST8_l3r	= 165,
    STWDP_lru6	= 166,
    STWDP_ru6	= 167,
    STWFI	= 168,
    STWSP_lru6	= 169,
    STWSP_ru6	= 170,
    STW_2rus	= 171,
    STW_3r	= 172,
    SUB_2rus	= 173,
    SUB_3r	= 174,
    SYNCR_1r	= 175,
    TESTCT_2r	= 176,
    TESTWCT_2r	= 177,
    WAITEU_0R	= 178,
    XOR_l3r	= 179,
    ZEXT_2r	= 180,
    ZEXT_rus	= 181,
    INSTRUCTION_LIST_END = 182
  };
}
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Instruction Descriptors
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { XCore::SP, 0 };
static const uint16_t ImplicitList2[] = { XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R11, XCore::LR, 0 };
static const uint16_t ImplicitList3[] = { XCore::R11, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo20[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { XCore::RRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((1 << 16) | (1 << MCOI::TIED_TO)) }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { XCore::GRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc XCoreInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #2 = PROLOG_LABEL
  { 3,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::NotDuplicable)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo4 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Rematerializable)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1<<MCID::Pseudo), 0x0ULL, NULL, NULL, OperandInfo6 },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo3 },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic), 0x0ULL, NULL, NULL, 0 },  // Inst #11 = DBG_VALUE
  { 12,	1,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::CheapAsAMove), 0x0ULL, NULL, NULL, OperandInfo7 },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1<<MCID::Pseudo)|(1<<MCID::Variadic)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #14 = BUNDLE
  { 15,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #15 = ADD_2rus
  { 16,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #16 = ADD_3r
  { 17,	1,	0,	0,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #17 = ADJCALLSTACKDOWN
  { 18,	2,	0,	0,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo10 },  // Inst #18 = ADJCALLSTACKUP
  { 19,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #19 = ANDNOT_2r
  { 20,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #20 = AND_3r
  { 21,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #21 = ASHR_l2rus
  { 22,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #22 = ASHR_l3r
  { 23,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #23 = BAU_1r
  { 24,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #24 = BITREV_l2r
  { 25,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo12 },  // Inst #25 = BLA_1r
  { 26,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5 },  // Inst #26 = BL_lu10
  { 27,	1,	0,	0,	0,	0|(1<<MCID::Call)|(1<<MCID::Variadic), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5 },  // Inst #27 = BL_u10
  { 28,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #28 = BRBF_lru6
  { 29,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #29 = BRBF_ru6
  { 30,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #30 = BRBT_lru6
  { 31,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #31 = BRBT_ru6
  { 32,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #32 = BRBU_lu6
  { 33,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #33 = BRBU_u6
  { 34,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #34 = BRFF_lru6
  { 35,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #35 = BRFF_ru6
  { 36,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #36 = BRFT_lru6
  { 37,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo14 },  // Inst #37 = BRFT_ru6
  { 38,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #38 = BRFU_lu6
  { 39,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo5 },  // Inst #39 = BRFU_u6
  { 40,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #40 = BR_JT
  { 41,	2,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator), 0x0ULL, NULL, NULL, OperandInfo15 },  // Inst #41 = BR_JT32
  { 42,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #42 = BYTEREV_l2r
  { 43,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #43 = CHKCT_2r
  { 44,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #44 = CHKCT_rus
  { 45,	0,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #45 = CLRE_0R
  { 46,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #46 = CLRSR_branch_lu6
  { 47,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #47 = CLRSR_branch_u6
  { 48,	1,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #48 = CLRSR_lu6
  { 49,	1,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #49 = CLRSR_u6
  { 50,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #50 = CLZ_l2r
  { 51,	5,	2,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo17 },  // Inst #51 = CRC8_l4r
  { 52,	4,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo18 },  // Inst #52 = CRC_l3r
  { 53,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #53 = DIVS_l3r
  { 54,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #54 = DIVU_l3r
  { 55,	1,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #55 = ECALLF_1r
  { 56,	1,	0,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #56 = ECALLT_1r
  { 57,	1,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #57 = EEU_1r
  { 58,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #58 = ENDIN_l2r
  { 59,	1,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #59 = ENTSP_lu6
  { 60,	1,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #60 = ENTSP_u6
  { 61,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #61 = EQ_2rus
  { 62,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #62 = EQ_3r
  { 63,	1,	0,	0,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #63 = EXTSP_lu6
  { 64,	1,	0,	0,	0,	0, 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #64 = EXTSP_u6
  { 65,	1,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #65 = FREER_1r
  { 66,	0,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList3, 0 },  // Inst #66 = GETED_0R
  { 67,	0,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, ImplicitList3, 0 },  // Inst #67 = GETET_0R
  { 68,	0,	0,	0,	0,	0, 0x0ULL, NULL, ImplicitList3, 0 },  // Inst #68 = GETID_0R
  { 69,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #69 = GETPS_l2r
  { 70,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #70 = GETR_rus
  { 71,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #71 = GETST_2r
  { 72,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #72 = GETTS_2r
  { 73,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #73 = INCT_2r
  { 74,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #74 = INITCP_2r
  { 75,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #75 = INITDP_2r
  { 76,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #76 = INITLR_l2r
  { 77,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #77 = INITPC_2r
  { 78,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #78 = INITSP_2r
  { 79,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #79 = INSHR_2r
  { 80,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #80 = INT_2r
  { 81,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #81 = IN_2r
  { 82,	5,	2,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #82 = LADD_l5r
  { 83,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #83 = LD16S_3r
  { 84,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #84 = LD8U_3r
  { 85,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #85 = LDA16B_l3r
  { 86,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #86 = LDA16F_l3r
  { 87,	1,	0,	0,	0,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo2 },  // Inst #87 = LDAP_lu10
  { 88,	1,	0,	0,	0,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo2 },  // Inst #88 = LDAP_lu10_ba
  { 89,	1,	0,	0,	0,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo2 },  // Inst #89 = LDAP_u10
  { 90,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #90 = LDAWB_l2rus
  { 91,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #91 = LDAWB_l3r
  { 92,	2,	0,	0,	0,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo7 },  // Inst #92 = LDAWCP_lu6
  { 93,	2,	0,	0,	0,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, ImplicitList3, OperandInfo7 },  // Inst #93 = LDAWCP_u6
  { 94,	3,	1,	0,	0,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #94 = LDAWDP_lru6
  { 95,	3,	1,	0,	0,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #95 = LDAWDP_ru6
  { 96,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #96 = LDAWFI
  { 97,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #97 = LDAWF_l2rus
  { 98,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #98 = LDAWF_l3r
  { 99,	2,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo16 },  // Inst #99 = LDAWSP_lru6
  { 100,	2,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo22 },  // Inst #100 = LDAWSP_lru6_RRegs
  { 101,	2,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo16 },  // Inst #101 = LDAWSP_ru6
  { 102,	2,	1,	0,	0,	0, 0x0ULL, ImplicitList1, NULL, OperandInfo22 },  // Inst #102 = LDAWSP_ru6_RRegs
  { 103,	2,	1,	0,	0,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #103 = LDC_lru6
  { 104,	2,	1,	0,	0,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #104 = LDC_ru6
  { 105,	5,	2,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #105 = LDIV_l5r
  { 106,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #106 = LDWCP_lru6
  { 107,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #107 = LDWCP_ru6
  { 108,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #108 = LDWDP_lru6
  { 109,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #109 = LDWDP_ru6
  { 110,	3,	1,	0,	0,	0|(1<<MCID::MayLoad), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #110 = LDWFI
  { 111,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo16 },  // Inst #111 = LDWSP_lru6
  { 112,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList1, NULL, OperandInfo16 },  // Inst #112 = LDWSP_ru6
  { 113,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #113 = LDW_2rus
  { 114,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #114 = LDW_3r
  { 115,	6,	2,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo23 },  // Inst #115 = LMUL_l6r
  { 116,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #116 = LSS_3r
  { 117,	5,	2,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo20 },  // Inst #117 = LSUB_l5r
  { 118,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #118 = LSU_3r
  { 119,	6,	2,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #119 = MACCS_l4r
  { 120,	6,	2,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo24 },  // Inst #120 = MACCU_l4r
  { 121,	1,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #121 = MJOIN_1r
  { 122,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #122 = MKMSK_2r
  { 123,	2,	1,	0,	0,	0|(1<<MCID::Rematerializable), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #123 = MKMSK_rus
  { 124,	1,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #124 = MSYNC_1r
  { 125,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #125 = MUL_l3r
  { 126,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #126 = NEG
  { 127,	2,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #127 = NOT
  { 128,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #128 = OR_3r
  { 129,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #129 = OUTCT_2r
  { 130,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #130 = OUTCT_rus
  { 131,	3,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo19 },  // Inst #131 = OUTSHR_2r
  { 132,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #132 = OUTT_2r
  { 133,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #133 = OUT_2r
  { 134,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #134 = PEEK_l2r
  { 135,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #135 = REMS_l3r
  { 136,	3,	1,	0,	0,	0|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #136 = REMU_l3r
  { 137,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::MayLoad)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #137 = RETSP_lu6
  { 138,	1,	0,	0,	0,	0|(1<<MCID::Return)|(1<<MCID::Barrier)|(1<<MCID::MayLoad)|(1<<MCID::Terminator), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2 },  // Inst #138 = RETSP_u6
  { 139,	4,	1,	0,	0,	0|(1<<MCID::UsesCustomInserter), 0x0ULL, NULL, NULL, OperandInfo25 },  // Inst #139 = SELECT_CC
  { 140,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #140 = SETCLK_l2r
  { 141,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #141 = SETC_l2r
  { 142,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #142 = SETC_lru6
  { 143,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo16 },  // Inst #143 = SETC_ru6
  { 144,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #144 = SETD_2r
  { 145,	1,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, NULL, OperandInfo12 },  // Inst #145 = SETEV_1r
  { 146,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #146 = SETPSC_l2r
  { 147,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #147 = SETPS_l2r
  { 148,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #148 = SETPT_2r
  { 149,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #149 = SETRDY_l2r
  { 150,	1,	0,	0,	0,	0, 0x0ULL, NULL, ImplicitList1, OperandInfo12 },  // Inst #150 = SETSP_1r
  { 151,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #151 = SETSR_branch_lu6
  { 152,	1,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #152 = SETSR_branch_u6
  { 153,	1,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #153 = SETSR_lu6
  { 154,	1,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo2 },  // Inst #154 = SETSR_u6
  { 155,	2,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #155 = SETTW_l2r
  { 156,	1,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, NULL, OperandInfo12 },  // Inst #156 = SETV_1r
  { 157,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #157 = SEXT_2r
  { 158,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #158 = SEXT_rus
  { 159,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #159 = SHL_2rus
  { 160,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #160 = SHL_3r
  { 161,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #161 = SHR_2rus
  { 162,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #162 = SHR_3r
  { 163,	0,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #163 = SSYNC_0r
  { 164,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #164 = ST16_l3r
  { 165,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #165 = ST8_l3r
  { 166,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #166 = STWDP_lru6
  { 167,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #167 = STWDP_ru6
  { 168,	3,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, NULL, NULL, OperandInfo21 },  // Inst #168 = STWFI
  { 169,	2,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList1, NULL, OperandInfo16 },  // Inst #169 = STWSP_lru6
  { 170,	2,	0,	0,	0,	0|(1<<MCID::MayStore), 0x0ULL, ImplicitList1, NULL, OperandInfo16 },  // Inst #170 = STWSP_ru6
  { 171,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #171 = STW_2rus
  { 172,	3,	0,	0,	0,	0|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #172 = STW_3r
  { 173,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo8 },  // Inst #173 = SUB_2rus
  { 174,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #174 = SUB_3r
  { 175,	1,	0,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo12 },  // Inst #175 = SYNCR_1r
  { 176,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #176 = TESTCT_2r
  { 177,	2,	1,	0,	0,	0|(1<<MCID::MayLoad)|(1<<MCID::MayStore)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, OperandInfo13 },  // Inst #177 = TESTWCT_2r
  { 178,	0,	0,	0,	0,	0|(1<<MCID::Branch)|(1<<MCID::IndirectBranch)|(1<<MCID::Barrier)|(1<<MCID::MayLoad)|(1<<MCID::Terminator)|(1<<MCID::UnmodeledSideEffects), 0x0ULL, NULL, NULL, 0 },  // Inst #178 = WAITEU_0R
  { 179,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo9 },  // Inst #179 = XOR_l3r
  { 180,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo11 },  // Inst #180 = ZEXT_2r
  { 181,	3,	1,	0,	0,	0, 0x0ULL, NULL, NULL, OperandInfo26 },  // Inst #181 = ZEXT_rus
};

extern const char XCoreInstrNameData[] = {
  /* 0 */ 'B', 'L', '_', 'u', '1', '0', 0,
  /* 7 */ 'L', 'D', 'A', 'P', '_', 'u', '1', '0', 0,
  /* 16 */ 'B', 'L', '_', 'l', 'u', '1', '0', 0,
  /* 24 */ 'L', 'D', 'A', 'P', '_', 'l', 'u', '1', '0', 0,
  /* 34 */ 'B', 'R', '_', 'J', 'T', '3', '2', 0,
  /* 42 */ 'L', 'D', 'A', 'W', 'C', 'P', '_', 'u', '6', 0,
  /* 52 */ 'R', 'E', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 61 */ 'E', 'N', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 70 */ 'E', 'X', 'T', 'S', 'P', '_', 'u', '6', 0,
  /* 79 */ 'C', 'L', 'R', 'S', 'R', '_', 'u', '6', 0,
  /* 88 */ 'S', 'E', 'T', 'S', 'R', '_', 'u', '6', 0,
  /* 97 */ 'B', 'R', 'B', 'U', '_', 'u', '6', 0,
  /* 105 */ 'B', 'R', 'F', 'U', '_', 'u', '6', 0,
  /* 113 */ 'C', 'L', 'R', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'u', '6', 0,
  /* 129 */ 'S', 'E', 'T', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'u', '6', 0,
  /* 145 */ 'L', 'D', 'A', 'W', 'C', 'P', '_', 'l', 'u', '6', 0,
  /* 156 */ 'R', 'E', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 166 */ 'E', 'N', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 176 */ 'E', 'X', 'T', 'S', 'P', '_', 'l', 'u', '6', 0,
  /* 186 */ 'C', 'L', 'R', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 196 */ 'S', 'E', 'T', 'S', 'R', '_', 'l', 'u', '6', 0,
  /* 206 */ 'B', 'R', 'B', 'U', '_', 'l', 'u', '6', 0,
  /* 215 */ 'B', 'R', 'F', 'U', '_', 'l', 'u', '6', 0,
  /* 224 */ 'C', 'L', 'R', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'l', 'u', '6', 0,
  /* 241 */ 'S', 'E', 'T', 'S', 'R', '_', 'b', 'r', 'a', 'n', 'c', 'h', '_', 'l', 'u', '6', 0,
  /* 258 */ 'L', 'D', 'C', '_', 'r', 'u', '6', 0,
  /* 266 */ 'S', 'E', 'T', 'C', '_', 'r', 'u', '6', 0,
  /* 275 */ 'B', 'R', 'B', 'F', '_', 'r', 'u', '6', 0,
  /* 284 */ 'B', 'R', 'F', 'F', '_', 'r', 'u', '6', 0,
  /* 293 */ 'L', 'D', 'W', 'C', 'P', '_', 'r', 'u', '6', 0,
  /* 303 */ 'L', 'D', 'A', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 314 */ 'L', 'D', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 324 */ 'S', 'T', 'W', 'D', 'P', '_', 'r', 'u', '6', 0,
  /* 334 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 345 */ 'L', 'D', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 355 */ 'S', 'T', 'W', 'S', 'P', '_', 'r', 'u', '6', 0,
  /* 365 */ 'B', 'R', 'B', 'T', '_', 'r', 'u', '6', 0,
  /* 374 */ 'B', 'R', 'F', 'T', '_', 'r', 'u', '6', 0,
  /* 383 */ 'L', 'D', 'C', '_', 'l', 'r', 'u', '6', 0,
  /* 392 */ 'S', 'E', 'T', 'C', '_', 'l', 'r', 'u', '6', 0,
  /* 402 */ 'B', 'R', 'B', 'F', '_', 'l', 'r', 'u', '6', 0,
  /* 412 */ 'B', 'R', 'F', 'F', '_', 'l', 'r', 'u', '6', 0,
  /* 422 */ 'L', 'D', 'W', 'C', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 433 */ 'L', 'D', 'A', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 445 */ 'L', 'D', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 456 */ 'S', 'T', 'W', 'D', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 467 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 479 */ 'L', 'D', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 490 */ 'S', 'T', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', 0,
  /* 501 */ 'B', 'R', 'B', 'T', '_', 'l', 'r', 'u', '6', 0,
  /* 511 */ 'B', 'R', 'F', 'T', '_', 'l', 'r', 'u', '6', 0,
  /* 521 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', 0,
  /* 531 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 544 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 551 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 561 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 574 */ 'N', 'E', 'G', 0,
  /* 578 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 593 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 607 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 621 */ 'L', 'D', 'A', 'W', 'F', 'I', 0,
  /* 628 */ 'L', 'D', 'W', 'F', 'I', 0,
  /* 634 */ 'S', 'T', 'W', 'F', 'I', 0,
  /* 640 */ 'P', 'H', 'I', 0,
  /* 644 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 653 */ 'P', 'R', 'O', 'L', 'O', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 666 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 675 */ 'K', 'I', 'L', 'L', 0,
  /* 680 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 690 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 707 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 722 */ 'G', 'E', 'T', 'E', 'D', '_', '0', 'R', 0,
  /* 731 */ 'G', 'E', 'T', 'I', 'D', '_', '0', 'R', 0,
  /* 740 */ 'C', 'L', 'R', 'E', '_', '0', 'R', 0,
  /* 748 */ 'G', 'E', 'T', 'E', 'T', '_', '0', 'R', 0,
  /* 757 */ 'W', 'A', 'I', 'T', 'E', 'U', '_', '0', 'R', 0,
  /* 767 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 784 */ 'B', 'R', '_', 'J', 'T', 0,
  /* 790 */ 'N', 'O', 'T', 0,
  /* 794 */ 'C', 'O', 'P', 'Y', 0,
  /* 799 */ 'L', 'D', 'A', 'P', '_', 'l', 'u', '1', '0', '_', 'b', 'a', 0,
  /* 812 */ 'S', 'S', 'Y', 'N', 'C', '_', '0', 'r', 0,
  /* 821 */ 'B', 'L', 'A', '_', '1', 'r', 0,
  /* 828 */ 'M', 'S', 'Y', 'N', 'C', '_', '1', 'r', 0,
  /* 837 */ 'E', 'C', 'A', 'L', 'L', 'F', '_', '1', 'r', 0,
  /* 847 */ 'M', 'J', 'O', 'I', 'N', '_', '1', 'r', 0,
  /* 856 */ 'S', 'E', 'T', 'S', 'P', '_', '1', 'r', 0,
  /* 865 */ 'S', 'Y', 'N', 'C', 'R', '_', '1', 'r', 0,
  /* 874 */ 'F', 'R', 'E', 'E', 'R', '_', '1', 'r', 0,
  /* 883 */ 'E', 'C', 'A', 'L', 'L', 'T', '_', '1', 'r', 0,
  /* 893 */ 'B', 'A', 'U', '_', '1', 'r', 0,
  /* 900 */ 'E', 'E', 'U', '_', '1', 'r', 0,
  /* 907 */ 'S', 'E', 'T', 'E', 'V', '_', '1', 'r', 0,
  /* 916 */ 'S', 'E', 'T', 'V', '_', '1', 'r', 0,
  /* 924 */ 'I', 'N', 'I', 'T', 'P', 'C', '_', '2', 'r', 0,
  /* 934 */ 'S', 'E', 'T', 'D', '_', '2', 'r', 0,
  /* 942 */ 'M', 'K', 'M', 'S', 'K', '_', '2', 'r', 0,
  /* 951 */ 'I', 'N', '_', '2', 'r', 0,
  /* 957 */ 'I', 'N', 'I', 'T', 'C', 'P', '_', '2', 'r', 0,
  /* 967 */ 'I', 'N', 'I', 'T', 'D', 'P', '_', '2', 'r', 0,
  /* 977 */ 'I', 'N', 'I', 'T', 'S', 'P', '_', '2', 'r', 0,
  /* 987 */ 'I', 'N', 'S', 'H', 'R', '_', '2', 'r', 0,
  /* 996 */ 'O', 'U', 'T', 'S', 'H', 'R', '_', '2', 'r', 0,
  /* 1006 */ 'G', 'E', 'T', 'T', 'S', '_', '2', 'r', 0,
  /* 1015 */ 'C', 'H', 'K', 'C', 'T', '_', '2', 'r', 0,
  /* 1024 */ 'I', 'N', 'C', 'T', '_', '2', 'r', 0,
  /* 1032 */ 'T', 'E', 'S', 'T', 'C', 'T', '_', '2', 'r', 0,
  /* 1042 */ 'O', 'U', 'T', 'C', 'T', '_', '2', 'r', 0,
  /* 1051 */ 'T', 'E', 'S', 'T', 'W', 'C', 'T', '_', '2', 'r', 0,
  /* 1062 */ 'I', 'N', 'T', '_', '2', 'r', 0,
  /* 1069 */ 'A', 'N', 'D', 'N', 'O', 'T', '_', '2', 'r', 0,
  /* 1079 */ 'S', 'E', 'T', 'P', 'T', '_', '2', 'r', 0,
  /* 1088 */ 'G', 'E', 'T', 'S', 'T', '_', '2', 'r', 0,
  /* 1097 */ 'O', 'U', 'T', 'T', '_', '2', 'r', 0,
  /* 1105 */ 'O', 'U', 'T', '_', '2', 'r', 0,
  /* 1112 */ 'S', 'E', 'X', 'T', '_', '2', 'r', 0,
  /* 1120 */ 'Z', 'E', 'X', 'T', '_', '2', 'r', 0,
  /* 1128 */ 'S', 'E', 'T', 'P', 'S', 'C', '_', 'l', '2', 'r', 0,
  /* 1139 */ 'S', 'E', 'T', 'C', '_', 'l', '2', 'r', 0,
  /* 1148 */ 'P', 'E', 'E', 'K', '_', 'l', '2', 'r', 0,
  /* 1157 */ 'S', 'E', 'T', 'C', 'L', 'K', '_', 'l', '2', 'r', 0,
  /* 1168 */ 'E', 'N', 'D', 'I', 'N', '_', 'l', '2', 'r', 0,
  /* 1178 */ 'I', 'N', 'I', 'T', 'L', 'R', '_', 'l', '2', 'r', 0,
  /* 1189 */ 'G', 'E', 'T', 'P', 'S', '_', 'l', '2', 'r', 0,
  /* 1199 */ 'S', 'E', 'T', 'P', 'S', '_', 'l', '2', 'r', 0,
  /* 1209 */ 'B', 'Y', 'T', 'E', 'R', 'E', 'V', '_', 'l', '2', 'r', 0,
  /* 1221 */ 'B', 'I', 'T', 'R', 'E', 'V', '_', 'l', '2', 'r', 0,
  /* 1232 */ 'S', 'E', 'T', 'T', 'W', '_', 'l', '2', 'r', 0,
  /* 1242 */ 'S', 'E', 'T', 'R', 'D', 'Y', '_', 'l', '2', 'r', 0,
  /* 1253 */ 'C', 'L', 'Z', '_', 'l', '2', 'r', 0,
  /* 1261 */ 'S', 'U', 'B', '_', '3', 'r', 0,
  /* 1268 */ 'A', 'D', 'D', '_', '3', 'r', 0,
  /* 1275 */ 'A', 'N', 'D', '_', '3', 'r', 0,
  /* 1282 */ 'S', 'H', 'L', '_', '3', 'r', 0,
  /* 1289 */ 'E', 'Q', '_', '3', 'r', 0,
  /* 1295 */ 'S', 'H', 'R', '_', '3', 'r', 0,
  /* 1302 */ 'O', 'R', '_', '3', 'r', 0,
  /* 1308 */ 'L', 'D', '1', '6', 'S', '_', '3', 'r', 0,
  /* 1317 */ 'L', 'S', 'S', '_', '3', 'r', 0,
  /* 1324 */ 'L', 'D', '8', 'U', '_', '3', 'r', 0,
  /* 1332 */ 'L', 'S', 'U', '_', '3', 'r', 0,
  /* 1339 */ 'L', 'D', 'W', '_', '3', 'r', 0,
  /* 1346 */ 'S', 'T', 'W', '_', '3', 'r', 0,
  /* 1353 */ 'S', 'T', '1', '6', '_', 'l', '3', 'r', 0,
  /* 1362 */ 'S', 'T', '8', '_', 'l', '3', 'r', 0,
  /* 1370 */ 'L', 'D', 'A', '1', '6', 'B', '_', 'l', '3', 'r', 0,
  /* 1381 */ 'L', 'D', 'A', 'W', 'B', '_', 'l', '3', 'r', 0,
  /* 1391 */ 'C', 'R', 'C', '_', 'l', '3', 'r', 0,
  /* 1399 */ 'L', 'D', 'A', '1', '6', 'F', '_', 'l', '3', 'r', 0,
  /* 1410 */ 'L', 'D', 'A', 'W', 'F', '_', 'l', '3', 'r', 0,
  /* 1420 */ 'M', 'U', 'L', '_', 'l', '3', 'r', 0,
  /* 1428 */ 'A', 'S', 'H', 'R', '_', 'l', '3', 'r', 0,
  /* 1437 */ 'X', 'O', 'R', '_', 'l', '3', 'r', 0,
  /* 1445 */ 'R', 'E', 'M', 'S', '_', 'l', '3', 'r', 0,
  /* 1454 */ 'D', 'I', 'V', 'S', '_', 'l', '3', 'r', 0,
  /* 1463 */ 'R', 'E', 'M', 'U', '_', 'l', '3', 'r', 0,
  /* 1472 */ 'D', 'I', 'V', 'U', '_', 'l', '3', 'r', 0,
  /* 1481 */ 'C', 'R', 'C', '8', '_', 'l', '4', 'r', 0,
  /* 1490 */ 'M', 'A', 'C', 'C', 'S', '_', 'l', '4', 'r', 0,
  /* 1500 */ 'M', 'A', 'C', 'C', 'U', '_', 'l', '4', 'r', 0,
  /* 1510 */ 'L', 'S', 'U', 'B', '_', 'l', '5', 'r', 0,
  /* 1519 */ 'L', 'A', 'D', 'D', '_', 'l', '5', 'r', 0,
  /* 1528 */ 'L', 'D', 'I', 'V', '_', 'l', '5', 'r', 0,
  /* 1537 */ 'L', 'M', 'U', 'L', '_', 'l', '6', 'r', 0,
  /* 1546 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'r', 'u', '6', '_', 'R', 'R', 'e', 'g', 's', 0,
  /* 1563 */ 'L', 'D', 'A', 'W', 'S', 'P', '_', 'l', 'r', 'u', '6', '_', 'R', 'R', 'e', 'g', 's', 0,
  /* 1581 */ 'S', 'U', 'B', '_', '2', 'r', 'u', 's', 0,
  /* 1590 */ 'A', 'D', 'D', '_', '2', 'r', 'u', 's', 0,
  /* 1599 */ 'S', 'H', 'L', '_', '2', 'r', 'u', 's', 0,
  /* 1608 */ 'E', 'Q', '_', '2', 'r', 'u', 's', 0,
  /* 1616 */ 'S', 'H', 'R', '_', '2', 'r', 'u', 's', 0,
  /* 1625 */ 'L', 'D', 'W', '_', '2', 'r', 'u', 's', 0,
  /* 1634 */ 'S', 'T', 'W', '_', '2', 'r', 'u', 's', 0,
  /* 1643 */ 'L', 'D', 'A', 'W', 'B', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 1655 */ 'L', 'D', 'A', 'W', 'F', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 1667 */ 'A', 'S', 'H', 'R', '_', 'l', '2', 'r', 'u', 's', 0,
  /* 1678 */ 'M', 'K', 'M', 'S', 'K', '_', 'r', 'u', 's', 0,
  /* 1688 */ 'G', 'E', 'T', 'R', '_', 'r', 'u', 's', 0,
  /* 1697 */ 'C', 'H', 'K', 'C', 'T', '_', 'r', 'u', 's', 0,
  /* 1707 */ 'O', 'U', 'T', 'C', 'T', '_', 'r', 'u', 's', 0,
  /* 1717 */ 'S', 'E', 'X', 'T', '_', 'r', 'u', 's', 0,
  /* 1726 */ 'Z', 'E', 'X', 'T', '_', 'r', 'u', 's', 0,
};

extern const unsigned XCoreInstrNameIndices[] = {
    640U, 680U, 653U, 666U, 644U, 675U, 578U, 593U, 
    561U, 607U, 767U, 551U, 531U, 794U, 544U, 1590U, 
    1268U, 690U, 707U, 1069U, 1275U, 1667U, 1428U, 893U, 
    1221U, 821U, 16U, 0U, 402U, 275U, 501U, 365U, 
    206U, 97U, 412U, 284U, 511U, 374U, 215U, 105U, 
    784U, 34U, 1209U, 1015U, 1697U, 740U, 224U, 113U, 
    186U, 79U, 1253U, 1481U, 1391U, 1454U, 1472U, 837U, 
    883U, 900U, 1168U, 166U, 61U, 1608U, 1289U, 176U, 
    70U, 874U, 722U, 748U, 731U, 1189U, 1688U, 1088U, 
    1006U, 1024U, 957U, 967U, 1178U, 924U, 977U, 987U, 
    1062U, 951U, 1519U, 1308U, 1324U, 1370U, 1399U, 24U, 
    799U, 7U, 1643U, 1381U, 145U, 42U, 433U, 303U, 
    621U, 1655U, 1410U, 467U, 1563U, 334U, 1546U, 383U, 
    258U, 1528U, 422U, 293U, 445U, 314U, 628U, 479U, 
    345U, 1625U, 1339U, 1537U, 1317U, 1510U, 1332U, 1490U, 
    1500U, 847U, 942U, 1678U, 828U, 1420U, 574U, 790U, 
    1302U, 1042U, 1707U, 996U, 1097U, 1105U, 1148U, 1445U, 
    1463U, 156U, 52U, 521U, 1157U, 1139U, 392U, 266U, 
    934U, 907U, 1128U, 1199U, 1079U, 1242U, 856U, 241U, 
    129U, 196U, 88U, 1232U, 916U, 1112U, 1717U, 1599U, 
    1282U, 1616U, 1295U, 812U, 1353U, 1362U, 456U, 324U, 
    634U, 490U, 355U, 1634U, 1346U, 1581U, 1261U, 865U, 
    1032U, 1051U, 757U, 1437U, 1120U, 1726U, 
};

static inline void InitXCoreMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, 182);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct XCoreGenInstrInfo : public TargetInstrInfoImpl {
  explicit XCoreGenInstrInfo(int SO = -1, int DO = -1);
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR
#undef GET_INSTRINFO_CTOR
namespace llvm {
extern const MCInstrDesc XCoreInsts[];
extern const unsigned XCoreInstrNameIndices[];
extern const char XCoreInstrNameData[];
XCoreGenInstrInfo::XCoreGenInstrInfo(int SO, int DO)
  : TargetInstrInfoImpl(SO, DO) {
  InitMCInstrInfo(XCoreInsts, XCoreInstrNameIndices, XCoreInstrNameData, 182);
}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR

