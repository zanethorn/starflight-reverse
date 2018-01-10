// ====== OVERLAY 'MAP-OV' ======
// store offset = 0xe340
// overlay size   = 0x1220

#include"../../emul/cpu.h"

#include"../data.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xe356  codep:0x7420 parp:0xe356 size:0x0003 C-string:'UNK_0xe356'
//      UNK_0xe35b  codep:0x7420 parp:0xe35b size:0x0003 C-string:'UNK_0xe35b'
//      UNK_0xe360  codep:0x7420 parp:0xe360 size:0x0003 C-string:'UNK_0xe360'
//      UNK_0xe365  codep:0x7420 parp:0xe365 size:0x0003 C-string:'UNK_0xe365'
//      UNK_0xe36a  codep:0x1d29 parp:0xe36a size:0x0002 C-string:'UNK_0xe36a'
//      UNK_0xe36e  codep:0x2214 parp:0xe36e size:0x0002 C-string:'UNK_0xe36e'
//      UNK_0xe372  codep:0x1d29 parp:0xe372 size:0x0002 C-string:'UNK_0xe372'
//      UNK_0xe376  codep:0x1d29 parp:0xe376 size:0x0002 C-string:'UNK_0xe376'
//      UNK_0xe37a  codep:0x1d29 parp:0xe37a size:0x0002 C-string:'UNK_0xe37a'
//      UNK_0xe37e  codep:0x1d29 parp:0xe37e size:0x0002 C-string:'UNK_0xe37e'
//      UNK_0xe382  codep:0x1d29 parp:0xe382 size:0x0002 C-string:'UNK_0xe382'
//      UNK_0xe386  codep:0x1d29 parp:0xe386 size:0x0002 C-string:'UNK_0xe386'
//      UNK_0xe38a  codep:0x1d29 parp:0xe38a size:0x0002 C-string:'UNK_0xe38a'
//      UNK_0xe38e  codep:0x1d29 parp:0xe38e size:0x0002 C-string:'UNK_0xe38e'
//      UNK_0xe392  codep:0x7420 parp:0xe392 size:0x0003 C-string:'UNK_0xe392'
//      UNK_0xe397  codep:0x7420 parp:0xe397 size:0x0003 C-string:'UNK_0xe397'
//      UNK_0xe39c  codep:0x7420 parp:0xe39c size:0x0003 C-string:'UNK_0xe39c'
//      UNK_0xe3a1  codep:0x7420 parp:0xe3a1 size:0x0003 C-string:'UNK_0xe3a1'
//      UNK_0xe3a6  codep:0x7420 parp:0xe3a6 size:0x000b C-string:'UNK_0xe3a6'
//      UNK_0xe3b3  codep:0x1d29 parp:0xe3b3 size:0x000c C-string:'UNK_0xe3b3'
//      UNK_0xe3c1  codep:0x1d29 parp:0xe3c1 size:0x0002 C-string:'UNK_0xe3c1'
//      UNK_0xe3c5  codep:0x224c parp:0xe3c5 size:0x002c C-string:'UNK_0xe3c5'
//      UNK_0xe3f3  codep:0x224c parp:0xe3f3 size:0x007c C-string:'UNK_0xe3f3'
//      UNK_0xe471  codep:0x224c parp:0xe471 size:0x0024 C-string:'UNK_0xe471'
//      UNK_0xe497  codep:0x224c parp:0xe497 size:0x0012 C-string:'UNK_0xe497'
//      UNK_0xe4ab  codep:0x1d29 parp:0xe4ab size:0x0002 C-string:'UNK_0xe4ab'
//      UNK_0xe4af  codep:0x1d29 parp:0xe4af size:0x0002 C-string:'UNK_0xe4af'
//      UNK_0xe4b3  codep:0x1d29 parp:0xe4b3 size:0x0002 C-string:'UNK_0xe4b3'
//      UNK_0xe4b7  codep:0x1d29 parp:0xe4b7 size:0x0002 C-string:'UNK_0xe4b7'
//      UNK_0xe4bb  codep:0x224c parp:0xe4bb size:0x0020 C-string:'UNK_0xe4bb'
//      UNK_0xe4dd  codep:0x224c parp:0xe4dd size:0x0014 C-string:'UNK_0xe4dd'
//      UNK_0xe4f3  codep:0x224c parp:0xe4f3 size:0x003a C-string:'UNK_0xe4f3'
//      UNK_0xe52f  codep:0x224c parp:0xe52f size:0x0018 C-string:'UNK_0xe52f'
//      UNK_0xe549  codep:0x224c parp:0xe549 size:0x003a C-string:'UNK_0xe549'
//      UNK_0xe585  codep:0x224c parp:0xe585 size:0x00a2 C-string:'UNK_0xe585'
//      UNK_0xe629  codep:0x224c parp:0xe629 size:0x000a C-string:'UNK_0xe629'
//      UNK_0xe635  codep:0x224c parp:0xe635 size:0x00eb C-string:'UNK_0xe635'
//      UNK_0xe722  codep:0x224c parp:0xe722 size:0x0042 C-string:'UNK_0xe722'
//      UNK_0xe766  codep:0x224c parp:0xe766 size:0x004c C-string:'UNK_0xe766'
//      UNK_0xe7b4  codep:0x224c parp:0xe7b4 size:0x0048 C-string:'UNK_0xe7b4'
//      UNK_0xe7fe  codep:0x224c parp:0xe7fe size:0x004e C-string:'UNK_0xe7fe'
//      UNK_0xe84e  codep:0x224c parp:0xe84e size:0x0014 C-string:'UNK_0xe84e'
//      UNK_0xe864  codep:0x224c parp:0xe864 size:0x0036 C-string:'UNK_0xe864'
//      UNK_0xe89c  codep:0x224c parp:0xe89c size:0x0048 C-string:'UNK_0xe89c'
//      UNK_0xe8e6  codep:0x224c parp:0xe8e6 size:0x0062 C-string:'UNK_0xe8e6'
//      UNK_0xe94a  codep:0x224c parp:0xe94a size:0x0006 C-string:'UNK_0xe94a'
//      UNK_0xe952  codep:0x224c parp:0xe952 size:0x008c C-string:'UNK_0xe952'
//      UNK_0xe9e0  codep:0x224c parp:0xe9e0 size:0x0022 C-string:'UNK_0xe9e0'
//      UNK_0xea04  codep:0x224c parp:0xea04 size:0x0034 C-string:'UNK_0xea04'
//      UNK_0xea3a  codep:0x224c parp:0xea3a size:0x0016 C-string:'UNK_0xea3a'
//      UNK_0xea52  codep:0x224c parp:0xea52 size:0x0028 C-string:'UNK_0xea52'
//      UNK_0xea7c  codep:0x224c parp:0xea7c size:0x000e C-string:'UNK_0xea7c'
//      UNK_0xea8c  codep:0x224c parp:0xea8c size:0x0042 C-string:'UNK_0xea8c'
//      UNK_0xead0  codep:0x224c parp:0xead0 size:0x001e C-string:'UNK_0xead0'
//      UNK_0xeaf0  codep:0x224c parp:0xeaf0 size:0x0055 C-string:'UNK_0xeaf0'
//      UNK_0xeb47  codep:0x224c parp:0xeb47 size:0x003c C-string:'UNK_0xeb47'
//      UNK_0xeb85  codep:0x224c parp:0xeb85 size:0x0040 C-string:'UNK_0xeb85'
//      UNK_0xebc7  codep:0x224c parp:0xebc7 size:0x0046 C-string:'UNK_0xebc7'
//      UNK_0xec0f  codep:0x224c parp:0xec0f size:0x002b C-string:'UNK_0xec0f'
//      UNK_0xec3c  codep:0x224c parp:0xec3c size:0x002a C-string:'UNK_0xec3c'
//           NOMAP  codep:0x224c parp:0xec70 size:0x0012 C-string:'NOMAP'
//      UNK_0xec84  codep:0x224c parp:0xec84 size:0x0024 C-string:'UNK_0xec84'
//      UNK_0xecaa  codep:0x224c parp:0xecaa size:0x0044 C-string:'UNK_0xecaa'
//      UNK_0xecf0  codep:0x1d29 parp:0xecf0 size:0x0002 C-string:'UNK_0xecf0'
//      FLUX-ARRAY  codep:0x1d29 parp:0xed01 size:0x007a C-string:'FLUX_dash_ARRAY'
//      UNK_0xed7d  codep:0x224c parp:0xed7d size:0x000c C-string:'UNK_0xed7d'
//      UNK_0xed8b  codep:0x224c parp:0xed8b size:0x0006 C-string:'UNK_0xed8b'
//      UNK_0xed93  codep:0x224c parp:0xed93 size:0x0006 C-string:'UNK_0xed93'
//      UNK_0xed9b  codep:0x224c parp:0xed9b size:0x0008 C-string:'UNK_0xed9b'
//      UNK_0xeda5  codep:0x224c parp:0xeda5 size:0x0008 C-string:'UNK_0xeda5'
//      UNK_0xedaf  codep:0x224c parp:0xedaf size:0x0006 C-string:'UNK_0xedaf'
//      UNK_0xedb7  codep:0x224c parp:0xedb7 size:0x001c C-string:'UNK_0xedb7'
//      UNK_0xedd5  codep:0x224c parp:0xedd5 size:0x0012 C-string:'UNK_0xedd5'
//      UNK_0xede9  codep:0x224c parp:0xede9 size:0x0018 C-string:'UNK_0xede9'
//      UNK_0xee03  codep:0x224c parp:0xee03 size:0x0016 C-string:'UNK_0xee03'
//      UNK_0xee1b  codep:0x224c parp:0xee1b size:0x000a C-string:'UNK_0xee1b'
//      UNK_0xee27  codep:0x224c parp:0xee27 size:0x0016 C-string:'UNK_0xee27'
//      UNK_0xee3f  codep:0x224c parp:0xee3f size:0x0010 C-string:'UNK_0xee3f'
//      UNK_0xee51  codep:0x224c parp:0xee51 size:0x005a C-string:'UNK_0xee51'
//      UNK_0xeead  codep:0x224c parp:0xeead size:0x0008 C-string:'UNK_0xeead'
//      UNK_0xeeb7  codep:0x224c parp:0xeeb7 size:0x0032 C-string:'UNK_0xeeb7'
//      UNK_0xeeeb  codep:0x224c parp:0xeeeb size:0x003c C-string:'UNK_0xeeeb'
//      UNK_0xef29  codep:0x224c parp:0xef29 size:0x0050 C-string:'UNK_0xef29'
//        DO-TMAPS  codep:0x224c parp:0xef86 size:0x005a C-string:'DO_dash_TMAPS'
//      UNK_0xefe2  codep:0x224c parp:0xefe2 size:0x000a C-string:'UNK_0xefe2'
//      UNK_0xefee  codep:0x224c parp:0xefee size:0x0006 C-string:'UNK_0xefee'
//      UNK_0xeff6  codep:0x224c parp:0xeff6 size:0x0010 C-string:'UNK_0xeff6'
//      UNK_0xf008  codep:0x224c parp:0xf008 size:0x0010 C-string:'UNK_0xf008'
//      UNK_0xf01a  codep:0x224c parp:0xf01a size:0x0022 C-string:'UNK_0xf01a'
//      KEY>ACTION  codep:0x4b3b parp:0xf04b size:0x0010 C-string:'KEY_gt_ACTION'
//      UNK_0xf05d  codep:0x224c parp:0xf05d size:0x0026 C-string:'UNK_0xf05d'
//      UNK_0xf085  codep:0x224c parp:0xf085 size:0x0094 C-string:'UNK_0xf085'
//      UNK_0xf11b  codep:0x224c parp:0xf11b size:0x0014 C-string:'UNK_0xf11b'
//      UNK_0xf131  codep:0x224c parp:0xf131 size:0x0020 C-string:'UNK_0xf131'
//      (/STARMAP)  codep:0x224c parp:0xf160 size:0x0000 C-string:'_ro__slash_STARMAP_rc_'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__star_MAPSCA; // *MAPSCA
extern const unsigned short int cc_NULL_dash_IC; // NULL-IC
extern const unsigned short int cc_SYS_dash_ICO; // SYS-ICO
extern const unsigned short int pp__dash_END; // -END
extern const unsigned short int pp__n_IN; // #IN
extern const unsigned short int pp_VIN; // VIN
extern const unsigned short int pp_VOUT; // VOUT
extern const unsigned short int pp_OIN; // OIN
extern const unsigned short int pp_OOUT; // OOUT
extern const unsigned short int pp_IsOPEN; // ?OPEN
extern const unsigned short int pp_LOCRADI; // LOCRADI
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_XORMODE; // XORMODE
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp_XLLDEST; // XLLDEST
extern const unsigned short int pp_YLLDEST; // YLLDEST
extern const unsigned short int pp_ILOCAL; // ILOCAL
extern const unsigned short int pp_IINDEX; // IINDEX
extern const unsigned short int pp__star_GLOBAL; // *GLOBAL
extern const unsigned short int pp_CONTEXT_3; // CONTEXT_3
extern const unsigned short int pp_BVIS; // BVIS
extern const unsigned short int pp_LVIS; // LVIS
extern const unsigned short int pp_FTRIG; // FTRIG
extern const unsigned short int pp_LKEY; // LKEY
extern const unsigned short int pp_ESC_dash_EN; // ESC-EN
extern const unsigned short int pp_XABS; // XABS
extern const unsigned short int pp_YABS; // YABS
extern const unsigned short int pp_STARDAT; // STARDAT
extern const unsigned short int pp_PAST; // PAST
extern const unsigned short int pp_TMAP; // TMAP
extern const unsigned short int pp_EYEXY; // EYEXY
extern const unsigned short int pp_NAV_dash_TIM; // NAV-TIM
extern const unsigned short int pp_KEYTIME; // KEYTIME
extern const unsigned short int pp_LKEYTIM; // LKEYTIM
extern const unsigned short int pp_XWLD_c_XP; // XWLD:XP
extern const unsigned short int pp_YWLD_c_YP; // YWLD:YP
extern const unsigned short int pp_ANCHOR; // ANCHOR
extern const unsigned short int pp_LSCAN; // LSCAN
extern Color BLACK; // BLACK
extern Color GREY1; // GREY1
extern Color GREY2; // GREY2
extern Color BLUE; // BLUE
extern Color LT_dash_BLUE; // LT-BLUE
extern Color PINK; // PINK
extern Color ORANGE; // ORANGE
extern Color WHITE; // WHITE
extern IFieldType INST_dash_X; // INST-X
extern IFieldType INST_dash_Y; // INST-Y
void _star__slash_(); // */
void ABS(); // ABS
void MAX(); // MAX
void MOD(); // MOD
void MIN(); // MIN
void D_st_(); // D<
void _n_(); // #
void _n__gt_(); // #>
void _st__n_(); // <#
void DrawR(); // .R
void MS(); // MS
void _2OVER(); // 2OVER
void D_dash_(); // D-
void D0_eq_(); // D0=
void D_gt_(); // D>
void WITHIN(); // WITHIN
void _gt_FLAG(); // >FLAG
void RRND(); // RRND
void SQRT(); // SQRT
void C_ex__2(); // C!_2
void Store_2(); // !_2
void _plus__ex__2(); // +!_2
void _1_dot_5_ex__2(); // 1.5!_2
void _2_ex__2(); // 2!_2
void StoreD(); // D!
void ON_2(); // ON_2
void _099(); // 099
void FILL_2(); // FILL_2
void GetRECORD(); // @RECORD
void GetINST_dash_C(); // @INST-C
void GetINST_dash_S(); // @INST-S
void ICLOSE(); // ICLOSE
void _star_CLOSE(); // *CLOSE
void _gt_C_plus_S(); // >C+S
void IOPEN(); // IOPEN
void IsLAST(); // ?LAST
void IsFIRST(); // ?FIRST
void INEXT(); // INEXT
void IPREV(); // IPREV
void ILAST(); // ILAST
void _gt_INSERT(); // >INSERT
void IEXTRAC(); // IEXTRAC
void SELECT_dash_(); // SELECT-
void IFIND(); // IFIND
void _1PIX(); // 1PIX
void _2PIX(); // 2PIX
void IsCGA(); // ?CGA
void StoreCOLOR(); // !COLOR
void RNDCLR(); // RNDCLR
void DARK(); // DARK
void LLINE(); // LLINE
void DrawCIRCLE_1(); // .CIRCLE_1
void _gt_1FONT(); // >1FONT
void SETCLIP(); // SETCLIP
void DCLIPSE(); // DCLIPSE
void _gt_DISPLA(); // >DISPLA
void _gt_HIDDEN(); // >HIDDEN
void SAVE_dash_SC(); // SAVE-SC
void SCR_dash_RES(); // SCR-RES
void StoreVISWIN(); // !VISWIN
void _gt_1ICONF(); // >1ICONF
void GetIX(); // @IX
void GetIY(); // @IY
void GetID(); // @ID
void GetIC(); // @IC
void GetIL(); // @IL
void GetIH(); // @IH
void DrawCIRCLE_2(); // .CIRCLE_2
void POINT_gt_I(); // POINT>I
void IsICONS_dash__1(); // ?ICONS-_1
void IsICON_eq_I(); // ?ICON=I
void IsICONSI(); // ?ICONSI
void ORGLIST(); // ORGLIST
void POS_dot_(); // POS.
void POLY_dash_WI(); // POLY-WI
void CLICK(); // CLICK
void POLY_dash_ER(); // POLY-ER
void DrawTTY(); // .TTY
void IsMRC(); // ?MRC
void XYSCAN(); // XYSCAN
void IsTRIG(); // ?TRIG
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _slash_(); // /
void _dash_(); // -
void D_plus_(); // D+
void _gt_(); // >
void _0_st_(); // 0<
void TOGGLE(); // TOGGLE
void TIME(); // TIME
void _1_dot_5_at_(); // 1.5@
void GetDS(); // @DS
void CI(); // CI
void LPLOT(); // LPLOT
void LXPLOT(); // LXPLOT
void CLIPPER(); // CLIPPER
void BLT(); // BLT
void IsINVIS(); // ?INVIS
void WLD_gt_SCR(); // WLD>SCR


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xe36a = 0xe36a; // UNK_0xe36a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe372 = 0xe372; // UNK_0xe372 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe376 = 0xe376; // UNK_0xe376 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe37a = 0xe37a; // UNK_0xe37a size: 2
// {0x18, 0x01}

