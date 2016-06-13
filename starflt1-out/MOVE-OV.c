// ====== OVERLAY 'MOVE-OV' ======
// store offset = 0xe680
// overlay size   = 0x0ee0

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0xe6c6  codep:0x224c parp:0xe6c6 size:0x0018 C-string:'UNK_0xe6c6'
// 1704:      UNK_0xe6e0  codep:0x224c parp:0xe6e0 size:0x0020 C-string:'UNK_0xe6e0'
// 1705:      UNK_0xe702  codep:0x224c parp:0xe702 size:0x0090 C-string:'UNK_0xe702'
// 1706:      UNK_0xe794  codep:0x224c parp:0xe794 size:0x0016 C-string:'UNK_0xe794'
// 1707:      UNK_0xe7ac  codep:0x224c parp:0xe7ac size:0x000a C-string:'UNK_0xe7ac'
// 1708:      UNK_0xe7b8  codep:0x224c parp:0xe7b8 size:0x00a4 C-string:'UNK_0xe7b8'
// 1709:      UNK_0xe85e  codep:0x224c parp:0xe85e size:0x002e C-string:'UNK_0xe85e'
// 1710:       SET-SPEED  codep:0x224c parp:0xe89a size:0x0042 C-string:'SET_dash_SPEED'
// 1711:            CBLT  codep:0x1d29 parp:0xe8e5 size:0x0004 C-string:'CBLT'
// 1712:           CBLTP  codep:0xe8f3 parp:0xe8f3 size:0x014e C-string:'CBLTP'
// 1713:          %STORM  codep:0x1d29 parp:0xea4c size:0x023a C-string:'_pe_STORM'
// 1714:      UNK_0xec88  codep:0x224c parp:0xec88 size:0x0068 C-string:'UNK_0xec88'
// 1715:      UNK_0xecf2  codep:0x224c parp:0xecf2 size:0x0020 C-string:'UNK_0xecf2'
// 1716:      UNK_0xed14  codep:0x224c parp:0xed14 size:0x001e C-string:'UNK_0xed14'
// 1717:      UNK_0xed34  codep:0x224c parp:0xed34 size:0x000c C-string:'UNK_0xed34'
// 1718:      UNK_0xed42  codep:0x224c parp:0xed42 size:0x0008 C-string:'UNK_0xed42'
// 1719:      UNK_0xed4c  codep:0x224c parp:0xed4c size:0x002c C-string:'UNK_0xed4c'
// 1720:      UNK_0xed7a  codep:0x224c parp:0xed7a size:0x002c C-string:'UNK_0xed7a'
// 1721:      UNK_0xeda8  codep:0x224c parp:0xeda8 size:0x008a C-string:'UNK_0xeda8'
// 1722:      UNK_0xee34  codep:0x224c parp:0xee34 size:0x0024 C-string:'UNK_0xee34'
// 1723:         ?POPULA  codep:0x224c parp:0xee64 size:0x0591 C-string:'_ask_POPULA'
// 1724:         TV-MOVE  codep:0x224c parp:0xf401 size:0x0014 C-string:'TV_dash_MOVE'
// 1725:      UNK_0xf417  codep:0x73ea parp:0xf417 size:0x0006 C-string:'UNK_0xf417'
// 1726:        APPROACH  codep:0x224c parp:0xf42a size:0x0000 C-string:'APPROACH'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char CBLT[4] = {0xff, 0x66, 0x00, 0x66}; // CBLT
unsigned char _pe_STORM[570] = {0x00, 0x00, 0x14, 0x00, 0x28, 0x00, 0x3c, 0x00, 0x55, 0x00, 0x4c, 0x22, 0xf2, 0x5a, 0xae, 0x0b, 0x73, 0x3b, 0x2d, 0x12, 0xfa, 0x15, 0x08, 0x00, 0x5d, 0x17, 0xd8, 0xcd, 0xce, 0x84, 0x90, 0x16, 0x4c, 0x22, 0x2b, 0x54, 0xae, 0x0b, 0xfa, 0x15, 0x7e, 0x00, 0xb5, 0x5a, 0xae, 0x0b, 0xfa, 0x15, 0x0e, 0x00, 0xac, 0x3b, 0xb5, 0x5a, 0x83, 0x6d, 0x56, 0xea, 0x60, 0x16, 0x64, 0x00, 0xbd, 0x62, 0x02, 0x7a, 0x13, 0xea, 0xae, 0x0b, 0x4a, 0xea, 0x7f, 0x0e, 0x72, 0x0f, 0x72, 0x0f, 0xae, 0x0b, 0x2e, 0x0f, 0x5d, 0x17, 0x64, 0x00, 0xd8, 0x4a, 0x2d, 0x12, 0xfa, 0x15, 0x0c, 0x00, 0xcd, 0x5a, 0xae, 0x0b, 0xce, 0x84, 0x60, 0x16, 0x38, 0x00, 0x2e, 0x0f, 0x7b, 0x3b, 0xd8, 0x4a, 0xf2, 0x5a, 0x76, 0x6d, 0x5d, 0x17, 0xd8, 0xcd, 0xce, 0x84, 0x2e, 0x0f, 0x13, 0xea, 0xae, 0x0b, 0x83, 0x3b, 0xf2, 0x0e, 0x92, 0x0f, 0x75, 0x49, 0xd8, 0x4a, 0x5d, 0x17, 0x0c, 0x00, 0xad, 0x11, 0x20, 0x0f, 0x89, 0x11, 0xb5, 0x5a, 0x76, 0x6d, 0x5d, 0x17, 0x64, 0x00, 0xa9, 0x5a, 0xfd, 0x4b, 0xc9, 0x79, 0x1b, 0xea, 0x60, 0x16, 0x12, 0x00, 0xf2, 0x5a, 0xc5, 0x6d, 0xb5, 0x5a, 0xc5, 0x6d, 0x5d, 0x17, 0x64, 0x00, 0xa9, 0x5a, 0xfd, 0x4b, 0x90, 0x16, 0x4c, 0x22, 0x7a, 0x58, 0xae, 0x0b, 0x7a, 0x58, 0xc5, 0x6d, 0x5d, 0x17, 0x74, 0x00, 0x5d, 0x17, 0xb2, 0x00, 0x2b, 0xa0, 0x5d, 0x17, 0x0a, 0x00, 0x0a, 0x4f, 0x43, 0xa3, 0xb6, 0x4f, 0x17, 0x85, 0x72, 0x5e, 0xae, 0x0b, 0x5d, 0x17, 0x2c, 0x01, 0x60, 0x0f, 0x5d, 0x17, 0x0c, 0x12, 0x72, 0x0f, 0xf2, 0x0e, 0x5d, 0x17, 0x1e, 0x00, 0x60, 0x0f, 0xe7, 0x0f, 0xf2, 0x0e, 0xe7, 0x0f, 0x41, 0x0e, 0x5d, 0x17, 0x0a, 0x00, 0x46, 0x12, 0xfa, 0x15, 0x06, 0x00, 0xdc, 0x1b, 0x01, 0x30, 0x20, 0x0f, 0xe1, 0x27, 0xdc, 0x1b, 0x01, 0x2d, 0x41, 0x0e, 0x5d, 0x17, 0x0a, 0x00, 0x46, 0x12, 0xfa, 0x15, 0x06, 0x00, 0xdc, 0x1b, 0x01, 0x30, 0x20, 0x0f, 0xe1, 0x27, 0xdc, 0x1b, 0x01, 0x2d, 0x20, 0x0f, 0xe1, 0x27, 0x7a, 0x58, 0x76, 0x6d, 0x90, 0x16, 0x4c, 0x22, 0x72, 0x5e, 0xae, 0x0b, 0x53, 0x54, 0xae, 0x0b, 0x5f, 0x12, 0x7a, 0x56, 0xae, 0x0b, 0x89, 0x12, 0xf5, 0x12, 0xfa, 0x15, 0x06, 0x00, 0x45, 0x54, 0x37, 0x3a, 0x90, 0x16, 0x29, 0x1d, 0x01, 0x00, 0x29, 0x1d, 0x00, 0x00, 0x14, 0x22, 0xd0, 0x07, 0xea, 0x73, 0x44, 0x90, 0x02, 0x9c, 0xd8, 0x69, 0x4c, 0x22, 0x6d, 0x62, 0x02, 0x7a, 0xac, 0x5d, 0xae, 0x0b, 0xb7, 0x5d, 0xae, 0x0b, 0xaa, 0xe7, 0xc9, 0x79, 0x90, 0x16, 0x4c, 0x22, 0x9a, 0xeb, 0xae, 0x0b, 0x41, 0x0e, 0xfd, 0x58, 0xfd, 0x4b, 0x42, 0x59, 0x11, 0x4c, 0x9e, 0xeb, 0xae, 0x0b, 0x41, 0x0e, 0x09, 0x59, 0xfd, 0x4b, 0x4d, 0x59, 0x11, 0x4c, 0x90, 0x16, 0x4c, 0x22, 0x41, 0x0e, 0x2b, 0x59, 0xfd, 0x4b, 0x14, 0x59, 0x11, 0x4c, 0x90, 0x16, 0x4c, 0x22, 0x41, 0x0e, 0x37, 0x59, 0xfd, 0x4b, 0x1f, 0x59, 0x11, 0x4c, 0x90, 0x16, 0x4c, 0x22, 0x42, 0x59, 0xae, 0x0b, 0x14, 0x59, 0xae, 0x0b, 0xf0, 0x0d, 0xf6, 0x0f, 0x5f, 0x12, 0xfa, 0x15, 0x0c, 0x00, 0xde, 0x0d, 0x5d, 0x17, 0xf4, 0xff, 0x60, 0x16, 0x18, 0x00, 0x5d, 0x17, 0x1a, 0x00, 0x72, 0x0f, 0x5f, 0x12, 0xfa, 0x15, 0x0a, 0x00, 0x5d, 0x17, 0x0c, 0x00, 0x60, 0x16, 0x04, 0x00, 0x20, 0x0f, 0xe2, 0xeb, 0x4d, 0x59, 0xae, 0x0b, 0x1f, 0x59, 0xae, 0x0b, 0xf0, 0x0d, 0xf6, 0x0f, 0x5f, 0x12, 0xfa, 0x15, 0x0c, 0x00, 0xde, 0x0d, 0x5d, 0x17, 0xec, 0xff, 0x60, 0x16, 0x18, 0x00, 0x5d, 0x17, 0x2a, 0x00, 0x72, 0x0f, 0x5f, 0x12, 0xfa, 0x15, 0x0a, 0x00, 0x5d, 0x17, 0x14, 0x00, 0x60, 0x16, 0x04, 0x00, 0x20, 0x0f, 0xf0, 0xeb, 0x2b, 0x59, 0xae, 0x0b, 0x37, 0x59, 0xae, 0x0b, 0x3e, 0x13, 0xfa, 0x15, 0x08, 0x00, 0x5d, 0x17, 0x3e, 0xc3, 0xce, 0x84, 0x90, 0x16, 0x4c, 0x22, 0xf0, 0x0d, 0x12, 0x7e, 0x90, 0x16}; // %STORM



