#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"info.h"
#include"Func1.h"
#include"ArrFunc.h"
#include"Func2.h"
#include"ArrFunc2.h"



int main()
{
    Loaddata1(arr, &pnum);
    char menu;
    char menu2;

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
    
    Loadtext1(arr, tnum, &osnum);
    while(menu2 != 'Q')
    {
        printf("-----------------\n");
        printf("\n 1. To Wrtite Note\n 2. To View Note\n 3. Back to menu\n\n");
        printf("-----------------\n");
        
        printf("SELECT : ");
        menu2 = getch();


        switch(menu2)
        {
            case '1' : 
                Towritenote();
                break;

            case '2' : 
                Toview();
                break;
            
            case '3' : 
                Savetext1(arr, tnum, &osnum);
                menu = 'Q';
                break;

            default :
                printf("You pressed Wrong Number\n");
                break;
        }
    }


    return(0);

}
