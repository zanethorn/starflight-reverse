#ifndef DATA_H
#define DATA_H

typedef enum
{
  DIRECTORYIDX = 0,
  INSTANCEIDX = 1,
  IROOTIDX = 2,
  ISYSTEMIDX = 3,
  INACTIVEIDX = 4,
  FRAGMENTIDX = 5,
  ELO_CPICIDX = 6,
  IAPPLICATIONIDX = 7,
  GAZ_CPICIDX = 8,
  MEC_CPICIDX = 9,
  BOOT_KERNELIDX = 10,
  BOXIDX = 11,
  STARPORTIDX = 12,
  BANKIDX = 13,
  BANK_TRANSIDX = 14,
  PERSONNELIDX = 15,
  CREWMEMBERIDX = 16,
  ASSIGN_CREWIDX = 17,
  SHIP_CONFIGIDX = 18,
  TRADE_DEPOTIDX = 19,
  SHIPIDX = 20,
  MYS_CPICIDX = 21,
  TIMEIDX = 22,
  STARSYSTEMIDX = 23,
  STARIDX = 24,
  VESSELIDX = 25,
  ELEMENTIDX = 26,
  MESSAGEIDX = 27,
  ARTIFACTIDX = 28,
  PROJECTILEIDX = 29,
  NOM_CPICIDX = 30,
  SPE_CPICIDX = 31,
  PLANETIDX = 32,
  THR_CPICIDX = 33,
  OPERATIONSIDX = 34,
  NOTICEIDX = 35,
  EVALUATIONIDX = 36,
  VEL_CPICIDX = 37,
  VPR_CPICIDX = 38,
  MIN_CPICIDX = 39,
  SPECIMENIDX = 40,
  RUINIDX = 41,
  TVEHICLEIDX = 42,
  BIO_DATAIDX = 43,
  TPORT_PICIDX = 44,
  FLUX_NODEIDX = 45,
  NEBULAIDX = 46,
  CAPT_LOGIDX = 47,
  STRINGIDX = 48,
  BPORT_PICIDX = 49,
  PHRASECONTRLIDX = 50,
  SUBJECTIDX = 51,
  ORIGINATORIDX = 52,
  MESSAGE_IDX = 53,
  SPLASHIDX = 54,
  TEXTIDX = 55,
  SCROLL_TEXTIDX = 56,
  ANALYZE_TEXTIDX = 57,
  BUTTONSIDX = 58,
  BLT_HEADIDX = 59,
  MED_PICIDX = 60,
  ENCOUNTERIDX = 61,
  ICON1_1IDX = 62,
  ICON1_2IDX = 63,
  ICON1_4IDX = 64,
  ICON_NAMEIDX = 65,
  DPART_OVIDX = 66,
  REGIONSIDX = 67,
  CREATUREIDX = 68,
  PHAZESIDX = 69,
  CHKFLIGHT_OVIDX = 70,
  FRACT_OVIDX = 71,
  ICONP_OVIDX = 72,
  SITE_OVIDX = 73,
  HYPERMSG_OVIDX = 74,
  GPOLYIDX = 75,
  FACETIDX = 76,
  VERTEXIDX = 77,
  BLT_OVIDX = 78,
  MISC_OVIDX = 79,
  BANK_OVIDX = 80,
  ASSCREW_OVIDX = 81,
  PERSONNEL_OVIDX = 82,
  SHIPGRPH_OVIDX = 83,
  CONFIG_OVIDX = 84,
  TDEPOT_OVIDX = 85,
  EDIT_OVIDX = 86,
  PORTMENU_OVIDX = 87,
  VITA_OVIDX = 88,
  HP_OVIDX = 89,
  LP_OVIDX = 90,
  SENT_OVIDX = 91,
  TV_OVIDX = 92,
  COMM_OVIDX = 93,
  COMMSPEC_OVIDX = 94,
  SEED_OVIDX = 95,
  LISTICONSIDX = 96,
  MOVE_OVIDX = 97,
  ENGINEERIDX = 98,
  DOCTORIDX = 99,
  ORBIT_OVIDX = 100,
  CAPTAINIDX = 101,
  SCIENCEIDX = 102,
  NAVIGATRIDX = 103,
  SHIPBUTTONSIDX = 104,
  _MAP_OVIDX = 105,
  HYPER_OVIDX = 106,
  ANALYZE_OVIDX = 107,
  LAUNCH_OVIDX = 108,
  FLUX_EFFECTIDX = 109,
  OP_OVIDX = 110,
  ITEMS_OVIDX = 111,
  LSYSICONIDX = 112,
  MSYSICONIDX = 113,
  SSYSICONIDX = 114,
  BEHAV_OVIDX = 115,
  CMAPIDX = 116,
  INSTALLIDX = 117,
  HEAL_OVIDX = 118,
  REPAIR_OVIDX = 119,
  GAME_OVIDX = 120,
  PLSET_OVIDX = 121,
  MAPS_OVIDX = 122,
  VES_BLTIDX = 123,
  STORM_OVIDX = 124,
  HUM_PICIDX = 125,
  VEL_PICIDX = 126,
  THR_PICIDX = 127,
  ELO_PICIDX = 128,
  AND_PICIDX = 129,
  COMPOUNDSIDX = 130,
  IT_OVIDX = 131,
  COMBAT_OVIDX = 132,
  DAMAGE_OVIDX = 133,
  LAND_OVIDX = 134,
  PSTATSIDX = 135,
  SAVEIDX = 136,
  MUSICIDX = 137,
  EARTHIDX = 138,
  STP_OVIDX = 139,
  GALAXYIDX = 140,
  CREDITSIDX = 141,
  COP_CPICIDX = 142,
  FONTSIDX = 143,
} FILEINDEXES;

