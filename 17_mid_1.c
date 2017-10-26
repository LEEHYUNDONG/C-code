#include<stdio.h>


void star_print(int *ps, int size);

int main()
{
    int score[80];
    int i= 0;//, cnt = 0;
    char ch;
                                                 
                                                    
    
    printf("input score:");
    
    while(1)
    {
        scanf("%d", &score[i]);
        i++;
        
        if((ch = getchar()) == EOF) break;
    
    }
        
    printf("\n");
    
    star_print(score, i);
            
   
    

    return(0);

}


void star_print(int *ps, int size)

{
    int i, j;
    
        
    for(j = 0;j < size;j++)
    {
        printf("(%d)", ps[j]);
        for(i = 0;i < ps[j] / 5;i++)
        {       
            printf("*");
        }

        printf("\n");
    }


}

