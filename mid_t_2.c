#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void innit_arr(int n, int p[2][n]);

void innit_arr(int n, int p[2][n])
{
    int i, j, k;
    int seed;
    int num[20];

    seed = time(NULL);
    srand(seed);

    for(k = 0;k < ( n*2);k++)
    {   
        fflush(stdout);
        num[k] = rand() % 7 - 3;
        //printf("%d\n", num[k]);
    }
        
    
    k = 0;
    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < n;j++)
        {   
            p[i][j] = num[k];
            //printf("%d\t", p[i][j]);
            k++;
        }
    }

}


int main()
{
    
    int arr[2][10];
    int i, j, k, t;
    int tmp1, tmp2, tmp3;
    int n, flag = 0;
    int num[20];


    printf("number of second space metrix : "); scanf("%d", &n);


    innit_arr(n, arr);
    
    printf("[arrangement]\n");
    for(i = 0;i < 2;i++)
    { 
        for(j = 0;j < n;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0;i < 2;i++)
    {
        for(k = 0;k < n;k++)
        {
            for(j = 0;j < n;j++)
            {
                if(i == 0)
                {
                    if(arr[i][j] > arr[i][j+1])
                    {
                        tmp1 = arr[i][j];
                        arr[i][j] = arr[i][j+1];
                        arr[i][j+1] = tmp1;
                    }
                }
                if(i == 1)
                {
                    if(arr[i][j] < arr[i][j+1])
                    {
                        tmp2 = arr[i][j];
                        arr[i][j] = arr[i][j+1];
                        arr[i][j+1] = tmp2;
                    }
                }
            }
        }
    }
    
    printf("[re - arrangement]\n");
    for(i = 0;i < 2;i++)
    { 
        for(j = 0;j < n;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("[number that used for array]\n"); 



    for(i = 0;i < 2;i++)
    { 
        for(j = 0;j < n;j++)
        {
            t++;
            num[t] = arr[i][j]; 
        }
    }

    for(t = 0;t < 2*n;t++)
    {
        for(k = 0;k < 2*n;k++)
        {
            if(num[k] > num[k+1])
            {
                tmp3 = num[k];
                num[k] = num[k+1];
                num[k+1] = tmp3;
            }
        }
    }
    for(t = 0;t < 2*n;t++)
    {
        if(num[t] != num[t+1])
        {
            flag++;
            printf("%d   ", num[t]);
        }
        if((flag % 4) == 0) printf("\n");

    }

    printf("\n\n");

    return(0);

}