char *BOX_STRINGS[] =
{
  "                ",
  "SECS            ",
  "SEC             ",
  "STARSYSTEMS     ",
  "ORBIT           ",
  "                ",
  "ENVIRONMENTAL   ",
  "MERCATORS       ",
  "-CONTOUR-REGION ",
  "POSITIVE-OBJECTS",
  "ELEMENTS        ",
  "LIFEFORMS       ",
  "MOBILE          ",
  "SESSILE         ",
  "SPECIMENS       ",
  "ARTIFACTS       ",
  "RUINS           ",
  "MESSAGES        ",
  "NEGATIVE-OBJECTS",
  "OLD-CONTOURS    ",
  "CONTOUR-REGION  ",
  "CONTOURS        ",
  "ITEMS FOR SALE  ",
  "STARSHIP HOLD   ",
  "TILES           ",
  "FLUX-NODES      ",
  "GAS-CLOUDS      ",
  "ENCOUNTERS      ",
  "NOTICES         ",
  "PICTURES        ",
  "ALIEN-PICS      ",
  "SENSOR-PICS     ",
  "STARPORT-PICS   ",
  "TITLE-PICS      ",
  "WORDS           ",
  "PHRASES         ",
  "COMMUNICATIONS  ",
  "LIFEFORM-PICS   ",
  "BIO-DATA        ",
  "SPECIAL PHRASES ",
  "TERRAIN VEHICLE ",
  "SCROLL-TEXTS    ",
  "GEN-PHRASE      ",
  "CAPTAIN'S LOG   ",
  "PLANET SURFACE  ",
  "EVALUATIONS     ",
  "SUPER BOX       ",
  "RANDOM MESSAGES ",
  "DEBRIS          ",
  "TEMPORARY       ",
  "END OF LIST     ",
  "                ",
  "                ",
  "                ",
  "                ",
  "                ",
  "                ",
  "                ",
  "                ",
  "                ",
  "                ",
  "                ",
  "                ",
  "                "
};

char *BANKTRANS_STRINGS[] =
{
  "FINE",
  "SHIP CONFIGURATION",
  "TRADE DEPOT",
  "BONUS",
  "PERSONNEL",
  "INTEREST",
  "GAME PURCHASE"
};

