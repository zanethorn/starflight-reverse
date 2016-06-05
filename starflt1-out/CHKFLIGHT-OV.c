// ====== OVERLAY 'CHKFLIGHT-OV' ======

#include"interface.h"

// store offset = 0xf1a0
// overlay size   = 0x03c0

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xf1b6  codep:0x744d parp:0xf1b6 size:0x0003 C-string:'UNK_0xf1b6'
// 1704:      UNK_0xf1bb  codep:0x744d parp:0xf1bb size:0x0003 C-string:'UNK_0xf1bb'
// 1705:      UNK_0xf1c0  codep:0x744d parp:0xf1c0 size:0x0003 C-string:'UNK_0xf1c0'
// 1706:      UNK_0xf1c5  codep:0x224c parp:0xf1c5 size:0x0091 C-string:'UNK_0xf1c5'
// 1707:      UNK_0xf258  codep:0x224c parp:0xf258 size:0x0016 C-string:'UNK_0xf258'
// 1708:      UNK_0xf270  codep:0x224c parp:0xf270 size:0x0036 C-string:'UNK_0xf270'
// 1709:      UNK_0xf2a8  codep:0x224c parp:0xf2a8 size:0x0063 C-string:'UNK_0xf2a8'
// 1710:           (.CS)  codep:0x4a4f parp:0xf315 size:0x0010 C-string:'_ro__dot_CS_rc_'
// 1711:      UNK_0xf327  codep:0x1d29 parp:0xf327 size:0x0002 C-string:'UNK_0xf327'
// 1712:      UNK_0xf32b  codep:0x224c parp:0xf32b size:0x0045 C-string:'UNK_0xf32b'
// 1713:      UNK_0xf372  codep:0x224c parp:0xf372 size:0x0039 C-string:'UNK_0xf372'
// 1714:      UNK_0xf3ad  codep:0x224c parp:0xf3ad size:0x005b C-string:'UNK_0xf3ad'
// 1715:      UNK_0xf40a  codep:0x224c parp:0xf40a size:0x0044 C-string:'UNK_0xf40a'
// 1716:      UNK_0xf450  codep:0x224c parp:0xf450 size:0x002e C-string:'UNK_0xf450'
// 1717:      UNK_0xf480  codep:0x224c parp:0xf480 size:0x0028 C-string:'UNK_0xf480'
// 1718:      UNK_0xf4aa  codep:0x224c parp:0xf4aa size:0x0048 C-string:'UNK_0xf4aa'
// 1719:      ?CAN-LEAVE  codep:0x224c parp:0xf501 size:0x005f C-string:'_ask_CAN_minus_LEAVE'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xf327[2] = {0x3a, 0x20}; // UNK_0xf327



// 0xf1b2: db 0x39 0x00 '9 '

// ================================================
// 0xf1b4: WORD 'UNK_0xf1b6' codep=0x744d parp=0xf1b6
// ================================================
// 0xf1b6: db 0x10 0x20 0x02 '   '

// ================================================
// 0xf1b9: WORD 'UNK_0xf1bb' codep=0x744d parp=0xf1bb
// ================================================
// 0xf1bb: db 0x11 0x11 0x12 '   '

// ================================================
// 0xf1be: WORD 'UNK_0xf1c0' codep=0x744d parp=0xf1c0
// ================================================
// 0xf1c0: db 0x14 0x13 0x02 '   '

// ================================================
// 0xf1c3: WORD 'UNK_0xf1c5' codep=0x224c parp=0xf1c5
// ================================================

void UNK_0xf1c5() // UNK_0xf1c5
{
  GREY1(); // GREY1
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(2); // 2
  Push(1); // 1
  Push(0x009d);
  Push(1); // 1
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x00b9);
  Push(0x009d);
  Push(0x00b9);
  LLINE(); // LLINE
  Push(1); // 1
  Push(0x00b9);
  Push(1); // 1
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x009e);
  Push(0x00b9);
  Push(0x009e);
  Push(1); // 1
  LLINE(); // LLINE
  _gt_3FONT(); // >3FONT
  Push(0x0013);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("PRE", 3); // (.")
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(0x00c0);
  OVER(); // OVER
  Push(Pop()+2); // 2+
  OVER(); // OVER
  LLINE(); // LLINE
  Push(cc__5); // 5
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("FLIGHT", 6); // (.")
  Push(cc__6); // 6
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("CHECK", 5); // (.")
  Push(2); // 2
  Push(0x00c5);
  BLACK(); // BLACK
  _dot_1LOGO(); // .1LOGO
}


