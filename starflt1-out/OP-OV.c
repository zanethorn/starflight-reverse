// ====== OVERLAY 'OP-OV' ======
// store offset = 0xe430
// overlay size   = 0x1130

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0xa509 C-string:'UNK_0x3f3b'
// 1704:      UNK_0xe446  codep:0x1d29 parp:0xe446 size:0x0002 C-string:'UNK_0xe446'
// 1705:      UNK_0xe44a  codep:0x224c parp:0xe44a size:0x0010 C-string:'UNK_0xe44a'
// 1706:      UNK_0xe45c  codep:0x744d parp:0xe45c size:0x0003 C-string:'UNK_0xe45c'
// 1707:      UNK_0xe461  codep:0x744d parp:0xe461 size:0x0003 C-string:'UNK_0xe461'
// 1708:      UNK_0xe466  codep:0x744d parp:0xe466 size:0x0003 C-string:'UNK_0xe466'
// 1709:      UNK_0xe46b  codep:0x744d parp:0xe46b size:0x0003 C-string:'UNK_0xe46b'
// 1710:      UNK_0xe470  codep:0x744d parp:0xe470 size:0x0003 C-string:'UNK_0xe470'
// 1711:      UNK_0xe475  codep:0x744d parp:0xe475 size:0x001d C-string:'UNK_0xe475'
// 1712:      UNK_0xe494  codep:0x224c parp:0xe494 size:0x0010 C-string:'UNK_0xe494'
// 1713:      UNK_0xe4a6  codep:0x1d29 parp:0xe4a6 size:0x003a C-string:'UNK_0xe4a6'
// 1714:      UNK_0xe4e2  codep:0x224c parp:0xe4e2 size:0x002a C-string:'UNK_0xe4e2'
// 1715:      UNK_0xe50e  codep:0x224c parp:0xe50e size:0x007c C-string:'UNK_0xe50e'
// 1716:      UNK_0xe58c  codep:0x1d29 parp:0xe58c size:0x000d C-string:'UNK_0xe58c'
// 1717:      UNK_0xe59b  codep:0x224c parp:0xe59b size:0x005a C-string:'UNK_0xe59b'
// 1718:      UNK_0xe5f7  codep:0x224c parp:0xe5f7 size:0x003e C-string:'UNK_0xe5f7'
// 1719:      UNK_0xe637  codep:0x224c parp:0xe637 size:0x0152 C-string:'UNK_0xe637'
// 1720:      UNK_0xe78b  codep:0x224c parp:0xe78b size:0x003d C-string:'UNK_0xe78b'
// 1721:      UNK_0xe7ca  codep:0x224c parp:0xe7ca size:0x0050 C-string:'UNK_0xe7ca'
// 1722:      UNK_0xe81c  codep:0x224c parp:0xe81c size:0x0024 C-string:'UNK_0xe81c'
// 1723:      UNK_0xe842  codep:0x224c parp:0xe842 size:0x0012 C-string:'UNK_0xe842'
// 1724:      UNK_0xe856  codep:0x224c parp:0xe856 size:0x01b6 C-string:'UNK_0xe856'
// 1725:       (NOTICES)  codep:0x4a4f parp:0xea1a size:0x00ed C-string:'_ro_NOTICES_rc_'
// 1726:      UNK_0xeb09  codep:0x224c parp:0xeb09 size:0x00b6 C-string:'UNK_0xeb09'
// 1727:      UNK_0xebc1  codep:0x224c parp:0xebc1 size:0x006d C-string:'UNK_0xebc1'
// 1728:      UNK_0xec30  codep:0x224c parp:0xec30 size:0x00af C-string:'UNK_0xec30'
// 1729:      (BAD-PLAN)  codep:0x4a4f parp:0xecee size:0x001c C-string:'_ro_BAD_dash_PLAN_rc_'
// 1730:      UNK_0xed0c  codep:0x224c parp:0xed0c size:0x010b C-string:'UNK_0xed0c'
// 1731:      UNK_0xee19  codep:0x224c parp:0xee19 size:0x003a C-string:'UNK_0xee19'
// 1732:      UNK_0xee55  codep:0x224c parp:0xee55 size:0x0035 C-string:'UNK_0xee55'
// 1733:      UNK_0xee8c  codep:0x224c parp:0xee8c size:0x0055 C-string:'UNK_0xee8c'
// 1734:      UNK_0xeee3  codep:0x224c parp:0xeee3 size:0x0052 C-string:'UNK_0xeee3'
// 1735:      UNK_0xef37  codep:0x224c parp:0xef37 size:0x0083 C-string:'UNK_0xef37'
// 1736:      UNK_0xefbc  codep:0x224c parp:0xefbc size:0x003a C-string:'UNK_0xefbc'
// 1737:      UNK_0xeff8  codep:0x224c parp:0xeff8 size:0x0031 C-string:'UNK_0xeff8'
// 1738:      UNK_0xf02b  codep:0x224c parp:0xf02b size:0x0018 C-string:'UNK_0xf02b'
// 1739:      UNK_0xf045  codep:0x224c parp:0xf045 size:0x00e5 C-string:'UNK_0xf045'
// 1740:      UNK_0xf12c  codep:0x224c parp:0xf12c size:0x0146 C-string:'UNK_0xf12c'
// 1741:      UNK_0xf274  codep:0x224c parp:0xf274 size:0x01da C-string:'UNK_0xf274'
// 1742:      UNK_0xf450  codep:0x224c parp:0xf450 size:0x0028 C-string:'UNK_0xf450'
// 1743:      UNK_0xf47a  codep:0x224c parp:0xf47a size:0x005a C-string:'UNK_0xf47a'
// 1744:         OP-CASE  codep:0x4a4f parp:0xf4e0 size:0x0010 C-string:'OP_dash_CASE'
// 1745:          (U-OP)  codep:0x224c parp:0xf4fb size:0x0000 C-string:'_ro_U_dash_OP_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe446[2] = {0x09, 0x00}; // UNK_0xe446
unsigned char UNK_0xe4a6[58] = {0x41, 0x9d, 0x61, 0x9d, 0x6f, 0x8f, 0x6f, 0x79, 0x64, 0x79, 0x64, 0x87, 0x60, 0x8b, 0x58, 0x8b, 0x58, 0x5d, 0x60, 0x5d, 0x64, 0x61, 0x64, 0x6f, 0x6f, 0x6f, 0x6f, 0x58, 0x61, 0x4a, 0x41, 0x4a, 0x33, 0x58, 0x33, 0x6f, 0x3e, 0x6f, 0x3e, 0x61, 0x42, 0x5d, 0x4a, 0x5d, 0x4a, 0x8b, 0x42, 0x8b, 0x3e, 0x87, 0x3e, 0x79, 0x33, 0x79, 0x33, 0x8f, 0x41, 0x9d}; // UNK_0xe4a6
unsigned char UNK_0xe58c[13] = {0x02, 0x0a, 0x02, 0x09, 0x34, 0x0a, 0x37, 0x09, 0x40, 0x0a, 0x78, 0x09, 0x26}; // UNK_0xe58c



