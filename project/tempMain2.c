#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"info.h"
#include"Func1.h"
#include"ArrFunc.h"


int main()
{
    Loaddata1(arr, &pnum);
    char menu;

    while(menu != 'Q')
    {
        printf("---------------------\n\n");
        printf("1. Sign Up\n2. Sign In\n3. List Of User\n4. End\n\n");
        printf("---------------------\n\n");
        printf("SELECT : ");
        menu = getch();

        switch(menu)
        {
            case '1' : 
                Signup(); 
                break;
            case '2' : 
                Signin(); 
                break;
            case '3' : 
                Listofuser(); 
                break;
            case '4' : 
                Savedata1(arr, &pnum); 
                printf("\n"); 
                menu = 'Q';
                break;
            default : printf("You press Wrong Number\n"); break;

        }

    }

    


    return(0);

}
