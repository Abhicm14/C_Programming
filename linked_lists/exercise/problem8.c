#include<stdio.h>
#include<string.h>

void main()
{
    union tag{
        char name[15];
        int age;
    }rec;

    strcpy(rec.name,"Somalika");
    rec.age = 23;

    printf("Name = %s\n",rec.name);
}