// 0xe692: db 0xe1 0x00 0x4c 0x22 0x29 0xb0 0xfa 0x15 0x28 0x00 0x98 0x2a 0x38 0x0c 0xff 0x61 0xac 0x6d 0x2e 0x0f 0x64 0x5e 0x83 0x6d 0x64 0x5e 0xae 0x0b 0x5d 0x17 0x18 0x00 0x5f 0x12 0xfa 0x15 0x0c 0x00 0x64 0x5e 0xc5 0x6d 0x2e 0x0f 0x72 0x5e 0x83 0x6d 0x90 0x16 '  L")   (  *8  a m. d^ md^  ]   _     d^ m. r^ m  '

// ================================================
// 0xe6c4: WORD 'UNK_0xe6c6' codep=0x224c parp=0xe6c6
// ================================================

void UNK_0xe6c6() // UNK_0xe6c6
{
  Push(0x0040);
  Push(cc__3); // 3
  Push(cc__7); // 7
  Push(0x0026);
  WINDOW(); // WINDOW
  Push(cc__dash_1); // -1
  Push(pp_WBOTTOM); // WBOTTOM
  _plus__ex_(); // +!
  _gt_TVCT(); // >TVCT
}


// ================================================
// 0xe6de: WORD 'UNK_0xe6e0' codep=0x224c parp=0xe6e0
// ================================================

void UNK_0xe6e0() // UNK_0xe6e0
{
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(pp_WBOTTOM); // WBOTTOM
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(pp_WRIGHT); // WRIGHT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  BLACK(); // BLACK
  POLY_dash_WI(); // POLY-WI
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe700: WORD 'UNK_0xe702' codep=0x224c parp=0xe702
// ================================================

void UNK_0xe702() // UNK_0xe702
{
  UNK_0xe6c6(); // UNK_0xe6c6
  UNK_0xe6e0(); // UNK_0xe6e0
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  Push(pp_WLEFT); // WLEFT
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_WTOP); // WTOP
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  POS_dot_(); // POS.
}

// 0xe71a: db 0x4c 0x22 0x89 0x12 0x89 0x12 0x90 0x16 0x4c 0x22 0x5d 0x17 0xe0 0x01 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x35 0x00 0xc4 0x0f 0xf2 0x0e 0x5d 0x17 0x80 0x04 0x92 0x0f 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x40 0x00 0xc4 0x0f 0xf2 0x0e 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x57 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x45 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 0x4c 0x22 0xc8 0x0d 0xfa 0x15 0x18 0x00 0x78 0x12 0xfa 0x15 0x0a 0x00 0xdc 0x1b 0x01 0x53 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x4e 0x60 0x16 0x06 0x00 0xdc 0x1b 0x01 0x20 0x90 0x16 'L"      L"]     ]   ] 5     ]     ]   ] @       L"      x        W`      E`         L"      x        S`      N`         '

// ================================================
// 0xe792: WORD 'UNK_0xe794' codep=0x224c parp=0xe794
// ================================================

void UNK_0xe794() // UNK_0xe794
{
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
}

// 0xe79e: db 0x4c 0x22 0x6d 0x62 0x02 0x7a 0x92 0xe7 0xc9 0x79 0x90 0x16 'L"mb z   y  '

// ================================================
// 0xe7aa: WORD 'UNK_0xe7ac' codep=0x224c parp=0xe7ac
// ================================================

void UNK_0xe7ac() // UNK_0xe7ac
{
  INST_dash_Y(); // INST-Y
  _ex_(); // !
  INST_dash_X(); // INST-X
  _ex_(); // !
}


// ================================================
// 0xe7b6: WORD 'UNK_0xe7b8' codep=0x224c parp=0xe7b8
// ================================================

void UNK_0xe7b8() // UNK_0xe7b8
{
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
}

