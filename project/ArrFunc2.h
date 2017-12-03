#include<stdio.h>
#include<stdlib.h>

void Towritenote()
{
    system("clear");
    presenttime();
    savetime(arr, &osnum, tnum);
    to_write_note(arr, tnum, &osnum, &pnum);
}

void Toview()
{
    system("clear");
    To_view_note(arr, tnum, &osnum, &pnum);
}