const unsigned short int pp_UNK_0xe37e = 0xe37e; // UNK_0xe37e size: 2
// {0x48, 0x02}

const unsigned short int pp_UNK_0xe382 = 0xe382; // UNK_0xe382 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe386 = 0xe386; // UNK_0xe386 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe38a = 0xe38a; // UNK_0xe38a size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe38e = 0xe38e; // UNK_0xe38e size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe3b3 = 0xe3b3; // UNK_0xe3b3 size: 12
// {0x20, 0x10, 0x81, 0x40, 0x3b, 0x02, 0x10, 0x88, 0x40, 0x20, 0x00, 0x81}

const unsigned short int pp_UNK_0xe3c1 = 0xe3c1; // UNK_0xe3c1 size: 2
// {0x80, 0xf7}

const unsigned short int pp_UNK_0xe4ab = 0xe4ab; // UNK_0xe4ab size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe4af = 0xe4af; // UNK_0xe4af size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe4b3 = 0xe4b3; // UNK_0xe4b3 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xe4b7 = 0xe4b7; // UNK_0xe4b7 size: 2
// {0x3a, 0x20}

const unsigned short int pp_UNK_0xecf0 = 0xecf0; // UNK_0xecf0 size: 2
// {0x3a, 0x20}

const unsigned short int pp_FLUX_dash_ARRAY = 0xed01; // FLUX-ARRAY size: 122
// {0x00, 0x00, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0x1b, 0x06, 0x44, 0x45, 0x42, 0x52, 0x49, 0x53, 0x90, 0x16, 0x00, 0x00, 0x89, 0x28, 0x2e, 0x56, 0x45, 0x53, 0x53, 0x45, 0x4c, 0xa9, 0x3b, 0x4b, 0x04, 0x00, 0xfc, 0xec, 0x1d, 0x00, 0xef, 0xec, 0x20, 0x00, 0xef, 0xec, 0x32, 0x38, 0x30, 0x34, 0x14, 0x00, 0xef, 0xec, 0x4c, 0x22, 0x34, 0x75, 0x20, 0xed, 0x90, 0x16, 0x4c, 0x22, 0xdc, 0x1b, 0x06, 0x44, 0x45, 0x42, 0x52, 0x49, 0x53, 0x90, 0x16, 0x4c, 0x22, 0xdc, 0x1b, 0x06, 0x50, 0x4c, 0x41, 0x4e, 0x45, 0x54, 0x90, 0x16, 0x4c, 0x22, 0x0c, 0x50, 0x9d, 0x86, 0xdc, 0x1b, 0x12, 0x53, 0x54, 0x45, 0x4c, 0x4c, 0x41, 0x52, 0x20, 0x50, 0x41, 0x52, 0x41, 0x4d, 0x45, 0x54, 0x45, 0x52, 0x53, 0xd2, 0x9f, 0x90, 0x16, 0x16, 0xed, 0x89, 0x28}


const unsigned short int cc_UNK_0xe36e = 0xe36e; // UNK_0xe36e


// 0xe352: db 0xf0 0x00 '  '

// ================================================
// 0xe354: WORD 'UNK_0xe356' codep=0x7420 parp=0xe356
// ================================================
IFieldType UNK_0xe356 = {ENCOUNTERIDX, 0x1b, 0x01};

// ================================================
// 0xe359: WORD 'UNK_0xe35b' codep=0x7420 parp=0xe35b
// ================================================
IFieldType UNK_0xe35b = {ENCOUNTERIDX, 0x1c, 0x01};

// ================================================
// 0xe35e: WORD 'UNK_0xe360' codep=0x7420 parp=0xe360
// ================================================
IFieldType UNK_0xe360 = {ENCOUNTERIDX, 0x1d, 0x01};

// ================================================
// 0xe363: WORD 'UNK_0xe365' codep=0x7420 parp=0xe365
// ================================================
IFieldType UNK_0xe365 = {ENCOUNTERIDX, 0x1a, 0x01};

// ================================================
// 0xe368: WORD 'UNK_0xe36a' codep=0x1d29 parp=0xe36a
// ================================================
// 0xe36a: db 0x3a 0x20 ': '

// ================================================
// 0xe36c: WORD 'UNK_0xe36e' codep=0x2214 parp=0xe36e
// ================================================
// 0xe36e: dw 0x00a8

// ================================================
// 0xe370: WORD 'UNK_0xe372' codep=0x1d29 parp=0xe372
// ================================================
// 0xe372: db 0x3a 0x20 ': '

// ================================================
// 0xe374: WORD 'UNK_0xe376' codep=0x1d29 parp=0xe376
// ================================================
// 0xe376: db 0x3a 0x20 ': '

// ================================================
// 0xe378: WORD 'UNK_0xe37a' codep=0x1d29 parp=0xe37a
// ================================================
// 0xe37a: db 0x18 0x01 '  '

// ================================================
// 0xe37c: WORD 'UNK_0xe37e' codep=0x1d29 parp=0xe37e
// ================================================
// 0xe37e: db 0x48 0x02 'H '

// ================================================
// 0xe380: WORD 'UNK_0xe382' codep=0x1d29 parp=0xe382
// ================================================
// 0xe382: db 0x3a 0x20 ': '

