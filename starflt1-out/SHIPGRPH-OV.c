// ====== OVERLAY 'SHIPGRPH-OV' ======

#include"interface.h"

// store offset = 0xed20
// overlay size   = 0x0840

// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xed36  codep:0x744d parp:0xed36 size:0x0003 C-string:'UNK_0xed36'
// 1704:      UNK_0xed3b  codep:0x744d parp:0xed3b size:0x0003 C-string:'UNK_0xed3b'
// 1705:      UNK_0xed40  codep:0x744d parp:0xed40 size:0x0003 C-string:'UNK_0xed40'
// 1706:      UNK_0xed45  codep:0x744d parp:0xed45 size:0x0003 C-string:'UNK_0xed45'
// 1707:      UNK_0xed4a  codep:0x744d parp:0xed4a size:0x0003 C-string:'UNK_0xed4a'
// 1708:      UNK_0xed4f  codep:0x744d parp:0xed4f size:0x0003 C-string:'UNK_0xed4f'
// 1709:      UNK_0xed54  codep:0x744d parp:0xed54 size:0x0003 C-string:'UNK_0xed54'
// 1710:      UNK_0xed59  codep:0x744d parp:0xed59 size:0x0008 C-string:'UNK_0xed59'
// 1711:      UNK_0xed63  codep:0x224c parp:0xed63 size:0x000a C-string:'UNK_0xed63'
// 1712:      UNK_0xed6f  codep:0x1d29 parp:0xed6f size:0x0044 C-string:'UNK_0xed6f'
// 1713:      UNK_0xedb5  codep:0x1d29 parp:0xedb5 size:0x0044 C-string:'UNK_0xedb5'
// 1714:      UNK_0xedfb  codep:0x1d29 parp:0xedfb size:0x0032 C-string:'UNK_0xedfb'
// 1715:      UNK_0xee2f  codep:0x1d29 parp:0xee2f size:0x0022 C-string:'UNK_0xee2f'
// 1716:      UNK_0xee53  codep:0x1d29 parp:0xee53 size:0x0002 C-string:'UNK_0xee53'
// 1717:         (.MASS)  codep:0x224c parp:0xee61 size:0x0074 C-string:'_ro__dot_MASS_rc_'
// 1718:          (.ACC)  codep:0x224c parp:0xeee0 size:0x0038 C-string:'_ro__dot_ACC_rc_'
// 1719:      UNK_0xef1a  codep:0x224c parp:0xef1a size:0x0074 C-string:'UNK_0xef1a'
// 1720:      UNK_0xef90  codep:0x224c parp:0xef90 size:0x0082 C-string:'UNK_0xef90'
// 1721:      UNK_0xf014  codep:0x224c parp:0xf014 size:0x0010 C-string:'UNK_0xf014'
// 1722:      UNK_0xf026  codep:0x224c parp:0xf026 size:0x0070 C-string:'UNK_0xf026'
// 1723:      UNK_0xf098  codep:0x224c parp:0xf098 size:0x001e C-string:'UNK_0xf098'
// 1724:         (.PODS)  codep:0x224c parp:0xf0c2 size:0x0058 C-string:'_ro__dot_PODS_rc_'
// 1725:      UNK_0xf11c  codep:0x1d29 parp:0xf11c size:0x0004 C-string:'UNK_0xf11c'
// 1726:      UNK_0xf122  codep:0x1d29 parp:0xf122 size:0x0004 C-string:'UNK_0xf122'
// 1727:      UNK_0xf128  codep:0x1d29 parp:0xf128 size:0x0008 C-string:'UNK_0xf128'
// 1728:      UNK_0xf132  codep:0x224c parp:0xf132 size:0x0040 C-string:'UNK_0xf132'
// 1729:      UNK_0xf174  codep:0x224c parp:0xf174 size:0x0036 C-string:'UNK_0xf174'
// 1730:         (.SHIP)  codep:0x224c parp:0xf1b6 size:0x0016 C-string:'_ro__dot_SHIP_rc_'
// 1731:   (BALANCEMESS)  codep:0x224c parp:0xf1de size:0x003d C-string:'_ro_BALANCEMESS_rc_'
// 1732:      UNK_0xf21d  codep:0x224c parp:0xf21d size:0x00f1 C-string:'UNK_0xf21d'
// 1733:      UNK_0xf310  codep:0x224c parp:0xf310 size:0x00fd C-string:'UNK_0xf310'
// 1734:      UNK_0xf40f  codep:0x224c parp:0xf40f size:0x00dc C-string:'UNK_0xf40f'
// 1735:       (.CONFIG)  codep:0x224c parp:0xf4f9 size:0x0067 C-string:'_ro__dot_CONFIG_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xed6f[68] = {0x00, 0x7c, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x00, 0xff, 0x7f, 0x00, 0xf8, 0xff, 0x7f, 0x00, 0xfc, 0x86, 0x61, 0x00, 0x1e, 0xff, 0x7f, 0x00, 0xff, 0xff, 0x7f, 0x80, 0xff, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0x7f, 0xe0, 0xff, 0xff, 0x7f, 0xf0, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x07, 0xfc, 0xff, 0x3f, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xfc, 0x3f, 0x00, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xfe, 0x3f}; // UNK_0xed6f
unsigned char UNK_0xedb5[68] = {0x00, 0x00, 0xfe, 0x3f, 0x00, 0x00, 0xfc, 0x1f, 0x00, 0x00, 0xfc, 0x3f, 0x3f, 0x00, 0xfc, 0xff, 0xff, 0x07, 0xfc, 0xff, 0xff, 0x7f, 0xfc, 0xff, 0xff, 0x7f, 0xf8, 0xff, 0xff, 0x7f, 0xf0, 0xff, 0xff, 0x7f, 0xe0, 0xff, 0xff, 0x7f, 0xc0, 0xff, 0xff, 0x7f, 0x80, 0xff, 0xff, 0x7f, 0x00, 0xff, 0x86, 0x61, 0x00, 0x1e, 0xff, 0x7f, 0x00, 0xfc, 0xff, 0x7f, 0x00, 0xf8, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00}; // UNK_0xedb5
unsigned char UNK_0xedfb[50] = {0xfe, 0x7f, 0x00, 0x00, 0x7f, 0x00, 0xfc, 0xff, 0x00, 0x00, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0xff, 0xff, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0xfc, 0x7f, 0x00, 0x00, 0xfe, 0x00, 0x00}; // UNK_0xedfb
unsigned char UNK_0xee2f[34] = {0x01, 0x1e, 0x1f, 0xf0, 0xdc, 0x83, 0xc3, 0x3c, 0x7c, 0xc6, 0xe3, 0x37, 0x3f, 0xff, 0xff, 0xf3, 0xf3, 0x3f, 0x3f, 0xff, 0x7e, 0xf3, 0xc3, 0x37, 0x63, 0x3c, 0x3d, 0xcc, 0xf8, 0xc1, 0x01, 0x1f, 0x00, 0xe0}; // UNK_0xee2f
unsigned char UNK_0xee53[2] = {0x00, 0xf0}; // UNK_0xee53
unsigned char UNK_0xf11c[4] = {0x3f, 0x38, 0x00, 0xff}; // UNK_0xf11c
unsigned char UNK_0xf122[4] = {0x3f, 0xfc, 0x00, 0xce}; // UNK_0xf122
unsigned char UNK_0xf128[8] = {0x78, 0x30, 0xf8, 0xff, 0xff, 0xf8, 0x30, 0x78}; // UNK_0xf128



