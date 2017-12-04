#include<stdio.h>
#include<string.h>
#include<termios.h>
#include<time.h>


void Loadtext1(info *arr, int *tnum, int *osnum)
{
    FILE *file = fopen("memo.txt", "rb");

    if(file == NULL)
    {
        return;
    }

    while(1)
    {
        fread((arr + tnum[*osnum]) -> memo, sizeof(arr[tnum[*osnum]].memo), 1, file);     
        if(feof(file) != 0)
        {
            break;
        }
        (tnum[*osnum])++;

    }

}

void Savetext1(info *arr, int *tnum, int *osnum)
{

    int i;
    FILE *file = fopen("memo.txt", "wb");

    if(file == NULL)
    {
        return;
    }

    for(i = 0;i < (tnum[*osnum]) + 1; i++)
    {
        fwrite((arr + i) -> memo, sizeof(arr[i].memo), 1, file);
    }

}

void savetime(info *arr, int *osnum, int *tnum)
{

    time_t now;
    struct tm t;


    time(&now);
    t = *localtime(&now);
    
    arr[*osnum].stime[tnum[*osnum]][0] = t.tm_year+1900;
    arr[*osnum].stime[tnum[*osnum]][1] = t.tm_mon+1;
    arr[*osnum].stime[tnum[*osnum]][2] = t.tm_mday;
    arr[*osnum].stime[tnum[*osnum]][3] = t.tm_hour;
    arr[*osnum].stime[tnum[*osnum]][4] = t.tm_min;
    arr[*osnum].stime[tnum[*osnum]][5] = t.tm_sec;
    

}

void presenttime()
{

    time_t now;
    struct tm t;


    time(&now);
    t = *localtime(&now);
    

    printf("Present Time : %4d.%d.%d %d:%d:%d\n", t.tm_year+1900, 
    t.tm_mon+1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);

}

void to_write_note(info *arr, int *tnum, int *osnum, int *pnum)
{
    
    char tmp[200];
    char ch;
    int i = 0;
    int j;
    int flag = 0;

        
    printf("//////////////////////////////////\n ");
    
    while(1)
    {

        if(flag != 2)
        {
            ch = getchar();
            if(ch  == '\n')
            {
                flag++;
            } 
            else
                flag = 0;
        
            tmp[i] =  ch;
            i++;
            ch = getchar();
        
        }
        else if(flag == 2)
        {
            break;
        }
    }

    tmp[strlen(tmp) - 1] = '\0';
    strncpy(arr[tnum[*osnum]].memo[*osnum], tmp, strlen(tmp) - 1);
    
    int flag1 = 0;
    
    for(j = 0;j < 19;j++)
    {
        if(tmp[j] == ' ')
        {
            flag1++;
        }
        if(flag1 == 3)
        {
            strncpy(arr[tnum[*osnum]].title[*osnum], tmp, j);
            break;
        }
        
    }
    
    
}

void To_view_note(info *arr, int *tnum, int *osnum, int *pnum)
{   

    int i, j;

    for(i = 0;i < *pnum;i++)
    {
        printf("------------------------------------\n");
        for(j = 0;j < tnum[*osnum];j++)
        {
            printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
            printf("%4d.%d.%d  %d:%d:%d\n", arr[i].stime[j][0], arr[i].stime[j][1], arr[i].stime[j][2], arr[i].stime[j][3], arr[i].stime[j][4], arr[i].stime[j][5]);
            printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n");
            printf("%s", arr[i].memo[j]);
        }
        printf("------------------------------------\n");
    }

}
        
