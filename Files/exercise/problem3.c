#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fptr1,*fptr2;

    char fname[20];

    printf("Enter the path of first file : ");
    scanf("%s",fname);

    fptr1 = fopen(fname,"r");
    if(fptr1 == NULL)
    {
        printf("Error in opening first file\n");
        exit(1);
    }
    fptr2 = fopen("names.dat","r");

    if(fptr2 == NULL)
    {
        printf("Error in opening second file\n");
        exit(1);
    }
    fclose(fptr1);
    fclose(fptr2);
}