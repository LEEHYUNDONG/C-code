#include<stdio.h>

void product_n(int *n);


void product_n(int *n)
{

    *n *= *n;

}

int main()
{
    int num;

    printf("number: "); scanf("%d", &num);

    product_n(&num);
    
    printf("power 2 : %d\n", num);

    return(0);


}
