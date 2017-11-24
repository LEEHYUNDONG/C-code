#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"data.h"


int main()
{

    int i = 0;
    int j = 0;
    
    i = Sign_up(arr, &pnum1);


    printf("----------------\n");
    printf("Name : %s", arr[i].name);
    printf("Id : %s", arr[i].id);
    printf("Age : %s", arr[i].age);
    printf("School : %s", arr[i].sch);
    printf("City : %s", arr[i].city);
    printf("----------------\n");

    system("clear");


    n2 = To_write_note(arr, &pnum2, &pnum3);
    printf("Title : %s\n", arr[i].title[j]);
    printf("Memo : %s\n", arr[i].memo[j]);


    return(0);


}
