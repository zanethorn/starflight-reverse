// ====== OVERLAY 'COMMSPEC-OV' ======
// store offset = 0xea30
// overlay size   = 0x0b30

#include"cpu.h"
#include"starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1703:      UNK_0x3f3b  codep:0x224c parp:0x3f3b size:0xab47 C-string:'UNK_0x3f3b'
// 1704:      UNK_0xea84  codep:0x224c parp:0xea84 size:0x0008 C-string:'UNK_0xea84'
// 1705:      UNK_0xea8e  codep:0x224c parp:0xea8e size:0x005e C-string:'UNK_0xea8e'
// 1706:      UNK_0xeaee  codep:0x224c parp:0xeaee size:0x008b C-string:'UNK_0xeaee'
// 1707:      UNK_0xeb7b  codep:0x224c parp:0xeb7b size:0x000e C-string:'UNK_0xeb7b'
// 1708:          ?VOWEL  codep:0x4a4f parp:0xeb94 size:0x0134 C-string:'_ask_VOWEL'
// 1709:      UNK_0xecca  codep:0x1d29 parp:0xecca size:0x01e3 C-string:'UNK_0xecca'
// 1710:            XY/N  codep:0x224c parp:0xeeb6 size:0x059c C-string:'XY_slash_N'
// 1711:      UNK_0xf454  codep:0x1d29 parp:0xf454 size:0x0009 C-string:'UNK_0xf454'
// 1712:      UNK_0xf45f  codep:0x1d29 parp:0xf45f size:0x000b C-string:'UNK_0xf45f'
// 1713:      UNK_0xf46c  codep:0x1d29 parp:0xf46c size:0x0007 C-string:'UNK_0xf46c'
// 1714:      UNK_0xf475  codep:0x1d29 parp:0xf475 size:0x0003 C-string:'UNK_0xf475'
// 1715:      UNK_0xf47a  codep:0x1d29 parp:0xf47a size:0x0003 C-string:'UNK_0xf47a'
// 1716:      UNK_0xf47f  codep:0x1d29 parp:0xf47f size:0x0005 C-string:'UNK_0xf47f'
// 1717:      UNK_0xf486  codep:0x224c parp:0xf486 size:0x002e C-string:'UNK_0xf486'
// 1718:         SA-CASE  codep:0x4a4f parp:0xf4c0 size:0x001c C-string:'SA_dash_CASE'
// 1719:      UNK_0xf4de  codep:0x224c parp:0xf4de size:0x0014 C-string:'UNK_0xf4de'
// 1720:         (XCOMM)  codep:0x224c parp:0xf4fe size:0x0000 C-string:'_ro_XCOMM_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xecca[483] = {0x3a, 0x20, 0x4c, 0x22, 0x1f, 0xa9, 0x32, 0x0e, 0x2e, 0x0f, 0x8b, 0x3b, 0x20, 0x0f, 0xb8, 0x15, 0xbf, 0xea, 0xef, 0xa4, 0x20, 0x0f, 0x8b, 0x3b, 0x51, 0xa1, 0x2e, 0x0f, 0x5d, 0x17, 0x64, 0x00, 0xd8, 0x4a, 0x41, 0x0e, 0x20, 0x0f, 0x5d, 0x14, 0xb4, 0x13, 0x9f, 0x13, 0xf0, 0x0d, 0x72, 0x0f, 0x5d, 0x17, 0x3f, 0x00, 0xf2, 0x0e, 0x6a, 0x6d, 0xe7, 0x0f, 0x6f, 0x4f, 0x17, 0x85, 0xe6, 0x06, 0x5d, 0x17, 0x0a, 0x00, 0x1a, 0xab, 0xbe, 0xa8, 0x98, 0x2a, 0x38, 0x0c, 0x16, 0x16, 0x98, 0x3a, 0x00, 0x00, 0x65, 0x10, 0x89, 0x60, 0xac, 0x6d, 0x79, 0xeb, 0x7c, 0x5c, 0xae, 0x0b, 0x98, 0x2a, 0x38, 0x0c, 0x89, 0x60, 0x38, 0x0c, 0x46, 0x40, 0x3e, 0x13, 0xfa, 0x15, 0xec, 0xff, 0x50, 0xaa, 0xfa, 0x15, 0x10, 0x00, 0xa1, 0x5b, 0xae, 0x0b, 0x41, 0x0e, 0x89, 0x12, 0xec, 0xea, 0x60, 0x16, 0x04, 0x00, 0x3d, 0x0f, 0xf2, 0x0e, 0x8b, 0x3b, 0x9f, 0x11, 0x9f, 0x12, 0x5f, 0x12, 0xb3, 0x0f, 0x41, 0x0e, 0x89, 0x12, 0xfa, 0x15, 0x04, 0x00, 0x4a, 0x17, 0xd0, 0x15, 0x74, 0xff, 0x6f, 0x4f, 0x17, 0x85, 0x16, 0x16, 0xa4, 0x11, 0x02, 0x00, 0x8c, 0xea, 0x47, 0xa5, 0x89, 0x12, 0xfa, 0x15, 0x12, 0x00, 0xdc, 0x1b, 0x07, 0x44, 0x45, 0x4e, 0x49, 0x45, 0x44, 0x2e, 0xb4, 0xeb, 0x60, 0x16, 0x19, 0x00, 0xdc, 0x1b, 0x08, 0x47, 0x52, 0x41, 0x4e, 0x54, 0x45, 0x44, 0x2e, 0x48, 0x5a, 0xb7, 0x6d, 0x11, 0x5c, 0xb7, 0x6d, 0x36, 0x5e, 0xb7, 0x6d, 0x90, 0x16, 0x4c, 0x22, 0xe4, 0x54, 0xae, 0x0b, 0x7b, 0x3b, 0xf5, 0x12, 0x89, 0x12, 0x07, 0x13, 0xce, 0x54, 0xae, 0x0b, 0x2e, 0x0f, 0x2d, 0x12, 0xf5, 0x12, 0xfa, 0x15, 0x18, 0x00, 0x6e, 0xea, 0x78, 0xea, 0xc8, 0xec, 0xb7, 0x6d, 0xb4, 0xeb, 0x16, 0x16, 0xc5, 0x11, 0x02, 0x00, 0x8c, 0xea, 0xda, 0xea, 0xc9, 0x79, 0x90, 0x16, 0x4c, 0x22, 0xb3, 0xea, 0xf2, 0x79, 0x9e, 0xea, 0x92, 0x0c, 0xa3, 0xea, 0x92, 0x0c, 0x46, 0x12, 0xc9, 0x79, 0x89, 0x12, 0x07, 0x13, 0xce, 0x54, 0xae, 0x0b, 0x2e, 0x0f, 0x2d, 0x12, 0xf5, 0x12, 0xfa, 0x15, 0x18, 0x00, 0x6e, 0xea, 0x78, 0xea, 0xc8, 0xec, 0xb7, 0x6d, 0xb4, 0xeb, 0x16, 0x16, 0x52, 0x12, 0x02, 0x00, 0x8c, 0xea, 0xda, 0xea, 0xc9, 0x79, 0x90, 0x16, 0x4c, 0x22, 0xe4, 0x54, 0xae, 0x0b, 0x2e, 0x0f, 0xf5, 0x12, 0x89, 0x12, 0xfa, 0x15, 0x18, 0x00, 0x6e, 0xea, 0x78, 0xea, 0xc8, 0xec, 0xb7, 0x6d, 0xb4, 0xeb, 0x16, 0x16, 0xcc, 0x12, 0x02, 0x00, 0x8c, 0xea, 0xda, 0xea, 0xc9, 0x79, 0x90, 0x16, 0x4c, 0x22, 0xe4, 0x54, 0xae, 0x0b, 0x9b, 0x3b, 0xf5, 0x12, 0x89, 0x12, 0x07, 0x13, 0xce, 0x54, 0xae, 0x0b, 0x2e, 0x0f, 0x2d, 0x12, 0xf5, 0x12, 0xfa, 0x15, 0x18, 0x00, 0x6e, 0xea, 0x78, 0xea, 0xc8, 0xec, 0xb7, 0x6d, 0xb4, 0xeb, 0x16, 0x16, 0x4e, 0x13, 0x02, 0x00, 0x8c, 0xea, 0xda, 0xea, 0xc9, 0x79, 0x90, 0x16, 0x4c, 0x22, 0xad, 0xea, 0xf2, 0x79, 0x9e, 0xea, 0x92, 0x0c, 0xa3, 0xea, 0x92, 0x0c, 0x46, 0x12, 0xc9, 0x79, 0x89, 0x12, 0x07, 0x13, 0xce, 0x54, 0xae, 0x0b, 0x2e, 0x0f, 0x2d, 0x12, 0xf5, 0x12, 0xfa, 0x15, 0x18, 0x00, 0x6e, 0xea, 0x78, 0xea, 0xc8, 0xec, 0xb7, 0x6d, 0xb4, 0xeb, 0x16, 0x16, 0x00, 0x14, 0x02, 0x00, 0x8c, 0xea, 0xda, 0xea, 0xc9, 0x79, 0x90, 0x16}; // UNK_0xecca
unsigned char UNK_0xf454[9] = {0x04, 0x30, 0xf1, 0xa7, 0xed, 0xdb, 0xed, 0x74, 0xf1}; // UNK_0xf454
unsigned char UNK_0xf45f[11] = {0x05, 0x3f, 0xee, 0x73, 0xee, 0x12, 0xf0, 0x12, 0xf3, 0xa6, 0xf0}; // UNK_0xf45f
unsigned char UNK_0xf46c[7] = {0x03, 0xc0, 0xef, 0x36, 0xef, 0xd2, 0xf1}; // UNK_0xf46c
unsigned char UNK_0xf475[3] = {0x01, 0x17, 0xee}; // UNK_0xf475
unsigned char UNK_0xf47a[3] = {0x01, 0xce, 0xec}; // UNK_0xf47a
unsigned char UNK_0xf47f[5] = {0x02, 0x14, 0xf4, 0xa2, 0xf3}; // UNK_0xf47f



