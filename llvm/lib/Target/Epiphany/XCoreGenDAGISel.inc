//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the XCore target
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*40 cases */, 122|128,1/*250*/,  TARGET_VAL(ISD::ADD),// ->255
/*5*/       OPC_Scope, 29, /*->36*/ // 5 children in Scope
/*7*/         OPC_MoveChild, 0,
/*9*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*12*/        OPC_MoveChild, 0,
/*14*/        OPC_CheckInteger, 1, 
/*16*/        OPC_MoveParent,
/*17*/        OPC_RecordChild1, // #0 = $size
/*18*/        OPC_MoveParent,
/*19*/        OPC_MoveChild, 1,
/*21*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*27*/        OPC_MoveParent,
/*28*/        OPC_MorphNodeTo, TARGET_VAL(XCore::MKMSK_2r), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (add:i32 (shl:i32 1:i32, GRRegs:i32:$size), 4294967295:i32) - Complexity = 16
              // Dst: (MKMSK_2r:i32 GRRegs:i32:$size)
/*36*/      /*Scope*/ 39, /*->76*/
/*37*/        OPC_RecordChild0, // #0 = $addr
/*38*/        OPC_MoveChild, 1,
/*40*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*43*/        OPC_RecordChild0, // #1 = $offset
/*44*/        OPC_MoveChild, 1,
/*46*/        OPC_Scope, 13, /*->61*/ // 2 children in Scope
/*48*/          OPC_CheckInteger, 2, 
/*50*/          OPC_MoveParent,
/*51*/          OPC_MoveParent,
/*52*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*61*/        /*Scope*/ 13, /*->75*/
/*62*/          OPC_CheckInteger, 1, 
/*64*/          OPC_MoveParent,
/*65*/          OPC_MoveParent,
/*66*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*75*/        0, /*End of Scope*/
/*76*/      /*Scope*/ 40, /*->117*/
/*77*/        OPC_MoveChild, 0,
/*79*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*82*/        OPC_RecordChild0, // #0 = $offset
/*83*/        OPC_MoveChild, 1,
/*85*/        OPC_Scope, 14, /*->101*/ // 2 children in Scope
/*87*/          OPC_CheckInteger, 2, 
/*89*/          OPC_MoveParent,
/*90*/          OPC_MoveParent,
/*91*/          OPC_RecordChild1, // #1 = $addr
/*92*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr) - Complexity = 11
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*101*/       /*Scope*/ 14, /*->116*/
/*102*/         OPC_CheckInteger, 1, 
/*104*/         OPC_MoveParent,
/*105*/         OPC_MoveParent,
/*106*/         OPC_RecordChild1, // #1 = $addr
/*107*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr) - Complexity = 11
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*116*/       0, /*End of Scope*/
/*117*/     /*Scope*/ 44, /*->162*/
/*118*/       OPC_RecordNode, // #0 = $addr
/*119*/       OPC_CheckType, MVT::i32,
/*121*/       OPC_Scope, 12, /*->135*/ // 3 children in Scope
/*123*/         OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*126*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWFI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: ADDRspii:i32:$addr - Complexity = 9
                // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
/*135*/       /*Scope*/ 12, /*->148*/
/*136*/         OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRdpii:$a #1 #2
/*139*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWDP_lru6), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: ADDRdpii:i32:$a - Complexity = 9
                // Dst: (LDAWDP_lru6:i32 ADDRdpii:i32:$a)
/*148*/       /*Scope*/ 12, /*->161*/
/*149*/         OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectADDRcpii:$a #1 #2
/*152*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: ADDRcpii:i32:$a - Complexity = 9
                // Dst: (LDAWCP_lu6:i32 ADDRcpii:i32:$a)
/*161*/       0, /*End of Scope*/
/*162*/     /*Scope*/ 91, /*->254*/
/*163*/       OPC_RecordChild0, // #0 = $b
/*164*/       OPC_RecordChild1, // #1 = $c
/*165*/       OPC_Scope, 76, /*->243*/ // 2 children in Scope
/*167*/         OPC_MoveChild, 1,
/*169*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*172*/         OPC_Scope, 14, /*->188*/ // 4 children in Scope
/*174*/           OPC_CheckPredicate, 0, // Predicate_immUs
/*176*/           OPC_MoveParent,
/*177*/           OPC_EmitConvertToTarget, 1,
/*179*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ADD_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                  // Dst: (ADD_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*188*/         /*Scope*/ 17, /*->206*/
/*189*/           OPC_CheckPredicate, 1, // Predicate_immUs4
/*191*/           OPC_MoveParent,
/*192*/           OPC_EmitConvertToTarget, 1,
/*194*/           OPC_EmitNodeXForm, 0, 2, // div4_xform
/*197*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                  // Dst: (LDAWF_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*206*/         /*Scope*/ 17, /*->224*/
/*207*/           OPC_CheckPredicate, 2, // Predicate_immUsNeg
/*209*/           OPC_MoveParent,
/*210*/           OPC_EmitConvertToTarget, 1,
/*212*/           OPC_EmitNodeXForm, 1, 2, // neg_xform
/*215*/           OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUsNeg>>:$src2) - Complexity = 7
                  // Dst: (SUB_2rus:i32 GRRegs:i32:$src1, (neg_xform:i32 (imm:i32)<<P:Predicate_immUsNeg>>:$src2))
