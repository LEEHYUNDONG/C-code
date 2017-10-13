#include<stdio.h>


int main()
{
    int ary[3];
    int i;


    *(ary + 0) = 10;
    *(ary + 1) = *ary + 10;

    printf("intput third ary: "); scanf("%d", ary + 2);


    for(i = 0;i < 3;i++)
    {
        printf("%5d\n", *(ary + i));
        
    }


    return(0);


}