// 0xea42: db 0xaf 0x00 0x4c 0x22 0x5d 0x17 0xd8 0xbd 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x0d 0x00 0x44 0xea 0xe2 0x5c 0x76 0x6d 0xb3 0x5f 0xae 0x0b 0x93 0x3b 0x44 0xea 0xfa 0x15 0x04 0x00 0x35 0x10 0x99 0x55 0x76 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0xd1 0xc1 0xce 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0xe1 0xc1 0xce 0x84 0x90 0x16 '  L"]       L"]   D  \vm _   ;D     5  Uvm  L"]       L"]       '

// ================================================
// 0xea82: WORD 'UNK_0xea84' codep=0x224c parp=0xea84
// ================================================

void UNK_0xea84() // UNK_0xea84
{
  Push(0xc205);
  MODULE(); // MODULE
}


// ================================================
// 0xea8c: WORD 'UNK_0xea8e' codep=0x224c parp=0xea8e
// ================================================

void UNK_0xea8e() // UNK_0xea8e
{
  _gt_C_plus_S(); // >C+S
  Push(0x63fa); // IFIELD(PHRASE$)
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}

// 0xea9e: db 0x4d 0x74 0x34 0x12 0x01 0x4d 0x74 0x34 0x13 0x01 0x4d 0x74 0x14 0x43 0x02 0x68 0x3b 0x01 0x00 0x90 0x60 0x68 0x3b 0x01 0x00 0x72 0x82 0x68 0x3b 0x00 0x00 0xc0 0xda 0x4c 0x22 0x28 0xa5 0x39 0x3f 0x0a 0x52 0x45 0x43 0x45 0x49 0x56 0x49 0x4e 0x47 0x3a 0x47 0xa5 0x5d 0x17 0xf4 0x01 0xef 0x2a 0x90 0x16 0x4c 0x22 0xbf 0xea 0x6e 0xea 0x78 0xea 0x5d 0x17 0x16 0xc2 0xce 0x84 0xc9 0x79 0x90 0x16 'Mt4  Mt4  Mt C h;   `h;  r h;    L"( 9? RECEIVING:G ]    *  L"  n x ]      y  '