// 0xe442: db 0x11 0x01 '  '

// ================================================
// 0xe444: WORD 'UNK_0xe446' codep=0x1d29 parp=0xe446
// ================================================
// 0xe446: db 0x09 0x00 '  '

// ================================================
// 0xe448: WORD 'UNK_0xe44a' codep=0x224c parp=0xe44a
// ================================================

void UNK_0xe44a() // UNK_0xe44a
{
  Push(pp_UNK_0xe446); // UNK_0xe446
  Push(Read16(Pop())); // @
}

// 0xe450: db 0x4d 0x74 0x23 0x0a 0x02 0x4d 0x74 0x30 0x0b 0xff 'Mt#  Mt0  '

// ================================================
// 0xe45a: WORD 'UNK_0xe45c' codep=0x744d parp=0xe45c
// ================================================
// 0xe45c: db 0x24 0x0a 0x01 '$  '

// ================================================
// 0xe45f: WORD 'UNK_0xe461' codep=0x744d parp=0xe461
// ================================================
// 0xe461: db 0x24 0x0b 0x02 '$  '

// ================================================
// 0xe464: WORD 'UNK_0xe466' codep=0x744d parp=0xe466
// ================================================
// 0xe466: db 0x24 0x11 0x02 '$  '

// ================================================
// 0xe469: WORD 'UNK_0xe46b' codep=0x744d parp=0xe46b
// ================================================
// 0xe46b: db 0x24 0x13 0x01 '$  '

// ================================================
// 0xe46e: WORD 'UNK_0xe470' codep=0x744d parp=0xe470
// ================================================
// 0xe470: db 0x24 0x14 0x01 '$  '

// ================================================
// 0xe473: WORD 'UNK_0xe475' codep=0x744d parp=0xe475
// ================================================
// 0xe475: db 0x24 0x15 0x0f 0x4c 0x22 0x5d 0x17 0x70 0xbd 0xce 0x84 0x90 0x16 0x4c 0x22 0x20 0x0f 0x48 0xe4 0x1d 0xaf 0x2e 0x0f 0x48 0xe4 0x1d 0xaf 0x90 0x16 '$  L"] p     L"  H   . H     '

// ================================================
// 0xe492: WORD 'UNK_0xe494' codep=0x224c parp=0xe494
// ================================================

void UNK_0xe494() // UNK_0xe494
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
// 0xe4a4: WORD 'UNK_0xe4a6' codep=0x1d29 parp=0xe4a6
// ================================================
// 0xe4a6: db 0x41 0x9d 0x61 0x9d 0x6f 0x8f 0x6f 0x79 0x64 0x79 0x64 0x87 0x60 0x8b 0x58 0x8b 0x58 0x5d 0x60 0x5d 0x64 0x61 0x64 0x6f 0x6f 0x6f 0x6f 0x58 0x61 0x4a 0x41 0x4a 0x33 0x58 0x33 0x6f 0x3e 0x6f 0x3e 0x61 0x42 0x5d 0x4a 0x5d 0x4a 0x8b 0x42 0x8b 0x3e 0x87 0x3e 0x79 0x33 0x79 0x33 0x8f 0x41 0x9d 'A a o oydyd ` X X]`]dadooooXaJAJ3X3o>o>aB]J]J B > >y3y3 A '

// ================================================
// 0xe4e0: WORD 'UNK_0xe4e2' codep=0x224c parp=0xe4e2
// ================================================

void UNK_0xe4e2() // UNK_0xe4e2
{
  BROWN(); // BROWN
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xe4a6); // UNK_0xe4a6
  Push(0x003a);
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  C_at_(); // C@
  Push(i); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff2

  Push(0x001c);
  UNK_0xe494(); // UNK_0xe494
}


// ================================================
// 0xe50c: WORD 'UNK_0xe50e' codep=0x224c parp=0xe50e
// ================================================

void UNK_0xe50e() // UNK_0xe50e
{
  WHITE(); // WHITE
  WHITE(); // WHITE
  LT_dash_BLUE(); // LT-BLUE
  _ask_MRC(); // ?MRC
  DUP(); // DUP
  Push(pp_UNK_0xe446); // UNK_0xe446
  _ex_(); // !
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  DK_dash_BLUE(); // DK-BLUE
  _ex_COLOR(); // !COLOR
  Push(2); // 2
  Push(1); // 1
  Push(0x009d);
  Push(1); // 1
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x000b);
  Push(0x009d);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x00c6);
  Push(0x009d);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(1); // 1
  Push(0x00c6);
  Push(1); // 1
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x009e);
  Push(0x00c6);
  OVER(); // OVER
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x0036);
  Push(2); // 2
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x0077);
  Push(2); // 2
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  UNK_0xe4e2(); // UNK_0xe4e2
}


// ================================================
// 0xe58a: WORD 'UNK_0xe58c' codep=0x1d29 parp=0xe58c
// ================================================
// 0xe58c: db 0x02 0x0a 0x02 0x09 0x34 0x0a 0x37 0x09 0x40 0x0a 0x78 0x09 0x26 '    4 7 @ x &'

// ================================================
// 0xe599: WORD 'UNK_0xe59b' codep=0x224c parp=0xe59b
// ================================================

