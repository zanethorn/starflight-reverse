// ====== OVERLAY 'PERSONNEL-OV' ======
// store offset = 0xe500
// overlay size   = 0x1060

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xe53e  codep:0x224c parp:0xe53e size:0x0008 C-string:'UNK_0xe53e'
// 1704:      UNK_0xe548  codep:0x2214 parp:0xe548 size:0x0002 C-string:'UNK_0xe548'
// 1705:      UNK_0xe54c  codep:0x2214 parp:0xe54c size:0x000e C-string:'UNK_0xe54c'
// 1706:      UNK_0xe55c  codep:0x224c parp:0xe55c size:0x0008 C-string:'UNK_0xe55c'
// 1707:      UNK_0xe566  codep:0x224c parp:0xe566 size:0x0048 C-string:'UNK_0xe566'
// 1708:      UNK_0xe5b0  codep:0x1d29 parp:0xe5b0 size:0x0004 C-string:'UNK_0xe5b0'
// 1709:      UNK_0xe5b6  codep:0x224c parp:0xe5b6 size:0x002a C-string:'UNK_0xe5b6'
// 1710:      UNK_0xe5e2  codep:0x224c parp:0xe5e2 size:0x0017 C-string:'UNK_0xe5e2'
// 1711:      UNK_0xe5fb  codep:0x224c parp:0xe5fb size:0x001a C-string:'UNK_0xe5fb'
// 1712:      UNK_0xe617  codep:0x224c parp:0xe617 size:0x003f C-string:'UNK_0xe617'
// 1713:      UNK_0xe658  codep:0x73ea parp:0xe658 size:0x0016 C-string:'UNK_0xe658'
// 1714:      UNK_0xe670  codep:0x73ea parp:0xe670 size:0x0006 C-string:'UNK_0xe670'
// 1715:      UNK_0xe678  codep:0x73ea parp:0xe678 size:0x0006 C-string:'UNK_0xe678'
// 1716:      UNK_0xe680  codep:0x744d parp:0xe680 size:0x0003 C-string:'UNK_0xe680'
// 1717:      UNK_0xe685  codep:0x744d parp:0xe685 size:0x0003 C-string:'UNK_0xe685'
// 1718:      UNK_0xe68a  codep:0x744d parp:0xe68a size:0x0003 C-string:'UNK_0xe68a'
// 1719:      UNK_0xe68f  codep:0x744d parp:0xe68f size:0x0003 C-string:'UNK_0xe68f'
// 1720:      UNK_0xe694  codep:0x744d parp:0xe694 size:0x0003 C-string:'UNK_0xe694'
// 1721:      UNK_0xe699  codep:0x744d parp:0xe699 size:0x0003 C-string:'UNK_0xe699'
// 1722:      UNK_0xe69e  codep:0x744d parp:0xe69e size:0x0003 C-string:'UNK_0xe69e'
// 1723:      UNK_0xe6a3  codep:0x744d parp:0xe6a3 size:0x0003 C-string:'UNK_0xe6a3'
// 1724:      UNK_0xe6a8  codep:0x744d parp:0xe6a8 size:0x0003 C-string:'UNK_0xe6a8'
// 1725:      UNK_0xe6ad  codep:0x73ea parp:0xe6ad size:0x0006 C-string:'UNK_0xe6ad'
// 1726:      UNK_0xe6b5  codep:0x73ea parp:0xe6b5 size:0x0006 C-string:'UNK_0xe6b5'
// 1727:      UNK_0xe6bd  codep:0x73ea parp:0xe6bd size:0x0006 C-string:'UNK_0xe6bd'
// 1728:      UNK_0xe6c5  codep:0x224c parp:0xe6c5 size:0x013f C-string:'UNK_0xe6c5'
// 1729:      UNK_0xe806  codep:0x224c parp:0xe806 size:0x0022 C-string:'UNK_0xe806'
// 1730:      UNK_0xe82a  codep:0x224c parp:0xe82a size:0x0038 C-string:'UNK_0xe82a'
// 1731:      UNK_0xe864  codep:0x1d29 parp:0xe864 size:0x0011 C-string:'UNK_0xe864'
// 1732:      UNK_0xe877  codep:0x224c parp:0xe877 size:0x00a5 C-string:'UNK_0xe877'
// 1733:      UNK_0xe91e  codep:0x1d29 parp:0xe91e size:0x0002 C-string:'UNK_0xe91e'
// 1734:      UNK_0xe922  codep:0x224c parp:0xe922 size:0x0006 C-string:'UNK_0xe922'
// 1735:      UNK_0xe92a  codep:0x224c parp:0xe92a size:0x0118 C-string:'UNK_0xe92a'
// 1736:      UNK_0xea44  codep:0x224c parp:0xea44 size:0x0037 C-string:'UNK_0xea44'
// 1737:      UNK_0xea7d  codep:0x224c parp:0xea7d size:0x00c6 C-string:'UNK_0xea7d'
// 1738:      UNK_0xeb45  codep:0x224c parp:0xeb45 size:0x0086 C-string:'UNK_0xeb45'
// 1739:      UNK_0xebcd  codep:0x224c parp:0xebcd size:0x008e C-string:'UNK_0xebcd'
// 1740:      UNK_0xec5d  codep:0x224c parp:0xec5d size:0x00fa C-string:'UNK_0xec5d'
// 1741:      UNK_0xed59  codep:0x224c parp:0xed59 size:0x073c C-string:'UNK_0xed59'
// 1742:      UNK_0xf497  codep:0x224c parp:0xf497 size:0x003e C-string:'UNK_0xf497'
// 1743:  PFILE-FUNCTION  codep:0x4a4f parp:0xf4e8 size:0x0014 C-string:'PFILE_dash_FUNCTION'
// 1744:       (U-PFILE)  codep:0x224c parp:0xf50a size:0x0000 C-string:'_ro_U_dash_PFILE_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe5b0[4] = {0xd5, 0x57, 0x00, 0xf5}; // UNK_0xe5b0
unsigned char UNK_0xe864[17] = {0x03, 0x0a, 0x02, 0x09, 0x29, 0x0a, 0x2c, 0x09, 0x25, 0x0a, 0x52, 0x09, 0x29, 0x0a, 0x7c, 0x09, 0x23}; // UNK_0xe864
unsigned char UNK_0xe91e[2] = {0x81, 0x00}; // UNK_0xe91e

const unsigned short int cc_UNK_0xe548 = 0x0003; // UNK_0xe548
const unsigned short int cc_UNK_0xe54c = 0x0004; // UNK_0xe54c


// 0xe512: db 0x05 0x01 0x4c 0x22 0x5d 0x17 0x5b 0xbd 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x70 0xbd 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x82 0xbd 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x97 0xbd 0xce 0x84 0x90 0x16 '  L"] [     L"] p     L"]       L"]       '