// ================================================
// 0xeaec: WORD 'UNK_0xeaee' codep=0x224c parp=0xeaee
// ================================================

void UNK_0xeaee() // UNK_0xeaee
{
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label1;
  SetColor("BLUE");
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
  CTINIT(); // CTINIT
  Push(0x118a); Pust(0x0002);
  UNK_0xea8e(); // UNK_0xea8e
  _dot_TTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
  if (Pop() == 0) goto label2;

  UNK_0x3f3b("YES.");
  goto label3;

  label2:

  UNK_0x3f3b("NO.");

  label3:
  _dot_TTY(); // .TTY
  TTY_dash_SCR(); // TTY-SCR
  goto label4;

  label1:
  Pop(); // DROP

  label4:
  SetColor("BLACK");
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
}

// 0xeb3d: db 0x4c 0x22 0xf2 0x79 0x5d 0x17 0xd5 0x02 0x5d 0x17 0xde 0x04 0xb7 0x74 0xac 0x6d 0x75 0x75 0x30 0x75 0x2e 0x0f 0x5f 0x12 0xc9 0x79 0x6f 0x56 0xae 0x0b 0x9f 0x12 0xf5 0x12 0xfd 0x62 0x95 0x49 0xb9 0xea 0x39 0x40 0xf5 0x12 0xfa 0x15 0x0a 0x00 0x37 0x52 0x6f 0x7b 0x60 0x16 0x04 0x00 0xac 0x7e 0x90 0x16 'L" y]   ]    t muu0u. _  yoV       b I  9@      7Ro{`    ~  '

// ================================================
// 0xeb79: WORD 'UNK_0xeb7b' codep=0x224c parp=0xeb7b
// ================================================

void UNK_0xeb7b() // UNK_0xeb7b
{
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) return;
  NEW_dash_BUT(); // NEW-BUT
}


// ================================================
// 0xeb89: WORD '?VOWEL' codep=0x4a4f parp=0xeb94
// ================================================
// 0xeb94: db 0x05 0x00 0x22 0x0f 0x41 0x00 0x30 0x0f 0x45 0x00 0x30 0x0f 0x49 0x00 0x30 0x0f 0x4f 0x00 0x30 0x0f 0x55 0x00 0x30 0x0f 0x4c 0x22 0x92 0x0c 0x92 0xeb 0x90 0x16 0x4c 0x22 0x48 0x5a 0xb7 0x6d 0x5d 0x17 0x64 0x00 0x82 0xea 0x90 0x16 0x4c 0x22 0x5d 0x17 0x4a 0xbd 0xce 0x84 0x90 0x16 0x29 0x1d 0x3a 0x20 0x4c 0x22 0x50 0x6c 0xf2 0x79 0x12 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0a 0x00 0x12 0x7e 0x90 0x16 0x4c 0x22 0xd0 0xeb 0xfa 0x15 0x2e 0x00 0x12 0x7a 0x20 0x0f 0xf2 0x0e 0x12 0x7e 0xfa 0x15 0x18 0x00 0xa9 0x74 0xae 0x0b 0x41 0x0e 0xcc 0xeb 0x76 0x6d 0xf2 0x0e 0x92 0x0f 0x78 0x12 0x07 0x13 0x60 0x16 0x06 0x00 0x32 0x0e 0x20 0x0f 0xc9 0x79 0x60 0x16 0x06 0x00 0xde 0x0d 0x20 0x0f 0x91 0x75 0xc9 0x79 0x90 0x16 0x4c 0x22 0xd0 0xeb 0x32 0x0e 0x12 0x7a 0x20 0x0f 0xf2 0x0e 0x12 0x7e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x75 0x75 0x50 0x6c 0x39 0x40 0x07 0x13 0xfa 0x15 0x08 0x00 0x91 0x75 0x60 0x16 0xf0 0xff 0xc9 0x79 0x90 0x16 0x4c 0x22 0x22 0xec 0xc6 0x11 0xa9 0x74 0x83 0x6d 0xa9 0x74 0xae 0x0b 0x9f 0x12 0x07 0x13 0xfa 0x15 0x04 0x00 0xda 0x7e 0x34 0xec 0xc2 0xeb 0x66 0xbf 0x90 0x16 0x4c 0x22 0x5d 0x17 0x1a 0x00 0xf2 0x0e 0x59 0x81 0xf2 0x79 0xa9 0x74 0x76 0x6d 0x58 0x75 0x50 0x6c 0xf2 0x79 0x37 0xbb 0xc9 0x79 0xc2 0xeb 0x66 0xbf 0x90 0x16 0x4c 0x22 0x50 0x6c 0xf2 0x79 0x12 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0f 0x00 0x12 0x7e 0x32 0x0e 0x12 0x7a 0x20 0x0f 0xf2 0x0e 0x12 0x7e 0x32 0x0e 0x48 0xbb 0x3d 0xeb 0x32 0x0e 0x34 0xec 0xc2 0xeb 0x4e 0xea 0x90 0x16 0x4c 0x22 0xc2 0x51 0xf2 0x79 0xa8 0xea 0xae 0x0b 0xad 0x11 0xc9 0x79 0x90 0x16 '  " A 0 E 0 I 0 O 0 U 0 L"      L"HZ m] d     L"] J     ) : L"Pl y z]   ]    ~  L"    .  z     ~     t  A   vm    x   `   2    y`        u y  L"  2  z     ~2   L"uuPl9@       u`    y  L""    t m t           ~4   f   L"]     Y  y tvmXuPl y7  y  f   L"Pl y z]   ]    ~2  z     ~2 H = 2 4   N   L" Q y       y  '

