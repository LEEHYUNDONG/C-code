#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//to view notes of that person

int to_view(struct person *pp, int n_note, int n_person)
{
    int i, j;
    int blanc = 0;


        for(i = 0;i < n_note;i++)
        {
            for(j = 0;j < strlen((*pp).note[i]);j++)
            {
            
                if((*pp).note[i][j] == ' ')
                {
                    blanc++;
                }
                if(blanc == 4)
                {
                    strcpy((*pp).title[i], (*pp).note)
        

