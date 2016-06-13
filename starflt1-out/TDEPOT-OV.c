// ====== OVERLAY 'TDEPOT-OV' ======
// store offset = 0xe2a0
// overlay size   = 0x12c0

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xe2b6  codep:0x1d29 parp:0xe2b6 size:0x0006 C-string:'UNK_0xe2b6'
// 1704:      UNK_0xe2be  codep:0x1d29 parp:0xe2be size:0x000c C-string:'UNK_0xe2be'
// 1705:      UNK_0xe2cc  codep:0x224c parp:0xe2cc size:0x002c C-string:'UNK_0xe2cc'
// 1706:      UNK_0xe2fa  codep:0x224c parp:0xe2fa size:0x0030 C-string:'UNK_0xe2fa'
// 1707:      UNK_0xe32c  codep:0x224c parp:0xe32c size:0x006d C-string:'UNK_0xe32c'
// 1708:      UNK_0xe39b  codep:0x744d parp:0xe39b size:0x0003 C-string:'UNK_0xe39b'
// 1709:      UNK_0xe3a0  codep:0x224c parp:0xe3a0 size:0x0006 C-string:'UNK_0xe3a0'
// 1710:      UNK_0xe3a8  codep:0x224c parp:0xe3a8 size:0x0036 C-string:'UNK_0xe3a8'
// 1711:      UNK_0xe3e0  codep:0x224c parp:0xe3e0 size:0x0018 C-string:'UNK_0xe3e0'
// 1712:      UNK_0xe3fa  codep:0x224c parp:0xe3fa size:0x000c C-string:'UNK_0xe3fa'
// 1713:      UNK_0xe408  codep:0x224c parp:0xe408 size:0x00aa C-string:'UNK_0xe408'
// 1714:      UNK_0xe4b4  codep:0x1d29 parp:0xe4b4 size:0x0081 C-string:'UNK_0xe4b4'
// 1715:      UNK_0xe537  codep:0x224c parp:0xe537 size:0x00ef C-string:'UNK_0xe537'
// 1716:      UNK_0xe628  codep:0x224c parp:0xe628 size:0x020b C-string:'UNK_0xe628'
// 1717:      UNK_0xe835  codep:0x224c parp:0xe835 size:0x0008 C-string:'UNK_0xe835'
// 1718:      UNK_0xe83f  codep:0x224c parp:0xe83f size:0x01f8 C-string:'UNK_0xe83f'
// 1719:       TD-SCROLL  codep:0x4a4f parp:0xea45 size:0x0085 C-string:'TD_dash_SCROLL'
// 1720:      UNK_0xeacc  codep:0x224c parp:0xeacc size:0x0098 C-string:'UNK_0xeacc'
// 1721:      UNK_0xeb66  codep:0x224c parp:0xeb66 size:0x000c C-string:'UNK_0xeb66'
// 1722:      UNK_0xeb74  codep:0x224c parp:0xeb74 size:0x006e C-string:'UNK_0xeb74'
// 1723:    KEY-ELEM-AMT  codep:0x224c parp:0xebf3 size:0x0545 C-string:'KEY_dash_ELEM_dash_AMT'
// 1724:       SELL-WHAT  codep:0x4a4f parp:0xf146 size:0x0010 C-string:'SELL_dash_WHAT'
// 1725:         SELL-IT  codep:0x224c parp:0xf162 size:0x0209 C-string:'SELL_dash_IT'
// 1726:        BUY-WHAT  codep:0x4a4f parp:0xf378 size:0x00b0 C-string:'BUY_dash_WHAT'
// 1727:  DEPOT-FUNCTION  codep:0x4a4f parp:0xf43b size:0x0014 C-string:'DEPOT_dash_FUNCTION'
// 1728:       (U-DEPOT)  codep:0x224c parp:0xf45d size:0x0062 C-string:'_ro_U_dash_DEPOT_rc_'
// 1729:          <TDART  codep:0x224c parp:0xf4ca size:0x0000 C-string:'_st_TDART'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe2b6[6] = {0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xe2b6
unsigned char UNK_0xe2be[12] = {0x3a, 0x20, 0x4c, 0x22, 0x5d, 0x17, 0x2d, 0xc5, 0xce, 0x84, 0x90, 0x16}; // UNK_0xe2be
unsigned char UNK_0xe4b4[129] = {0x03, 0x0a, 0x02, 0x09, 0x20, 0x0a, 0x23, 0x09, 0x24, 0x0a, 0x48, 0x09, 0x30, 0x0a, 0x79, 0x09, 0x25, 0x4c, 0x22, 0x93, 0x3b, 0x65, 0x4f, 0x5d, 0x17, 0x1d, 0x00, 0x5d, 0x17, 0x6e, 0x00, 0xf0, 0x0d, 0xf2, 0x0e, 0x2b, 0xa0, 0x77, 0xa3, 0x7a, 0x58, 0xc5, 0x6d, 0x2e, 0x85, 0x0a, 0x4f, 0x17, 0x4f, 0x6f, 0x4f, 0x54, 0xa7, 0x17, 0x85, 0x5d, 0x17, 0x58, 0xc5, 0xce, 0x84, 0x93, 0x3b, 0xa3, 0x28, 0x17, 0x85, 0x90, 0x16, 0x4c, 0x22, 0xac, 0x3b, 0x5d, 0x17, 0x23, 0x00, 0xe6, 0xae, 0x0a, 0x4f, 0x17, 0x4f, 0x6f, 0x4f, 0x54, 0xa7, 0x17, 0x85, 0xdc, 0x1b, 0x19, 0x59, 0x4f, 0x55, 0x52, 0x20, 0x41, 0x43, 0x43, 0x4f, 0x55, 0x4e, 0x54, 0x20, 0x42, 0x41, 0x4c, 0x41, 0x4e, 0x43, 0x45, 0x20, 0x49, 0x53, 0x3a, 0x20, 0xc5, 0xe4, 0xdc, 0x1b, 0x03, 0x20, 0x4d, 0x55, 0xfc, 0xa2, 0x90, 0x16}; // UNK_0xe4b4



// 0xe2b2: db 0x28 0x01 '( '

// ================================================
// 0xe2b4: WORD 'UNK_0xe2b6' codep=0x1d29 parp=0xe2b6
// ================================================
// 0xe2b6: db 0x3a 0x20 0x29 0x1d 0x3a 0x20 ': ) : '

// ================================================
// 0xe2bc: WORD 'UNK_0xe2be' codep=0x1d29 parp=0xe2be
// ================================================
// 0xe2be: db 0x3a 0x20 0x4c 0x22 0x5d 0x17 0x2d 0xc5 0xce 0x84 0x90 0x16 ': L"] -     '

// ================================================
// 0xe2ca: WORD 'UNK_0xe2cc' codep=0x224c parp=0xe2cc
// ================================================

void UNK_0xe2cc() // UNK_0xe2cc
{
  Push(0xc542);
  MODULE(); // MODULE
}

// 0xe2d4: db 0x4c 0x22 0x5d 0x17 0x96 0xc5 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0xca 0xc5 0xce 0x84 0x90 0x16 0x4c 0x22 0xf2 0x79 0xe7 0xb5 0xf2 0x79 0xd6 0xba 0xc9 0x79 0xc9 0x79 0x90 0x16 'L"]       L"]       L" y   y   y y  '

// ================================================
// 0xe2f8: WORD 'UNK_0xe2fa' codep=0x224c parp=0xe2fa
// ================================================

void UNK_0xe2fa() // UNK_0xe2fa
{
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  BLUE(); // BLUE
  return;

  label1:
  DK_dash_BLUE(); // DK-BLUE
}

// 0xe30c: db 0x4c 0x22 0x5d 0x17 0x70 0xbd 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x82 0xbd 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x97 0xbd 0xce 0x84 0x90 0x16 'L"] p     L"]       L"]       '

// ================================================
// 0xe32a: WORD 'UNK_0xe32c' codep=0x224c parp=0xe32c
// ================================================