void UNK_0xe59b() // UNK_0xe59b
{
  _gt_3FONT(); // >3FONT
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(0x003a);
  Push(0x00b3);
  POS_dot_(); // POS.
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  PRINT("INTERSTEL", 9); // (.")
  _gt_2FONT(); // >2FONT
  Push(0x0036);
  Push(0x003c);
  POS_dot_(); // POS.
  PRINT("OPERATIONS", 10); // (.")
  _gt_1FONT(); // >1FONT
  Push(0x0031);
  Push(0x0028);
  POS_dot_(); // POS.
  PRINT("ORBITAL DIVISION", 16); // (.")
}


// ================================================
// 0xe5f5: WORD 'UNK_0xe5f7' codep=0x224c parp=0xe5f7
// ================================================

void UNK_0xe5f7() // UNK_0xe5f7
{
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x000d);
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("NOTICES", 7); // (.")
  Push(0x0042);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("EVALUATION", 10); // (.")
  Push(0x0083);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("EXIT", 4); // (.")
}


// ================================================
// 0xe635: WORD 'UNK_0xe637' codep=0x224c parp=0xe637
// ================================================

void UNK_0xe637() // UNK_0xe637
{
  _gt_HIDDEN(); // >HIDDEN
  UNK_0xe50e(); // UNK_0xe50e
  UNK_0xe5f7(); // UNK_0xe5f7
  UNK_0xe59b(); // UNK_0xe59b
  WHITE(); // WHITE
  BLUE(); // BLUE
  BLUE(); // BLUE
  _ask_MRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  _ex_(); // !
  Push(pp__ask__gt_OP); // ?>OP
  Push(Read16(Pop())); // @
  DUP(); // DUP
  Push(pp_NCRS); // NCRS
  _ex_(); // !
  Push(pp_OCRS); // OCRS
  _ex_(); // !
  Push(pp_UNK_0xe58c); // UNK_0xe58c
  BLD_dash_CRS(); // BLD-CRS
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}

// 0xe663: db 0x4c 0x22 0x82 0xe4 0x20 0x0f 0x5d 0x17 0x23 0x00 0xe6 0xae 0x0a 0x4f 0x17 0x85 0xdc 0x1b 0x22 0x5c 0x20 0x4e 0x45 0x58 0x54 0x20 0x4d 0x45 0x53 0x53 0x41 0x47 0x45 0x20 0x20 0x50 0x52 0x45 0x56 0x49 0x4f 0x55 0x53 0x20 0x4d 0x45 0x53 0x53 0x41 0x47 0x45 0x20 0x5e 0xfc 0xa2 0x2e 0x0f 0x5d 0x17 0x25 0x00 0xe6 0xae 0x0a 0x4f 0x17 0x85 0xdc 0x1b 0x24 0x50 0x52 0x45 0x53 0x53 0x20 0x53 0x50 0x41 0x43 0x45 0x42 0x41 0x52 0x20 0x54 0x4f 0x20 0x52 0x45 0x50 0x4c 0x41 0x59 0x20 0x4f 0x52 0x20 0x5b 0x20 0x51 0x55 0x49 0x54 0x20 0x5d 0xfc 0xa2 0x90 0x16 0x4c 0x22 0x82 0xe4 0x20 0x0f 0x5d 0x17 0x1a 0x00 0xe6 0xae 0x0a 0x4f 0x17 0x85 0xdc 0x1b 0x1a 0x50 0x52 0x45 0x53 0x53 0x20 0x53 0x50 0x41 0x43 0x45 0x42 0x41 0x52 0x20 0x54 0x4f 0x20 0x43 0x4f 0x4e 0x54 0x49 0x4e 0x55 0x45 0xfc 0xa2 0x2e 0x0f 0x5d 0x17 0x21 0x00 0xe6 0xae 0x0a 0x4f 0x17 0x85 0xdc 0x1b 0x20 0x50 0x52 0x45 0x53 0x53 0x20 0x5b 0x5d 0x20 0x54 0x4f 0x20 0x41 0x42 0x4f 0x52 0x54 0x20 0x43 0x55 0x52 0x52 0x45 0x4e 0x54 0x20 0x4e 0x4f 0x54 0x49 0x43 0x45 0xfc 0xa2 0x90 0x16 0x4c 0x22 0xfd 0x8e 0xf9 0x8b 0x5d 0x17 0xc5 0x00 0x3d 0x0f 0x5d 0x17 0x0c 0x00 0x5d 0x17 0x9d 0x00 0x48 0xe4 0xee 0xa0 0x25 0x95 0x73 0x3b 0x5d 0x17 0xc3 0x00 0x2b 0xa0 0x0a 0x4f 0x17 0x85 0x7a 0x58 0xc5 0x6d 0xdc 0x1b 0x07 0x4e 0x4f 0x54 0x49 0x43 0x45 0x53 0x81 0x94 0x5d 0x17 0x2d 0x00 0x5d 0x17 0xc1 0x00 0x2b 0xa0 0x72 0x5e 0xae 0x0b 0xdb 0x23 0xc2 0xba 0xdb 0x23 0x5d 0x17 0x0a 0x00 0xe6 0x06 0xcf 0x8b 0x13 0x8f 0x90 0x16 'L"    ] #    O    "\ NEXT MESSAGE  PREVIOUS MESSAGE ^  . ] %    O    $PRESS SPACEBAR TO REPLAY OR [ QUIT ]    L"    ]      O     PRESS SPACEBAR TO CONTINUE  . ] !    O     PRESS [] TO ABORT CURRENT NOTICE    L"    ]   = ]   ]   H   % s;]   +  O  zX m   NOTICES  ] - ]   + r^   #   #]           '

// ================================================
// 0xe789: WORD 'UNK_0xe78b' codep=0x224c parp=0xe78b
// ================================================

void UNK_0xe78b() // UNK_0xe78b
{
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  Push(0x00c5);
  Push(cc__3); // 3
  Push(0x000c);
  Push(0x009c);
  UNK_0xe44a(); // UNK_0xe44a
  POLY_dash_WI(); // POLY-WI
  _gt_2FONT(); // >2FONT
  Push(cc__3); // 3
  Push(0x00c3);
  POS_dot_(); // POS.
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  PRINT("EVALUATION", 10); // (.")
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  _gt_1FONT(); // >1FONT
}


