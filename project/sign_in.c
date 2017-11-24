#include<stdio.h>
#include<string.h>
#include<conio.h>
#include

int sign_in(struct person *pp, int n_person);

int sign_in(struct person *pp, int n_person);
{

    int i, j;
    char id[20];
    char psw[20];
    
    printf("-----------------------\n");
    printf("ID : "); scanf("%s", id);

    for(i = 0;i < n_person;i++)
    {

        if(strcmp(pp[i].id, id, strlen(id)) == 0)
        {
            break;
        }
    
    }       
    
    printf("PASSWORD : ");
    
    for(j = 0;j < 20;j++)
    {
        psw[i] = getch();
        putchar('*');
    }
    
    while(1)
    {

        if(strcmp(pp[i].psw, psw, strlen(psw)) == 0)
        {
            return i;
            printf("---------------------\n");
            break;
            
        }
        else 
        {
            printf("Access Denied(wrong psw)\n");
        }
    
    }
    

}