// 0xe7c2: db 0x4d 0x74 0x11 0x17 0x03 0x4d 0x74 0x10 0x1b 0x01 0x4c 0x22 0xb4 0x51 0xf2 0x79 0xc2 0xe7 0x02 0x7a 0xc7 0xe7 0x92 0x0c 0x91 0x75 0xc9 0x79 0x5d 0x17 0xc7 0x00 0x2d 0x12 0x90 0x16 0x4c 0x22 0xb4 0x0d 0x5d 0x17 0xc5 0x00 0x5d 0x17 0x0c 0x00 0x5d 0x17 0xc1 0x00 0x5d 0x17 0x44 0x00 0x90 0x0e 0xee 0xa0 0x90 0x16 0x4c 0x22 0xf2 0x5a 0xae 0x0b 0x41 0x0e 0x7b 0x3b 0x46 0x12 0xf2 0x0e 0x5d 0x17 0x0b 0x00 0x2d 0x12 0x3e 0x13 0xcc 0xe7 0x3e 0x13 0xfa 0x15 0x3e 0x00 0xb6 0x4f 0x17 0x85 0x9e 0xe7 0x22 0xe7 0x5d 0x17 0x10 0x00 0x5d 0x17 0xc5 0x00 0x2b 0xa0 0x41 0x0e 0x41 0x0e 0x78 0x12 0xfa 0x15 0x04 0x00 0xc6 0x11 0x7b 0x3b 0xe1 0x27 0x6e 0xe7 0xdc 0x1b 0x03 0x20 0x2a 0x20 0x41 0x0e 0x41 0x0e 0x78 0x12 0xfa 0x15 0x04 0x00 0xc6 0x11 0x20 0x0f 0xe1 0x27 0x4a 0xe7 0x90 0x16 'Mt   Mt   L" Q y   z     u y]   -   L"  ]   ]   ]   ] D       L" Z  A {;F   ]   - >   >   >  O    " ]   ]   + A A x       {; 'n     * A A x          'J   '

// ================================================
// 0xe85c: WORD 'UNK_0xe85e' codep=0x224c parp=0xe85e
// ================================================

void UNK_0xe85e() // UNK_0xe85e
{
  Push(0x6ac1);
  SETLARR(); // SETLARR
  Push(pp_XABS); // XABS
  Push(Read16(Pop())); // @
  Push(pp_XCON); // XCON
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  _dash_(); // -
  Push(pp_YABS); // YABS
  Push(Read16(Pop())); // @
  Push(pp_YCON); // YCON
  Push(Read16(Pop())); // @
  _dash_(); // -
}

// 0xe87c: db 0x4c 0x22 0x5c 0xe8 0x4e 0x4d 0x90 0x4d 0x5d 0x17 0x10 0x00 0x46 0x12 0x90 0x16 'L"\ NM M]   F   '

// ================================================
// 0xe88c: WORD 'SET-SPEED' codep=0x224c parp=0xe89a
// ================================================
// entry

void SET_dash_SPEED() // SET-SPEED
{
  UNK_0xe85e(); // UNK_0xe85e
  ACELLAD(); // ACELLAD
  A_at_(); // A@
  DUP(); // DUP
  Push(0x0010);
  _st_(); // <
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(0xff56);
  goto label2;

  label1:
  Push(cc__3); // 3
  Push(2); // 2
  _star__slash_(); // */
  Push(-Pop()); // NEGATE

  label2:
  Push(pp_E_slash_M); // E/M
  _ex_(); // !
}

// 0xe8c4: db 0x4c 0x22 0x42 0x59 0xae 0x0b 0x14 0x59 0xae 0x0b 0x92 0x0f 0x4d 0x59 0xae 0x0b 0x1f 0x59 0xae 0x0b 0x92 0x0f 0x90 0x16 'L"BY   Y    MY   Y      '

// ================================================
// 0xe8dc: WORD 'CBLT' codep=0x1d29 parp=0xe8e5
// ================================================
// 0xe8e5: db 0xff 0x66 0x00 0x66 ' f f'

// ================================================
// 0xe8e9: WORD 'CBLTP' codep=0xe8f3 parp=0xe8f3
// ================================================
// 0xe8f3: pop    ax
// 0xe8f4: add    ax,0003
// 0xe8f7: mov    [5863],ax
// 0xe8fb: pop    ax
// 0xe8fc: add    ax,0006
// 0xe8ff: mov    [586E],ax
// 0xe903: mov    word ptr [5892],0004
// 0xe909: mov    word ptr [5887],0006
// 0xe90f: mov    word ptr [589D],E8E5
// 0xe915: push   ds
// 0xe916: pop    word ptr [58AA]
// 0xe91a: lodsw
// 0xe91b: mov    bx,ax
// 0xe91d: jmp    word ptr [bx]
// 0xe91f: dec    sp
// 0xe920: and    ch,[bx+si-51A8]
// 0xe924: or     bx,[di+17]
// 0xe927: push   cs
// 0xe928: add    [bx+si],ah
// 0xe92a: db     0F
// 0xe92b: mov    ax,9B15
// 0xe92e: cmp    sp,[bx+si]
// 0xe930: db     0F
// 0xe931: mov    ax,4715
// 0xe934: dec    si
// 0xe935: scasb
// 0xe936: or     dx,[bx+si+0E]
// 0xe939: jb     E94A
// 0xe93b: push   cx
// 0xe93c: dec    si
// 0xe93d: scasb
// 0xe93e: or     bp,[bp+0E]
// 0xe941: jb     E952
// 0xe943: lock   
// 0xe944: or     ax,9803
// 0xe947: lock   
// 0xe948: push   bp
// 0xe949: scasb
// 0xe94a: or     si,[si-0FF3]
// 0xe94e: or     ax,0FE7
// 0xe951: repnz  
// 0xe952: push   cs
// 0xe953: out    0F,ax
// 0xe955: repnz  
// 0xe956: push   cs
// 0xe957: add    bx,[bx+si+55F0]
// 0xe95b: scasb
// 0xe95c: or     dx,[bx+si+0E]
// 0xe95f: pop    di
// 0xe960: adc    al,[bx]
// 0xe962: adc    di,dx
// 0xe964: adc    ax,0008
// 0xe967: nop    
// 0xe968: push   cs
// 0xe969: pop    es
// 0xe96a: adc    si,[si-0FF3]
// 0xe96e: or     ax,0FE7
// 0xe971: add    bx,[bx+si+55F0]
// 0xe975: scasb
// 0xe976: or     si,[si-0FF3]
// 0xe97a: or     ax,0EF2
// 0xe97d: out    0F,ax
// 0xe97f: repnz  
// 0xe980: push   cs
// 0xe981: add    bx,[bx+si+55F0]
// 0xe985: scasb
// 0xe986: or     dx,[bx+si+0E]
// 0xe989: pop    di
// 0xe98a: adc    al,[bx]
// 0xe98c: adc    di,dx
// 0xe98e: adc    ax,0008
// 0xe991: nop    
// 0xe992: push   cs
// 0xe993: pop    es
// 0xe994: adc    si,[si+500D]
// 0xe998: push   cs
// 0xe999: db     60
// 0xe99a: push   cs
// 0xe99b: ds:    
// 0xe99c: adc    di,dx
// 0xe99e: adc    ax,002E
// 0xe9a1: push   ax
// 0xe9a2: push   cs
// 0xe9a3: db     60
// 0xe9a4: push   cs
// 0xe9a5: pop    di
// 0xe9a6: adc    al,[bx]
// 0xe9a8: adc    di,dx
// 0xe9aa: adc    ax,0022
// 0xe9ad: push   ax
// 0xe9ae: push   cs
// 0xe9af: lahf   
// 0xe9b0: adc    bh,dl
// 0xe9b2: adc    ax,0008
// 0xe9b5: push   ax
// 0xe9b6: push   cs
// 0xe9b7: db     60
// 0xe9b8: push   ss
// 0xe9b9: add    al,00
// 0xe9bb: db     60
// 0xe9bc: push   cs
// 0xe9bd: lock   
// 0xe9be: push   bp
// 0xe9bf: std    
// 0xe9c0: dec    bx
// 0xe9c1: lock   
// 0xe9c2: or     ax,3B73
// 0xe9c5: jae    EA02
// 0xe9c7: aas    
// 0xe9c8: cbw    
// 0xe9c9: db     F1
// 0xe9ca: call   7DA5
// 0xe9cd: nop    
// 0xe9ce: push   cs
// 0xe9cf: nop    
// 0xe9d0: push   cs
// 0xe9d1: esc    6,[di]
// 0xe9d3: esc    6,[di]
// 0xe9d5: rcl    byte ptr [di],1
// 0xe9d7: pop    sp
// 0xe9d8: call   ax
// 0xe9da: adc    ax,FF52
// 0xe9dd: test   al,58
// 0xe9df: jbe    EA4E
// 0xe9e1: nop    
// 0xe9e2: push   ss
// 0xe9e3: dec    sp
// 0xe9e4: and    bl,[di+17]
// 0xe9e7: db     C1
// 0xe9e8: db     6A
// 0xe9e9: adc    [bp-3C],cx
// 0xe9ec: call   014C
// 0xe9ef: push   ss
// 0xe9f0: add    [bp+si+0F],dh
// 0xe9f3: repnz  
// 0xe9f4: push   cs
// 0xe9f5: pop    bp
// 0xe9f6: pop    ss
// 0xe9f7: or     ax,7200
// 0xe9fa: db     0F
// 0xe9fb: repnz  
// 0xe9fc: push   cs
// 0xe9fd: jg     EA0D
// 0xe9ff: wait   
// 0xea00: cmp    si,[bp+si+0F]
// 0xea03: jg     EA13
// 0xea05: pop    bp
// 0xea06: pop    ss
// 0xea07: push   cs
// 0xea08: add    [bp+si+0F],dh
// 0xea0b: lea    cx,[bp-08]
// 0xea0e: cbw    
// 0xea0f: pop    ds
// 0xea10: jmp    00A3
// 0xea13: jmp    0211:2073
// 0xea18: push   ss
// 0xea19: pop    word ptr [di+4C]
// 0xea1c: and    dh,dl
// 0xea1e: pop    dx
// 0xea1f: scasb
// 0xea20: or     cx,[bp+di+5D3B]
// 0xea24: pop    ss
// 0xea25: or     ax,[bx+si]
// 0xea27: push   di
// 0xea28: inc    ax
// 0xea29: cli    
// 0xea2a: adc    ax,0014
// 0xea2d: and    [bx],cl
// 0xea2f: jae    EA6C
// 0xea31: esc    0,[bp+si-77]
// 0xea34: adc    bh,dl
// 0xea36: adc    ax,0008
// 0xea39: esc    1,[bp+di-52]
// 0xea3c: or     cx,si
// 0xea3e: test   [bx+si+0016],dl

