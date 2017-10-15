#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void arr_rand(int m[], int n);
void arr_sort(int m[], int n);

void arr_rand(int m[], int n)
{
    int i;
    int seed;

    seed = time(NULL);
    srand(seed);

    for(i = 0;i < n;i++)
    {
        m[i] = (rand() % 10) + 10;
    }

}

void arr_sort(int m[], int n)
{
    int i, j;
    int tmp;

    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n;j++)
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
    int num, i, j = 0, flag = 0;
    int sum = 0;
    int over_twice[10];

    printf("how many numbers (1 ~ 9) : ");

    //num = getch();
    
    while((num = getchar()) != '\n')
    {
    
        printf("how many numbers (1 ~ 9) : ");
    
        arr_rand(arr, num);
        arr_sort(arr, num);
        
        
        for(i = 0;i < num - '0';i++)
        {
            printf("%d\t", arr[i]);
            
            if((arr[i] % 2) == 0)
            {
                sum += arr[i];
            
            }
            if(arr[i] == arr[i+1])
            {   
                j++;
                flag++;
                over_twice[j] = arr[i];
                if(over_twice[j] == over_twice[j+1])
                {
                    j--;
                    flag--;
                }
            }
        }
        
        printf("(sum of even nums %d) ==>", sum);
        for(i = 0;i < flag;i++)
        {
            printf("%d\t", over_twice[i]);
        
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
