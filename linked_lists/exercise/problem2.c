#include<stdio.h>

void main()
{
    struct rec
    {
        char *name;
        int age;
    }r;

    struct rec *ptr = &r;

    char name1[] = "Somalika";

    ptr->name = name1;
    ptr->age = 93;

    printf("%s\t",ptr->name);
    printf("%d\n",ptr->age);
}