// ================================================
// 0xea41: WORD '%STORM' codep=0x1d29 parp=0xea4c
// ================================================
// 0xea4c: db 0x00 0x00 0x14 0x00 0x28 0x00 0x3c 0x00 0x55 0x00 0x4c 0x22 0xf2 0x5a 0xae 0x0b 0x73 0x3b 0x2d 0x12 0xfa 0x15 0x08 0x00 0x5d 0x17 0xd8 0xcd 0xce 0x84 0x90 0x16 0x4c 0x22 0x2b 0x54 0xae 0x0b 0xfa 0x15 0x7e 0x00 0xb5 0x5a 0xae 0x0b 0xfa 0x15 0x0e 0x00 0xac 0x3b 0xb5 0x5a 0x83 0x6d 0x56 0xea 0x60 0x16 0x64 0x00 0xbd 0x62 0x02 0x7a 0x13 0xea 0xae 0x0b 0x4a 0xea 0x7f 0x0e 0x72 0x0f 0x72 0x0f 0xae 0x0b 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xd8 0x4a 0x2d 0x12 0xfa 0x15 0x0c 0x00 0xcd 0x5a 0xae 0x0b 0xce 0x84 0x60 0x16 0x38 0x00 0x2e 0x0f 0x7b 0x3b 0xd8 0x4a 0xf2 0x5a 0x76 0x6d 0x5d 0x17 0xd8 0xcd 0xce 0x84 0x2e 0x0f 0x13 0xea 0xae 0x0b 0x83 0x3b 0xf2 0x0e 0x92 0x0f 0x75 0x49 0xd8 0x4a 0x5d 0x17 0x0c 0x00 0xad 0x11 0x20 0x0f 0x89 0x11 0xb5 0x5a 0x76 0x6d 0x5d 0x17 0x64 0x00 0xa9 0x5a 0xfd 0x4b 0xc9 0x79 0x1b 0xea 0x60 0x16 0x12 0x00 0xf2 0x5a 0xc5 0x6d 0xb5 0x5a 0xc5 0x6d 0x5d 0x17 0x64 0x00 0xa9 0x5a 0xfd 0x4b 0x90 0x16 0x4c 0x22 0x7a 0x58 0xae 0x0b 0x7a 0x58 0xc5 0x6d 0x5d 0x17 0x74 0x00 0x5d 0x17 0xb2 0x00 0x2b 0xa0 0x5d 0x17 0x0a 0x00 0x0a 0x4f 0x43 0xa3 0xb6 0x4f 0x17 0x85 0x72 0x5e 0xae 0x0b 0x5d 0x17 0x2c 0x01 0x60 0x0f 0x5d 0x17 0x0c 0x12 0x72 0x0f 0xf2 0x0e 0x5d 0x17 0x1e 0x00 0x60 0x0f 0xe7 0x0f 0xf2 0x0e 0xe7 0x0f 0x41 0x0e 0x5d 0x17 0x0a 0x00 0x46 0x12 0xfa 0x15 0x06 0x00 0xdc 0x1b 0x01 0x30 0x20 0x0f 0xe1 0x27 0xdc 0x1b 0x01 0x2d 0x41 0x0e 0x5d 0x17 0x0a 0x00 0x46 0x12 0xfa 0x15 0x06 0x00 0xdc 0x1b 0x01 0x30 0x20 0x0f 0xe1 0x27 0xdc 0x1b 0x01 0x2d 0x20 0x0f 0xe1 0x27 0x7a 0x58 0x76 0x6d 0x90 0x16 0x4c 0x22 0x72 0x5e 0xae 0x0b 0x53 0x54 0xae 0x0b 0x5f 0x12 0x7a 0x56 0xae 0x0b 0x89 0x12 0xf5 0x12 0xfa 0x15 0x06 0x00 0x45 0x54 0x37 0x3a 0x90 0x16 0x29 0x1d 0x01 0x00 0x29 0x1d 0x00 0x00 0x14 0x22 0xd0 0x07 0xea 0x73 0x44 0x90 0x02 0x9c 0xd8 0x69 0x4c 0x22 0x6d 0x62 0x02 0x7a 0xac 0x5d 0xae 0x0b 0xb7 0x5d 0xae 0x0b 0xaa 0xe7 0xc9 0x79 0x90 0x16 0x4c 0x22 0x9a 0xeb 0xae 0x0b 0x41 0x0e 0xfd 0x58 0xfd 0x4b 0x42 0x59 0x11 0x4c 0x9e 0xeb 0xae 0x0b 0x41 0x0e 0x09 0x59 0xfd 0x4b 0x4d 0x59 0x11 0x4c 0x90 0x16 0x4c 0x22 0x41 0x0e 0x2b 0x59 0xfd 0x4b 0x14 0x59 0x11 0x4c 0x90 0x16 0x4c 0x22 0x41 0x0e 0x37 0x59 0xfd 0x4b 0x1f 0x59 0x11 0x4c 0x90 0x16 0x4c 0x22 0x42 0x59 0xae 0x0b 0x14 0x59 0xae 0x0b 0xf0 0x0d 0xf6 0x0f 0x5f 0x12 0xfa 0x15 0x0c 0x00 0xde 0x0d 0x5d 0x17 0xf4 0xff 0x60 0x16 0x18 0x00 0x5d 0x17 0x1a 0x00 0x72 0x0f 0x5f 0x12 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x0c 0x00 0x60 0x16 0x04 0x00 0x20 0x0f 0xe2 0xeb 0x4d 0x59 0xae 0x0b 0x1f 0x59 0xae 0x0b 0xf0 0x0d 0xf6 0x0f 0x5f 0x12 0xfa 0x15 0x0c 0x00 0xde 0x0d 0x5d 0x17 0xec 0xff 0x60 0x16 0x18 0x00 0x5d 0x17 0x2a 0x00 0x72 0x0f 0x5f 0x12 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x14 0x00 0x60 0x16 0x04 0x00 0x20 0x0f 0xf0 0xeb 0x2b 0x59 0xae 0x0b 0x37 0x59 0xae 0x0b 0x3e 0x13 0xfa 0x15 0x08 0x00 0x5d 0x17 0x3e 0xc3 0xce 0x84 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x12 0x7e 0x90 0x16 '    ( < U L" Z  s;-     ]       L"+T    ~  Z       ; Z mV ` d  b z    J  r r   . ] d  J-      Z    ` 8 . {; J Zvm]     .      ;    uI J]          Zvm] d  Z K y  `    Z m Z m] d  Z K  L"zX  zX m] t ]   + ]    OC  O  r^  ] , ` ]   r   ]   `       A ]   F        0   '   -A ]   F        0   '   -   'zXvm  L"r^  ST  _ zV          ET7:  )   )    "   sD    iL"mb z ]   ]     y  L"    A  X KBY L    A  Y KMY L  L"A +Y K Y L  L"A 7Y K Y L  L"BY   Y      _       ]   `   ]   r _     ]   `       MY   Y      _       ]   `   ] * r _     ]   `       +Y  7Y  >     ] >     L"   ~  '

