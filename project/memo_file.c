#include<stdio.h>
#include<string.h>


int main()
{
    FILE *ifp, *ofp;
    char str[300];
    //int flag = 0;
    char *res;


    ifp = fopen("a.txt", "r");
    
    if(ifp == NULL)
    {
        printf("couldn't make new file.\n");
        return (1);
    }

    ofp = fopen("a.txt", "w");
    
    if(ofp == NULL)
    {
        printf("couldn't open print file.\n");
        return 1;
    }

    printf("input string : ");
    
    while(1)
    {
        res = fgets(str, sizeof(str), ifp);
        
        if(res == NULL)
        {
            break;
        }
        /*if(str == '\n');
        {
            flag++;
        
        }
        if(flag == 1)
        {
            if == '\n')
            {
                break;
            }
            else
            {
                flag = 0;
            }
        }*/

        str[strlen(str)] = '\0';
        fputs(str, ofp);
    
    }

    fclose(ifp);
    fclose(ofp);

    return(0);
}
        