// ================================================
// 0xecc8: WORD 'UNK_0xecca' codep=0x1d29 parp=0xecca
// ================================================
// 0xecca: db 0x3a 0x20 0x4c 0x22 0x1f 0xa9 0x32 0x0e 0x2e 0x0f 0x8b 0x3b 0x20 0x0f 0xb8 0x15 0xbf 0xea 0xef 0xa4 0x20 0x0f 0x8b 0x3b 0x51 0xa1 0x2e 0x0f 0x5d 0x17 0x64 0x00 0xd8 0x4a 0x41 0x0e 0x20 0x0f 0x5d 0x14 0xb4 0x13 0x9f 0x13 0xf0 0x0d 0x72 0x0f 0x5d 0x17 0x3f 0x00 0xf2 0x0e 0x6a 0x6d 0xe7 0x0f 0x6f 0x4f 0x17 0x85 0xe6 0x06 0x5d 0x17 0x0a 0x00 0x1a 0xab 0xbe 0xa8 0x98 0x2a 0x38 0x0c 0x16 0x16 0x98 0x3a 0x00 0x00 0x65 0x10 0x89 0x60 0xac 0x6d 0x79 0xeb 0x7c 0x5c 0xae 0x0b 0x98 0x2a 0x38 0x0c 0x89 0x60 0x38 0x0c 0x46 0x40 0x3e 0x13 0xfa 0x15 0xec 0xff 0x50 0xaa 0xfa 0x15 0x10 0x00 0xa1 0x5b 0xae 0x0b 0x41 0x0e 0x89 0x12 0xec 0xea 0x60 0x16 0x04 0x00 0x3d 0x0f 0xf2 0x0e 0x8b 0x3b 0x9f 0x11 0x9f 0x12 0x5f 0x12 0xb3 0x0f 0x41 0x0e 0x89 0x12 0xfa 0x15 0x04 0x00 0x4a 0x17 0xd0 0x15 0x74 0xff 0x6f 0x4f 0x17 0x85 0x16 0x16 0xa4 0x11 0x02 0x00 0x8c 0xea 0x47 0xa5 0x89 0x12 0xfa 0x15 0x12 0x00 0xdc 0x1b 0x07 0x44 0x45 0x4e 0x49 0x45 0x44 0x2e 0xb4 0xeb 0x60 0x16 0x19 0x00 0xdc 0x1b 0x08 0x47 0x52 0x41 0x4e 0x54 0x45 0x44 0x2e 0x48 0x5a 0xb7 0x6d 0x11 0x5c 0xb7 0x6d 0x36 0x5e 0xb7 0x6d 0x90 0x16 0x4c 0x22 0xe4 0x54 0xae 0x0b 0x7b 0x3b 0xf5 0x12 0x89 0x12 0x07 0x13 0xce 0x54 0xae 0x0b 0x2e 0x0f 0x2d 0x12 0xf5 0x12 0xfa 0x15 0x18 0x00 0x6e 0xea 0x78 0xea 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0x16 0x16 0xc5 0x11 0x02 0x00 0x8c 0xea 0xda 0xea 0xc9 0x79 0x90 0x16 0x4c 0x22 0xb3 0xea 0xf2 0x79 0x9e 0xea 0x92 0x0c 0xa3 0xea 0x92 0x0c 0x46 0x12 0xc9 0x79 0x89 0x12 0x07 0x13 0xce 0x54 0xae 0x0b 0x2e 0x0f 0x2d 0x12 0xf5 0x12 0xfa 0x15 0x18 0x00 0x6e 0xea 0x78 0xea 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0x16 0x16 0x52 0x12 0x02 0x00 0x8c 0xea 0xda 0xea 0xc9 0x79 0x90 0x16 0x4c 0x22 0xe4 0x54 0xae 0x0b 0x2e 0x0f 0xf5 0x12 0x89 0x12 0xfa 0x15 0x18 0x00 0x6e 0xea 0x78 0xea 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0x16 0x16 0xcc 0x12 0x02 0x00 0x8c 0xea 0xda 0xea 0xc9 0x79 0x90 0x16 0x4c 0x22 0xe4 0x54 0xae 0x0b 0x9b 0x3b 0xf5 0x12 0x89 0x12 0x07 0x13 0xce 0x54 0xae 0x0b 0x2e 0x0f 0x2d 0x12 0xf5 0x12 0xfa 0x15 0x18 0x00 0x6e 0xea 0x78 0xea 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0x16 0x16 0x4e 0x13 0x02 0x00 0x8c 0xea 0xda 0xea 0xc9 0x79 0x90 0x16 0x4c 0x22 0xad 0xea 0xf2 0x79 0x9e 0xea 0x92 0x0c 0xa3 0xea 0x92 0x0c 0x46 0x12 0xc9 0x79 0x89 0x12 0x07 0x13 0xce 0x54 0xae 0x0b 0x2e 0x0f 0x2d 0x12 0xf5 0x12 0xfa 0x15 0x18 0x00 0x6e 0xea 0x78 0xea 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0x16 0x16 0x00 0x14 0x02 0x00 0x8c 0xea 0xda 0xea 0xc9 0x79 0x90 0x16 ': L"  2 .  ;           ;Q . ] d  JA   ]       r ] ?   jm  oO    ]        *8    :  e  ` my |\   *8  `8 F@>     P      [  A     `   =    ;    _   A       J   t oO          G          DENIED.  `      GRANTED.HZ m \ m6^ m  L" T  {;       T  . -       n x    m             y  L"   y        F  y     T  . -       n x    m    R        y  L" T  .         n x    m             y  L" T   ;       T  . -       n x    m    N        y  L"   y        F  y     T  . -       n x    m             y  '