// ================================================
// 0xe384: WORD 'UNK_0xe386' codep=0x1d29 parp=0xe386
// ================================================
// 0xe386: db 0x3a 0x20 ': '

// ================================================
// 0xe388: WORD 'UNK_0xe38a' codep=0x1d29 parp=0xe38a
// ================================================
// 0xe38a: db 0x3a 0x20 ': '

// ================================================
// 0xe38c: WORD 'UNK_0xe38e' codep=0x1d29 parp=0xe38e
// ================================================
// 0xe38e: db 0x3a 0x20 ': '

// ================================================
// 0xe390: WORD 'UNK_0xe392' codep=0x7420 parp=0xe392
// ================================================
IFieldType UNK_0xe392 = {FLUX_NODEIDX, 0x0b, 0x02};

// ================================================
// 0xe395: WORD 'UNK_0xe397' codep=0x7420 parp=0xe397
// ================================================
IFieldType UNK_0xe397 = {FLUX_NODEIDX, 0x11, 0x02};

// ================================================
// 0xe39a: WORD 'UNK_0xe39c' codep=0x7420 parp=0xe39c
// ================================================
IFieldType UNK_0xe39c = {NEBULAIDX, 0x11, 0x01};

// ================================================
// 0xe39f: WORD 'UNK_0xe3a1' codep=0x7420 parp=0xe3a1
// ================================================
IFieldType UNK_0xe3a1 = {STARSYSTEMIDX, 0x0b, 0x01};

// ================================================
// 0xe3a4: WORD 'UNK_0xe3a6' codep=0x7420 parp=0xe3a6
// ================================================
IFieldType UNK_0xe3a6 = {SHIPIDX, 0x13, 0x02};
// 0xe3a9: db 0x94 0x73 0x28 0x14 0x04 0x74 0x54 0x6d ' s(  tTm'

// ================================================
// 0xe3b1: WORD 'UNK_0xe3b3' codep=0x1d29 parp=0xe3b3
// ================================================
// 0xe3b3: db 0x20 0x10 0x81 0x40 0x3b 0x02 0x10 0x88 0x40 0x20 0x00 0x81 '   @;   @   '

// ================================================
// 0xe3bf: WORD 'UNK_0xe3c1' codep=0x1d29 parp=0xe3c1
// ================================================
// 0xe3c1: db 0x80 0xf7 '  '

// ================================================
// 0xe3c3: WORD 'UNK_0xe3c5' codep=0x224c parp=0xe3c5 params=0 returns=1
// ================================================

void UNK_0xe3c5() // UNK_0xe3c5
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe382); // UNK_0xe382
  Store_2(); // !_2
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Store_2(); // !_2
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(8);
  _slash_(); // /
  Push(8);
  Push(Pop() * Pop()); // *
  Push(Read16(regsp)); // DUP
  Push(pp_UNK_0xe386); // UNK_0xe386
  Store_2(); // !_2
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Store_2(); // !_2
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe3f1: WORD 'UNK_0xe3f3' codep=0x224c parp=0xe3f3 params=0 returns=0
// ================================================

void UNK_0xe3f3() // UNK_0xe3f3
{
  Push(Read16(pp_UNK_0xe37a) - 0x0044 * Read16(cc__star_MAPSCA)); // UNK_0xe37a @ 0x0044 *MAPSCA * -
  Push(0);
  MAX(); // MAX
  Push(Read16(cc__star_MAPSCA) * 0x006f); // *MAPSCA 0x006f *
  MIN(); // MIN
  Push(Read16(pp_UNK_0xe37e) - 0x0029 * Read16(cc__star_MAPSCA)); // UNK_0xe37e @ 0x0029 *MAPSCA * -
  Push(0);
  MAX(); // MAX
  Push(Read16(cc__star_MAPSCA) * 0x0089); // *MAPSCA 0x0089 *
  MIN(); // MIN
  OVER(); // OVER
  Push(0x008b * Read16(cc__star_MAPSCA)); // 0x008b *MAPSCA *
  Push(Pop() + Pop()); // +
  OVER(); // OVER
  Push(0x0053 * Read16(cc__star_MAPSCA)); // 0x0053 *MAPSCA *
  Push(Pop() + Pop()); // +
  StoreVISWIN(); // !VISWIN
  Push(0x00c8 * Read16(cc__star_MAPSCA)); // 0x00c8 *MAPSCA *
  Push(pp_LOCRADI); // LOCRADI
  Store_2(); // !_2
  Push(Read16(pp_UNK_0xe37a)); // UNK_0xe37a @
  Push(pp_XABS); // XABS
  Store_2(); // !_2
  Push(Read16(pp_UNK_0xe37e)); // UNK_0xe37e @
  Push(pp_YABS); // YABS
  Store_2(); // !_2
  Push(0xec78);
  Push(Read16(regsp)); // DUP
  Push(pp_ANCHOR); // ANCHOR
  _2_ex__2(); // 2!_2
  ORGLIST(); // ORGLIST
}


// ================================================
// 0xe46f: WORD 'UNK_0xe471' codep=0x224c parp=0xe471
// ================================================

void UNK_0xe471() // UNK_0xe471
{
  Push(0x00c7);
  Push(0x009f);
  Push(0x0021);
  Push(0x0014);
  SETCLIP(); // SETCLIP
  Push(0x0014);
  Push(pp_XLLDEST); // XLLDEST
  Store_2(); // !_2
  Push(0x0021);
  Push(pp_YLLDEST); // YLLDEST
  Store_2(); // !_2
}


// ================================================
// 0xe495: WORD 'UNK_0xe497' codep=0x224c parp=0xe497 params=0 returns=0
// ================================================

void UNK_0xe497() // UNK_0xe497
{
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  Push(2);
  Push(pp_YWLD_c_YP); // YWLD:YP
  _2_ex__2(); // 2!_2
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  Push(1);
  Push(pp_XWLD_c_XP); // XWLD:XP
  _2_ex__2(); // 2!_2
}


// ================================================
// 0xe4a9: WORD 'UNK_0xe4ab' codep=0x1d29 parp=0xe4ab
// ================================================
// 0xe4ab: db 0x3a 0x20 ': '

// ================================================
// 0xe4ad: WORD 'UNK_0xe4af' codep=0x1d29 parp=0xe4af
// ================================================
// 0xe4af: db 0x3a 0x20 ': '

// ================================================
// 0xe4b1: WORD 'UNK_0xe4b3' codep=0x1d29 parp=0xe4b3
// ================================================
// 0xe4b3: db 0x3a 0x20 ': '

// ================================================
// 0xe4b5: WORD 'UNK_0xe4b7' codep=0x1d29 parp=0xe4b7
// ================================================
// 0xe4b7: db 0x3a 0x20 ': '

// ================================================
// 0xe4b9: WORD 'UNK_0xe4bb' codep=0x224c parp=0xe4bb params=0 returns=1
// ================================================

void UNK_0xe4bb() // UNK_0xe4bb
{
  Push(Read16(pp_UNK_0xe4b3)); // UNK_0xe4b3 @
  if (Pop() != 0)
  {
    Push(-1);
    return;
  }
  Push(Read16(pp_UNK_0xe4b7)); // UNK_0xe4b7 @
  if (Pop() != 0)
  {
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xe4db: WORD 'UNK_0xe4dd' codep=0x224c parp=0xe4dd
// ================================================

void UNK_0xe4dd() // UNK_0xe4dd
{
  UNK_0xe4bb(); // UNK_0xe4bb
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    SetColor(WHITE);
  } else
  {
    SetColor(PINK);
  }
  StoreCOLOR(); // !COLOR
}


// ================================================
// 0xe4f1: WORD 'UNK_0xe4f3' codep=0x224c parp=0xe4f3 params=2 returns=0
// ================================================

void UNK_0xe4f3() // UNK_0xe4f3
{
  SWAP(); // SWAP
  Push(0x0014);
  _dash_(); // -
  SWAP(); // SWAP
  Push(0x0038);
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  UNK_0xe4bb(); // UNK_0xe4bb
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    PRINT("FLUX-NODES", 10); // (.")
    return;
  }
  PRINT("ENCOUNTERS", 10); // (.")
}


// ================================================
// 0xe52d: WORD 'UNK_0xe52f' codep=0x224c parp=0xe52f params=0 returns=1
// ================================================

void UNK_0xe52f() // UNK_0xe52f
{
  Push(Read16(pp_UNK_0xe4b3) & Read16(pp_UNK_0xe4ab) | Read16(pp_UNK_0xe4b7) & Read16(pp_UNK_0xe4af)); // UNK_0xe4b3 @ UNK_0xe4ab @ AND UNK_0xe4b7 @ UNK_0xe4af @ AND OR
}


// ================================================
// 0xe547: WORD 'UNK_0xe549' codep=0x224c parp=0xe549 params=0 returns=0
// ================================================

void UNK_0xe549() // UNK_0xe549
{
  UNK_0xe52f(); // UNK_0xe52f
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  _1PIX(); // 1PIX
  if (Pop() != 0)
  {
    UNK_0xe471(); // UNK_0xe471
    Push(Read16(pp_UNK_0xe382)); // UNK_0xe382 @
    Push(Read16(pp_UNK_0xe386)); // UNK_0xe386 @
    WLD_gt_SCR(); // WLD>SCR
    UNK_0xe4bb(); // UNK_0xe4bb
    _0_st_(); // 0<
    if (Pop() != 0)
    {
      SetColor(GREY1);
    } else
    {
      SetColor(PINK);
    }
    StoreCOLOR(); // !COLOR
    _2DUP(); // 2DUP
    Push(0x0032);
    DrawCIRCLE_1(); // .CIRCLE_1
    UNK_0xe4f3(); // UNK_0xe4f3
    DCLIPSE(); // DCLIPSE
  }
  _2PIX(); // 2PIX
}


// ================================================
// 0xe583: WORD 'UNK_0xe585' codep=0x224c parp=0xe585
// ================================================