char *ANALYZETEXT_STRINGS[] =
{
  "ANALYSIS OF THIS ARTIFACT HAS REVEALEDVERY LITTLE OF INTEREST. IT HAS SLIGHTVALUE AS AN ALIEN CURIO, BUT OTHERWISEIS TOTALLY USELESS TO US.                                                   ",
  "OUR GUESS IS THIS IS SOME DEVICE OF   THE ANCIENTS. BEYOND THAT, WE CAN'T   TELL.                                                                                                             ",
  "THIS APPEARS TO BE A BOMB OF SOME     SORT. THE TYPE IS UNFAMILIAR. TO      ACTIVATE IT, YOU MUST DROP IT.                                                                                    ",
  "THIS IS CRAFTED OF ENDURIUM. IT       DOESN'T APPEAR TO HAVE ANY FUNCTION   OTHER THAN BEING DECORATIVE.                                                                                      ",
  "THIS WAS FOUND IN THE UNDERGROUND     COLONY. WE'RE NOT SURE WHAT IS DOES.  WE THINK IT HAS SOMETHING TO DO WITH  COMMUNICATION.                                                              ",
  "THIS DEVICE WILL PROJECT A SHIELD     AROUND YOUR TERRAIN VEHICLE WHICH     MAKES IT DIFFICULT FOR DANGEROUS      LIFEFORMS TO ATTACK YOU.                                                    ",
  "THIS APPEARS TO BE A DEVICE OF THE OLDEMPIRE THAT PROJECTS AN ENHANCED LASERSHIELD AROUND A SPACESHIP.                                                                                        ",
  "THIS IS A DEVICE OF THE OLD EMPIRE    THAT PROJECTS A FIELD WHICH DOUBLES   THE ENERGY EFFICIENCY OF A SHIP'S     ENGINES.                                                                    ",
  "THIS IS AN ANCIENT SHIP NAVIGATIONAL  AID. IT WILL IDENTIFY ANY NEARBY      CONTINUUM FLUX.                                                                                                   ",
  "THIS APPEARS TO BE A 4-DIMENSIONAL    PUZZLE COMPOSED OF MANY MULTI-COLORED CUBES. ITS USE PRODUCES AN OVER-      WHELMING FEELING OF ATARAXIA.                                               ",
  "THIS ARTIFACT SEEMS TO BE A CLOAKING  DEVICE. AS FAR AS WE CAN TELL IT      SHOULD OPERATE AUTOMATICALLY DURING   COMBAT.                                                                     ",
  "WE CAN'T FIGURE OUT EXACTLY WHAT THIS IS. IT SLICES, IT DICES, IT EVEN MAKESJULIENNE FRIES!                                                                                                   ",
  "THIS SEEMS TO BE AN ORBITAL SCANNER OFSOME SORT. WE'RE NOT SURE WHAT IT'S   TUNED TO LOCATE THOUGH.                                                                                           ",
  "THIS IS SOME SORT OF TRANSMITTER. IT  IS BROADCASTING CONTINUALLY ON SEVERALBANDS. THE NET EFFECT SHOULD BE THAT  IT WILL ATTRACT THE ATTENTION OF      ANYONE IN THE AREA.                   ",
  "THIS SEEMS TO BE A DEVICE OF THE      ANCIENTS, BUT WE CAN'T FIGURE OUT WHATIT DOES. IT CONTAINS A TREMENDOUS     AMOUNT OF ENERGY.                                                           ",
  "THE REMAINS OF AN OLDER, INFERIOR     MODEL TERRAIN VEHICLE, DOUBTLESSLY    LEFT HERE BY SOME PRIOR EXPLORATION   PARTY TOO FOOLISH TO RETURN TO THEIR  SHIP BEFORE EXHAUSTING THEIR ENERGY.  "
};

char *SPECIMEN_STRINGS[] =
{
  "                ",
  "AMORPHOUS.......",
  "IRREGULAR.......",
  "SPHERICAL.......",
  "RADIAL..........",
  "BILATERAL.......",
  "AMOEBOID........",
  "TREE-LIKE.......",
  "BALLOON-LIKE....",
  "ANTELOPE-LIKE...",
  "BIRD-LIKE.......",
  "DINOSAUR-LIKE...",
  "HUMANOID........",
  "INSECTOID.......",
  "PLANT-LIKE......",
  "BEAR-LIKE.......",
  "REPTILIAN.......",
  "RODENT-LIKE.....",
  "SLUG-LIKE.......",
  "SNAIL-LIKE......",
  "SNAKE-LIKE......",
  "SPIDER-LIKE.....",
  "TURTLE-LIKE.....",
  "ROCK-LIKE.......",
  "FUNGOID.........",
  "EWOK-LIKE.......",
  "STARFISH-LIKE...",
  "ANEMONE-LIKE...."
};

typedef struct { int idx; int d1, surftype, mass, lseed, tseed, d8, min, d2, d3, d4, d5, d6, coldest, warmest, atmoactivity, atmodensity, d7; } PLANETENTRY;