// 0xed32: db 0x7f 0x00 ' '

// ================================================
// 0xed34: WORD 'UNK_0xed36' codep=0x744d parp=0xed36
// ================================================
// 0xed36: db 0x14 0x11 0x02 '   '

// ================================================
// 0xed39: WORD 'UNK_0xed3b' codep=0x744d parp=0xed3b
// ================================================
// 0xed3b: db 0x14 0x13 0x02 '   '

// ================================================
// 0xed3e: WORD 'UNK_0xed40' codep=0x744d parp=0xed40
// ================================================
// 0xed40: db 0x14 0x19 0x02 '   '

// ================================================
// 0xed43: WORD 'UNK_0xed45' codep=0x744d parp=0xed45
// ================================================
// 0xed45: db 0x14 0x1b 0x02 '   '

// ================================================
// 0xed48: WORD 'UNK_0xed4a' codep=0x744d parp=0xed4a
// ================================================
// 0xed4a: db 0x14 0x1d 0x02 '   '

// ================================================
// 0xed4d: WORD 'UNK_0xed4f' codep=0x744d parp=0xed4f
// ================================================
// 0xed4f: db 0x14 0x1f 0x02 '   '

// ================================================
// 0xed52: WORD 'UNK_0xed54' codep=0x744d parp=0xed54
// ================================================
// 0xed54: db 0x14 0x25 0x02 ' % '

