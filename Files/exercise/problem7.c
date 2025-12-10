#include<stdio.h>

void main(int argc,char *argv[])
{
    int i,sum = 0;
    for(i = 1; i < argc; i++)
        sum = sum+argv[i];
    printf("%d\n",sum);
}