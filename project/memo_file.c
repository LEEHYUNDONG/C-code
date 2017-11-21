#include<stdio.h>
#include<string.h>


int main()
{
    FILE *fp;
    char str[80][300];
    char tmp[300];
    int i = 0;

    fp = fopen("a.txt", "w");
    if(fp == NULL)
    {
        printf("couldn't make new file.\n");
        return (1);
    }

    printf("input string : ");
    
    while(1)
    {
        fgets(tmp, 300, stdin);
        fflush(stdin);
        tmp[strlen(tmp)] = '\0';

        if(strcmp(tmp, "\n\n") == 0)
        {
            i++;
            strcpy(str[i], tmp);
            break;
        }
    }
    fprintf(fp, "%s\n", str[i]);

    fclose(fp);

    return(0);
}
        

