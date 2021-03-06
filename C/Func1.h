#ifndef _FUNC1_H_
#define _FUNC1_H_
#include<stdio.h>
#include<string.h>
#include<unistd.h>

void Loaddata1(info *arr, int *pnum)
{

    FILE *file = fopen("a.txt", "rb");
    if(file == NULL)
    {
        return;
    }
    while(1)
    {
        fread(arr[*pnum].name, sizeof(arr[*pnum].name), 1, file);
        fread(arr[*pnum].id, sizeof(arr[*pnum].id), 1, file);
        fread(arr[*pnum].psw, sizeof(arr[*pnum].psw), 1, file);
        fread(arr[*pnum].sch, sizeof(arr[*pnum].age), 1, file);
        fread(arr[*pnum].city, sizeof(arr[*pnum].sch), 1, file);
        fread(arr[*pnum].age, sizeof(arr[*pnum].city), 1, file);

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
        return;
    }
    for(i = 0;i < (*pnum);i++)
    {
        
        fwrite(arr[i].name, sizeof(arr[i].name), 1, file);
        fwrite(arr[i].id, sizeof(arr[i].id), 1, file);
        fwrite(arr[i].psw, sizeof(arr[i].psw), 1, file);
        fwrite(arr[i].sch, sizeof(arr[i].age), 1, file);
        fwrite(arr[i].city, sizeof(arr[i].sch), 1, file);
        fwrite(arr[i].age, sizeof(arr[i].city), 1, file);

    }
    fclose(file);

}

char getch(void)
{
    char ch, str[10];

    fgets(str, 3, stdin);
    str[strlen(str) - 1] =  '\0';
    fflush(stdin);
    ch = str[0];

    return ch;
}
void Sign_up(info *arr, int *pnum)
{
    if((*pnum) < MAX_P)
    {

    char ch;
    char id[20];
    char *psw;
    int i, flag;
    int t;

    printf("Name : ");
    fgets(arr[*pnum].name, sizeof(arr[*pnum].name), stdin);
    arr[*pnum].name[strlen(arr[*pnum].name)-1] = '\0';

    if((*pnum) > 0)
    {
        while(1)
        {
            printf("ID : ");
            fgets(arr[*pnum].id, sizeof(arr[*pnum].id), stdin);
            arr[*pnum].id[strlen(arr[*pnum].id) - 1] = '\0';

            for(i = 0;i < (*pnum);i++)
            {
                if(strncmp(arr[i].id, arr[*pnum].id, strlen(arr[*pnum].id) != 0))
                {
                    t++;
                }
            }
            if((*pnum) == t)
            {
                break;
            }
            else
            {
                printf("#already exist id!\n");

            }
        }
    }
    else if((*pnum) == 0)
    {
        printf("ID : ");
        fgets(arr[*pnum].id, sizeof(arr[*pnum].id), stdin);
        arr[*pnum].id[strlen(arr[*pnum].id) - 1] =  '\0';
    }

    psw = getpass("Password : ");
    strncpy(arr[*pnum].psw, psw, strlen(psw));

        printf("School : ");
        fgets(arr[*pnum].sch, sizeof(arr[*pnum].sch), stdin);
        arr[*pnum].sch[strlen(arr[*pnum].sch) - 1] =  '\0';
    
        printf("City : ");
        fgets(arr[*pnum].city, sizeof(arr[*pnum].city), stdin);
        arr[*pnum].city[strlen(arr[*pnum].city) - 1] = '\0';
        
        printf("Age : ");
        fgets(arr[*pnum].age, sizeof(arr[*pnum].age), stdin);
        arr[*pnum].age[strlen(arr[*pnum].age) - 1] = '\0';


        (*pnum)++;
    }

    else
        printf("User is FULL\n");

}

void Sign_in(info *arr, int *pnum, int *osnum)
{
    int pn;
    int i, j;
    int flag;
    char id[20];
    char *psw;

    printf("-----------------\n");
    while(flag != 2)
    {
        flag = 0;
        printf("ID : ");
        fgets(id, sizeof(id), stdin);
        fflush(stdin);
        id[strlen(id) - 1] = '\0';

        for(i = 0;i < (*pnum);i++)
        {
            if(strncmp(arr[i].id, id, strlen(id)) == 0)
            {
                pn = i;
                flag++;
                break;
            }
        }

        psw = getpass("Password : ");
    
        if(strncmp(arr[pn].psw, psw, strlen(psw)) == 0)
        {
            (*osnum) = pn;
            flag++;
            break;
        }
        else
        {
            printf("Acess denied\n");
            system("clear");
        }
    }


}

void List_of_user(info *arr, int *pnum)
{
    int i;

    for(i = 0;i < *pnum;i++)
    {
        printf("-----------------\n");
        printf("Name : %s\n", arr[i].name);
        printf("ID : %s\n", arr[i].id);
        printf("School : %s\n", arr[i].sch);
        printf("city : %s\n", arr[i].city);
        printf("Age : %s\n", arr[i].age);
    }

}
#endif