// ================================================
// 0xec86: WORD 'UNK_0xec88' codep=0x224c parp=0xec88
// ================================================

void UNK_0xec88() // UNK_0xec88
{
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) return;
  _2DUP(); // 2DUP
}

// 0xec94: db 0x4c 0x22 0x5d 0x17 0x78 0xec 0x41 0x0e 0x2e 0x62 0x9f 0x6d 0x54 0x9f 0x90 0x16 0x4c 0x22 0x3d 0x75 0x8a 0x79 0x75 0x75 0xa8 0x9d 0xfa 0x15 0x0a 0x00 0xe8 0x9c 0x92 0xe7 0x42 0x9b 0x32 0x9b 0xc9 0x79 0x90 0x16 0x4c 0x22 0xb7 0x74 0xae 0x0b 0xc5 0x74 0xae 0x0b 0x5d 0x17 0xfe 0x00 0x14 0x51 0x75 0x75 0x90 0x16 0x4c 0x22 0x1e 0x75 0x5d 0x17 0x1b 0x00 0x5f 0x12 0xfa 0x15 0x08 0x00 0xbe 0xec 0x60 0x16 0x08 0x00 0x5d 0x17 0x37 0xc4 0xce 0x84 0x0e 0x9f 0x90 0x16 'L"] x A .b mT   L"=u yuu          B 2  y  L" t   t  ]    Quu  L" u]   _       `   ] 7       '

// ================================================
// 0xecf0: WORD 'UNK_0xecf2' codep=0x224c parp=0xecf2
// ================================================