/*224*/         /*Scope*/ 17, /*->242*/
/*225*/           OPC_CheckPredicate, 3, // Predicate_immUs4Neg
/*227*/           OPC_MoveParent,
/*228*/           OPC_EmitConvertToTarget, 1,
/*230*/           OPC_EmitNodeXForm, 2, 2, // div4neg_xform
/*233*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUs4Neg>>:$src2) - Complexity = 7
                  // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$src1, (div4neg_xform:i32 (imm:i32)<<P:Predicate_immUs4Neg>>:$src2))
/*242*/         0, /*End of Scope*/
/*243*/       /*Scope*/ 9, /*->253*/
/*244*/         OPC_MorphNodeTo, TARGET_VAL(XCore::ADD_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (ADD_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*253*/       0, /*End of Scope*/
/*254*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 45|128,3/*429*/,  TARGET_VAL(ISD::LOAD),// ->688
/*259*/     OPC_RecordMemRef,
/*260*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*261*/     OPC_Scope, 40|128,1/*168*/, /*->432*/ // 4 children in Scope
/*264*/       OPC_MoveChild, 1,
/*266*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*269*/       OPC_Scope, 79, /*->350*/ // 2 children in Scope
/*271*/         OPC_RecordChild0, // #1 = $addr
/*272*/         OPC_MoveChild, 1,
/*274*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*277*/         OPC_RecordChild0, // #2 = $offset
/*278*/         OPC_MoveChild, 1,
/*280*/         OPC_Scope, 43, /*->325*/ // 2 children in Scope
/*282*/           OPC_CheckInteger, 1, 
/*284*/           OPC_MoveParent,
/*285*/           OPC_MoveParent,
/*286*/           OPC_CheckType, MVT::i32,
/*288*/           OPC_MoveParent,
/*289*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*291*/           OPC_CheckType, MVT::i32,
/*293*/           OPC_Scope, 14, /*->309*/ // 2 children in Scope
/*295*/             OPC_CheckPredicate, 5, // Predicate_sextload
/*297*/             OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*299*/             OPC_EmitMergeInputChains1_0,
/*300*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*309*/           /*Scope*/ 14, /*->324*/
/*310*/             OPC_CheckPredicate, 7, // Predicate_extload
/*312*/             OPC_CheckPredicate, 8, // Predicate_extloadi16
/*314*/             OPC_EmitMergeInputChains1_0,
/*315*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*324*/           0, /*End of Scope*/
/*325*/         /*Scope*/ 23, /*->349*/
/*326*/           OPC_CheckInteger, 2, 
/*328*/           OPC_MoveParent,
/*329*/           OPC_MoveParent,
/*330*/           OPC_CheckType, MVT::i32,
/*332*/           OPC_MoveParent,
/*333*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*335*/           OPC_CheckPredicate, 9, // Predicate_load
/*337*/           OPC_CheckType, MVT::i32,
/*339*/           OPC_EmitMergeInputChains1_0,
/*340*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                  // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*349*/         0, /*End of Scope*/
/*350*/       /*Scope*/ 80, /*->431*/
/*351*/         OPC_MoveChild, 0,
/*353*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*356*/         OPC_RecordChild0, // #1 = $offset
/*357*/         OPC_MoveChild, 1,
/*359*/         OPC_Scope, 44, /*->405*/ // 2 children in Scope
/*361*/           OPC_CheckInteger, 1, 
/*363*/           OPC_MoveParent,
/*364*/           OPC_MoveParent,
/*365*/           OPC_RecordChild1, // #2 = $addr
/*366*/           OPC_CheckType, MVT::i32,
/*368*/           OPC_MoveParent,
/*369*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*371*/           OPC_CheckType, MVT::i32,
/*373*/           OPC_Scope, 14, /*->389*/ // 2 children in Scope
/*375*/             OPC_CheckPredicate, 7, // Predicate_extload
/*377*/             OPC_CheckPredicate, 8, // Predicate_extloadi16
/*379*/             OPC_EmitMergeInputChains1_0,
/*380*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*389*/           /*Scope*/ 14, /*->404*/
/*390*/             OPC_CheckPredicate, 5, // Predicate_sextload
/*392*/             OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*394*/             OPC_EmitMergeInputChains1_0,
/*395*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*404*/           0, /*End of Scope*/
/*405*/         /*Scope*/ 24, /*->430*/
/*406*/           OPC_CheckInteger, 2, 
/*408*/           OPC_MoveParent,
/*409*/           OPC_MoveParent,
/*410*/           OPC_RecordChild1, // #2 = $addr
/*411*/           OPC_CheckType, MVT::i32,
/*413*/           OPC_MoveParent,
/*414*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*416*/           OPC_CheckPredicate, 9, // Predicate_load
/*418*/           OPC_CheckType, MVT::i32,
/*420*/           OPC_EmitMergeInputChains1_0,
/*421*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                  // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                  // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*430*/         0, /*End of Scope*/
/*431*/       0, /*End of Scope*/
/*432*/     /*Scope*/ 39, /*->472*/
/*433*/       OPC_RecordChild1, // #1 = $addr
/*434*/       OPC_CheckChild1Type, MVT::i32,
/*436*/       OPC_CheckPredicate, 4, // Predicate_unindexedload
/*438*/       OPC_CheckPredicate, 9, // Predicate_load
/*440*/       OPC_CheckType, MVT::i32,
/*442*/       OPC_Scope, 13, /*->457*/ // 2 children in Scope
/*444*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRspii:$addr #2 #3
/*447*/         OPC_EmitMergeInputChains1_0,
/*448*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRspii:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDWFI:i32 ADDRspii:i32:$addr)
/*457*/       /*Scope*/ 13, /*->471*/
/*458*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRdpii:$a #2 #3
/*461*/         OPC_EmitMergeInputChains1_0,
/*462*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRdpii:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDWDP_lru6:i32 ADDRdpii:i32:$a)
/*471*/       0, /*End of Scope*/
/*472*/     /*Scope*/ 82, /*->555*/
/*473*/       OPC_MoveChild, 1,
/*475*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*478*/       OPC_RecordChild0, // #1 = $addr
/*479*/       OPC_RecordChild1, // #2 = $offset
/*480*/       OPC_Scope, 32, /*->514*/ // 2 children in Scope
/*482*/         OPC_MoveChild, 1,
/*484*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*487*/         OPC_CheckPredicate, 1, // Predicate_immUs4
/*489*/         OPC_MoveParent,
/*490*/         OPC_CheckType, MVT::i32,
/*492*/         OPC_MoveParent,
/*493*/         OPC_CheckPredicate, 4, // Predicate_unindexedload
/*495*/         OPC_CheckPredicate, 9, // Predicate_load
/*497*/         OPC_CheckType, MVT::i32,
/*499*/         OPC_EmitMergeInputChains1_0,
/*500*/         OPC_EmitConvertToTarget, 2,
/*502*/         OPC_EmitNodeXForm, 0, 3, // div4_xform
/*505*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 11
                // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*514*/       /*Scope*/ 39, /*->554*/
/*515*/         OPC_CheckType, MVT::i32,
/*517*/         OPC_MoveParent,
/*518*/         OPC_CheckPredicate, 4, // Predicate_unindexedload
/*520*/         OPC_CheckType, MVT::i32,
/*522*/         OPC_Scope, 14, /*->538*/ // 2 children in Scope
/*524*/           OPC_CheckPredicate, 10, // Predicate_zextload
/*526*/           OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*528*/           OPC_EmitMergeInputChains1_0,
/*529*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 7
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*538*/         /*Scope*/ 14, /*->553*/
/*539*/           OPC_CheckPredicate, 7, // Predicate_extload
/*541*/           OPC_CheckPredicate, 12, // Predicate_extloadi8
/*543*/           OPC_EmitMergeInputChains1_0,
/*544*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 7
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*553*/         0, /*End of Scope*/
/*554*/       0, /*End of Scope*/
/*555*/     /*Scope*/ 2|128,1/*130*/, /*->687*/
/*557*/       OPC_RecordChild1, // #1 = $addr
/*558*/       OPC_CheckChild1Type, MVT::i32,
/*560*/       OPC_CheckPredicate, 4, // Predicate_unindexedload
/*562*/       OPC_CheckType, MVT::i32,
/*564*/       OPC_Scope, 15, /*->581*/ // 4 children in Scope
/*566*/         OPC_CheckPredicate, 9, // Predicate_load
/*568*/         OPC_EmitMergeInputChains1_0,
/*569*/         OPC_EmitInteger, MVT::i32, 0, 
/*572*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 4
                // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, 0:i32)
/*581*/       /*Scope*/ 25, /*->607*/
/*582*/         OPC_CheckPredicate, 10, // Predicate_zextload
/*584*/         OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*586*/         OPC_EmitMergeInputChains1_0,
/*587*/         OPC_EmitInteger, MVT::i32, 0, 
/*590*/         OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*598*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 4
                // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*607*/       /*Scope*/ 25, /*->633*/
/*608*/         OPC_CheckPredicate, 5, // Predicate_sextload
/*610*/         OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*612*/         OPC_EmitMergeInputChains1_0,
/*613*/         OPC_EmitInteger, MVT::i32, 0, 
/*616*/         OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*624*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 4
                // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*633*/       /*Scope*/ 52, /*->686*/
/*634*/         OPC_CheckPredicate, 7, // Predicate_extload
/*636*/         OPC_Scope, 23, /*->661*/ // 2 children in Scope
/*638*/           OPC_CheckPredicate, 12, // Predicate_extloadi8
/*640*/           OPC_EmitMergeInputChains1_0,
/*641*/           OPC_EmitInteger, MVT::i32, 0, 
/*644*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*652*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 4
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*661*/         /*Scope*/ 23, /*->685*/
/*662*/           OPC_CheckPredicate, 8, // Predicate_extloadi16
/*664*/           OPC_EmitMergeInputChains1_0,
/*665*/           OPC_EmitInteger, MVT::i32, 0, 
/*668*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*676*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 4
                  // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*685*/         0, /*End of Scope*/
/*686*/       0, /*End of Scope*/
/*687*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,2/*308*/,  TARGET_VAL(ISD::STORE),// ->1000
/*692*/     OPC_RecordMemRef,
/*693*/     OPC_RecordNode,   // #0 = 'st' chained node
/*694*/     OPC_RecordChild1, // #1 = $val
/*695*/     OPC_CheckChild1Type, MVT::i32,
/*697*/     OPC_Scope, 124, /*->823*/ // 4 children in Scope
/*699*/       OPC_MoveChild, 2,
/*701*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*704*/       OPC_Scope, 57, /*->763*/ // 2 children in Scope
/*706*/         OPC_RecordChild0, // #2 = $addr
/*707*/         OPC_MoveChild, 1,
/*709*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*712*/         OPC_RecordChild0, // #3 = $offset
/*713*/         OPC_MoveChild, 1,
/*715*/         OPC_Scope, 23, /*->740*/ // 2 children in Scope
/*717*/           OPC_CheckInteger, 1, 
/*719*/           OPC_MoveParent,
/*720*/           OPC_MoveParent,
/*721*/           OPC_CheckType, MVT::i32,
/*723*/           OPC_MoveParent,
/*724*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*726*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*728*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*730*/           OPC_EmitMergeInputChains1_0,
/*731*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*740*/         /*Scope*/ 21, /*->762*/
/*741*/           OPC_CheckInteger, 2, 
/*743*/           OPC_MoveParent,
/*744*/           OPC_MoveParent,
/*745*/           OPC_CheckType, MVT::i32,
/*747*/           OPC_MoveParent,
/*748*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*750*/           OPC_CheckPredicate, 16, // Predicate_store
/*752*/           OPC_EmitMergeInputChains1_0,
/*753*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                  // Dst: (STW_3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*762*/         0, /*End of Scope*/
/*763*/       /*Scope*/ 58, /*->822*/
/*764*/         OPC_MoveChild, 0,
/*766*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*769*/         OPC_RecordChild0, // #2 = $offset
/*770*/         OPC_MoveChild, 1,
/*772*/         OPC_Scope, 24, /*->798*/ // 2 children in Scope
/*774*/           OPC_CheckInteger, 1, 
/*776*/           OPC_MoveParent,
/*777*/           OPC_MoveParent,
/*778*/           OPC_RecordChild1, // #3 = $addr
/*779*/           OPC_CheckType, MVT::i32,
/*781*/           OPC_MoveParent,
/*782*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*784*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*786*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*788*/           OPC_EmitMergeInputChains1_0,
/*789*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*798*/         /*Scope*/ 22, /*->821*/
/*799*/           OPC_CheckInteger, 2, 
/*801*/           OPC_MoveParent,
/*802*/           OPC_MoveParent,
/*803*/           OPC_RecordChild1, // #3 = $addr
/*804*/           OPC_CheckType, MVT::i32,
/*806*/           OPC_MoveParent,
/*807*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*809*/           OPC_CheckPredicate, 16, // Predicate_store
/*811*/           OPC_EmitMergeInputChains1_0,
/*812*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                  // Dst: (STW_3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*821*/         0, /*End of Scope*/
/*822*/       0, /*End of Scope*/
/*823*/     /*Scope*/ 37, /*->861*/
/*824*/       OPC_RecordChild2, // #2 = $addr
/*825*/       OPC_CheckChild2Type, MVT::i32,
/*827*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*829*/       OPC_CheckPredicate, 16, // Predicate_store
/*831*/       OPC_Scope, 13, /*->846*/ // 2 children in Scope
/*833*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRspii:$addr #3 #4
/*836*/         OPC_EmitMergeInputChains1_0,
/*837*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st GRRegs:i32:$src, ADDRspii:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STWFI GRRegs:i32:$src, ADDRspii:i32:$addr)
/*846*/       /*Scope*/ 13, /*->860*/
/*847*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRdpii:$addr #3 #4
/*850*/         OPC_EmitMergeInputChains1_0,
/*851*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st GRRegs:i32:$val, ADDRdpii:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STWDP_lru6 GRRegs:i32:$val, ADDRdpii:i32:$addr)
/*860*/       0, /*End of Scope*/
/*861*/     /*Scope*/ 60, /*->922*/
/*862*/       OPC_MoveChild, 2,
/*864*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*867*/       OPC_RecordChild0, // #2 = $addr
/*868*/       OPC_RecordChild1, // #3 = $offset
/*869*/       OPC_Scope, 30, /*->901*/ // 2 children in Scope
/*871*/         OPC_MoveChild, 1,
/*873*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*876*/         OPC_CheckPredicate, 1, // Predicate_immUs4
/*878*/         OPC_MoveParent,
/*879*/         OPC_CheckType, MVT::i32,
/*881*/         OPC_MoveParent,
/*882*/         OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*884*/         OPC_CheckPredicate, 16, // Predicate_store
/*886*/         OPC_EmitMergeInputChains1_0,
/*887*/         OPC_EmitConvertToTarget, 3,
/*889*/         OPC_EmitNodeXForm, 0, 4, // div4_xform
/*892*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 5, 
                // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 11
                // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*901*/       /*Scope*/ 19, /*->921*/
/*902*/         OPC_CheckType, MVT::i32,
/*904*/         OPC_MoveParent,
/*905*/         OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*907*/         OPC_CheckPredicate, 14, // Predicate_truncstore
/*909*/         OPC_CheckPredicate, 17, // Predicate_truncstorei8
/*911*/         OPC_EmitMergeInputChains1_0,
/*912*/         OPC_MorphNodeTo, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 7
                // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*921*/       0, /*End of Scope*/
/*922*/     /*Scope*/ 76, /*->999*/
/*923*/       OPC_RecordChild2, // #2 = $addr
/*924*/       OPC_CheckChild2Type, MVT::i32,
/*926*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*928*/       OPC_Scope, 15, /*->945*/ // 2 children in Scope
/*930*/         OPC_CheckPredicate, 16, // Predicate_store
/*932*/         OPC_EmitMergeInputChains1_0,
/*933*/         OPC_EmitInteger, MVT::i32, 0, 
/*936*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 4
                // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, 0:i32)
/*945*/       /*Scope*/ 52, /*->998*/
/*946*/         OPC_CheckPredicate, 14, // Predicate_truncstore
/*948*/         OPC_Scope, 23, /*->973*/ // 2 children in Scope
/*950*/           OPC_CheckPredicate, 17, // Predicate_truncstorei8
/*952*/           OPC_EmitMergeInputChains1_0,
/*953*/           OPC_EmitInteger, MVT::i32, 0, 
/*956*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4 
/*964*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                  // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 4
                  // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*973*/         /*Scope*/ 23, /*->997*/
/*974*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*976*/           OPC_EmitMergeInputChains1_0,
/*977*/           OPC_EmitInteger, MVT::i32, 0, 
/*980*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4 
/*988*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                  // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 4
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*997*/         0, /*End of Scope*/
/*998*/       0, /*End of Scope*/
/*999*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::SRA),// ->1097
/*1003*/    OPC_Scope, 35, /*->1040*/ // 2 children in Scope
/*1005*/      OPC_MoveChild, 0,
/*1007*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*1010*/      OPC_RecordChild0, // #0 = $src
/*1011*/      OPC_RecordChild1, // #1 = $imm
/*1012*/      OPC_MoveChild, 1,
/*1014*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1017*/      OPC_CheckPredicate, 18, // Predicate_immBpwSubBitp
/*1019*/      OPC_MoveParent,
/*1020*/      OPC_MoveParent,
/*1021*/      OPC_MoveChild, 1,
/*1023*/      OPC_CheckSame, 1,
/*1025*/      OPC_MoveParent,
/*1026*/      OPC_EmitConvertToTarget, 1,
/*1028*/      OPC_EmitNodeXForm, 3, 2, // bpwsub_xform
/*1031*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (sra:i32 (shl:i32 GRRegs:i32:$src, (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm), (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm) - Complexity = 14
              // Dst: (SEXT_rus:i32 GRRegs:i32:$src, (bpwsub_xform:i32 (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm))
/*1040*/    /*Scope*/ 55, /*->1096*/
/*1041*/      OPC_RecordChild0, // #0 = $src
/*1042*/      OPC_Scope, 17, /*->1061*/ // 2 children in Scope
/*1044*/        OPC_MoveChild, 1,
/*1046*/        OPC_CheckInteger, 31, 
/*1048*/        OPC_MoveParent,
/*1049*/        OPC_EmitInteger, MVT::i32, 32, 
/*1052*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 GRRegs:i32:$src, 31:i32) - Complexity = 8
                // Dst: (ASHR_l2rus:i32 GRRegs:i32:$src, 32:i32)
/*1061*/      /*Scope*/ 33, /*->1095*/
/*1062*/        OPC_RecordChild1, // #1 = $c
/*1063*/        OPC_Scope, 19, /*->1084*/ // 2 children in Scope
/*1065*/          OPC_MoveChild, 1,
/*1067*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1070*/          OPC_CheckPredicate, 19, // Predicate_immBitp
/*1072*/          OPC_MoveParent,
/*1073*/          OPC_EmitConvertToTarget, 1,
/*1075*/          OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
                  // Dst: (ASHR_l2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*1084*/        /*Scope*/ 9, /*->1094*/
/*1085*/          OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                  // Dst: (ASHR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*1094*/        0, /*End of Scope*/
/*1095*/      0, /*End of Scope*/
/*1096*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 0|128,5/*640*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->1741
/*1101*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*1102*/    OPC_MoveChild, 1,
/*1104*/    OPC_Scope, 58, /*->1164*/ // 28 children in Scope
/*1106*/      OPC_CheckInteger, 91|128,14/*1883*/, 
/*1109*/      OPC_MoveParent,
/*1110*/      OPC_RecordChild2, // #1 = $r
/*1111*/      OPC_CheckChild2Type, MVT::i32,
/*1113*/      OPC_RecordChild3, // #2 = $val
/*1114*/      OPC_Scope, 37, /*->1153*/ // 2 children in Scope
/*1116*/        OPC_MoveChild, 3,
/*1118*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1121*/        OPC_Scope, 14, /*->1137*/ // 2 children in Scope
/*1123*/          OPC_CheckPredicate, 20, // Predicate_immU6
/*1125*/          OPC_MoveParent,
/*1126*/          OPC_EmitMergeInputChains1_0,
/*1127*/          OPC_EmitConvertToTarget, 2,
/*1129*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_ru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 1883:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immU6>>:$val) - Complexity = 12
                  // Dst: (SETC_ru6 GRRegs:i32:$r, (imm:i32):$val)
/*1137*/        /*Scope*/ 14, /*->1152*/
/*1138*/          OPC_CheckPredicate, 21, // Predicate_immU16
/*1140*/          OPC_MoveParent,
/*1141*/          OPC_EmitMergeInputChains1_0,
/*1142*/          OPC_EmitConvertToTarget, 2,
/*1144*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 1883:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immU16>>:$val) - Complexity = 12
                  // Dst: (SETC_lru6 GRRegs:i32:$r, (imm:i32):$val)
/*1152*/        0, /*End of Scope*/
/*1153*/      /*Scope*/ 9, /*->1163*/
/*1154*/        OPC_EmitMergeInputChains1_0,
/*1155*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_l2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 1883:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (SETC_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1163*/      0, /*End of Scope*/
/*1164*/    /*Scope*/ 40, /*->1205*/
/*1165*/      OPC_CheckInteger, 99|128,14/*1891*/, 
/*1168*/      OPC_MoveParent,
/*1169*/      OPC_RecordChild2, // #1 = $b
/*1170*/      OPC_MoveChild, 2,
/*1172*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1175*/      OPC_Scope, 13, /*->1190*/ // 2 children in Scope
/*1177*/        OPC_CheckPredicate, 20, // Predicate_immU6
/*1179*/        OPC_MoveParent,
/*1180*/        OPC_EmitMergeInputChains1_0,
/*1181*/        OPC_EmitConvertToTarget, 1,
/*1183*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETSR_u6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 1891:iPTR, (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 12
                // Dst: (SETSR_u6 (imm:i32):$b)
/*1190*/      /*Scope*/ 13, /*->1204*/
/*1191*/        OPC_CheckPredicate, 21, // Predicate_immU16
/*1193*/        OPC_MoveParent,
/*1194*/        OPC_EmitMergeInputChains1_0,
/*1195*/        OPC_EmitConvertToTarget, 1,
/*1197*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETSR_lu6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 1891:iPTR, (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 12
                // Dst: (SETSR_lu6 (imm:i32):$b)
/*1204*/      0, /*End of Scope*/
/*1205*/    /*Scope*/ 40, /*->1246*/
/*1206*/      OPC_CheckInteger, 62|128,14/*1854*/, 
/*1209*/      OPC_MoveParent,
/*1210*/      OPC_RecordChild2, // #1 = $b
/*1211*/      OPC_MoveChild, 2,
/*1213*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1216*/      OPC_Scope, 13, /*->1231*/ // 2 children in Scope
/*1218*/        OPC_CheckPredicate, 20, // Predicate_immU6
/*1220*/        OPC_MoveParent,
/*1221*/        OPC_EmitMergeInputChains1_0,
/*1222*/        OPC_EmitConvertToTarget, 1,
/*1224*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CLRSR_u6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 1854:iPTR, (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 12
                // Dst: (CLRSR_u6 (imm:i32):$b)
/*1231*/      /*Scope*/ 13, /*->1245*/
/*1232*/        OPC_CheckPredicate, 21, // Predicate_immU16
/*1234*/        OPC_MoveParent,
/*1235*/        OPC_EmitMergeInputChains1_0,
/*1236*/        OPC_EmitConvertToTarget, 1,
/*1238*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CLRSR_lu6), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 1854:iPTR, (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 12
                // Dst: (CLRSR_lu6 (imm:i32):$b)
/*1245*/      0, /*End of Scope*/
/*1246*/    /*Scope*/ 40, /*->1287*/
/*1247*/      OPC_CheckInteger, 87|128,14/*1879*/, 
/*1250*/      OPC_MoveParent,
/*1251*/      OPC_RecordChild2, // #1 = $r
/*1252*/      OPC_CheckChild2Type, MVT::i32,
/*1254*/      OPC_RecordChild3, // #2 = $val
/*1255*/      OPC_Scope, 19, /*->1276*/ // 2 children in Scope
/*1257*/        OPC_MoveChild, 3,
/*1259*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1262*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1264*/        OPC_MoveParent,
/*1265*/        OPC_EmitMergeInputChains1_0,
/*1266*/        OPC_EmitConvertToTarget, 2,
/*1268*/        OPC_MorphNodeTo, TARGET_VAL(XCore::OUTCT_rus), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 1879:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                // Dst: (OUTCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1276*/      /*Scope*/ 9, /*->1286*/
/*1277*/        OPC_EmitMergeInputChains1_0,
/*1278*/        OPC_MorphNodeTo, TARGET_VAL(XCore::OUTCT_2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 1879:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (OUTCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1286*/      0, /*End of Scope*/
/*1287*/    /*Scope*/ 40, /*->1328*/
/*1288*/      OPC_CheckInteger, 60|128,14/*1852*/, 
/*1291*/      OPC_MoveParent,
/*1292*/      OPC_RecordChild2, // #1 = $r
/*1293*/      OPC_CheckChild2Type, MVT::i32,
/*1295*/      OPC_RecordChild3, // #2 = $val
/*1296*/      OPC_Scope, 19, /*->1317*/ // 2 children in Scope
/*1298*/        OPC_MoveChild, 3,
/*1300*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1303*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1305*/        OPC_MoveParent,
/*1306*/        OPC_EmitMergeInputChains1_0,
/*1307*/        OPC_EmitConvertToTarget, 2,
/*1309*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CHKCT_rus), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 1852:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                // Dst: (CHKCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1317*/      /*Scope*/ 9, /*->1327*/
/*1318*/        OPC_EmitMergeInputChains1_0,
/*1319*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CHKCT_2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 1852:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (CHKCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1327*/      0, /*End of Scope*/
/*1328*/    /*Scope*/ 17, /*->1346*/
/*1329*/      OPC_CheckInteger, 97|128,14/*1889*/, 
/*1332*/      OPC_MoveParent,
/*1333*/      OPC_RecordChild2, // #1 = $r
/*1334*/      OPC_CheckChild2Type, MVT::i32,
/*1336*/      OPC_RecordChild3, // #2 = $val
/*1337*/      OPC_EmitMergeInputChains1_0,
/*1338*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1889:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETPT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1346*/    /*Scope*/ 17, /*->1364*/
/*1347*/      OPC_CheckInteger, 89|128,14/*1881*/, 
/*1350*/      OPC_MoveParent,
/*1351*/      OPC_RecordChild2, // #1 = $r
/*1352*/      OPC_CheckChild2Type, MVT::i32,
/*1354*/      OPC_RecordChild3, // #2 = $val
/*1355*/      OPC_EmitMergeInputChains1_0,
/*1356*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUTT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1881:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (OUTT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1364*/    /*Scope*/ 17, /*->1382*/
/*1365*/      OPC_CheckInteger, 86|128,14/*1878*/, 
/*1368*/      OPC_MoveParent,
/*1369*/      OPC_RecordChild2, // #1 = $r
/*1370*/      OPC_CheckChild2Type, MVT::i32,
/*1372*/      OPC_RecordChild3, // #2 = $val
/*1373*/      OPC_EmitMergeInputChains1_0,
/*1374*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1878:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (OUT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1382*/    /*Scope*/ 17, /*->1400*/
/*1383*/      OPC_CheckInteger, 93|128,14/*1885*/, 
/*1386*/      OPC_MoveParent,
/*1387*/      OPC_RecordChild2, // #1 = $r
/*1388*/      OPC_CheckChild2Type, MVT::i32,
/*1390*/      OPC_RecordChild3, // #2 = $val
/*1391*/      OPC_EmitMergeInputChains1_0,
/*1392*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETD_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1885:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETD_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1400*/    /*Scope*/ 19, /*->1420*/
/*1401*/      OPC_CheckInteger, 81|128,14/*1873*/, 
/*1404*/      OPC_MoveParent,
/*1405*/      OPC_RecordChild2, // #1 = $t
/*1406*/      OPC_CheckChild2Type, MVT::i32,
/*1408*/      OPC_RecordChild3, // #2 = $src
/*1409*/      OPC_CheckChild3Type, MVT::i32,
/*1411*/      OPC_EmitMergeInputChains1_0,
/*1412*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITSP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1873:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITSP_2r GRRegs:i32:$t, GRRegs:i32:$src)
/*1420*/    /*Scope*/ 19, /*->1440*/
/*1421*/      OPC_CheckInteger, 80|128,14/*1872*/, 
/*1424*/      OPC_MoveParent,
/*1425*/      OPC_RecordChild2, // #1 = $t
/*1426*/      OPC_CheckChild2Type, MVT::i32,
/*1428*/      OPC_RecordChild3, // #2 = $src
/*1429*/      OPC_CheckChild3Type, MVT::i32,
/*1431*/      OPC_EmitMergeInputChains1_0,
/*1432*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITPC_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1872:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITPC_2r GRRegs:i32:$t, GRRegs:i32:$src)
/*1440*/    /*Scope*/ 19, /*->1460*/
/*1441*/      OPC_CheckInteger, 77|128,14/*1869*/, 
/*1444*/      OPC_MoveParent,
/*1445*/      OPC_RecordChild2, // #1 = $t
/*1446*/      OPC_CheckChild2Type, MVT::i32,
/*1448*/      OPC_RecordChild3, // #2 = $src
/*1449*/      OPC_CheckChild3Type, MVT::i32,
/*1451*/      OPC_EmitMergeInputChains1_0,
/*1452*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITCP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1869:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITCP_2r GRRegs:i32:$t, GRRegs:i32:$src)
/*1460*/    /*Scope*/ 19, /*->1480*/
/*1461*/      OPC_CheckInteger, 78|128,14/*1870*/, 
/*1464*/      OPC_MoveParent,
/*1465*/      OPC_RecordChild2, // #1 = $t
/*1466*/      OPC_CheckChild2Type, MVT::i32,
/*1468*/      OPC_RecordChild3, // #2 = $src
/*1469*/      OPC_CheckChild3Type, MVT::i32,
/*1471*/      OPC_EmitMergeInputChains1_0,
/*1472*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITDP_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1870:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITDP_2r GRRegs:i32:$t, GRRegs:i32:$src)
/*1480*/    /*Scope*/ 17, /*->1498*/
/*1481*/      OPC_CheckInteger, 100|128,14/*1892*/, 
/*1484*/      OPC_MoveParent,
/*1485*/      OPC_RecordChild2, // #1 = $r
/*1486*/      OPC_CheckChild2Type, MVT::i32,
/*1488*/      OPC_RecordChild3, // #2 = $val
/*1489*/      OPC_EmitMergeInputChains1_0,
/*1490*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETTW_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1892:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETTW_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1498*/    /*Scope*/ 15, /*->1514*/
/*1499*/      OPC_CheckInteger, 95|128,14/*1887*/, 
/*1502*/      OPC_MoveParent,
/*1503*/      OPC_RecordChild2, // #1 = $src1
/*1504*/      OPC_RecordChild3, // #2 = $src2
/*1505*/      OPC_EmitMergeInputChains1_0,
/*1506*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPS_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1887:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETPS_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1514*/    /*Scope*/ 19, /*->1534*/
/*1515*/      OPC_CheckInteger, 79|128,14/*1871*/, 
/*1518*/      OPC_MoveParent,
/*1519*/      OPC_RecordChild2, // #1 = $t
/*1520*/      OPC_CheckChild2Type, MVT::i32,
/*1522*/      OPC_RecordChild3, // #2 = $src
/*1523*/      OPC_CheckChild3Type, MVT::i32,
/*1525*/      OPC_EmitMergeInputChains1_0,
/*1526*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INITLR_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1871:iPTR, GRRegs:i32:$t, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INITLR_l2r GRRegs:i32:$t, GRRegs:i32:$src)
/*1534*/    /*Scope*/ 19, /*->1554*/
/*1535*/      OPC_CheckInteger, 92|128,14/*1884*/, 
/*1538*/      OPC_MoveParent,
/*1539*/      OPC_RecordChild2, // #1 = $src1
/*1540*/      OPC_CheckChild2Type, MVT::i32,
/*1542*/      OPC_RecordChild3, // #2 = $src2
/*1543*/      OPC_CheckChild3Type, MVT::i32,
/*1545*/      OPC_EmitMergeInputChains1_0,
/*1546*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETCLK_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1884:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETCLK_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1554*/    /*Scope*/ 19, /*->1574*/
/*1555*/      OPC_CheckInteger, 98|128,14/*1890*/, 
/*1558*/      OPC_MoveParent,
/*1559*/      OPC_RecordChild2, // #1 = $src1
/*1560*/      OPC_CheckChild2Type, MVT::i32,
/*1562*/      OPC_RecordChild3, // #2 = $src2
/*1563*/      OPC_CheckChild3Type, MVT::i32,
/*1565*/      OPC_EmitMergeInputChains1_0,
/*1566*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETRDY_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1890:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETRDY_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1574*/    /*Scope*/ 17, /*->1592*/
/*1575*/      OPC_CheckInteger, 96|128,14/*1888*/, 
/*1578*/      OPC_MoveParent,
/*1579*/      OPC_RecordChild2, // #1 = $src1
/*1580*/      OPC_CheckChild2Type, MVT::i32,
/*1582*/      OPC_RecordChild3, // #2 = $src2
/*1583*/      OPC_EmitMergeInputChains1_0,
/*1584*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPSC_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 1888:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
              // Dst: (SETPSC_l2r GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1592*/    /*Scope*/ 15, /*->1608*/
/*1593*/      OPC_CheckInteger, 85|128,14/*1877*/, 
/*1596*/      OPC_MoveParent,
/*1597*/      OPC_RecordChild2, // #1 = $i
/*1598*/      OPC_CheckChild2Type, MVT::i32,
/*1600*/      OPC_EmitMergeInputChains1_0,
/*1601*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MSYNC_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1877:iPTR, GRRegs:i32:$i) - Complexity = 8
              // Dst: (MSYNC_1r GRRegs:i32:$i)
/*1608*/    /*Scope*/ 15, /*->1624*/
/*1609*/      OPC_CheckInteger, 84|128,14/*1876*/, 
/*1612*/      OPC_MoveParent,
/*1613*/      OPC_RecordChild2, // #1 = $i
/*1614*/      OPC_CheckChild2Type, MVT::i32,
/*1616*/      OPC_EmitMergeInputChains1_0,
/*1617*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MJOIN_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1876:iPTR, GRRegs:i32:$i) - Complexity = 8
              // Dst: (MJOIN_1r GRRegs:i32:$i)
/*1624*/    /*Scope*/ 15, /*->1640*/
/*1625*/      OPC_CheckInteger, 104|128,14/*1896*/, 
/*1628*/      OPC_MoveParent,
/*1629*/      OPC_RecordChild2, // #1 = $r
/*1630*/      OPC_CheckChild2Type, MVT::i32,
/*1632*/      OPC_EmitMergeInputChains1_0,
/*1633*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SYNCR_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1896:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (SYNCR_1r GRRegs:i32:$r)
/*1640*/    /*Scope*/ 15, /*->1656*/
/*1641*/      OPC_CheckInteger, 67|128,14/*1859*/, 
/*1644*/      OPC_MoveParent,
/*1645*/      OPC_RecordChild2, // #1 = $r
/*1646*/      OPC_CheckChild2Type, MVT::i32,
/*1648*/      OPC_EmitMergeInputChains1_0,
/*1649*/      OPC_MorphNodeTo, TARGET_VAL(XCore::FREER_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1859:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (FREER_1r GRRegs:i32:$r)
/*1656*/    /*Scope*/ 21, /*->1678*/
/*1657*/      OPC_CheckInteger, 101|128,14/*1893*/, 
/*1660*/      OPC_MoveParent,
/*1661*/      OPC_RecordChild2, // #1 = $r
/*1662*/      OPC_CheckChild2Type, MVT::i32,
/*1664*/      OPC_RecordChild3, // #2 = physreg input R11
/*1665*/      OPC_CheckChild3Type, MVT::i32,
/*1667*/      OPC_EmitMergeInputChains1_0,
/*1668*/      OPC_EmitCopyToReg, 2, XCore::R11,
/*1671*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1893:iPTR, GRRegs:i32:$r, R11:i32) - Complexity = 8
              // Dst: (SETV_1r GRRegs:i32:$r)
/*1678*/    /*Scope*/ 21, /*->1700*/
/*1679*/      OPC_CheckInteger, 94|128,14/*1886*/, 
/*1682*/      OPC_MoveParent,
/*1683*/      OPC_RecordChild2, // #1 = $r
/*1684*/      OPC_CheckChild2Type, MVT::i32,
/*1686*/      OPC_RecordChild3, // #2 = physreg input R11
/*1687*/      OPC_CheckChild3Type, MVT::i32,
/*1689*/      OPC_EmitMergeInputChains1_0,
/*1690*/      OPC_EmitCopyToReg, 2, XCore::R11,
/*1693*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETEV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1886:iPTR, GRRegs:i32:$r, R11:i32) - Complexity = 8
              // Dst: (SETEV_1r GRRegs:i32:$r)
/*1700*/    /*Scope*/ 15, /*->1716*/
/*1701*/      OPC_CheckInteger, 65|128,14/*1857*/, 
/*1704*/      OPC_MoveParent,
/*1705*/      OPC_RecordChild2, // #1 = $r
/*1706*/      OPC_CheckChild2Type, MVT::i32,
/*1708*/      OPC_EmitMergeInputChains1_0,
/*1709*/      OPC_MorphNodeTo, TARGET_VAL(XCore::EEU_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 1857:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (EEU_1r GRRegs:i32:$r)
/*1716*/    /*Scope*/ 11, /*->1728*/
/*1717*/      OPC_CheckInteger, 61|128,14/*1853*/, 
/*1720*/      OPC_MoveParent,
/*1721*/      OPC_EmitMergeInputChains1_0,
/*1722*/      OPC_MorphNodeTo, TARGET_VAL(XCore::CLRE_0R), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 1853:iPTR) - Complexity = 8
              // Dst: (CLRE_0R)
/*1728*/    /*Scope*/ 11, /*->1740*/
/*1729*/      OPC_CheckInteger, 103|128,14/*1895*/, 
/*1732*/      OPC_MoveParent,
/*1733*/      OPC_EmitMergeInputChains1_0,
/*1734*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SSYNC_0r), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 1895:iPTR) - Complexity = 8
              // Dst: (SSYNC_0r)
/*1740*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->1870
/*1744*/    OPC_MoveChild, 0,
/*1746*/    OPC_Scope, 38, /*->1786*/ // 5 children in Scope
/*1748*/      OPC_CheckInteger, 102|128,14/*1894*/, 
/*1751*/      OPC_MoveParent,
/*1752*/      OPC_RecordChild1, // #0 = $src1
/*1753*/      OPC_RecordChild2, // #1 = $src2
/*1754*/      OPC_Scope, 19, /*->1775*/ // 2 children in Scope
/*1756*/        OPC_MoveChild, 2,
/*1758*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1761*/        OPC_CheckPredicate, 19, // Predicate_immBitp
/*1763*/        OPC_MoveParent,
/*1764*/        OPC_EmitConvertToTarget, 1,
/*1766*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 1894:iPTR, GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                // Dst: (SEXT_rus:i32 GRRegs:i32:$src1, (imm:i32):$src2)
/*1775*/      /*Scope*/ 9, /*->1785*/
/*1776*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_2r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 1894:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (SEXT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1785*/      0, /*End of Scope*/
/*1786*/    /*Scope*/ 38, /*->1825*/
/*1787*/      OPC_CheckInteger, 108|128,14/*1900*/, 
/*1790*/      OPC_MoveParent,
/*1791*/      OPC_RecordChild1, // #0 = $src1
/*1792*/      OPC_RecordChild2, // #1 = $src2
/*1793*/      OPC_Scope, 19, /*->1814*/ // 2 children in Scope
/*1795*/        OPC_MoveChild, 2,
/*1797*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1800*/        OPC_CheckPredicate, 19, // Predicate_immBitp
/*1802*/        OPC_MoveParent,
/*1803*/        OPC_EmitConvertToTarget, 1,
/*1805*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (intrinsic_wo_chain:i32 1900:iPTR, GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immBitp>>:$src2) - Complexity = 12
                // Dst: (ZEXT_rus:i32 GRRegs:i32:$src1, (imm:i32):$src2)
/*1814*/      /*Scope*/ 9, /*->1824*/
/*1815*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_2r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (intrinsic_wo_chain:i32 1900:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2) - Complexity = 8
                // Dst: (ZEXT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1824*/      0, /*End of Scope*/
/*1825*/    /*Scope*/ 17, /*->1843*/
/*1826*/      OPC_CheckInteger, 63|128,14/*1855*/, 
/*1829*/      OPC_MoveParent,
/*1830*/      OPC_RecordChild1, // #0 = $src1
/*1831*/      OPC_RecordChild2, // #1 = $src2
/*1832*/      OPC_RecordChild3, // #2 = $src3
/*1833*/      OPC_MorphNodeTo, TARGET_VAL(XCore::CRC_l3r), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:i32 1855:iPTR, GRRegs:i32:$src1, GRRegs:i32:$src2, GRRegs:i32:$src3) - Complexity = 8
              // Dst: (CRC_l3r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2, GRRegs:i32:$src3)
/*1843*/    /*Scope*/ 13, /*->1857*/
/*1844*/      OPC_CheckInteger, 58|128,14/*1850*/, 
/*1847*/      OPC_MoveParent,
/*1848*/      OPC_RecordChild1, // #0 = $src
/*1849*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BITREV_l2r), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 1850:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (BITREV_l2r:i32 GRRegs:i32:$src)
/*1857*/    /*Scope*/ 11, /*->1869*/
/*1858*/      OPC_CheckInteger, 70|128,14/*1862*/, 
/*1861*/      OPC_MoveParent,
/*1862*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETID_0R), 0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_wo_chain:i32 1862:iPTR) - Complexity = 8
              // Dst: (GETID_0R:i32)
/*1869*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,2/*266*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->2140
/*1874*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*1875*/    OPC_MoveChild, 1,
/*1877*/    OPC_Scope, 26, /*->1905*/ // 15 children in Scope
/*1879*/      OPC_CheckInteger, 72|128,14/*1864*/, 
/*1882*/      OPC_MoveParent,
/*1883*/      OPC_RecordChild2, // #1 = $type
/*1884*/      OPC_MoveChild, 2,
/*1886*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1889*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*1891*/      OPC_MoveParent,
/*1892*/      OPC_CheckType, MVT::i32,
/*1894*/      OPC_EmitMergeInputChains1_0,
/*1895*/      OPC_EmitConvertToTarget, 1,
/*1897*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETR_rus), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 1864:iPTR, (imm:i32)<<P:Predicate_immUs>>:$type) - Complexity = 12
              // Dst: (GETR_rus:i32 (imm:i32):$type)
/*1905*/    /*Scope*/ 16, /*->1922*/
/*1906*/      OPC_CheckInteger, 74|128,14/*1866*/, 
/*1909*/      OPC_MoveParent,
/*1910*/      OPC_RecordChild2, // #1 = $r
/*1911*/      OPC_CheckChild2Type, MVT::i32,
/*1913*/      OPC_EmitMergeInputChains1_0,
/*1914*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETTS_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1866:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (GETTS_2r:i32 GRRegs:i32:$r)
/*1922*/    /*Scope*/ 18, /*->1941*/
/*1923*/      OPC_CheckInteger, 88|128,14/*1880*/, 
/*1926*/      OPC_MoveParent,
/*1927*/      OPC_RecordChild2, // #1 = $r
/*1928*/      OPC_CheckChild2Type, MVT::i32,
/*1930*/      OPC_RecordChild3, // #2 = $src
/*1931*/      OPC_EmitMergeInputChains1_0,
/*1932*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUTSHR_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1880:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
              // Dst: (OUTSHR_2r:i32 GRRegs:i32:$r, GRRegs:i32:$src)
/*1941*/    /*Scope*/ 16, /*->1958*/
/*1942*/      OPC_CheckInteger, 76|128,14/*1868*/, 
/*1945*/      OPC_MoveParent,
/*1946*/      OPC_RecordChild2, // #1 = $r
/*1947*/      OPC_CheckChild2Type, MVT::i32,
/*1949*/      OPC_EmitMergeInputChains1_0,
/*1950*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1868:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (INCT_2r:i32 GRRegs:i32:$r)
/*1958*/    /*Scope*/ 16, /*->1975*/
/*1959*/      OPC_CheckInteger, 83|128,14/*1875*/, 
/*1962*/      OPC_MoveParent,
/*1963*/      OPC_RecordChild2, // #1 = $r
/*1964*/      OPC_CheckChild2Type, MVT::i32,
/*1966*/      OPC_EmitMergeInputChains1_0,
/*1967*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1875:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (INT_2r:i32 GRRegs:i32:$r)
/*1975*/    /*Scope*/ 16, /*->1992*/
/*1976*/      OPC_CheckInteger, 75|128,14/*1867*/, 
/*1979*/      OPC_MoveParent,
/*1980*/      OPC_RecordChild2, // #1 = $r
/*1981*/      OPC_CheckChild2Type, MVT::i32,
/*1983*/      OPC_EmitMergeInputChains1_0,
/*1984*/      OPC_MorphNodeTo, TARGET_VAL(XCore::IN_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1867:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (IN_2r:i32 GRRegs:i32:$r)
/*1992*/    /*Scope*/ 18, /*->2011*/
/*1993*/      OPC_CheckInteger, 82|128,14/*1874*/, 
/*1996*/      OPC_MoveParent,
/*1997*/      OPC_RecordChild2, // #1 = $r
/*1998*/      OPC_CheckChild2Type, MVT::i32,
/*2000*/      OPC_RecordChild3, // #2 = $src
/*2001*/      OPC_EmitMergeInputChains1_0,
/*2002*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INSHR_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 1874:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INSHR_2r:i32 GRRegs:i32:$r, GRRegs:i32:$src)
/*2011*/    /*Scope*/ 16, /*->2028*/
/*2012*/      OPC_CheckInteger, 105|128,14/*1897*/, 
/*2015*/      OPC_MoveParent,
/*2016*/      OPC_RecordChild2, // #1 = $src
/*2017*/      OPC_CheckChild2Type, MVT::i32,
/*2019*/      OPC_EmitMergeInputChains1_0,
/*2020*/      OPC_MorphNodeTo, TARGET_VAL(XCore::TESTCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1897:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (TESTCT_2r:i32 GRRegs:i32:$src)
/*2028*/    /*Scope*/ 16, /*->2045*/
/*2029*/      OPC_CheckInteger, 106|128,14/*1898*/, 
/*2032*/      OPC_MoveParent,
/*2033*/      OPC_RecordChild2, // #1 = $src
/*2034*/      OPC_CheckChild2Type, MVT::i32,
/*2036*/      OPC_EmitMergeInputChains1_0,
/*2037*/      OPC_MorphNodeTo, TARGET_VAL(XCore::TESTWCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1898:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (TESTWCT_2r:i32 GRRegs:i32:$src)
/*2045*/    /*Scope*/ 18, /*->2064*/
/*2046*/      OPC_CheckInteger, 73|128,14/*1865*/, 
/*2049*/      OPC_MoveParent,
/*2050*/      OPC_RecordChild2, // #1 = $r
/*2051*/      OPC_CheckChild2Type, MVT::i32,
/*2053*/      OPC_CheckType, MVT::i32,
/*2055*/      OPC_EmitMergeInputChains1_0,
/*2056*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETST_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1865:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (GETST_2r:i32 GRRegs:i32:$r)
/*2064*/    /*Scope*/ 14, /*->2079*/
/*2065*/      OPC_CheckInteger, 71|128,14/*1863*/, 
/*2068*/      OPC_MoveParent,
/*2069*/      OPC_RecordChild2, // #1 = $src
/*2070*/      OPC_EmitMergeInputChains1_0,
/*2071*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETPS_l2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1863:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (GETPS_l2r:i32 GRRegs:i32:$src)
/*2079*/    /*Scope*/ 16, /*->2096*/
/*2080*/      OPC_CheckInteger, 90|128,14/*1882*/, 
/*2083*/      OPC_MoveParent,
/*2084*/      OPC_RecordChild2, // #1 = $src
/*2085*/      OPC_CheckChild2Type, MVT::i32,
/*2087*/      OPC_EmitMergeInputChains1_0,
/*2088*/      OPC_MorphNodeTo, TARGET_VAL(XCore::PEEK_l2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1882:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (PEEK_l2r:i32 GRRegs:i32:$src)
/*2096*/    /*Scope*/ 16, /*->2113*/
/*2097*/      OPC_CheckInteger, 66|128,14/*1858*/, 
/*2100*/      OPC_MoveParent,
/*2101*/      OPC_RecordChild2, // #1 = $src
/*2102*/      OPC_CheckChild2Type, MVT::i32,
/*2104*/      OPC_EmitMergeInputChains1_0,
/*2105*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ENDIN_l2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 1858:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (ENDIN_l2r:i32 GRRegs:i32:$src)
/*2113*/    /*Scope*/ 12, /*->2126*/
/*2114*/      OPC_CheckInteger, 68|128,14/*1860*/, 
/*2117*/      OPC_MoveParent,
/*2118*/      OPC_EmitMergeInputChains1_0,
/*2119*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETED_0R), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 1860:iPTR) - Complexity = 8
              // Dst: (GETED_0R:i32)
/*2126*/    /*Scope*/ 12, /*->2139*/
/*2127*/      OPC_CheckInteger, 69|128,14/*1861*/, 
/*2130*/      OPC_MoveParent,
/*2131*/      OPC_EmitMergeInputChains1_0,
/*2132*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETET_0R), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:i32 1861:iPTR) - Complexity = 8
              // Dst: (GETET_0R:i32)
/*2139*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::SUB),// ->2256
/*2143*/    OPC_Scope, 39, /*->2184*/ // 3 children in Scope
/*2145*/      OPC_RecordChild0, // #0 = $addr
/*2146*/      OPC_MoveChild, 1,
/*2148*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*2151*/      OPC_RecordChild0, // #1 = $offset
/*2152*/      OPC_MoveChild, 1,
/*2154*/      OPC_Scope, 13, /*->2169*/ // 2 children in Scope
/*2156*/        OPC_CheckInteger, 2, 
/*2158*/        OPC_MoveParent,
/*2159*/        OPC_MoveParent,
/*2160*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                // Dst: (LDAWB_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*2169*/      /*Scope*/ 13, /*->2183*/
/*2170*/        OPC_CheckInteger, 1, 
/*2172*/        OPC_MoveParent,
/*2173*/        OPC_MoveParent,
/*2174*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16B_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                // Dst: (LDA16B_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*2183*/      0, /*End of Scope*/
/*2184*/    /*Scope*/ 14, /*->2199*/
/*2185*/      OPC_MoveChild, 0,
/*2187*/      OPC_CheckInteger, 0, 
/*2189*/      OPC_MoveParent,
/*2190*/      OPC_RecordChild1, // #0 = $b
/*2191*/      OPC_MorphNodeTo, TARGET_VAL(XCore::NEG), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, GRRegs:i32:$b) - Complexity = 8
              // Dst: (NEG:i32 GRRegs:i32:$b)
/*2199*/    /*Scope*/ 55, /*->2255*/
/*2200*/      OPC_RecordChild0, // #0 = $b
/*2201*/      OPC_RecordChild1, // #1 = $c
/*2202*/      OPC_Scope, 40, /*->2244*/ // 2 children in Scope
/*2204*/        OPC_MoveChild, 1,
/*2206*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2209*/        OPC_Scope, 14, /*->2225*/ // 2 children in Scope
/*2211*/          OPC_CheckPredicate, 0, // Predicate_immUs
/*2213*/          OPC_MoveParent,
/*2214*/          OPC_EmitConvertToTarget, 1,
/*2216*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                  // Dst: (SUB_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*2225*/        /*Scope*/ 17, /*->2243*/
/*2226*/          OPC_CheckPredicate, 1, // Predicate_immUs4
/*2228*/          OPC_MoveParent,
/*2229*/          OPC_EmitConvertToTarget, 1,
/*2231*/          OPC_EmitNodeXForm, 0, 2, // div4_xform
/*2234*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                  // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*2243*/        0, /*End of Scope*/
/*2244*/      /*Scope*/ 9, /*->2254*/
/*2245*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (SUB_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2254*/      0, /*End of Scope*/
/*2255*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::AND),// ->2363
/*2259*/    OPC_Scope, 31, /*->2292*/ // 3 children in Scope
/*2261*/      OPC_RecordChild0, // #0 = $src1
/*2262*/      OPC_MoveChild, 1,
/*2264*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2267*/      OPC_RecordChild0, // #1 = $src2
/*2268*/      OPC_MoveChild, 1,
/*2270*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2281*/      OPC_MoveParent,
/*2282*/      OPC_MoveParent,
/*2283*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ANDNOT_2r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 GRRegs:i32:$src1, (xor:i32 GRRegs:i32:$src2, -1:i32)) - Complexity = 11
              // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*2292*/    /*Scope*/ 31, /*->2324*/
/*2293*/      OPC_MoveChild, 0,
/*2295*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2298*/      OPC_RecordChild0, // #0 = $src2
/*2299*/      OPC_MoveChild, 1,
/*2301*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2312*/      OPC_MoveParent,
/*2313*/      OPC_MoveParent,
/*2314*/      OPC_RecordChild1, // #1 = $src1
/*2315*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ANDNOT_2r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (and:i32 (xor:i32 GRRegs:i32:$src2, -1:i32), GRRegs:i32:$src1) - Complexity = 11
              // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*2324*/    /*Scope*/ 37, /*->2362*/
/*2325*/      OPC_RecordChild0, // #0 = $val
/*2326*/      OPC_RecordChild1, // #1 = $mask
/*2327*/      OPC_Scope, 22, /*->2351*/ // 2 children in Scope
/*2329*/        OPC_MoveChild, 1,
/*2331*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2334*/        OPC_CheckPredicate, 22, // Predicate_immMskBitp
/*2336*/        OPC_MoveParent,
/*2337*/        OPC_EmitConvertToTarget, 1,
/*2339*/        OPC_EmitNodeXForm, 4, 2, // msksize_xform
/*2342*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 GRRegs:i32:$val, (imm:i32)<<P:Predicate_immMskBitp>>:$mask) - Complexity = 7
                // Dst: (ZEXT_rus:i32 GRRegs:i32:$val, (msksize_xform:i32 (imm:i32)<<P:Predicate_immMskBitp>>:$mask))
/*2351*/      /*Scope*/ 9, /*->2361*/
/*2352*/        OPC_MorphNodeTo, TARGET_VAL(XCore::AND_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (AND_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2361*/      0, /*End of Scope*/
/*2362*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::BRIND),// ->2406
/*2366*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*2367*/    OPC_Scope, 24, /*->2393*/ // 2 children in Scope
/*2369*/      OPC_MoveChild, 1,
/*2371*/      OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),
/*2374*/      OPC_RecordNode, // #1 = 'intrinsic_w_chain' chained node
/*2375*/      OPC_CheckFoldableChainNode,
/*2376*/      OPC_MoveChild, 1,
/*2378*/      OPC_CheckInteger, 107|128,14/*1899*/, 
/*2381*/      OPC_MoveParent,
/*2382*/      OPC_MoveParent,
/*2383*/      OPC_EmitMergeInputChains, 2, 0, 1, 
/*2387*/      OPC_MorphNodeTo, TARGET_VAL(XCore::WAITEU_0R), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (brind (intrinsic_w_chain:iPTR 1899:iPTR)) - Complexity = 11
              // Dst: (WAITEU_0R)
/*2393*/    /*Scope*/ 11, /*->2405*/
/*2394*/      OPC_RecordChild1, // #1 = $addr
/*2395*/      OPC_CheckChild1Type, MVT::i32,
/*2397*/      OPC_EmitMergeInputChains1_0,
/*2398*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BAU_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind GRRegs:i32:$addr) - Complexity = 3
              // Dst: (BAU_1r GRRegs:i32:$addr)
/*2405*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 113|128,2/*369*/,  TARGET_VAL(ISD::BRCOND),// ->2779
/*2410*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*2411*/    OPC_Scope, 90|128,2/*346*/, /*->2760*/ // 2 children in Scope
/*2414*/      OPC_MoveChild, 1,
/*2416*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2419*/      OPC_RecordChild0, // #1 = $lhs
/*2420*/      OPC_Scope, 6|128,1/*134*/, /*->2557*/ // 3 children in Scope
/*2423*/        OPC_MoveChild, 1,
/*2425*/        OPC_Scope, 82, /*->2509*/ // 2 children in Scope
/*2427*/          OPC_CheckInteger, 0, 
/*2429*/          OPC_MoveParent,
/*2430*/          OPC_MoveChild, 2,
/*2432*/          OPC_Scope, 20, /*->2454*/ // 3 children in Scope
/*2434*/            OPC_CheckCondCode, ISD::SETNE,
/*2436*/            OPC_MoveParent,
/*2437*/            OPC_MoveParent,
/*2438*/            OPC_RecordChild2, // #2 = $dst
/*2439*/            OPC_MoveChild, 2,
/*2441*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2444*/            OPC_MoveParent,
/*2445*/            OPC_EmitMergeInputChains1_0,
/*2446*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*2454*/          /*Scope*/ 20, /*->2475*/
/*2455*/            OPC_CheckCondCode, ISD::SETEQ,
/*2457*/            OPC_MoveParent,
/*2458*/            OPC_MoveParent,
/*2459*/            OPC_RecordChild2, // #2 = $dst
/*2460*/            OPC_MoveChild, 2,
/*2462*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2465*/            OPC_MoveParent,
/*2466*/            OPC_EmitMergeInputChains1_0,
/*2467*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFF_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*2475*/          /*Scope*/ 32, /*->2508*/
/*2476*/            OPC_CheckCondCode, ISD::SETLT,
/*2478*/            OPC_MoveParent,
/*2479*/            OPC_MoveParent,
/*2480*/            OPC_RecordChild2, // #2 = $dst
/*2481*/            OPC_MoveChild, 2,
/*2483*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2486*/            OPC_MoveParent,
/*2487*/            OPC_EmitMergeInputChains1_0,
/*2488*/            OPC_EmitInteger, MVT::i32, 32, 
/*2491*/            OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4 
/*2500*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*2508*/          0, /*End of Scope*/
/*2509*/        /*Scope*/ 46, /*->2556*/
/*2510*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2521*/          OPC_MoveParent,
/*2522*/          OPC_MoveChild, 2,
/*2524*/          OPC_CheckCondCode, ISD::SETGT,
/*2526*/          OPC_MoveParent,
/*2527*/          OPC_MoveParent,
/*2528*/          OPC_RecordChild2, // #2 = $dst
/*2529*/          OPC_MoveChild, 2,
/*2531*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2534*/          OPC_MoveParent,
/*2535*/          OPC_EmitMergeInputChains1_0,
/*2536*/          OPC_EmitInteger, MVT::i32, 32, 
/*2539*/          OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4 
/*2548*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                  // Dst: (BRFF_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*2556*/        0, /*End of Scope*/
/*2557*/      /*Scope*/ 42, /*->2600*/
/*2558*/        OPC_RecordChild1, // #2 = $rhs
/*2559*/        OPC_MoveChild, 1,
/*2561*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2564*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*2566*/        OPC_MoveParent,
/*2567*/        OPC_MoveChild, 2,
/*2569*/        OPC_CheckCondCode, ISD::SETNE,
/*2571*/        OPC_MoveParent,
/*2572*/        OPC_MoveParent,
/*2573*/        OPC_RecordChild2, // #3 = $dst
/*2574*/        OPC_MoveChild, 2,
/*2576*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2579*/        OPC_MoveParent,
/*2580*/        OPC_EmitMergeInputChains1_0,
/*2581*/        OPC_EmitConvertToTarget, 2,
/*2583*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5 
/*2592*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 5, 3, 
                // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 10
                // Dst: (BRFF_lru6 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), (bb:Other):$dst)
/*2600*/      /*Scope*/ 29|128,1/*157*/, /*->2759*/
/*2602*/        OPC_CheckChild0Type, MVT::i32,
/*2604*/        OPC_RecordChild1, // #2 = $rhs
/*2605*/        OPC_MoveChild, 2,
/*2607*/        OPC_Scope, 29, /*->2638*/ // 5 children in Scope
/*2609*/          OPC_CheckCondCode, ISD::SETLE,
/*2611*/          OPC_MoveParent,
/*2612*/          OPC_MoveParent,
/*2613*/          OPC_RecordChild2, // #3 = $dst
/*2614*/          OPC_MoveChild, 2,
/*2616*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2619*/          OPC_MoveParent,
/*2620*/          OPC_EmitMergeInputChains1_0,
/*2621*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*2630*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2638*/        /*Scope*/ 29, /*->2668*/
/*2639*/          OPC_CheckCondCode, ISD::SETULE,
/*2641*/          OPC_MoveParent,
/*2642*/          OPC_MoveParent,
/*2643*/          OPC_RecordChild2, // #3 = $dst
/*2644*/          OPC_MoveChild, 2,
/*2646*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2649*/          OPC_MoveParent,
/*2650*/          OPC_EmitMergeInputChains1_0,
/*2651*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*2660*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2668*/        /*Scope*/ 29, /*->2698*/
/*2669*/          OPC_CheckCondCode, ISD::SETGE,
/*2671*/          OPC_MoveParent,
/*2672*/          OPC_MoveParent,
/*2673*/          OPC_RecordChild2, // #3 = $dst
/*2674*/          OPC_MoveChild, 2,
/*2676*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2679*/          OPC_MoveParent,
/*2680*/          OPC_EmitMergeInputChains1_0,
/*2681*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*2690*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2698*/        /*Scope*/ 29, /*->2728*/
/*2699*/          OPC_CheckCondCode, ISD::SETUGE,
/*2701*/          OPC_MoveParent,
/*2702*/          OPC_MoveParent,
/*2703*/          OPC_RecordChild2, // #3 = $dst
/*2704*/          OPC_MoveChild, 2,
/*2706*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2709*/          OPC_MoveParent,
/*2710*/          OPC_EmitMergeInputChains1_0,
/*2711*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*2720*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2728*/        /*Scope*/ 29, /*->2758*/
/*2729*/          OPC_CheckCondCode, ISD::SETNE,
/*2731*/          OPC_MoveParent,
/*2732*/          OPC_MoveParent,
/*2733*/          OPC_RecordChild2, // #3 = $dst
/*2734*/          OPC_MoveChild, 2,
/*2736*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2739*/          OPC_MoveParent,
/*2740*/          OPC_EmitMergeInputChains1_0,
/*2741*/          OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*2750*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2758*/        0, /*End of Scope*/
/*2759*/      0, /*End of Scope*/
/*2760*/    /*Scope*/ 17, /*->2778*/
/*2761*/      OPC_RecordChild1, // #1 = $cond
/*2762*/      OPC_RecordChild2, // #2 = $addr
/*2763*/      OPC_MoveChild, 2,
/*2765*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2768*/      OPC_MoveParent,
/*2769*/      OPC_EmitMergeInputChains1_0,
/*2770*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (brcond GRRegs:i32:$cond, (bb:Other):$addr) - Complexity = 3
              // Dst: (BRFT_lru6 GRRegs:i32:$cond, (bb:Other):$addr)
/*2778*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 89|128,2/*345*/,  TARGET_VAL(ISD::SELECT),// ->3128
/*2783*/    OPC_Scope, 69|128,2/*325*/, /*->3111*/ // 2 children in Scope
/*2786*/      OPC_MoveChild, 0,
/*2788*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2791*/      OPC_RecordChild0, // #0 = $lhs
/*2792*/      OPC_Scope, 126, /*->2920*/ // 3 children in Scope
/*2794*/        OPC_MoveChild, 1,
/*2796*/        OPC_Scope, 76, /*->2874*/ // 2 children in Scope
/*2798*/          OPC_CheckInteger, 0, 
/*2800*/          OPC_MoveParent,
/*2801*/          OPC_MoveChild, 2,
/*2803*/          OPC_Scope, 18, /*->2823*/ // 3 children in Scope
/*2805*/            OPC_CheckCondCode, ISD::SETNE,
/*2807*/            OPC_MoveParent,
/*2808*/            OPC_MoveParent,
/*2809*/            OPC_RecordChild1, // #1 = $T
/*2810*/            OPC_RecordChild2, // #2 = $F
/*2811*/            OPC_CheckType, MVT::i32,
/*2813*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$T, GRRegs:i32:$F)
/*2823*/          /*Scope*/ 18, /*->2842*/
/*2824*/            OPC_CheckCondCode, ISD::SETEQ,
/*2826*/            OPC_MoveParent,
/*2827*/            OPC_MoveParent,
/*2828*/            OPC_RecordChild1, // #1 = $T
/*2829*/            OPC_RecordChild2, // #2 = $F
/*2830*/            OPC_CheckType, MVT::i32,
/*2832*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 1, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$F, GRRegs:i32:$T)
/*2842*/          /*Scope*/ 30, /*->2873*/
/*2843*/            OPC_CheckCondCode, ISD::SETLT,
/*2845*/            OPC_MoveParent,
/*2846*/            OPC_MoveParent,
/*2847*/            OPC_RecordChild1, // #1 = $T
/*2848*/            OPC_RecordChild2, // #2 = $F
/*2849*/            OPC_CheckType, MVT::i32,
/*2851*/            OPC_EmitInteger, MVT::i32, 32, 
/*2854*/            OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*2863*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$T, GRRegs:i32:$F)
/*2873*/          0, /*End of Scope*/
/*2874*/        /*Scope*/ 44, /*->2919*/
/*2875*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2886*/          OPC_MoveParent,
/*2887*/          OPC_MoveChild, 2,
/*2889*/          OPC_CheckCondCode, ISD::SETGT,
/*2891*/          OPC_MoveParent,
/*2892*/          OPC_MoveParent,
/*2893*/          OPC_RecordChild1, // #1 = $T
/*2894*/          OPC_RecordChild2, // #2 = $F
/*2895*/          OPC_CheckType, MVT::i32,
/*2897*/          OPC_EmitInteger, MVT::i32, 32, 
/*2900*/          OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*2909*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 2, 1, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                  // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$F, GRRegs:i32:$T)
/*2919*/        0, /*End of Scope*/
/*2920*/      /*Scope*/ 40, /*->2961*/
/*2921*/        OPC_RecordChild1, // #1 = $rhs
/*2922*/        OPC_MoveChild, 1,
/*2924*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2927*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*2929*/        OPC_MoveParent,
/*2930*/        OPC_MoveChild, 2,
/*2932*/        OPC_CheckCondCode, ISD::SETNE,
/*2934*/        OPC_MoveParent,
/*2935*/        OPC_MoveParent,
/*2936*/        OPC_RecordChild1, // #2 = $T
/*2937*/        OPC_RecordChild2, // #3 = $F
/*2938*/        OPC_CheckType, MVT::i32,
/*2940*/        OPC_EmitConvertToTarget, 1,
/*2942*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*2951*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 5, 3, 2, 
                // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 10
                // Dst: (SELECT_CC:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2961*/      /*Scope*/ 19|128,1/*147*/, /*->3110*/
/*2963*/        OPC_CheckChild0Type, MVT::i32,
/*2965*/        OPC_RecordChild1, // #1 = $rhs
/*2966*/        OPC_MoveChild, 2,
/*2968*/        OPC_Scope, 27, /*->2997*/ // 5 children in Scope
/*2970*/          OPC_CheckCondCode, ISD::SETLE,
/*2972*/          OPC_MoveParent,
/*2973*/          OPC_MoveParent,
/*2974*/          OPC_RecordChild1, // #2 = $T
/*2975*/          OPC_RecordChild2, // #3 = $F
/*2976*/          OPC_CheckType, MVT::i32,
/*2978*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*2987*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2997*/        /*Scope*/ 27, /*->3025*/
/*2998*/          OPC_CheckCondCode, ISD::SETULE,
/*3000*/          OPC_MoveParent,
/*3001*/          OPC_MoveParent,
/*3002*/          OPC_RecordChild1, // #2 = $T
/*3003*/          OPC_RecordChild2, // #3 = $F
/*3004*/          OPC_CheckType, MVT::i32,
/*3006*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*3015*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3025*/        /*Scope*/ 27, /*->3053*/
/*3026*/          OPC_CheckCondCode, ISD::SETGE,
/*3028*/          OPC_MoveParent,
/*3029*/          OPC_MoveParent,
/*3030*/          OPC_RecordChild1, // #2 = $T
/*3031*/          OPC_RecordChild2, // #3 = $F
/*3032*/          OPC_CheckType, MVT::i32,
/*3034*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*3043*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3053*/        /*Scope*/ 27, /*->3081*/
/*3054*/          OPC_CheckCondCode, ISD::SETUGE,
/*3056*/          OPC_MoveParent,
/*3057*/          OPC_MoveParent,
/*3058*/          OPC_RecordChild1, // #2 = $T
/*3059*/          OPC_RecordChild2, // #3 = $F
/*3060*/          OPC_CheckType, MVT::i32,
/*3062*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*3071*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3081*/        /*Scope*/ 27, /*->3109*/
/*3082*/          OPC_CheckCondCode, ISD::SETNE,
/*3084*/          OPC_MoveParent,
/*3085*/          OPC_MoveParent,
/*3086*/          OPC_RecordChild1, // #2 = $T
/*3087*/          OPC_RecordChild2, // #3 = $F
/*3088*/          OPC_CheckType, MVT::i32,
/*3090*/          OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*3099*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*3109*/        0, /*End of Scope*/
/*3110*/      0, /*End of Scope*/
/*3111*/    /*Scope*/ 15, /*->3127*/
/*3112*/      OPC_RecordChild0, // #0 = $cond
/*3113*/      OPC_RecordChild1, // #1 = $T
/*3114*/      OPC_RecordChild2, // #2 = $F
/*3115*/      OPC_CheckType, MVT::i32,
/*3117*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (select:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 3
              // Dst: (SELECT_CC:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F)
/*3127*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->3157
/*3131*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*3132*/    OPC_CaptureGlueInput,
/*3133*/    OPC_RecordChild1, // #1 = $amt1
/*3134*/    OPC_MoveChild, 1,
/*3136*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3139*/    OPC_MoveParent,
/*3140*/    OPC_RecordChild2, // #2 = $amt2
/*3141*/    OPC_MoveChild, 2,
/*3143*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3146*/    OPC_MoveParent,
/*3147*/    OPC_EmitMergeInputChains1_0,
/*3148*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->3175
/*3160*/    OPC_RecordNode,   // #0 = $addr
/*3161*/    OPC_CheckType, MVT::i32,
/*3163*/    OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*3166*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWFI), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRspii:i32:$addr - Complexity = 9
            // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
          /*SwitchOpcode*/ 15,  TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->3193
/*3178*/    OPC_RecordNode,   // #0 = $a
/*3179*/    OPC_CheckType, MVT::i32,
/*3181*/    OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRdpii:$a #1 #2
/*3184*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWDP_lru6), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRdpii:i32:$a - Complexity = 9
            // Dst: (LDAWDP_lru6:i32 ADDRdpii:i32:$a)
          /*SwitchOpcode*/ 15,  TARGET_VAL(XCoreISD::CPRelativeWrapper),// ->3211
/*3196*/    OPC_RecordNode,   // #0 = $a
/*3197*/    OPC_CheckType, MVT::i32,
/*3199*/    OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectADDRcpii:$a #1 #2
/*3202*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRcpii:i32:$a - Complexity = 9
            // Dst: (LDAWCP_lu6:i32 ADDRcpii:i32:$a)
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::XOR),// ->3251
/*3214*/    OPC_RecordChild0, // #0 = $b
/*3215*/    OPC_Scope, 22, /*->3239*/ // 2 children in Scope
/*3217*/      OPC_MoveChild, 1,
/*3219*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3230*/      OPC_MoveParent,
/*3231*/      OPC_MorphNodeTo, TARGET_VAL(XCore::NOT), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (xor:i32 GRRegs:i32:$b, -1:i32) - Complexity = 8
              // Dst: (NOT:i32 GRRegs:i32:$b)
/*3239*/    /*Scope*/ 10, /*->3250*/
/*3240*/      OPC_RecordChild1, // #1 = $c
/*3241*/      OPC_MorphNodeTo, TARGET_VAL(XCore::XOR_l3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (XOR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3250*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67,  TARGET_VAL(ISD::MUL),// ->3321
/*3254*/    OPC_RecordChild0, // #0 = $src
/*3255*/    OPC_Scope, 52, /*->3309*/ // 2 children in Scope
/*3257*/      OPC_MoveChild, 1,
/*3259*/      OPC_Scope, 12, /*->3273*/ // 3 children in Scope
/*3261*/        OPC_CheckInteger, 3, 
/*3263*/        OPC_MoveParent,
/*3264*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 3:i32) - Complexity = 8
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3273*/      /*Scope*/ 12, /*->3286*/
/*3274*/        OPC_CheckInteger, 5, 
/*3276*/        OPC_MoveParent,
/*3277*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 5:i32) - Complexity = 8
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3286*/      /*Scope*/ 21, /*->3308*/
/*3287*/        OPC_CheckInteger, 125|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551613*/, 
/*3298*/        OPC_MoveParent,
/*3299*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, -3:i32) - Complexity = 8
                // Dst: (LDAWB_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*3308*/      0, /*End of Scope*/
/*3309*/    /*Scope*/ 10, /*->3320*/
/*3310*/      OPC_RecordChild1, // #1 = $c
/*3311*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MUL_l3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (MUL_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3320*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46|128,2/*302*/,  TARGET_VAL(ISD::SETCC),// ->3627
/*3325*/    OPC_RecordChild0, // #0 = $lhs
/*3326*/    OPC_Scope, 43, /*->3371*/ // 3 children in Scope
/*3328*/      OPC_MoveChild, 1,
/*3330*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3341*/      OPC_MoveParent,
/*3342*/      OPC_MoveChild, 2,
/*3344*/      OPC_CheckCondCode, ISD::SETGT,
/*3346*/      OPC_MoveParent,
/*3347*/      OPC_EmitInteger, MVT::i32, 32, 
/*3350*/      OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*3359*/      OPC_EmitInteger, MVT::i32, 0, 
/*3362*/      OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other) - Complexity = 8
              // Dst: (EQ_2rus:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), 0:i32)
/*3371*/    /*Scope*/ 55, /*->3427*/
/*3372*/      OPC_RecordChild1, // #1 = $rhs
/*3373*/      OPC_MoveChild, 1,
/*3375*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3378*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*3380*/      OPC_MoveParent,
/*3381*/      OPC_MoveChild, 2,
/*3383*/      OPC_Scope, 14, /*->3399*/ // 2 children in Scope
/*3385*/        OPC_CheckCondCode, ISD::SETEQ,
/*3387*/        OPC_MoveParent,
/*3388*/        OPC_EmitConvertToTarget, 1,
/*3390*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETEQ:Other) - Complexity = 7
                // Dst: (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs)
/*3399*/      /*Scope*/ 26, /*->3426*/
/*3400*/        OPC_CheckCondCode, ISD::SETNE,
/*3402*/        OPC_MoveParent,
/*3403*/        OPC_EmitConvertToTarget, 1,
/*3405*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3 
/*3414*/        OPC_EmitInteger, MVT::i32, 0, 
/*3417*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other) - Complexity = 7
                // Dst: (EQ_2rus:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), 0:i32)
/*3426*/      0, /*End of Scope*/
/*3427*/    /*Scope*/ 69|128,1/*197*/, /*->3626*/
/*3429*/      OPC_CheckChild0Type, MVT::i32,
/*3431*/      OPC_RecordChild1, // #1 = $rhs
/*3432*/      OPC_MoveChild, 2,
/*3434*/      OPC_Scope, 12, /*->3448*/ // 10 children in Scope
/*3436*/        OPC_CheckCondCode, ISD::SETGT,
/*3438*/        OPC_MoveParent,
/*3439*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGT:Other) - Complexity = 3
                // Dst: (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*3448*/      /*Scope*/ 12, /*->3461*/
/*3449*/        OPC_CheckCondCode, ISD::SETUGT,
/*3451*/        OPC_MoveParent,
/*3452*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                // Dst: (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*3461*/      /*Scope*/ 12, /*->3474*/
/*3462*/        OPC_CheckCondCode, ISD::SETLT,
/*3464*/        OPC_MoveParent,
/*3465*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLT:Other) - Complexity = 3
                // Dst: (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3474*/      /*Scope*/ 12, /*->3487*/
/*3475*/        OPC_CheckCondCode, ISD::SETULT,
/*3477*/        OPC_MoveParent,
/*3478*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULT:Other) - Complexity = 3
                // Dst: (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3487*/      /*Scope*/ 12, /*->3500*/
/*3488*/        OPC_CheckCondCode, ISD::SETEQ,
/*3490*/        OPC_MoveParent,
/*3491*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                // Dst: (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*3500*/      /*Scope*/ 24, /*->3525*/
/*3501*/        OPC_CheckCondCode, ISD::SETLE,
/*3503*/        OPC_MoveParent,
/*3504*/        OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*3513*/        OPC_EmitInteger, MVT::i32, 0, 
/*3516*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*3525*/      /*Scope*/ 24, /*->3550*/
/*3526*/        OPC_CheckCondCode, ISD::SETULE,
/*3528*/        OPC_MoveParent,
/*3529*/        OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*3538*/        OPC_EmitInteger, MVT::i32, 0, 
/*3541*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*3550*/      /*Scope*/ 24, /*->3575*/
/*3551*/        OPC_CheckCondCode, ISD::SETGE,
/*3553*/        OPC_MoveParent,
/*3554*/        OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*3563*/        OPC_EmitInteger, MVT::i32, 0, 
/*3566*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3575*/      /*Scope*/ 24, /*->3600*/
/*3576*/        OPC_CheckCondCode, ISD::SETUGE,
/*3578*/        OPC_MoveParent,
/*3579*/        OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*3588*/        OPC_EmitInteger, MVT::i32, 0, 
/*3591*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3600*/      /*Scope*/ 24, /*->3625*/
/*3601*/        OPC_CheckCondCode, ISD::SETNE,
/*3603*/        OPC_MoveParent,
/*3604*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*3613*/        OPC_EmitInteger, MVT::i32, 0, 
/*3616*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3625*/      0, /*End of Scope*/
/*3626*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SHL),// ->3664
/*3630*/    OPC_RecordChild0, // #0 = $b
/*3631*/    OPC_RecordChild1, // #1 = $c
/*3632*/    OPC_Scope, 19, /*->3653*/ // 2 children in Scope
/*3634*/      OPC_MoveChild, 1,
/*3636*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3639*/      OPC_CheckPredicate, 19, // Predicate_immBitp
/*3641*/      OPC_MoveParent,
/*3642*/      OPC_EmitConvertToTarget, 1,
/*3644*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHL_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (shl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
              // Dst: (SHL_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3653*/    /*Scope*/ 9, /*->3663*/
/*3654*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHL_3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (SHL_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3663*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SRL),// ->3701
/*3667*/    OPC_RecordChild0, // #0 = $b
/*3668*/    OPC_RecordChild1, // #1 = $c
/*3669*/    OPC_Scope, 19, /*->3690*/ // 2 children in Scope
/*3671*/      OPC_MoveChild, 1,
/*3673*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3676*/      OPC_CheckPredicate, 19, // Predicate_immBitp
/*3678*/      OPC_MoveParent,
/*3679*/      OPC_EmitConvertToTarget, 1,
/*3681*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHR_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (srl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
              // Dst: (SHR_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3690*/    /*Scope*/ 9, /*->3700*/
/*3691*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHR_3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (SHR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3700*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(XCoreISD::STWSP),// ->3746
/*3704*/    OPC_RecordNode,   // #0 = 'XCoreStwsp' chained node
/*3705*/    OPC_RecordChild1, // #1 = $val
/*3706*/    OPC_CheckChild1Type, MVT::i32,
/*3708*/    OPC_RecordChild2, // #2 = $index
/*3709*/    OPC_MoveChild, 2,
/*3711*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3714*/    OPC_Scope, 14, /*->3730*/ // 2 children in Scope
/*3716*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3718*/      OPC_MoveParent,
/*3719*/      OPC_EmitMergeInputChains1_0,
/*3720*/      OPC_EmitConvertToTarget, 2,
/*3722*/      OPC_MorphNodeTo, TARGET_VAL(XCore::STWSP_ru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (XCoreStwsp GRRegs:i32:$val, (imm:i32)<<P:Predicate_immU6>>:$index) - Complexity = 7
              // Dst: (STWSP_ru6 GRRegs:i32:$val, (imm:i32):$index)
/*3730*/    /*Scope*/ 14, /*->3745*/
/*3731*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3733*/      OPC_MoveParent,
/*3734*/      OPC_EmitMergeInputChains1_0,
/*3735*/      OPC_EmitConvertToTarget, 2,
/*3737*/      OPC_MorphNodeTo, TARGET_VAL(XCore::STWSP_lru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (XCoreStwsp GRRegs:i32:$val, (imm:i32)<<P:Predicate_immU16>>:$index) - Complexity = 7
              // Dst: (STWSP_lru6 GRRegs:i32:$val, (imm:i32):$index)
/*3745*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(XCoreISD::RETSP),// ->3791
/*3749*/    OPC_RecordNode,   // #0 = 'XCoreRetsp' chained node
/*3750*/    OPC_CaptureGlueInput,
/*3751*/    OPC_RecordChild1, // #1 = $b
/*3752*/    OPC_MoveChild, 1,
/*3754*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3757*/    OPC_CheckType, MVT::i32,
/*3759*/    OPC_Scope, 14, /*->3775*/ // 2 children in Scope
/*3761*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3763*/      OPC_MoveParent,
/*3764*/      OPC_EmitMergeInputChains1_0,
/*3765*/      OPC_EmitConvertToTarget, 1,
/*3767*/      OPC_MorphNodeTo, TARGET_VAL(XCore::RETSP_u6), 0|OPFL_Chain|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 7
              // Dst: (RETSP_u6:i32 (imm:i32):$b)
/*3775*/    /*Scope*/ 14, /*->3790*/
/*3776*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3778*/      OPC_MoveParent,
/*3779*/      OPC_EmitMergeInputChains1_0,
/*3780*/      OPC_EmitConvertToTarget, 1,
/*3782*/      OPC_MorphNodeTo, TARGET_VAL(XCore::RETSP_lu6), 0|OPFL_Chain|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 7
              // Dst: (RETSP_lu6:i32 (imm:i32):$b)
/*3790*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(XCoreISD::BL),// ->3879
/*3794*/    OPC_RecordNode,   // #0 = 'XCoreBranchLink' chained node
/*3795*/    OPC_CaptureGlueInput,
/*3796*/    OPC_RecordChild1, // #1 = $target
/*3797*/    OPC_Scope, 67, /*->3866*/ // 2 children in Scope
/*3799*/      OPC_MoveChild, 1,
/*3801*/      OPC_SwitchOpcode /*3 cases */, 34,  TARGET_VAL(ISD::Constant),// ->3839
/*3805*/        OPC_CheckType, MVT::i32,
/*3807*/        OPC_Scope, 14, /*->3823*/ // 2 children in Scope
/*3809*/          OPC_CheckPredicate, 23, // Predicate_immU10
/*3811*/          OPC_MoveParent,
/*3812*/          OPC_EmitMergeInputChains1_0,
/*3813*/          OPC_EmitConvertToTarget, 1,
/*3815*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BL_u10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (XCoreBranchLink (imm:i32)<<P:Predicate_immU10>>:$target) - Complexity = 7
                  // Dst: (BL_u10:i32 (imm:i32):$target)
/*3823*/        /*Scope*/ 14, /*->3838*/
/*3824*/          OPC_CheckPredicate, 24, // Predicate_immU20
/*3826*/          OPC_MoveParent,
/*3827*/          OPC_EmitMergeInputChains1_0,
/*3828*/          OPC_EmitConvertToTarget, 1,
/*3830*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BL_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (XCoreBranchLink (imm:i32)<<P:Predicate_immU20>>:$target) - Complexity = 7
                  // Dst: (BL_lu10:i32 (imm:i32):$target)
/*3838*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3852
/*3842*/        OPC_MoveParent,
/*3843*/        OPC_EmitMergeInputChains1_0,
/*3844*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BL_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink (tglobaladdr:iPTR):$addr) - Complexity = 6
                // Dst: (BL_lu10:i32 (tglobaladdr:i32):$addr)
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetExternalSymbol),// ->3865
/*3855*/        OPC_MoveParent,
/*3856*/        OPC_EmitMergeInputChains1_0,
/*3857*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BL_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink (texternalsym:iPTR):$addr) - Complexity = 6
                // Dst: (BL_lu10:i32 (texternalsym:i32):$addr)
              0, // EndSwitchOpcode
/*3866*/    /*Scope*/ 11, /*->3878*/
/*3867*/      OPC_CheckChild1Type, MVT::i32,
/*3869*/      OPC_EmitMergeInputChains1_0,
/*3870*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BLA_1r), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (XCoreBranchLink GRRegs:i32:$addr) - Complexity = 3
              // Dst: (BLA_1r:i32 GRRegs:i32:$addr)
/*3878*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->3899
/*3882*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*3883*/    OPC_RecordChild1, // #1 = $amt
/*3884*/    OPC_MoveChild, 1,
/*3886*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3889*/    OPC_MoveParent,
/*3890*/    OPC_EmitMergeInputChains1_0,
/*3891*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 33,  TARGET_VAL(XCoreISD::PCRelativeWrapper),// ->3935
/*3902*/    OPC_RecordChild0, // #0 = $addr
/*3903*/    OPC_MoveChild, 0,
/*3905*/    OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3920
/*3909*/      OPC_MoveParent,
/*3910*/      OPC_CheckType, MVT::i32,
/*3912*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDAP_lu10), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (pcrelwrapper:i32 (tglobaladdr:i32):$addr) - Complexity = 6
              // Dst: (LDAP_lu10:i32 (tglobaladdr:i32):$addr)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetBlockAddress),// ->3934
/*3923*/      OPC_MoveParent,
/*3924*/      OPC_CheckType, MVT::i32,
/*3926*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDAP_lu10_ba), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (pcrelwrapper:i32 (tblockaddress:i32):$addr) - Complexity = 6
              // Dst: (LDAP_lu10_ba:i32 (tblockaddress:i32):$addr)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 18,  TARGET_VAL(XCoreISD::BR_JT),// ->3956
/*3938*/    OPC_RecordNode,   // #0 = 'XCoreBR_JT' chained node
/*3939*/    OPC_RecordChild1, // #1 = $t
/*3940*/    OPC_MoveChild, 1,
/*3942*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*3945*/    OPC_MoveParent,
/*3946*/    OPC_RecordChild2, // #2 = $i
/*3947*/    OPC_EmitMergeInputChains1_0,
/*3948*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BR_JT), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (XCoreBR_JT (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
            // Dst: (BR_JT (tjumptable:i32):$t, GRRegs:i32:$i)
          /*SwitchOpcode*/ 18,  TARGET_VAL(XCoreISD::BR_JT32),// ->3977
/*3959*/    OPC_RecordNode,   // #0 = 'XCoreBR_JT32' chained node
/*3960*/    OPC_RecordChild1, // #1 = $t
/*3961*/    OPC_MoveChild, 1,
/*3963*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*3966*/    OPC_MoveParent,
/*3967*/    OPC_RecordChild2, // #2 = $i
/*3968*/    OPC_EmitMergeInputChains1_0,
/*3969*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BR_JT32), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (XCoreBR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
            // Dst: (BR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i)
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::Constant),// ->4009
/*3980*/    OPC_RecordNode,   // #0 = $b
/*3981*/    OPC_Scope, 12, /*->3995*/ // 2 children in Scope
/*3983*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3985*/      OPC_EmitConvertToTarget, 0,
/*3987*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDC_ru6), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:i32)<<P:Predicate_immU6>>:$b - Complexity = 4
              // Dst: (LDC_ru6:i32 (imm:i32):$b)
/*3995*/    /*Scope*/ 12, /*->4008*/
/*3996*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3998*/      OPC_EmitConvertToTarget, 0,
/*4000*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDC_lru6), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:i32)<<P:Predicate_immU16>>:$b - Complexity = 4
              // Dst: (LDC_lru6:i32 (imm:i32):$b)
/*4008*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::OR),// ->4023
/*4012*/    OPC_RecordChild0, // #0 = $b
/*4013*/    OPC_RecordChild1, // #1 = $c
/*4014*/    OPC_MorphNodeTo, TARGET_VAL(XCore::OR_3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (or:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (OR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SDIV),// ->4037
/*4026*/    OPC_RecordChild0, // #0 = $b
/*4027*/    OPC_RecordChild1, // #1 = $c
/*4028*/    OPC_MorphNodeTo, TARGET_VAL(XCore::DIVS_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (sdiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (DIVS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::UDIV),// ->4051
/*4040*/    OPC_RecordChild0, // #0 = $b
/*4041*/    OPC_RecordChild1, // #1 = $c
/*4042*/    OPC_MorphNodeTo, TARGET_VAL(XCore::DIVU_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (udiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (DIVU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SREM),// ->4065
/*4054*/    OPC_RecordChild0, // #0 = $b
/*4055*/    OPC_RecordChild1, // #1 = $c
/*4056*/    OPC_MorphNodeTo, TARGET_VAL(XCore::REMS_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (srem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (REMS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::UREM),// ->4079
/*4068*/    OPC_RecordChild0, // #0 = $b
/*4069*/    OPC_RecordChild1, // #1 = $c
/*4070*/    OPC_MorphNodeTo, TARGET_VAL(XCore::REMU_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (urem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (REMU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::BSWAP),// ->4091
/*4082*/    OPC_RecordChild0, // #0 = $src
/*4083*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BYTEREV_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (bswap:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (BYTEREV_l2r:i32 GRRegs:i32:$src)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::CTLZ),// ->4103
/*4094*/    OPC_RecordChild0, // #0 = $src
/*4095*/    OPC_MorphNodeTo, TARGET_VAL(XCore::CLZ_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (ctlz:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (CLZ_l2r:i32 GRRegs:i32:$src)
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->4159
/*4106*/    OPC_RecordChild0, // #0 = $b
/*4107*/    OPC_MoveChild, 1,
/*4109*/    OPC_Scope, 15, /*->4126*/ // 3 children in Scope
/*4111*/      OPC_CheckValueType, MVT::i1,
/*4113*/      OPC_MoveParent,
/*4114*/      OPC_EmitInteger, MVT::i32, 1, 
/*4117*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i1:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 1:i32)
/*4126*/    /*Scope*/ 15, /*->4142*/
/*4127*/      OPC_CheckValueType, MVT::i8,
/*4129*/      OPC_MoveParent,
/*4130*/      OPC_EmitInteger, MVT::i32, 8, 
/*4133*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i8:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 8:i32)
/*4142*/    /*Scope*/ 15, /*->4158*/
/*4143*/      OPC_CheckValueType, MVT::i16,
/*4145*/      OPC_MoveParent,
/*4146*/      OPC_EmitInteger, MVT::i32, 16, 
/*4149*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i16:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 16:i32)
/*4158*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->4178
/*4162*/    OPC_RecordNode,   // #0 = 'br' chained node
/*4163*/    OPC_RecordChild1, // #1 = $addr
/*4164*/    OPC_MoveChild, 1,
/*4166*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*4169*/    OPC_MoveParent,
/*4170*/    OPC_EmitMergeInputChains1_0,
/*4171*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BRFU_lu6), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$addr) - Complexity = 3
            // Dst: (BRFU_lu6 (bb:Other):$addr)
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CTTZ),// ->4198
/*4181*/    OPC_RecordChild0, // #0 = $src
/*4182*/    OPC_EmitNode, TARGET_VAL(XCore::BITREV_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1 
/*4190*/    OPC_MorphNodeTo, TARGET_VAL(XCore::CLZ_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (cttz:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (CLZ_l2r:i32 (BITREV_l2r:i32 GRRegs:i32:$src))
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::TRAP),// ->4221
/*4201*/    OPC_RecordNode,   // #0 = 'trap' chained node
/*4202*/    OPC_EmitMergeInputChains1_0,
/*4203*/    OPC_EmitInteger, MVT::i32, 0, 
/*4206*/    OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2 
/*4214*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ECALLF_1r), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (trap) - Complexity = 3
            // Dst: (ECALLF_1r (LDC_ru6:i32 0:i32))
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 4223 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 70
  // #OPC_RecordNode                     = 21
  // #OPC_RecordChild                    = 190
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 3
  // #OPC_MoveChild                      = 94
  // #OPC_MoveParent                     = 220
  // #OPC_CheckSame                      = 1
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 89
  // #OPC_CheckOpcode                    = 57
  // #OPC_SwitchOpcode                   = 3
  // #OPC_CheckType                      = 41
  // #OPC_SwitchType                     = 0
  // #OPC_CheckChildType                 = 54
  // #OPC_CheckInteger                   = 78
  // #OPC_CheckCondCode                  = 33
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 10
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 1
  // #OPC_EmitInteger                    = 25
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 36
  // #OPC_EmitMergeInputChains           = 104
  // #OPC_EmitCopyToReg                  = 2
  // #OPC_EmitNode                       = 31
  // #OPC_EmitNodeXForm                  = 8
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 190

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { // Predicate_immUs
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() <= 11;

  }
  case 1: { // Predicate_immUs4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return value%4 == 0 && value/4 <= 11;

  }
  case 2: { // Predicate_immUsNeg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return -((uint32_t)N->getZExtValue()) <= 11;

  }
  case 3: { // Predicate_immUs4Neg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (-value)%4 == 0 && (-value)/4 <= 11;

  }
  case 4: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 8: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 11: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 14: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 15: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 16: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 17: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 18: { // Predicate_immBpwSubBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 24 && value <= 31)
          || value == 16
          || value == 8
          || value == 0;

  }
  case 19: { // Predicate_immBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 1 && value <= 8)
          || value == 16
          || value == 24
          || value == 32;

  }
  case 20: { // Predicate_immU6
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 6);

  }
  case 21: { // Predicate_immU16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 16);

  }
  case 22: { // Predicate_immMskBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return immMskBitp(N); 
  }
  case 23: { // Predicate_immU10
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 10);

  }
  case 24: { // Predicate_immU20
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 20);

  }
  }
}

bool CheckComplexPattern(SDNode *Root, SDNode *Parent, SDValue N,
                         unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectADDRspii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRdpii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectADDRcpii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // div4_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: imm/4
  assert(N->getZExtValue() % 4 == 0);
  return getI32Imm(N->getZExtValue()/4);

  }
  case 1: {  // neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(-value);

  }
  case 2: {  // div4neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm/4
  uint32_t value = N->getZExtValue();
  assert(-value % 4 == 0);
  return getI32Imm(-value/4);

  }
  case 3: {  // bpwsub_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32-imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(32-value);

  }
  case 4: {  // msksize_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the size of a mask
  assert(isMask_32(N->getZExtValue()));
  // look for the first non-zero bit
  return getI32Imm(32 - CountLeadingZeros_32(N->getZExtValue()));

  }
  }
}

