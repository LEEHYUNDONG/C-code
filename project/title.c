#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//to view notes of that person

int memo_title(struct person *pp, int n_note, int n_person)
{
    int i, j;


    for(i = 0;i < n_note;i++)
    {
        for(j = 0;j < strlen((*pp).note[i]);j++)
        {
            
            if((*pp).note[i][j] == '\n' )
            {
                strcpy((*pp).title[i], (*pp).note[i]);
            }
        }
    }
    
    return i;

}
