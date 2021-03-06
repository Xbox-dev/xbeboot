#ifndef _BootParser_H_
#define _BootParesr_H_

#define MAX_LINE 1024

typedef struct _CONFIGENTRY {
        int  nValid;
	char szPath[MAX_LINE];
        char szKernel[MAX_LINE];
        char szInitrd[MAX_LINE];
        char szAppend[MAX_LINE];
	int vmode;
} CONFIGENTRY, *LPCONFIGENTRY;

int ParseConfig(char *szPath,char *szBuffer, CONFIGENTRY *entry);
void PrintConfig(CONFIGENTRY *entry);

#endif // _BootParser_H_