void UNK_0xe585() // UNK_0xe585
{
  unsigned short int i, imax, j, jmax, k, kmax, l, lmax;
  IsCGA(); // ?CGA
  if (Pop() != 0)
  {
    SetColor(WHITE);
  } else
  {
    SetColor(GREY2);
  }
  StoreCOLOR(); // !COLOR
  Push(0x0011);
  Push(0x00c7);
  Push(0x0011);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x00c7);
  Push(0x002b);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(0x0012);
    Push(i); // I
    LPLOT(); // LPLOT
    Push(0x000a);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

  Push(0x00c7);
  Push(0x0053);

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
    Push(0x0013);
    Push(j); // I
    LPLOT(); // LPLOT
    Push(0x0032);
    int step = Pop();
    j += step;
    if (((step>=0) && (j>=jmax)) || ((step<0) && (j<=jmax))) break;
  } while(1); // (+LOOP)

  Push(0x009c);
  Push(0x001d);
  Push(0x0011);
  Push(0x001d);
  LLINE(); // LLINE
  Push(0x009c);
  Push(0x0019);

  k = Pop();
  kmax = Pop();
  do // (DO)
  {
    Push(k); // I
    Push(0x001e);
    Push(k); // I
    Push(0x001f);
    LLINE(); // LLINE
    Push(5);
    int step = Pop();
    k += step;
    if (((step>=0) && (k>=kmax)) || ((step<0) && (k<=kmax))) break;
  } while(1); // (+LOOP)

  Push(0x009c);
  Push(0x002d);

  l = Pop();
  lmax = Pop();
  do // (DO)
  {
    Push(l); // I
    Push(0x0020);
    LPLOT(); // LPLOT
    Push(0x0019);
    int step = Pop();
    l += step;
    if (((step>=0) && (l>=lmax)) || ((step<0) && (l<=lmax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe627: WORD 'UNK_0xe629' codep=0x224c parp=0xe629
// ================================================

void UNK_0xe629() // UNK_0xe629
{
  SetColor(GREY1);
  SetColor(GREY1);
  SetColor(LT_dash_BLUE);
  IsMRC(); // ?MRC
}


// ================================================
// 0xe633: WORD 'UNK_0xe635' codep=0x224c parp=0xe635
// ================================================

void UNK_0xe635() // UNK_0xe635
{
  Push(0x0013);
  Push(4);
  Push(1);
  Push(0x009b);
  UNK_0xe629(); // UNK_0xe629
  POLY_dash_WI(); // POLY-WI
  SetColor(GREY2);
  StoreCOLOR(); // !COLOR
  Push(0x009b);
  Push(0);
  Push(5);
  Push(0);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x0013);
  Push(5);
  Push(0x0013);
  LLINE(); // LLINE
  Push(0x0017);
  Push(9);
  Push(0x0017);
  Push(0);
  LLINE(); // LLINE
  Push(0x0044);
  Push(9);
  Push(0x0044);
  Push(0);
  LLINE(); // LLINE
  Push(4);
  Push(0x0013);
  Push(4);
  Push(0);
  LLINE(); // LLINE
  Push(0x002b);
  Push(0x0013);
  Push(0x002b);
  Push(0);
  LLINE(); // LLINE
  Push(0x005d);
  Push(0x0013);
  Push(0x005d);
  Push(0);
  LLINE(); // LLINE
  Push(0x0083);
  Push(0x0013);
  Push(0x0083);
  Push(0);
  LLINE(); // LLINE
  Push(0x009c);
  Push(0x0013);
  Push(0x009c);
  Push(0);
  LLINE(); // LLINE
  _gt_1FONT(); // >1FONT
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(9);
  Push(0x0010);
  POS_dot_(); // POS.
  PRINT("POSITION", 8); // (.")
  Push(0x002f);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("DESTINATION", 11); // (.")
  Push(0x0061);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("DISTANCE", 8); // (.")
  Push(0x0088);
  Push(pp_XBLT); // XBLT
  Store_2(); // !_2
  PRINT("FUEL", 4); // (.")
}


// ================================================
// 0xe720: WORD 'UNK_0xe722' codep=0x224c parp=0xe722
// ================================================

void UNK_0xe722() // UNK_0xe722
{
  Push(Read16(pp_UNK_0xe37a)); // UNK_0xe37a @
  Push(Read16(pp_UNK_0xe37e)); // UNK_0xe37e @
  WLD_gt_SCR(); // WLD>SCR
  Push(6);
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP
  Push(3);
  _dash_(); // -
  SWAP(); // SWAP
  POS_dot_(); // POS.
  Push(0x000d);
  Push(pp_LBLT); // LBLT
  Store_2(); // !_2
  Push(7);
  Push(pp_WBLT); // WBLT
  Store_2(); // !_2
  Push(pp_UNK_0xe3b3); // UNK_0xe3b3
  Push(pp_ABLT); // ABLT
  Store_2(); // !_2
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  SetColor(ORANGE);
  StoreCOLOR(); // !COLOR
  Push(pp_XORMODE); // XORMODE
  ON_2(); // ON_2
  BLT(); // BLT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xe764: WORD 'UNK_0xe766' codep=0x224c parp=0xe766
// ================================================

void UNK_0xe766() // UNK_0xe766
{
  Push(Read16(pp_UNK_0xe382)); // UNK_0xe382 @
  Push(Read16(pp_UNK_0xe386)); // UNK_0xe386 @
  _2DUP(); // 2DUP
  IsINVIS(); // ?INVIS
  GetDS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  Store_2(); // !_2
  if (Pop() != 0)
  {
    WLD_gt_SCR(); // WLD>SCR
    Push(Pop()+1); // 1+
    SWAP(); // SWAP
    Push(Pop()-1); // 1-
    SWAP(); // SWAP
    POS_dot_(); // POS.
    Push(3);
    Push(pp_LBLT); // LBLT
    Store_2(); // !_2
    Push(3);
    Push(pp_WBLT); // WBLT
    Store_2(); // !_2
    Push(pp_UNK_0xe3c1); // UNK_0xe3c1
    Push(pp_ABLT); // ABLT
    Store_2(); // !_2
    SetColor(BLUE);
    StoreCOLOR(); // !COLOR
    Push(pp_XORMODE); // XORMODE
    _099(); // 099
    BLT(); // BLT
    Push(pp_XORMODE); // XORMODE
    ON_2(); // ON_2
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  UNK_0xe549(); // UNK_0xe549
}


// ================================================
// 0xe7b2: WORD 'UNK_0xe7b4' codep=0x224c parp=0xe7b4
// ================================================

void UNK_0xe7b4() // UNK_0xe7b4
{
  unsigned short int i, imax;
  SetColor(GREY2);
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x009c);
  Push(0x0028);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    Push(0x001a);
    POS_dot_(); // POS.
    Push(3);
    SetColor(BLACK);
    POLY_dash_ER(); // POLY-ER
    Push(Read16(pp_LVIS)); // LVIS @
    Push(Read16(cc__star_MAPSCA)); // *MAPSCA
    _slash_(); // /
    Push(i); // I
    Push(Pop() + Pop()); // +
    Push(0x000f);
    _dash_(); // -
    Push(0);
    _st__n_(); // <#
    _n_(); // #
    _n_(); // #
    _n_(); // #
    _n__gt_(); // #>
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0x0019);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe7fc: WORD 'UNK_0xe7fe' codep=0x224c parp=0xe7fe
// ================================================

void UNK_0xe7fe() // UNK_0xe7fe
{
  unsigned short int i, imax;
  SetColor(GREY2);
  StoreCOLOR(); // !COLOR
  _gt_1FONT(); // >1FONT
  Push(0x00c7);
  Push(0x0055);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(4);
    Push(i); // I
    POS_dot_(); // POS.
    Push(3);
    SetColor(BLACK);
    POLY_dash_ER(); // POLY-ER
    Push(1);
    Push(pp_XBLT); // XBLT
    _plus__ex__2(); // +!_2
    Push(Read16(pp_BVIS)); // BVIS @
    Push(Read16(cc__star_MAPSCA)); // *MAPSCA
    _slash_(); // /
    Push(i); // I
    Push(0x0023);
    _dash_(); // -
    Push(Pop()>>1); // 2/
    Push(Pop() + Pop()); // +
    Push(0);
    _st__n_(); // <#
    _n_(); // #
    _n_(); // #
    _n_(); // #
    _n__gt_(); // #>
    Exec("TYPE"); // call of word 0x2690 '(TYPE)'
    Push(0x0032);
    int step = Pop();
    i += step;
    if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP)

}


// ================================================
// 0xe84c: WORD 'UNK_0xe84e' codep=0x224c parp=0xe84e
// ================================================

void UNK_0xe84e() // UNK_0xe84e
{
  Push(0);
  Push(2);
  RRND(); // RRND
  Push(0);
  Push(2);
  RRND(); // RRND
  if (Pop() == 0) return;
  Push(-Pop()); // NEGATE
}


// ================================================
// 0xe862: WORD 'UNK_0xe864' codep=0x224c parp=0xe864 params=0 returns=2
// ================================================

void UNK_0xe864() // UNK_0xe864
{
  Push2Words("*EYE");
  IsICON_eq_I(); // ?ICON=I
  if (Pop() == 0) return;
  POINT_gt_I(); // POINT>I
  GetIX(); // @IX
  GetIY(); // @IY
  IsINVIS(); // ?INVIS
  if (Pop() == 0) return;
  RNDCLR(); // RNDCLR
  GetIX(); // @IX
  GetIY(); // @IY
  WLD_gt_SCR(); // WLD>SCR
  UNK_0xe84e(); // UNK_0xe84e
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(Pop() + Pop()); // +
  } else
  {
    UNK_0xe84e(); // UNK_0xe84e
    ROT(); // ROT
    Push(Pop() + Pop()); // +
    SWAP(); // SWAP
  }
  LPLOT(); // LPLOT
}


// ================================================
// 0xe89a: WORD 'UNK_0xe89c' codep=0x224c parp=0xe89c
// ================================================

void UNK_0xe89c() // UNK_0xe89c
{
  unsigned short int i, imax;
  Push(Read16(cc_NULL_dash_IC)); // NULL-IC
  Push(Read16(cc_SYS_dash_ICO)); // SYS-ICO
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONSI(); // ?ICONSI
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    GetIL(); // @IL
    GetIH(); // @IH
    _gt_C_plus_S(); // >C+S
    GetINST_dash_C(); // @INST-C
    Push(0x002e);
    Push((Pop()==Pop())?1:0); // =
    if (Pop() != 0)
    {
      Push(!Read16(pp_PAST) | Read16(0x65e1+UNK_0xe39c.offset)&0xFF); // PAST @ NOT UNK_0xe39c<IFIELD> C@ OR
    } else
    {
      Push(1);
    }
    if (Pop() != 0)
    {
      DrawCIRCLE_2(); // .CIRCLE_2
    }
    ICLOSE(); // ICLOSE
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xe8e4: WORD 'UNK_0xe8e6' codep=0x224c parp=0xe8e6
// ================================================

void UNK_0xe8e6() // UNK_0xe8e6
{
  unsigned short int i, imax;
  _1PIX(); // 1PIX
  Push(Read16(cc_SYS_dash_ICO) - 1); // SYS-ICO 1-
  Push(Read16(cc_SYS_dash_ICO) + 1); // SYS-ICO 1+
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  IsICONSI(); // ?ICONSI
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(0);

    i = Pop();
    imax = Pop();
    do // (DO)
    {
      POINT_gt_I(); // POINT>I
      GetIL(); // @IL
      GetIH(); // @IH
      _gt_C_plus_S(); // >C+S
      GetINST_dash_C(); // @INST-C
      Push(0x0017);
      Push((Pop()==Pop())?1:0); // =
      if (Pop() != 0)
      {
        Push(Read16(pp_PAST) | Read16(0x65e1+UNK_0xe3a1.offset)&0xFF); // PAST @ UNK_0xe3a1<IFIELD> C@ OR
      } else
      {
        Push(1);
      }
      if (Pop() != 0)
      {
        GetIC(); // @IC
        StoreCOLOR(); // !COLOR
        GetIX(); // @IX
        GetIY(); // @IY
        IsINVIS(); // ?INVIS
        if (Pop() != 0)
        {
          GetIX(); // @IX
          GetIY(); // @IY
          WLD_gt_SCR(); // WLD>SCR
          LPLOT(); // LPLOT
        }
      }
      ICLOSE(); // ICLOSE
      i++;
    } while(i<imax); // (LOOP)

  }
  _2PIX(); // 2PIX
}


// ================================================
// 0xe948: WORD 'UNK_0xe94a' codep=0x224c parp=0xe94a params=1 returns=1
// ================================================

void UNK_0xe94a() // UNK_0xe94a
{
  Push(pp_LSCAN); // LSCAN
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe950: WORD 'UNK_0xe952' codep=0x224c parp=0xe952
// ================================================

void UNK_0xe952() // UNK_0xe952
{
  unsigned short int a;
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  D_st_(); // D<
  if (Pop() != 0)
  {
    _2SWAP(); // 2SWAP
  }
  Push(0);
  UNK_0xe94a(); // UNK_0xe94a
  Store_2(); // !_2
  Push(2);
  UNK_0xe94a(); // UNK_0xe94a
  Store_2(); // !_2
  Push(4);
  UNK_0xe94a(); // UNK_0xe94a
  Store_2(); // !_2
  Push(6);
  UNK_0xe94a(); // UNK_0xe94a
  Store_2(); // !_2
  Push(2);
  Push(pp__n_IN); // #IN
  Store_2(); // !_2
  Push(0);
  UNK_0xe94a(); // UNK_0xe94a
  Push(pp_VIN); // VIN
  Store_2(); // !_2
  Push(0x0014);
  UNK_0xe94a(); // UNK_0xe94a
  Push(pp_VOUT); // VOUT
  Store_2(); // !_2
  Push(0x0028);
  UNK_0xe94a(); // UNK_0xe94a
  Push(pp_OIN); // OIN
  Store_2(); // !_2
  Push(0x003c);
  UNK_0xe94a(); // UNK_0xe94a
  Push(pp_OOUT); // OOUT
  Store_2(); // !_2
  Push(pp_IsOPEN); // ?OPEN
  ON_2(); // ON_2
  CLIPPER(); // CLIPPER
  Push(Read16(pp__n_IN)); // #IN @
  Push(pp_IsOPEN); // ?OPEN
  _099(); // 099
  if (Pop() != 0)
  {
    Push(Read16(pp_VIN)); // VIN @
    a = Pop(); // >R
    Push(a); // I
    Push(Pop()+2); // 2+
    Push(Read16(Pop())); // @
    Push(a); // I
    Push(Read16(Pop())); // @
    Push(a); // I
    Push(6);
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())); // @
    Push(a); // R>
    Push(4);
    Push(Pop() + Pop()); // +
    Push(Read16(Pop())); // @
    Push(1);
    return;
  }
  Push(0);
}


// ================================================
// 0xe9de: WORD 'UNK_0xe9e0' codep=0x224c parp=0xe9e0
// ================================================

void UNK_0xe9e0() // UNK_0xe9e0
{
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  WLD_gt_SCR(); // WLD>SCR
  Push(Read16(0x65e1+UNK_0xe392.offset)); // UNK_0xe392<IFIELD> @
  Push(Read16(0x65e1+UNK_0xe397.offset)); // UNK_0xe397<IFIELD> @
  WLD_gt_SCR(); // WLD>SCR
  ICLOSE(); // ICLOSE
  UNK_0xe952(); // UNK_0xe952
  if (Pop() == 0) return;
  LLINE(); // LLINE
}


// ================================================
// 0xea02: WORD 'UNK_0xea04' codep=0x224c parp=0xea04
// ================================================

void UNK_0xea04() // UNK_0xea04
{
  unsigned short int i, imax;
  SetColor(GREY1);
  StoreCOLOR(); // !COLOR
  _1PIX(); // 1PIX
  Push(Read16(pp_ILOCAL)); // ILOCAL @
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    Push(i); // I
    POINT_gt_I(); // POINT>I
    GetID(); // @ID
    Push(0x00ff);
    Push((Pop()==Pop())?1:0); // =
    GetIC(); // @IC
    Push(3);
    Push((Pop()==Pop())?1:0); // =
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      GetIL(); // @IL
      GetIH(); // @IH
      UNK_0xe9e0(); // UNK_0xe9e0
    }
    i++;
  } while(i<imax); // (LOOP)

  _2PIX(); // 2PIX
}


