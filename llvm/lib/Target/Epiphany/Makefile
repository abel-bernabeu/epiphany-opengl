##===- lib/Target/Epiphany/Makefile ---------------------------*- Makefile -*-===##
#
#                     The LLVM Compiler Infrastructure
#
# This file is distributed under the University of Illinois Open Source
# License. See LICENSE.TXT for details.
#
##===----------------------------------------------------------------------===##

LEVEL = ../../..
LIBRARYNAME = LLVMEpiphanyCodeGen
TARGET = Epiphany

# Make sure that tblgen is run, first thing.
BUILT_SOURCES = \
    EpiphanyGenRegisterInfo.inc \
    EpiphanyGenInstrInfo.inc \
    EpiphanyGenAsmWriter.inc

DIRS = TargetInfo MCTargetDesc

include $(LEVEL)/Makefile.common

