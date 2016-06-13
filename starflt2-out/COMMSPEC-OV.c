// ====== OVERLAY 'COMMSPEC-OV' ======
// store offset = 0xe540
// overlay size   = 0x1020

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xa64b C-string:'UNK_0x3f09'
// 1870:      UNK_0xe556  codep:0x224c parp:0xe556 size:0x0028 C-string:'UNK_0xe556'
// 1871:      UNK_0xe580  codep:0x224c parp:0xe580 size:0x0008 C-string:'UNK_0xe580'
// 1872:      UNK_0xe58a  codep:0x224c parp:0xe58a size:0x0012 C-string:'UNK_0xe58a'
// 1873:      UNK_0xe59e  codep:0x224c parp:0xe59e size:0x0042 C-string:'UNK_0xe59e'
// 1874:      UNK_0xe5e2  codep:0x224c parp:0xe5e2 size:0x0010 C-string:'UNK_0xe5e2'
// 1875:      UNK_0xe5f4  codep:0x224c parp:0xe5f4 size:0x0034 C-string:'UNK_0xe5f4'
// 1876:      UNK_0xe62a  codep:0x7420 parp:0xe62a size:0x000d C-string:'UNK_0xe62a'
// 1877:      UNK_0xe639  codep:0x7420 parp:0xe639 size:0x0003 C-string:'UNK_0xe639'
// 1878:      UNK_0xe63e  codep:0x1d29 parp:0xe63e size:0x0002 C-string:'UNK_0xe63e'
// 1879:      UNK_0xe642  codep:0x224c parp:0xe642 size:0x0014 C-string:'UNK_0xe642'
// 1880:      UNK_0xe658  codep:0x224c parp:0xe658 size:0x0072 C-string:'UNK_0xe658'
// 1881:      UNK_0xe6cc  codep:0x224c parp:0xe6cc size:0x000e C-string:'UNK_0xe6cc'
// 1882:          ?VOWEL  codep:0x4b3b parp:0xe6e5 size:0x0168 C-string:'_ask_VOWEL'
// 1883:      UNK_0xe84f  codep:0x224c parp:0xe84f size:0x00e4 C-string:'UNK_0xe84f'
// 1884:      UNK_0xe935  codep:0x224c parp:0xe935 size:0x011a C-string:'UNK_0xe935'
// 1885:      UNK_0xea51  codep:0x224c parp:0xea51 size:0x0010 C-string:'UNK_0xea51'
// 1886:      UNK_0xea63  codep:0x224c parp:0xea63 size:0x0037 C-string:'UNK_0xea63'
// 1887:      UNK_0xea9c  codep:0x7420 parp:0xea9c size:0x00b9 C-string:'UNK_0xea9c'
// 1888:      GORZEK>UHL  codep:0x224c parp:0xeb64 size:0x0132 C-string:'GORZEK_gt_UHL'
// 1889:          NPCREW  codep:0x4b3b parp:0xeca1 size:0x0174 C-string:'NPCREW'
// 1890:      UNK_0xee17  codep:0x224c parp:0xee17 size:0x042b C-string:'UNK_0xee17'
// 1891:       #>PROTEST  codep:0x4b3b parp:0xf250 size:0x0010 C-string:'_n__gt_PROTEST'
// 1892:           #>PRO  codep:0x224c parp:0xf26a size:0x0241 C-string:'_n__gt_PRO'
// 1893:      UNK_0xf4ad  codep:0x224c parp:0xf4ad size:0x0036 C-string:'UNK_0xf4ad'
// 1894:         SA-CASE  codep:0x4b3b parp:0xf4ef size:0x002c C-string:'SA_dash_CASE'
// 1895:      UNK_0xf51d  codep:0x224c parp:0xf51d size:0x0014 C-string:'UNK_0xf51d'
// 1896:         (XCOMM)  codep:0x224c parp:0xf53d size:0x0000 C-string:'_ro_XCOMM_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe63e[2] = {0x3a, 0x20}; // UNK_0xe63e



// 0xe552: db 0x01 0x01 '  '

// ================================================
// 0xe554: WORD 'UNK_0xe556' codep=0x224c parp=0xe556
// ================================================

void UNK_0xe556() // UNK_0xe556
{
  Push(0xb76b);
  MODULE(); // MODULE
}

// 0xe55e: db 0x4c 0x22 0x5f 0x61 0xae 0x0b 0x01 0x57 0x16 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x16 0xbf 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x26 0xbf 0xd9 0x84 0x90 0x16 'L"_a   W m  L"]       L"] &     '

// ================================================
// 0xe57e: WORD 'UNK_0xe580' codep=0x224c parp=0xe580
// ================================================

void UNK_0xe580() // UNK_0xe580
{
  Push(0xbf4a);
  MODULE(); // MODULE
}


// ================================================
// 0xe588: WORD 'UNK_0xe58a' codep=0x224c parp=0xe58a
// ================================================

void UNK_0xe58a() // UNK_0xe58a
{
  _star_PLIST(); // *PLIST
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  SWAP(); // SWAP
  IFIND(); // IFIND
  Pop(); // DROP
}


// ================================================
// 0xe59c: WORD 'UNK_0xe59e' codep=0x224c parp=0xe59e
// ================================================

void UNK_0xe59e() // UNK_0xe59e
{
  Push(pp__at__co_0_star_1_sc_); // @,0*1;
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  BEEPON(); // BEEPON
  Push(0x00c8);
  Push(cc_MPS); // MPS
  Push(Pop()-1); // 1-
  Push(Pop() * Pop()); // *
  Push(0x01f4);
  MAX(); // MAX
  Push(0x05dc);
  MIN(); // MIN
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  TONE(); // TONE
  Push(0x000a);
  Push(cc_MPS); // MPS
  Push(Pop() * Pop()); // *
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  i++;
  } while(i<imax); // (LOOP) 0xffe8

  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xe5e0: WORD 'UNK_0xe5e2' codep=0x224c parp=0xe5e2
// ================================================

