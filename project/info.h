#include <stdio.h>
#include <string.h>
#define MAX_P 10
#define MAX_N 80
typedef struct information {    
        char name[20];    
        char id[20];    
        char psw[20];    
        char sch[20];    
        char city[20];    
        char age[4];    
        char title[80][20];    
        char memo[80][200];    
        char stime[80][30];}info;
info arr[10];
int npnum = 0; // For New User Numberint 
pnum = 0; // Now User Numberint 
osnum = 0; // Occupied Userint 
tnum[10] = {0,}; // Memo Number fo Each User 
