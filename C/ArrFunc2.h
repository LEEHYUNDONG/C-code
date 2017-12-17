#include<stdio.h>
#include<stdlib.h>

void Towritenote()
{
    system("clear");
    presenttime();
    Savetime(arr, tnum, &osnum);
    to_write_note(arr, tnum, &osnum);
}
void Toview()
{
    system("clear");
    to_view(arr, &pnum, &osnum, tnum);
}

