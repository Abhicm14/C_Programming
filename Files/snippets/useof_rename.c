#include<stdio.h>

void main()
{
    char old_name[80],new_name[80];

    printf("Enter the name of file to be renamed : ");
    gets(old_name);

    printf("Enter a new name for the file : ");
    gets(new_name);

    if(rename(old_name,new_name) == 0)
        printf("File %s renamed to %s\n",old_name,new_name);
    else
        perror("File not renamed\n");
}