void UNK_0xe32c() // UNK_0xe32c
{
  Push(pp__ask_TD); // ?TD
  Push(Read16(Pop())); // @
  GREY2(); // GREY2
  Push(Pop() * Pop()); // *
  _gt_R(); // >R
  Push(0); // 0
  Push(h); // I
  X0MESS(); // X0MESS
  Push(1); // 1
  R_gt_(); // R>
  X0MESS(); // X0MESS
}

// 0xe344: db 0x4c 0x22 0xc5 0xa2 0x28 0xa5 0x5d 0x17 0x2c 0x00 0x5d 0x17 0x64 0x00 0x2b 0xa0 0xdc 0x1b 0x12 0x43 0x48 0x45 0x43 0x4b 0x49 0x4e 0x47 0x20 0x49 0x4e 0x56 0x45 0x4e 0x54 0x4f 0x52 0x59 0xfc 0xa2 0x90 0x16 0x4c 0x22 0x5d 0x17 0x12 0x00 0x65 0x4f 0x5d 0x17 0x64 0x00 0x5d 0x17 0x2c 0x00 0x77 0xa3 0x90 0x16 0xea 0x73 0x39 0x00 0xbe 0xbe 0x90 0x67 0xea 0x73 0x1c 0x18 0x01 0x1e 0x2c 0x65 0xea 0x73 0x1c 0x1d 0x01 0x1e 0x2c 0x65 'L"  ( ] , ] d +    CHECKING INVENTORY    L"]   eO] d ] , w    s9    g s    ,e s    ,e'

// ================================================
// 0xe399: WORD 'UNK_0xe39b' codep=0x744d parp=0xe39b
// ================================================
// 0xe39b: db 0x14 0x43 0x02 ' C '

// ================================================
// 0xe39e: WORD 'UNK_0xe3a0' codep=0x224c parp=0xe3a0
// ================================================

void UNK_0xe3a0() // UNK_0xe3a0
{
  _star_SHIP(); // *SHIP
  _gt_C_plus_S(); // >C+S
}


// ================================================
// 0xe3a6: WORD 'UNK_0xe3a8' codep=0x224c parp=0xe3a8
// ================================================

void UNK_0xe3a8() // UNK_0xe3a8
{
  UNK_0xe3a0(); // UNK_0xe3a0
  UNK_0xe39b(); // UNK_0xe39b
  Push(Read16(Pop())); // @
  ICLOSE(); // ICLOSE
}

// 0xe3b2: db 0x4c 0x22 0x9e 0xe3 0x99 0xe3 0x76 0x6d 0xc9 0x79 0x90 0x16 0x4c 0x22 0xa6 0xe3 0x2d 0x12 0x07 0x13 0x90 0x16 0x4c 0x22 0xdb 0x23 0x9b 0xac 0xdb 0x23 0xcd 0x0c 0x8e 0x27 0x7f 0x0e 0xf6 0x0f 0x6a 0x6d 0xf6 0x0f 0x90 0x16 'L"    vm y  L"  -     L" #   #   '   jm    '

// ================================================
// 0xe3de: WORD 'UNK_0xe3e0' codep=0x224c parp=0xe3e0
// ================================================

void UNK_0xe3e0() // UNK_0xe3e0
{
  Push(cc__4); // 4
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
}

// 0xe3e8: db 0x4c 0x22 0xd6 0x11 0x5d 0x17 0x64 0x00 0xeb 0x11 0xf2 0x0e 0x32 0x0e 0x90 0x16 'L"  ] d     2   '

// ================================================
// 0xe3f8: WORD 'UNK_0xe3fa' codep=0x224c parp=0xe3fa
// ================================================

void UNK_0xe3fa() // UNK_0xe3fa
{
  WHITE(); // WHITE
  DK_dash_BLUE(); // DK-BLUE
  UNK_0xe2fa(); // UNK_0xe2fa
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe406: WORD 'UNK_0xe408' codep=0x224c parp=0xe408
// ================================================

void UNK_0xe408() // UNK_0xe408
{
  GREY2(); // GREY2
  _ex_COLOR(); // !COLOR
  SFILL(); // SFILL
  UNK_0xe3fa(); // UNK_0xe3fa
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  Push(2); // 2
  Push(1); // 1
  Push(0x009d);
  Push(1); // 1
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x000b);
  Push(0x009d);
  Push(0x000b);
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x00b9);
  Push(0x009d);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(1); // 1
  Push(0x00b9);
  Push(1); // 1
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x009e);
  Push(0x00b9);
  OVER(); // OVER
  Push(1); // 1
  LLINE(); // LLINE
  Push(0x0022);
  Push(2); // 2
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x0047);
  Push(2); // 2
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  Push(0x0078);
  Push(2); // 2
  OVER(); // OVER
  Push(0x000a);
  LLINE(); // LLINE
  _gt_3FONT(); // >3FONT
  Push(0x005c);
  Push(0x00c4);
  POS_dot_(); // POS.
  PRINT("TRADE", 5); // (.")
  Push(cc__6); // 6
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  PRINT("DEPOT", 5); // (.")
  Push(0x004b);
  Push(0x00c5);
  _at_COLOR(); // @COLOR
  _dot_1LOGO(); // .1LOGO
}


// ================================================
// 0xe4b2: WORD 'UNK_0xe4b4' codep=0x1d29 parp=0xe4b4
// ================================================
// 0xe4b4: db 0x03 0x0a 0x02 0x09 0x20 0x0a 0x23 0x09 0x24 0x0a 0x48 0x09 0x30 0x0a 0x79 0x09 0x25 0x4c 0x22 0x93 0x3b 0x65 0x4f 0x5d 0x17 0x1d 0x00 0x5d 0x17 0x6e 0x00 0xf0 0x0d 0xf2 0x0e 0x2b 0xa0 0x77 0xa3 0x7a 0x58 0xc5 0x6d 0x2e 0x85 0x0a 0x4f 0x17 0x4f 0x6f 0x4f 0x54 0xa7 0x17 0x85 0x5d 0x17 0x58 0xc5 0xce 0x84 0x93 0x3b 0xa3 0x28 0x17 0x85 0x90 0x16 0x4c 0x22 0xac 0x3b 0x5d 0x17 0x23 0x00 0xe6 0xae 0x0a 0x4f 0x17 0x4f 0x6f 0x4f 0x54 0xa7 0x17 0x85 0xdc 0x1b 0x19 0x59 0x4f 0x55 0x52 0x20 0x41 0x43 0x43 0x4f 0x55 0x4e 0x54 0x20 0x42 0x41 0x4c 0x41 0x4e 0x43 0x45 0x20 0x49 0x53 0x3a 0x20 0xc5 0xe4 0xdc 0x1b 0x03 0x20 0x4d 0x55 0xfc 0xa2 0x90 0x16 '      # $ H 0 y %L" ;eO]   ] n     + w zX m.  O OoOT   ] X    ; (    L" ;] #    O OoOT      YOUR ACCOUNT BALANCE IS:       MU    '

// ================================================
// 0xe535: WORD 'UNK_0xe537' codep=0x224c parp=0xe537
// ================================================

void UNK_0xe537() // UNK_0xe537
{
  _gt_2FONT(); // >2FONT
  UNK_0xe3fa(); // UNK_0xe3fa
  Push(0x002b);
  Push(0x00b3);
  POS_dot_(); // POS.
  Push(pp_XORMODE); // XORMODE
  OFF(); // OFF
  PRINT("WELCOME", 7); // (.")
  UNK_0xe3e0(); // UNK_0xe3e0
  PRINT("TO", 2); // (.")
  UNK_0xe3e0(); // UNK_0xe3e0
  PRINT("THE", 3); // (.")
  _gt_3FONT(); // >3FONT
  Push(0x0035);
  Push(0x00a5);
  POS_dot_(); // POS.
  PRINT("TRADE", 5); // (.")
  UNK_0xe3e0(); // UNK_0xe3e0
  PRINT("DEPOT", 5); // (.")
  CTINIT(); // CTINIT
  Push(0x0016);
  Push(0x0078);
  POS_dot_(); // POS.
  PRINT("WE OFFER THE WIDEST SELECTION", 29); // (.")
  Push(0x000d);
  Push(0x006e);
  POS_dot_(); // POS.
  PRINT("AND THE LOWEST PRICES IN STARPORT.", 34); // (.")
  Push(0x001b);
  Push(0x0064);
  POS_dot_(); // POS.
  PRINT("HOW MAY WE HELP YOU TODAY?", 26); // (.")
}

