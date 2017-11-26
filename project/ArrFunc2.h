#include<stdio.h>
#include<stdlib.h>

void Towritenote()
{
    system("clear");
    To_write_note(arr, &osnum, &tnum[osnum]);
}

void Toview()
{
    system("clear");
    To_view_note(arr, &osnum, &pnum);
}

void Toedit()
{
    system("clear");
    To_view_note(arr, &osnum, &pnum);
    To_edit_note(arr, &osnum, &pnum);

}