void UNK_0xe5e2() // UNK_0xe5e2
{
  _gt_C_plus_S(); // >C+S
  PHRASE_do_(); // PHRASE$
  Push(pp_LSCAN); // LSCAN
  _do__ex_(); // $!
  Push(pp_LSCAN); // LSCAN
  COUNT(); // COUNT
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe5f2: WORD 'UNK_0xe5f4' codep=0x224c parp=0xe5f4
// ================================================

void UNK_0xe5f4() // UNK_0xe5f4
{
  Push(0xbe96);
  MODULE(); // MODULE
}

// 0xe5fc: db 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x0b 0x00 0xc4 0x4b 0x72 0x0f 0x5d 0x17 0xfa 0x00 0xad 0x11 0x41 0x0e 0xb8 0x27 0x90 0x16 0x20 0x74 0x34 0x12 0x01 0x20 0x74 0x34 0x13 0x01 0x20 0x74 0x14 0x43 0x02 0x20 0x74 0x34 0x14 0x01 'L". ]    Kr ]     A  '   t4   t4   t C  t4  '

// ================================================
// 0xe628: WORD 'UNK_0xe62a' codep=0x7420 parp=0xe62a
// ================================================
// 0xe62a: db 0x34 0x0b 0x01 0x20 0x74 0x10 0x0b 0x0f 0x20 0x74 0x10 0x20 0x02 '4   t    t   '

// ================================================
// 0xe637: WORD 'UNK_0xe639' codep=0x7420 parp=0xe639
// ================================================
// 0xe639: db 0x3d 0x1b 0x01 '=  '

// ================================================
// 0xe63c: WORD 'UNK_0xe63e' codep=0x1d29 parp=0xe63e
// ================================================
// 0xe63e: db 0x3a 0x20 ': '

// ================================================
// 0xe640: WORD 'UNK_0xe642' codep=0x224c parp=0xe642
// ================================================

void UNK_0xe642() // UNK_0xe642
{
  CTINIT(); // CTINIT
  Push(0x5bbc); Pust(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  _dot_TTY(); // .TTY
  Push(0x01f4);
  MS(); // MS
}


// ================================================
// 0xe656: WORD 'UNK_0xe658' codep=0x224c parp=0xe658
// ================================================

void UNK_0xe658() // UNK_0xe658
{
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  Push(2); // 2
  _st_(); // <
  if (Pop() == 0) goto label1;
  BLUE(); // BLUE
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
  CTINIT(); // CTINIT
  UNK_0xe642(); // UNK_0xe642
  if (Pop() == 0) goto label2;

  UNK_0x3f09("YES.");
  goto label3;

  label2:

  UNK_0x3f09("NO.");

  label3:
  _dot_TTY(); // .TTY
  TTY_dash_SCR(); // TTY-SCR
  goto label4;

  label1:
  Pop(); // DROP

  label4:
  BLACK(); // BLACK
  Push(pp_THIS_dash_BU); // THIS-BU
  Push(Read16(Pop())); // @
  _dot_ON(); // .ON
}

// 0xe699: db 0x4c 0x22 0xe7 0x5e 0x65 0x6d 0xd2 0x9f 0x07 0x3f 0x0a 0x52 0x45 0x43 0x45 0x49 0x56 0x49 0x4e 0x47 0x3a 0xf1 0x9f 0x5d 0x17 0xf4 0x01 0xef 0x2a 0x90 0x16 0x4c 0x22 0x99 0xe6 0x6a 0xe5 0x74 0xe5 0x5d 0x17 0x6f 0xbf 0xd9 0x84 0xdf 0x79 0x90 0x16 'L" ^em   ? RECEIVING:  ]    *  L"  j t ] o    y  '

// ================================================
// 0xe6ca: WORD 'UNK_0xe6cc' codep=0x224c parp=0xe6cc
// ================================================

void UNK_0xe6cc() // UNK_0xe6cc
{
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  _ask_DUP(); // ?DUP
  if (Pop() == 0) return;
  NEW_dash_BUT(); // NEW-BUT
}


// ================================================
// 0xe6da: WORD '?VOWEL' codep=0x4b3b parp=0xe6e5
// ================================================
// 0xe6e5: db 0x05 0x00 0x22 0x0f 0x41 0x00 0x30 0x0f 0x45 0x00 0x30 0x0f 0x49 0x00 0x30 0x0f 0x4f 0x00 0x30 0x0f 0x55 0x00 0x30 0x0f 0x4c 0x22 0x92 0x0c 0xe3 0xe6 0x90 0x16 0x4c 0x22 0x18 0x5c 0x57 0x6d 0x5d 0x17 0x64 0x00 0x7e 0xe5 0x90 0x16 0x4c 0x22 0x5d 0x17 0xec 0xb6 0xd9 0x84 0x90 0x16 0x4c 0x22 0x11 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0a 0x00 0x4c 0x7e 0x90 0x16 0x4c 0x22 0x1d 0xe7 0xfa 0x15 0x28 0x00 0x3f 0x7a 0x20 0x0f 0xf2 0x0e 0x4c 0x7e 0xfa 0x15 0x12 0x00 0xad 0x74 0xae 0x0b 0xf2 0x0e 0x92 0x0f 0x78 0x12 0x07 0x13 0x60 0x16 0x06 0x00 0x32 0x0e 0x20 0x0f 0xdf 0x79 0x60 0x16 0x06 0x00 0xde 0x0d 0x20 0x0f 0xa7 0x75 0xdf 0x79 0x90 0x16 0x4c 0x22 0x1d 0xe7 0x32 0x0e 0x3f 0x7a 0x20 0x0f 0xf2 0x0e 0x4c 0x7e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x20 0x0f 0x14 0xe6 0x0a 0x6d 0x5d 0x17 0x9c 0xff 0x7e 0xe5 0x90 0x16 0x4c 0x22 0x5d 0x17 0x14 0x00 0x41 0x0e 0x23 0xe6 0x0a 0x6d 0x23 0xe6 0xe7 0x0f 0x0a 0x6d 0x90 0x16 0x4c 0x22 0x8b 0x75 0x11 0x6c 0x07 0x40 0x07 0x13 0xfa 0x15 0x08 0x00 0xa7 0x75 0x60 0x16 0xf0 0xff 0xdf 0x79 0x90 0x16 0x4c 0x22 0x69 0xe7 0xc6 0x11 0xad 0x74 0x23 0x6d 0xad 0x74 0xae 0x0b 0x9f 0x12 0x07 0x13 0xfa 0x15 0x04 0x00 0x1e 0x7f 0x9f 0xe7 0x13 0xe7 0xf7 0xc0 0x90 0x16 0x4c 0x22 0x5d 0x17 0x1a 0x00 0xf2 0x0e 0xa9 0x81 0x1f 0x7a 0xad 0x74 0x16 0x6d 0x6e 0x75 0x11 0x6c 0x1f 0x7a 0x3c 0xb9 0xdf 0x79 0x13 0xe7 0xf7 0xc0 0x90 0x16 0x4c 0x22 0x2e 0x53 0x1f 0x7a 0x1e 0xe6 0xae 0x0b 0xad 0x11 0xdf 0x79 0x90 0x16 0x4c 0x22 0x9d 0xb6 0x2f 0x7a 0x8b 0xe7 0x7b 0xe7 0x90 0x16 0x4c 0x22 0x11 0x6c 0x1f 0x7a 0x3f 0x7a 0x7f 0x0e 0x5d 0x17 0x76 0xb9 0xd9 0x84 0x5d 0x17 0x0b 0x00 0xf2 0x0e 0x4c 0x7e 0xfa 0x15 0x0a 0x00 0x3f 0x7a 0x4c 0x7e 0x60 0x16 0x08 0x00 0xde 0x0d 0xcf 0x51 0x3f 0x7a 0x90 0x16 0x4c 0x22 0x16 0x16 0x00 0x5c 0x02 0x00 0xe0 0xe5 0xb8 0xe6 0x90 0x16 '  " A 0 E 0 I 0 O 0 U 0 L"      L" \Wm] d ~   L"]       L" l z?z]   ]   L~  L"    ( ?z    L~     t      x   `   2    y`        u y  L"  2 ?z    L~2   L"     m]   ~   L"]   A #  m#    m  L" u l @       u`    y  L"i    t#m t                   L"]        z t mnu l z<  y      L".S z       y  L"  /z  {   L" l z?z ] v   ]     L~    ?zL~`      Q?z  L"   \        '

// ================================================
// 0xe84d: WORD 'UNK_0xe84f' codep=0x224c parp=0xe84f
// ================================================

void UNK_0xe84f() // UNK_0xe84f
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
  UNK_0xe6cc(); // UNK_0xe6cc
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
  DUP(); // DUP
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
  UNK_0xe580(); // UNK_0xe580
  Push(1); // 1
  goto label3;

  label2:
  UNK_0xe580(); // UNK_0xe580
  Pop(); // DROP
  Push(0); // 0

  label3:
  DUP(); // DUP
  UNK_0xe658(); // UNK_0xe658
  Push(cc__9); // 9
  _dot_BTN_dash_TE(); // .BTN-TE
}

// 0xe8bd: db 0x4c 0x22 0x5d 0x17 0xf4 0x01 0x5d 0x17 0xe8 0x03 0xc4 0x4b 0xf7 0xe7 0x97 0x3b 0xd7 0xe7 0x5d 0x50 0x57 0x6d 0x90 0x16 0x4c 0x22 0xad 0x74 0xae 0x0b 0x59 0x55 0x16 0x6d 0x60 0xb9 0xf0 0x7e 0x07 0x76 0xdf 0x79 0xfa 0x15 0x04 0x00 0x1e 0x7f 0x90 0x16 0x4c 0x22 0x5d 0x17 0xdc 0x05 0xef 0x2a 0x90 0x16 0x4c 0x22 0x46 0x9c 0x16 0x16 0x70 0x5c 0x02 0x00 0xe0 0xe5 0xf1 0x9f 0x2d 0xe6 0xcd 0x0c 0xe6 0x06 0xdc 0x1b 0x0b 0x20 0x52 0x45 0x50 0x4f 0x52 0x54 0x49 0x4e 0x47 0x2e 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x07 0xe8 0x2e 0x0f 0x07 0xe8 0x5d 0x17 0x12 0x00 0x07 0xe8 0x7f 0x3b 0x0a 0x7a 0x90 0x16 'L"]   ]    K   ;  ]PWm  L" t  YU m`  ~ v y       L"]    *  L"F   p\      -         REPORTING.  L".   .   ]     ; z  '

// ================================================
// 0xe933: WORD 'UNK_0xe935' codep=0x224c parp=0xe935
// ================================================

void UNK_0xe935() // UNK_0xe935
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp__ro_AORIGI); // (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xe62a(); // UNK_0xe62a
  C_at_(); // C@
  I_gt_C(); // I>C
  _ask_CGA(); // ?CGA
  if (Pop() == 0) goto label1;
  _gt_FLAG(); // >FLAG

  label1:
  DUP(); // DUP
  _ex_COLOR(); // !COLOR
  Push(pp_CTCOLOR); // CTCOLOR
  _ex_(); // !
  ICLOSE(); // ICLOSE
}