// ================================================
// 0xea38: WORD 'UNK_0xea3a' codep=0x224c parp=0xea3a
// ================================================

void UNK_0xea3a() // UNK_0xea3a
{
  Push(0x00c7);
  Push(0x0014);
  Push(0x0021);
  Push(0x009f);
  SetColor(BLACK);
  POLY_dash_WI(); // POLY-WI
}


// ================================================
// 0xea50: WORD 'UNK_0xea52' codep=0x224c parp=0xea52
// ================================================

void UNK_0xea52() // UNK_0xea52
{
  SAVE_dash_SC(); // SAVE-SC
  _gt_HIDDEN(); // >HIDDEN
  UNK_0xe471(); // UNK_0xe471
  UNK_0xea3a(); // UNK_0xea3a
  UNK_0xe8e6(); // UNK_0xe8e6
  UNK_0xe89c(); // UNK_0xe89c
  UNK_0xea04(); // UNK_0xea04
  UNK_0xe864(); // UNK_0xe864
  UNK_0xe766(); // UNK_0xe766
  Push(pp_TMAP); // TMAP
  _1_dot_5_at_(); // 1.5@
  Push(Pop() | Pop()); // OR
  if (Pop() != 0)
  {
    Push(0xb834); // probable '.TMAP'
    MODULE(); // MODULE
  }
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES
}


// ================================================
// 0xea7a: WORD 'UNK_0xea7c' codep=0x224c parp=0xea7c
// ================================================

void UNK_0xea7c() // UNK_0xea7c
{
  UNK_0xe3f3(); // UNK_0xe3f3
  UNK_0xe471(); // UNK_0xe471
  UNK_0xea52(); // UNK_0xea52
  DCLIPSE(); // DCLIPSE
  UNK_0xe7b4(); // UNK_0xe7b4
  UNK_0xe7fe(); // UNK_0xe7fe
}


// ================================================
// 0xea8a: WORD 'UNK_0xea8c' codep=0x224c parp=0xea8c
// ================================================

void UNK_0xea8c() // UNK_0xea8c
{
  _gt_1FONT(); // >1FONT
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x0033);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  UNK_0xe629(); // UNK_0xe629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_UNK_0xe37a) + 3); // UNK_0xe37a @ 3+
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(3);
  DrawR(); // .R
  Push(0x004b);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  UNK_0xe629(); // UNK_0xe629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_UNK_0xe37e) + 5); // UNK_0xe37e @ 5 +
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xeace: WORD 'UNK_0xead0' codep=0x224c parp=0xead0
// ================================================

void UNK_0xead0() // UNK_0xead0
{
  _gt_1FONT(); // >1FONT
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x006b);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  UNK_0xe629(); // UNK_0xe629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_UNK_0xe38a)); // UNK_0xe38a @
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xeaee: WORD 'UNK_0xeaf0' codep=0x224c parp=0xeaf0
// ================================================

void UNK_0xeaf0() // UNK_0xeaf0
{
  _gt_1FONT(); // >1FONT
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(0x008a);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  UNK_0xe629(); // UNK_0xe629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_UNK_0xe38a) * Read16(cc__star_MAPSCA)); // UNK_0xe38a @ *MAPSCA *
  Push(Read16(pp__dash_END)); // -END @
  Push(0x0064);
  _star__slash_(); // */
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() != 0)
  {
    Push(3);
    DrawR(); // .R
    return;
  }
  Push(Read16(pp_UNK_0xe38a)); // UNK_0xe38a @
  if (Pop() != 0)
  {
    Push(0x008e);
    Push(7);
    POS_dot_(); // POS.
    PRINT("<1", 2); // (.")
    return;
  }
  Push(0);
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xeb45: WORD 'UNK_0xeb47' codep=0x224c parp=0xeb47
// ================================================

void UNK_0xeb47() // UNK_0xeb47
{
  Push(Read16(pp_UNK_0xe382) - Read16(pp_UNK_0xe37a)); // UNK_0xe382 @ UNK_0xe37a @ -
  ABS(); // ABS
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  Push(Read16(pp_UNK_0xe386) - Read16(pp_UNK_0xe37e)); // UNK_0xe386 @ UNK_0xe37e @ -
  ABS(); // ABS
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(Read16(regsp)); // DUP
  Push(Pop() * Pop()); // *
  Push(0);
  D_plus_(); // D+
  SQRT(); // SQRT
  Push(pp_UNK_0xe38a); // UNK_0xe38a
  Store_2(); // !_2
  UNK_0xea8c(); // UNK_0xea8c
  UNK_0xead0(); // UNK_0xead0
  UNK_0xeaf0(); // UNK_0xeaf0
}


// ================================================
// 0xeb83: WORD 'UNK_0xeb85' codep=0x224c parp=0xeb85
// ================================================

void UNK_0xeb85() // UNK_0xeb85
{
  _gt_1FONT(); // >1FONT
  SetColor(BLACK);
  StoreCOLOR(); // !COLOR
  Push(9);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  UNK_0xe629(); // UNK_0xe629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_UNK_0xe382) + 3); // UNK_0xe382 @ 3+
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(3);
  DrawR(); // .R
  Push(0x001d);
  Push(7);
  POS_dot_(); // POS.
  Push(3);
  UNK_0xe629(); // UNK_0xe629
  POLY_dash_ER(); // POLY-ER
  Push(Read16(pp_UNK_0xe386) + 5); // UNK_0xe386 @ 5 +
  Push(Read16(cc__star_MAPSCA)); // *MAPSCA
  _slash_(); // /
  Push(3);
  DrawR(); // .R
}


// ================================================
// 0xebc5: WORD 'UNK_0xebc7' codep=0x224c parp=0xebc7 params=0 returns=0
// ================================================

void UNK_0xebc7() // UNK_0xebc7
{
  Push(Read16(pp_UNK_0xe37a) + Read16(pp_UNK_0xe372)); // UNK_0xe37a @ UNK_0xe372 @ +
  Push(0);
  MAX(); // MAX
  Push(0x00f9 * Read16(cc__star_MAPSCA)); // 0x00f9 *MAPSCA *
  MIN(); // MIN
  Push(Read16(pp_UNK_0xe37a)); // UNK_0xe37a @
  _dash_(); // -
  Push(pp_UNK_0xe372); // UNK_0xe372
  Store_2(); // !_2
  Push(Read16(pp_UNK_0xe37e) + Read16(pp_UNK_0xe376)); // UNK_0xe37e @ UNK_0xe376 @ +
  Push(0);
  MAX(); // MAX
  Push(0x00db * Read16(cc__star_MAPSCA)); // 0x00db *MAPSCA *
  MIN(); // MIN
  Push(Read16(pp_UNK_0xe37e)); // UNK_0xe37e @
  _dash_(); // -
  Push(pp_UNK_0xe376); // UNK_0xe376
  Store_2(); // !_2
}


// ================================================
// 0xec0d: WORD 'UNK_0xec0f' codep=0x224c parp=0xec0f
// ================================================

void UNK_0xec0f() // UNK_0xec0f
{
  SET_STR_AS_PARAM("I CAN'T GET OUR BEARINGS, COMMANDER.");
  DrawTTY(); // .TTY
}


// ================================================
// 0xec3a: WORD 'UNK_0xec3c' codep=0x224c parp=0xec3c
// ================================================

void UNK_0xec3c() // UNK_0xec3c
{
  SET_STR_AS_PARAM("WE'RE NOT IN HYPERSPACE, COMMANDER.");
  DrawTTY(); // .TTY
}


// ================================================
// 0xec66: WORD 'NOMAP' codep=0x224c parp=0xec70
// ================================================

void NOMAP() // NOMAP
{
  SetColor(WHITE);
  StoreCOLOR(); // !COLOR
  if (Pop() != 0)
  {
    UNK_0xec3c(); // UNK_0xec3c
    return;
  }
  UNK_0xec0f(); // UNK_0xec0f
}


// ================================================
// 0xec82: WORD 'UNK_0xec84' codep=0x224c parp=0xec84 params=0 returns=0
// ================================================

void UNK_0xec84() // UNK_0xec84
{
  Push(9);
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
  Push(pp_UNK_0xe4ab); // UNK_0xe4ab
  Store_2(); // !_2
  Push(0x000a);
  Push(0xb76b); // probable 'OV?ART'
  MODULE(); // MODULE
  Push(pp_UNK_0xe4af); // UNK_0xe4af
  Store_2(); // !_2
  Push(pp_UNK_0xe4b3); // UNK_0xe4b3
  _099(); // 099
  Push(pp_UNK_0xe4b7); // UNK_0xe4b7
  _099(); // 099
}


// ================================================
// 0xeca8: WORD 'UNK_0xecaa' codep=0x224c parp=0xecaa params=0 returns=1
// ================================================