// ================================================
// 0xe7c8: WORD 'UNK_0xe7ca' codep=0x224c parp=0xe7ca
// ================================================

void UNK_0xe7ca() // UNK_0xe7ca
{
  _2DUP(); // 2DUP
  Push(Pop()+1); // 1+
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(0); // 0
  ROT(); // ROT
  ROT(); // ROT

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  C_at_(); // C@
  Push(cc_BL); // BL
  _eq_(); // =
  Push(i); // I
  Push(Pop()+1); // 1+
  Push(i); // I'
  _eq_(); // =
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(i); // I
  Push(cc__3); // 3
  PICK(); // PICK
  _dash_(); // -
  LEAVE(); // LEAVE

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  DUP(); // DUP
  Push(cc__4); // 4
  PICK(); // PICK
  Push(Pop() + Pop()); // +
  Push(Pop()+1); // 1+
  ROT(); // ROT
  Push(cc__3); // 3
  PICK(); // PICK
  _dash_(); // -
  Push(Pop()-1); // 1-
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe81a: WORD 'UNK_0xe81c' codep=0x224c parp=0xe81c
// ================================================

void UNK_0xe81c() // UNK_0xe81c
{
  _2DUP(); // 2DUP
  Push(pp_CTY); // CTY
  _ex_(); // !
  Push(pp_CTX); // CTX
  _ex_(); // !
  SWAP(); // SWAP
  Push(cc__4); // 4
  Push(Pop() * Pop()); // *
  Push(cc__4); // 4
  Push(Pop() + Pop()); // +
  Push(0x00b4);
  ROT(); // ROT
  Push(cc__7); // 7
  Push(Pop() * Pop()); // *
  _dash_(); // -
  POS_dot_(); // POS.
}


// ================================================
// 0xe840: WORD 'UNK_0xe842' codep=0x224c parp=0xe842
// ================================================

void UNK_0xe842() // UNK_0xe842
{
  Push(0); // 0
  Push(1); // 1
  Push(pp_CTY); // CTY
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  UNK_0xe81c(); // UNK_0xe81c
}

// 0xe850: db 0x29 0x1d 0x00 0x00 ')   '

// ================================================
// 0xe854: WORD 'UNK_0xe856' codep=0x224c parp=0xe856
// ================================================

void UNK_0xe856() // UNK_0xe856
{
  Push(pp_CTX); // CTX
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(0x0026);
  _st_(); // <
}

// 0xe864: db 0x4c 0x22 0x93 0x3b 0x20 0x0f 0xb8 0x15 0x20 0x0f 0x5d 0x17 0xb4 0x00 0x5d 0x17 0xa0 0x00 0x5d 0x17 0x1a 0x00 0x20 0x0f 0x5d 0x17 0xb5 0x00 0x69 0x90 0xd0 0x15 0xe8 0xff 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x22 0x00 0x41 0x0e 0x54 0xe8 0x89 0x12 0xfa 0x15 0x0c 0x00 0x64 0xe8 0x20 0x0f 0x5d 0x17 0x15 0x00 0x1a 0xe8 0x41 0x0e 0x66 0x5c 0x83 0x6d 0xe6 0x06 0x60 0x16 0x04 0x00 0x32 0x0e 0x90 0x16 0x4c 0x22 0xf0 0x55 0xae 0x0b 0x17 0x4f 0x17 0x85 0x2e 0x0f 0x5d 0x17 0x1d 0x00 0x5d 0x17 0x9e 0x00 0x5d 0x17 0x1d 0x00 0x3d 0x90 0x17 0x85 0x90 0x16 0x4c 0x22 0x73 0x3b 0xb3 0x0f 0x5d 0x17 0x15 0x00 0x1a 0xe8 0x50 0xe8 0xc5 0x6d 0xc8 0xe7 0x88 0xe8 0x94 0x29 0x2e 0x0f 0x66 0x5c 0x83 0x6d 0x41 0x0e 0x78 0x12 0xfa 0x15 0xee 0xff 0xde 0x0d 0x64 0xe8 0x90 0x16 0x29 0x1d 0x00 0x00 0x4c 0x22 0x72 0x5e 0xae 0x0b 0x50 0xe4 0xae 0x0b 0x46 0x12 0x07 0x13 0x90 0x16 0x4c 0x22 0xd1 0xe6 0xb4 0xe8 0x64 0xe8 0x50 0xe4 0xae 0x0b 0xdb 0x23 0xc2 0xba 0xdb 0x23 0x5d 0x17 0x0a 0x00 0x20 0x0f 0xd2 0xe8 0x12 0x7a 0x55 0xe4 0xe7 0x0f 0xcd 0x0c 0x34 0xbc 0x9c 0x67 0xcd 0x0c 0x2e 0x0f 0xd2 0xe8 0x55 0xe4 0x92 0x0c 0x4d 0x7a 0x89 0x12 0x5d 0x17 0x2c 0x01 0xb3 0x0f 0xd6 0x11 0x98 0x2a 0x38 0x0c 0x65 0x10 0x98 0x2a 0x38 0x0c 0x0d 0x40 0x46 0x40 0x38 0xaa 0xde 0x0d 0x50 0xaa 0x3e 0x13 0x88 0x5c 0xae 0x0b 0x3e 0x13 0xfa 0x15 0xe8 0xff 0xde 0x0d 0x6a 0xaa 0xfa 0x15 0x21 0x00 0xc7 0x7a 0x39 0x3f 0x14 0x2a 0x2a 0x2a 0x4e 0x4f 0x54 0x49 0x43 0x45 0x20 0x41 0x42 0x4f 0x52 0x54 0x45 0x44 0x2a 0x2a 0x2a 0x5d 0x17 0x0d 0x00 0xd2 0xe8 0x84 0x7a 0x60 0x7a 0xfa 0x15 0x93 0xff 0xc9 0x79 0xfc 0xe8 0xae 0x0b 0x50 0xe4 0xae 0x0b 0x89 0x11 0xfc 0xe8 0x76 0x6d 0xb4 0xe8 0x84 0x7a 0x00 0xe9 0x07 0x13 0x60 0x7a 0x3e 0x13 0x9c 0x7a 0xfa 0x15 0x21 0x00 0x64 0xe8 0x39 0x3f 0x14 0x2a 0x2a 0x2a 0x45 0x4e 0x44 0x20 0x4f 0x46 0x20 0x4e 0x4f 0x54 0x49 0x43 0x45 0x53 0x2a 0x2a 0x2a 0x5d 0x17 0x0d 0x00 0xd2 0xe8 0x63 0xe6 0x90 0x16 0x4c 0x22 0x84 0x7a 0x00 0xe9 0x60 0x7a 0x07 0x13 0xf5 0x12 0xfa 0x15 0x08 0x00 0x10 0xe9 0x60 0x16 0x04 0x00 0x9c 0x7a 0x90 0x16 0x4c 0x22 0x60 0x7a 0x07 0x13 0xfa 0x15 0x08 0x00 0x33 0xe7 0x9c 0x7a 0x10 0xe9 0x90 0x16 'L" ;      ]   ]   ]     ]   i       L"    " A T       d   ]     A f\ m  `   2   L" U   O  . ]   ]   ]   =     L"s;  ]     P  m     ). f\ mA x       d   )   L"r^  P   F     L"    d P    #   #]        zU     4  g  .   U   Mz  ] ,      *8 e  *8  @F@8   P >  \  >       j   !  z9? ***NOTICE ABORTED***]      z`z     y    P       vm   z    `z>  z  ! d 9? ***END OF NOTICES***]     c   L" z  `z          `    z  L"`z      3  z    '

// ================================================
// 0xea0c: WORD '(NOTICES)' codep=0x4a4f parp=0xea1a
// ================================================
// 0xea1a: db 0x02 0x00 0x48 0x3a 0x01 0x00 0xfc 0xe9 0xff 0xff 0xe2 0xe9 0x4c 0x22 0x33 0xe7 0x81 0x94 0xc8 0xb5 0xf2 0x79 0x12 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x1c 0x00 0x12 0x7e 0x32 0x0e 0x12 0x7a 0x50 0xe4 0xae 0x0b 0xfc 0xe8 0xae 0x0b 0x2d 0x12 0x07 0x13 0xfa 0x15 0x08 0x00 0x84 0x7a 0x60 0x16 0xec 0xff 0x00 0xe9 0x07 0x13 0xfa 0x15 0x57 0x00 0x5d 0x17 0xf2 0xff 0x5d 0x17 0x0e 0x00 0xe6 0xae 0x0a 0x4f 0x17 0x85 0xdc 0x1b 0x0e 0x4e 0x4f 0x20 0x4e 0x45 0x57 0x20 0x4e 0x4f 0x54 0x49 0x43 0x45 0x53 0xfc 0xa2 0x5d 0x17 0xf3 0xff 0x5d 0x17 0x1a 0x00 0xe6 0xae 0x0a 0x4f 0x17 0x85 0xdc 0x1b 0x19 0x52 0x45 0x50 0x45 0x41 0x54 0x20 0x4c 0x41 0x53 0x54 0x20 0x4e 0x4f 0x54 0x49 0x43 0x45 0x3f 0x20 0x5b 0x4e 0x20 0x59 0x5d 0xfc 0xa2 0x82 0xaa 0x41 0x0e 0x60 0x16 0x06 0x00 0x2e 0x0f 0x20 0x0f 0xfa 0x15 0x26 0x00 0x9c 0x7a 0x39 0x3f 0x1b 0x2a 0x2a 0x2a 0x52 0x45 0x50 0x45 0x41 0x54 0x49 0x4e 0x47 0x20 0x4c 0x41 0x53 0x54 0x20 0x4e 0x4f 0x54 0x49 0x43 0x45 0x2a 0x2a 0x2a 0xa3 0x3b 0xd2 0xe8 0xfa 0x15 0x1a 0x00 0x10 0xe9 0x38 0xaa 0x32 0x0e 0x18 0xea 0x50 0xaa 0xfa 0x15 0x06 0x00 0x33 0xe7 0x10 0xe9 0x6a 0xaa 0xfa 0x15 0xec 0xff 0x91 0x75 0x91 0x75 0xc9 0x79 0x33 0xe7 0x82 0xe4 0x90 0x16 '  H:        L"3      y z]   ]    ~2  zP       -        z`         W ]   ]      O     NO NEW NOTICES  ]   ]      O     REPEAT LAST NOTICE? [N Y]    A `   .     &  z9? ***REPEATING LAST NOTICE*** ;        8 2   P     3   j      u u y3     '

// ================================================
// 0xeb07: WORD 'UNK_0xeb09' codep=0x224c parp=0xeb09
// ================================================

void UNK_0xeb09() // UNK_0xeb09
{
  Push(cc__4); // 4
  Push(0x00ac);
  POS_dot_(); // POS.
  PRINT("RECOMMENDATION: ", 16); // (.")
  UNK_0xe466(); // UNK_0xe466
  _ask_(); // ?
  Push(cc__4); // 4
  Push(0x00a4);
  POS_dot_(); // POS.
  PRINT("DATE: ", 6); // (.")
  UNK_0xe461(); // UNK_0xe461
  Push(Read16(Pop())); // @
  PAD(); // PAD
  DATE_do__gt_A(); // DATE$>A
  PAD(); // PAD
  Push(0x000a);
  TYPE(); // TYPE
  Push(cc__4); // 4
  Push(0x009c);
  POS_dot_(); // POS.
  PRINT("SYSTEM: ", 8); // (.")
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  Push(0); // 0
  _dot_R(); // .R
  PRINT(",", 1); // (.")
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
  Push(cc__star_MAPSCA); // *MAPSCA
  _slash_(); // /
  _dot_(); // .
  Push(cc__4); // 4
  Push(0x0094);
  POS_dot_(); // POS.
  PRINT("ORBIT: ", 7); // (.")
  UNK_0xe46b(); // UNK_0xe46b
  C_at_(); // C@
  _dot_(); // .
  Push(cc__4); // 4
  Push(0x008c);
  POS_dot_(); // POS.
  PRINT("NAME: ", 6); // (.")
  UNK_0xe475(); // UNK_0xe475
  Push(0x000f);
  TYPE(); // TYPE
  Push(cc__4); // 4
  Push(0x007a);
  POS_dot_(); // POS.
  PRINT("EVALUATION:", 11); // (.")
}


// ================================================
// 0xebbf: WORD 'UNK_0xebc1' codep=0x224c parp=0xebc1
// ================================================

void UNK_0xebc1() // UNK_0xebc1
{
  UNK_0xe78b(); // UNK_0xe78b
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  _0_gt_(); // 0>
  _gt_R(); // >R
  Push(0x0022);
  Push(h); // I
  Push(cc__8); // 8
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("YOU HAVE NOT FILED ANY", 22); // (.")
  R_gt_(); // R>
  if (Pop() == 0) goto label1;
  PRINT(" NEW", 4); // (.")

  label1:
  Push(0x0018);
  Push(0x005c);
  POS_dot_(); // POS.
  PRINT("COLONY WORLD RECOMMENDATIONS", 28); // (.")
}


// ================================================
// 0xec2e: WORD 'UNK_0xec30' codep=0x224c parp=0xec30
// ================================================

void UNK_0xec30() // UNK_0xec30
{

  label3:
  UNK_0xe7ca(); // UNK_0xe7ca
  DUP(); // DUP
  UNK_0xe856(); // UNK_0xe856
  if (Pop() == 0) goto label1;
  DUP(); // DUP
  Push(Pop()+1); // 1+
  Push(pp_CTX); // CTX
  _plus__ex_(); // +!
  goto label2;

  label1:
  UNK_0xe842(); // UNK_0xe842
  DUP(); // DUP
  Push(pp_CTX); // CTX
  _plus__ex_(); // +!

  label2:
  TYPE(); // TYPE
  SPACE(); // SPACE
  DUP(); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label3;
  Pop(); Pop();// 2DROP
}

// 0xec5e: db 0x4c 0x22 0x39 0x3f 0x0d 0x45 0x58 0x54 0x52 0x45 0x4d 0x45 0x20 0x48 0x45 0x41 0x54 0x2c 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0d 0x45 0x58 0x54 0x52 0x45 0x4d 0x45 0x20 0x43 0x4f 0x4c 0x44 0x2c 0x90 0x16 0x4c 0x22 0x39 0x3f 0x11 0x43 0x52 0x55 0x53 0x48 0x49 0x4e 0x47 0x20 0x47 0x52 0x41 0x56 0x49 0x54 0x59 0x2c 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0f 0x56 0x49 0x4f 0x4c 0x45 0x4e 0x54 0x20 0x53 0x54 0x4f 0x52 0x4d 0x53 0x2c 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0f 0x4c 0x41 0x43 0x4b 0x20 0x4f 0x46 0x20 0x4f 0x58 0x59 0x47 0x45 0x4e 0x2c 0x90 0x16 0x4c 0x22 0x39 0x3f 0x0e 0x4c 0x41 0x43 0x4b 0x20 0x4f 0x46 0x20 0x57 0x41 0x54 0x45 0x52 0x2c 0x90 0x16 'L"9? EXTREME HEAT,  L"9? EXTREME COLD,  L"9? CRUSHING GRAVITY,  L"9? VIOLENT STORMS,  L"9? LACK OF OXYGEN,  L"9? LACK OF WATER,  '

// ================================================
// 0xecdf: WORD '(BAD-PLAN)' codep=0x4a4f parp=0xecee
// ================================================
// 0xecee: db 0x06 0x00 0x48 0x3a 0x01 0x00 0x60 0xec 0x02 0x00 0x74 0xec 0x03 0x00 0x88 0xec 0x04 0x00 0xa0 0xec 0x05 0x00 0xb6 0xec 0x06 0x00 0xcc 0xec '  H:  `   t                 '

// ================================================
// 0xed0a: WORD 'UNK_0xed0c' codep=0x224c parp=0xed0c
// ================================================

void UNK_0xed0c() // UNK_0xed0c
{
  Push(0); // 0
  Push(0x000b);
  UNK_0xe81c(); // UNK_0xe81c

  UNK_0x3f3b("DUE TO");
  UNK_0xec30(); // UNK_0xec30
  Push(cc__7); // 7
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  BIT(); // BIT
  OVER(); // OVER
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(i); // I
  _ro_BAD_dash_PLAN_rc_(); // (BAD-PLAN)
  Push(i); // I
  Push(Pop()+1); // 1+
  BIT(); // BIT
  UNK_0xe470(); // UNK_0xe470
  C_at_(); // C@
  _st_(); // <
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xe470(); // UNK_0xe470
  C_at_(); // C@
  _plus_BIT(); // +BIT
  Push(1); // 1
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;

  UNK_0x3f3b("AND");
  UNK_0xec30(); // UNK_0xec30

  label2:
  UNK_0xec30(); // UNK_0xec30

  label1:
  i++;
  } while(i<imax); // (LOOP) 0xffc6

  Pop(); // DROP

  UNK_0x3f3b("THIS PLANET PROVED UNSUITABLE FOR COLONIZATION.");
  UNK_0xec30(); // UNK_0xec30

  UNK_0x3f3b("YOU HAVE BEEN FINED");
  UNK_0xec30(); // UNK_0xec30
  UNK_0xe45c(); // UNK_0xe45c
  C_at_(); // C@
  DUP(); // DUP
  Push(0x03e8);
  M_star_(); // M*
  Push(0x0064); Pust(0x0000);
  DMAX(); // DMAX
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  UNK_0xec30(); // UNK_0xec30

  UNK_0x3f3b("MU'S.");
  UNK_0xec30(); // UNK_0xec30
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;

  UNK_0x3f3b("THIS IS ONLY A WARNING, YOUR NEXT FINE WILL BE HEAVY.");
  UNK_0xec30(); // UNK_0xec30
}


