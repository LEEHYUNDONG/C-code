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
    }
        
    
    k = 0;
    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < n;j++)
        {   
            p[i][j] = num[k];
            k++;
        }
    }

        for(i = 0;i < 2;i++)
        {
            for(j = 0;j < n;j++)
            {   
                printf("%d\t",  p[i][j]);
            
            }
        }

        printf("\n\n\n");

}

int main()
{
    
    int arr[2][10]; // fill with random nums
    int i = 0, j = 0, k, t;//just for FOR sentences
    int tmp1, tmp2, tmp3; //3 spaces
    int n, flag = 0; // that counts how many times it picked the nums
    int num[20];//number that used for arrangements


    printf("number of second space metrix : "); scanf("%d", &n);


    innit_arr(n, arr);


    printf("[arrangement]\n"); // to show filled ramdom numbers between -3 ~ 3 in the room arr
    for(i = 0;i < 2;i++)
    { 
        for(j = 0;j < n;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    
    
    for(i = 0;i < 2;i++)     //array numbers on decr incr each first line that incr second line decr
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


                                //to fill the num arr with random nums that used for arrangements.
    for(i = 0;i < 2;i++)
    { 
        for(j = 0;j < n;j++)
        {
            t++;
            num[t] = arr[i][j]; 
        }
    }

    
    for(t = 0;t < (2*n);t++)
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
