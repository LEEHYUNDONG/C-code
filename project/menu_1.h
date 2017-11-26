#include<stdio.h>
#include<string.h>
#include<termios.h>
#include"info.h"
#define MAX_P 10
#define MAX_N 80

info arr[10];
int pnum = 0;
int tnum[10] = {0};

int menu_1(void)
{
    int num;
    int pn;

    printf("----------------------\n\n");
    printf(" 1. Sign Up\n 2. Sign In\n 3. List Of User\n\n");
    printf("----------------------\n\n");

    printf("SELECT : "); scanf("%d", &num);

    switch(num)
    {
        case 1 : 
            sign_up();
            
            break;
        
        case 2 : 
            pn = sign_in();

            break;

        case 3 : 
            list_of_user();

            break;

    }

}

void Loaddata1(info *arr, int *pnum)
{
    FILE *file = fopen("a.txt", "rb");
    if(file == NULL)
    {
        return ;
    }
    while(1)
    {
        fread(arr[*pnum].name, sizeof(arr[*pnum].name), 1, file);
        fread(arr[*pnum].id, sizeof(arr[*pnum].id), 1, file);
        fread(arr[*pnum].psw, sizeof(arr[*pnum].psw), 1, file);
        fread(arr[*pnum].sch, sizeof(arr[*pnum].sch), 1, file);
        fread(arr[*pnum].city, sizeof(arr[*pnum].city), 1, file);
        fread(arr[*pnum].age, sizeof(arr[*pnum].age), 1, file);
        if(feof(file) != 0)
        {
            break;
        }
            
            (*pnum)++;

    }
}

void Savedata1(info *arr, int *pnum)
{
    int i;
    FILE *file = fopen("a.txt", "wb");
    if(file == NULL)
    {
        return ;
    }
    for(i = 0;i < (*pnum);i++)
    {
        fwrite(arr[i].name, sizeof(arr[i].name), 1, file);
        fwrite(arr[i].id, sizeof(arr[i].id), 1, file);
        fwrite(arr[i].psw, sizeof(arr[i].psw), 1, file);
        fwrite(arr[i].sch, sizeof(arr[i].sch), 1, file);
        fwrite(arr[i].city, sizeof(arr[i].city), 1, file);
        fwrite(arr[i].age, sizeof(arr[i].age), 1, file);

    }
}

void list_of_user(info *arr, int *pnum)
{
    int i;

    for(i = 0;i < *pnum;i++)
    {
        printf("\n----------------------\n");
        printf("Name : %s\n", *arr[*pnum].name);
        printf("ID : %s\n", *arr[*pnum].id);
        printf("Age : %s\n", *arr[*pnum].age);
        printf("School : %s\n", *arr[*pnum].sch);
        printf("City : %s\n", *arr[*pnum].city);
    }

}
//////////////////////////////////////////////////////////
void sign_up(info *arr, int *pnum)
{
    if((*pnum) < MAX_P)
    {
        printf("Name : ");
        fgets(arr[*pnum].name, sizeof(arr[*pnum].name), stdin);
    
        printf("ID : ");
        fgets(arr[*pnum].id, sizeof(arr[*pnum].id), stdin);
        
        printf("Password : ");
        fgets(arr[*pnum].psw, sizeof(arr[*pnum].psw), stdin);
        
        printf("School : ");
        fgets(arr[*pnum].sch, sizeof(arr[*pnum].sch), stdin);
        
        printf("City : ");
        fgets(arr[*pnum].city, sizeof(arr[*pnum].city), stdin);
        
        printf("Age : ");
        fgets(arr[*pnum].age, sizeof(arr[*pnum].age), stdin);

        (*pnum)++;
    }

    else
        printf("User is Full\n");

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

int sign_in(info *arr, int *pnum)
{

    int i, j;
    char id[20];
    char psw[20];
    int pn;

    printf("-----------------\n");
    printf("ID : "); scanf("%s", id);

    for(i = 0;i < *pnum;i++)
    {
        if(strncmp(arr[i].id, id, strlen(id)) == 0)
        {
            break;
        }
    }

    pn = i;

        
    while(1)
    {
        printf("PASSWORD : ");
        for(j = 0;j < *pnum;j++)
        {
            psw[pn] = getch();
            putchar('*');
        }

        if(strncmp(arr[pn].psw, psw, strlen(psw)) == 0)
        {
            return pn;
            printf("----------------------\n");
            break;

        }
        else
            printf("Acess Denied\n");

    }

}
