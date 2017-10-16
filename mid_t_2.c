#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void innit_arr(int n, int *p);

void innit_arr(int n, int *p)
{
    int i,  k;
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
    for(i = 0;i < (2*n);i++)
    {
            p[i] = num[k];
            k++;
    }

      /*  for(i = 0;i < (n*2);i++)
        {
                printf("%d\t",  p[i]);
            
        }*/

        printf("\n\n");

}

int main()
{
    
    int arr[2][10]; // fill with random nums
    int i = 0, j = 0, k, t;//just for FOR sentences
    int tmp1, tmp2, tmp3; //3 spaces
    int n, flag = 0; // that counts how many times it picked the nums
    int num[20];//number that used for arrangements


    printf("number of second space metrix : "); scanf("%d", &n);


    innit_arr(n, num);

    k = 0;

    for(i = 0;i < 2;i++)
    {
        for(j = 0;j < n;j++)
        {
            arr[i][j] = num[k++];
        }
    }


    printf("[arrangement]\n"); // to show filled ramdom numbers between -3 ~ 3 in the room arr
    for(i = 0;i < 2;i++)
    { 
        for(j = 0;j < n;j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    
    
        //array numbers on decr incr each first line that incr second line decr
        
        for(k = 0;k < n;k++)
        {
            for(j = 0;j < (n-1);j++)
            {
                    if(arr[0][j] > arr[0][j+1])
                    {
                        tmp1 = arr[0][j];
                        arr[0][j] = arr[0][j+1];
                        arr[0][j+1] = tmp1;
                    }
            }
        }
                
        
        
        
        for(k = 0;k < n;k++)
        {
            for(j = 0;j < (n-1);j++)
            {
                    
                    if(arr[1][j] < arr[1][j+1])
                    {
                        tmp2 = arr[1][j];
                        arr[1][j] = arr[1][j+1];
                        arr[1][j+1] = tmp2;
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
    /*for(i = 0;i < 2;i++)
    { 
        for(j = 0;j < n;j++)
        {
            t++;
            num[t] = arr[i][j]; 
        }
    }*/

    
    for(t = 0;t < (2*n);t++)
    {
        for(k = 0;k < (2*n);k++)
        {
            if(num[k] > num[k+1])
            {
                tmp3 = num[k];
                num[k] = num[k+1];
                num[k+1] = tmp3;
            }
        }
    }
        
        
        for(k = 0;k < (2*n);k++)
        {
               // printf("%5d", num[k]);   
            if(num[k] != num[k+1])
            {
                flag++;
                printf("%4d", num[k]);
            }
        
        
            if((flag % 4) == 0) printf("\n");

        }   


    printf("\n\n");

    return(0);

}