// ================================================
// 0xeead: WORD 'XY/N' codep=0x224c parp=0xeeb6
// ================================================

void XY_slash_N() // XY/N
{
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Push(0x000a);
  _dot_BTN_dash_TE(); // .BTN-TE
  INIT_dash_BU(); // INIT-BU
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xea60); Pust(0x0000);
  D_plus_(); // D+
  Push(pp_TIRED_dash_T); // TIRED-T
  D_ex_(); // D!

  label1:
  UNK_0xeb7b(); // UNK_0xeb7b
  Push(pp_FTRIG); // FTRIG
  Push(Read16(Pop())); // @
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_TIRED_dash_T); // TIRED-T
  _2_at_(); // 2@
  D_gt_(); // D>
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(2); // 2
  _eq_(); // =
  Push(pp_FTRIG); // FTRIG
  Push(Read16(Pop())); // @
  Push(Pop() * Pop()); // *
  Push(pp__ro_STOP_dash_C); // (STOP-C
  _ex_(); // !
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) Push(1); else Push(0); // 0=
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  Pop(); // DROP
  UNK_0xea84(); // UNK_0xea84
  Push(1); // 1
  goto label3;

  label2:
  UNK_0xea84(); // UNK_0xea84
  Pop(); // DROP
  Push(0); // 0

  label3:
  Push(Read16(sp)); // DUP
  UNK_0xeaee(); // UNK_0xeaee
  Push(cc__9); // 9
  _dot_BTN_dash_TE(); // .BTN-TE
}

