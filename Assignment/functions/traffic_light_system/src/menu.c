#include<main.h>

void menu(int time1,int time2,int time3,int total,int cycle)
{
    printf("Red Light is on for %d seconds\n",time1);
    printf("Yellow Light is on for %d seconds\n",time2);
    printf("Green Light is on for %d seconds\n",time3);
    printf("\n");
    printf("The total time taken  %d cycle is %d seconds\n",cycle,total);
}