// ================================================
// 0xe53c: WORD 'UNK_0xe53e' codep=0x224c parp=0xe53e
// ================================================

void UNK_0xe53e() // UNK_0xe53e
{
  Push(0xbdba);
  MODULE(); // MODULE
}


// ================================================
// 0xe546: WORD 'UNK_0xe548' codep=0x2214 parp=0xe548
// ================================================
// 0xe548: db 0x03 0x00 '  '

// ================================================
// 0xe54a: WORD 'UNK_0xe54c' codep=0x2214 parp=0xe54c
// ================================================
// 0xe54c: db 0x04 0x00 0x4c 0x22 0x20 0x0f 0x51 0xaf 0x2e 0x0f 0x51 0xaf 0x90 0x16 '  L"  Q . Q   '

// ================================================
// 0xe55a: WORD 'UNK_0xe55c' codep=0x224c parp=0xe55c
// ================================================

void UNK_0xe55c() // UNK_0xe55c
{
  Push(0xc52d);
  MODULE(); // MODULE
}


// ================================================
// 0xe564: WORD 'UNK_0xe566' codep=0x224c parp=0xe566
// ================================================

void UNK_0xe566() // UNK_0xe566
{
  Push(0xc542);
  MODULE(); // MODULE
}

// 0xe56e: db 0x4c 0x22 0x5d 0x17 0x58 0xc5 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x83 0xc5 0xce 0x84 0x90 0x16 0x4c 0x22 0xdb 0x23 0x5d 0x17 0x80 0x00 0x72 0x0f 0x90 0x16 0x4c 0x22 0xdb 0x23 0x9b 0xac 0xdb 0x23 0xcd 0x0c 0x8e 0x27 0x7f 0x0e 0xf6 0x0f 0x6a 0x6d 0xf6 0x0f 0x90 0x16 0x4c 0x22 0x7b 0x3b 0x6c 0x58 0x83 0x6d 0x90 0x16 'L"] X     L"]       L" #]   r   L" #   #   '   jm    L"{;lX m  '

// ================================================
// 0xe5ae: WORD 'UNK_0xe5b0' codep=0x1d29 parp=0xe5b0
// ================================================
// 0xe5b0: db 0xd5 0x57 0x00 0xf5 ' W  '

// ================================================
// 0xe5b4: WORD 'UNK_0xe5b6' codep=0x224c parp=0xe5b6
// ================================================

void UNK_0xe5b6() // UNK_0xe5b6
{
  _at_CRS(); // @CRS
  Push(cc__5); // 5
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(pp_UNK_0xe5b0); // UNK_0xe5b0
  Push(pp_ABLT); // ABLT
  _ex_(); // !
  BLT(); // BLT
  Push(cc__6); // 6
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  _ex_CRS(); // !CRS
}

// 0xe5d0: db 0x4c 0x22 0xa9 0x48 0x5d 0x17 0x0d 0x00 0x5f 0x12 0xfa 0x15 0xf6 0xff 0x90 0x16 'L" H]   _       '

// ================================================
// 0xe5e0: WORD 'UNK_0xe5e2' codep=0x224c parp=0xe5e2
// ================================================

void UNK_0xe5e2() // UNK_0xe5e2
{
  PRINT("AND PRESS SPACEBAR", 18); // (.")
}


// ================================================
// 0xe5f9: WORD 'UNK_0xe5fb' codep=0x224c parp=0xe5fb
// ================================================

void UNK_0xe5fb() // UNK_0xe5fb
{
  PRINT("PAGE THROUGH FILES ^\", 21); // (.")
}


// ================================================
// 0xe615: WORD 'UNK_0xe617' codep=0x224c parp=0xe617
// ================================================

void UNK_0xe617() // UNK_0xe617
{
  DUP(); // DUP
  _0MESS(); // 0MESS
  Push(0x0025);
  CMESS(); // CMESS
  PRINT("SELECT OPTIONS [] ", 18); // (.")
  UNK_0xe5e2(); // UNK_0xe5e2
  _ex_CRS(); // !CRS
}

// 0xe63c: db 0x4c 0x22 0xdc 0x1b 0x11 0x41 0x20 0x44 0x45 0x41 0x44 0x20 0x43 0x52 0x45 0x57 0x4d 0x45 0x4d 0x42 0x45 0x52 0xfc 0xa2 0x90 0x16 'L"   A DEAD CREWMEMBER    '

// ================================================
// 0xe656: WORD 'UNK_0xe658' codep=0x73ea parp=0xe658
// ================================================
// 0xe658: db 0x10 0x00 0x08 0x14 0x89 0x64 0xea 0x73 0x10 0x08 0x01 0x14 0x89 0x64 0xea 0x73 0x10 0x0d 0x01 0x14 0x89 0x64 '     d s     d s     d'

// ================================================
// 0xe66e: WORD 'UNK_0xe670' codep=0x73ea parp=0xe670
// ================================================
// 0xe670: db 0x10 0x12 0x01 0x14 0x89 0x64 '     d'

// ================================================
// 0xe676: WORD 'UNK_0xe678' codep=0x73ea parp=0xe678
// ================================================
// 0xe678: db 0x10 0x13 0x01 0x14 0x89 0x64 '     d'

// ================================================
// 0xe67e: WORD 'UNK_0xe680' codep=0x744d parp=0xe680
// ================================================
// 0xe680: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xe683: WORD 'UNK_0xe685' codep=0x744d parp=0xe685
// ================================================
// 0xe685: db 0x10 0x1a 0x01 '   '

// ================================================
// 0xe688: WORD 'UNK_0xe68a' codep=0x744d parp=0xe68a
// ================================================
// 0xe68a: db 0x10 0x1b 0x01 '   '

// ================================================
// 0xe68d: WORD 'UNK_0xe68f' codep=0x744d parp=0xe68f
// ================================================
// 0xe68f: db 0x10 0x1c 0x01 '   '

// ================================================
// 0xe692: WORD 'UNK_0xe694' codep=0x744d parp=0xe694
// ================================================
// 0xe694: db 0x10 0x1d 0x01 '   '

// ================================================
// 0xe697: WORD 'UNK_0xe699' codep=0x744d parp=0xe699
// ================================================
// 0xe699: db 0x10 0x1e 0x01 '   '

// ================================================
// 0xe69c: WORD 'UNK_0xe69e' codep=0x744d parp=0xe69e
// ================================================
// 0xe69e: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xe6a1: WORD 'UNK_0xe6a3' codep=0x744d parp=0xe6a3
// ================================================
// 0xe6a3: db 0x10 0x20 0x02 '   '

// ================================================
// 0xe6a6: WORD 'UNK_0xe6a8' codep=0x744d parp=0xe6a8
// ================================================
// 0xe6a8: db 0x10 0x22 0x01 ' " '