void UNK_0xecaa() // UNK_0xecaa
{
  unsigned short int a, b;
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(pp_UNK_0xe382) + Read16(cc_UNK_0xe36e)); // UNK_0xe382 @ UNK_0xe36e +
  OVER(); // OVER
  _gt_(); // >
  a = Pop(); // >R
  Push(Read16(pp_UNK_0xe382) - Read16(cc_UNK_0xe36e)); // UNK_0xe382 @ UNK_0xe36e -
  _gt_(); // >
  Push(a); // R>
  Push(Pop() & Pop()); // AND
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  Push(Read16(pp_UNK_0xe386) + Read16(cc_UNK_0xe36e)); // UNK_0xe386 @ UNK_0xe36e +
  OVER(); // OVER
  _gt_(); // >
  b = Pop(); // >R
  Push(Read16(pp_UNK_0xe386) - Read16(cc_UNK_0xe36e)); // UNK_0xe386 @ UNK_0xe36e -
  _gt_(); // >
  Push(b); // R>
  Push(Pop() & Pop()); // AND
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xecee: WORD 'UNK_0xecf0' codep=0x1d29 parp=0xecf0
// ================================================
// 0xecf0: db 0x3a 0x20 ': '

// ================================================
// 0xecf2: WORD 'FLUX-ARRAY' codep=0x1d29 parp=0xed01
// ================================================
// 0xed01: db 0x00 0x00 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0x1b 0x06 0x44 0x45 0x42 0x52 0x49 0x53 0x90 0x16 0x00 0x00 0x89 0x28 0x2e 0x56 0x45 0x53 0x53 0x45 0x4c 0xa9 0x3b 0x4b 0x04 0x00 0xfc 0xec 0x1d 0x00 0xef 0xec 0x20 0x00 0xef 0xec 0x32 0x38 0x30 0x34 0x14 0x00 0xef 0xec 0x4c 0x22 0x34 0x75 0x20 0xed 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x44 0x45 0x42 0x52 0x49 0x53 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x06 0x50 0x4c 0x41 0x4e 0x45 0x54 0x90 0x16 0x4c 0x22 0x0c 0x50 0x9d 0x86 0xdc 0x1b 0x12 0x53 0x54 0x45 0x4c 0x4c 0x41 0x52 0x20 0x50 0x41 0x52 0x41 0x4d 0x45 0x54 0x45 0x52 0x53 0xd2 0x9f 0x90 0x16 0x16 0xed 0x89 0x28 '   ALLOT   DEBRIS     (.VESSEL ;K            2804    L"4u    L"   DEBRIS  L"   PLANET  L" P     STELLAR PARAMETERS       ('

// ================================================
// 0xed7b: WORD 'UNK_0xed7d' codep=0x224c parp=0xed7d params=0 returns=0
// ================================================

void UNK_0xed7d() // UNK_0xed7d
{
  Push(pp_FLUX_dash_ARRAY); // FLUX-ARRAY
  Push(0x007a);
  Push(0);
  FILL_2(); // FILL_2
}


// ================================================
// 0xed89: WORD 'UNK_0xed8b' codep=0x224c parp=0xed8b params=1 returns=0
// ================================================

void UNK_0xed8b() // UNK_0xed8b
{
  Push(pp_FLUX_dash_ARRAY); // FLUX-ARRAY
  C_ex__2(); // C!_2
}


// ================================================
// 0xed91: WORD 'UNK_0xed93' codep=0x224c parp=0xed93 params=0 returns=1
// ================================================

void UNK_0xed93() // UNK_0xed93
{
  Push(Read16(pp_FLUX_dash_ARRAY)&0xFF); // FLUX-ARRAY C@
}


// ================================================
// 0xed99: WORD 'UNK_0xed9b' codep=0x224c parp=0xed9b params=0 returns=1
// ================================================

void UNK_0xed9b() // UNK_0xed9b
{
  Push(Read16(pp_FLUX_dash_ARRAY + 1)&0xFF); // FLUX-ARRAY 1+ C@
}


// ================================================
// 0xeda3: WORD 'UNK_0xeda5' codep=0x224c parp=0xeda5 params=1 returns=0
// ================================================

void UNK_0xeda5() // UNK_0xeda5
{
  Push(pp_FLUX_dash_ARRAY + 1); // FLUX-ARRAY 1+
  C_ex__2(); // C!_2
}


// ================================================
// 0xedad: WORD 'UNK_0xedaf' codep=0x224c parp=0xedaf params=0 returns=1
// ================================================

void UNK_0xedaf() // UNK_0xedaf
{
  Push(pp_FLUX_dash_ARRAY + 2); // FLUX-ARRAY 2+
}


// ================================================
// 0xedb5: WORD 'UNK_0xedb7' codep=0x224c parp=0xedb7 params=1 returns=2
// ================================================

void UNK_0xedb7() // UNK_0xedb7
{
  UNK_0xedaf(); // UNK_0xedaf
  Push(Pop() + Pop()); // +
  UNK_0xe4bb(); // UNK_0xe4bb
  _0_st_(); // 0<
  if (Pop() != 0)
  {
    Push(Read8(Pop())&0xFF); // C@
    POINT_gt_I(); // POINT>I
    GetIX(); // @IX
    GetIY(); // @IY
    return;
  }
  _2_at_(); // 2@
}


// ================================================
// 0xedd3: WORD 'UNK_0xedd5' codep=0x224c parp=0xedd5 params=0 returns=0
// ================================================

void UNK_0xedd5() // UNK_0xedd5
{
  UNK_0xed9b(); // UNK_0xed9b
  Push(Read16(pp_UNK_0xecf0)); // UNK_0xecf0 @
  Push(Pop() + Pop()); // +
  Push(0x0074);
  MIN(); // MIN
  UNK_0xeda5(); // UNK_0xeda5
}


// ================================================
// 0xede7: WORD 'UNK_0xede9' codep=0x224c parp=0xede9
// ================================================

void UNK_0xede9() // UNK_0xede9
{
  _2DUP(); // 2DUP
  IsINVIS(); // ?INVIS
  if (Pop() != 0)
  {
    WLD_gt_SCR(); // WLD>SCR
    LXPLOT(); // LXPLOT
  } else
  {
    Pop(); Pop(); // 2DROP
  }
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
}


// ================================================
// 0xee01: WORD 'UNK_0xee03' codep=0x224c parp=0xee03 params=1 returns=2
// ================================================

void UNK_0xee03() // UNK_0xee03
{
  UNK_0xed93(); // UNK_0xed93
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() != 0)
  {
    UNK_0xed9b(); // UNK_0xed9b
  }
  Push(Read16(pp_UNK_0xecf0)); // UNK_0xecf0 @
  _dash_(); // -
  UNK_0xedb7(); // UNK_0xedb7
}


// ================================================
// 0xee19: WORD 'UNK_0xee1b' codep=0x224c parp=0xee1b
// ================================================

void UNK_0xee1b() // UNK_0xee1b
{
  UNK_0xe4dd(); // UNK_0xe4dd
  UNK_0xede9(); // UNK_0xede9
  UNK_0xee03(); // UNK_0xee03
  UNK_0xede9(); // UNK_0xede9
}


// ================================================
// 0xee25: WORD 'UNK_0xee27' codep=0x224c parp=0xee27 params=0 returns=0
// ================================================

void UNK_0xee27() // UNK_0xee27
{
  IsFIRST(); // ?FIRST
  IsLAST(); // ?LAST
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  IEXTRAC(); // IEXTRAC
  ILAST(); // ILAST
  CI(); // CI
  _gt_INSERT(); // >INSERT
}


// ================================================
// 0xee3d: WORD 'UNK_0xee3f' codep=0x224c parp=0xee3f params=0 returns=0
// ================================================

void UNK_0xee3f() // UNK_0xee3f
{
  UNK_0xed93(); // UNK_0xed93
  Push(Read16(pp_UNK_0xecf0)); // UNK_0xecf0 @
  Push(Pop() + Pop()); // +
  UNK_0xed9b(); // UNK_0xed9b
  MOD(); // MOD
  UNK_0xed8b(); // UNK_0xed8b
}


// ================================================
// 0xee4f: WORD 'UNK_0xee51' codep=0x224c parp=0xee51 params=0 returns=0
// ================================================

void UNK_0xee51() // UNK_0xee51
{
  unsigned short int i, imax;
  Push(Read16(pp_UNK_0xe4b3)); // UNK_0xe4b3 @
  if (Pop() == 0) return;
  UNK_0xed7d(); // UNK_0xed7d
  Push(1);
  Push(pp_UNK_0xecf0); // UNK_0xecf0
  Store_2(); // !_2
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
  Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
  ICLOSE(); // ICLOSE
  Push(Read16(cc_UNK_0xe36e)); // UNK_0xe36e
  Push(Read16(pp__star_GLOBAL)); // *GLOBAL @
  IsICONS_dash__1(); // ?ICONS-_1
  if (Read16(regsp) != 0) Push(Read16(regsp)); // ?DUP
  if (Pop() == 0) return;
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    POINT_gt_I(); // POINT>I
    GetIL(); // @IL
    GetIH(); // @IH
    _gt_C_plus_S(); // >C+S
    GetINST_dash_C(); // @INST-C
    Push(0x002d);
    Push((Pop()==Pop())?1:0); // =
    ICLOSE(); // ICLOSE
    if (Pop() != 0)
    {
      Push(Read16(pp_IINDEX)); // IINDEX @
      UNK_0xed9b(); // UNK_0xed9b
      UNK_0xedaf(); // UNK_0xedaf
      Push(Pop() + Pop()); // +
      C_ex__2(); // C!_2
      UNK_0xedd5(); // UNK_0xedd5
    }
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xeeab: WORD 'UNK_0xeead' codep=0x224c parp=0xeead
// ================================================

void UNK_0xeead() // UNK_0xeead
{
  Push2Words("NULL");
  Push(pp_TMAP); // TMAP
  _1_dot_5_ex__2(); // 1.5!_2
}


// ================================================
// 0xeeb5: WORD 'UNK_0xeeb7' codep=0x224c parp=0xeeb7 params=0 returns=0
// ================================================

void UNK_0xeeb7() // UNK_0xeeb7
{
  UNK_0xe52f(); // UNK_0xe52f
  UNK_0xed9b(); // UNK_0xed9b
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) return;
  UNK_0xed93(); // UNK_0xed93
  UNK_0xedb7(); // UNK_0xedb7
  UNK_0xee1b(); // UNK_0xee1b
  UNK_0xee3f(); // UNK_0xee3f
}

// 0xeecf: db 0x4c 0x22 0x22 0x75 0x5d 0x17 0x1c 0x00 0x5f 0x12 0x34 0x75 0x5d 0x17 0x2e 0x00 0x5d 0x17 0x34 0x00 0x25 0x40 0xf5 0x12 0x90 0x16 'L""u]   _ 4u] . ] 4 %@    '

// ================================================
// 0xeee9: WORD 'UNK_0xeeeb' codep=0x224c parp=0xeeeb params=0 returns=1
// ================================================