// ================================================
// 0xed57: WORD 'UNK_0xed59' codep=0x744d parp=0xed59
// ================================================
// 0xed59: db 0x14 0x27 0x02 0x4d 0x74 0x14 0x45 0x04 ' ' Mt E '

// ================================================
// 0xed61: WORD 'UNK_0xed63' codep=0x224c parp=0xed63
// ================================================

void UNK_0xed63() // UNK_0xed63
{
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xed6d: WORD 'UNK_0xed6f' codep=0x1d29 parp=0xed6f
// ================================================
// 0xed6f: db 0x00 0x7c 0x00 0x00 0x80 0x7f 0x00 0x00 0xff 0x7f 0x00 0xf8 0xff 0x7f 0x00 0xfc 0x86 0x61 0x00 0x1e 0xff 0x7f 0x00 0xff 0xff 0x7f 0x80 0xff 0xff 0x7f 0xc0 0xff 0xff 0x7f 0xe0 0xff 0xff 0x7f 0xf0 0xff 0xff 0x7f 0xf8 0xff 0xff 0x7f 0xfc 0xff 0xff 0x07 0xfc 0xff 0x3f 0x00 0xfc 0xff 0x00 0x00 0xfc 0x3f 0x00 0x00 0xfc 0x1f 0x00 0x00 0xfe 0x3f ' |            a                           ?      ?       ?'

// ================================================
// 0xedb3: WORD 'UNK_0xedb5' codep=0x1d29 parp=0xedb5
// ================================================
// 0xedb5: db 0x00 0x00 0xfe 0x3f 0x00 0x00 0xfc 0x1f 0x00 0x00 0xfc 0x3f 0x3f 0x00 0xfc 0xff 0xff 0x07 0xfc 0xff 0xff 0x7f 0xfc 0xff 0xff 0x7f 0xf8 0xff 0xff 0x7f 0xf0 0xff 0xff 0x7f 0xe0 0xff 0xff 0x7f 0xc0 0xff 0xff 0x7f 0x80 0xff 0xff 0x7f 0x00 0xff 0x86 0x61 0x00 0x1e 0xff 0x7f 0x00 0xfc 0xff 0x7f 0x00 0xf8 0x80 0x7f 0x00 0x00 0x00 0x7c 0x00 0x00 '   ?       ??                             a            |  '

// ================================================
// 0xedf9: WORD 'UNK_0xedfb' codep=0x1d29 parp=0xedfb
// ================================================
// 0xedfb: db 0xfe 0x7f 0x00 0x00 0x7f 0x00 0xfc 0xff 0x00 0x00 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0xff 0xff 0x7f 0xff 0xff 0xff 0xff 0xff 0xff 0x7f 0x00 0xfc 0x7f 0x00 0x00 0xfe 0x00 0x00 '                                        '

// ================================================
// 0xee2d: WORD 'UNK_0xee2f' codep=0x1d29 parp=0xee2f
// ================================================
// 0xee2f: db 0x01 0x1e 0x1f 0xf0 0xdc 0x83 0xc3 0x3c 0x7c 0xc6 0xe3 0x37 0x3f 0xff 0xff 0xf3 0xf3 0x3f 0x3f 0xff 0x7e 0xf3 0xc3 0x37 0x63 0x3c 0x3d 0xcc 0xf8 0xc1 0x01 0x1f 0x00 0xe0 '       <|  7?    ?? ~  7c<=       '

// ================================================
// 0xee51: WORD 'UNK_0xee53' codep=0x1d29 parp=0xee53
// ================================================
// 0xee53: db 0x00 0xf0 '  '

// ================================================
// 0xee55: WORD '(.MASS)' codep=0x224c parp=0xee61
// ================================================

void _ro__dot_MASS_rc_() // (.MASS)
{
  Push(0x0032);
  UNK_0xed3b(); // UNK_0xed3b
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(0x0032);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  UNK_0xed36(); // UNK_0xed36
  UNK_0xed63(); // UNK_0xed63
  DUP(); // DUP
  Push(Pop() * Pop()); // *
  Push(cc__9); // 9
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  UNK_0xed4f(); // UNK_0xed4f
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  UNK_0xed4a(); // UNK_0xed4a
  UNK_0xed63(); // UNK_0xed63
  _0_gt_(); // 0>
  UNK_0xed45(); // UNK_0xed45
  UNK_0xed63(); // UNK_0xed63
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  UNK_0xed40(); // UNK_0xed40
  UNK_0xed63(); // UNK_0xed63
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  UNK_0xed59(); // UNK_0xed59
  _ex_(); // !
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Push(cc__4); // 4
  BLACK(); // BLACK
  Push(0x0069);
  Push(0x0036);
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  SWAP(); // SWAP
  POS_dot_PXT(); // POS.PXT
  UNK_0xed59(); // UNK_0xed59
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  _dot_R(); // .R
  _ex_CRS(); // !CRS
}


// ================================================
// 0xeed5: WORD '(.ACC)' codep=0x224c parp=0xeee0
// ================================================

void _ro__dot_ACC_rc_() // (.ACC)
{
  UNK_0xed3b(); // UNK_0xed3b
  UNK_0xed63(); // UNK_0xed63
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  UNK_0xed59(); // UNK_0xed59
  Push(Read16(Pop())); // @
  _slash_(); // /
  UNK_0xed54(); // UNK_0xed54
  _ex_(); // !
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Push(2); // 2
  BLACK(); // BLACK
  Push(0x008b);
  Push(0x002c);
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  SWAP(); // SWAP
  POS_dot_PXT(); // POS.PXT
  UNK_0xed54(); // UNK_0xed54
  Push(Read16(Pop())); // @
  Push(2); // 2
  _dot_R(); // .R
  _ex_CRS(); // !CRS
}


// ================================================
// 0xef18: WORD 'UNK_0xef1a' codep=0x224c parp=0xef1a
// ================================================

void UNK_0xef1a() // UNK_0xef1a
{
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Push(cc__6); // 6
  BLACK(); // BLACK
  Push(0x007e);
  Push(0x0022);
  _2DUP(); // 2DUP
  POS_dot_(); // POS.
  SWAP(); // SWAP
  POS_dot_PXT(); // POS.PXT
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
  goto label4;

  label2:
  Push(0); // 0

  label4:
  ICLOSE(); // ICLOSE
  goto label3;

  label1:
  Push(0); // 0

  label3:
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(cc__3); // 3
  _dot_R(); // .R
  PRINT(".", 1); // (.")
  Push(0); // 0
  _dot_R(); // .R
  PRINT("M", 1); // (.")
  Push(cc__3); // 3
  DUP(); // DUP
  Push(pp_YBLT); // YBLT
  _plus__ex_(); // +!
  _dot_(); // .
  _ex_CRS(); // !CRS
}


// ================================================
// 0xef8e: WORD 'UNK_0xef90' codep=0x224c parp=0xef90
// ================================================

void UNK_0xef90() // UNK_0xef90
{
  DK_minus_BLUE(); // DK-BLUE
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x0011);
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(0x0020);
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(0x0055);
  Push(0x006a);
  POS_dot_(); // POS.
  Push(pp_UNK_0xed6f); // UNK_0xed6f
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
  Push(0x0055);
  Push(0x004f);
  POS_dot_(); // POS.
  Push(pp_UNK_0xedb5); // UNK_0xedb5
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
  Push(0x000a);
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(0x0028);
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(0x0065);
  Push(0x0059);
  POS_dot_(); // POS.
  Push(pp_UNK_0xedfb); // UNK_0xedfb
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
  Push(0x0016);
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(0x000c);
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(0x008d);
  Push(0x005f);
  POS_dot_(); // POS.
  Push(pp_UNK_0xee2f); // UNK_0xee2f
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
}