// ================================================
// 0xe6ab: WORD 'UNK_0xe6ad' codep=0x73ea parp=0xe6ad
// ================================================
// 0xe6ad: db 0x87 0x00 0x09 0x0b 0x9f 0x96 '      '

// ================================================
// 0xe6b3: WORD 'UNK_0xe6b5' codep=0x73ea parp=0xe6b5
// ================================================
// 0xe6b5: db 0x87 0x09 0x01 0x0b 0x9f 0x96 '      '

// ================================================
// 0xe6bb: WORD 'UNK_0xe6bd' codep=0x73ea parp=0xe6bd
// ================================================
// 0xe6bd: db 0x87 0x0a 0x01 0x0b 0x9f 0x96 '      '

// ================================================
// 0xe6c3: WORD 'UNK_0xe6c5' codep=0x224c parp=0xe6c5
// ================================================

void UNK_0xe6c5() // UNK_0xe6c5
{
  Push(0x00c3);
  Push(1); // 1
  Push(0x001c);
  Push(0x0043);
  SetColor("GREY2");
  POLY_dash_WI(); // POLY-WI
  Push(0x00b6);
  Push(0x0044);
  Push(0x001c);
  Push(0x009d);
  SetColor("GREY2");
  POLY_dash_WI(); // POLY-WI
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(2); // 2
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(0x001c);
  OVER(); // OVER
  Push(0x00c3);
  LLINE(); // LLINE
  Push(0x009d);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x001c);
  OVER(); // OVER
  Push(0x00b6);
  LLINE(); // LLINE
  Push(cc__3); // 3
  Push(0x001a);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x009c);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x0044);
  Push(0x00b7);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x009c);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(cc__3); // 3
  Push(0x00c4);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x0041);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(0x0042);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x00b9);
  OVER(); // OVER
  Push(0x00c3);
  LLINE(); // LLINE
  i++;
  } while(i<imax); // (LOOP) 0xff8e

  Push(0x004e);
  Push(0x00c5);
  SetColor("DK-BLUE");
  _dot_1LOGO(); // .1LOGO
  _gt_3FONT(); // >3FONT
  Push(0x005f);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("PERSONNEL", 9); // (.")
  SetColor("BLACK");
  SetColor("BLACK");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x000a);
  Push(0x00bd);
  POS_dot_(); // POS.
  PRINT("FILE", 4); // (.")
  Push(2); // 2
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  UNK_0xe5b6(); // UNK_0xe5b6
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(2); // 2
  Push(0x001c);
  Push(cc_UNK_0xe548); // UNK_0xe548
  Push(2); // 2
  Push(0x00c4);
  Push(cc_UNK_0xe54c); // UNK_0xe54c
  Push(0x0041);
  Push(0x00c4);
  Push(cc_UNK_0xe548); // UNK_0xe548
  Push(0x009c);
  Push(0x001c);
  Push(cc_UNK_0xe54c); // UNK_0xe54c
  Push(0x009c);
  Push(0x00b7);
  Push(cc_UNK_0xe548); // UNK_0xe548
  Push(0x0043);
  Push(0x00b9);
  Push(cc_UNK_0xe548); // UNK_0xe548
  Push(cc__6); // 6
  UNK_0xe53e(); // UNK_0xe53e
}


// ================================================
// 0xe804: WORD 'UNK_0xe806' codep=0x224c parp=0xe806
// ================================================

void UNK_0xe806() // UNK_0xe806
{
  CI(); // CI
  _gt_C_plus_S(); // >C+S
  Push(0); // 0

  label2:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  Func8("UNK_0xe6a3");
  C_at_(); // C@
  _0_gt_(); // 0>
  Push(Pop() + Pop()); // +
  goto label2;

  label1:
  ICLOSE(); // ICLOSE
  _0_gt_(); // 0>
}


// ================================================
// 0xe828: WORD 'UNK_0xe82a' codep=0x224c parp=0xe82a
// ================================================

void UNK_0xe82a() // UNK_0xe82a
{
  DUP(); // DUP
  _0_st_(); // 0<
  Func8("UNK_0xe6a8");
  C_at_(); // C@
  _0_gt_(); // 0>
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  IPREV(); // IPREV
  return;

  label1:
  _0_gt_(); // 0>
  Func8("UNK_0xe6a3");
  C_at_(); // C@
  UNK_0xe806(); // UNK_0xe806
  Push(Pop() | Pop()); // OR
  Func8("UNK_0xe6a8");
  C_at_(); // C@
  Push(0x0018);
  _st_(); // <
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  INEXT(); // INEXT
}


// ================================================
// 0xe862: WORD 'UNK_0xe864' codep=0x1d29 parp=0xe864
// ================================================
// 0xe864: db 0x03 0x0a 0x02 0x09 0x29 0x0a 0x2c 0x09 0x25 0x0a 0x52 0x09 0x29 0x0a 0x7c 0x09 0x23 '    ) , % R ) | #'

// ================================================
// 0xe875: WORD 'UNK_0xe877' codep=0x224c parp=0xe877
// ================================================

void UNK_0xe877() // UNK_0xe877
{
  CTINIT(); // CTINIT
  Push(0x009f);
  Push(1); // 1
  Push(1); // 1
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x009f);
  Push(0x000b);
  Push(1); // 1
  OVER(); // OVER
  LLINE(); // LLINE
  Push(1); // 1
  Push(1); // 1
  Push(1); // 1
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x002b);
  Push(1); // 1
  Push(0x002b);
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x0051);
  Push(1); // 1
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x007b);
  Push(1); // 1
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x009f);
  Push(1); // 1
  OVER(); // OVER
  Push(0x000b);
  LLINE(); // LLINE
  Push(0x000b);
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("CREATE", 6); // (.")
  Push(0x0035);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("TRAIN", 5); // (.")
  Push(0x005b);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("DELETE", 6); // (.")
  Push(0x0085);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("EXIT", 4); // (.")
}


// ================================================
// 0xe91c: WORD 'UNK_0xe91e' codep=0x1d29 parp=0xe91e
// ================================================
// 0xe91e: db 0x81 0x00 '  '

// ================================================
// 0xe920: WORD 'UNK_0xe922' codep=0x224c parp=0xe922
// ================================================

void UNK_0xe922() // UNK_0xe922
{
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
}


// ================================================
// 0xe928: WORD 'UNK_0xe92a' codep=0x224c parp=0xe92a
// ================================================