void UNK_0xeeeb() // UNK_0xeeeb
{
  Push(Read16(pp_PAST)); // PAST @
  _gt_FLAG(); // >FLAG
  Push(Read16(0x65e1+UNK_0xe35b.offset)&0xFF); // UNK_0xe35b<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(!Read16(pp_PAST)); // PAST @ NOT
  Push(Read16(0x65e1+UNK_0xe360.offset)&0xFF); // UNK_0xe360<IFIELD> C@
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  Push(Pop() | Pop()); // OR
  Push(Read16(0x65e1+UNK_0xe365.offset)&0xFF); // UNK_0xe365<IFIELD> C@
  if (Pop() != 0)
  {
    CI(); // CI
    Push(Pop() | Pop()); // OR
    Push(Read16(pp_STARDAT)); // STARDAT @
    Push(Pop() & Pop()); // AND
    _gt_FLAG(); // >FLAG
    Push(Pop() & Pop()); // AND
  }
  Push(Read16(0x65e1+UNK_0xe356.offset)&0xFF); // UNK_0xe356<IFIELD> C@
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xef27: WORD 'UNK_0xef29' codep=0x224c parp=0xef29 params=0 returns=0
// ================================================

void UNK_0xef29() // UNK_0xef29
{
  Push(Read16(pp_UNK_0xe4b7)); // UNK_0xe4b7 @
  if (Pop() == 0) return;
  UNK_0xed7d(); // UNK_0xed7d
  Push(4);
  Push(pp_UNK_0xecf0); // UNK_0xecf0
  Store_2(); // !_2
  Push2Words("*SECS");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x003d);
  Push(0);
  IFIND(); // IFIND
  Pop(); // DROP
  IPREV(); // IPREV
  do
  {
    INEXT(); // INEXT
    UNK_0xecaa(); // UNK_0xecaa
    UNK_0xeeeb(); // UNK_0xeeeb
    Push(Pop() & Pop()); // AND
    if (Pop() != 0)
    {
      Push(Read16(0x65e1+INST_dash_X.offset)); // INST-X<IFIELD> @
      Push(Read16(0x65e1+INST_dash_Y.offset)); // INST-Y<IFIELD> @
      UNK_0xed9b(); // UNK_0xed9b
      UNK_0xedaf(); // UNK_0xedaf
      Push(Pop() + Pop()); // +
      StoreD(); // D!
      UNK_0xedd5(); // UNK_0xedd5
    }
    IsLAST(); // ?LAST
    Exec("IsTERMINAL"); // call of word 0x25bc '(?TERMINAL)'
    Push(Pop() | Pop()); // OR
  } while(Pop() == 0);
  Push(2);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xef79: WORD 'DO-TMAPS' codep=0x224c parp=0xef86
// ================================================

void DO_dash_TMAPS() // DO-TMAPS
{
  UNK_0xeead(); // UNK_0xeead
  Push2Words("*STARSH");
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN
  Push(0x000b);
  Push(0x000f);
  IFIND(); // IFIND
  IOPEN(); // IOPEN
  if (Pop() != 0)
  {
    Push2Words("NULL");
    Push(0xeed1);
    SELECT_dash_(); // SELECT-
    if (Pop() != 0)
    {
      GetINST_dash_S(); // @INST-S
      Push(0x002e);
      _dash_(); // -
      Push(0x0028);
      SWAP(); // SWAP
      GetRECORD(); // @RECORD
      Push(0x0014);
      Push(Pop() + Pop()); // +
      _2_at_(); // 2@
      Push(pp_UNK_0xe37a); // UNK_0xe37a
      Store_2(); // !_2
      Push(pp_UNK_0xe37e); // UNK_0xe37e
      Store_2(); // !_2
      CI(); // CI
      Push(pp_TMAP); // TMAP
      _1_dot_5_ex__2(); // 1.5!_2
      UNK_0xea7c(); // UNK_0xea7c
      UNK_0xee51(); // UNK_0xee51
      UNK_0xe722(); // UNK_0xe722
      UNK_0xeb47(); // UNK_0xeb47
      UNK_0xee27(); // UNK_0xee27
    }
  }
  Push(3);
  _star_CLOSE(); // *CLOSE
}


// ================================================
// 0xefe0: WORD 'UNK_0xefe2' codep=0x224c parp=0xefe2
// ================================================

void UNK_0xefe2() // UNK_0xefe2
{
  UNK_0xe471(); // UNK_0xe471
  UNK_0xea52(); // UNK_0xea52
  DCLIPSE(); // DCLIPSE
  UNK_0xe722(); // UNK_0xe722
}


// ================================================
// 0xefec: WORD 'UNK_0xefee' codep=0x224c parp=0xefee
// ================================================

void UNK_0xefee() // UNK_0xefee
{
  UNK_0xeead(); // UNK_0xeead
  UNK_0xefe2(); // UNK_0xefe2
}


// ================================================
// 0xeff4: WORD 'UNK_0xeff6' codep=0x224c parp=0xeff6
// ================================================

void UNK_0xeff6() // UNK_0xeff6
{
  Push(pp_UNK_0xe4b7); // UNK_0xe4b7
  _099(); // 099
  Push(pp_UNK_0xe4b3); // UNK_0xe4b3
  Push(1);
  TOGGLE(); // TOGGLE
  UNK_0xefe2(); // UNK_0xefe2
  UNK_0xee51(); // UNK_0xee51
}


// ================================================
// 0xf006: WORD 'UNK_0xf008' codep=0x224c parp=0xf008
// ================================================

void UNK_0xf008() // UNK_0xf008
{
  Push(pp_UNK_0xe4b3); // UNK_0xe4b3
  _099(); // 099
  Push(pp_UNK_0xe4b7); // UNK_0xe4b7
  Push(1);
  TOGGLE(); // TOGGLE
  UNK_0xefe2(); // UNK_0xefe2
  UNK_0xef29(); // UNK_0xef29
}


// ================================================
// 0xf018: WORD 'UNK_0xf01a' codep=0x224c parp=0xf01a params=0 returns=2
// ================================================

void UNK_0xf01a() // UNK_0xf01a
{
  Push(Read16(pp_UNK_0xe37a)); // UNK_0xe37a @
  Push(8);
  _slash_(); // /
  Push(8);
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xe37a); // UNK_0xe37a
  Store_2(); // !_2
  Push(Read16(pp_UNK_0xe37e)); // UNK_0xe37e @
  Push(8);
  _slash_(); // /
  Push(8);
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xe37e); // UNK_0xe37e
  Store_2(); // !_2
}


// ================================================
// 0xf03c: WORD 'KEY>ACTION' codep=0x4b3b parp=0xf04b
// ================================================

void KEY_gt_ACTION() // KEY>ACTION
{
  switch(Pop()) // KEY>ACTION
  {
  case 315:
    UNK_0xeff6(); // UNK_0xeff6
    break;
  case 319:
    UNK_0xf008(); // UNK_0xf008
    break;
  case 321:
    DO_dash_TMAPS(); // DO-TMAPS
    break;
  default:
    UNK_0xefee(); // UNK_0xefee
    break;

  }
}

// ================================================
// 0xf05b: WORD 'UNK_0xf05d' codep=0x224c parp=0xf05d params=0 returns=0
// ================================================

void UNK_0xf05d() // UNK_0xf05d
{
  Push(Read16(pp_LKEY)); // LKEY @
  Push(Read16(regsp)); // DUP
  Push(0x013b);
  Push(0x0145);
  WITHIN(); // WITHIN
  if (Pop() != 0)
  {
    Push(pp_FTRIG); // FTRIG
    _099(); // 099
    KEY_gt_ACTION(); // KEY>ACTION case
    Push(pp_LKEY); // LKEY
    _099(); // 099
    return;
  }
  Pop(); // DROP
}


// ================================================
// 0xf083: WORD 'UNK_0xf085' codep=0x224c parp=0xf085
// ================================================

void UNK_0xf085() // UNK_0xf085
{
  do
  {
    XYSCAN(); // XYSCAN
    Push(0x00fa); Push(0x0000);
    Push(pp_KEYTIME); // KEYTIME
    _2_at_(); // 2@
    Push(pp_LKEYTIM); // LKEYTIM
    _2_at_(); // 2@
    D_dash_(); // D-
    D_gt_(); // D>
    Push(Read16(pp_UNK_0xe36a)); // UNK_0xe36a @
    Push(Pop() * Pop()); // *
    Push(Pop()*2); // 2*
    Push(1);
    MAX(); // MAX
    Push(0x000a);
    MIN(); // MIN
    Push(pp_UNK_0xe36a); // UNK_0xe36a
    Store_2(); // !_2
    Push(Read16(pp_UNK_0xe36a)); // UNK_0xe36a @
    Push(Pop() * Pop()); // *
    Push(Read16(cc__star_MAPSCA)); // *MAPSCA
    Push(Pop() * Pop()); // *
    Push(pp_UNK_0xe372); // UNK_0xe372
    Store_2(); // !_2
    Push(Read16(pp_UNK_0xe36a)); // UNK_0xe36a @
    Push(Pop() * Pop()); // *
    Push(Read16(cc__star_MAPSCA)); // *MAPSCA
    Push(Pop() * Pop()); // *
    Push(pp_UNK_0xe376); // UNK_0xe376
    Store_2(); // !_2
    UNK_0xebc7(); // UNK_0xebc7
    Push(Read16(pp_UNK_0xe372)); // UNK_0xe372 @
    Push(Read16(pp_UNK_0xe376)); // UNK_0xe376 @
    D0_eq_(); // D0=
    if (Pop() == 0) Push(1); else Push(0); // NOT
    if (Pop() != 0)
    {
      UNK_0xe722(); // UNK_0xe722
      Push(Read16(pp_UNK_0xe372)); // UNK_0xe372 @
      Push(pp_UNK_0xe37a); // UNK_0xe37a
      _plus__ex__2(); // +!_2
      Push(Read16(pp_UNK_0xe376)); // UNK_0xe376 @
      Push(pp_UNK_0xe37e); // UNK_0xe37e
      _plus__ex__2(); // +!_2
      UNK_0xf01a(); // UNK_0xf01a
      Push(Read16(pp_UNK_0xe37a)); // UNK_0xe37a @
      Push(Read16(pp_UNK_0xe37e)); // UNK_0xe37e @
      IsINVIS(); // ?INVIS
      if (Pop() == 0) Push(1); else Push(0); // NOT
      if (Pop() != 0)
      {
        UNK_0xea7c(); // UNK_0xea7c
        UNK_0xee51(); // UNK_0xee51
      }
      UNK_0xe722(); // UNK_0xe722
      UNK_0xeb47(); // UNK_0xeb47
      CLICK(); // CLICK
    }
    UNK_0xeeb7(); // UNK_0xeeb7
    UNK_0xe864(); // UNK_0xe864
    UNK_0xf05d(); // UNK_0xf05d
    IsTRIG(); // ?TRIG
  } while(Pop() == 0);
}


// ================================================
// 0xf119: WORD 'UNK_0xf11b' codep=0x224c parp=0xf11b
// ================================================

void UNK_0xf11b() // UNK_0xf11b
{
  unsigned short int i, imax;
  Push(3);
  Push(0);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
    UNK_0xe722(); // UNK_0xe722
    Push(0x00c8);
    MS(); // MS
    i++;
  } while(i<imax); // (LOOP)

}


// ================================================
// 0xf12f: WORD 'UNK_0xf131' codep=0x224c parp=0xf131 params=0 returns=0
// ================================================

void UNK_0xf131() // UNK_0xf131
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Push((Read16((0x65e1+UNK_0xe3a6.offset) + 1)&0xFF) & 7); // UNK_0xe3a6<IFIELD> 1+ C@ 7 AND
  Push(Read16(0x65e1+UNK_0xe3a6.offset)&0xFF); // UNK_0xe3a6<IFIELD> C@
  Push(0x0064);
  _star__slash_(); // */
  ICLOSE(); // ICLOSE
  Push(pp_UNK_0xe38e); // UNK_0xe38e
  Store_2(); // !_2
}


// ================================================
// 0xf151: WORD '(/STARMAP)' codep=0x224c parp=0xf160
// ================================================
// entry