// ================================================
// 0xee17: WORD 'UNK_0xee19' codep=0x224c parp=0xee19
// ================================================

void UNK_0xee19() // UNK_0xee19
{

  UNK_0x3f3b("THIS PLANET PROVED TO BE SUITABLE FOR COLONIZATION.");
  UNK_0xec30(); // UNK_0xec30
}


// ================================================
// 0xee53: WORD 'UNK_0xee55' codep=0x224c parp=0xee55
// ================================================

void UNK_0xee55() // UNK_0xee55
{

  UNK_0x3f3b("GOOD WORK! YOU HAVE LOCATED AN OPTIMAL PLANET.");
  UNK_0xec30(); // UNK_0xec30
}


// ================================================
// 0xee8a: WORD 'UNK_0xee8c' codep=0x224c parp=0xee8c
// ================================================

void UNK_0xee8c() // UNK_0xee8c
{

  UNK_0x3f3b("YOU HAVE EARNED A BONUS OF");
  UNK_0xec30(); // UNK_0xec30
  UNK_0xe45c(); // UNK_0xe45c
  C_at_(); // C@
  Push(0x03e8);
  U_star_(); // U*
  _st__n_(); // <#
  _n_S(); // #S
  _n__gt_(); // #>
  UNK_0xec30(); // UNK_0xec30

  UNK_0x3f3b("MU'S FOR THIS RECOMMENDATION.");
  UNK_0xec30(); // UNK_0xec30
}


