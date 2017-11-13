#include<stdio.h>
#include<string.h>

void list_of_user(struct person *pp, int n_person);
{
    int i;

    for(i = 0;i < n_person;i++)
    {
        printf("----------------------\n");
        printf("Name : %s\n", pp[i].name);
        printf("ID : %s\n", pp[i].id);
        printf("Age : %s\n", pp[i].age);
        printf("School : %s\n", pp[i].sch);
        printf("City : %s\n", pp[i].city);
        printf("----------------------\n");
    }


}