// 0xe604: db 0x4c 0x22 0x98 0x2a 0x38 0x0c 0x98 0x2a 0x38 0x0c 0x0d 0x40 0x1e 0x40 0x16 0x16 0xac 0x0d 0x00 0x00 0x46 0x40 0x19 0x06 0x3e 0x13 0xfa 0x15 0xea 0xff 0xde 0x0d 0x90 0x16 'L" *8  *8  @ @      F@  >         '

// ================================================
// 0xe626: WORD 'UNK_0xe628' codep=0x224c parp=0xe628
// ================================================

void UNK_0xe628() // UNK_0xe628
{
  CTINIT(); // CTINIT
  Push(pp__ask_TANDRG); // ?TANDRG
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  DK_dash_BLUE(); // DK-BLUE
  _ex_COLOR(); // !COLOR

  label1:
  Push(0x000c);
  Push(cc__8); // 8
  POS_dot_(); // POS.
  PRINT("BUY", 3); // (.")
  Push(0x002d);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("SELL", 4); // (.")
  Push(0x0052);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("ANALYZE ", 8); // (.")
  Push(0x0084);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("EXIT", 4); // (.")
}

// 0xe677: db 0x4c 0x22 0x7a 0x58 0xc5 0x6d 0x5d 0x17 0xb8 0x00 0x3d 0x0f 0x5d 0x17 0x0c 0x00 0x5d 0x17 0x9d 0x00 0x65 0x4f 0xee 0xa0 0x90 0x16 0x4c 0x22 0x20 0x0f 0x5d 0x17 0x1a 0x00 0xe6 0xae 0xdc 0x1b 0x19 0x5e 0x20 0x53 0x43 0x52 0x4f 0x4c 0x4c 0x20 0x49 0x4e 0x56 0x45 0x4e 0x54 0x4f 0x52 0x59 0x20 0x4c 0x49 0x53 0x54 0x20 0x5c 0xfc 0xa2 0x90 0x16 0x4c 0x22 0x77 0xe6 0xf8 0xe3 0x81 0x94 0x7b 0x3b 0x5d 0x17 0xa0 0x00 0x2b 0xa0 0xdc 0x1b 0x04 0x49 0x54 0x45 0x4d 0x5d 0x17 0x6c 0x00 0x6c 0x58 0x76 0x6d 0xdc 0x1b 0x06 0x56 0x4f 0x4c 0x55 0x4d 0x45 0x7b 0x3b 0x5d 0x17 0x9a 0x00 0x5d 0x17 0x12 0x00 0x7f 0x0e 0x3d 0x90 0x5d 0x17 0x82 0x00 0x5d 0x17 0x9a 0x00 0x5d 0x17 0x6c 0x00 0x7f 0x0e 0x3d 0x90 0xf9 0xe4 0x91 0xe6 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x12 0x50 0x52 0x45 0x53 0x53 0x20 0x53 0x50 0x41 0x43 0x45 0x42 0x41 0x52 0x20 0x54 0x4f 0x20 0xe6 0x06 0xdc 0x1b 0x0c 0x20 0x4f 0x52 0x20 0x5b 0x20 0x51 0x55 0x49 0x54 0x20 0x5d 0xfc 0xa2 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x22 0x00 0xe6 0xae 0x39 0x3f 0x03 0x42 0x55 0x59 0x07 0xe7 0x90 0x16 0x4c 0x22 0xbb 0xe6 0x5d 0x17 0x8c 0x00 0x6c 0x58 0x76 0x6d 0xdc 0x1b 0x04 0x43 0x4f 0x53 0x54 0x5d 0x17 0x8c 0x00 0x5d 0x17 0xa7 0x00 0x2b 0xa0 0xdc 0x1b 0x04 0x55 0x4e 0x49 0x54 0x5d 0x17 0x8c 0x00 0x5d 0x17 0x9a 0x00 0x5d 0x17 0x9a 0x00 0x7f 0x0e 0x3d 0x90 0x25 0x95 0x5d 0x17 0x3e 0x00 0x5d 0x17 0xb3 0x00 0x2b 0xa0 0xdc 0x1b 0x03 0x46 0x4f 0x52 0xde 0xe3 0xdc 0x1b 0x04 0x53 0x41 0x4c 0x45 0x33 0xe7 0x90 0x16 0x4c 0x22 0xbb 0xe6 0x5d 0x17 0x88 0x00 0x6c 0x58 0x76 0x6d 0xdc 0x1b 0x05 0x56 0x41 0x4c 0x55 0x45 0x5d 0x17 0x8a 0x00 0x5d 0x17 0xa7 0x00 0x2b 0xa0 0xdc 0x1b 0x04 0x55 0x4e 0x49 0x54 0x5d 0x17 0x88 0x00 0x5d 0x17 0x9a 0x00 0x5d 0x17 0x9a 0x00 0x7f 0x0e 0x3d 0x90 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x21 0x00 0xe6 0xae 0x39 0x3f 0x04 0x53 0x45 0x4c 0x4c 0x07 0xe7 0x90 0x16 0x4c 0x22 0x9a 0xe7 0x25 0x95 0x5d 0x17 0x42 0x00 0x5d 0x17 0xb3 0x00 0x2b 0xa0 0xdc 0x1b 0x05 0x43 0x41 0x52 0x47 0x4f 0xd1 0xe7 0x90 0x16 0x4c 0x22 0x9a 0xe7 0x25 0x95 0x5d 0x17 0x3a 0x00 0x5d 0x17 0xb3 0x00 0x2b 0xa0 0xdc 0x1b 0x08 0x41 0x4e 0x41 0x4c 0x59 0x53 0x49 0x53 0x2e 0x0f 0x5d 0x17 0x26 0x00 0xe6 0xae 0x39 0x3f 0x07 0x41 0x4e 0x41 0x4c 0x59 0x5a 0x45 0x07 0xe7 0x90 0x16 'L"zX m]   = ]   ]   eO    L"  ]        ^ SCROLL INVENTORY LIST \    L"w     {;]   +    ITEM] l lXvm   VOLUME{;]   ]    = ]   ]   ] l  =       L"   PRESS SPACEBAR TO       OR [ QUIT ]    L". ] "   9? BUY    L"  ]   lXvm   COST]   ]   +    UNIT]   ]   ]    = % ] > ]   +    FOR     SALE3   L"  ]   lXvm   VALUE]   ]   +    UNIT]   ]   ]    =   L". ] !   9? SELL    L"  % ] B ]   +    CARGO    L"  % ] : ]   +    ANALYSIS. ] &   9? ANALYZE    '

// ================================================
// 0xe833: WORD 'UNK_0xe835' codep=0x224c parp=0xe835
// ================================================

void UNK_0xe835() // UNK_0xe835
{
  UNK_0xe408(); // UNK_0xe408
  UNK_0xe628(); // UNK_0xe628
  UNK_0xe537(); // UNK_0xe537
}


// ================================================
// 0xe83d: WORD 'UNK_0xe83f' codep=0x224c parp=0xe83f
// ================================================

void UNK_0xe83f() // UNK_0xe83f
{
  Push(pp__ro_THIS_dash_I); // (THIS-I
  _1_dot_5_at_(); // 1.5@
}

