#include<stdio.h>


int main()
{

    int arr[8] = {1, 3, 5, 7, 5, 3, 1, 5}; //arragements
    int i, j;//for loop
    int tmp; //temporary space
    int flag = 0, cnt = 0;
    
    /*for(i = 0;i < 8;i++)
    {
        printf("%5d", arr[i]);
    }
    printf("\n\n");
    */

    for(i = 0;i < 7;i++)
    {
        for(j = 0;j < 7;j++)
        {
            //printf("%d\t%d\n", i, j);
            if(arr[j] > arr[j + 1])
            {
                
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    
    for(j = 0;j < 8;j++)
    {
        printf("%5d", arr[j]);
        if(j != 7)
        {
            if(arr[j] == arr[j + 1])
            {
                cnt++;
            }
        }
    }
    printf("\n");


    for(i = 0;i < 7;i++)
    {
        if(arr[i] == arr[i+1])
        {

            for(j = 0;j < cnt;j++)
            {
                
                
                    arr[j] = arr[j + 1];
                    flag++;
                
            }
        }
    }
                
    for(j = 0;j < flag;j++)
    {
        printf("%5d\t", arr[j]);
    }
    printf("\n\n\n");
            
            



    return(0);

}