void _ro__slash_STARMAP_rc_() // (/STARMAP)
{
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
  TIME(); // TIME
  _2_at_(); // 2@
  Push(pp_NAV_dash_TIM); // NAV-TIM
  _2_at_(); // 2@
  D_gt_(); // D>
  Push(Read16(pp_CONTEXT_3) & (Read16(pp_CONTEXT_3)==3?1:0)); // CONTEXT_3 @ CONTEXT_3 @ 3 = AND
  if (Pop() != 0)
  {
    UNK_0xf131(); // UNK_0xf131
    UNK_0xec84(); // UNK_0xec84
    Push(Read16(pp_BVIS)); // BVIS @
    Push(Read16(pp_LVIS)); // LVIS @
    UNK_0xeead(); // UNK_0xeead
    Push(7);
    Push(pp_CONTEXT_3); // CONTEXT_3
    Store_2(); // !_2
    Push(Read16(pp_LOCRADI)); // LOCRADI @
    Push(Read16(pp_XABS)); // XABS @
    Push(Read16(pp_YABS)); // YABS @
    UNK_0xe3c5(); // UNK_0xe3c5
    DCLIPSE(); // DCLIPSE
    UNK_0xe497(); // UNK_0xe497
    _gt_DISPLA(); // >DISPLA
    DARK(); // DARK
    _gt_HIDDEN(); // >HIDDEN
    DARK(); // DARK
    UNK_0xe585(); // UNK_0xe585
    UNK_0xe635(); // UNK_0xe635
    _gt_DISPLA(); // >DISPLA
    SCR_dash_RES(); // SCR-RES
    UNK_0xea7c(); // UNK_0xea7c
    UNK_0xeb47(); // UNK_0xeb47
    DCLIPSE(); // DCLIPSE
    Push(pp_XORMODE); // XORMODE
    _099(); // 099
    UNK_0xeb85(); // UNK_0xeb85
    UNK_0xea8c(); // UNK_0xea8c
    UNK_0xead0(); // UNK_0xead0
    UNK_0xeaf0(); // UNK_0xeaf0
    UNK_0xf11b(); // UNK_0xf11b
    UNK_0xf085(); // UNK_0xf085
    Push(Read16(pp_UNK_0xe37a)); // UNK_0xe37a @
    Push(Read16(pp_UNK_0xe37e)); // UNK_0xe37e @
    Push(pp_EYEXY); // EYEXY
    StoreD(); // D!
    Push(pp_YABS); // YABS
    Store_2(); // !_2
    Push(pp_XABS); // XABS
    Store_2(); // !_2
    Push(pp_LOCRADI); // LOCRADI
    Store_2(); // !_2
    Push(3);
    Push(pp_CONTEXT_3); // CONTEXT_3
    Store_2(); // !_2
    Push(0xec78);
    Push(Read16(regsp)); // DUP
    Push(pp_ANCHOR); // ANCHOR
    StoreD(); // D!
    ORGLIST(); // ORGLIST
    _gt_1ICONF(); // >1ICONF
    Push(8);
    Push(0x0030);
    Push(pp_YWLD_c_YP); // YWLD:YP
    StoreD(); // D!
    Push(8);
    Push(0x0020);
    Push(pp_XWLD_c_XP); // XWLD:XP
    StoreD(); // D!
    Push(pp_LVIS); // LVIS
    Store_2(); // !_2
    Push(pp_BVIS); // BVIS
    Store_2(); // !_2
    Push(pp_XLLDEST); // XLLDEST
    _099(); // 099
    Push(pp_YLLDEST); // YLLDEST
    _099(); // 099
    Push(1);
  } else
  {
    Push(Read16(pp_CONTEXT_3)); // CONTEXT_3 @
    Push(!(Read16(pp_CONTEXT_3)==3?1:0)); // CONTEXT_3 @ 3 = NOT
    NOMAP(); // NOMAP
    Push(0);
  }
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}

// 0xf232: db 0x2a 0x4d 0x41 0x50 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x2d 0x2d 0x2d 0x2d 0x5c 0x20 0x53 0x54 0x41 0x52 0x4d 0x41 0x50 0x20 0x4f 0x56 0x52 0x2d 0x28 0x20 0x72 0x66 0x67 0x30 0x39 0x73 0x65 0x70 0x38 0x38 0x29 0x0a 0x31 0x32 0x35 0x30 0x0f 0xe1 0x27 0xb8 0x27 0xdc 0x1b 0x01 0x47 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x54 0x48 0x49 0x4e 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0x81 0xf2 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x4d 0x4f 0x44 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x54 0x48 0x49 0x43 0x4b 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0xa9 0xf2 0x90 0x16 0xd3 0xf1 0x87 0x28 0x2e 0x41 0x54 0x4d 0x4f 0xa9 0x3b 0x4b 0x05 0x00 0x08 0xef 0x01 0x00 0x8e 0xf2 0x02 0x00 0x83 0xf2 0x03 0x00 0x9c 0xf2 0x04 0x00 0xab 0xf2 0x05 0x00 0xb7 0xf2 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x15 0x41 0x54 0x4d 0x4f 0x53 0x50 0x48 0x45 0x52 0x49 0x43 0x20 0x44 0x45 0x4e 0x53 0x49 0x54 0x59 0x3a 0x20 0x59 0xee 0xfa 0x15 0x08 0x00 0xd5 0xec 0x92 0x0c 0xcd 0xf2 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x04 0x43 0x41 0x4c 0x4d 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x08 0x4d 0x4f 0x44 0x45 0x52 0x41 0x54 0x45 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x07 0x56 0x49 0x4f 0x4c 0x45 0x4e 0x54 0x90 0x16 0x4c 0x22 0xdc 0x1b 0x05 0x56 0x45 0x52 0x59 0x20 0x2b 0xf3 0x90 0x16 0x79 0xed 0x88 0x28 0x2e 0x57 0x45 0x41 0x54 0x48 0xa9 0x3b 0x4b 0x04 0x00 0x08 0xef 0x01 0x00 0x13 0xf3 0x02 0x00 0x1e 0xf3 0x03 0x00 0x2d 0xf3 0x04 0x00 0x3b 0xf3 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x10 0x47 0x4c 0x4f 0x42 0x41 0x4c 0x20 0x57 0x45 0x41 0x54 0x48 0x45 0x52 0x3a 0x20 0x59 0xee 0xfa 0x15 0x08 0x00 0xcd 0xec 0xae 0x0b 0x52 0xf3 0x90 0x16 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x11 0x20 0x53 0x50 0x45 0x43 0x54 0x52 0x41 0x4c 0x20 0x43 0x4c 0x41 0x53 0x53 0x3a 0x20 0xd2 0x9f 0x34 0x75 0x6b 0x06 0x90 0x16 0x29 0x1d 0x4d 0x4b 0x47 0x46 0x41 0x42 0x4f 0x4c 0x22 0xb4 0x0d 0x3d 0x0f 0x9f 0x3b 0x20 0x0f 0xb8 0x15 0xe7 0x0f 0xad 0xf3 0x50 0x0e 0x72 0x0f 0x92 0x0c 0x6e 0x0e 0x5f 0x12 0xfa 0x15 0x04 0x00 0x4a 0x17 0xd0 0x15 0xea 0xff 0x90 0x0e 0x32 0x0e 0x90 0x16 0x4c 0x22 0x99 0xee 0xdc 0x1b 0x0c 0x20 0x45 0x43 0x4f 0x53 0x50 0x48 0x45 0x52 0x45 0x3a 0x20 0x34 0x75 0xb6 0xf3 0x41 0x0e 0xd2 0x9f 0x7f 0x3b 0x92 0x0f 0x2e 0x0f 0x89 0x11 0xb8 0x27 0xdc 0x1b 0x02 0x2d 0x20 0xa7 0x3b 0xad 0x11 0xb8 0x27 0x90 0x16 0x4c 0x22 0x2d 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b 0x00 0xf2 0x0e 0x4c 0x7e 0x32 0x0e 0x3f 0x7a 0xd2 0x9f 0x5d 0x17 0x45 0xbe 0xd9 0x84 0x7f 0x3b 0x0a 0x7a 0x90 0x16 0x4c 0x22 0xd2 0x9f 0x5d 0x17 0xd6 0x00 0x12 0xf4 0x90 0x16 0x4c 0x22 0x02 0xee 0x90 0x16 0x4c 0x22 0x7c 0xf0 0x90 0x16 0x4c 0x22 0xeb 0xee 0x02 0xee 0x51 0xef 0xf5 0xef 0x90 0x16 0x00 0x00 0x8a 0x28 0x2e 0x56 0x2f 0x50 0x2d 0x4f 0x42 0x4a 0xa9 0x3b 0x4b 0x02 0x00 0x4e 0xf4 0x16 0x00 0x42 0xf4 0x00 0x00 0x48 0xf4 0x4c 0x22 0x34 0x75 0x65 0xf4 0x90 0x16 0x4c 0x22 0xb3 0xf0 0xf5 0xf1 0x1f 0xf2 0xe7 0xf2 0x56 0xf1 0x68 0xf3 0x90 0x16 0x4c 0x22 0x8d 0xf3 0xe0 0xf3 0x90 0x16 0x5a 0xf4 0x8b 0x28 0x2e 0x41 0x4e 0x41 0x4c 0x59 0x53 0x49 0x53 0xa9 0x3b 0x4b 0x04 0x00 0x6e 0x3a 0x20 0x00 0x7d 0xf4 0x17 0x00 0x8d 0xf4 0x19 0x00 0x75 0xf4 0x3c 0x00 0x36 0xf4 0x95 0xf4 0x8b 0x28 0x2f 0x41 0x4e 0x41 0x4c 0x59 0x53 0x49 0x53 0xa9 0x4c 0x22 0xd2 0x9f 0x46 0x9c 0x0c 0x63 0x83 0x4a 0xf0 0x0d 0xa5 0x10 0x16 0x16 0x02 0x00 0x00 0x00 0x14 0x40 0xfa 0x15 0x16 0x00 0x1f 0x7a 0x9d 0xed 0x22 0x75 0xa1 0xf4 0xdf 0x79 0x16 0x16 0x58 0x1b 0x00 0x00 0x60 0x16 0x57 0x00 0x3e 0x13 0xfa 0x15 0x26 0x00 0xdc 0x1b 0x1d 0x49 0x20 0x53 0x41 0x49 0x44 0x20 0x54 0x48 0x45 0x52 0x45 0x27 0x53 0x20 0x4e 0x4f 0x54 0x48 0x49 0x4e 0x47 0x20 0x54 0x48 0x45 0x52 0x45 0x21 0x60 0x16 0x25 0x00 0xdc 0x1b 0x20 0x49 0x20 0x4e 0x45 0x45 0x44 0x20 0x41 0x20 0x43 0x55 0x52 0x52 0x45 0x4e 0x54 0x20 0x53 0x45 0x4e 0x53 0x4f 0x52 0x20 0x52 0x45 0x41 0x44 0x49 0x4e 0x47 0x2e 0x32 0x0e 0x16 0x16 0xdc 0x05 0x00 0x00 0x98 0x2a 0x38 0x0c 0x65 0x10 0x4f 0x64 0x4c 0x6d 0xa6 0x49 0x0c 0x63 0x32 0x6d 0x90 0x16 0x41 0x4e 0x2d 0x56 0x4f 0x43 0x00 '*MAP____________________________----\ STARMAP OVR-( rfg09sep88) 1250  ' '   G  L"   THIN  L"   VERY     L"   MODERATE  L"   THICK  L"   VERY        (.ATMO ;K                        L"     ATMOSPHERIC DENSITY: Y             L"   CALM  L"   MODERATE  L"   VIOLENT  L"   VERY +   y  (.WEATH ;K              -   ; L"     GLOBAL WEATHER: Y         R   L"      SPECTRAL CLASS:   4uk   ) MKGFABOL"  =  ;        P r   n _     J       2   L"      ECOSPHERE: 4u  A   ;  .    '   -  ;   '  L"-l z?z]     L~2 ?z  ] E   ; z  L"  ]       L"    L"|   L"    Q        (.V/P-OBJ ;K  N   B   H L"4ue   L"        V h   L"      Z  (.ANALYSIS ;K  n:  }       u < 6    (/ANALYSIS L"  F  c J           @     z  "u   y  X   ` W >   &    I SAID THERE'S NOTHING THERE!` %    I NEED A CURRENT SENSOR READING.2        *8 e OdLm I c2m  AN-VOC '

