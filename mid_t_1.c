#include<stdio.h>


int main()
{

    char str[100];
    int n, i, j, tot = 0, ti, s;
    int num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int flag = 0;

    
    
    printf("Input String: "); fflush(stdout);
    
    i = 0;

    while((str[i]=getchar()) != '\n')
    {
        i++;
    }
        ti = i;

            
            printf("Number of output characters: ");
            scanf("%d", &n);
        
    
    printf("- Part String: ");

    for(i = (ti - n - 1);i <= ti;i++)
    {
        putchar(str[i]);

        if(str[i] >= '0' && str[i] <= '9')
        {
            tot += (str[i] - '0');
        
            for(j = 0;j < 10;j++)
            {
                if(str[i] == j + '0') num[j]++;

            }
        }

    }

    printf("\n- Total Constants: %d\n", tot);
    
    
    printf("- Frequency of number repitition:");
    
    
    for(j = 0;j < 10;j++)
    {
        if(num[j] != 0)
        {
            printf("(%d) : %d\t", j, num[j]);
            flag++;
        }
        if((flag % 4) == 0)
        {
            printf("\n");
        }
    
    }
    
    printf("\n-  Number string: ");

    //for(s = (ti - n - 1);s = ti;s++)
    s = ti - n - 1;
    while(s < ti)
    {
      s++;
      //printf("%d\t", s); 
        if((str[s] >= '0') && (str[s] <= '9'))
        {
            putchar(str[s]);
            //printf("%c", str[i]);
        }
    }

    printf("\n\n");


    return(0);

}
    