// 0xe957: db 0x4c 0x22 0x5d 0x17 0x44 0x00 0x5d 0x17 0x28 0x00 0x13 0xe8 0xfa 0x15 0x44 0x00 0x33 0xe9 0x3f 0xe8 0x5d 0x17 0x9c 0xff 0x20 0x0f 0x4d 0xe8 0xfa 0x15 0x2e 0x00 0xd5 0xe8 0xbd 0xe8 0x9c 0xe5 0x5d 0x17 0xec 0xb6 0xd9 0x84 0x6a 0xe5 0x74 0xe5 0x7b 0xe7 0xdf 0x79 0x5d 0x17 0xd9 0x00 0x88 0xe5 0x3f 0x7a 0x33 0xe9 0x5d 0x17 0x45 0xbe 0xd9 0x84 0x7f 0x3b 0x0a 0x7a 0x60 0x16 0x04 0x00 0xdf 0x79 0x60 0x16 0x04 0x00 0xdf 0x79 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x33 0xe9 0x16 0x16 0x8c 0x5c 0x02 0x00 0xe0 0xe5 0xb8 0xe6 0x90 0x16 0x4c 0x22 0x6a 0xe5 0x74 0xe5 0x5d 0x17 0x2d 0x00 0x54 0xe5 0xfa 0x15 0x4c 0x00 0xb1 0xe9 0x11 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0x5d 0x17 0x0f 0x00 0x4c 0x7e 0x32 0x0e 0x3f 0x7a 0x5d 0x17 0x1c 0x00 0x5d 0x17 0x2d 0x00 0x4c 0x7e 0x32 0x0e 0x5d 0x17 0x9c 0xff 0x5d 0x17 0x64 0x00 0x4d 0xe8 0xfa 0x15 0x16 0x00 0xd5 0xe8 0x5d 0x17 0xec 0xb6 0xd9 0x84 0x48 0x61 0x57 0x6d 0x9c 0xe5 0x1d 0xe9 0x60 0x16 0x04 0x00 0xdf 0x79 0x3d 0x0f 0x0a 0x7a 0xdf 0x79 0x90 0x16 0x4c 0x22 0xf2 0x61 0xae 0x0b 0x8f 0x3b 0x2d 0x12 0x90 0x16 0x4c 0x22 0x9d 0xb6 0x2f 0x7a 0x14 0xe6 0x92 0x0c 0x23 0xe6 0x92 0x0c 0x5d 0x17 0x65 0x00 0x25 0x40 0x90 0x16 0x4c 0x22 0x2e 0x53 0x1f 0x7a 0x1e 0xe6 0xae 0x0b 0xdf 0x79 0x90 0x16 'L"] D ] (     D 3 ? ]     M   .       ]     j t {  y]     ?z3 ] E   ; z`    y`    y=  z  L"3    \        L"j t ] - T   L    l z?z]   ]   L~2 ?z]   ] - L~2 ]   ] d M       ]     HaWm    `    y=  z y  L" a   ;-   L"  /z    #   ] e %@  L".S z     y  '

// ================================================
// 0xea4f: WORD 'UNK_0xea51' codep=0x224c parp=0xea51
// ================================================

void UNK_0xea51() // UNK_0xea51
{
  UNK_0xe935(); // UNK_0xe935
  INEXT(); // INEXT
  Push(0xbe45);
  MODULE(); // MODULE
  UNK_0xe5f4(); // UNK_0xe5f4
  WUP(); // WUP
}


// ================================================
// 0xea61: WORD 'UNK_0xea63' codep=0x224c parp=0xea63
// ================================================

