//Write a program to accept name,age and address of five persons and display the name of each person.

#include<stdio.h>
#include<string.h>

struct person{
    int age;
    char name[16];
    char address[48];
};

void main()
{
    struct person prs[5];

    for(int count = 1; count <= 5; count++)
    {
        printf("Enter the name of person : ");
        fgets(prs[count].name,16, stdin);
        prs[count].name[strcspn(prs[count].name, "\n")] = '\0';  // Remove newline

        printf("Enter the age of person : ");
        scanf("%d", &prs[count].age);
        
        // Clear the input buffer ← ADD THIS!
        while(getchar() != '\n');

        printf("Enter the address of person : ");
        fgets(prs[count].address, 48, stdin);
        prs[count].address[strcspn(prs[count].address, "\n")] = '\0';  // Remove newline
    }

    for(int count = 1; count <= 5; count++)
    {
        printf("person[%d] | Name : %s\n",count,prs[count].name);
    }
}