// ================================================
// 0xf256: WORD 'UNK_0xf258' codep=0x224c parp=0xf258
// ================================================

void UNK_0xf258() // UNK_0xf258
{
  Push(cc__6); // 6
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(0x0014);
  _minus_(); // -
  Push(0x00aa);
  MIN(); // MIN
  POS_dot_(); // POS.
}


// ================================================
// 0xf26e: WORD 'UNK_0xf270' codep=0x224c parp=0xf270
// ================================================

void UNK_0xf270() // UNK_0xf270
{
  UNK_0xf258(); // UNK_0xf258
  PRINT("REPORT TO OPERATIONS FOR", 24); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  UNK_0xf258(); // UNK_0xf258
  PRINT("EVALUATION", 10); // (.")
}


// ================================================
// 0xf2a6: WORD 'UNK_0xf2a8' codep=0x224c parp=0xf2a8
// ================================================

void UNK_0xf2a8() // UNK_0xf2a8
{
  UNK_0xf258(); // UNK_0xf258
  PRINT("REPORT TO CREW ASSIGNMENT", 25); // (.")
}

// 0xf2c8: db 0x4c 0x22 0xdc 0x1b 0x0d 0x43 0x48 0x52 0x49 0x53 0x54 0x45 0x4e 0x20 0x53 0x48 0x49 0x50 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x10 0x50 0x55 0x52 0x43 0x48 0x41 0x53 0x45 0x20 0x45 0x4e 0x47 0x49 0x4e 0x45 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x20 0x41 0x4e 0x44 0x20 0x56 0xf2 0x5d 0x17 0x0a 0x00 0x61 0x58 0x83 0x6d 0xdc 0xf2 0x90 0x16 'L"   CHRISTEN SHIP  L"   PURCHASE ENGINES  L"    AND V ]   aX m    '

// ================================================
// 0xf30b: WORD '(.CS)' codep=0x4a4f parp=0xf315
// ================================================
// 0xf315: db 0x03 0x00 0x48 0x3a 0x01 0x00 0xca 0xf2 0x06 0x00 0xde 0xf2 0x07 0x00 0xf5 0xf2 '  H:            '

// ================================================
// 0xf325: WORD 'UNK_0xf327' codep=0x1d29 parp=0xf327
// ================================================
// 0xf327: db 0x3a 0x20 ': '

// ================================================
// 0xf329: WORD 'UNK_0xf32b' codep=0x224c parp=0xf32b
// ================================================

void UNK_0xf32b() // UNK_0xf32b
{
  UNK_0xf258(); // UNK_0xf258
  PRINT("REPORT TO SHIP-CONFIGURATION", 28); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  UNK_0xf258(); // UNK_0xf258
  PRINT("TO ", 3); // (.")
  Push(pp_UNK_0xf327); // UNK_0xf327
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  _ro__dot_CS_rc_(); // (.CS)
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  _ro__dot_CS_rc_(); // (.CS)
}


// ================================================
// 0xf370: WORD 'UNK_0xf372' codep=0x224c parp=0xf372
// ================================================

void UNK_0xf372() // UNK_0xf372
{
  UNK_0xf258(); // UNK_0xf258
  PRINT("REPORT TO TRADE DEPOT TO", 24); // (.")
  Push(0x000a);
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  UNK_0xf258(); // UNK_0xf258
  PRINT("PURCHASE FUEL", 13); // (.")
}


// ================================================
// 0xf3ab: WORD 'UNK_0xf3ad' codep=0x224c parp=0xf3ad
// ================================================