// ================================================
// 0xf012: WORD 'UNK_0xf014' codep=0x224c parp=0xf014
// ================================================

void UNK_0xf014() // UNK_0xf014
{
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  _2OVER(); // 2OVER
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xfffa

  Pop(); Pop();// 2DROP
}


// ================================================
// 0xf024: WORD 'UNK_0xf026' codep=0x224c parp=0xf026
// ================================================

void UNK_0xf026() // UNK_0xf026
{
  UNK_0xed40(); // UNK_0xed40
  UNK_0xed63(); // UNK_0xed63
  _0_gt_(); // 0>
  RED(); // RED
  Push(Pop() * Pop()); // *
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(0x0053);
  Push(0x003c);
  Push(0x0053);
  Push(0x006d);
  Push(0x0069);
  Push(0x006d);
  Push(0x0086);
  Push(0x0063);
  Push(0x0096);
  Push(0x0063);
  Push(0x009b);
  Push(0x005e);
  Push(0x009b);
  Push(0x004b);
  Push(0x0096);
  Push(0x0046);
  Push(0x0084);
  Push(0x0046);
  Push(0x0068);
  Push(0x003c);
  Push(0x0053);
  Push(0x003c);
  Push(0x000a);
  UNK_0xf014(); // UNK_0xf014
}