void UNK_0xea63() // UNK_0xea63
{
  Push(cc__6); // 6
  Push(0x003a);
  Push(1); // 1
  _at_RECORD(); // @RECORD
  Push(0x0048);
  Push(Pop() + Pop()); // +
  C_ex_(); // C!
  UPDATE(); // UPDATE
  SAVE_dash_BU(); // SAVE-BU
  Push(0x5d19); Pust(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  Push(0x001c);
  Push(0x0036);
  _at_RECORD(); // @RECORD
  SWAP(); // SWAP
  CMOVE(); // CMOVE
  UPDATE(); // UPDATE
  SET_dash_CUR(); // SET-CUR
}

// 0xea95: db 0x20 0x74 0x10 0x1a 0x01 ' t   '

// ================================================
// 0xea9a: WORD 'UNK_0xea9c' codep=0x7420 parp=0xea9c
// ================================================
// 0xea9c: db 0x10 0x1f 0x01 0x4c 0x22 0xd2 0x9f 0x16 0x16 0x3e 0x5d 0x02 0x00 0xe0 0xe5 0xf1 0x9f 0x07 0x3f 0x09 0x53 0x43 0x49 0x45 0x4e 0x43 0x45 0x3a 0x20 0xf1 0x9f 0x95 0xea 0x92 0x0c 0xfc 0xe5 0x95 0xea 0x0a 0x6d 0x07 0x3f 0x0c 0x4e 0x41 0x56 0x49 0x47 0x41 0x54 0x49 0x4e 0x47 0x3a 0x20 0xf1 0x9f 0x95 0xea 0xe7 0x0f 0x92 0x0c 0xfc 0xe5 0x95 0xea 0xe7 0x0f 0x0a 0x6d 0x16 0x16 0x60 0x5d 0x02 0x00 0xe0 0xe5 0xf1 0x9f 0x95 0xea 0x15 0x10 0x92 0x0c 0xfc 0xe5 0x95 0xea 0x15 0x10 0x0a 0x6d 0x16 0x16 0x7a 0x5d 0x02 0x00 0xe0 0xe5 0xf1 0x9f 0x95 0xea 0x70 0x4a 0x92 0x0c 0xfc 0xe5 0x95 0xea 0x70 0x4a 0x0a 0x6d 0x07 0x3f 0x0a 0x4d 0x45 0x44 0x49 0x43 0x49 0x4e 0x45 0x3a 0x20 0xf1 0x9f 0x95 0xea 0x87 0x3b 0x72 0x0f 0x92 0x0c 0xfc 0xe5 0x95 0xea 0x87 0x3b 0x72 0x0f 0x0a 0x6d 0x5d 0x17 0x64 0x00 0x9a 0xea 0x0a 0x6d 0x32 0xe6 0x92 0x0c 0x5d 0x17 0xeb 0x00 0xf5 0x12 0x32 0xe6 0x0a 0x6d 0x16 0x16 0xe0 0x2e 0x00 0x00 0xf2 0xe5 0x90 0x16 '   L"    >]       ? SCIENCE:            m ? NAVIGATING:                m  `]                   m  z]        pJ      pJ m ? MEDICINE:      ;r        ;r  m] d    m2   ]     2  m   .      '

// ================================================
// 0xeb55: WORD 'GORZEK>UHL' codep=0x224c parp=0xeb64
// ================================================

void GORZEK_gt_UHL() // GORZEK>UHL
{
  Push(0x0036);
  UNK_0xe556(); // UNK_0xe556
  if (Pop() == 0) return;
  Push(0x0064);
  UNK_0xe58a(); // UNK_0xe58a
  IOPEN(); // IOPEN
  UNK_0xe935(); // UNK_0xe935
  Push(0xbe45);
  MODULE(); // MODULE
  Push(0x5d96); Pust(0x0002);
  UNK_0xe5e2(); // UNK_0xe5e2
  _dot_TTY(); // .TTY
  Push(0x0000);
  Push(0x0000);
  UNK_0xe84f(); // UNK_0xe84f
  if (Pop() == 0) goto label1;
  Push(0x2710); Pust(0x0000);
  UNK_0xea51(); // UNK_0xea51
  UNK_0xe59e(); // UNK_0xe59e
  Push(0x2710); Pust(0x0000);
  UNK_0xea51(); // UNK_0xea51
  Push(0x2710); Pust(0x0000);
  UNK_0xea51(); // UNK_0xea51
  Push(pp__ro_ENCOUN); // (ENCOUN
  _at__gt_C_plus_S(); // @>C+S
  Push(0); // 0
  UNK_0xe639(); // UNK_0xe639
  C_ex_(); // C!
  IOPEN(); // IOPEN
  Push(0x0019);
  Push(0x0014);
  IFIND(); // IFIND
  Pop(); // DROP
  _dash_ICON(); // -ICON
  Push(pp_TERMINA); // TERMINA
  ON(); // ON
  Push(pp__ro_STOP_dash_C); // (STOP-C
  ON(); // ON
  Push(2); // 2
  _star_CLOSE(); // *CLOSE
  UNK_0xea63(); // UNK_0xea63
  Push(pp_UNK_0xe63e); // UNK_0xe63e
  ON(); // ON
  goto label2;

  label1:

  UNK_0x3f09("CANCELLED");
  _dot_TTY(); // .TTY

  label2:
  Push(cc__3); // 3
  _star_CLOSE(); // *CLOSE
}

// 0xebf4: db 0x4c 0x22 0x2d 0xe6 0x65 0x6d 0x2d 0xe6 0xe7 0x0f 0x5d 0x17 0x0e 0x00 0x98 0x09 0x9d 0x6d 0x3d 0x0f 0x20 0x0f 0xb8 0x15 0x5d 0x17 0x8f 0xbf 0xd9 0x84 0xdb 0x23 0xcd 0x0c 0xb4 0x0d 0x2d 0xe6 0xcd 0x0c 0x72 0x0f 0x50 0x0e 0x8a 0x6d 0x2d 0xe6 0x92 0x0c 0x90 0x0e 0x72 0x0f 0x2d 0xe6 0x0a 0x6d 0xd0 0x15 0xdc 0xff 0x90 0x16 0x4c 0x22 0x5d 0x17 0x1c 0x00 0x5d 0x17 0x0d 0x00 0xa9 0x81 0x1f 0x7a 0x9e 0xa9 0xae 0x0b 0x41 0x0e 0xad 0x74 0x16 0x6d 0x8b 0x75 0xdf 0x79 0xb3 0x0e 0x41 0xea 0x2d 0x12 0x07 0x13 0xfa 0x15 0x10 0x00 0x11 0x6c 0x1f 0x7a 0x3c 0xb9 0x13 0xe7 0xdf 0x79 0x60 0x16 0x04 0x00 0xde 0x0d 0x90 0x16 0x4c 0x22 0xb1 0x7a 0x32 0xe6 0x92 0x0c 0xa7 0x3b 0xf5 0x12 0xfa 0x15 0xf4 0xff 0x2e 0x0f 0x90 0x16 0x4c 0x22 0xc9 0x7a 0x32 0xe6 0x92 0x0c 0xa7 0x3b 0xf5 0x12 0xfa 0x15 0xf4 0xff 0x2e 0x0f 0x90 0x16 'L"- em-   ]      m=     ]      #    -   r P  m-     r -  m      L"]   ]      z    A  t m u y  A -        l z<    y`       L" z2    ;      .   L" z2    ;      .   '

// ================================================
// 0xec96: WORD 'NPCREW' codep=0x4b3b parp=0xeca1
// ================================================
// 0xeca1: db 0x02 0x00 0x22 0x0f 0x01 0x00 0x70 0xec 0xff 0xff 0x84 0xec 0x4c 0x22 0x32 0xe6 0x92 0x0c 0x41 0x0e 0x41 0x0e 0x3d 0x0f 0xf5 0x12 0xdd 0x4a 0xf2 0x0e 0x2e 0x0f 0xf5 0x12 0xf5 0x12 0xfa 0x15 0x10 0x00 0x5d 0x17 0xfc 0x00 0xf5 0x12 0x32 0xe6 0x0a 0x6d 0x60 0x16 0x04 0x00 0x32 0x0e 0x90 0x16 0x4c 0x22 0xd2 0x9f 0x46 0x9c 0xb3 0x6b 0x1f 0x7a 0x3f 0x7a 0x32 0xe6 0x92 0x0c 0xa7 0x3b 0xf5 0x12 0x07 0x13 0xfa 0x15 0x08 0x00 0xb1 0x7a 0x60 0x16 0xee 0xff 0x2e 0x0f 0x5d 0x17 0x15 0x00 0xa4 0xaa 0x16 0x16 0xab 0x5d 0x02 0x00 0xe0 0xe5 0xe6 0x06 0xbd 0x9d 0x3d 0x0f 0x5d 0x17 0x12 0x00 0xa4 0xaa 0x16 0x16 0xcc 0x5d 0x02 0x00 0xe0 0xe5 0xe6 0x06 0xbd 0x9d 0x5d 0x17 0x0b 0x00 0x3d 0x0f 0x16 0x9c 0x2d 0xe6 0xee 0x9d 0x16 0xa6 0x32 0x0e 0x9f 0xec 0xfa 0x15 0x16 0x00 0x5d 0x17 0x0b 0x00 0x3d 0x0f 0x16 0x9c 0x5d 0x17 0x0f 0x00 0xa7 0x4f 0x00 0x9e 0x2d 0xe6 0xee 0x9d 0x2e 0xa6 0xfa 0x15 0xde 0xff 0xad 0xec 0x90 0x16 0x4c 0x22 0x5d 0x17 0xfc 0x00 0x88 0xe5 0x3f 0x7a 0x33 0xe9 0x5d 0x17 0x45 0xbe 0xd9 0x84 0x7f 0x3b 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x5d 0x17 0xfe 0x00 0x88 0xe5 0x3f 0x7a 0xf4 0x7a 0x87 0x3b 0x20 0x0f 0xb8 0x15 0x33 0xe9 0x5d 0x17 0x45 0xbe 0xd9 0x84 0xc9 0x7a 0x16 0x16 0x20 0x4e 0x00 0x00 0xf2 0xe5 0xd0 0x15 0xec 0xff 0x7f 0x3b 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x19 0xe6 0x0a 0x6d 0x23 0xe6 0x0a 0x6d 0x23 0xe6 0xe7 0x0f 0x0a 0x6d 0x20 0x0f 0x7e 0xe5 0x90 0x16 0x4c 0x22 0x5d 0x17 0x0c 0x00 0x2e 0x0f 0x2e 0x0f 0x9d 0xed 0x90 0x16 0x4c 0x22 0x5d 0x17 0x19 0x00 0x2e 0x0f 0x20 0x0f 0x9d 0xed 0x90 0x16 0x4c 0x22 0x6a 0xe5 0x74 0xe5 0x1f 0xea 0xfa 0x15 0x2a 0x00 0x57 0xed 0x20 0x0f 0x20 0x0f 0x4d 0xe8 0xfa 0x15 0x1e 0x00 0xef 0xe8 0xdb 0xec 0x8f 0x3b 0xf8 0x74 0x9c 0xe5 0xef 0xe8 0xf4 0xeb 0xf9 0xe8 0x9f 0xea 0x3d 0x0f 0x0a 0x7a 0xb8 0x3b 0xf2 0x61 0x16 0x6d 0xdf 0x79 0x90 0x16 0x4c 0x22 0xd2 0x61 0xae 0x0b 0x5d 0x17 0x13 0x00 0x2d 0x12 0x90 0x16 '  "   p     L"2   A A =    J  .         ]     2  m`   2   L"  F  k z?z2    ;         z`   . ]        ]        = ]        ]        ]   =   -     2       ]   =   ]    O  -   .         L"]     ?z3 ] E   ; z  L"]     ?z z ;    3 ] E    z   N        ; z  L"   m#  m#    m  ~   L"]   . .     L"]   .       L"j t     * W     M          ; t          =  z ; a m y  L" a  ]   -   '

// ================================================
// 0xee15: WORD 'UNK_0xee17' codep=0x224c parp=0xee17
// ================================================

void UNK_0xee17() // UNK_0xee17
{
  Push(cc_TRUE); // TRUE
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  INST_dash_SI(); // INST-SI
  Push(0x0011);
  Push(Pop() + Pop()); // +
  Push(cc__6); // 6
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  _3_star_(); // 3*
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  Push(cc__6); // 6
  _eq_SPECIE(); // =SPECIE
  UNK_0xea9c(); // UNK_0xea9c
  C_at_(); // C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  SWAP(); // SWAP
  if (Pop() == 0) Push(1); else Push(0); // NOT
  SWAP(); // SWAP
  LEAVE(); // LEAVE

  label1:
  ICLOSE(); // ICLOSE
  i++;
  } while(i<imax); // (LOOP) 0xffda

  Pop(); // DROP
  ICLOSE(); // ICLOSE
}

