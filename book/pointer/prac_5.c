#include<stdio.h>

void reverse_string(int n, int *ch);

void reverse_string(int n, int *ch)
{
    int i = n;
    int str[100];
    int j = 0;
    
    while(i > 0)
    {
        
        str[j++] = ch[--i];
        printf("%d\t%d\n", i, j);
    }
    
//    printf("%s\n\n", str);

    for(i = 0;i <= n;i++)
    {
        ch[i] = str[i];
        printf("%d\n", i);
    }

}

int main()
{
    int i = 0, tmp = 0;
    int str[100];
    //char ch;
    
    printf("input string : ");

    
    while((str[i++] = getchar()) != '\n')
    {

        tmp++;

    }

    //printf("input string : %s", str);

    //for(i = 0;i < tmp;i++)


    reverse_string(tmp, str);

    
    printf("reversed string : ");

    for(i = 0;i < tmp;i++)
    {
        putchar(str[i]);
    }
    printf("\n\n");

    return(0);

}