// ================================================
// 0xf096: WORD 'UNK_0xf098' codep=0x224c parp=0xf098
// ================================================

void UNK_0xf098() // UNK_0xf098
{
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  DUP(); // DUP
  UNK_0xed4f(); // UNK_0xed4f
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // 0=
  GREY1(); // GREY1
  Push(Pop() * Pop()); // *
  _ex_COLOR(); // !COLOR
  BLT(); // BLT
  Push(Pop()*2); // 2*
}


// ================================================
// 0xf0b6: WORD '(.PODS)' codep=0x224c parp=0xf0c2
// ================================================

void _ro__dot_PODS_rc_() // (.PODS)
{
  _at_CRS(); // @CRS
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  Push(2); // 2
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(2); // 2
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(pp_UNK_0xee53); // UNK_0xee53
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(1); // 1
  Push(cc__8); // 8
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(0x0076);
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Push(0x0050);
  Push(i); // I
  Push(1); // 1
  _gt_(); // >
  UNK_0xf098(); // UNK_0xf098
  Push(0x0059);
  Push(i); // I
  Push(2); // 2
  _st_(); // <
  UNK_0xf098(); // UNK_0xf098
  i++;
  } while(i<imax); // (LOOP) 0xffd6

  Pop(); // DROP
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf11a: WORD 'UNK_0xf11c' codep=0x1d29 parp=0xf11c
// ================================================
// 0xf11c: db 0x3f 0x38 0x00 0xff '?8  '

// ================================================
// 0xf120: WORD 'UNK_0xf122' codep=0x1d29 parp=0xf122
// ================================================
// 0xf122: db 0x3f 0xfc 0x00 0xce '?   '

// ================================================
// 0xf126: WORD 'UNK_0xf128' codep=0x1d29 parp=0xf128
// ================================================
// 0xf128: db 0x78 0x30 0xf8 0xff 0xff 0xf8 0x30 0x78 'x0    0x'

// ================================================
// 0xf130: WORD 'UNK_0xf132' codep=0x224c parp=0xf132
// ================================================