void UNK_0xecf2() // UNK_0xecf2
{
  IOPEN(); // IOPEN
  _ask_NULL(); // ?NULL
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  Push(0xecd4);
  ALL(); // ALL
  Push(0xec78);
  DUP(); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex_(); // 2!
  ORGLIST(); // ORGLIST

  label1:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed12: WORD 'UNK_0xed14' codep=0x224c parp=0xed14
// ================================================

void UNK_0xed14() // UNK_0xed14
{
  Push(0x001e);
  _slash_(); // /
  Push(0x001e);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  Push(0x0012);
  _slash_(); // /
  Push(0x0012);
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
}


// ================================================
// 0xed32: WORD 'UNK_0xed34' codep=0x224c parp=0xed34
// ================================================

void UNK_0xed34() // UNK_0xed34
{
  INST_dash_X(); // INST-X
  Push(Read16(Pop())); // @
  INST_dash_Y(); // INST-Y
  Push(Read16(Pop())); // @
  _ex_XYSEED(); // !XYSEED
}


// ================================================
// 0xed40: WORD 'UNK_0xed42' codep=0x224c parp=0xed42
// ================================================

void UNK_0xed42() // UNK_0xed42
{
  UNK_0xe7b8(); // UNK_0xe7b8
  UNK_0xed14(); // UNK_0xed14
  UNK_0xe7ac(); // UNK_0xe7ac
}


// ================================================
// 0xed4a: WORD 'UNK_0xed4c' codep=0x224c parp=0xed4c
// ================================================

void UNK_0xed4c() // UNK_0xed4c
{
  Push(0x000b);
  Push(0x000b);
  ICREATE(); // ICREATE
  _2DUP(); // 2DUP
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  IINSERT(); // IINSERT
  _2DUP(); // 2DUP
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex_(); // 1.5!
  _2DUP(); // 2DUP
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
  UNK_0xed42(); // UNK_0xed42
  UNK_0xed34(); // UNK_0xed34
  Push(0); // 0
  INST_dash_QT(); // INST-QT
  _ex_(); // !
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xed78: WORD 'UNK_0xed7a' codep=0x224c parp=0xed7a
// ================================================

void UNK_0xed7a() // UNK_0xed7a
{
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_at_(); // 1.5@
  UNK_0xec88(); // UNK_0xec88
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  _gt_C_plus_S(); // >C+S
  UNK_0xe7b8(); // UNK_0xe7b8
  UNK_0xed14(); // UNK_0xed14
  UNK_0xe794(); // UNK_0xe794
  D_eq_(); // D=
  if (Pop() == 0) goto label2;
  Push(0); // 0
  goto label3;

  label2:
  Push(1); // 1

  label3:
  ICLOSE(); // ICLOSE
  return;

  label1:
  Push(1); // 1
}


// ================================================
// 0xeda6: WORD 'UNK_0xeda8' codep=0x224c parp=0xeda8
// ================================================

void UNK_0xeda8() // UNK_0xeda8
{
  UNK_0xe7b8(); // UNK_0xe7b8
  UNK_0xed14(); // UNK_0xed14
  NULL(); // NULL
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN

  label4:
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  _ask_LAST(); // ?LAST
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  _at_INST_dash_C(); // @INST-C
  Push(0x000b);
  _eq_(); // =
  _at_INST_dash_S(); // @INST-S
  Push(0x000b);
  _eq_(); // =
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  Pop(); Pop();// 2DROP
  _2DUP(); // 2DUP
  UNK_0xe794(); // UNK_0xe794
  D_eq_(); // D=
  if (Pop() == 0) goto label3;
  CI(); // CI
  goto label2;

  label3:
  _0_dot_(); // 0.

  label2:
  INEXT(); // INEXT
  goto label4;

  label1:
  _gt_R(); // >R
  _gt_R(); // >R
  Pop(); Pop();// 2DROP
  R_gt_(); // R>
  R_gt_(); // R>
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}

// 0xee04: db 0x4c 0x22 0x42 0x59 0xae 0x0b 0x5d 0x17 0x0e 0x00 0x72 0x0f 0x4d 0x59 0xae 0x0b 0x5d 0x17 0x16 0x00 0x72 0x0f 0x42 0x59 0xae 0x0b 0x5d 0x17 0x16 0x00 0x72 0x0f 0x4d 0x59 0xae 0x0b 0x5d 0x17 0x29 0x00 0x72 0x0f 0xd2 0x99 0x90 0x16 'L"BY  ]   r MY  ]   r BY  ]   r MY  ] ) r     '

// ================================================
// 0xee32: WORD 'UNK_0xee34' codep=0x224c parp=0xee34
// ================================================

void UNK_0xee34() // UNK_0xee34
{
  _2DUP(); // 2DUP
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
  IOPEN(); // IOPEN
  CI(); // CI
  _ask_ICON_eq_I(); // ?ICON=I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  ICLOSE(); // ICLOSE
  UNK_0xecf2(); // UNK_0xecf2
  IOPEN(); // IOPEN
  goto label2;

  label1:
  Pop(); // DROP

  label2:
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xee58: WORD '?POPULA' codep=0x224c parp=0xee64
// ================================================
// entry

void _ask_POPULA() // ?POPULA
{
  UNK_0xed7a(); // UNK_0xed7a
  if (Pop() == 0) return;
  Push(pp__ask_NEW); // ?NEW
  ON(); // ON
  UNK_0xeda8(); // UNK_0xeda8
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
  UNK_0xed4c(); // UNK_0xed4c
  Push(pp__ro_PLANET); // (PLANET
  _at__gt_C_plus_S(); // @>C+S
  IOPEN(); // IOPEN
  CDROP(); // CDROP
  _gt_C_plus_S(); // >C+S
  Push(pp_MOVED); // MOVED
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label2;
  UNK_0xe702(); // UNK_0xe702
  PRINT("SCANNING NEW TERRAIN ", 21); // (.")

  label2:
  Push(0xce7c);
  MODULE(); // MODULE
  UNK_0xecf2(); // UNK_0xecf2
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
  Push(pp_MOVED); // MOVED
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  UNK_0xe6e0(); // UNK_0xe6e0

  label3:
  return;

  label1:
  UNK_0xee34(); // UNK_0xee34
  Push(pp_THIS_dash_RE); // THIS-RE
  _1_dot_5_ex_(); // 1.5!
}

// 0xeecc: db 0x4c 0x22 0x93 0x4f 0xe6 0xe7 0x00 0xe8 0x81 0x57 0xb7 0x6d 0x05 0x58 0xb7 0x6d 0x41 0x0e 0x9a 0xeb 0xfd 0x4b 0xac 0x5d 0x11 0x4c 0x41 0x0e 0x9e 0xeb 0xfd 0x4b 0xb7 0x5d 0x11 0x4c 0xc2 0xeb 0xfe 0xeb 0x62 0xee 0xa1 0x8b 0xe9 0x89 0x04 0xee 0xae 0xeb 0x6d 0x62 0x95 0x49 0xa4 0xec 0x94 0xec 0xe3 0xe9 0xfa 0x9c 0xab 0x90 0xcf 0x8b 0x05 0x8a 0x2f 0x4f 0xe6 0xe7 0x00 0xe8 0x94 0xe6 0x7c 0xeb 0x90 0x16 0x4c 0x22 0x0d 0x40 0xb3 0x0e 0xf2 0x0e 0x92 0x0f 0x41 0x0e 0xfa 0x15 0x08 0x00 0x41 0x0e 0x58 0x10 0x4c 0x0f 0xb4 0x0d 0x92 0x0f 0x41 0x0e 0xfa 0x15 0x08 0x00 0x41 0x0e 0x58 0x10 0x4c 0x0f 0x90 0x0e 0x90 0x16 0x4c 0x22 0x5d 0x17 0x1c 0x00 0x5d 0x17 0x33 0x00 0x59 0x81 0xf0 0x0d 0x0d 0x63 0x95 0x49 0x6f 0x7b 0xf2 0x79 0xb6 0xe7 0xaa 0xe7 0x5d 0x17 0xb8 0x0b 0x41 0x0e 0xf6 0xad 0x76 0x6d 0xa9 0x74 0x76 0x6d 0xc9 0x79 0x90 0x16 0x4c 0x22 0x20 0x0f 0x2e 0x0f 0x0d 0x40 0x39 0x40 0xfa 0x15 0x10 0x00 0xde 0x0d 0xdc 0x1b 0x05 0x4e 0x4f 0x52 0x54 0x48 0x60 0x16 0xca 0x00 0x2e 0x0f 0x2e 0x0f 0x0d 0x40 0x39 0x40 0xfa 0x15 0x14 0x00 0xde 0x0d 0xdc 0x1b 0x09 0x4e 0x4f 0x52 0x54 0x48 0x45 0x41 0x53 0x54 0x60 0x16 0xac 0x00 0x2e 0x0f 0x20 0x0f 0x0d 0x40 0x39 0x40 0xfa 0x15 0x0f 0x00 0xde 0x0d 0xdc 0x1b 0x04 0x45 0x41 0x53 0x54 0x60 0x16 0x93 0x00 0x2e 0x0f 0xac 0x3b 0x0d 0x40 0x39 0x40 0xfa 0x15 0x14 0x00 0xde 0x0d 0xdc 0x1b 0x09 0x53 0x4f 0x55 0x54 0x48 0x45 0x41 0x53 0x54 0x60 0x16 0x75 0x00 0x20 0x0f 0xac 0x3b 0x0d 0x40 0x39 0x40 0xfa 0x15 0x10 0x00 0xde 0x0d 0xdc 0x1b 0x05 0x53 0x4f 0x55 0x54 0x48 0x60 0x16 0x5b 0x00 0xac 0x3b 0xac 0x3b 0x0d 0x40 0x39 0x40 0xfa 0x15 0x14 0x00 0xde 0x0d 0xdc 0x1b 0x09 0x53 0x4f 0x55 0x54 0x48 0x57 0x45 0x53 0x54 0x60 0x16 0x3d 0x00 0xac 0x3b 0x20 0x0f 0x0d 0x40 0x39 0x40 0xfa 0x15 0x0f 0x00 0xde 0x0d 0xdc 0x1b 0x04 0x57 0x45 0x53 0x54 0x60 0x16 0x24 0x00 0xac 0x3b 0x2e 0x0f 0x0d 0x40 0x39 0x40 0xfa 0x15 0x14 0x00 0xde 0x0d 0xdc 0x1b 0x09 0x4e 0x4f 0x52 0x54 0x48 0x57 0x45 0x53 0x54 0x60 0x16 0x06 0x00 0x32 0x0e 0x32 0x0e 0x90 0x16 0x4c 0x22 0xc2 0x51 0xf2 0x79 0xb6 0xe7 0xc5 0x74 0xae 0x0b 0x92 0x0f 0x58 0x10 0x41 0x0e 0xd6 0x11 0xb3 0x0e 0xb7 0x74 0xae 0x0b 0x92 0x0f 0x58 0x10 0x41 0x0e 0xd6 0x11 0x65 0x10 0xa5 0x4b 0x90 0x16 0x4c 0x22 0x69 0x54 0xae 0x0b 0x64 0x5e 0xae 0x0b 0x92 0x0f 0x41 0x0e 0xfa 0x15 0x0a 0x00 0x64 0x5e 0xae 0x0b 0x69 0x54 0x76 0x6d 0x90 0x16 0x4c 0x22 0xf2 0x5a 0xae 0x0b 0x41 0x0e 0x7b 0x3b 0x46 0x12 0xf2 0x0e 0x5d 0x17 0x0b 0x00 0x2d 0x12 0x3e 0x13 0x90 0x16 0x4c 0x22 0x9c 0xf0 0xcc 0xe7 0x3e 0x13 0x90 0x16 0x4c 0x22 0xcf 0x8b 0x5d 0x17 0x74 0x00 0x5d 0x17 0x96 0x00 0x2b 0xa0 0x9b 0x3b 0x0a 0x4f 0x43 0xa3 0xb6 0x4f 0x17 0x85 0xb4 0xf0 0xfa 0x15 0x12 0x00 0x58 0xf0 0x83 0x3b 0xe1 0x27 0xdc 0x1b 0x03 0x4b 0x4d 0x2e 0x60 0x16 0x0a 0x00 0xdc 0x1b 0x05 0x4c 0x4f 0x53 0x54 0x21 0x5d 0x17 0x74 0x00 0x5d 0x17 0x8f 0x00 0x2b 0xa0 0x5d 0x17 0x09 0x00 0x0a 0x4f 0x43 0xa3 0xb6 0x4f 0x17 0x85 0xb4 0xf0 0xfa 0x15 0x10 0x00 0xb6 0xe7 0x92 0xe7 0xc9 0x79 0x1c 0xef 0x06 0x0e 0xde 0x0d 0x72 0xef 0x90 0x16 0x4c 0x22 0x41 0x0e 0x9e 0xeb 0xfd 0x4b 0xb7 0x5d 0x11 0x4c 0x41 0x0e 0x9a 0xeb 0xfd 0x4b 0xac 0x5d 0x11 0x4c 0xc2 0xeb 0xfe 0xeb 0x98 0xe8 0xbe 0xf0 0x20 0x0f 0x83 0x3b 0xd8 0x4a 0x89 0x12 0xfa 0x15 0x10 0x00 0x5d 0x17 0x3f 0xc0 0xce 0x84 0xcf 0x8b 0xd9 0x53 0xae 0x0b 0xce 0x84 0xa1 0x8b 0xe9 0x89 0x04 0xee 0x46 0x3a 0x94 0xec 0xe3 0xe9 0xfa 0x9c 0xab 0x90 0x05 0x8a 0x90 0x16 0x4c 0x22 0x00 0xe7 0xdc 0x1b 0x0c 0x4f 0x55 0x54 0x20 0x4f 0x46 0x20 0x46 0x55 0x45 0x4c 0x20 0x8c 0xa4 0x2e 0x0f 0x6c 0x58 0x83 0x6d 0xdc 0x1b 0x1a 0x52 0x45 0x54 0x55 0x52 0x4e 0x49 0x4e 0x47 0x20 0x54 0x4f 0x20 0x53 0x48 0x49 0x50 0x20 0x4f 0x4e 0x20 0x46 0x4f 0x4f 0x54 0x20 0x5d 0x17 0xe8 0x03 0xef 0x2a 0x51 0x26 0x5d 0x17 0x10 0xcf 0xce 0x84 0x5d 0x54 0x84 0x48 0x46 0xef 0x38 0x54 0xc5 0x6d 0x0a 0x4f 0xe6 0xe7 0x00 0xe8 0xc2 0x51 0xf2 0x79 0x92 0xe7 0xc9 0x79 0xb6 0xe7 0x0d 0x40 0x1c 0xef 0xf0 0x0d 0xb8 0x48 0x39 0x40 0x07 0x13 0xfa 0x15 0x0a 0x00 0x20 0xf1 0xde 0x0d 0x60 0x16 0xe8 0xff 0xde 0x0d 0xde 0x0d 0xde 0x0d 0x6d 0x62 0x02 0x7a 0x79 0x9e 0xc9 0x79 0x7c 0x5c 0x71 0x48 0xae 0xeb 0x51 0x26 0x90 0x16 0x4c 0x22 0x5d 0x17 0x74 0x00 0x5d 0x17 0xab 0x00 0x2b 0xa0 0x93 0x3b 0x0a 0x4f 0x43 0xa3 0x90 0x16 0x4c 0x22 0xfc 0xf1 0x6d 0x62 0x02 0x7a 0xa9 0x74 0xae 0x0b 0xc9 0x79 0xb6 0x4f 0x17 0x85 0xa2 0xeb 0x92 0x0f 0x5d 0x17 0x64 0x00 0x5d 0x17 0x2f 0x78 0xc4 0x0f 0x41 0x0e 0x9f 0x12 0x07 0x13 0xfa 0x15 0x1c 0x00 0x32 0x0e 0xf0 0x55 0xae 0x0b 0x93 0x4f 0x17 0x85 0xdc 0x1b 0x07 0x52 0x45 0x53 0x45 0x52 0x56 0x45 0x17 0x85 0x60 0x16 0x0a 0x00 0x73 0x3b 0xe1 0x27 0xdc 0x1b 0x01 0x25 0x5d 0x17 0x74 0x00 0x5d 0x17 0xa4 0x00 0x2b 0xa0 0x73 0x3b 0x0a 0x4f 0x43 0xa3 0xa9 0x5a 0xae 0x0b 0x5d 0x17 0x64 0x00 0xd7 0x5a 0xae 0x0b 0x7b 0x3b 0xb3 0x0f 0xc6 0x11 0xc4 0x0f 0x5d 0x17 0x63 0x00 0xad 0x11 0x73 0x3b 0xe1 0x27 0xdc 0x1b 0x01 0x25 0x90 0x16 0x4c 0x22 0x10 0xf2 0xbe 0xf0 0x00 0xe8 0x90 0x16 0x4c 0x22 0xd7 0x5a 0xae 0x0b 0x5d 0x17 0x64 0x00 0xa9 0x5a 0xae 0x0b 0xc4 0x0f 0x6d 0x62 0x02 0x7a 0xa9 0x74 0x83 0x6d 0xc9 0x79 0x90 0x16 0x4c 0x22 0x6d 0x62 0x02 0x7a 0xa9 0x74 0xae 0x0b 0xc9 0x79 0x9f 0x12 0x07 0x13 0x90 0x16 0x4c 0x22 0x7a 0x58 0xc5 0x6d 0x2f 0x4f 0xe6 0xe7 0x00 0xe8 0x90 0x16 0x4c 0x22 0x0a 0x4f 0xe6 0xe7 0x00 0xe8 0x90 0x16 0x4c 0x22 0x93 0x5c 0xae 0x0b 0x41 0x0e 0x5d 0x17 0x52 0x01 0x5f 0x12 0xf2 0x0e 0x89 0x12 0x3e 0x13 0xfa 0x15 0x0e 0x00 0x7c 0x5c 0xc5 0x6d 0xde 0x0d 0x74 0x5d 0xae 0x0b 0xed 0xa9 0x90 0x16 0x4c 0x22 0xfc 0xf1 0xab 0x4f 0x17 0x85 0xdc 0x1b 0x04 0x4e 0x4f 0x4e 0x45 0xde 0x0d 0x6c 0xf1 0x90 0x16 0x4c 0x22 0x5d 0x17 0x82 0xf0 0x3e 0x5f 0xfd 0x4b 0x5d 0x17 0x6e 0xea 0x68 0x5f 0xfd 0x4b 0x5d 0x17 0x92 0xf2 0x30 0x5f 0xfd 0x4b 0xc2 0x5e 0xae 0x0b 0x5a 0x5f 0xfd 0x4b 0x5d 0x17 0x6b 0x26 0xdd 0x5e 0xfd 0x4b 0x5d 0x17 0x06 0xeb 0x22 0x5f 0xfd 0x4b 0x80 0x5e 0xb7 0x6d 0x90 0x16 0x4c 0x22 0x50 0xaa 0x32 0x0e 0xc8 0xf2 0x1b 0xf3 0x2f 0x4f 0x38 0x54 0x76 0x6d 0xac 0x3b 0x16 0x26 0x25 0xa2 0x90 0x16 0x4c 0x22 0xc0 0x5a 0xae 0x0b 0xce 0x84 0x80 0x5e 0xc5 0x6d 0x90 0x16 0x4c 0x22 0x6b 0xf3 0xd6 0xf2 0x0a 0x4f 0x38 0x54 0x76 0x6d 0x51 0x26 0x90 0x16 0x4c 0x22 0xcc 0xee 0x98 0xe8 0x9a 0xf2 0x90 0xf2 0x90 0x16 0x4c 0x22 0xf0 0x0d 0x3e 0x13 0x7c 0x5c 0xae 0x0b 0x89 0x12 0xf5 0x12 0x90 0x16 0x4c 0x22 0xed 0xa9 0x95 0xf3 0xfa 0x15 0x36 0x00 0xb6 0xf2 0xfa 0x15 0x08 0x00 0x06 0xf3 0x60 0x16 0x26 0x00 0x89 0xf3 0x38 0xaa 0xe0 0xf2 0x95 0xf3 0xb6 0xf2 0x07 0x13 0xf5 0x12 0xfa 0x15 0x08 0x00 0x89 0xf3 0x60 0x16 0xec 0xff 0xde 0x0d 0xb6 0xf2 0xfa 0x15 0x06 0x00 0x58 0x51 0x06 0xf3 0x60 0x16 0x04 0x00 0xde 0x0d 0x50 0xaa 0xfa 0x15 0x0a 0x00 0x32 0x0e 0x20 0x0f 0x80 0x5e 0xc5 0x6d 0x90 0x16 'L" O     W m X mA    K ] LA    K ] L    b         mb I              /O      |   L" @      A     A X L     A     A X L     L"]   ] 3 Y    c Io{ y    ]   A   vm tvm y  L"  .  @9@         NORTH`   . .  @9@         NORTHEAST`   .    @9@         EAST`   .  ; @9@         SOUTHEAST` u    ; @9@         SOUTH` [  ; ; @9@         SOUTHWEST` =  ;   @9@         WEST` $  ;.  @9@         NORTHWEST`   2 2   L" Q y   t    X A      t    X A   e  K  L"iT  d^    A     d^  iTvm  L" Z  A {;F   ]   - >   L"    >   L"  ] t ]   +  ; OC  O        X  ; '   KM.`      LOST!] t ]   + ]    OC  O             y      r   L"A    K ] LA    K ] L           ; J      ] ?      S          F:            L"     OUT OF FUEL   . lX m   RETURNING TO SHIP ON FOOT ]    *Q&]     ]T HF 8T m O     Q y   y   @     H9@          `         mb zy  y|\qH  Q&  L"] t ]   +  ; OC   L"  mb z t   y O      ] d ] /x  A         2  U   O     RESERVE  `   s; '   %] t ]   + s; OC  Z  ] d  Z  {;      ] c   s; '   %  L"        L" Z  ] d  Z    mb z t m y  L"mb z t   y      L"zX m/O      L" O      L" \  A ] R _     >     |\ m  t]      L"   O     NONE  l   L"]   >_ K] n h_ K]   0_ K ^  Z_ K] k& ^ K]   "_ K ^ m  L"P 2     /O8Tvm ; &%   L" Z     ^ m  L"k    O8TvmQ&  L"          L"  > |\        L"      6         ` &   8                 `           XQ  `     P     2    ^ m  '

// ================================================
// 0xf3f5: WORD 'TV-MOVE' codep=0x224c parp=0xf401
// ================================================
// entry

void TV_dash_MOVE() // TV-MOVE
{
  Push(0xf37b);
  Push(0xf3a7);
  Push(0xf355);
  DOTASKS(); // DOTASKS
  Push(pp_TIME_dash_PA); // TIME-PA
  ON(); // ON
}


// ================================================
// 0xf415: WORD 'UNK_0xf417' codep=0x73ea parp=0xf417
// ================================================
// 0xf417: db 0x20 0x07 0x02 0x16 0x8f 0x65 '     e'

// ================================================
// 0xf41d: WORD 'APPROACH' codep=0x224c parp=0xf42a
// ================================================

void APPROACH() // APPROACH
{
  _gt_LORES(); // >LORES
  DARK(); // DARK
  Push(pp__ro_PLANET); // (PLANET
  _1_dot_5_at_(); // 1.5@
  _gt_C(); // >C
  SET_dash_CUR(); // SET-CUR
  _at_INST_dash_S(); // @INST-S
  Push(0x0012);
  _st_(); // <
  if (Pop() == 0) goto label1;
  CI(); // CI
  Pop(); // DROP
  goto label2;

  label1:
  UNK_0xf417(); // UNK_0xf417
  Push(Read16(Pop())); // @

  label2:
  DUP(); // DUP
  Push(0xc302);
  MODULE(); // MODULE
  SHIP_dash_CO(); // SHIP-CO
  Push(0xc48c);
  MODULE(); // MODULE
  _dot_REGION(); // .REGION
  Push(0xc4a2);
  MODULE(); // MODULE
  Push(pp__n_CLRMAP); // #CLRMAP
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  Push(0xc380);
  MODULE(); // MODULE
  Push(0xc395);
  MODULE(); // MODULE
  Push(0xc3a7);
  MODULE(); // MODULE
  _gt_DISPLA(); // >DISPLA
  WHITE(); // WHITE
  _ex_COLOR(); // !COLOR
  DCLIPSE(); // DCLIPSE
  Push(pp_CONTEXT); // CONTEXT
  OFF(); // OFF
  ICLOSE(); // ICLOSE
}

// 0xf48e: db 0x4d 0x4f 0x56 0x45 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x4e 0x54 0x20 0x4f 0x56 0x45 0x52 0x4c 0x41 0x59 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x28 0x20 0x72 0x66 0x67 0x32 0x38 0x61 0x70 0x72 0x38 0x36 0x29 0xb6 0x31 0x32 0x32 0x35 0xee 0xb6 0x4f 0x17 0x85 0x00 0xf0 0x60 0xef 0x20 0xf2 0x6a 0xaa 0xfa 0x15 0xce 0xff 0x2f 0x4f 0x06 0xf1 0x12 0xbb 0x58 0x51 0x90 0x61 0x92 0x6d 0x38 0xf4 0x91 0x75 0xc9 0x79 0x0a 0xef 0x93 0x3b 0xf8 0xdd 0xfd 0x4b 0x89 0x4f 0x06 0xf1 0xff 0xde 0xb3 0xe0 0x7e 0xf4 0x60 0x16 0x36 0x00 0x42 0xe0 0xb3 0xe0 0x8b 0x3b 0x20 0x0f 0x53 0xdf 0xdc 0x1b 0x1f 0x4e 0x4f 0x54 0x20 0x45 0x4e 0x4f 0x55 0x47 0x48 0x20 0x53 0x54 0x4f 0x52 0x41 0x47 0x45 0x20 0x46 0x4f 0x52 0x20 0x46 0x55 0x4e 0x43 0x54 0x49 0x4f 0x4e 0x5d 0x17 0xa0 0x0f 0xef 0x2a 0xb3 0xe0 0x90 0x16 0x49 0x54 0x45 0x4d 0x53 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'MOVE-VOC________________________NT OVERLAY -------( rfg28apr86) 1225  O    `   j     /O    XQ a m8  u y   ;   K O      ~ ` 6 B    ;  S    NOT ENOUGH STORAGE FOR FUNCTION]    *    ITEMS__________________________ '
  