// ================================================
// 0xeee1: WORD 'UNK_0xeee3' codep=0x224c parp=0xeee3
// ================================================

void UNK_0xeee3() // UNK_0xeee3
{
  Push(0); // 0
  Push(0x000b);
  UNK_0xe81c(); // UNK_0xe81c
  UNK_0xe45c(); // UNK_0xe45c
  C_at_(); // C@
  Push(0x0028);
  _gt_(); // >
  DUP(); // DUP
  if (Pop() == 0) goto label1;
  UNK_0xee55(); // UNK_0xee55
  goto label2;

  label1:
  UNK_0xee19(); // UNK_0xee19

  label2:
  UNK_0xee8c(); // UNK_0xee8c
  if (Pop() == 0) return;
  Push(0x01f4);
  Push(0x03e8);
  Push(0x000a);
  Push(1); // 1
  Push(0x0087);
  Push(0x07d0);
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(0x0087);
  Push(1); // 1
  OVER(); // OVER
  Push(0x07d0);
  Push(cc__7); // 7
  _gt_SND(); // >SND
}


// ================================================
// 0xef35: WORD 'UNK_0xef37' codep=0x224c parp=0xef37
// ================================================

void UNK_0xef37() // UNK_0xef37
{
  UNK_0xe470(); // UNK_0xe470
  C_at_(); // C@
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label1;
  UNK_0xed0c(); // UNK_0xed0c
  goto label2;

  label1:
  UNK_0xeee3(); // UNK_0xeee3

  label2:
  _ask_LAST(); // ?LAST
  if (Pop() == 0) goto label3;
  UNK_0xe842(); // UNK_0xe842
  UNK_0xe842(); // UNK_0xe842

  UNK_0x3f3b("END OF EVALUATIONS");
  UNK_0xec30(); // UNK_0xec30
  return;

  label3:
  Push(0); // 0
  Push(0x0022);
  CMESS(); // CMESS
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  PRINT("PRESS SPACEBAR FOR NEXT EVALUATION", 34); // (.")
  _ex_CRS(); // !CRS
  Push(1); // 1
  Push(cc__9); // 9
  CMESS(); // CMESS
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  PRINT("[ QUIT ]", 8); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xefba: WORD 'UNK_0xefbc' codep=0x224c parp=0xefbc
// ================================================

void UNK_0xefbc() // UNK_0xefbc
{
  UNK_0xe78b(); // UNK_0xe78b
  Push(cc__4); // 4
  Push(0x00ac);
  POS_dot_(); // POS.
  PRINT("SUPPLEMENTAL EVALUATION", 23); // (.")
  Push(cc__4); // 4
  Push(0x00a4);
  POS_dot_(); // POS.
  PRINT("SUBJECT: ", 9); // (.")
}


// ================================================
// 0xeff6: WORD 'UNK_0xeff8' codep=0x224c parp=0xeff8
// ================================================

void UNK_0xeff8() // UNK_0xeff8
{
  Push(0); // 0
  Push(0x001a);
  CMESS(); // CMESS
  BLACK(); // BLACK
  _ex_COLOR(); // !COLOR
  PRINT("PRESS SPACEBAR TO CONTINUE", 26); // (.")
  _ex_CRS(); // !CRS
  KEY(); // KEY
  Pop(); // DROP
}


// ================================================
// 0xf029: WORD 'UNK_0xf02b' codep=0x224c parp=0xf02b
// ================================================

void UNK_0xf02b() // UNK_0xf02b
{
  Push(0xc52d);
  MODULE(); // MODULE
  Push(0xc5ca);
  MODULE(); // MODULE
  Push(0); // 0
  Push(0xc542);
  MODULE(); // MODULE
  UNK_0xeff8(); // UNK_0xeff8
}


// ================================================
// 0xf043: WORD 'UNK_0xf045' codep=0x224c parp=0xf045
// ================================================

void UNK_0xf045() // UNK_0xf045
{
  UNK_0xefbc(); // UNK_0xefbc
  PRINT("LOSS OF TERRAIN VEHICLE", 23); // (.")
  Push(0); // 0
  Push(cc__6); // 6
  UNK_0xe81c(); // UNK_0xe81c

  UNK_0x3f3b("DUE TO YOUR NEGLIGENCE, YOUR SHIP IS NO LONGER EQUIPPED WITH A TERRAIN VEHICLE. A NEW TERRAIN VEHICLE IS CURRENTLY BEING INSTALLED. CONSEQUENTLY, YOU HAVE BEEN FINED 10,000 MU.");
  UNK_0xec30(); // UNK_0xec30
  Push(0xd8f0); Pust(0xffff);
  UNK_0xf02b(); // UNK_0xf02b
  Push(pp__ask_TV); // ?TV
  ON(); // ON
}


// ================================================
// 0xf12a: WORD 'UNK_0xf12c' codep=0x224c parp=0xf12c
// ================================================

void UNK_0xf12c() // UNK_0xf12c
{
  UNK_0xefbc(); // UNK_0xefbc
  PRINT("TOWING CHARGES", 14); // (.")
  Push(0); // 0
  Push(cc__6); // 6
  UNK_0xe81c(); // UNK_0xe81c

  UNK_0x3f3b("I.S. CORP. REG. 12A-7312 EMERGENCY DISTRESS CALLS: CAPTAIN AND CREW OF ANY VESSEL INVOKING AN EMERGENCY DISTRESS CALL SHALL BE LIABLE FOR ALL COSTS INCURRED BY INTERSTEL CORP. AS A RESULT OF RESCUE OPERATIONS INITIATED ON BEHALF OF SAID CREW.");
  UNK_0xec30(); // UNK_0xec30
  UNK_0xe842(); // UNK_0xe842

  UNK_0x3f3b("YOU HAVE BEEN FINED");
  UNK_0xec30(); // UNK_0xec30
  SPACE(); // SPACE
  Push(pp_TOWFINE); // TOWFINE
  _2_at_(); // 2@
  D_dot_(); // D.
  PRINT("MU.", 3); // (.")
  Push(pp_TOWFINE); // TOWFINE
  _2_at_(); // 2@
  DNEGATE(); // DNEGATE
  UNK_0xf02b(); // UNK_0xf02b
  Push(pp__ask_RECALL); // ?RECALL
  OFF(); // OFF
}


// ================================================
// 0xf272: WORD 'UNK_0xf274' codep=0x224c parp=0xf274
// ================================================

void UNK_0xf274() // UNK_0xf274
{
  UNK_0xefbc(); // UNK_0xefbc
  PRINT("COMPLETION OF MISSION", 21); // (.")
  Push(0); // 0
  Push(cc__6); // 6
  UNK_0xe81c(); // UNK_0xe81c

  UNK_0x3f3b("CONGRATULATIONS! AS A RESULT OF YOUR EFFORTS, OUR SUN IS ONCE AGAIN STABLE. ALL OF ARTH, AND INDEED THE ENTIRE GALAXY OWES YOU A DEBT WHICH CAN NEVER BE FULLY REPAID. YOUR HEROIC EXPLOITS WILL SURELY BECOME INTER-GALACTIC LEGEND.");
  UNK_0xec30(); // UNK_0xec30
  UNK_0xe842(); // UNK_0xe842

  UNK_0x3f3b("OUR TOKEN BONUS OF 500,000 MU WILL ALLOW YOU TO LIVE HERE ON ARTH IN LUXURY FOR MANY YEARS TO COME, ALTHOUGH WE SUSPECT YOU MAY USE IT TO FURTHER YOUR EXPLORATIONS.");
  UNK_0xec30(); // UNK_0xec30
  UNK_0xe842(); // UNK_0xe842

  UNK_0x3f3b("ONCE AGAIN, THANK YOU!");
  UNK_0xec30(); // UNK_0xec30
  Push(pp_WMSG); // WMSG
  OFF(); // OFF
  UNK_0xeff8(); // UNK_0xeff8
}


// ================================================
// 0xf44e: WORD 'UNK_0xf450' codep=0x224c parp=0xf450
// ================================================

void UNK_0xf450() // UNK_0xf450
{

  label2:
  UNK_0xe78b(); // UNK_0xe78b
  UNK_0xeb09(); // UNK_0xeb09
  UNK_0xef37(); // UNK_0xef37

  label1:
  XYSCAN(); // XYSCAN
  Pop(); Pop();// 2DROP
  _ask_TRIG(); // ?TRIG
  Push(pp_FQUIT); // FQUIT
  Push(Read16(Pop())); // @
  Push(Pop() | Pop()); // OR
  _ask_LAST(); // ?LAST
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  INEXT(); // INEXT
  _ask_FIRST(); // ?FIRST
  _ask_QUIT(); // ?QUIT
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
}


// ================================================
// 0xf478: WORD 'UNK_0xf47a' codep=0x224c parp=0xf47a
// ================================================

void UNK_0xf47a() // UNK_0xf47a
{
  UNK_0xe78b(); // UNK_0xe78b
  _gt_1FONT(); // >1FONT
  Push(pp__ask_EVAL); // ?EVAL
  OFF(); // OFF
  Push(pp__ask__gt_OP); // ?>OP
  OFF(); // OFF
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push(pp__ask_TV); // ?TV
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  UNK_0xf045(); // UNK_0xf045

  label1:
  Push(pp__ask_RECALL); // ?RECALL
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xf12c(); // UNK_0xf12c

  label2:
  Push(pp_WMSG); // WMSG
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  UNK_0xf274(); // UNK_0xf274

  label3:
  _star_OP(); // *OP
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x002d);
  IFIND(); // IFIND
  Pop(); // DROP
  _ask_CHILD(); // ?CHILD
  if (Pop() == 0) goto label4;
  IOPEN(); // IOPEN
  UNK_0xf450(); // UNK_0xf450
  CDROP(); // CDROP
  goto label5;

  label4:
  UNK_0xebc1(); // UNK_0xebc1

  label5:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4d4: WORD 'OP-CASE' codep=0x4a4f parp=0xf4e0
// ================================================
// 0xf4e0: db 0x03 0x00 0x48 0x3a 0x00 0x00 0x28 0xea 0x01 0x00 0x7a 0xf4 0x02 0x00 0x09 0x13 '  H:  (   z     '

// ================================================
// 0xf4f0: WORD '(U-OP)' codep=0x224c parp=0xf4fb
// ================================================
// entry

void _ro_U_dash_OP_rc_() // (U-OP)
{
  UNK_0xe637(); // UNK_0xe637
  Push(pp__ask__gt_OP); // ?>OP
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0x03e8);
  MS(); // MS
  UNK_0xf47a(); // UNK_0xf47a

  label1:
  XYSCAN(); // XYSCAN
  SWAP(); // SWAP
  Pop(); // DROP
  _ask_DUP(); // ?DUP
  if (Pop() == 0) goto label2;
  Push(pp_NCRS); // NCRS
  _plus__ex_(); // +!
  Push(pp_UNK_0xe58c); // UNK_0xe58c
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP

  label2:
  Push(0); // 0
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label3;
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  OP_dash_CASE(); // OP-CASE

  label3:
  if (Pop() == 0) goto label1;
}

// 0xf537: db 0x4f 0x50 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x20 0x00 'OP-VOC__________________________          '
  