// 0xef24: db 0x29 0x1d 0x3a 0x20 0x4c 0x22 0x16 0x16 0x98 0x14 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x5d 0x17 0x0e 0x00 0x44 0xea 0xce 0x54 0xae 0x0b 0x2e 0x0f 0x2d 0x12 0xf5 0x12 0xfa 0x15 0x68 0x00 0x6e 0xea 0x78 0xea 0x28 0xef 0xda 0xea 0x5d 0x17 0xd8 0xff 0x5d 0x17 0x32 0x00 0xb4 0xee 0xfa 0x15 0x10 0x00 0x5d 0x17 0x0e 0x00 0x8c 0xec 0x5d 0x17 0xd8 0xff 0x60 0x16 0x0c 0x00 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0x5d 0x17 0x32 0x00 0x24 0xef 0xae 0x0b 0xfa 0x15 0x1c 0x00 0x16 0x16 0x79 0xe9 0x00 0x00 0x70 0x7a 0x16 0x16 0x50 0xec 0x00 0x00 0xf2 0x79 0xda 0x7e 0xc9 0x79 0xc9 0x79 0x24 0xef 0xc5 0x6d 0x9e 0xea 0x92 0x0c 0x72 0x0f 0x5d 0x17 0x64 0x00 0xad 0x11 0x20 0x0f 0x89 0x11 0x9e 0xea 0x6a 0x6d 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0x0e 0x15 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x44 0xea 0xce 0x54 0xae 0x0b 0x2e 0x0f 0x2d 0x12 0xf5 0x12 0xfa 0x15 0x2e 0x00 0x6e 0xea 0x78 0xea 0xb2 0xef 0xda 0xea 0x20 0x0f 0x5d 0x17 0x64 0x00 0xb4 0xee 0xfa 0x15 0x0a 0x00 0x2e 0x0f 0x8c 0xec 0x60 0x16 0x10 0x00 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0x5d 0x17 0x64 0x00 0x9e 0xea 0x6a 0x6d 0xc9 0x79 0x90 0x16 0x29 0x1d 0x3a 0x20 0x4c 0x22 0x16 0x16 0xad 0x15 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x73 0x3b 0x5d 0x17 0x0f 0x00 0xe4 0xeb 0xfa 0x15 0x6a 0x00 0x6e 0xea 0x78 0xea 0x04 0xf0 0xcc 0xeb 0xae 0x0b 0x5d 0x17 0x54 0x00 0x5d 0x17 0x64 0x00 0xc4 0x0f 0xb8 0xec 0x41 0x0e 0x00 0xf0 0x76 0x6d 0x5d 0x17 0x0a 0x00 0x4c 0x0f 0x20 0x0f 0x5d 0x14 0xb4 0x13 0x9f 0x13 0x0d 0x40 0x32 0x0e 0x5d 0x17 0x5d 0x00 0x72 0x0f 0x41 0x0e 0x73 0x3b 0x98 0x09 0xfd 0x6d 0xf2 0x0e 0xea 0x6d 0xda 0xea 0xc9 0x79 0x20 0x0f 0x83 0x3b 0xb4 0xee 0xfa 0x15 0x18 0x00 0xcc 0xeb 0xae 0x0b 0x5d 0x17 0x0f 0x00 0x4c 0xec 0x00 0xf0 0xae 0x0b 0x8b 0x3b 0x6c 0xec 0x60 0x16 0x06 0x00 0xc8 0xec 0xb7 0x6d 0x90 0x16 0x14 0x22 0x01 0x00 0x4c 0x22 0x16 0x16 0x3f 0x16 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x16 0x16 0x08 0x17 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0xce 0x54 0xae 0x0b 0x3d 0x0f 0x5f 0x12 0x88 0xf0 0xf5 0x12 0xfa 0x15 0x66 0x00 0x8c 0xf0 0xda 0xea 0x20 0x0f 0x20 0x0f 0xb4 0xee 0xfa 0x15 0x4e 0x00 0x5d 0x17 0x2c 0x01 0x8b 0x3b 0xe4 0xeb 0xfa 0x15 0x36 0x00 0x5d 0x17 0x2c 0x01 0x8b 0x3b 0x4c 0xec 0x5d 0x17 0x1c 0x00 0x5d 0x17 0x0f 0x00 0x59 0x81 0xf2 0x79 0xf6 0xad 0xae 0x0b 0xa9 0x74 0x76 0x6d 0x75 0x75 0xc9 0x79 0x50 0x6c 0xf2 0x79 0x37 0xbb 0xc9 0x79 0x5d 0x17 0x8a 0xf0 0xc5 0x6d 0xc2 0xeb 0x60 0x16 0x0a 0x00 0x98 0xf0 0xda 0xea 0x83 0x3b 0x82 0xea 0x60 0x16 0x0c 0x00 0x16 0x16 0x4e 0x17 0x02 0x00 0x8c 0xea 0xda 0xea 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0x00 0x18 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0xc8 0x55 0xae 0x0b 0x07 0x13 0xfa 0x15 0x20 0x00 0x6e 0xea 0x78 0xea 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0x22 0xf1 0xda 0xea 0x5d 0x17 0x64 0x00 0x82 0xea 0x5d 0x17 0x64 0x00 0x9e 0xea 0x6a 0x6d 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0xfc 0x18 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x16 0x16 0x98 0x19 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0xce 0x54 0xae 0x0b 0x3d 0x0f 0x5f 0x12 0xfa 0x15 0x3e 0x00 0x16 0x16 0xe5 0x19 0x02 0x00 0x8c 0xea 0xda 0xea 0x20 0x0f 0x20 0x0f 0xb4 0xee 0xfa 0x15 0x2a 0x00 0x5d 0x17 0xc8 0x00 0x8b 0x3b 0xe4 0xeb 0xfa 0x15 0x0c 0x00 0x9b 0x3b 0x82 0xea 0x5a 0xf1 0x60 0x16 0x12 0x00 0xc8 0xec 0xb7 0x6d 0x66 0xf1 0x5d 0x17 0x96 0x00 0xb8 0xec 0x8b 0x3b 0x6c 0xec 0xda 0xea 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0x10 0x1a 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0xce 0x54 0xae 0x0b 0x5d 0x17 0x0c 0x00 0xf5 0x12 0x5d 0x17 0x28 0x00 0x8b 0x3b 0xe4 0xeb 0xb3 0x0f 0xfa 0x15 0x5c 0x00 0xc4 0xf1 0xce 0x54 0xae 0x0b 0x9b 0x3b 0x5f 0x12 0x8b 0x3b 0xb3 0x0f 0x73 0x3b 0x72 0x0f 0x5d 0x17 0x30 0x00 0x72 0x0f 0x73 0x3b 0xae 0x3f 0x5d 0x17 0x82 0x00 0x72 0x0f 0x6a 0x6d 0xda 0xea 0x20 0x0f 0x5d 0x17 0x64 0x00 0xb4 0xee 0xfa 0x15 0x24 0x00 0xcc 0xeb 0xae 0x0b 0xce 0x54 0xae 0x0b 0x9b 0x3b 0x5f 0x12 0x5d 0x17 0x3c 0x00 0xb3 0x0f 0x5d 0x17 0x1e 0x00 0x72 0x0f 0xad 0x11 0x8b 0x3b 0x4c 0xec 0x60 0x16 0x08 0x00 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0xd4 0x1a 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0xd2 0xad 0x41 0x0e 0xdb 0x23 0x5d 0x17 0x18 0x00 0xea 0x6d 0xac 0xeb 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x4e 0x00 0x60 0x16 0x04 0x00 0x98 0x09 0x9c 0x67 0x5d 0x17 0x3b 0x00 0x72 0x0f 0x6a 0x6d 0x9c 0x67 0x5d 0x17 0x3d 0x00 0x72 0x0f 0x41 0x0e 0x5d 0x17 0x18 0x00 0x98 0x09 0xfd 0x6d 0xdb 0x23 0x5d 0x17 0x18 0x00 0x5d 0x17 0x2e 0x00 0x67 0xaf 0xe7 0x0f 0xb3 0x0e 0xf2 0x0e 0xea 0x6d 0x90 0x16 0x4c 0x22 0xe4 0xad 0xae 0x0b 0x20 0x0f 0x5d 0x17 0x21 0x00 0xeb 0x11 0x5d 0x17 0x0a 0x00 0x89 0x11 0xb8 0xec 0x41 0x0e 0x00 0xf0 0x76 0x6d 0x5d 0x17 0x0a 0x00 0x4c 0x0f 0x20 0x0f 0x5d 0x14 0xb4 0x13 0x9f 0x13 0x9c 0x67 0x5d 0x17 0x9b 0x00 0x72 0x0f 0x41 0x0e 0x7b 0x3b 0x98 0x09 0xfd 0x6d 0xf2 0x0e 0xea 0x6d 0x32 0x0e 0x00 0xf0 0xae 0x0b 0x5d 0x17 0x0a 0x00 0x2d 0x12 0xfa 0x15 0x0a 0x00 0x5d 0x17 0x53 0x00 0x60 0x16 0x04 0x00 0x98 0x09 0x9c 0x67 0x5d 0x17 0xaf 0x00 0x72 0x0f 0x3d 0x0f 0xb3 0x0e 0xfd 0x6d 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0x50 0x6c 0xf2 0x79 0x12 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0f 0x00 0x12 0x7e 0xfa 0x15 0x66 0x00 0x12 0x7a 0x2e 0x0f 0x5d 0x17 0x0a 0x00 0xd8 0x4a 0x20 0x0f 0xb8 0x15 0x84 0x7a 0xd0 0x15 0xfc 0xff 0x30 0x75 0x5d 0x17 0x0f 0x00 0x5f 0x12 0xfa 0x15 0x04 0x00 0xb5 0x7a 0x30 0x75 0x5d 0x17 0x0f 0x00 0x5f 0x12 0x07 0x13 0x41 0x0e 0xfa 0x15 0x2a 0x00 0x4c 0xf2 0xde 0x0d 0x58 0xf2 0xa8 0xf2 0x9c 0x67 0xcd 0x0c 0xda 0xea 0x20 0x0f 0x83 0x3b 0xb4 0xee 0xfa 0x15 0x12 0x00 0xc2 0xeb 0x48 0xbb 0xac 0x7e 0x32 0x0e 0x00 0xf0 0xae 0x0b 0x8b 0x3b 0x6c 0xec 0x84 0x7a 0x60 0x7a 0x3e 0x13 0xfa 0x15 0xc0 0xff 0x34 0xec 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0x00 0x1c 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0x94 0xf3 0xda 0xea 0x20 0x0f 0x5d 0x17 0x64 0x00 0xb4 0xee 0xfa 0x15 0x3c 0x00 0x28 0xa5 0x0a 0x4f 0x17 0x85 0xab 0x4f 0x5d 0x17 0x0c 0x4f 0x76 0x6d 0x81 0xa1 0x39 0x3f 0x0d 0x43 0x52 0x45 0x57 0x20 0x41 0x52 0x52 0x45 0x53 0x54 0x45 0x44 0x47 0xa5 0x39 0x3f 0x09 0x47 0x41 0x4d 0x45 0x20 0x4f 0x56 0x45 0x52 0x47 0xa5 0x1f 0xa9 0x32 0x0e 0xa9 0x48 0x32 0x0e 0xd7 0x8f 0xc8 0xec 0xb7 0x6d 0xb4 0xeb 0xc9 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0xd8 0x1c 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x16 0x16 0x0f 0x1d 0x02 0x00 0x8c 0xea 0x90 0x16 0x4c 0x22 0x6e 0xea 0x78 0xea 0xfa 0xf3 0xda 0xea 0x5d 0x17 0xc4 0x09 0xef 0x2a 0xe7 0x5f 0xae 0x0b 0xce 0x84 0xcf 0x5f 0xae 0x0b 0x07 0x13 0xfa 0x15 0x1e 0x00 0x06 0xf4 0xda 0xea 0x5d 0x17 0xc4 0x09 0xef 0x2a 0xc8 0xec 0xb7 0x6d 0x48 0x5a 0xb7 0x6d 0x20 0x0f 0x9e 0xea 0x6a 0x6d 0xc0 0x54 0xc5 0x6d 0xc9 0x79 0x90 0x16 ') : L"          L"]   D  T  . -     h n x (   ]   ] 2       ]     ]   `      m  ] 2 $         y   pz  P    y ~ y y$  m    r ] d         jm y  L"          L". D  T  . -     . n x       ] d       .   `      m  ] d   jm y  ) : L"          L"s;]       j n x       ] T ] d     A   vm]   L   ]      @2 ] ] r A s;   m   m   y   ;          ]   L      ;l `      m   "  L"  ?       L"          L"n x  T  = _       f             N ] ,  ;    6 ] ,  ;L ]   ]   Y  y     tvmuu yPl y7  y]    m  `        ;  `     N        y  L"          L" U        n x    m  "   ] d   ] d   jm y  L"          L"          L"n x  T  = _   >                   * ]    ;       ;  Z `      mf ]      ;l    y  L"          L"n x  T  ]     ] (  ;      \    T   ;_  ;  s;r ] 0 r s; ?]   r jm    ] d     $      T   ;_ ] <   ]   r    ;L `      m   y  L"          L"  A  #]    m      ] N `      g] ; r jm g] = r A ]      m #]   ] . g        m  L"      ] !   ]       A   vm]   L   ]      g]   r A {;   m   m2     ]   -     ] S `      g]   r =    m  L"n x Pl y z]   ]    ~  f  z. ]    J     z    0u]   _      z0u]   _   A   * L   X    g       ;        H  ~2      ;l  z`z>     4  y  L"          L"n x       ] d     < (  O   O]  Ovm  9? CREW ARRESTEDG 9? GAME OVERG   2  H2      m   y  L"          L"          L"n x     ]    * _     _            ]    *   mHZ m    jm T m y  '