void UNK_0xe92a() // UNK_0xe92a
{
  _gt_R(); // >R
  Push(h); // I
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  _ex_(); // !
  CTINIT(); // CTINIT
  SetColor("BLACK");
  SetColor("BLACK");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x000a);
  Push(0x0029);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("SKILLS:", 7); // (.")
  Push(0x000f);
  Push(0x0022);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("SCIENCE       :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("RACE:", 5); // (.")
  Push(0x000f);
  Push(0x001b);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("NAVIGATION    :", 15); // (.")
  Push(0x000f);
  Push(0x0014);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("ENGINEERING   :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("DURABILITY:", 11); // (.")
  Push(0x000f);
  Push(0x000d);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("COMMUNICATIONS:", 15); // (.")
  Push(0x000f);
  Push(cc__6); // 6
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  PRINT("MEDICINE      :", 15); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("LRN RATE  :", 11); // (.")
  Push(0x0057);
  Push(0x0030);
  R_gt_(); // R>
  UNK_0xe922(); // UNK_0xe922
  PRINT("VITALITY:   %", 13); // (.")
}


// ================================================
// 0xea42: WORD 'UNK_0xea44' codep=0x224c parp=0xea44
// ================================================

void UNK_0xea44() // UNK_0xea44
{
  _at_CRS(); // @CRS
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Func8("UNK_0xe6a3");
  C_at_(); // C@
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  SetColor("RED");
  goto label2;

  label1:
  SetColor("GREY2");

  label2:
  _ex_COLOR(); // !COLOR
  Push(0x0041);
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  Push(Read16(Pop())); // @
  Push(0x0033);
  UNK_0xe922(); // UNK_0xe922
  _gt_3FONT(); // >3FONT
  PRINT("DEAD", 4); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xea7b: WORD 'UNK_0xea7d' codep=0x224c parp=0xea7d
// ================================================

void UNK_0xea7d() // UNK_0xea7d
{
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0x000a);
  Push(0x0030);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  CTINIT(); // CTINIT
  Func8("UNK_0xe680");
  DUP(); // DUP
  C_at_(); // C@
  if (Pop() == 0) goto label1;
  _do__dot_(); // $.
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  Push(0x007a);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Func8("UNK_0xe69e");
  C_at_(); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(0x0022);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  Func8("UNK_0xe685");
  C_at_(); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x0077);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  LoadData("UNK_0xe658"); // from 'CREWMEMBER  '
  _do__dot_(); // $.
  Push(0x004a);
  Push(0x001b);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  Func8("UNK_0xe68a");
  C_at_(); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(0x0014);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  Func8("UNK_0xe68f");
  C_at_(); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  LoadData("UNK_0xe678"); // from 'CREWMEMBER  '
  C_at_(); // C@
  Push(2); // 2
  _dot_R(); // .R
  Push(0x004a);
  Push(0x000d);
  Push(h); // I
  UNK_0xe922(); // UNK_0xe922
  Func8("UNK_0xe694");
  C_at_(); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x004a);
  Push(cc__6); // 6
  R_gt_(); // R>
  UNK_0xe922(); // UNK_0xe922
  Func8("UNK_0xe699");
  C_at_(); // C@
  Push(cc__3); // 3
  _dot_R(); // .R
  Push(0x008d);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  LoadData("UNK_0xe670"); // from 'CREWMEMBER  '
  C_at_(); // C@
  Push(2); // 2
  _dot_R(); // .R
}


// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  Push(0x0064);
  Push(0x0080);
  POS_dot_(); // POS.
  Push(0x0064);
  Push(pp_LBLT); // LBLT
  _ex_(); // !
  Push(0x0036);
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  SetColor("GREY2");
  _ex_COLOR(); // !COLOR
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Push(0x007d);
  Push(Pop() + Pop()); // +
  FILE_st_(); // FILE<
  PAD(); // PAD
  ADDR_gt_SEG(); // ADDR>SEG
  Push(Pop()+1); // 1+
  Push(0); // 0
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0xbeb2);
  goto label2;

  label1:
  Push(0xbe8a);

  label2:
  MODULE(); // MODULE
  Func8("UNK_0xe6a3");
  C_at_(); // C@
  Push(2); // 2
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  _at_CRS(); // @CRS
  SetColor("RED");
  _ex_COLOR(); // !COLOR
  Push(0x0064);
  Push(0x0080);
  Push(0x0099);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x0064);
  Push(0x001e);
  Push(0x0099);
  Push(0x0080);
  LLINE(); // LLINE
  _ex_CRS(); // !CRS
}


// ================================================
// 0xebcb: WORD 'UNK_0xebcd' codep=0x224c parp=0xebcd
// ================================================

void UNK_0xebcd() // UNK_0xebcd
{
  Push(pp_RECORD_n_); // RECORD#
  _ex_(); // !
  Push(0x0087);
  Push(pp_FILE_n_); // FILE#
  _ex_(); // !
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  SetColor("WHITE");
  SetColor("WHITE");
  SetColor("DK-BLUE");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  Push(0x000a);
  Push(0x005c);
  POS_dot_(); // POS.
  PRINT("TYPE    : ", 10); // (.")
  LoadData("UNK_0xe6ad"); // from 'PSTATS      '
  Push(cc__9); // 9
  TYPE(); // TYPE
  Push(0x000a);
  Push(0x0050);
  POS_dot_(); // POS.
  PRINT("AVG. HT.: ", 10); // (.")
  LoadData("UNK_0xe6b5"); // from 'PSTATS      '
  C_at_(); // C@
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0); // 0
  _dot_R(); // .R
  PRINT(".", 1); // (.")
  _dot_(); // .
  PRINT("M", 1); // (.")
  Push(0x000a);
  Push(0x0044);
  POS_dot_(); // POS.
  PRINT("AVG. WT.: ", 10); // (.")
  LoadData("UNK_0xe6bd"); // from 'PSTATS      '
  C_at_(); // C@
  _dot_(); // .
  PRINT("KG", 2); // (.")
  _ex_CRS(); // !CRS
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xec5b: WORD 'UNK_0xec5d' codep=0x224c parp=0xec5d
// ================================================

