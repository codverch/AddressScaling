/// @file include-private/xed-ild-imm-bytes.h

// This file was automatically generated.
// Do not edit this file.

#if !defined(INCLUDE_PRIVATE_XED_ILD_IMM_BYTES_H)
# define INCLUDE_PRIVATE_XED_ILD_IMM_BYTES_H
/*BEGIN_LEGAL

Copyright (c) 2018 Intel Corporation

  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at

      http://www.apache.org/licenses/LICENSE-2.0

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
  
END_LEGAL */
#include "xed-internal-header.h"
#include "xed-ild-imm-l1.h"
#include "xed-ild-private.h"
#include "xed-operand-accessors.h"
const xed_ild_l1_func_t imm_width_map_0x0[256] = {
/*opcode 0x0*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x2*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x5*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0x6*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xc*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xd*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0xe*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf*/ (xed_ild_l1_func_t)0,
/*opcode 0x10*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x11*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x12*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x13*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x14*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x15*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0x16*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x17*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x18*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x19*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1c*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x1d*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0x1e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x20*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x21*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x22*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x23*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x24*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x25*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0x26*/ (xed_ild_l1_func_t)0,
/*opcode 0x27*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x28*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x29*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x2a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x2b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x2c*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x2d*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0x2e*/ (xed_ild_l1_func_t)0,
/*opcode 0x2f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x30*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x31*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x32*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x33*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x34*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x35*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0x36*/ (xed_ild_l1_func_t)0,
/*opcode 0x37*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x38*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x39*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x3a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x3b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x3c*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x3d*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0x3e*/ (xed_ild_l1_func_t)0,
/*opcode 0x3f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x40*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x41*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x42*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x43*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x44*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x45*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x46*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x47*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x48*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x49*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x50*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x51*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x52*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x53*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x54*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x55*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x56*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x57*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x58*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x59*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x60*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x61*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x62*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x63*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x64*/ (xed_ild_l1_func_t)0,
/*opcode 0x65*/ (xed_ild_l1_func_t)0,
/*opcode 0x66*/ (xed_ild_l1_func_t)0,
/*opcode 0x67*/ (xed_ild_l1_func_t)0,
/*opcode 0x68*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_DF64_EOSZ_l2,
/*opcode 0x69*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0x6a*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x6b*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x6c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x6d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x6e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x6f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x70*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x71*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x72*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x73*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x74*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x75*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x76*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x77*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x78*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x79*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x80*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x81*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0x82*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x83*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x84*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x85*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x86*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x87*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x88*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x89*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x90*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x91*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x92*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x93*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x94*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x95*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x96*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x97*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x98*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x99*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9a*/ xed_lookup_function_UIMM16_IMM_WIDTH_CONST_l2,
/*opcode 0x9b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa0*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa2*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa4*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa5*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa6*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa7*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa8*/ xed_lookup_function_SIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xa9*/ xed_lookup_function_SIMMz_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0xaa*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xab*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xac*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xad*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xae*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xaf*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb0*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xb1*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xb2*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xb3*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xb4*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xb5*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xb6*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xb7*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xb8*/ xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0xb9*/ xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0xba*/ xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0xbb*/ xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0xbc*/ xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0xbd*/ xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0xbe*/ xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0xbf*/ xed_lookup_function_UIMMv_IMM_WIDTH_OSZ_NONTERM_EOSZ_l2,
/*opcode 0xc0*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xc1*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xc2*/ xed_lookup_function_UIMM16_IMM_WIDTH_CONST_l2,
/*opcode 0xc3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xc4*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xc5*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xc6*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xc7*/ xed_lookup_function_RESOLVE_BYREG_IMM_WIDTH_map0x0_op0xc7_l1,
/*opcode 0xc8*/ xed_ild_hasimm_map0x0_op0xc8_l1,
/*opcode 0xc9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xca*/ xed_lookup_function_UIMM16_IMM_WIDTH_CONST_l2,
/*opcode 0xcb*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xcc*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xcd*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xce*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xcf*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd0*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd2*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd4*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xd5*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xd6*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd7*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd8*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xda*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xdb*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xdc*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xdd*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xde*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xdf*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe0*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe2*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe4*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xe5*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xe6*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xe7*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xe8*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xea*/ xed_lookup_function_UIMM16_IMM_WIDTH_CONST_l2,
/*opcode 0xeb*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xec*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xed*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xee*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xef*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf0*/ (xed_ild_l1_func_t)0,
/*opcode 0xf1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf2*/ (xed_ild_l1_func_t)0,
/*opcode 0xf3*/ (xed_ild_l1_func_t)0,
/*opcode 0xf4*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf5*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf6*/ xed_lookup_function_RESOLVE_BYREG_IMM_WIDTH_map0x0_op0xf6_l1,
/*opcode 0xf7*/ xed_lookup_function_RESOLVE_BYREG_IMM_WIDTH_map0x0_op0xf7_l1,
/*opcode 0xf8*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xfa*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xfb*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xfc*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xfd*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xfe*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xff*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
};
const xed_ild_l1_func_t imm_width_map_0x0F[256] = {
/*opcode 0x0*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x2*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4*/ (xed_ild_l1_func_t)0,
/*opcode 0x5*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x6*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa*/ (xed_ild_l1_func_t)0,
/*opcode 0xb*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xc*/ (xed_ild_l1_func_t)0,
/*opcode 0xd*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf*/ (xed_ild_l1_func_t)0,
/*opcode 0x10*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x11*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x12*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x13*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x14*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x15*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x16*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x17*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x18*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x19*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x1f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x20*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x21*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x22*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x23*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x24*/ (xed_ild_l1_func_t)0,
/*opcode 0x25*/ (xed_ild_l1_func_t)0,
/*opcode 0x26*/ (xed_ild_l1_func_t)0,
/*opcode 0x27*/ (xed_ild_l1_func_t)0,
/*opcode 0x28*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x29*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x2a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x2b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x2c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x2d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x2e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x2f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x30*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x31*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x32*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x33*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x34*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x35*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x36*/ (xed_ild_l1_func_t)0,
/*opcode 0x37*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x38*/ (xed_ild_l1_func_t)0,
/*opcode 0x39*/ (xed_ild_l1_func_t)0,
/*opcode 0x3a*/ (xed_ild_l1_func_t)0,
/*opcode 0x3b*/ (xed_ild_l1_func_t)0,
/*opcode 0x3c*/ (xed_ild_l1_func_t)0,
/*opcode 0x3d*/ (xed_ild_l1_func_t)0,
/*opcode 0x3e*/ (xed_ild_l1_func_t)0,
/*opcode 0x3f*/ (xed_ild_l1_func_t)0,
/*opcode 0x40*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x41*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x42*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x43*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x44*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x45*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x46*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x47*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x48*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x49*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x4f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x50*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x51*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x52*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x53*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x54*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x55*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x56*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x57*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x58*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x59*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x5f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x60*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x61*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x62*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x63*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x64*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x65*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x66*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x67*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x68*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x69*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x6a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x6b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x6c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x6d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x6e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x6f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x70*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x71*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x72*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x73*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0x74*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x75*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x76*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x77*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x78*/ xed_ild_hasimm_map0x0F_op0x78_l1,
/*opcode 0x79*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x7f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x80*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x81*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x82*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x83*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x84*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x85*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x86*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x87*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x88*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x89*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x8f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x90*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x91*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x92*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x93*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x94*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x95*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x96*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x97*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x98*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x99*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9a*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9b*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9c*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9d*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9e*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0x9f*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa0*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa2*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa4*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xa5*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa6*/ (xed_ild_l1_func_t)0,
/*opcode 0xa7*/ (xed_ild_l1_func_t)0,
/*opcode 0xa8*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xa9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xaa*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xab*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xac*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xad*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xae*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xaf*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb0*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb2*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb4*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb5*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb6*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb7*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb8*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xb9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xba*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xbb*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xbc*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xbd*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xbe*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xbf*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xc0*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xc1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xc2*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xc3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xc4*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xc5*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xc6*/ xed_lookup_function_UIMM8_IMM_WIDTH_CONST_l2,
/*opcode 0xc7*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xc8*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xc9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xca*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xcb*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xcc*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xcd*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xce*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xcf*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd0*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd2*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd4*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd5*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd6*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd7*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd8*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xd9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xda*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xdb*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xdc*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xdd*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xde*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xdf*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe0*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe2*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe4*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe5*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe6*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe7*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe8*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xe9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xea*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xeb*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xec*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xed*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xee*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xef*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf0*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf1*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf2*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf3*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf4*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf5*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf6*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf7*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf8*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xf9*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xfa*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xfb*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xfc*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xfd*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xfe*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
/*opcode 0xff*/ xed_lookup_function_0_IMM_WIDTH_CONST_l2,
};
#endif
