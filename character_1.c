#include<stdio.h>


int main()
{

    char ch[80];
    char cha[5] = {'a', 'p', 'p', 'l', 'e'};
    int i = 0, j;

    
    printf("input the letter : ");


    while(1)
    {
        while((ch[i] = getchar()) != '\n')
        {
           
            fflush(stdout);

            if(ch[i] == cha[i])
            {
                printf("correct!\n");
                if(i < 4)
                {
                printf("input : ");
                }
                i++;
            }
            else if((ch[i] > cha[i]) && (cha[i] >= 'a'))
            {
                printf("left letter\n");
                printf("re - input: ");
            }
            else if((ch[i] < cha[i]) && (cha[i] <= 'z'))
            {
                printf("right letter\n");
                printf("re - input: ");
            }
            else
                printf("put the alphabet\n");
            
            
        }

        if(i == 5)
        {
            printf("\n\nWORD : ");
            for(j = 0;j < 5;j++)
            {
                
                putchar(ch[j]);
            }
            
            break;

        }

    }

    printf("\n\n");    


    return(0);


}
        
        


