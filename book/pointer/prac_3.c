#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void arrange_func(int n, int *pa);

void arrange_func(int n, int *pa)
{
    int i;
    int seed;

    seed = time(NULL);
    srand(seed);

    for(i = 0;i < n;i++)
    {
        pa[i] = rand() % 100 + 1;
    
    }

}
int main()
{
    int i, n;
    int arr[80];

    printf("size of arr : "); scanf("%d", &n);
    
    arrange_func(n, arr);
    
    for(i = 0;i < n;i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");


    return(0);

}


