#include<stdio.h>


int main()
{
    char ch;
    char str[80];
    int i;
    int tmp, cnt;


    while((str[i++] = getchar()) != '\n')
    {
        tmp++;

    }
    
    
    printf("character that you want to find : ");
    ch = getchar();

    for(i = 0;i < tmp;i++)
    {
        if(str[i] == ch)
        {
            cnt++;
        }
    }
    
    printf("%c is %d times in the string\n\n", ch, cnt);

    return(0);

}