// ================================================
// 0xf452: WORD 'UNK_0xf454' codep=0x1d29 parp=0xf454
// ================================================
// 0xf454: db 0x04 0x30 0xf1 0xa7 0xed 0xdb 0xed 0x74 0xf1 ' 0     t '

// ================================================
// 0xf45d: WORD 'UNK_0xf45f' codep=0x1d29 parp=0xf45f
// ================================================
// 0xf45f: db 0x05 0x3f 0xee 0x73 0xee 0x12 0xf0 0x12 0xf3 0xa6 0xf0 ' ? s       '

// ================================================
// 0xf46a: WORD 'UNK_0xf46c' codep=0x1d29 parp=0xf46c
// ================================================
// 0xf46c: db 0x03 0xc0 0xef 0x36 0xef 0xd2 0xf1 '   6   '

// ================================================
// 0xf473: WORD 'UNK_0xf475' codep=0x1d29 parp=0xf475
// ================================================
// 0xf475: db 0x01 0x17 0xee '   '

// ================================================
// 0xf478: WORD 'UNK_0xf47a' codep=0x1d29 parp=0xf47a
// ================================================
// 0xf47a: db 0x01 0xce 0xec '   '

// ================================================
// 0xf47d: WORD 'UNK_0xf47f' codep=0x1d29 parp=0xf47f
// ================================================
// 0xf47f: db 0x02 0x14 0xf4 0xa2 0xf3 '     '