void UNK_0xec5d() // UNK_0xec5d
{
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  _at_CRS(); // @CRS
  Push(0x0080);
  Push(cc__5); // 5
  Push(0x001e);
  Push(0x0099);
  SetColor("GREY2");
  POLY_dash_WI(); // POLY-WI
  Push(pp_UNK_0xe91e); // UNK_0xe91e
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(0x000e);
  SetColor("GREY2");
  Push(0x0030);
  Push(h); // I
  Push(Pop() + Pop()); // +
  Push(0x000a);
  POS_dot_PXT(); // POS.PXT
  Push(cc__3); // 3
  SetColor("GREY2");
  Push(0x0030);
  Push(h); // I
  Push(Pop() + Pop()); // +
  Push(0x007a);
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__3); // 3
  SetColor("GREY2");
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(h); // J
  Push(Pop() + Pop()); // +
  Push(0x004a);
  POS_dot_PXT(); // POS.PXT
  Push(2); // 2
  Push(i); // I
  Push(cc__4); // 4
  _eq_(); // =
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  SetColor("GREY2");
  Push(i); // I
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(h); // J
  Push(Pop() + Pop()); // +
  Push(0x008d);
  Push(i); // I
  Push(cc__4); // 4
  _eq_(); // =
  Push(0xffea);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  POS_dot_PXT(); // POS.PXT
  i++;
  } while(i<imax); // (LOOP) 0xffb4

  Push(2); // 2
  SetColor("GREY2");
  Push(0x003d);
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(0x0028);
  POS_dot_PXT(); // POS.PXT
  Push(0x0028);
  Push(0x003d);
  R_gt_(); // R>
  UNK_0xe922(); // UNK_0xe922
  Func8("UNK_0xe6a8");
  C_at_(); // C@
  Push(Pop()+1); // 1+
  Push(2); // 2
  _dot_R(); // .R
  Func8("UNK_0xe6a3");
  Push(Read16(Pop())); // @
  Push(1); // 1
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0x0080);
  Push(0x0064);
  Push(0x001e);
  Push(0x0099);
  SetColor("BLACK");
  POLY_dash_WI(); // POLY-WI
  _at_INST_dash_S(); // @INST-S
  DUP(); // DUP
  UNK_0xeb45(); // UNK_0xeb45
  UNK_0xebcd(); // UNK_0xebcd
  UNK_0xea7d(); // UNK_0xea7d

  label1:
  UNK_0xea44(); // UNK_0xea44
  _ex_CRS(); // !CRS
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xed57: WORD 'UNK_0xed59' codep=0x224c parp=0xed59
// ================================================

void UNK_0xed59() // UNK_0xed59
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) return;
  UNK_0xe82a(); // UNK_0xe82a
  UNK_0xec5d(); // UNK_0xec5d
}