void UNK_0xf3ad() // UNK_0xf3ad
{
  UNK_0xf1c5(); // UNK_0xf1c5
  _gt_2FONT(); // >2FONT
  DUP(); // DUP
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  UNK_0xf270(); // UNK_0xf270

  label1:
  DUP(); // DUP
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  UNK_0xf2a8(); // UNK_0xf2a8

  label2:
  DUP(); // DUP
  Push(cc__4); // 4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label3;
  UNK_0xf32b(); // UNK_0xf32b

  label3:
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label4;
  UNK_0xf372(); // UNK_0xf372

  label4:
  Push(1); // 1
  Push(0x0016);
  CMESS(); // CMESS
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  PRINT("PRESS SPACEBAR TO EXIT", 22); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf408: WORD 'UNK_0xf40a' codep=0x224c parp=0xf40a
// ================================================

void UNK_0xf40a() // UNK_0xf40a
{
  Push(pp__ask_EVAL); // ?EVAL
  Push(Read16(Pop())); // @
  DUP(); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  _star_OP(); // *OP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002d);
  IFIND(); // IFIND
  Pop(); // DROP
  IOPEN(); // IOPEN

  label3:
  CI(); // CI
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  IDELETE(); // IDELETE
  goto label3;

  label2:
  ICLOSE(); // ICLOSE
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE

  label1:
  Push(pp__ask_TV); // ?TV
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop() | Pop()); // OR
  Push(pp__ask_RECALL); // ?RECALL
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xf44e: WORD 'UNK_0xf450' codep=0x224c parp=0xf450
// ================================================

void UNK_0xf450() // UNK_0xf450
{
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  Push(0); // 0
  UNK_0xf1bb(); // UNK_0xf1bb
  Push(0x0012);
  Push(Pop() + Pop()); // +
  UNK_0xf1bb(); // UNK_0xf1bb

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf1b6(); // UNK_0xf1b6
  Push(Read16(Pop())); // @
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  ICLOSE(); // ICLOSE
  Push(cc__6); // 6
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffea

  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf47e: WORD 'UNK_0xf480' codep=0x224c parp=0xf480
// ================================================

void UNK_0xf480() // UNK_0xf480
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
  _pe_NAME(); // %NAME
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  UNK_0xf1c0(); // UNK_0xf1c0
  Push(Pop()+1); // 1+
  C_at_(); // C@
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
  DUP(); // DUP
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xf327); // UNK_0xf327
  _ex_(); // !
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xf4a8: WORD 'UNK_0xf4aa' codep=0x224c parp=0xf4aa
// ================================================

void UNK_0xf4aa() // UNK_0xf4aa
{
  _star_STARSH(); // *STARSH
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000a);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0x001a);
  Push(cc__6); // 6
  IFIND(); // IFIND
  if (Pop() == 0) goto label2;
  INST_minus_QT(); // INST-QT
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(0x000a);
  M_star_(); // M*
  Push(pp__10_star_END); // 10*END
  D_ex_(); // D!
  if (Pop() == 0) Push(1); else Push(0); // 0=
  goto label4;

  label2:
  Push(1); // 1

  label4:
  CDROP(); // CDROP
  goto label3;

  label1:
  Push(1); // 1

  label3:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4f2: WORD '?CAN-LEAVE' codep=0x224c parp=0xf501
// ================================================

void _ask_CAN_minus_LEAVE() // ?CAN-LEAVE
{
  UNK_0xf40a(); // UNK_0xf40a
  UNK_0xf450(); // UNK_0xf450
  Push(Pop()*2); // 2*
  Push(Pop() | Pop()); // OR
  UNK_0xf480(); // UNK_0xf480
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  UNK_0xf4aa(); // UNK_0xf4aa
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  Push(Pop() | Pop()); // OR
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  UNK_0xf3ad(); // UNK_0xf3ad
  KEY(); // KEY
  Pop(); // DROP
  Push(0); // 0
  return;

  label1:
  Push(1); // 1
}

// 0xf52f: db 0x43 0x48 0x4b 0x46 0x4c 0x54 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x6f 0x72 0x20 0x43 0x48 0x4b 0x46 0x4c 0x49 0x47 0x48 0x54 0x2d 0x4f 0x56 0x20 0x2d 0x00 'CHKFLT-VOC______________________or CHKFLIGHT-OV - '
  