// ================================================
// 0xf484: WORD 'UNK_0xf486' codep=0x224c parp=0xf486
// ================================================

void UNK_0xf486() // UNK_0xf486
{
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) return;
  Push(pp_UNK_0xecca); // UNK_0xecca
  OFF(); // OFF
  COUNT(); // COUNT
  Push(Pop()*2); // 2*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _at_EXECUTE(); // @EXECUTE
  Push(pp_UNK_0xecca); // UNK_0xecca
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  LEAVE(); // LEAVE

  label1:
  _dot_SORD(); // .SORD
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffec

}


// ================================================
// 0xf4b4: WORD 'SA-CASE' codep=0x4a4f parp=0xf4c0
// ================================================
// 0xf4c0: db 0x06 0x00 0x22 0x0f 0x01 0x00 0x54 0xf4 0x07 0x00 0x5f 0xf4 0x08 0x00 0x6c 0xf4 0x03 0x00 0x75 0xf4 0x0a 0x00 0x7a 0xf4 0x15 0x00 0x7f 0xf4 '  "   T   _   l   u   z    '

// ================================================
// 0xf4dc: WORD 'UNK_0xf4de' codep=0x224c parp=0xf4de
// ================================================

void UNK_0xf4de() // UNK_0xf4de
{

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_OK_dash_TALK); // OK-TALK
  _2_at_(); // 2@
  D_gt_(); // D>
  Func14("?TERMINAL"); // call of word 0x25bc
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
}


// ================================================
// 0xf4f2: WORD '(XCOMM)' codep=0x224c parp=0xf4fe
// ================================================
// entry

void _ro_XCOMM_rc_() // (XCOMM)
{
  UNK_0xf4de(); // UNK_0xf4de
  Push(pp__ro_AORIGINATOR); // (AORIGINATOR
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_SPECIES(); // @INST-SPECIES
  ICLOSE(); // ICLOSE
  Pop();
  switch(Pop()) // SA-CASE
  {
  case 1:
    UNK_0xf454(); // UNK_0xf454
    break;
  case 7:
    UNK_0xf45f(); // UNK_0xf45f
    break;
  case 8:
    UNK_0xf46c(); // UNK_0xf46c
    break;
  case 3:
    UNK_0xf475(); // UNK_0xf475
    break;
  case 10:
    UNK_0xf47a(); // UNK_0xf47a
    break;
  case 21:
    UNK_0xf47f(); // UNK_0xf47f
    break;
  default:
    Push(0); // 0
    break;

  }
  UNK_0xf486(); // UNK_0xf486
  UNK_0xf4de(); // UNK_0xf4de
}

// 0xf510: db 0x58 0x43 0x4f 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x53 0x50 0x45 0x43 0x20 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x38 0x2f 0x31 0x33 0x2f 0x38 0x35 0x20 0x41 0x57 0x4b 0x20 0x29 0x31 0x31 0x37 0x35 0xcf 0x8b 0x90 0x16 0x43 0x4f 0x4d 0x4d 0x2d 0x56 0x4f 0x43 0x00 'XCOM-VOC________________________ SPEC -------------8/13/85 AWK )1175    COMM-VOC '
  