// 0xed65: db 0x4c 0x22 0xac 0x5b 0xae 0x0b 0x41 0x0e 0x78 0x12 0xfa 0x15 0x0a 0x00 0x32 0x0e 0x7b 0x3b 0x60 0x16 0x06 0x00 0x83 0x3b 0x9f 0x11 0xb4 0x0d 0x50 0x0e 0xb7 0x5b 0x76 0x6d 0x50 0x0e 0xac 0x5b 0x76 0x6d 0x5a 0x4f 0x5a 0x4f 0xea 0x84 0xae 0x0b 0xfa 0x15 0x08 0x00 0x5a 0x4f 0x60 0x16 0x04 0x00 0x38 0x4f 0x54 0xa7 0x17 0x85 0x50 0x0e 0x9a 0x74 0x76 0x6d 0x90 0x0e 0x9b 0x54 0x76 0x6d 0x5e 0xe6 0x83 0xe6 0x83 0x3b 0xea 0x6d 0x2e 0x0f 0xa1 0xe6 0x76 0x6d 0x5d 0x17 0x64 0x00 0x9c 0xe6 0x6a 0x6d 0x7a 0x58 0xae 0x0b 0xfa 0x15 0x04 0x00 0xd8 0x93 0x5b 0xec 0x56 0xe6 0x92 0x0c 0x7b 0x3b 0xb3 0x0f 0x7b 0x3b 0x72 0x0f 0x90 0x58 0x76 0x6d 0x7a 0x58 0xb7 0x6d 0xd8 0x93 0x90 0x16 0x4c 0x22 0x38 0xaa 0x32 0x0e 0xac 0x5b 0x83 0x6d 0xac 0x5b 0xae 0x0b 0xb7 0x5b 0xae 0x0b 0x5f 0x12 0x07 0x13 0xfa 0x15 0x04 0x00 0x65 0xed 0x50 0xaa 0xfa 0x15 0xe2 0xff 0xd8 0x93 0x41 0x0e 0xac 0x5b 0x76 0x6d 0x20 0x0f 0x51 0xaf 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x1b 0x54 0x59 0x50 0x45 0x20 0x54 0x48 0x49 0x53 0x20 0x43 0x52 0x45 0x57 0x4d 0x45 0x4d 0x42 0x45 0x52 0x27 0x53 0x20 0x4e 0x41 0x4d 0x45 0x90 0x16 0x4c 0x22 0x98 0x2a 0x38 0x0c 0x98 0x2a 0x38 0x0c 0x0d 0x40 0x1e 0x40 0x16 0x16 0xac 0x0d 0x00 0x00 0x46 0x40 0x19 0x06 0x3e 0x13 0xfa 0x15 0xea 0xff 0xde 0x0d 0x90 0x16 0x29 0x1d 0x3a 0x20 0x4c 0x22 0x66 0xe6 0xb7 0x5b 0xae 0x0b 0x72 0x0f 0x92 0x0c 0x83 0xe6 0xb7 0x5b 0xae 0x0b 0x72 0x0f 0x92 0x0c 0x92 0x0f 0x6e 0xe6 0x92 0x0c 0x60 0x0f 0xf2 0x0e 0x9f 0x12 0x72 0x0f 0x6e 0xe5 0x16 0x16 0xa0 0x86 0x01 0x00 0x74 0x40 0x5d 0x17 0x2c 0x01 0xeb 0x11 0xf2 0x0e 0x32 0x0e 0xad 0x11 0x5f 0xee 0x76 0x6d 0x4e 0xe5 0x20 0x0f 0x5d 0x17 0x26 0x00 0xe6 0xae 0xdc 0x1b 0x08 0x42 0x41 0x4c 0x41 0x4e 0x43 0x45 0x3a 0x6e 0xe5 0x93 0x3b 0xa3 0x28 0xdc 0x1b 0x15 0x20 0x43 0x4f 0x53 0x54 0x3a 0x20 0x33 0x30 0x30 0x20 0x4d 0x55 0x2f 0x53 0x45 0x53 0x53 0x49 0x4f 0x4e 0xfc 0xa2 0x2e 0x0f 0x5d 0x17 0x26 0x00 0xe6 0xae 0xdc 0x1b 0x1e 0x48 0x4f 0x57 0x20 0x4d 0x41 0x4e 0x59 0x20 0x54 0x52 0x41 0x49 0x4e 0x49 0x4e 0x47 0x20 0x53 0x45 0x53 0x53 0x49 0x4f 0x4e 0x53 0x20 0x28 0x30 0x2d 0x5f 0xee 0xae 0x0b 0x20 0x0f 0xe1 0x27 0xdc 0x1b 0x03 0x29 0x3f 0x20 0x6f 0x4f 0x17 0x85 0xac 0x3b 0x1c 0x5c 0x76 0x6d 0x73 0x3b 0x14 0xe5 0xb4 0x0d 0xfc 0xa2 0x90 0x0e 0x20 0x0f 0xf2 0x0e 0xcd 0x0c 0x7f 0x0e 0x72 0x0f 0xf2 0x0e 0xb8 0x15 0x5d 0x17 0x0a 0x00 0xb3 0x0f 0x50 0x0e 0x92 0x0c 0x5d 0x17 0x30 0x00 0x92 0x0f 0x72 0x0f 0xd0 0x15 0xec 0xff 0x5f 0xee 0xae 0x0b 0xad 0x11 0x5f 0xee 0x76 0x6d 0x90 0x16 0x4c 0x22 0x20 0x0f 0x51 0xaf 0x20 0x0f 0x5d 0x17 0x1c 0x00 0xe6 0xae 0xdc 0x1b 0x1c 0x54 0x48 0x49 0x53 0x20 0x4e 0x41 0x4d 0x45 0x20 0x49 0x53 0x20 0x41 0x4c 0x52 0x45 0x41 0x44 0x59 0x20 0x4f 0x4e 0x20 0x46 0x49 0x4c 0x45 0xfc 0xa2 0x2e 0x0f 0x5d 0x17 0x24 0x00 0xe6 0xae 0xdc 0x1b 0x24 0x5b 0x20 0x43 0x48 0x4f 0x4f 0x53 0x45 0x20 0x41 0x4e 0x4f 0x54 0x48 0x45 0x52 0x20 0x4f 0x52 0x20 0x41 0x42 0x4f 0x52 0x54 0x20 0x43 0x52 0x45 0x41 0x54 0x49 0x4f 0x4e 0x20 0x5d 0xfc 0xa2 0x38 0xaa 0xf2 0x0e 0x32 0x0e 0xc8 0x0d 0xfa 0x15 0xf6 0xff 0x20 0x0f 0x51 0xaf 0x2e 0x0f 0x51 0xaf 0x78 0x12 0xfa 0x15 0x1a 0x00 0x20 0x0f 0x5d 0x17 0x1c 0x00 0xe6 0xae 0xdc 0x1b 0x03 0x52 0x45 0x2d 0x1b 0xee 0xfc 0xa2 0x20 0x0f 0x60 0x16 0x0a 0x00 0xa1 0xe6 0xc5 0x6d 0x5b 0xec 0x2e 0x0f 0xc5 0xa2 0x7a 0x58 0xc5 0x6d 0x65 0x4f 0x17 0x85 0xd8 0x93 0xfc 0xa2 0xd8 0x93 0x90 0x16 0x4c 0x22 0x75 0x75 0x3d 0x75 0x2e 0x0f 0x5d 0x17 0x19 0x00 0x20 0x0f 0xb8 0x15 0x7e 0xe6 0xdb 0x23 0x8c 0x6e 0xfa 0x15 0x0c 0x00 0x32 0x0e 0x20 0x0f 0x4a 0x17 0x60 0x16 0x04 0x00 0x84 0x7a 0xd0 0x15 0xe8 0xff 0xc9 0x79 0x90 0x16 0x4c 0x22 0x20 0x0f 0x5d 0x17 0x1b 0x00 0xe6 0xae 0x1b 0xee 0xfc 0xa2 0x5d 0x17 0x3c 0x00 0x90 0x58 0x76 0x6d 0x9b 0x3b 0x5d 0x17 0x32 0x00 0x1c 0xe9 0xae 0x0b 0x20 0xe9 0xd8 0x93 0x90 0x16 0x4c 0x22 0x2b 0xf0 0xc5 0xa2 0x28 0xa5 0x5a 0x4f 0x17 0x85 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x30 0x00 0x1c 0xe9 0xae 0x0b 0x20 0xe9 0x1c 0x5c 0xc5 0x6d 0x5d 0x17 0x0e 0x00 0x14 0xe5 0x8e 0xe5 0x32 0x0e 0xfc 0xa2 0xfd 0xef 0xfa 0x15 0x0e 0x00 0xdb 0x23 0x7e 0xe6 0x9b 0xac 0x2e 0x0f 0x60 0x16 0x04 0x00 0x51 0xef 0xfa 0x15 0xc4 0xff 0xd8 0x93 0x20 0x0f 0x51 0xaf 0x90 0x16 0x4c 0x22 0x20 0x0f 0x51 0xaf 0x2e 0x0f 0x51 0xaf 0xc5 0xa2 0xa1 0xe6 0x92 0x0c 0x89 0x12 0xfa 0x15 0x76 0x00 0x7e 0xe6 0xc5 0x6d 0x83 0xe6 0x83 0x3b 0x20 0x0f 0xfd 0x6d 0xac 0x5b 0xc5 0x6d 0xb7 0x5b 0xc5 0x6d 0x5d 0x17 0x75 0x00 0x5d 0x17 0x24 0x00 0x1c 0xe9 0xae 0x0b 0x20 0xe9 0x5d 0x17 0x18 0x00 0x90 0x58 0x76 0x6d 0xa3 0x3b 0x85 0x58 0x76 0x6d 0x7a 0x58 0xc5 0x6d 0xc4 0xab 0x9b 0x58 0x76 0x6d 0x20 0x0f 0x5d 0x17 0x20 0x00 0xe6 0xae 0x28 0xa5 0xdc 0x1b 0x0f 0x53 0x45 0x4c 0x45 0x43 0x54 0x20 0x52 0x41 0x43 0x45 0x20 0x5e 0x5c 0x20 0xe0 0xe5 0xfc 0xa2 0x7a 0x58 0xc5 0x6d 0x20 0x0f 0xf4 0x74 0x9b 0x54 0xc5 0x6d 0xc5 0xa2 0x65 0xed 0xeb 0xed 0x51 0xf0 0xfc 0xa2 0x60 0x16 0x2b 0x00 0x20 0x0f 0x5d 0x17 0x16 0x00 0xe6 0xae 0xdc 0x1b 0x16 0x54 0x48 0x49 0x53 0x20 0x46 0x49 0x4c 0x45 0x20 0x49 0x53 0x20 0x4e 0x4f 0x54 0x20 0x45 0x4d 0x50 0x54 0x59 0xfc 0xa2 0x3d 0xee 0x20 0x0f 0x51 0xaf 0xfc 0xa2 0x20 0x0f 0x5d 0x17 0x15 0x00 0xe6 0xae 0xf9 0xe5 0xfc 0xa2 0x2e 0x0f 0x15 0xe6 0x90 0x16 0x4c 0x22 0x4e 0xe5 0x20 0x0f 0x5d 0x17 0x10 0x00 0xe6 0xae 0xdc 0x1b 0x0f 0x53 0x45 0x4c 0x45 0x43 0x54 0x20 0x53 0x4b 0x49 0x4c 0x4c 0x20 0x5e 0x5c 0xfc 0xa2 0x2e 0x0f 0x5d 0x17 0x12 0x00 0xe6 0xae 0xe0 0xe5 0xfc 0xa2 0x90 0x16 0x4c 0x22 0xa1 0xe6 0xae 0x0b 0x3d 0x0f 0xf5 0x12 0xfa 0x15 0x27 0x00 0x20 0x0f 0x51 0xaf 0x20 0x0f 0x5d 0x17 0x21 0x00 0xe6 0xae 0xdc 0x1b 0x10 0x59 0x4f 0x55 0x20 0x43 0x41 0x4e 0x27 0x54 0x20 0x54 0x52 0x41 0x49 0x4e 0x20 0x3c 0xe6 0x60 0x16 0x2c 0x00 0x20 0x0f 0x5d 0x17 0x1d 0x00 0xe6 0xae 0xdc 0x1b 0x1d 0x54 0x48 0x45 0x52 0x45 0x20 0x49 0x53 0x20 0x4e 0x4f 0x20 0x4f 0x4e 0x45 0x20 0x48 0x45 0x52 0x45 0x20 0x54 0x4f 0x20 0x54 0x52 0x41 0x49 0x4e 0xfc 0xa2 0x3d 0xee 0x20 0x0f 0x51 0xaf 0x90 0x16 0x4c 0x22 0x16 0x16 0x2c 0x01 0x00 0x00 0x78 0xe5 0x41 0x0e 0x89 0x12 0xfa 0x15 0x29 0x00 0x20 0x0f 0x5d 0x17 0x12 0x00 0xe6 0xae 0xdc 0x1b 0x12 0x49 0x4e 0x53 0x55 0x46 0x46 0x49 0x43 0x49 0x45 0x4e 0x54 0x20 0x46 0x55 0x4e 0x44 0x53 0x69 0x26 0xfc 0xa2 0x3d 0xee 0x20 0x0f 0x51 0xaf 0x90 0x16 0x4c 0x22 0x66 0xe6 0xb7 0x5b 0xae 0x0b 0x72 0x0f 0x92 0x0c 0x83 0xe6 0xb7 0x5b 0xae 0x0b 0x72 0x0f 0x92 0x0c 0x5f 0x12 0xfa 0x15 0x66 0x00 0x4e 0xe5 0x20 0x0f 0x5d 0x17 0x22 0x00 0xe6 0xae 0xdc 0x1b 0x22 0x4d 0x41 0x58 0x49 0x4d 0x55 0x4d 0x20 0x54 0x52 0x41 0x49 0x4e 0x49 0x4e 0x47 0x20 0x4c 0x45 0x56 0x45 0x4c 0x20 0x48 0x41 0x53 0x20 0x41 0x4c 0x52 0x45 0x41 0x44 0x59 0xfc 0xa2 0x2e 0x0f 0x5d 0x17 0x1c 0x00 0xe6 0xae 0xdc 0x1b 0x1c 0x42 0x45 0x45 0x4e 0x20 0x41 0x54 0x54 0x41 0x49 0x4e 0x45 0x44 0x20 0x46 0x4f 0x52 0x20 0x54 0x48 0x49 0x53 0x20 0x53 0x4b 0x49 0x4c 0x4c 0xfc 0xa2 0x3d 0xee 0x4e 0xe5 0x2e 0x0f 0x60 0x16 0x04 0x00 0x20 0x0f 0x90 0x16 0x29 0x1d 0x04 0xa5 0x0d 0x09 0x1f 0x9e 0x0d 0x09 0x2b 0x97 0x0d 0x09 0x2f 0x90 0x0d 0x09 0x3b 0x89 0x0d 0x09 0x23 0x4c 0x22 0x5a 0x4f 0xbd 0x5c 0x76 0x6d 0x62 0xf1 0xac 0x5b 0xc5 0x6d 0xb7 0x5b 0xc5 0x6d 0xb4 0xf2 0xdc 0xab 0x38 0xaa 0x32 0x0e 0xac 0x3b 0xb3 0x0f 0xac 0x5b 0x83 0x6d 0xb4 0xf2 0x3a 0xac 0x32 0x0e 0x50 0xaa 0xfa 0x15 0xea 0xff 0x30 0xf2 0x07 0x13 0xfa 0x15 0x52 0x00 0x63 0xee 0x5d 0x17 0x2c 0x01 0x5f 0xee 0xae 0x0b 0xd6 0x11 0xf0 0x0d 0x3e 0x13 0xfa 0x15 0x0e 0x00 0xb7 0x10 0x5d 0x17 0xca 0xc5 0xce 0x84 0x60 0x16 0x04 0x00 0xde 0x0d 0x83 0xe6 0xb7 0x5b 0xae 0x0b 0x72 0x0f 0x92 0x0c 0x6e 0xe6 0x92 0x0c 0x5f 0xee 0xae 0x0b 0xb3 0x0f 0x72 0x0f 0x66 0xe6 0xb7 0x5b 0xae 0x0b 0x72 0x0f 0x92 0x0c 0xad 0x11 0x83 0xe6 0xb7 0x5b 0xae 0x0b 0x72 0x0f 0x6a 0x6d 0x5b 0xec 0x5a 0x4f 0x17 0x85 0xd8 0x93 0x20 0x0f 0x51 0xaf 0xb6 0x4f 0x5a 0x4f 0x38 0x4f 0x54 0xa7 0xbd 0x5c 0x76 0x6d 0x90 0x16 0x4c 0x22 0x30 0x75 0x7b 0x3b 0x5f 0x12 0x41 0x0e 0xfa 0x15 0x2a 0x00 0x20 0x0f 0x5d 0x17 0x19 0x00 0xe6 0xae 0xdc 0x1b 0x19 0x41 0x4e 0x44 0x52 0x4f 0x49 0x44 0x53 0x20 0x43 0x41 0x4e 0x27 0x54 0x20 0x42 0x45 0x20 0x54 0x52 0x41 0x49 0x4e 0x45 0x44 0xfc 0xa2 0x3d 0xee 0x90 0x16 0x4c 0x22 0x4e 0xe5 0xa1 0xe6 0xae 0x0b 0x2e 0x0f 0x64 0x13 0x73 0x3b 0xf5 0x12 0xfa 0x15 0x08 0x00 0x90 0xf1 0x60 0x16 0x16 0x00 0x69 0xf3 0x07 0x13 0xfa 0x15 0x0e 0x00 0xf5 0xf1 0xfa 0x15 0x08 0x00 0xc5 0xa2 0xcb 0xf2 0xfc 0xa2 0x20 0x0f 0x51 0xaf 0x20 0x0f 0x5d 0x17 0x15 0x00 0xe6 0xae 0xf9 0xe5 0xfc 0xa2 0x2e 0x0f 0x15 0xe6 0x90 0x16 0x4c 0x22 0xa1 0xe6 0xc5 0x6d 0x7e 0xe6 0x5d 0x17 0x0f 0x00 0x20 0x0f 0xfd 0x6d 0x90 0x16 0x4c 0x22 0x4e 0xe5 0xa1 0xe6 0x92 0x0c 0x89 0x12 0xfa 0x15 0x33 0x00 0x20 0x0f 0x5d 0x17 0x1a 0x00 0xe6 0xae 0xdc 0x1b 0x1a 0x54 0x48 0x49 0x53 0x20 0x46 0x49 0x4c 0x45 0x20 0x49 0x53 0x20 0x41 0x4c 0x52 0x45 0x41 0x44 0x59 0x20 0x45 0x4d 0x50 0x54 0x59 0xfc 0xa2 0x3d 0xee 0x20 0x0f 0x51 0xaf 0x60 0x16 0x4f 0x00 0x20 0x0f 0x5d 0x17 0x17 0x00 0xe6 0xae 0xdc 0x1b 0x17 0x44 0x45 0x4c 0x45 0x54 0x45 0x20 0x54 0x48 0x49 0x53 0x20 0x43 0x52 0x45 0x57 0x4d 0x45 0x4d 0x42 0x45 0x52 0x3f 0xfc 0xa2 0x2e 0x0f 0x93 0x3b 0xe6 0xae 0xdc 0x1b 0x06 0x5b 0x4e 0x20 0x20 0x59 0x5d 0xfc 0xa2 0x38 0xaa 0xf2 0x0e 0x32 0x0e 0xc8 0x0d 0xfa 0x15 0xf6 0xff 0x9f 0x12 0xfa 0x15 0x06 0x00 0xe5 0xf3 0x5b 0xec 0x4e 0xe5 0x20 0x0f 0x5d 0x17 0x15 0x00 0xe6 0xae 0xf9 0xe5 0xfc 0xa2 0x2e 0x0f 0x15 0xe6 0x90 0x16 'L" [  A x     2 {;`    ;    P  [vmP  [vmZOZO        ZO`   8OT   P  tvm   Tvm^    ; m.   vm] d   jmzX        [ V   {;  {;r  XvmzX m    L"8 2  [ m [   [  _       e P       A  [vm  Q   L"   TYPE THIS CREWMEMBER'S NAME  L" *8  *8  @ @      F@  >         ) : L"f  [  r      [  r     n   `     r n       t@] ,     2   _ vmN   ] &      BALANCE:n  ; (    COST: 300 MU/SESSION  . ] &      HOW MANY TRAINING SESSIONS (0-_      '   )? oO   ; \vms;               r     ]     P   ] 0   r     _     _ vm  L"  Q   ]        THIS NAME IS ALREADY ON FILE  . ] $     $[ CHOOSE ANOTHER OR ABORT CREATION ]  8   2         Q . Q x       ]        RE-      `      m[ .   zX meO          L"uu=u. ]       ~  # n    2   J `    z     y  L"  ]         ] <  Xvm ;] 2           L"+   ( ZO  ]   ] 0        \ m]       2          #~   . `   Q         Q   L"  Q . Q           v ~  m   ;   m [ m [ m] u ] $       ]    Xvm ; XvmzX m   Xvm  ]     (    SELECT RACE ^\     zX m   t T m  e   Q   ` +   ]        THIS FILE IS NOT EMPTY  =   Q     ]         .     L"N   ]        SELECT SKILL ^\  . ]           L"    =     '   Q   ] !      YOU CAN'T TRAIN < ` ,   ]        THERE IS NO ONE HERE TO TRAIN  =   Q   L"  ,   x A     )   ]        INSUFFICIENT FUNDSi&  =   Q   L"f  [  r      [  r   _   f N   ] "     "MAXIMUM TRAINING LEVEL HAS ALREADY  . ]        BEEN ATTAINED FOR THIS SKILL  = N . `       )         +   /   ;   #L"ZO \vmb  [ m [ m    8 2  ;   [ m  : 2 P     0     R c ] , _       >       ]     `        [  r   n   _     r f  [  r        [  r jm[ ZO      Q  OZO8OT  \vm  L"0u{;_ A   *   ]        ANDROIDS CAN'T BE TRAINED  =   L"N     . d s;        `   i                     Q   ]         .     L"   m~ ]      m  L"N         3   ]        THIS FILE IS ALREADY EMPTY  =   Q ` O   ]        DELETE THIS CREWMEMBER?  .  ;     [N  Y]  8   2               [ N   ]         .     '