void UNK_0xf132() // UNK_0xf132
{
  UNK_0xed45(); // UNK_0xed45
  UNK_0xed63(); // UNK_0xed63
  _0_gt_(); // 0>
  LT_minus_BLUE(); // LT-BLUE
  Push(Pop() * Pop()); // *
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(cc__3); // 3
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(cc__9); // 9
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(0x0060);
  Push(0x006b);
  POS_dot_(); // POS.
  Push(pp_UNK_0xf11c); // UNK_0xf11c
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
  Push(0x0040);
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  Push(pp_UNK_0xf122); // UNK_0xf122
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
}


// ================================================
// 0xf172: WORD 'UNK_0xf174' codep=0x224c parp=0xf174
// ================================================

void UNK_0xf174() // UNK_0xf174
{
  UNK_0xed4a(); // UNK_0xed4a
  UNK_0xed63(); // UNK_0xed63
  if (Pop() == 0) goto label1;
  LT_minus_BLUE(); // LT-BLUE
  goto label2;

  label1:
  DK_minus_BLUE(); // DK-BLUE

  label2:
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(cc__8); // 8
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(cc__8); // 8
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(pp_UNK_0xf128); // UNK_0xf128
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  Push(0x006b);
  Push(0x0058);
  POS_dot_(); // POS.
  BLT(); // BLT
}


// ================================================
// 0xf1aa: WORD '(.SHIP)' codep=0x224c parp=0xf1b6
// ================================================

void _ro__dot_SHIP_rc_() // (.SHIP)
{
  _at_CRS(); // @CRS
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex_(); // !
  UNK_0xef90(); // UNK_0xef90
  UNK_0xf026(); // UNK_0xf026
  UNK_0xf174(); // UNK_0xf174
  UNK_0xf132(); // UNK_0xf132
  _ro__dot_PODS_rc_(); // (.PODS)
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf1cc: WORD '(BALANCEMESS)' codep=0x224c parp=0xf1de
// ================================================

void _ro_BALANCEMESS_rc_() // (BALANCEMESS)
{
  _at_CRS(); // @CRS
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(cc__5); // 5
  Push(0x0017);
  POS_dot_(); // POS.
  CTINIT(); // CTINIT
  PRINT("YOUR ACCOUNT BALANCE IS: ", 25); // (.")
  Push(0xc558);
  MODULE(); // MODULE
  D_dot_(); // D.
  PRINT("MU", 2); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf21b: WORD 'UNK_0xf21d' codep=0x224c parp=0xf21d
// ================================================

void UNK_0xf21d() // UNK_0xf21d
{
  DK_minus_BLUE(); // DK-BLUE
  _ex_COLOR(); // !COLOR
  Push(0x009d);
  Push(1); // 1
  Push(2); // 2
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x009d);
  Push(0x000b);
  Push(2); // 2
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x009d);
  Push(0x001a);
  Push(2); // 2
  Push(0x001a);
  LLINE(); // LLINE
  Push(0x009d);
  Push(0x00b6);
  Push(2); // 2
  Push(0x00b6);
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x00c6);
  Push(0x009d);
  Push(0x00c6);
  LLINE(); // LLINE
  Push(1); // 1
  Push(0x00c6);
  Push(1); // 1
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x009e);
  Push(0x00c6);
  Push(0x009e);
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x0050);
  Push(0x00b5);
  Push(0x0050);
  Push(0x001b);
  LLINE(); // LLINE
  Push(0x0015);
  Push(2); // 2
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x003b);
  Push(2); // 2
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x0063);
  Push(2); // 2
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x007f);
  Push(2); // 2
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x0015);
  Push(0x00c3);
  DK_minus_BLUE(); // DK-BLUE
  _dot_1LOGO(); // .1LOGO
  BLUE(); // BLUE
  _ex_COLOR(); // !COLOR
  _gt_3FONT(); // >3FONT
  Push(0x0027);
  Push(0x00c2);
  POS_dot_(); // POS.
  PRINT("SHIP", 4); // (.")
  Push(cc__6); // 6
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("CONFIGURATION", 13); // (.")
}