// 0xe845: db 0x4c 0x22 0x3d 0xe8 0xf2 0x79 0x84 0x7a 0x75 0x75 0x1d 0x63 0x92 0x6d 0xc9 0x79 0x90 0x16 0x4c 0x22 0x3d 0xe8 0xf2 0x79 0x9c 0x7a 0x75 0x75 0x1d 0x63 0x92 0x6d 0xc9 0x79 0x90 0x16 0x4c 0x22 0x3d 0xe8 0xf2 0x79 0xa8 0xae 0x95 0x49 0xc9 0x79 0xf2 0x79 0x90 0x16 0x4c 0x22 0xdb 0x23 0x83 0x3b 0x98 0x09 0xfd 0x6d 0x69 0xe8 0xe4 0xad 0xae 0x0b 0x20 0x0f 0xc9 0x79 0x3d 0x0f 0xeb 0x11 0xf2 0x0e 0x32 0x0e 0x20 0x0f 0x5d 0x14 0xb4 0x13 0x9f 0x13 0x83 0x3b 0x7f 0x0e 0x92 0x0f 0xdb 0x23 0x72 0x0f 0xf2 0x0e 0xea 0x6d 0xdb 0x23 0x3d 0xe8 0xf2 0x79 0xb7 0xae 0x5d 0x17 0x21 0x00 0x72 0x0f 0x83 0x3b 0xea 0x6d 0xc9 0x79 0x5d 0x17 0x88 0x00 0x5d 0x17 0x96 0x00 0x2b 0xa0 0x83 0x3b 0x6f 0x4f 0x43 0xa3 0xc5 0xa2 0x28 0xa5 0x4f 0x4f 0x4f 0x4f 0x0a 0x4f 0x54 0xa7 0x17 0x85 0xdb 0x23 0x83 0x3b 0xe6 0x06 0xfc 0xa2 0x90 0x16 0x4c 0x22 0xb4 0x0d 0xc5 0xa2 0x73 0x3b 0x90 0x0e 0x2b 0xa0 0xc4 0xab 0x9b 0x58 0x76 0x6d 0x93 0x3b 0x85 0x58 0x76 0x6d 0x5d 0x17 0x9a 0x00 0x90 0x58 0x76 0x6d 0xf8 0xe2 0x17 0x85 0x7a 0x58 0xb7 0x6d 0xd8 0x93 0xfc 0xa2 0x90 0x16 0x4c 0x22 0x5d 0x17 0x97 0x00 0xe7 0xe8 0x90 0x16 0x4c 0x22 0x6d 0xe3 0x0a 0x4f 0x5a 0x4f 0xf8 0xe2 0x54 0xa7 0x17 0x85 0xf6 0x5b 0xae 0x0b 0x20 0x0f 0xb8 0x15 0xe9 0x5b 0xae 0x0b 0xc2 0x5b 0xae 0x0b 0x50 0x0e 0x93 0x3b 0xb3 0x0f 0x92 0x0f 0x2b 0xa0 0xc6 0xae 0xdb 0x23 0x31 0xa3 0x84 0x7a 0xd0 0x15 0xe4 0xff 0x90 0x16 0x4c 0x22 0x90 0x61 0x02 0x7a 0x12 0x7a 0x75 0x75 0x1d 0x63 0x92 0x6d 0x20 0x0f 0xe7 0x0f 0x84 0x7a 0x60 0x7a 0xfa 0x15 0xf8 0xff 0xb4 0x0d 0x81 0x94 0x5d 0x17 0x96 0x00 0x7b 0x3b 0x5d 0x17 0x10 0x00 0x90 0x0e 0xad 0x11 0x5d 0x17 0x26 0x00 0x9e 0xa3 0x1f 0xe9 0x9c 0x7a 0x15 0xe9 0x4d 0x7a 0x07 0x13 0xb8 0xe2 0x76 0x6d 0x90 0x16 0x4c 0x22 0x84 0x7a 0x45 0xe8 0xb8 0xe2 0xae 0x0b 0xfa 0x15 0x08 0x00 0xc6 0xae 0x60 0x16 0x0a 0x00 0x5d 0x17 0x01 0x20 0xdb 0x23 0x76 0x6d 0xdb 0x23 0x15 0xe9 0x22 0xa4 0x15 0xe9 0x4d 0x7a 0x07 0x13 0xb8 0xe2 0xae 0x0b 0xf5 0x12 0xb8 0xe2 0x76 0x6d 0x90 0x16 0x4c 0x22 0x75 0x75 0x91 0x75 0x3d 0xe8 0xf2 0x79 0x4d 0x7a 0x07 0x13 0xb4 0x0d 0x91 0x75 0xf2 0x79 0x90 0x0e 0xfa 0x15 0x04 0x00 0x97 0xe9 0x90 0x16 0x4c 0x22 0x4d 0x7a 0xb8 0xe2 0xae 0x0b 0x21 0x5d 0xae 0x0b 0xf6 0x5b 0xae 0x0b 0x2d 0x12 0xf5 0x12 0x3e 0x13 0xb8 0xe2 0x76 0x6d 0x9c 0x7a 0x57 0xe8 0x3d 0xe8 0xf2 0x79 0xc6 0xae 0xc9 0x79 0xdb 0x23 0x15 0xe9 0x5a 0xa4 0x15 0xe9 0x90 0x16 0x4c 0x22 0x75 0x75 0x91 0x75 0x3d 0xe8 0xf2 0x79 0x60 0x7a 0x07 0x13 0xb4 0x0d 0x91 0x75 0xf2 0x79 0x90 0x0e 0xfa 0x15 0x04 0x00 0xe9 0xe9 0x90 0x16 'L"=  y zuu c m y  L"=  y zuu c m y  L"=  y   I y y  L" # ;   mi        y=     2   ]      ;    #r    m #=  y  ] ! r  ; m y]   ]   +  ;oOC   ( OOOO OT    # ;      L"    s;  +    Xvm ; Xvm]    Xvm    zX m      L"]       L"m  OZO  T    [       [   [  P  ;    +    #1  z      L" a z zuu c m     z`z        ]   {;]       ] &      z  Mz    vm  L" zE           `   ]    #vm #  "   Mz          vm  L"uu u=  yMz     u y          L"Mz    !]   [  -   >   vm zW =  y   y #  Z     L"uu u=  y`z     u y          '

// ================================================
// 0xea37: WORD 'TD-SCROLL' codep=0x4a4f parp=0xea45
// ================================================
// 0xea45: db 0x02 0x00 0x48 0x3a 0x01 0x00 0xcd 0xe9 0xff 0xff 0x1b 0xea 0x4c 0x22 0x2a 0xe3 0x2e 0x0f 0x5d 0x17 0x18 0x00 0xe6 0xae 0x6f 0x4f 0x17 0x85 0xdc 0x1b 0x18 0x49 0x4e 0x53 0x55 0x46 0x46 0x49 0x43 0x49 0x45 0x4e 0x54 0x20 0x43 0x41 0x52 0x47 0x4f 0x20 0x53 0x50 0x41 0x43 0x45 0xfc 0xa2 0x90 0x16 0x4c 0x22 0x2a 0xe3 0x2e 0x0f 0x5d 0x17 0x12 0x00 0xe6 0xae 0x6f 0x4f 0x17 0x85 0x16 0xe3 0xfc 0xa2 0x90 0x16 0x4c 0x22 0xfd 0x8e 0x20 0x0f 0x5d 0x17 0x83 0xc5 0xce 0x84 0x07 0x13 0xfa 0x15 0x10 0x00 0x80 0xea 0x69 0x26 0x04 0xe6 0x32 0x0e 0x20 0x0f 0x60 0x16 0x12 0x00 0xbe 0xe3 0x41 0x0e 0x07 0x13 0xfa 0x15 0x08 0x00 0x51 0xea 0x69 0x26 0x04 0xe6 0x13 0x8f 0x90 0x16 '  H:        L"* . ]     oO     INSUFFICIENT CARGO SPACE    L"* . ]     oO        L"    ]             i&  2   `     A       Q i&      '

// ================================================
// 0xeaca: WORD 'UNK_0xeacc' codep=0x224c parp=0xeacc
// ================================================

