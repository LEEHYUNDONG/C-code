#include<stdio.h>
#include<ncurses.h>

int main()
{
    char ch;

    printf("input character : "); 
    ch = getch();

    printf("\noutput : %c\n", ch);

    return(0);

}
