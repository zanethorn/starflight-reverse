
#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"

#include"../overlays/DPART-OV.h"
#include"../overlays/CHKFLIGHT-OV.h"
#include"../overlays/FRACT-OV.h"
#include"../overlays/ICONP-OV.h"
#include"../overlays/SITE-OV.h"
#include"../overlays/HYPERMSG-OV.h"
#include"../overlays/BLT-OV.h"
#include"../overlays/MISC-OV.h"
#include"../overlays/BANK-OV.h"
#include"../overlays/ASSCREW-OV.h"
#include"../overlays/PERSONNEL-OV.h"
#include"../overlays/SHIPGRPH-OV.h"
#include"../overlays/CONFIG-OV.h"
#include"../overlays/TDEPOT-OV.h"
#include"../overlays/PORTMENU-OV.h"
#include"../overlays/VITA-OV.h"
#include"../overlays/HP-OV.h"
#include"../overlays/LP-OV.h"
#include"../overlays/SENT-OV.h"
#include"../overlays/TV-OV.h"
#include"../overlays/COMM-OV.h"
#include"../overlays/COMMSPEC-OV.h"
#include"../overlays/SEED-OV.h"
#include"../overlays/LISTICONS.h"
#include"../overlays/MOVE-OV.h"
#include"../overlays/ENGINEER.h"
#include"../overlays/DOCTOR.h"
#include"../overlays/ORBIT-OV.h"
#include"../overlays/CAPTAIN.h"
#include"../overlays/SCIENCE.h"
#include"../overlays/NAVIGATR.h"
#include"../overlays/SHIPBUTTONS.h"
#include"../overlays/MAP-OV.h"
#include"../overlays/HYPER-OV.h"
#include"../overlays/ANALYZE-OV.h"
#include"../overlays/LAUNCH-OV.h"
#include"../overlays/FLUX-EFFECT.h"
#include"../overlays/OP-OV.h"
#include"../overlays/ITEMS-OV.h"
#include"../overlays/BEHAV-OV.h"
#include"../overlays/HEAL-OV.h"
#include"../overlays/REPAIR-OV.h"
#include"../overlays/GAME-OV.h"
#include"../overlays/PLSET-OV.h"
#include"../overlays/MAPS-OV.h"
#include"../overlays/STORM-OV.h"
#include"../overlays/IT-OV.h"
#include"../overlays/COMBAT-OV.h"
#include"../overlays/DAMAGE-OV.h"
#include"../overlays/LAND-OV.h"
#include"../overlays/MUSIC.h"
#include"../overlays/STP-OV.h"

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc_IHEADLEN; // IHEADLEN
extern const unsigned short int cc_END_dash_CX; // END-CX
extern const unsigned short int cc_END_dash_V; // END-V
extern const unsigned short int pp_FILE_n_; // FILE#
extern const unsigned short int pp_RECORD_n_; // RECORD#
extern const unsigned short int pp_CXSP; // CXSP
extern const unsigned short int pp_VSP; // VSP
extern const unsigned short int pp__i_THROW_dash_AWAY; // 'THROW-AWAY
extern const unsigned short int pp__i_MAP; // 'MAP
extern const unsigned short int pp__i_TRAVERS; // 'TRAVERS
extern const unsigned short int pp__i__ask_EXIT; // '?EXIT
extern const unsigned short int pp__i__ask_CHOICE; // '?CHOICE
extern const unsigned short int pp_QTYINST; // QTYINST
extern const unsigned short int pp_IsREUSE; // ?REUSE
extern const unsigned short int pp_IsRECYCLED; // ?RECYCLED
extern const unsigned short int pp_W6162; // W6162
extern const unsigned short int pp_CXS; // CXS
extern const unsigned short int pp_IBFR; // IBFR
void M_plus_(); // M+
void D_st_(); // D<
void SAVE_dash_BUFFERS2(); // SAVE-BUFFERS2
void EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
void IsUNRAVEL(); // ?UNRAVEL
void PICK(); // PICK
void D_eq_(); // D=
void INIT(); // INIT
void C_ex_(); // C!
void Store_3(); // !_3
void _1_dot_5_ex_(); // 1.5!
void FILL_1(); // FILL_1
void VA_gt_BUF(); // VA>BUF
void StoreINST_dash_SIB(); // !INST-SIB
void StoreINST_dash_PREV(); // !INST-PREV
void StoreINST_dash_OFF(); // !INST-OFF
void StoreINST_dash_CLASS(); // !INST-CLASS
void StoreINST_dash_SPECIES(); // !INST-SPECIES
void GetINST_dash_SIB(); // @INST-SIB
void GetINST_dash_PREV(); // @INST-PREV
void GetINST_dash_OFF(); // @INST-OFF
void GetINST_dash_CLASS(); // @INST-CLASS
void GetINST_dash_SPECIES(); // @INST-SPECIES
void CDROP(); // CDROP
void CI_i_(); // CI'
void COVER(); // COVER
void IsNULL(); // ?NULL
void Is_dash_NULL(); // ?-NULL
void IsCHILD(); // ?CHILD
void IsONLY(); // ?ONLY
void ICACHE_gt_IBFR(); // ICACHE>IBFR
void POINT_gt_I(); // POINT>I
void W7720(); // W7720
void IsUPDATE_gt_CACHE(); // ?UPDATE>CACHE
void IsUPD_gt_DISK(); // ?UPD>DISK
void DISK_gt_IBFR(); // DISK>IBFR
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _st_(); // <
void _0_gt_(); // 0>
void EXECUTE(); // EXECUTE
void GetEXECUTE(); // @EXECUTE
void ON_2(); // ON_2
void OFF_2(); // OFF_2
void _1_dot_5_at_(); // 1.5@
void _st__ex__gt_(); // <!>
void _st_1_dot_5_ex__gt_(); // <1.5!>
void VA_gt_BLK(); // VA>BLK
void _gt_C(); // >C
void CI(); // CI
void CDEPTH(); // CDEPTH
void PRIORITIZE(); // PRIORITIZE
void _gt_V(); // >V
void V_gt_(); // V>
void VI(); // VI