void UNK_0xeacc() // UNK_0xeacc
{
  Push(pp__ask_TD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe2fa(); // UNK_0xe2fa
  goto label2;

  label1:
  BLUE(); // BLUE

  label2:
  _ex_COLOR(); // !COLOR
  Push(pp_UNK_0xe2be); // UNK_0xe2be
  ON(); // ON
  Push(0x002e);
  Push(pp__dash_AIN); // -AIN
  _ex_(); // !
  Push(cc__6); // 6
  Push(0xbd5b);
  MODULE(); // MODULE
  Push(0); // 0
  SWAP(); // SWAP
  COUNT(); // COUNT
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  C_at_(); // C@
  Push(0x002e);
  _eq_(); // =
  if (Pop() == 0) goto label3;
  Push(i); // I
  Push(Pop()+1); // 1+
  C_at_(); // C@
  Push(0x0030);
  Push(0x003a);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label4;
  Push(pp_UNK_0xe2be); // UNK_0xe2be
  OFF(); // OFF

  label4:
  goto label5;

  label3:
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(i); // I
  C_at_(); // C@
  Push(0x0030);
  _dash_(); // -
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xe2be); // UNK_0xe2be
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label5;
  LEAVE(); // LEAVE

  label5:
  i++;
  } while(i<imax); // (LOOP) 0xffb6

  Push(pp_UNK_0xe2be); // UNK_0xe2be
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label6;
  Push(0x000a);
  Push(Pop() * Pop()); // *

  label6:
  ABS(); // ABS
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  MIN(); // MIN
}


// ================================================
// 0xeb64: WORD 'UNK_0xeb66' codep=0x224c parp=0xeb66
// ================================================

