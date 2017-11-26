#include<stdio.h>

void menu_2()
{
    
    char menu2;

    while(menu2 != 'Q')
    { 
        printf("-----------------\n");
        printf("\n 1. To Wrtite Note\n 2. To Edit Note\n 3. To View\n
        4. Back to Menu\n\n");
        printf("-----------------\n");

        printf("SELECT : ");
        scanf("%d", &menu2);

        switch(menu2)
        {
            case 1 : To_write_note();
                break;

            case 2 : To_edit_note();
                break;

            case 3 : To_view_note();
                break;

            case 4 : Back_to_Menu();
                break;

            default : printf("You press Wrong Number\n"); break;

        }
    }

    
    return(0);

}