// 0xee59: db 0x4c 0x22 0x5d 0x17 0xfe 0x00 0x88 0xe5 0x3f 0x7a 0x33 0xe9 0x5d 0x17 0x45 0xbe 0xd9 0x84 0x16 0x16 0x20 0x4e 0x00 0x00 0xf2 0xe5 0x7f 0x3b 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x32 0x0e 0x16 0x16 0xeb 0x5d 0x02 0x00 0xe0 0xe5 0xb8 0xe6 0x90 0x16 0x4c 0x22 0x16 0x16 0x01 0x5e 0x02 0x00 0xe0 0xe5 0xf1 0x9f 0x90 0x16 0x4c 0x22 0x07 0x3f 0x1b 0x46 0x4f 0x52 0x20 0x58 0x30 0x2c 0x30 0x30 0x30 0x20 0x53 0x48 0x59 0x4e 0x45 0x55 0x4d 0x20 0x50 0x45 0x4e 0x4e 0x49 0x45 0x53 0x3f 0xf1 0x9f 0x90 0x16 0x4c 0x22 0x07 0x3f 0x04 0x54 0x48 0x45 0x20 0xf1 0x9f 0x5d 0x17 0x28 0x00 0xf2 0x0e 0x43 0x73 0x5d 0x17 0x12 0x00 0x8e 0x27 0xe6 0x06 0xdc 0x1b 0x04 0x20 0x4d 0x41 0x50 0x90 0x16 0x4c 0x22 0x16 0x16 0x34 0x5e 0x02 0x00 0xe0 0xe5 0x90 0x16 0x4c 0x22 0x20 0x0f 0x97 0x3b 0xc4 0x4b 0x90 0x16 0x4c 0x22 0x5d 0x17 0x0a 0x00 0x5d 0x17 0x14 0x00 0xc4 0x4b 0x90 0x16 0x4c 0x22 0xb4 0x0d 0x41 0x0e 0x5d 0x17 0x0a 0x00 0x60 0x0f 0x5d 0x17 0x30 0x00 0x72 0x0f 0xa2 0x0e 0x5d 0x17 0x07 0x00 0x72 0x0f 0x0a 0x6d 0x5d 0x17 0x30 0x00 0x72 0x0f 0x90 0x0e 0x5d 0x17 0x08 0x00 0x72 0x0f 0x0a 0x6d 0x5d 0x17 0xe8 0x03 0xb3 0x0f 0x90 0x16 0x4c 0x22 0x99 0xe6 0x33 0xe9 0x5d 0x17 0x99 0xee 0x03 0xef 0x89 0xee 0x7f 0x0e 0xbb 0xee 0x97 0xee 0x90 0x16 0x4c 0x22 0x6a 0xe5 0x74 0xe5 0x52 0x56 0xae 0x0b 0x3d 0x0f 0x5f 0x12 0x20 0x0f 0xa7 0x53 0x63 0x4a 0x8f 0x3b 0x89 0x11 0x5d 0x17 0x12 0x00 0xad 0x11 0xc4 0x4b 0x89 0x12 0xf5 0x12 0xfa 0x15 0x70 0x00 0xeb 0xee 0xf5 0xee 0x37 0xef 0x20 0x0f 0x20 0x0f 0x4d 0xe8 0xfa 0x15 0x5c 0x00 0x06 0x15 0xf0 0x0d 0x5d 0x17 0xa9 0xc2 0xd9 0x84 0xfa 0x15 0x3e 0x00 0xb7 0x10 0x5d 0x17 0xed 0xc2 0xd9 0x84 0x9f 0x3b 0x5d 0x17 0x73 0xc2 0xd9 0x84 0x9c 0xe5 0x5d 0x17 0x1c 0x00 0xf2 0x0e 0x5d 0x17 0x2e 0x00 0x72 0x0f 0xa9 0x81 0x1f 0x7a 0x9e 0xa9 0xae 0x0b 0xad 0x74 0x16 0x6d 0x8b 0x75 0xdf 0x79 0x11 0x6c 0x1f 0x7a 0x3c 0xb9 0xdf 0x79 0x13 0xe7 0x60 0x16 0x0e 0x00 0xde 0x0d 0x32 0x0e 0xdf 0xee 0xb8 0xe6 0x8f 0x3b 0x7e 0xe5 0x60 0x16 0x06 0x00 0x32 0x0e 0x79 0xee 0xdf 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0x72 0x5e 0x02 0x00 0xe0 0xe5 0xf1 0x9f 0x16 0x16 0xa4 0x5e 0x02 0x00 0xe0 0xe5 0xf1 0x9f 0x90 0x16 0x4c 0x22 0x07 0x3f 0x22 0x4f 0x46 0x2c 0x20 0x53 0x41 0x59 0x20 0x58 0x58 0x20 0x55 0x4e 0x49 0x54 0x53 0x20 0x4f 0x46 0x20 0x53 0x48 0x59 0x4e 0x45 0x55 0x4d 0x20 0x4d 0x49 0x47 0x48 0x54 0x20 0xf1 0x9f 0x16 0x16 0xd7 0x5e 0x02 0x00 0xe0 0xe5 0xf1 0x9f 0x90 0x16 0x4c 0x22 0xb4 0x0d 0x5d 0x17 0x0a 0x00 0x60 0x0f 0x5d 0x17 0x30 0x00 0x72 0x0f 0xa2 0x0e 0x5d 0x17 0x0b 0x00 0x72 0x0f 0x0a 0x6d 0x5d 0x17 0x30 0x00 0x72 0x0f 0x90 0x0e 0x5d 0x17 0x0c 0x00 0x72 0x0f 0x0a 0x6d 0x90 0x16 0x4c 0x22 0x99 0xe6 0x33 0xe9 0x5d 0x17 0x01 0xf0 0x34 0xf0 0xe7 0xef 0xff 0xef 0xb9 0x9f 0x90 0x16 0x4c 0x22 0xed 0x94 0xcf 0x64 0x2f 0x7a 0x3f 0x7a 0x82 0x99 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x6a 0xe5 0x74 0xe5 0x52 0x56 0xae 0x0b 0x87 0x3b 0x5f 0x12 0x20 0x0f 0x5d 0x17 0x14 0x00 0xc4 0x4b 0x89 0x12 0xf5 0x12 0xfa 0x15 0x3e 0x00 0xf5 0xee 0x41 0x0e 0x60 0xf0 0x5d 0x17 0xf1 0xff 0x20 0x0f 0x4d 0xe8 0xfa 0x15 0x2a 0x00 0x5d 0x17 0x0a 0x00 0xb3 0x0f 0x41 0x0e 0x97 0x3b 0x31 0xe7 0xfa 0x15 0x0c 0x00 0x97 0x3b 0xb7 0xe7 0x9c 0xe5 0x60 0x16 0x0c 0x00 0x32 0x0e 0xdf 0xee 0xb8 0xe6 0x8f 0x3b 0x7e 0xe5 0x60 0x16 0x04 0x00 0x79 0xee 0xdf 0x79 0x90 0x16 0x4c 0x22 0x6a 0xe5 0x74 0xe5 0x2e 0x0f 0x2b 0xea 0x3d 0x0f 0x2b 0xea 0x3e 0x13 0x3d 0x0f 0x0a 0x7a 0xfa 0x15 0x1a 0x00 0x23 0xe6 0x92 0x0c 0x23 0xe6 0xe7 0x0f 0x92 0x0c 0x72 0x0f 0x35 0x10 0x41 0x0e 0x14 0xe6 0x0a 0x6d 0x44 0x56 0x16 0x6d 0xdf 0x79 0x90 0x16 0x4c 0x22 0x5d 0x17 0x2d 0x00 0x54 0xe5 0xfa 0x15 0x14 0x00 0x16 0x16 0x08 0x5f 0x02 0x00 0xe0 0xe5 0xb8 0xe6 0x16 0x16 0x10 0x27 0x00 0x00 0xf2 0xe5 0x90 0x16 0x4c 0x22 0x52 0x56 0xae 0x0b 0x87 0x3b 0x5f 0x12 0x15 0xee 0xf5 0x12 0x20 0x0f 0x3d 0x0f 0xc4 0x4b 0xf5 0x12 0x6a 0xe5 0x74 0xe5 0xfa 0x15 0x2e 0x00 0x6f 0xed 0x20 0x0f 0x20 0x0f 0x4d 0xe8 0xfa 0x15 0x1e 0x00 0xb3 0xed 0xef 0xe8 0xdb 0xec 0x97 0x3b 0xf8 0x74 0x9c 0xe5 0xef 0xe8 0xf4 0xeb 0xf9 0xe8 0x9f 0xea 0x34 0xec 0x59 0xee 0x3d 0x0f 0x0a 0x7a 0x60 0x16 0x0a 0x00 0x15 0xee 0xfa 0x15 0x04 0x00 0xc1 0xed 0xdf 0x79 0x90 0x16 0x4c 0x22 0xa6 0x49 0x20 0x53 0x1f 0x7a 0x62 0x74 0x5d 0x17 0x11 0x00 0x72 0x0f 0x5d 0x17 0x12 0x00 0x20 0x0f 0xb8 0x15 0x50 0x0e 0x7f 0x0e 0x72 0x0f 0x2f 0x7a 0x34 0x75 0x97 0x3b 0x5f 0x12 0xfa 0x15 0x0c 0x00 0xb4 0x0d 0xde 0x0d 0x8b 0x75 0x90 0x0e 0x4a 0x17 0xdf 0x79 0x7f 0x3b 0x5c 0x15 0xde 0xff 0x32 0x0e 0xdf 0x79 0x90 0x16 0x4c 0x22 0x88 0xe5 0x8e 0xf1 0x98 0x9e 0x8b 0x75 0x06 0x0e 0x1f 0x7a 0x5d 0x17 0x55 0xbe 0xd9 0x84 0xdf 0x79 0x16 0x16 0x40 0x1f 0x00 0x00 0xf2 0xe5 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x30 0x50 0x41 0x0e 0x9d 0x86 0x49 0x59 0x16 0x6d 0x90 0x16 0x4c 0x22 0xf4 0xf1 0x5d 0x17 0x63 0x00 0xd0 0xf1 0x8e 0xf1 0x1f 0x7a 0x5d 0x17 0xe9 0xc1 0xd9 0x84 0x5d 0x17 0xb8 0xc1 0xd9 0x84 0xdf 0x79 0xd2 0x9f 0x5d 0x17 0x63 0x00 0xd0 0xf1 0x90 0x16 0x4c 0x22 0xf4 0xf1 0x5d 0x17 0x62 0x00 0xd0 0xf1 0x2e 0x0f 0x24 0x5f 0x23 0x6d 0x90 0x16 0x4c 0x22 0x24 0x5f 0x65 0x6d 0x90 0x16 'L"]     ?z3 ] E      N    ; z  L"2    ]        L"   ^        L" ? FOR X0,000 SHYNEUM PENNIES?    L" ? THE   ] (   Cs]    '      MAP  L"  4^      L"   ; K  L"]   ]    K  L"  A ]   ` ] 0 r   ]   r  m] 0 r   ]   r  m]       L"  3 ]              L"j t RV  = _    ScJ ;  ]      K      p     7     M   \     ]       >   ]      ;] s     ]     ] . r    z     t m u y l z<  y  `     2      ;~ `   2 y  y  L"  r^         ^        L" ?"OF, SAY XX UNITS OF SHYNEUM MIGHT      ^        L"  ]   ` ] 0 r   ]   r  m] 0 r   ]   r  m  L"  3 ]   4         L"   d/z?z  =  z  L"j t RV   ;_   ]    K      >   A ` ]     M   * ]     A  ;1      ;    `   2      ;~ `   y  y  L"j t . + = + > =  z    #   #     r 5 A    mDV m y  L"] - T        _         '      L"RV   ;_       =  K  j t   . o     M            ; t          4 Y =  z`            y  L" I S zbt]   r ]       P  r /z4u ;_          u  J  y;\   2  y  L"       u   z] U    y  @     =  z  L"0PA   IY m  L"  ] c      z]     ]      y  ] c     L"  ] b   . $_#m  L"$_em  '

