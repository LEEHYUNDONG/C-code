#include<stdio.h>

void (*menu_1)(void)
{

    int num;
    
    
    printf("-------------------------------\n\n");
    printf(" 1. Sign Up\n 2. Sign In\n 3. List Of User\n\n");
    printf("-------------------------------\n");
    
    printf("PRESS KEY : "); scanf("%d", &num);

    
    switch(num)
    {

        case 1 :
            sign_up();      
            break;

        case 2 :
            sign_in();
            break;

        case 3 :
            list_of_user();
            break;

    }
            

        
    return(0);

}