PLANETENTRY planets[]=
{
  {.idx= 0, .d1=32, .surftype=32, .mass=8224, .lseed= 32, .d8= 8224, .tseed=0x2020, .d8= 32, .min= 32, .d2= 32, .d3= 32, .d4=32, .d5=32, .d6=32, .coldest=32, .warmest=8224, .atmoactivity=32, .atmodensity=32, .d7=32},
  {.idx= 1, .d1= 1, .surftype= 4, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx= 2, .d1= 2, .surftype= 4, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx= 3, .d1= 3, .surftype= 4, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx= 4, .d1= 4, .surftype= 4, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx= 5, .d1= 1, .surftype= 5, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx= 6, .d1= 2, .surftype= 5, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx= 7, .d1= 3, .surftype= 5, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx= 8, .d1= 4, .surftype= 5, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx= 9, .d1= 1, .surftype= 2, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=10, .d1= 2, .surftype= 2, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=11, .d1= 3, .surftype= 2, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=12, .d1= 4, .surftype= 2, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=13, .d1= 1, .surftype= 3, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=14, .d1= 2, .surftype= 3, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=15, .d1= 3, .surftype= 3, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=16, .d1= 4, .surftype= 3, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=17, .d1= 5, .surftype= 1, .mass=   0, .lseed=  0, .d8=    0, .tseed=0x0000, .d8=  0, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=18, .d1= 7, .surftype= 2, .mass= 100, .lseed=  0, .d8=  199, .tseed=0x03b8, .d8= 13, .min=  0, .d2=255, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=19, .d1= 4, .surftype= 2, .mass= 415, .lseed=  0, .d8=  299, .tseed=0x017e, .d8= 51, .min= 60, .d2=128, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=20, .d1= 2, .surftype= 3, .mass=  70, .lseed=  0, .d8=  399, .tseed=0x0290, .d8=204, .min=100, .d2= 51, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=21, .d1= 2, .surftype= 5, .mass=  65, .lseed=  0, .d8=  499, .tseed=0x000d, .d8= 77, .min=150, .d2= 89, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=22, .d1= 3, .surftype= 5, .mass=  90, .lseed=  0, .d8=  599, .tseed=0x018f, .d8= 77, .min=175, .d2=153, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=23, .d1= 6, .surftype= 0, .mass= 101, .lseed=  0, .d8=    0, .tseed=0x006e, .d8= 75, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=24, .d1= 3, .surftype= 2, .mass=  95, .lseed=255, .d8=  699, .tseed=0x01d2, .d8=102, .min=120, .d2=179, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=25, .d1= 4, .surftype= 3, .mass= 250, .lseed= 77, .d8=  799, .tseed=0x00b6, .d8=128, .min=200, .d2= 51, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=26, .d1= 2, .surftype= 2, .mass=  60, .lseed=204, .d8=  899, .tseed=0x0007, .d8= 64, .min= 51, .d2=153, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=27, .d1= 2, .surftype= 3, .mass=  80, .lseed= 51, .d8=  999, .tseed=0x0003, .d8= 77, .min=250, .d2=128, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=28, .d1= 3, .surftype= 2, .mass= 109, .lseed=179, .d8=  109, .tseed=0x00ea, .d8=153, .min=128, .d2=153, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=29, .d1= 4, .surftype= 2, .mass= 140, .lseed=230, .d8=  119, .tseed=0x000c, .d8=115, .min=150, .d2= 77, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=30, .d1= 2, .surftype= 2, .mass=  76, .lseed=255, .d8=  119, .tseed=0x00d2, .d8=204, .min= 80, .d2=179, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=31, .d1= 4, .surftype= 3, .mass= 180, .lseed= 20, .d8=  139, .tseed=0x0168, .d8= 40, .min= 30, .d2=102, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=32, .d1= 2, .surftype= 2, .mass= 250, .lseed= 89, .d8=  197, .tseed=0x003e, .d8= 51, .min= 50, .d2=153, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=33, .d1= 3, .surftype= 5, .mass= 105, .lseed= 64, .d8=  159, .tseed=0x024e, .d8= 51, .min= 70, .d2= 38, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=34, .d1= 3, .surftype= 2, .mass= 100, .lseed=153, .d8=  169, .tseed=0x03b9, .d8=166, .min=100, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=35, .d1= 2, .surftype= 2, .mass=  55, .lseed=230, .d8=  179, .tseed=0x21e3, .d8= 55, .min= 75, .d2=128, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=36, .d1= 4, .surftype= 3, .mass= 180, .lseed= 38, .d8=  189, .tseed=0x00ce, .d8= 38, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=37, .d1= 2, .surftype= 2, .mass=  72, .lseed=255, .d8=  209, .tseed=0x033c, .d8= 85, .min=120, .d2= 32, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=38, .d1= 3, .surftype= 3, .mass=  94, .lseed= 89, .d8=  205, .tseed=0x009b, .d8= 45, .min=200, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=39, .d1= 4, .surftype= 2, .mass= 125, .lseed=255, .d8=  229, .tseed=0x0042, .d8=185, .min=150, .d2= 40, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=40, .d1= 4, .surftype= 3, .mass= 400, .lseed= 70, .d8=  239, .tseed=0x0180, .d8=200, .min=150, .d2= 60, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=41, .d1= 4, .surftype= 5, .mass= 280, .lseed= 85, .d8=  249, .tseed=0x0071, .d8= 70, .min= 80, .d2= 35, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=42, .d1= 2, .surftype= 3, .mass=  88, .lseed=145, .d8=  259, .tseed=0x0009, .d8=153, .min=175, .d2= 45, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=43, .d1= 4, .surftype= 2, .mass= 115, .lseed=255, .d8=10101, .tseed=0x00b2, .d8= 20, .min=150, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=44, .d1= 1, .surftype= 5, .mass=   3, .lseed=  0, .d8=  279, .tseed=0x0419, .d8=255, .min=255, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=45, .d1= 1, .surftype= 4, .mass=  20, .lseed=  0, .d8=  289, .tseed=0x007d, .d8=255, .min= 50, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=46, .d1= 2, .surftype= 2, .mass=  50, .lseed=160, .d8=  309, .tseed=0x005c, .d8=115, .min=150, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=47, .d1= 2, .surftype= 2, .mass=  89, .lseed=220, .d8=  319, .tseed=0x0167, .d8= 70, .min= 75, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=48, .d1= 4, .surftype= 2, .mass= 210, .lseed=255, .d8=  329, .tseed=0x006b, .d8= 10, .min=100, .d2=175, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=49, .d1= 3, .surftype= 2, .mass=  99, .lseed=255, .d8=  339, .tseed=0x01c5, .d8=130, .min=130, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=50, .d1= 2, .surftype= 3, .mass=  77, .lseed=150, .d8=  349, .tseed=0x006d, .d8= 25, .min=150, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=51, .d1= 3, .surftype= 2, .mass=  95, .lseed=125, .d8=  359, .tseed=0x0076, .d8= 50, .min=255, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=52, .d1= 4, .surftype= 3, .mass= 370, .lseed=135, .d8=  369, .tseed=0x01c3, .d8=153, .min=200, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=53, .d1= 4, .surftype= 2, .mass= 178, .lseed= 77, .d8=  379, .tseed=0x0033, .d8= 77, .min=200, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=54, .d1= 3, .surftype= 2, .mass= 100, .lseed=190, .d8=  389, .tseed=0x0075, .d8=128, .min=150, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=55, .d1= 2, .surftype= 5, .mass=  65, .lseed=153, .d8=  409, .tseed=0x0073, .d8= 13, .min=180, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=56, .d1= 4, .surftype= 2, .mass= 200, .lseed=204, .d8=  419, .tseed=0x0bb8, .d8= 75, .min=  0, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=57, .d1= 4, .surftype= 3, .mass= 140, .lseed=130, .d8=  429, .tseed=0x00c5, .d8=120, .min=255, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=58, .d1= 3, .surftype= 5, .mass= 108, .lseed=255, .d8=  439, .tseed=0x0057, .d8=100, .min=  0, .d2=255, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=59, .d1= 2, .surftype= 2, .mass=  85, .lseed=255, .d8=  449, .tseed=0x0173, .d8=255, .min=200, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
  {.idx=60, .d1= 4, .surftype= 2, .mass= 790, .lseed=255, .d8=  459, .tseed=0x00de, .d8=180, .min= 50, .d2=  0, .d3=  0, .d4= 0, .d5= 0, .d6= 0, .coldest= 0, .warmest= 0, .atmoactivity= 0, .atmodensity= 0, .d7= 0},
};


char cmap[][0x40]=
{
  {0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
  {0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0xbb, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
  {0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
  {0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22},
  {0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc},
  {0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
  {0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
  {0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
  {0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa},
  {0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa},
  {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0a, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},
  {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},
  {0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0b, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f},
  {0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07},
  {0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x0c, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x0e, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07},
};

#endif
