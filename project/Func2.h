#include<stdio.h>
#include<string.h>
#include<termios.h>
#include<time.h>
#define MAX_P 10
#define MAX_N 80

void Loadtext1(info *arr, int *mnum)
{
    FILE *file = fopen("memo.txt", "rb");

    if(file == NULL)
    {
        return;
    }

    while(1)
    {
        fread((arr + *mnum) -> memo, sizeof(arr[*mnum].memo), 1, file);     
        if(feof(file) != 0)
        {
            break;
        }
        (*mnum)++;

    }

}

void Savetext1(info *arr, int *mnum)
{
    int i;
    FILE *file = fopen("memo.txt", "wb");

    if(file == NULL)
    {
        return;
    }

    for(i = 0;i < (*mnum) + 1; i++)
    {
        fwrite((arr + i) -> memo, sizeof(arr[i].memo), 1, file);
    }

}

void savetime(info *arr, int *npnum)
{

    time_t now;
    struct tm t;


    time(&now);
    t = *localtime(&now);
    
    arr[*npnum].time[0] = t.tm_year+1900;
    arr[*npnum].time[1] = t.tm_mon+1;
    arr[*npnum].time[2] = t.tm_mday;
    arr[*npnum].time[3] = t.tm_hour;
    arr[*npnum].time[4] = t.tm_min;
    arr[*npnum].time[5] = t.tm_sec;
    

}

void signintime()
{

    time_t now;
    struct tm t;


    time(&now);
    t = *localtime(&now);
    

    printf("Log in Time : %4d.%d.%d %d:%d:%d\n", t.tm_year+1900, 
    t.tm_mon+1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);

}
int getch()
{
    int ch;
    struct termios buf;
    struct termios save;

    tcgetattr(0, &save);
    buf = save;

    buf.c_lflag &= ~(ICANON|ECHO);
    buf.c_cc[VMIN] = 1;
    buf.c_cc[VTIME] = 0;

    tcsetattr(0, TCSAFLUSH, &buf);
    ch = getchar();
    tcsetattr(0, TCSAFLUSH, &save);

    return ch;

}

void to_write_note
{
    
    char temp[200];
    char ch;
    int i = 0;
    int flag = 0;

    printf("//////////////////////////////////\n ");
    