void UNK_0xeb66() // UNK_0xeb66
{
  ELEM_dash_VA(); // ELEM-VA
  Push(Read16(Pop())); // @
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xeb72: WORD 'UNK_0xeb74' codep=0x224c parp=0xeb74
// ================================================

void UNK_0xeb74() // UNK_0xeb74
{
  INST_dash_X(); // INST-X
  _2_at_(); // 2@
  Push(0xffff); Pust(0xffff);
  D_eq_(); // D=
  if (Pop() == 0) goto label1;
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex_(); // !
  return;

  label1:
  Push(0xc558);
  MODULE(); // MODULE
  _2DUP(); // 2DUP
  UNK_0xeb66(); // UNK_0xeb66
  ROT(); // ROT
  ROT(); // ROT
  ELEM_dash_VA(); // ELEM-VA
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(Pop() * Pop()); // *
  ELEM_dash_VA(); // ELEM-VA
  _ex_(); // !
  UNK_0xeb66(); // UNK_0xeb66
  MAX(); // MAX
  ELEM_dash_VA(); // ELEM-VA
  Push(Read16(Pop())); // @
  Push(0x0064);
  _slash_(); // /
  ELEM_dash_VA(); // ELEM-VA
  _ex_(); // !
  DUP(); // DUP
  _0_st_(); // 0<
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  Push(0x2134);

  label2:
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(1); // 1
  MAX(); // MAX
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex_(); // !
}


// ================================================
// 0xebe2: WORD 'KEY-ELEM-AMT' codep=0x224c parp=0xebf3
// ================================================
// entry

void KEY_dash_ELEM_dash_AMT() // KEY-ELEM-AMT
{
  Push(pp_UNK_0xe2b6); // UNK_0xe2b6
  Push(Read16(Pop())); // @
  Push(pp__ask_TD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() | Pop()); // OR
  INST_dash_X(); // INST-X
  _2_at_(); // 2@
  Push(0xffff); Pust(0xffff);
  D_eq_(); // D=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  INST_dash_QT(); // INST-QT
  Push(Read16(Pop())); // @
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex_(); // !
  goto label2;

  label1:
  UNK_0xe3a8(); // UNK_0xe3a8
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex_(); // !
  UNK_0xeb74(); // UNK_0xeb74

  label2:
  UNK_0xe32c(); // UNK_0xe32c
  Push(0); // 0
  Push(0x001f);
  CMESS(); // CMESS
  Push(pp__ask_TD); // ?TD
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  PRINT("TRANSFER", 8); // (.")
  goto label4;

  label3:
  INST_dash_X(); // INST-X
  _2_at_(); // 2@
  Push(0xffff); Pust(0xffff);
  D_eq_(); // D=
  if (Pop() == 0) goto label5;
  PRINT("PICK UP", 7); // (.")
  goto label4;

  label5:
  PRINT("JETTISON", 8); // (.")

  label4:
  PRINT(" HOW MANY CUBIC METERS?", 23); // (.")
  _ex_CRS(); // !CRS
  Push(1); // 1
  Push(0x0016);
  CMESS(); // CMESS
  PRINT("ENTER VOLUME (0-", 16); // (.")
  Push(pp_ELEM_dash_AM); // ELEM-AM
  Push(Read16(Pop())); // @
  Push(0x000a);
  _slash_MOD(); // /MOD
  Push(0); // 0
  _dot_R(); // .R
  PRINT(".", 1); // (.")
  Push(0); // 0
  _dot_R(); // .R
  PRINT(")", 1); // (.")
  UNK_0xeacc(); // UNK_0xeacc
  Push(pp_ELEM_dash_AM); // ELEM-AM
  _ex_(); // !
  _ex_CRS(); // !CRS
  UNK_0xe32c(); // UNK_0xe32c
}

// 0xecce: db 0x4c 0x22 0xf2 0x79 0x12 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0f 0x00 0x12 0x7e 0x41 0x0e 0xfa 0x15 0x12 0x00 0x84 0x7a 0x30 0x75 0x5d 0x17 0x0f 0x00 0x5f 0x12 0xfa 0x15 0xf4 0xff 0xd6 0xba 0xc9 0x79 0xc9 0x79 0x90 0x16 0x4c 0x22 0x79 0xe8 0x9b 0x54 0x76 0x6d 0x5d 0x17 0x39 0x00 0x8d 0x54 0x76 0x6d 0xe9 0x5b 0xae 0x0b 0xc2 0x5b 0xae 0x0b 0x5d 0x17 0x0e 0x00 0x92 0x0f 0x2b 0xa0 0x83 0x3b 0x20 0x0f 0xb8 0x15 0x81 0xe3 0x50 0x0e 0x5d 0x17 0x26 0x00 0xb3 0x0f 0x72 0x0f 0xdb 0x23 0xe7 0x0f 0x5d 0x17 0x26 0x00 0xea 0x6d 0x5d 0x17 0x26 0x00 0xdb 0x23 0x6a 0x6d 0xdb 0x23 0xc8 0xe3 0x5d 0x17 0x26 0x00 0x7f 0x0e 0x92 0x0c 0x92 0x0f 0x35 0x10 0xa5 0x29 0x31 0xa3 0x8c 0xa4 0xd0 0x15 0xca 0xff 0x8c 0xa4 0x8c 0xa4 0x5d 0x17 0x3f 0x00 0x6c 0x58 0x76 0x6d 0xdc 0x1b 0x08 0x5b 0x20 0x51 0x55 0x49 0x54 0x20 0x5d 0x20 0x0f 0x65 0x4f 0x1d 0xaf 0x2e 0x0f 0x65 0x4f 0x1d 0xaf 0x38 0xaa 0xde 0x0d 0x6a 0xaa 0xfa 0x15 0xf8 0xff 0x90 0x16 0x4c 0x22 0xc2 0x5b 0xae 0x0b 0x93 0x3b 0x92 0x0f 0xe9 0x5b 0xae 0x0b 0xd0 0x5b 0xae 0x0b 0xdd 0x5b 0xae 0x0b 0x65 0x4f 0xee 0xa0 0x28 0xa5 0x69 0xe8 0x89 0xe3 0x92 0x0c 0xfa 0xec 0xc9 0x79 0x5d 0x17 0xff 0x00 0x91 0xe3 0x6a 0x6d 0x90 0x16 0x4c 0x22 0x69 0xe8 0x1e 0x75 0x5d 0x17 0x1c 0x00 0x5f 0x12 0xfa 0x15 0xa8 0x00 0xfd 0x8e 0x91 0xe3 0x92 0x0c 0x89 0x12 0xfa 0x15 0x6a 0x00 0x5d 0x17 0x38 0xff 0x5d 0x17 0xf4 0x01 0x96 0xea 0xfa 0x15 0x52 0x00 0x2a 0xe3 0x20 0x0f 0x5d 0x17 0x12 0x00 0xe6 0xae 0xdc 0x1b 0x12 0x41 0x4e 0x41 0x4c 0x59 0x53 0x49 0x53 0x20 0x49 0x53 0x20 0x35 0x30 0x30 0x20 0x4d 0x55 0xfc 0xa2 0x2e 0x0f 0x5d 0x17 0x1c 0x00 0xe6 0xae 0xdc 0x1b 0x1c 0x41 0x4e 0x41 0x4c 0x59 0x5a 0x45 0x20 0x54 0x48 0x49 0x53 0x20 0x41 0x52 0x54 0x49 0x46 0x41 0x43 0x54 0x3f 0x20 0x5b 0x4e 0x20 0x59 0x5d 0xfc 0xa2 0x82 0xaa 0x60 0x16 0x04 0x00 0x20 0x0f 0x88 0x5c 0xc5 0x6d 0x60 0x16 0x04 0x00 0x2e 0x0f 0xfa 0x15 0x2a 0x00 0x91 0xe3 0x92 0x0c 0x89 0x12 0x5d 0x17 0x0c 0xfe 0xcd 0x10 0xf0 0x0d 0x3e 0x13 0xfa 0x15 0x08 0x00 0xde 0xe2 0x60 0x16 0x04 0x00 0xde 0x0d 0xc5 0xa2 0x87 0xed 0xf9 0x8b 0x79 0xe8 0xcf 0x8b 0xfc 0xa2 0x13 0x8f 0xc5 0xe4 0xc9 0x79 0x90 0x16 0x4c 0x22 0x02 0xe8 0x44 0xe3 0xfe 0xba 0x5d 0x17 0x32 0x00 0x13 0x5d 0x76 0x6d 0x4a 0x55 0xc5 0x6d 0x20 0x0f 0x50 0x6c 0xce 0xec 0x72 0x0f 0x22 0x6c 0xce 0xec 0x72 0x0f 0x41 0x0e 0xfa 0x15 0x24 0x00 0x22 0x6c 0xe8 0xe2 0x55 0xe9 0x38 0xaa 0x32 0x0e 0x43 0xea 0x50 0xaa 0xfa 0x15 0x04 0x00 0xb7 0xed 0x6a 0xaa 0xfa 0x15 0xee 0xff 0xc9 0x79 0xc9 0x79 0x60 0x16 0x73 0x00 0xc5 0xa2 0x28 0xa5 0x6d 0xe3 0x5d 0x17 0x1e 0x00 0x5d 0x17 0x68 0x00 0x2b 0xa0 0xdc 0x1b 0x19 0x54 0x48 0x45 0x52 0x45 0x20 0x41 0x52 0x45 0x20 0x4e 0x4f 0x20 0x41 0x52 0x54 0x49 0x46 0x41 0x43 0x54 0x53 0x20 0x49 0x4e 0x5d 0x17 0x28 0x00 0x5d 0x17 0x61 0x00 0x2b 0xa0 0xdc 0x1b 0x14 0x53 0x54 0x41 0x52 0x53 0x48 0x49 0x50 0x20 0x4f 0x52 0x20 0x53 0x54 0x41 0x52 0x50 0x4f 0x52 0x54 0x04 0xe6 0xfc 0xa2 0x5d 0x17 0x19 0x00 0x65 0x4f 0x5d 0x17 0x68 0x00 0x5d 0x17 0x1e 0x00 0x77 0xa3 0x5d 0x17 0x15 0x00 0x65 0x4f 0x5d 0x17 0x61 0x00 0x5d 0x17 0x26 0x00 0x77 0xa3 0x12 0xbb 0xfa 0x15 0x04 0x00 0x15 0xe9 0x90 0x16 0x4c 0x22 0x54 0x55 0xae 0x0b 0xfa 0x15 0x10 0x00 0x19 0xad 0xae 0x0b 0x13 0x5d 0xae 0x0b 0xe8 0xe3 0x20 0x0f 0xde 0xe2 0xa9 0x74 0xae 0x0b 0xa6 0xe3 0x72 0x0f 0xb2 0xe3 0x48 0xbb 0xac 0x7e 0xe7 0x0f 0x90 0x16 0x4c 0x22 0x54 0x55 0xae 0x0b 0xfa 0x15 0x10 0x00 0xe4 0xad 0xae 0x0b 0x13 0x5d 0xae 0x0b 0xe8 0xe3 0x20 0x0f 0xde 0xe2 0xf6 0xad 0xae 0x0b 0xa6 0xe3 0x72 0x0f 0xb2 0xe3 0x48 0xbb 0x54 0x55 0xae 0x0b 0xfa 0x15 0x0e 0x00 0x22 0x6c 0xf2 0x79 0x37 0xbb 0xc9 0x79 0x60 0x16 0x04 0x00 0xac 0x7e 0xe7 0x0f 0x90 0x16 0x4c 0x22 0xf1 0xeb 0x54 0x55 0xae 0x0b 0xfa 0x15 0x1a 0x00 0xc0 0xad 0xae 0x0b 0x13 0x5d 0xae 0x0b 0xe8 0xe3 0xa9 0x74 0xae 0x0b 0xcb 0x53 0xae 0x0b 0xad 0x11 0xcd 0x10 0xde 0xe2 0xa9 0x74 0xae 0x0b 0x41 0x0e 0xcb 0x53 0xae 0x0b 0xad 0x11 0xa6 0xe3 0x72 0x0f 0xb2 0xe3 0x78 0x12 0x48 0xbb 0xac 0x7e 0x72 0x0f 0x90 0x16 0x4c 0x22 0xfd 0x8e 0xf9 0x8b 0x69 0xe8 0xa9 0x74 0xae 0x0b 0x5d 0x17 0x0a 0x00 0x60 0x0f 0xc9 0x79 0x3d 0xe8 0xf2 0x79 0xb7 0xae 0x5d 0x17 0x1a 0x00 0x72 0x0f 0x8b 0x3b 0x5d 0x17 0x2e 0x00 0xfd 0x6d 0x21 0xae 0xb7 0xae 0x5d 0x17 0x1e 0x00 0x72 0x0f 0x7f 0x0e 0x92 0x0f 0xf2 0x0e 0xea 0x6d 0x21 0xae 0x32 0x0e 0x92 0x0c 0xb7 0xae 0x5d 0x17 0x1f 0x00 0x72 0x0f 0x6a 0x6d 0x15 0xe9 0xc2 0x5b 0xae 0x0b 0xe9 0x5b 0xae 0x0b 0x5d 0x17 0x26 0x00 0x65 0x4f 0x0d 0x40 0x77 0xa3 0xf2 0x0e 0x2b 0xa0 0xb7 0xae 0x5d 0x17 0x26 0x00 0xe6 0x06 0xc9 0x79 0x15 0xe9 0xcf 0x8b 0x13 0x8f 0x90 0x16 0x4c 0x22 0x50 0x6c 0xf2 0x79 0x12 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0a 0x00 0x12 0x7e 0xfa 0x15 0x18 0x00 0x12 0x7a 0x5d 0x17 0x1a 0x00 0x7f 0x0e 0x12 0x7e 0xa9 0x74 0xae 0x0b 0xb3 0x0f 0x91 0x75 0x60 0x16 0x04 0x00 0x20 0x0f 0x22 0x6c 0xf2 0x79 0x12 0x7a 0x5d 0x17 0x1a 0x00 0x26 0xbb 0x12 0x7a 0x5d 0x17 0x1a 0x00 0xb3 0x0e 0x12 0x7e 0x32 0x0e 0xa9 0x74 0x76 0x6d 0xc9 0x79 0x91 0x75 0x91 0x75 0x91 0x75 0xc9 0x79 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x3a 0x00 0xfd 0x8e 0xf9 0x8b 0x20 0x0f 0xb8 0x15 0x3d 0xe8 0x57 0xe8 0xf2 0x79 0xda 0x7e 0xc9 0x79 0x21 0x5d 0xae 0x0b 0xf6 0x5b 0xae 0x0b 0x46 0x12 0xfa 0x15 0x08 0x00 0x9c 0x7a 0x65 0x4f 0xaa 0xa4 0xe9 0xe9 0x97 0xe9 0xd0 0x15 0xdc 0xff 0xcf 0x8b 0x13 0x8f 0xcb 0xe9 0x60 0x16 0x14 0x00 0x69 0xe8 0x1e 0x75 0xc9 0x79 0x5d 0x17 0x1a 0x00 0x5f 0x12 0xfa 0x15 0x04 0x00 0xde 0xef 0x90 0x16 0x4c 0x22 0x5d 0x17 0x1a 0x00 0x8d 0x54 0x76 0x6d 0x8b 0x3b 0x9b 0x54 0x76 0x6d 0xc0 0xad 0xae 0x0b 0x05 0x10 0xc0 0xad 0x76 0x6d 0x8a 0x79 0x90 0x16 0x4c 0x22 0x5d 0x17 0x1a 0x00 0x8d 0x54 0x76 0x6d 0x8b 0x3b 0x9b 0x54 0x76 0x6d 0xc0 0xad 0xae 0x0b 0x35 0x10 0xc0 0xad 0x76 0x6d 0x8a 0x79 0x90 0x16 'L" y z]   ]    ~A      z0u]   _        y y  L"y  Tvm] 9  Tvm [   [  ]     +  ;      P ] &   r  #  ] &  m] &  #jm #  ] &      5  )1           ] ? lXvm   [ QUIT ]  eO  . eO  8   j       L" [   ;   [   [   [  eO  ( i        y]     jm  L"i  u]   _               j ] 8 ]       R *   ]        ANALYSIS IS 500 MU  . ]        ANALYZE THIS ARTIFACT? [N Y]    `      \ m`   .   *       ]       >       `           y          y  L"  D   ] 2  ]vmJU m  Pl  r "l  r A   $ "l  U 8 2 C P       j      y y` s   ( m ]   ] h +    THERE ARE NO ARTIFACTS IN] ( ] a +    STARSHIP OR STARPORT    ]   eO] h ]   w ]   eO] a ] & w           L"TU           ]         t    r   H  ~    L"TU           ]              r   H TU      "l y7  y`    ~    L"  TU           ]     t   S         t  A  S      r   x H  ~r   L"    i  t  ]   `  y=  y  ]   r  ;] .  m!   ]   r       m! 2     ]   r jm   [   [  ] & eO @w   +   ] &    y        L"Pl y z]   ]    ~     z]     ~ t     u`     "l y z]   &  z]      ~2  tvm y u u u y  L"    :         = W  y ~ y!]   [  F      zeO                `   i  u y]   _         L"]    Tvm ; Tvm        vm y  L"]    Tvm ; Tvm    5   vm y  '

// ================================================
// 0xf138: WORD 'SELL-WHAT' codep=0x4a4f parp=0xf146
// ================================================
// 0xf146: db 0x03 0x00 0x38 0xef 0x0b 0x00 0x22 0x0f 0x1c 0x00 0x62 0xef 0x1a 0x00 0xa0 0xef '  8   "   b     '

// ================================================
// 0xf156: WORD 'SELL-IT' codep=0x224c parp=0xf162
// ================================================
// entry

void SELL_dash_IT() // SELL-IT
{
  CDEPTH(); // CDEPTH
  UNK_0xe83f(); // UNK_0xe83f
  _gt_C_plus_S(); // >C+S
  TEXT_dash_IN(); // TEXT-IN
  _1_dot_5_at_(); // 1.5@
  TEXT_dash_CO(); // TEXT-CO
  _1_dot_5_at_(); // 1.5@
  _star_STARSH(); // *STARSH
  _gt_C(); // >C
  _gt_C(); // >C
  _gt_C_plus_(); // >C+
  SET_dash_CUR(); // SET-CUR
  _at_INST_dash_C(); // @INST-C
  SELL_dash_WHAT(); // SELL-WHAT
  _gt_R(); // >R
  Push(h); // I
  Push(cc__dash_1); // -1
  Push(Pop() * Pop()); // *
  Push(pp_SCROLL_dash_); // SCROLL-
  _plus__ex_(); // +!

  label2:
  DUP(); // DUP
  CDEPTH(); // CDEPTH
  _st_(); // <
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  goto label2;

  label1:
  Pop(); // DROP
  R_gt_(); // R>
  Push(pp_SCROLL_dash_); // SCROLL-
  Push(Read16(Pop())); // @
}

// 0xf1a4: db 0x4c 0x22 0x60 0xf1 0xfa 0x15 0x08 0x00 0xa8 0xf0 0x60 0x16 0x20 0x00 0x32 0x0e 0x15 0xe9 0xc2 0x5b 0xae 0x0b 0xe9 0x5b 0xae 0x0b 0xd0 0x5b 0xae 0x0b 0x9b 0x3b 0x92 0x0f 0xdd 0x5b 0xae 0x0b 0x65 0x4f 0xee 0xa0 0x15 0xe9 0x91 0xe6 0xd1 0xe7 0x90 0x16 0x4c 0x22 0xb4 0xe2 0xb7 0x6d 0xe6 0xe7 0xfe 0xba 0x5d 0x17 0x32 0x00 0x13 0x5d 0x76 0x6d 0x4a 0x55 0xc5 0x6d 0xfc 0xf0 0x50 0x6c 0xf2 0x79 0x12 0x7a 0x20 0x0f 0x75 0x75 0x2c 0x40 0x07 0x13 0x30 0x75 0x5d 0x17 0x11 0x00 0x5f 0x12 0x9c 0x7a 0x30 0x75 0x5d 0x17 0x1b 0x00 0x5f 0x12 0xf5 0x12 0x07 0x13 0xf5 0x12 0x84 0x7a 0xfa 0x15 0x28 0x00 0x44 0xe3 0x30 0x75 0x5d 0x17 0x11 0x00 0x5f 0x12 0x07 0x13 0x1e 0x75 0x5d 0x17 0x0b 0x00 0x5f 0x12 0xf5 0x12 0xfa 0x15 0x06 0x00 0xd6 0xba 0xe7 0x0f 0x84 0x7a 0x60 0x7a 0xfa 0x15 0xde 0xff 0xc9 0x79 0xc9 0x79 0x41 0x0e 0xfa 0x15 0x30 0x00 0x50 0x6c 0xe8 0xe2 0x55 0xe9 0x38 0xaa 0x32 0x0e 0x43 0xea 0x50 0xaa 0xfa 0x15 0x06 0x00 0xa4 0xf1 0xc5 0xe4 0x6a 0xaa 0x21 0x5d 0xae 0x0b 0x3d 0x0f 0x46 0x12 0x3e 0x13 0xfa 0x15 0xe2 0xff 0xc9 0x79 0xc9 0x79 0x60 0x16 0x3d 0x00 0xc5 0xa2 0x28 0xa5 0x5d 0x17 0x24 0x00 0x5d 0x17 0x64 0x00 0x2b 0xa0 0xdc 0x1b 0x16 0x53 0x54 0x41 0x52 0x53 0x48 0x49 0x50 0x20 0x48 0x4f 0x4c 0x44 0x20 0x49 0x53 0x20 0x45 0x4d 0x50 0x54 0x59 0x04 0xe6 0xfc 0xa2 0x5d 0x17 0x17 0x00 0x65 0x4f 0x5d 0x17 0x6b 0x00 0x5d 0x17 0x22 0x00 0x77 0xa3 0x12 0xbb 0xfa 0x15 0x04 0x00 0x15 0xe9 0x1a 0xf1 0x90 0x16 0x4c 0x22 0xf6 0xad 0xae 0x0b 0xe4 0xad 0xae 0x0b 0x96 0xea 0xfa 0x15 0x26 0x00 0xe4 0xad 0xae 0x0b 0x20 0x0f 0xb7 0x10 0xde 0xe2 0xa6 0xe3 0xf6 0xad 0xae 0x0b 0x92 0x0f 0xb2 0xe3 0x48 0xbb 0x50 0x6c 0xf2 0x79 0x37 0xbb 0xc9 0x79 0xe7 0x0f 0x60 0x16 0x04 0x00 0x20 0x0f 0x90 0x16 0x4c 0x22 0x2e 0x0f 0xc0 0xad 0xae 0x0b 0x96 0xea 0xfa 0x15 0x64 0x00 0xf1 0xeb 0xcb 0x53 0xae 0x0b 0x41 0x0e 0x41 0x0e 0xc0 0xad 0xae 0x0b 0xb3 0x0f 0x96 0xea 0xcb 0x53 0xae 0x0b 0x9f 0x12 0xf5 0x12 0xfa 0x15 0x3e 0x00 0xb4 0x0d 0xc0 0xad 0xae 0x0b 0x50 0x0e 0xd6 0x11 0xb7 0x10 0xde 0xe2 0xa6 0xe3 0x50 0x0e 0x92 0x0f 0xb2 0xe3 0x50 0x0e 0xa9 0x74 0x83 0x6d 0x5d 0x17 0x1a 0x00 0x30 0x75 0x59 0x81 0xf2 0x79 0x90 0x0e 0xa9 0x74 0x76 0x6d 0x75 0x75 0xc9 0x79 0x50 0x6c 0xf2 0x79 0x37 0xbb 0xc9 0x79 0x60 0x16 0x04 0x00 0x32 0x0e 0x20 0x0f 0x60 0x16 0x04 0x00 0x20 0x0f 0x90 0x16 'L"`       `   2    [   [   [   ;   [  eO          L"   m    ] 2  ]vmJU m  Pl y z  uu,@  0u]   _  z0u]   _        z  ( D 0u]   _    u]   _            z`z     y yA   0 Pl  U 8 2 C P         j !]  = F >      y y` =   ( ] $ ] d +    STARSHIP HOLD IS EMPTY    ]   eO] k ] " w             L"            &                     H Pl y7  y  `       L".         d    S  A A          S        >       P         P     P  t m]   0uY  y   tvmuu yPl y7  y`   2   `       '

// ================================================
// 0xf36b: WORD 'BUY-WHAT' codep=0x4a4f parp=0xf378
// ================================================
// 0xf378: db 0x02 0x00 0x22 0x0f 0x1c 0x00 0xc1 0xf2 0x1a 0x00 0xf9 0xf2 0x4c 0x22 0xd5 0x75 0x3d 0xe8 0xf2 0x79 0xa8 0xae 0x95 0x49 0x99 0xae 0x95 0x49 0x22 0x6c 0x3d 0x75 0x3d 0x75 0x70 0x7a 0x8a 0x79 0x1e 0x75 0x76 0xf3 0xb4 0x0d 0x50 0x0e 0xc6 0x11 0x21 0x5d 0x83 0x6d 0x41 0x0e 0xd5 0x75 0x46 0x12 0xfa 0x15 0x08 0x00 0xc9 0x79 0x60 0x16 0xf2 0xff 0x32 0x0e 0x90 0x0e 0xa8 0xf0 0x91 0xe6 0x33 0xe7 0x90 0x16 0x4c 0x22 0xb4 0xe2 0xc5 0x6d 0x47 0xe7 0x44 0xe3 0xfe 0xba 0x5d 0x17 0x64 0x00 0x13 0x5d 0x76 0x6d 0x4a 0x55 0xb7 0x6d 0x8b 0x3b 0x52 0xf0 0x2e 0x0f 0x52 0xf0 0x7b 0x3b 0x52 0xf0 0x5d 0x17 0x0c 0x00 0x52 0xf0 0x5d 0x17 0x10 0x00 0x52 0xf0 0x5d 0x17 0x14 0x00 0x52 0xf0 0x22 0x6c 0xea 0xba 0x22 0x6c 0xe8 0xe2 0x55 0xe9 0x38 0xaa 0x32 0x0e 0x43 0xea 0x50 0xaa 0xfa 0x15 0x06 0x00 0x84 0xf3 0xc5 0xe4 0x6a 0xaa 0xfa 0x15 0xec 0xff 0xc9 0x79 0xc9 0x79 0x12 0xbb 0x15 0xe9 0x90 0x16 '  "         L" u=  y   I   I"l=u=upz y uv   P   !] mA  uF      y`   2       3   L"   mG D   ] d  ]vmJU m ;R . R {;R ]   R ]   R ]   R "l  "l  U 8 2 C P         j      y y      '

// ================================================
// 0xf428: WORD 'DEPOT-FUNCTION' codep=0x4a4f parp=0xf43b
// ================================================
// 0xf43b: db 0x04 0x00 0x48 0x3a 0x00 0x00 0xca 0xf3 0x01 0x00 0xd8 0xf1 0x02 0x00 0x73 0xee 0x03 0x00 0x09 0x13 '  H:          s     '

// ================================================
// 0xf44f: WORD '(U-DEPOT)' codep=0x224c parp=0xf45d
// ================================================
// entry

void _ro_U_dash_DEPOT_rc_() // (U-DEPOT)
{
  Push(pp__ask_TD); // ?TD
  ON(); // ON
  _gt_HIDDEN(); // >HIDDEN
  UNK_0xe835(); // UNK_0xe835
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
  Push(pp_NCRS); // NCRS
  OFF(); // OFF
  Push(pp_OCRS); // OCRS
  OFF(); // OFF
  GREY2(); // GREY2
  GREY1(); // GREY1
  UNK_0xe2fa(); // UNK_0xe2fa
  _ask_MRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  _ex_(); // !
  Push(pp_UNK_0xe4b4); // UNK_0xe4b4
  BLD_dash_CRS(); // BLD-CRS

  label3:
  XYSCAN(); // XYSCAN
  Push(pp_NCRS); // NCRS
  _plus__ex_(); // +!
  Push(pp_UNK_0xe4b4); // UNK_0xe4b4
  SET_dash_CRS(); // SET-CRS
  Pop(); Pop();// 2DROP
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  _at_CRS(); // @CRS
  Push(0); // 0
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  DEPOT_dash_FUNCTION(); // DEPOT-FUNCTION
  _gt_R(); // >R
  Push(cc__dash_1); // -1
  GREY2(); // GREY2
  X0MESS(); // X0MESS
  UNK_0xe32c(); // UNK_0xe32c
  _ex_CRS(); // !CRS
  R_gt_(); // R>
  goto label2;

  label1:
  Push(0); // 0

  label2:
  if (Pop() == 0) goto label3;
  Push(2); // 2
  UNK_0xe2cc(); // UNK_0xe2cc
  Push(pp__ask_TD); // ?TD
  OFF(); // OFF
}


// ================================================
// 0xf4bf: WORD '<TDART' codep=0x224c parp=0xf4ca
// ================================================
// entry

void _st_TDART() // <TDART
{
  _star_ITEMS_dash_(); // *ITEMS-
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  if (Pop() == 0) goto label1;
  IOPEN(); // IOPEN
  Push(0); // 0

  label4:
  _at_INST_dash_S(); // @INST-S
  Push(0x000f);
  _gt_(); // >
  Push(Pop() + Pop()); // +
  DUP(); // DUP
  Push(0x000a);
  _gt_(); // >
  _at_INST_dash_S(); // @INST-S
  Push(0x000f);
  _gt_(); // >
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  IDELETE(); // IDELETE
  goto label3;

  label2:
  INEXT(); // INEXT

  label3:
  _ask_FIRST(); // ?FIRST
  if (Pop() == 0) goto label4;
  Pop(); // DROP
  ICLOSE(); // ICLOSE

  label1:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}

// 0xf51a: db 0x54 0x44 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x66 0x69 0x78 0x20 0x66 0x6f 0x72 0x20 0x54 0x52 0x41 0x44 0x45 0x20 0x44 0x45 0x50 0x4f 0x54 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x20 0x29 0x38 0x31 0x32 0x39 0x36 0x5f 0x5f 0x00 'TD-VOC__________________________fix for TRADE DEPOT---------- )81296__ '
  