// ================================================
// 0xf242: WORD '#>PROTEST' codep=0x4b3b parp=0xf250
// ================================================
// 0xf250: db 0x03 0x00 0x3c 0xf2 0x01 0x00 0x04 0xf2 0x02 0x00 0x2a 0xf2 0x04 0x00 0x48 0x3a '  <       *   H:'

// ================================================
// 0xf260: WORD '#>PRO' codep=0x224c parp=0xf26a
// ================================================
// entry

void _n__gt_PRO() // #>PRO
{
  UNK_0xee17(); // UNK_0xee17
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _n__gt_PROTEST(); // #>PROTEST
  return;

  label1:
  Pop(); // DROP
}

// 0xf27c: db 0x4c 0x22 0x16 0x16 0x00 0x60 0x02 0x00 0xe0 0xe5 0x90 0x16 0x4c 0x22 0x6a 0xe5 0x74 0xe5 0x7c 0xf2 0xb8 0xe6 0x20 0x0f 0x5d 0x17 0x64 0x00 0x4d 0xe8 0xfa 0x15 0x34 0x00 0xd2 0x9f 0xa7 0x4f 0x9d 0x86 0x48 0x50 0x5d 0x17 0xa9 0x4f 0x16 0x6d 0x46 0x9c 0x16 0x16 0xd8 0x60 0x02 0x00 0xe0 0xe5 0xf1 0x9f 0x16 0x16 0xf2 0x60 0x02 0x00 0xe0 0xe5 0xf1 0x9f 0xdd 0xa3 0x32 0x0e 0x97 0x49 0x32 0x0e 0x3f 0x90 0x60 0x16 0x04 0x00 0x74 0xf0 0x3c 0xe6 0x57 0x6d 0x05 0xe7 0xdf 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0x08 0x61 0x02 0x00 0xe0 0xe5 0x90 0x16 0x4c 0x22 0x16 0x16 0x3f 0x61 0x02 0x00 0xe0 0xe5 0x90 0x16 0x4c 0x22 0x6a 0xe5 0x74 0xe5 0xdc 0xf2 0xb8 0xe6 0x5d 0x17 0xc4 0x09 0xef 0x2a 0x93 0x61 0xae 0x0b 0xd9 0x84 0x7b 0x61 0xae 0x0b 0x07 0x13 0xfa 0x15 0x1a 0x00 0xcb 0x5e 0x57 0x6d 0xe8 0xf2 0xb8 0xe6 0x5d 0x17 0xc4 0x09 0xef 0x2a 0x3c 0xe6 0x57 0x6d 0x18 0x5c 0x57 0x6d 0x7b 0xe7 0xdf 0x79 0x90 0x16 0x4c 0x22 0x16 0x16 0xa7 0x61 0x02 0x00 0xe0 0xe5 0x90 0x16 0x4c 0x22 0x07 0x3f 0x25 0x4f 0x46 0x20 0x31 0x2f 0x58 0x20 0x4f 0x46 0x20 0x59 0x4f 0x55 0x52 0x20 0x53 0x48 0x59 0x4e 0x45 0x55 0x4d 0x2e 0x20 0x44 0x4f 0x20 0x59 0x4f 0x55 0x20 0x41 0x47 0x52 0x45 0x45 0x3f 0x90 0x16 0x4c 0x22 0x20 0x0f 0x87 0x3b 0xc4 0x4b 0x89 0x12 0xfa 0x15 0x08 0x00 0x3d 0x0f 0x60 0x16 0x04 0x00 0x87 0x3b 0x41 0x0e 0x5d 0x17 0x30 0x00 0x72 0x0f 0x3c 0xf3 0x32 0x0e 0x8f 0x3b 0x72 0x0f 0x0a 0x6d 0x90 0x16 0x4c 0x22 0x52 0x56 0xae 0x0b 0x3d 0x0f 0x2d 0x12 0xfa 0x15 0x4a 0x00 0x68 0xf3 0x30 0xf3 0xb8 0xe6 0x3c 0xf3 0xf1 0x9f 0x20 0x0f 0x5d 0x17 0x64 0x00 0x4d 0xe8 0xfa 0x15 0x28 0x00 0x97 0x3b 0x69 0xe7 0xad 0x74 0xae 0x0b 0x7f 0x3b 0x0a 0x7a 0xf2 0x0e 0x4c 0x0f 0x97 0x3b 0xb7 0xe7 0x9c 0xe5 0xd2 0x9f 0x16 0x16 0x1e 0x62 0x02 0x00 0xe0 0xe5 0xf1 0x9f 0x60 0x16 0x0e 0x00 0x32 0x0e 0x18 0x5c 0x57 0x6d 0xa7 0x3b 0x4b 0x55 0x16 0x6d 0x90 0x16 0x4c 0x22 0x48 0x50 0x9d 0x86 0x98 0x9e 0x5d 0x17 0x45 0xbe 0xd9 0x84 0x16 0x16 0x20 0x4e 0x00 0x00 0xf2 0xe5 0xb1 0x7a 0x90 0x16 0x29 0x1d 0x00 0x00 0x4c 0x22 0x04 0xf4 0xae 0x0b 0x07 0x13 0xe3 0x51 0xae 0x0b 0x89 0x12 0xf5 0x12 0xfa 0x15 0x26 0x00 0x5d 0x17 0xc9 0x00 0x88 0xe5 0x3f 0x7a 0xea 0xf3 0xea 0xf3 0xea 0xf3 0x7f 0x3b 0x0a 0x7a 0xb9 0x5f 0x57 0x6d 0x18 0x5c 0x57 0x6d 0x3c 0xe6 0x57 0x6d 0x04 0xf4 0x57 0x6d 0x8d 0x83 0x90 0x16 0x4c 0x22 0x5d 0x17 0xd7 0x00 0x88 0xe5 0x3f 0x7a 0xea 0xf3 0x7f 0x3b 0x0a 0x7a 0x20 0x0f 0x5d 0x17 0x64 0x00 0x4d 0xe8 0xfa 0x15 0x06 0x00 0x74 0x51 0x57 0x6d 0xb9 0x5f 0x57 0x6d 0x18 0x5c 0x57 0x6d 0x3c 0xe6 0x57 0x6d 0x90 0x16 0x29 0x1d 0x01 0xc3 0xe9 0x29 0x1d 0x02 0x4f 0xef 0x88 0xf0 0x29 0x1d 0x02 0x0a 0xf4 0x44 0xf4 0x29 0x1d 0x03 0x1a 0xf1 0x64 0xeb 0xe6 0xf0 0x29 0x1d 0x02 0x59 0xe9 0xd1 0xed 0x29 0x1d 0x02 0x59 0xe9 0xd1 0xed 0x29 0x1d 0x02 0xf6 0xf2 0x8a 0xf2 0x29 0x1d 0x01 0x3a 0xf1 0x29 0x1d 0x01 0x94 0xf3 'L"   `      L"j t |     ] d M   4    O  HP]  O mF    `         `        2  I2 ? `   t < Wm   y  L"   a      L"  ?a      L"j t     ]    * a    {a         ^Wm    ]    *< Wm \Wm{  y  L"   a      L" ?%OF 1/X OF YOUR SHYNEUM. DO YOU AGREE?  L"   ; K      = `    ;A ] 0 r < 2  ;r  m  L"RV  = -   J h 0   <     ] d M   (  ;i  t  ; z  L  ;         b      `   2  \Wm ;KU m  L"HP    ] E      N     z  )   L"       Q        & ]     ?z      ; z _Wm \Wm< Wm  Wm    L"]     ?z  ; z  ] d M     tQWm _Wm \Wm< Wm  )    )  O   )    D )    d   )  Y   )  Y   )      )  : )    '