// ================================================
// 0xf495: WORD 'UNK_0xf497' codep=0x224c parp=0xf497
// ================================================

void UNK_0xf497() // UNK_0xf497
{
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  SetColor("WHITE");
  SetColor("GREY1");
  SetColor("RED");
  _ask_MRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  _ex_(); // !
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  UNK_0xe6c5(); // UNK_0xe6c5
  UNK_0xe877(); // UNK_0xe877
  Push(pp_UNK_0xe864); // UNK_0xe864
  BLD_dash_CRS(); // BLD-CRS
  Push(0x0081);
  UNK_0xe92a(); // UNK_0xe92a
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  UNK_0xec5d(); // UNK_0xec5d
  Push(0); // 0
  Push(0x0015);
  CMESS(); // CMESS
  UNK_0xe5fb(); // UNK_0xe5fb
  _ex_CRS(); // !CRS
  Push(1); // 1
  UNK_0xe617(); // UNK_0xe617
}


// ================================================
// 0xf4d5: WORD 'PFILE-FUNCTION' codep=0x4a4f parp=0xf4e8
// ================================================
// 0xf4e8: db 0x04 0x00 0x48 0x3a 0x00 0x00 0x9d 0xf0 0x01 0x00 0xa3 0xf3 0x02 0x00 0xf9 0xf3 0x03 0x00 0x09 0x13 '  H:                '

// ================================================
// 0xf4fc: WORD '(U-PFILE)' codep=0x224c parp=0xf50a
// ================================================
// entry

void _ro_U_dash_PFILE_rc_() // (U-PFILE)
{
  UNK_0xe55c(); // UNK_0xe55c
  Push2Words("*PERSON");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  UNK_0xf497(); // UNK_0xf497

  label2:
  XYSCAN(); // XYSCAN
  Push(pp_NCRS); // NCRS
  _plus__ex_(); // +!
  UNK_0xed59(); // UNK_0xed59
  Push(pp_UNK_0xe864); // UNK_0xe864
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
  _ask_TRIG(); // ?TRIG
  DUP(); // DUP
  if (Pop() == 0) goto label1;
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Func10("PFILE-FUNCTION");

  label1:
  if (Pop() == 0) goto label2;
  _gt_0FONT(); // >0FONT
  Push(cc__4); // 4
  UNK_0xe566(); // UNK_0xe566
  ICLOSE(); // ICLOSE
  ICLOSE(); // ICLOSE
}

// 0xf542: db 0x50 0x46 0x49 0x4c 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'PFILE-VOC_____________________ '
  