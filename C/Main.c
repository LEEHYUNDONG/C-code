#include<stdio.h>
#include<stdlib.h>
#include"info.h"
#include"Func1.h"
#include"ArrFunc1.h"
#include"Func2.h"
#include"ArrFunc2.h"


int main()
{
    Loaddata1(arr, &pnum);
    Loadtext(tnum);
    Loadtext1(arr, &pnum);
    
    char menu;
    char menu2;

    while(menu != 'Q')
    {
        menu2 = 'a';
        printf("----------------------\n\n");
        printf(" 1. Sign Up\n 2. Sign in\n 3. List of User\n 4. End\n\n");
        printf("----------------------\n\n");
        printf("SELECT : ");
        menu = getch();
        fflush(stdin);

        switch(menu)
        {
            case '1' :
                Signup();
                break;
            case '2' :
                Signin();
                system("clear");
                while(menu2 != 'Q')
                {
                    printf("-------------------\n");
                    printf(" 1. To write\n 2. To view\n 3. Back to menu\n");
                    printf("SELECT : ");
                    menu2 = getch();
                    fflush(stdin);
                    system("clear");
                    switch(menu2)
                    {
                        case '1' :
                            Towritenote();
                            break;
                        case '2' :
                            Toview();
                            break;
                        case '3' : 
                            menu2 = 'Q';
                            break;
                        default :
                            printf("#You pressed Wrong number!\n");
                            break;
                    }
                }
                    break;
            
            case '3' :
                Listofuser();
                break;
            case '4' : 
                Savedata1(arr, &pnum);
                Savetext(tnum);
                Savetext1(arr, &pnum);
                printf("\n");
                menu = 'Q';
                break;
            default : 
                printf("#You pressed Wrong Number\n");
                break;
                
        }
        
    }
    return(0);
}
                