// =================================
// =========== VARIABLES ===========
// =================================




// ================================================
// 0x7980: WORD 'SET-CURRENT' codep=0x224c wordp=0x798c params=0 returns=0
// ================================================

void SET_dash_CURRENT() // SET-CURRENT
{
  CDEPTH(); // CDEPTH
  _0_gt_(); // 0>
  if (Pop() == 0) return;
  IsUPDATE_gt_CACHE(); // ?UPDATE>CACHE
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  CI(); // CI
  W7720(); // W7720
  if (Pop() != 0)
  {
    PRIORITIZE(); // PRIORITIZE
    POINT_gt_I(); // POINT>I
    ICACHE_gt_IBFR(); // ICACHE>IBFR
  } else
  {
    CI(); // CI
    DISK_gt_IBFR(); // DISK>IBFR
  }
  GetINST_dash_CLASS(); // @INST-CLASS
  Push(pp_FILE_n_); // FILE#
  _st__ex__gt_(); // <!>
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push(pp_RECORD_n_); // RECORD#
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x79c0: WORD 'ICLOSE' codep=0x224c wordp=0x79cb params=0 returns=0
// ================================================

void ICLOSE() // ICLOSE
{
  IsUPDATE_gt_CACHE(); // ?UPDATE>CACHE
  CDROP(); // CDROP
  COVER(); // COVER
  Is_dash_NULL(); // ?-NULL
  if (Pop() != 0)
  {
    SET_dash_CURRENT(); // SET-CURRENT
    GetINST_dash_OFF(); // @INST-OFF
  } else
  {
    Push2Words("NULL");
  }
  Push(pp_W6162); // W6162
  _st_1_dot_5_ex__gt_(); // <1.5!>
  CDROP(); // CDROP
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0x79eb: WORD '>C+S' codep=0x224c wordp=0x79f4 params=2 returns=0
// ================================================

void _gt_C_plus_S() // >C+S
{
  _gt_C(); // >C
  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0x79fa: WORD '@>C+S' codep=0x224c wordp=0x7a04 params=1 returns=0
// ================================================

void Get_gt_C_plus_S() // @>C+S
{
  _1_dot_5_at_(); // 1.5@
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a0a: WORD 'IOPEN' codep=0x224c wordp=0x7a14 params=0 returns=0
// ================================================

void IOPEN() // IOPEN
{
  GetINST_dash_OFF(); // @INST-OFF
  _2DUP(); // 2DUP
  Push(pp_W6162); // W6162
  _st_1_dot_5_ex__gt_(); // <1.5!>
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a20: WORD 'CCLR' codep=0x224c wordp=0x7a29 params=0 returns=0
// ================================================

void CCLR() // CCLR
{
  IsUPDATE_gt_CACHE(); // ?UPDATE>CACHE
  Push(Read16(cc_END_dash_CX)); // END-CX
  Push(pp_CXSP); // CXSP
  _st__ex__gt_(); // <!>
  Push(pp_CXS); // CXS
  Push(0x0078);
  Push(0);
  FILL_1(); // FILL_1
}


// ================================================
// 0x7a3d: WORD '1STCHILD' codep=0x224c wordp=0x7a3f params=0 returns=2
// ================================================

void _1STCHILD() // 1STCHILD
{
  Push(pp_W6162); // W6162
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7a45: WORD '?LAST' codep=0x224c wordp=0x7a4f params=0 returns=1
// ================================================

void IsLAST() // ?LAST
{
  GetINST_dash_SIB(); // @INST-SIB
  _1STCHILD(); // 1STCHILD
  D_eq_(); // D=
}


// ================================================
// 0x7a57: WORD '?FIRST' codep=0x224c wordp=0x7a62 params=0 returns=1
// ================================================

void IsFIRST() // ?FIRST
{
  CI(); // CI
  _1STCHILD(); // 1STCHILD
  D_eq_(); // D=
}


// ================================================
// 0x7a6a: WORD '>C+' codep=0x224c wordp=0x7a72 params=2 returns=0
// ================================================

void _gt_C_plus_() // >C+
{
  SET_dash_CURRENT(); // SET-CURRENT
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C(); // >C
}


// ================================================
// 0x7a7c: WORD 'INEXT' codep=0x224c wordp=0x7a86 params=0 returns=0
// ================================================

void INEXT() // INEXT
{
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  GetINST_dash_SIB(); // @INST-SIB
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7a94: WORD 'IPREV' codep=0x224c wordp=0x7a9e params=0 returns=0
// ================================================

void IPREV() // IPREV
{
  Is_dash_NULL(); // ?-NULL
  if (Pop() == 0) return;
  GetINST_dash_PREV(); // @INST-PREV
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7aac: WORD 'IFIRST' codep=0x224c wordp=0x7ab7 params=0 returns=0
// ================================================

void IFIRST() // IFIRST
{
  CDROP(); // CDROP
  _1STCHILD(); // 1STCHILD
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0x7abf: WORD 'ILAST' codep=0x224c wordp=0x7ac9 params=0 returns=0
// ================================================

void ILAST() // ILAST
{
  IFIRST(); // IFIRST
  IPREV(); // IPREV
}


// ================================================
// 0x7acf: WORD 'VCLR' codep=0x224c wordp=0x7ad8 params=0 returns=0
// ================================================

void VCLR() // VCLR
{
  Push(Read16(cc_END_dash_V)); // END-V
  Push(pp_VSP); // VSP
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7ae0: WORD '>V' codep=0x7ae7 wordp=0x7ae7 params=1 returns=0
// ================================================
// 0x7ae7: mov    bx,[54B4] // VSP
// 0x7aeb: pop    word ptr [bx]
// 0x7aed: sub    word ptr [54B4],02 // VSP
// 0x7af2: lodsw
// 0x7af3: mov    bx,ax
// 0x7af5: jmp    word ptr [bx]

// ================================================
// 0x7af7: WORD 'V>' codep=0x7afe wordp=0x7afe params=0 returns=1
// ================================================
// 0x7afe: add    word ptr [54B4],02 // VSP
// 0x7b03: mov    bx,[54B4] // VSP
// 0x7b07: push   word ptr [bx]
// 0x7b09: lodsw
// 0x7b0a: mov    bx,ax
// 0x7b0c: jmp    word ptr [bx]

// ================================================
// 0x7b0e: WORD 'VI' codep=0x7b15 wordp=0x7b15 params=0 returns=1
// ================================================
// 0x7b15: mov    bx,[54B4] // VSP
// 0x7b19: push   word ptr [bx+02]
// 0x7b1c: lodsw
// 0x7b1d: mov    bx,ax
// 0x7b1f: jmp    word ptr [bx]

// ================================================
// 0x7b21: WORD 'IC>DSK' codep=0x224c wordp=0x7b23 params=0 returns=0
// ================================================
// orphan

void IC_gt_DSK() // IC>DSK
{
  unsigned short int i, imax;
  IsUPDATE_gt_CACHE(); // ?UPDATE>CACHE
  Push(Read16(pp_QTYINST)); // QTYINST @
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;

  i = 0;
  imax = Pop();
  do // (DO)
  {
    Push(i * 2); // I 2*
    POINT_gt_I(); // POINT>I
    IsUPD_gt_DISK(); // ?UPD>DISK
    i++;
  } while(i<imax); // (LOOP)

  SET_dash_CURRENT(); // SET-CURRENT
}


// ================================================
// 0x7b43: WORD 'SAVE-BUFFERS' codep=0x224c wordp=0x7b4f params=0 returns=0
// ================================================

void SAVE_dash_BUFFERS() // SAVE-BUFFERS
{
  SAVE_dash_BUFFERS2(); // SAVE-BUFFERS2
  INIT(); // INIT
}


// ================================================
// 0x7b55: WORD 'FLUSH_2' codep=0x224c wordp=0x7b5f params=0 returns=0
// ================================================

void FLUSH_2() // FLUSH_2
{
  SAVE_dash_BUFFERS(); // SAVE-BUFFERS
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
}


// ================================================
// 0x7b65: WORD 'IINSERT' codep=0x224c wordp=0x7b71 params=4 returns=0
// ================================================

void IINSERT() // IINSERT
{
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    GetINST_dash_OFF(); // @INST-OFF
    _2SWAP(); // 2SWAP
    StoreINST_dash_OFF(); // !INST-OFF
    IOPEN(); // IOPEN
    StoreINST_dash_SIB(); // !INST-SIB
    CI(); // CI
    INEXT(); // INEXT
    GetINST_dash_PREV(); // @INST-PREV
    _2SWAP(); // 2SWAP
    StoreINST_dash_PREV(); // !INST-PREV
    IPREV(); // IPREV
    StoreINST_dash_PREV(); // !INST-PREV
    CI(); // CI
    IPREV(); // IPREV
    StoreINST_dash_SIB(); // !INST-SIB
  } else
  {
    StoreINST_dash_OFF(); // !INST-OFF
    IOPEN(); // IOPEN
    CI(); // CI
    StoreINST_dash_SIB(); // !INST-SIB
    CI(); // CI
    StoreINST_dash_PREV(); // !INST-PREV
  }
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7bad: WORD '<INSERT' codep=0x224c wordp=0x7bb9 params=4 returns=0
// ================================================

void _st_INSERT() // <INSERT
{
  _gt_C_plus_S(); // >C+S
  GetINST_dash_PREV(); // @INST-PREV
  _2SWAP(); // 2SWAP
  StoreINST_dash_PREV(); // !INST-PREV
  CI(); // CI
  IPREV(); // IPREV
  StoreINST_dash_SIB(); // !INST-SIB
  StoreINST_dash_PREV(); // !INST-PREV
  CI(); // CI
  IPREV(); // IPREV
  StoreINST_dash_SIB(); // !INST-SIB
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7bd3: WORD '>INSERT' codep=0x224c wordp=0x7bdf params=4 returns=0
// ================================================

void _gt_INSERT() // >INSERT
{
  _gt_C_plus_S(); // >C+S
  GetINST_dash_SIB(); // @INST-SIB
  ICLOSE(); // ICLOSE
  _st_INSERT(); // <INSERT
}


// ================================================
// 0x7be9: WORD 'IEXTRACT' codep=0x224c wordp=0x7bf5 params=0 returns=2
// ================================================

void IEXTRACT() // IEXTRACT
{
  CI(); // CI
  IsONLY(); // ?ONLY
  if (Pop() != 0)
  {
    ICLOSE(); // ICLOSE
    Push2Words("NULL");
    StoreINST_dash_OFF(); // !INST-OFF
    IOPEN(); // IOPEN
    return;
  }
  IsFIRST(); // ?FIRST
  if (Pop() != 0)
  {
    GetINST_dash_PREV(); // @INST-PREV
    GetINST_dash_SIB(); // @INST-SIB
    ICLOSE(); // ICLOSE
    StoreINST_dash_OFF(); // !INST-OFF
    IOPEN(); // IOPEN
    StoreINST_dash_PREV(); // !INST-PREV
    CI(); // CI
    IPREV(); // IPREV
    StoreINST_dash_SIB(); // !INST-SIB
    INEXT(); // INEXT
    return;
  }
  GetINST_dash_SIB(); // @INST-SIB
  IPREV(); // IPREV
  StoreINST_dash_SIB(); // !INST-SIB
  CI(); // CI
  INEXT(); // INEXT
  StoreINST_dash_PREV(); // !INST-PREV
}


// ================================================
// 0x7c35: WORD 'NEWSPACE' codep=0x224c wordp=0x7c37 params=0 returns=2
// ================================================

void NEWSPACE() // NEWSPACE
{
  Push2Words("VANEWSPACE");
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x7c3d: WORD '@NEWSPACE' codep=0x224c wordp=0x7c49 params=0 returns=3
// ================================================

void GetNEWSPACE() // @NEWSPACE
{
  NEWSPACE(); // NEWSPACE
  _1_dot_5_at_(); // 1.5@
}


// ================================================
// 0x7c4f: WORD '!NEWSPACE' codep=0x224c wordp=0x7c5b params=1 returns=0
// ================================================

void StoreNEWSPACE() // !NEWSPACE
{
  NEWSPACE(); // NEWSPACE
  _1_dot_5_ex_(); // 1.5!
}


// ================================================
// 0x7c61: WORD '+!NEWSPACE' codep=0x224c wordp=0x7c63 params=0 returns=1
// ================================================

void _plus__ex_NEWSPACE() // +!NEWSPACE
{
  GetNEWSPACE(); // @NEWSPACE
  ROT(); // ROT
  M_plus_(); // M+
  StoreNEWSPACE(); // !NEWSPACE
}


// ================================================
// 0x7c6d: WORD 'MAXSPACE' codep=0x224c wordp=0x7c79 params=0 returns=2
// ================================================

void MAXSPACE() // MAXSPACE
{
  Push2Words("VANEWSPACE");
  Push(0x0003); Push(0x0000);
  D_plus_(); // D+
  VA_gt_BUF(); // VA>BUF
}


// ================================================
// 0x7c87: WORD 'BLKSPACE' codep=0x224c wordp=0x7c89 params=0 returns=2
// ================================================

void BLKSPACE() // BLKSPACE
{
  GetNEWSPACE(); // @NEWSPACE
  VA_gt_BLK(); // VA>BLK
  Pop(); // DROP
  Push(0x0400);
  SWAP(); // SWAP
  _dash_(); // -
}


// ================================================
// 0x7c99: WORD 'FLD@' codep=0x4a4f wordp=0x7ca2
// ================================================

void FLD_at_() // FLD@
{
  switch(Pop()) // FLD@
  {
  case 1:
    Push(Read8(Pop())&0xFF); // C@
    break;
  case 2:
    Push(Read16(Pop())); // @
    break;
  case 3:
    _1_dot_5_at_(); // 1.5@
    break;
  default:
    Push(Read16(Pop())); // @
    break;

  }
}

// ================================================
// 0x7cb2: WORD 'FLD!' codep=0x4a4f wordp=0x7cbb
// ================================================

void FLD_ex_() // FLD!
{
  switch(Pop()) // FLD!
  {
  case 1:
    C_ex_(); // C!
    break;
  case 2:
    Store_3(); // !_3
    break;
  case 3:
    _1_dot_5_ex_(); // 1.5!
    break;
  default:
    Store_3(); // !_3
    break;

  }
}

// ================================================
// 0x7ccb: WORD 'IFLD@' codep=0x224c wordp=0x7cd5
// ================================================

void IFLD_at_() // IFLD@
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + 2)&0xFF); //  2+ C@
  SWAP(); // SWAP
  EXECUTE(); // EXECUTE
  SWAP(); // SWAP
  FLD_at_(); // FLD@ case
}


// ================================================
// 0x7ce5: WORD 'IFLD!' codep=0x224c wordp=0x7cef
// ================================================

void IFLD_ex_() // IFLD!
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop() + 2)&0xFF); //  2+ C@
  SWAP(); // SWAP
  EXECUTE(); // EXECUTE
  SWAP(); // SWAP
  FLD_ex_(); // FLD! case
}


// ================================================
// 0x7cff: WORD '?FLD=' codep=0x224c wordp=0x7d01
// ================================================

void IsFLD_eq_() // ?FLD=
{
  OVER(); // OVER
  IFLD_at_(); // IFLD@
  OVER(); // OVER
  Push((Pop()==Pop())?1:0); // =
}


// ================================================
// 0x7d0b: WORD '?CLASS/SPECIES' codep=0x224c wordp=0x7d17 params=2 returns=3
// ================================================

void IsCLASS_slash_SPECIES() // ?CLASS/SPECIES
{
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  GetINST_dash_CLASS(); // @INST-CLASS
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  OVER(); // OVER
  Push(Read16(regsp)); // DUP
  Push(Pop()==0?1:0); //  0=
  SWAP(); // SWAP
  GetINST_dash_SPECIES(); // @INST-SPECIES
  Push((Pop()==Pop())?1:0); // =
  Push(Pop() | Pop()); // OR
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0x7d37: WORD '?CHOICE' codep=0x224c wordp=0x7d39
// ================================================

void IsCHOICE() // ?CHOICE
{
  Push(pp__i__ask_CHOICE); // '?CHOICE
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d3f: WORD '?EXIT' codep=0x224c wordp=0x7d41
// ================================================

void IsEXIT() // ?EXIT
{
  Push(pp__i__ask_EXIT); // '?EXIT
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d47: WORD 'TRAVERS' codep=0x224c wordp=0x7d49
// ================================================

void TRAVERS() // TRAVERS
{
  Push(pp__i_TRAVERS); // 'TRAVERS
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d4f: WORD 'MAP' codep=0x224c wordp=0x7d57
// ================================================

void MAP() // MAP
{
  Push(pp__i_MAP); // 'MAP
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7d5d: WORD 'DUP@>V!' codep=0x224c wordp=0x7d5f params=2 returns=0
// ================================================

void DUP_at__gt_V_ex_() // DUP@>V!
{
  Push(Read16(regsp)); // DUP
  Push(Read16(Pop())); //  @
  _gt_V(); // >V
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7d69: WORD 'V>SWAP!' codep=0x224c wordp=0x7d6b params=1 returns=0
// ================================================

void V_gt_SWAP_ex_() // V>SWAP!
{
  V_gt_(); // V>
  SWAP(); // SWAP
  _st__ex__gt_(); // <!>
}


// ================================================
// 0x7d73: WORD 'SELECT' codep=0x224c wordp=0x7d7e
// ================================================

void SELECT() // SELECT
{
  Push(0);
  _gt_V(); // >V
  while(1)
  {
    IsCHOICE(); // ?CHOICE
    IsEXIT(); // ?EXIT
    Push(Pop() | Pop()); // OR
    Push(!Pop()); //  NOT
    if (Pop() == 0) break;

    TRAVERS(); // TRAVERS
    V_gt_(); // V>
    Pop(); // DROP
    Push(1);
    _gt_V(); // >V
  }
  IsEXIT(); // ?EXIT
  Push(!Pop()); //  NOT
  V_gt_(); // V>
  Pop(); // DROP
}


// ================================================
// 0x7da6: WORD '?>FIRST' codep=0x224c wordp=0x7db2 params=0 returns=1
// ================================================

void Is_gt_FIRST() // ?>FIRST
{
  VI(); // VI
  IsFIRST(); // ?FIRST
  Push(Pop() & Pop()); // AND
  IsNULL(); // ?NULL
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0x7dbe: WORD 'SELECT-2DROP' codep=0x224c wordp=0x7dca
// ================================================

void SELECT_dash_2DROP() // SELECT-2DROP
{
  unsigned short int a;
  Push(pp__i__ask_CHOICE); // '?CHOICE
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(0x7db2); // '?>FIRST'
  Push(pp__i__ask_EXIT); // '?EXIT
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(0x7a86); // 'INEXT'
  Push(pp__i_TRAVERS); // 'TRAVERS
  DUP_at__gt_V_ex_(); // DUP@>V!
  SELECT(); // SELECT
  Push(pp__i_TRAVERS); // 'TRAVERS
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i__ask_EXIT); // '?EXIT
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i__ask_CHOICE); // '?CHOICE
  V_gt_SWAP_ex_(); // V>SWAP!
  a = Pop(); // >R
  Pop(); Pop(); // 2DROP
  Push(a); // R>
}


// ================================================
// 0x7df4: WORD '3SELECTDROP' codep=0x224c wordp=0x7df6
// ================================================
// orphan

void _3SELECTDROP() // 3SELECTDROP
{
  unsigned short int a;
  SELECT_dash_2DROP(); // SELECT-2DROP
  a = Pop(); // >R
  Pop(); // DROP
  Push(a); // R>
}


// ================================================
// 0x7e00: WORD '=FIND' codep=0x224c wordp=0x7e02
// ================================================

void _eq_FIND() // =FIND
{
  Push(0x7d01); // '?FLD='
  SELECT_dash_2DROP(); // SELECT-2DROP
}


// ================================================
// 0x7e0a: WORD 'IFIND' codep=0x224c wordp=0x7e14
// ================================================

void IFIND() // IFIND
{
  Push(0x7d17); // '?CLASS/SPECIES'
  SELECT_dash_2DROP(); // SELECT-2DROP
}


// ================================================
// 0x7e1c: WORD 'MAP>ROOT' codep=0x224c wordp=0x7e1e params=0 returns=0
// ================================================

void MAP_gt_ROOT() // MAP>ROOT
{
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    MAP_gt_ROOT(); // MAP>ROOT
    MAP(); // MAP
    TRAVERS(); // TRAVERS
    IsEXIT(); // ?EXIT
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7e36: WORD 'MAP>LEAF' codep=0x224c wordp=0x7e38
// ================================================

void MAP_gt_LEAF() // MAP>LEAF
{
  MAP(); // MAP
  IsCHILD(); // ?CHILD
  if (Pop() == 0) return;
  IOPEN(); // IOPEN
  do
  {
    MAP_gt_LEAF(); // MAP>LEAF
    TRAVERS(); // TRAVERS
    IsEXIT(); // ?EXIT
  } while(Pop() == 0);
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7e50: WORD 'MAKE1ST' codep=0x224c wordp=0x7e5c params=0 returns=0
// ================================================

void MAKE1ST() // MAKE1ST
{
  IsFIRST(); // ?FIRST
  Push(!Pop()); //  NOT
  if (Pop() == 0) return;
  IEXTRACT(); // IEXTRACT
  CI_i_(); // CI'
  IINSERT(); // IINSERT
  IFIRST(); // IFIRST
}


// ================================================
// 0x7e6e: WORD 'EXTRACTED>INACTIVE' codep=0x224c wordp=0x7e70 params=3 returns=0
// ================================================

void EXTRACTED_gt_INACTIVE() // EXTRACTED>INACTIVE
{
  Push2Words("INACTIVE");
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x749c); // 'INST-SPECIES'
    SWAP(); // SWAP
    _eq_FIND(); // =FIND
    if (Pop() != 0)
    {
      MAKE1ST(); // MAKE1ST
      CI(); // CI
    } else
    {
      CI_i_(); // CI'
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Pop(); // DROP
    CI(); // CI
  }
  IINSERT(); // IINSERT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x7ea2: WORD '>INACTIVE' codep=0x224c wordp=0x7eae params=2 returns=0
// ================================================

void _gt_INACTIVE() // >INACTIVE
{
  _2DUP(); // 2DUP
  _gt_C_plus_S(); // >C+S
  Push((Read16(pp_IBFR) - 3) - Read16(cc_IHEADLEN)); // IBFR @ 3 - IHEADLEN -
  Push(Read16(regsp)); // DUP
  StoreINST_dash_SPECIES(); // !INST-SPECIES
  CDROP(); // CDROP
  EXTRACTED_gt_INACTIVE(); // EXTRACTED>INACTIVE
}


// ================================================
// 0x7ec8: WORD '(IDELETE)' codep=0x224c wordp=0x7eca params=0 returns=0
// ================================================

void _ro_IDELETE_rc_() // (IDELETE)
{
  IEXTRACT(); // IEXTRACT
  _gt_INACTIVE(); // >INACTIVE
}


// ================================================
// 0x7ed0: WORD 'IDELETE' codep=0x224c wordp=0x7edc
// ================================================

void IDELETE() // IDELETE
{
  Push(0x7eca); // '(IDELETE)'
  Push(pp__i_MAP); // 'MAP
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(0x75f3); // '?NULL'
  Push(pp__i__ask_EXIT); // '?EXIT
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(0x3a48); // 'NOP'
  Push(pp__i_TRAVERS); // 'TRAVERS
  DUP_at__gt_V_ex_(); // DUP@>V!
  MAP_gt_ROOT(); // MAP>ROOT
  MAP(); // MAP
  Push(pp__i_TRAVERS); // 'TRAVERS
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i__ask_EXIT); // '?EXIT
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i_MAP); // 'MAP
  V_gt_SWAP_ex_(); // V>SWAP!
}


// ================================================
// 0x7f06: WORD 'SELECT-MAP' codep=0x224c wordp=0x7f08
// ================================================

void SELECT_dash_MAP() // SELECT-MAP
{
  Push(pp__i_MAP); // 'MAP
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(pp__i_TRAVERS); // 'TRAVERS
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(pp__i__ask_EXIT); // '?EXIT
  DUP_at__gt_V_ex_(); // DUP@>V!
  Push(pp__i__ask_CHOICE); // '?CHOICE
  DUP_at__gt_V_ex_(); // DUP@>V!
  IFIRST(); // IFIRST
  do
  {
    SELECT(); // SELECT
    if (Pop() != 0)
    {
      MAP(); // MAP
      TRAVERS(); // TRAVERS
      IsFIRST(); // ?FIRST
    } else
    {
      Push(1);
    }
  } while(Pop() == 0);
  Push(pp__i__ask_CHOICE); // '?CHOICE
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i__ask_EXIT); // '?EXIT
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i_TRAVERS); // 'TRAVERS
  V_gt_SWAP_ex_(); // V>SWAP!
  Push(pp__i_MAP); // 'MAP
  V_gt_SWAP_ex_(); // V>SWAP!
}


// ================================================
// 0x7f42: WORD 'ALL' codep=0x224c wordp=0x7f4a
// ================================================

void ALL() // ALL
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x7604); // '?-NULL'
  Push(0x7db2); // '?>FIRST'
  Push(0x7a86); // 'INEXT'
  Push(a); // R>
  SELECT_dash_MAP(); // SELECT-MAP
}


// ================================================
// 0x7f5e: WORD 'EACH' codep=0x224c wordp=0x7f67
// ================================================

void EACH() // EACH
{
  unsigned short int a;
  a = Pop(); // >R
  Push(0x7db2); // '?>FIRST'
  Push(0x7a86); // 'INEXT'
  Push(a); // R>
  SELECT_dash_MAP(); // SELECT-MAP
}


// ================================================
// 0x7f77: WORD 'THROW-AWAY' codep=0x224c wordp=0x7f79
// ================================================

void THROW_dash_AWAY() // THROW-AWAY
{
  Push(pp__i_THROW_dash_AWAY); // 'THROW-AWAY
  GetEXECUTE(); // @EXECUTE
}


// ================================================
// 0x7f7f: WORD 'NULLPOINTERS' codep=0x224c wordp=0x7f8b params=0 returns=0
// ================================================

void NULLPOINTERS() // NULLPOINTERS
{
  Push2Words("NULL");
  StoreINST_dash_SIB(); // !INST-SIB
  Push2Words("NULL");
  StoreINST_dash_PREV(); // !INST-PREV
  Push2Words("NULL");
  StoreINST_dash_OFF(); // !INST-OFF
}


// ================================================
// 0x7f99: WORD 'CHILDEXTRACT' codep=0x224c wordp=0x7f9b params=0 returns=2
// ================================================

void CHILDEXTRACT() // CHILDEXTRACT
{
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    IEXTRACT(); // IEXTRACT
    ICLOSE(); // ICLOSE
    return;
  }
  IEXTRACT(); // IEXTRACT
}


// ================================================
// 0x7faf: WORD 'TRY-INACTIVE' codep=0x224c wordp=0x7fb1 params=0 returns=0
// ================================================

void TRY_dash_INACTIVE() // TRY-INACTIVE
{
  Push2Words("INACTIVE");
  _gt_C_plus_S(); // >C+S
  IsCHILD(); // ?CHILD
  if (Pop() != 0)
  {
    IOPEN(); // IOPEN
    Push(0x749c); // 'INST-SPECIES'
    OVER(); // OVER
    _eq_FIND(); // =FIND
    if (Pop() != 0)
    {
      Push(pp_IsRECYCLED); // ?RECYCLED
      ON_2(); // ON_2
      MAKE1ST(); // MAKE1ST
      CHILDEXTRACT(); // CHILDEXTRACT
    } else
    {
      Push2Words("NULL");
    }
    ICLOSE(); // ICLOSE
  } else
  {
    Push2Words("NULL");
  }
  ICLOSE(); // ICLOSE
  _gt_C(); // >C
}


// ================================================
// 0x7fe5: WORD 'NEWFRAGMENT' codep=0x224c wordp=0x7fe7 params=0 returns=4
// ================================================

void NEWFRAGMENT() // NEWFRAGMENT
{
  unsigned short int a;
  BLKSPACE(); // BLKSPACE
  Push(Read16(cc_IHEADLEN)); // IHEADLEN
  _gt_(); // >
  if (Pop() != 0)
  {
    BLKSPACE(); // BLKSPACE
    Push((Pop() - Read16(cc_IHEADLEN)) - 1); //  IHEADLEN - 1-
    GetNEWSPACE(); // @NEWSPACE
    VA_gt_BUF(); // VA>BUF
    a = Pop(); // >R
    Push(a + 0x000b); // I 0x000b +
    C_ex_(); // C!
    Push(0x0030);
    Push(a + 9); // R> 9 +
    C_ex_(); // C!
    GetNEWSPACE(); // @NEWSPACE
    _gt_C_plus_S(); // >C+S
    NULLPOINTERS(); // NULLPOINTERS
    CI(); // CI
    ICLOSE(); // ICLOSE
    _gt_INACTIVE(); // >INACTIVE
  }
  BLKSPACE(); // BLKSPACE
  _plus__ex_NEWSPACE(); // +!NEWSPACE
}


// ================================================
// 0x8027: WORD '?>MAXSP' codep=0x224c wordp=0x8033 params=1 returns=4
// ================================================

void Is_gt_MAXSP() // ?>MAXSP
{
  unsigned short int a;
  Push(Read16(regsp)); // DUP
  a = Pop(); // >R
  MAXSPACE(); // MAXSPACE
  _1_dot_5_at_(); // 1.5@
  GetNEWSPACE(); // @NEWSPACE
  Push(a); // R>
  Push(0);
  D_plus_(); // D+
  D_st_(); // D<
}


// ================================================
// 0x8047: WORD 'TRY-NEWSPACE' codep=0x224c wordp=0x8049 params=1 returns=9
// ================================================

void TRY_dash_NEWSPACE() // TRY-NEWSPACE
{
  Is_gt_MAXSP(); // ?>MAXSP
  if (Pop() != 0)
  {
    Push2Words("NULL");
    _gt_C(); // >C
    return;
  }
  BLKSPACE(); // BLKSPACE
  OVER(); // OVER
  Push(Pop() + Read16(cc_IHEADLEN)); //  IHEADLEN +
  _st_(); // <
  if (Pop() != 0)
  {
    NEWFRAGMENT(); // NEWFRAGMENT
  }
  GetNEWSPACE(); // @NEWSPACE
  _gt_C(); // >C
  Push(Read16(regsp)); // DUP
  Push(Pop() + Read16(cc_IHEADLEN)); //  IHEADLEN +
  _plus__ex_NEWSPACE(); // +!NEWSPACE
  Is_gt_MAXSP(); // ?>MAXSP
  if (Pop() == 0) return;
  CDROP(); // CDROP
  Push2Words("NULL");
  _gt_C(); // >C
}


// ================================================
// 0x8081: WORD 'GET-NEW-INSTANCE' codep=0x224c wordp=0x8083 params=1 returns=9
// ================================================

void GET_dash_NEW_dash_INSTANCE() // GET-NEW-INSTANCE
{
  while(1)
  {
    Push(pp_IsRECYCLED); // ?RECYCLED
    OFF_2(); // OFF_2
    Push(Read16(pp_IsREUSE)); // ?REUSE @
    if (Pop() != 0)
    {
      TRY_dash_INACTIVE(); // TRY-INACTIVE
    } else
    {
      TRY_dash_NEWSPACE(); // TRY-NEWSPACE
    }
    IsNULL(); // ?NULL
    if (Pop() != 0)
    {
      CDROP(); // CDROP
      Push(Read16(pp_IsREUSE)); // ?REUSE @
      if (Pop() != 0)
      {
        TRY_dash_NEWSPACE(); // TRY-NEWSPACE
      } else
      {
        TRY_dash_INACTIVE(); // TRY-INACTIVE
      }
      IsNULL(); // ?NULL
      if (Pop() != 0)
      {
        THROW_dash_AWAY(); // THROW-AWAY
      }
    }
    IsNULL(); // ?NULL
    if (Pop() == 0) return;
    CDROP(); // CDROP
  }
}


// ================================================
// 0x80c5: WORD 'SET?REUSE' codep=0x4a4f wordp=0x80d1
// ================================================

void SET_ask_REUSE() // SET?REUSE
{
  switch(Pop()) // SET?REUSE
  {
  case 11:
    Func9("<ON>");
    break;
  case 41:
    Func9("<ON>");
    break;
  case 14:
    Func9("<ON>");
    break;
  case 26:
    Func9("<ON>");
    break;
  case 68:
    Func9("<ON>");
    break;
  case 28:
    Func9("<ON>");
    break;
  case 56:
    Func9("<ON>");
    break;
  case 36:
    Func9("<ON>");
    break;
  case 40:
    Func9("<ON>");
    break;
  case 43:
    Func9("<ON>");
    break;
  case 24:
    Func9("<ON>");
    break;
  case 25:
    Func9("<ON>");
    break;
  case 67:
    Func9("<ON>");
    break;
  default:
    Func9("<OFF>");
    break;

  }
}

// ================================================
// 0x8109: WORD 'VICREAT' codep=0x224c wordp=0x8115 params=1 returns=11
// ================================================

void VICREAT() // VICREAT
{
  unsigned short int a;
  Push(pp_IsREUSE); // ?REUSE
  OFF_2(); // OFF_2
  Push(Read16(regsp)); // DUP
  Push(0x00fe);
  _gt_(); // >
  IsUNRAVEL(); // ?UNRAVEL
  Push(Pop() + 1); //  1+
  GET_dash_NEW_dash_INSTANCE(); // GET-NEW-INSTANCE
  Push(Pop() - 1); //  1-
  CI(); // CI
  VA_gt_BUF(); // VA>BUF
  a = Pop(); // >R
  Push(a + 0x000b); // I 0x000b +
  C_ex_(); // C!
  Push(0x0030);
  Push(a + 9); // R> 9 +
  C_ex_(); // C!
  SET_dash_CURRENT(); // SET-CURRENT
  NULLPOINTERS(); // NULLPOINTERS
  CI(); // CI
  ICLOSE(); // ICLOSE
}


// ================================================
// 0x814f: WORD 'ICREATE' codep=0x224c wordp=0x815b
// ================================================

void ICREATE() // ICREATE
{
  unsigned short int a;
  Push(pp_IsREUSE); // ?REUSE
  Push(3);
  PICK(); // PICK
  SET_ask_REUSE(); // SET?REUSE case
  OVER(); // OVER
  Func6("FILE-SLEN");
  Push(Read16(Pop())&0xFF); //  C@
  GET_dash_NEW_dash_INSTANCE(); // GET-NEW-INSTANCE
  Pop(); // DROP
  Push(!Read16(pp_IsRECYCLED)); // ?RECYCLED @ NOT
  if (Pop() != 0)
  {
    CI(); // CI
    VA_gt_BUF(); // VA>BUF
    Push(Read16(regsp)); // DUP
    a = Pop(); // >R
    Push(Pop() + 0x000a); //  0x000a +
    C_ex_(); // C!
    Push(a + 9); // R> 9 +
    C_ex_(); // C!
    SET_dash_CURRENT(); // SET-CURRENT
  } else
  {
    SET_dash_CURRENT(); // SET-CURRENT
    StoreINST_dash_SPECIES(); // !INST-SPECIES
    StoreINST_dash_CLASS(); // !INST-CLASS
  }
  NULLPOINTERS(); // NULLPOINTERS
  CI(); // CI
  ICLOSE(); // ICLOSE
}


