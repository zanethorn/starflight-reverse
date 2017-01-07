#ifndef EXTRACT_H
#define EXTRACT_H

typedef struct DIRENTRY
{
    int idx;
    char name[13];
    unsigned char fileno; // STARA = 1, STARB = 2
    unsigned short start, end, nblocks;
    unsigned char blocksize;
    unsigned char lsize;
} DIRENTRY;

extern DIRENTRY dir[512];
extern int ndir;

typedef struct
{
    int storeofs;
    int ovlsize;
    int size;
    unsigned char *buf;
} OVLHeader;

char* Extract(int diridx, int *size);
void LoadDir(FILE *fp);
unsigned short GetStartAddress(int diridx);
char* FindDirEntry(int startaddr);
void LoadOverlay(int ovidx, OVLHeader *head, unsigned char *mem);

#endif
