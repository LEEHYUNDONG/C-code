#include<stdio.h>
#include<string.h>


int main()
{

    FILE *ifp, *ofp;
    char src[80], des[80];
    int ch;

    printf("file name : ");
    scanf("%s", src);
    printf("BU file name : ");
    scanf("%s", des);

    ifp = fopen(src, "r");
    if(ifp == NULL)
    {
        printf("%s file desn't exist\n", src);
        return 1;
    }
    
    ofp = fopen(des, "w");
    if(ofp == NULL)
    {
        printf("%s file doesn't exist\n", des);
        return 1;
    }


    while((ch = fgetc(ifp)) != EOF)
    {
        fputc(ch, ofp);
    }


    fclose(ifp);
    fclose(ofp);

    return(0);
}