// ================================================
// 0xf4ab: WORD 'UNK_0xf4ad' codep=0x224c parp=0xf4ad
// ================================================

void UNK_0xf4ad() // UNK_0xf4ad
{
  _ask_DUP(); // ?DUP
  if (Pop() == 0) return;
  Push(pp_UNK_0xe63e); // UNK_0xe63e
  _099(); // 099
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
  Push(pp_UNK_0xe63e); // UNK_0xe63e
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

// 0xf4db: db 0x16 0x16 0x3c 0x62 0x02 0x00 0xe0 0xe5 '  <b    '

// ================================================
// 0xf4e3: WORD 'SA-CASE' codep=0x4b3b parp=0xf4ef
// ================================================
// 0xf4ef: db 0x0a 0x00 0x22 0x0f 0x01 0x00 0x72 0xf4 0x02 0x00 0x72 0xf4 0x07 0x00 0x77 0xf4 0x06 0x00 0xa8 0xf4 0x08 0x00 0x8e 0xf4 0x0b 0x00 0x95 0xf4 0x0a 0x00 0xa3 0xf4 0x15 0x00 0x9c 0xf4 0x16 0x00 0x7e 0xf4 0x12 0x00 0x85 0xf4 '  "   r   r   w                       ~     '

// ================================================
// 0xf51b: WORD 'UNK_0xf51d' codep=0x224c parp=0xf51d
// ================================================

void UNK_0xf51d() // UNK_0xf51d
{

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_OK_dash_TALK); // OK-TALK
  _2_at_(); // 2@
  D_gt_(); // D>
  _ask_TERMINAL(); // ?TERMINAL
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
}


// ================================================
// 0xf531: WORD '(XCOMM)' codep=0x224c parp=0xf53d
// ================================================
// entry

void _ro_XCOMM_rc_() // (XCOMM)
{
  UNK_0xf51d(); // UNK_0xf51d
  Push(pp__ro_AORIGI); // (AORIGI
  _at__gt_C_plus_S(); // @>C+S
  _at_INST_dash_S(); // @INST-S
  ICLOSE(); // ICLOSE
  SA_dash_CASE(); // SA-CASE
  UNK_0xf4ad(); // UNK_0xf4ad
  UNK_0xf51d(); // UNK_0xf51d
}

// 0xf54f: db 0x58 0x43 0x4f 0x4d 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'XCOM-VOC_________ '
  