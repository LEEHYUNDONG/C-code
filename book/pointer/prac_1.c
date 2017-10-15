#include<stdio.h>


int main()
{
    int num;
    int *nump = &num;

    printf("number: " ); scanf("%d", &num);

    printf("num : %d\nnumP : %d\n\n", num, *nump);

    printf("&num : %p\nnump : %p\n", &num, nump);


    return(0);


}