// ================================================
// 0xf30e: WORD 'UNK_0xf310' codep=0x224c parp=0xf310
// ================================================

void UNK_0xf310() // UNK_0xf310
{
  CTINIT(); // CTINIT
  Push(cc__7); // 7
  Push(0x00ae);
  POS_dot_(); // POS.
  PRINT("CARGO PODS..", 12); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("CARGO PODS:", 11); // (.")
  Push(cc__7); // 7
  Push(0x009f);
  POS_dot_(); // POS.
  PRINT("ENGINES", 7); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("ENGINES :", 9); // (.")
  Push(cc__7); // 7
  Push(0x0095);
  POS_dot_(); // POS.
  PRINT("SHIELDING", 9); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("SHIELDS :", 9); // (.")
  Push(cc__7); // 7
  Push(0x008b);
  POS_dot_(); // POS.
  PRINT("ARMOR", 5); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("ARMOR   :", 9); // (.")
  Push(cc__7); // 7
  Push(0x0081);
  POS_dot_(); // POS.
  PRINT("MISSILE LAUNCHER", 16); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("MISSILES:", 9); // (.")
  Push(cc__7); // 7
  Push(0x0077);
  POS_dot_(); // POS.
  PRINT("LASER CANNON", 12); // (.")
  Push(0x0056);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("LASERS  :", 9); // (.")
}


// ================================================
// 0xf40d: WORD 'UNK_0xf40f' codep=0x224c parp=0xf40f
// ================================================

void UNK_0xf40f() // UNK_0xf40f
{
  UNK_0xf310(); // UNK_0xf310
  Push(cc__5); // 5
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x000f);
  Push(i); // I
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x0036);
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  PRINT("CLASS ", 6); // (.")
  Push(cc__5); // 5
  Push(i); // I
  _minus_(); // -
  Push(0); // 0
  _dot_R(); // .R
  PRINT("...", 3); // (.")
  i++;
  } while(i<imax); // (LOOP) 0xffd1

  Push(cc__6); // 6
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("BUY", 3); // (.")
  Push(0x0020);
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("SELL", 4); // (.")
  Push(0x0044);
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("REPAIR", 6); // (.")
  Push(0x006a);
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("NAME", 4); // (.")
  Push(0x0087);
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("EXIT", 4); // (.")
  Push(0x0056);
  Push(0x0036);
  POS_dot_(); // POS.
  PRINT("MASS:     TONS", 14); // (.")
  Push(0x0056);
  Push(0x002c);
  POS_dot_(); // POS.
  PRINT("ACCELERATION:   G", 17); // (.")
  Push(0x0056);
  Push(0x0022);
  POS_dot_(); // POS.
  PRINT("ENDURIUM:", 9); // (.")
  _ro__dot_MASS_rc_(); // (.MASS)
  _ro__dot_ACC_rc_(); // (.ACC)
  UNK_0xef1a(); // UNK_0xef1a
  _ro_BALANCEMESS_rc_(); // (BALANCEMESS)
}


// ================================================
// 0xf4eb: WORD '(.CONFIG)' codep=0x224c parp=0xf4f9
// ================================================

void _ro__dot_CONFIG_rc_() // (.CONFIG)
{
  UNK_0xf21d(); // UNK_0xf21d
  UNK_0xf40f(); // UNK_0xf40f
  _ro__dot_SHIP_rc_(); // (.SHIP)
}

// 0xf501: db 0x53 0x48 0x49 0x50 0x2d 0x47 0x52 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x6f 0x72 0x20 0x53 0x48 0x49 0x50 0x2d 0x43 0x4f 0x4e 0x46 0x49 0x47 0x55 0x52 0x41 0x54 0x49 0x4f 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x90 0x16 0x31 0x32 0x37 0x4c 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'SHIP-GR-VOC_____________________for SHIP-CONFIGURATION------- )  127LE-VOC_____________________ '
  