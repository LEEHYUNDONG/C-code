#include<stdio.h>

int cntword(char *str);

int cntword(char *str)
{
    int i, cnt = 0, flag = 0;
    while(1)
    {
        i++;
        if(str[i] =='\n')
        {
            flag = i;
            break;
        }
    }

    for(i = 0;i < flag;i++)
    {
        if(str[i] == ' ') cnt++;
        else if(str[i] == '\n') cnt++;
    }
        
    return cnt;

}

int main()
{
    
    int m = 0;
    int sum = 0;
    char str[100];
    int i, w;
    int flag = 0;
    int flagg = 0;

    while(1)
    {
        //fflush(stdin);
        while((str[i] = getchar()) != '\n')
        {
            i++;
            flag = i;
        
        }

        /*for(i = 0;i < flag;i++)
        {
            printf("%c", str[i]);
        }*/
        //printf("\n");
        w = cntword(str);
        
        for(i = 0;i < flag;i++)
        {   
            flagg = 0;

            if((str[i] >= '0') &&(str[i] <= '9'))
            {
                sum = (str[i] - '0') + sum;
            }
            if((str[i] == '!') || (str[i] == '?') || (str[i] == '.')) m++;

            if(str[i] == '\n') flagg = 1;

        }
        i = 0;
        if(str[0] == '\n') flagg = 0;
        //printf("%d\t%c", flag, str[flag]);
        
        if(flagg == 0) break;    
    
    
    }
            
    printf("frequency of !?. : %d\n", m);
    printf("sum of number : %d\n", sum);
    printf("number of word : %d\n", w);
    

    return(0);
}


