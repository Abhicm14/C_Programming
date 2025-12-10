#include<stdio.h>

void main()
{
    FILE *fptr;
    char str[80];

    fptr = fopen("test.txt",'r');

    while(fgets(str,80,fptr) != EOF)
        puts(str);
}