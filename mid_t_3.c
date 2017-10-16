#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void arr_rand(int *m, int n);
void arr_sort(int *m, int n);

void arr_rand(int *m, int n)
{
    int i;
    int seed;

    seed = time(NULL);
    srand(seed);

    for(i = 0;i < n;i++)
    {
        m[i] = (rand() % 10) + 10;
        //printf("%5d\t", m[i]);
    }

}

void arr_sort(int *m, int n)
{
    int i, j;
    int tmp;

    for(i = 0;i < n;i++)
    {
        for(j = 0;j < (n-1);j++)
        {
            if(m[j] > m[j+1])
            {
                
                tmp = m[j];
                m[j] = m[j+1];
                m[j+1] = tmp;

            }
        }
        
    }

}

int main()
{
    int arr[10];
    int num, i, j = 0, flag = 0, numi;
    int sum = 0;
    int over_twice[10];


    
    fflush(stdin);
while(1)//(num > '0') && (num <= '9'))
{
    fflush(stdin);

    printf("how many numbers (1 ~ 9) : ");
    
    while((num = getchar()) != '\n')
    {   
        /*numi = num - '0';
        printf("%5d\t%5d", num, numi);*/

        numi = num - '0';
        
        arr_rand(arr, numi);
        arr_sort(arr, numi);
        
        
        for(i = 0;i < num - '0';i++)
        {
            printf("%d\t", arr[i]);
            
            if((arr[i] % 2) == 0)
            {
                sum = arr[i] + sum;
            
            }

            if(arr[i] == arr[i+1])
            {   
                
                flag++;
                over_twice[j] = arr[i];
                j++;
                    
            }

        }
        
        printf("(sum of even nums %d) ==>", sum);
        sum = 0; j = 0; //sum and j facts should be clean for preparing next for next reputation.
        
        for(i = 0;i < flag;i++)
        {
            if(over_twice[i] != over_twice[i+1])
            {
                printf("%d\t", over_twice[i]);
            }
        
        }
        
    
        for(i = 0;i < flag;i++) //printed over twice nums and then clean the array
        {
            over_twice[i] = 0;
        
        }

        flag = 0; //flag must be cleaned too

        if((num < '1') && (num > '9')) break;
    
    }
        
        printf("\n");
        
        
        if((num < '1') && (num > '9'))
        {
            printf("break\n"); 
            break;
        }
}

    return(0);

}
