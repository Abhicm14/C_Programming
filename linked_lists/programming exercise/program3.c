#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Employee{
    char *name;
    int *age;
    float salary;
};

void inputRecords(struct Employee records[],int n);
void displayRecords(struct Employee records[],int n);
void sortRecords(struct Employee records[],int n);
void swapRecords(struct Employee *a, struct Employee *b);
void freeMemory(struct Employee records[],int n);

void main()
{
    const int NUM_RECORDS = 10;
    
    struct Employee records[NUM_RECORDS];

    printf("===========================================\n");
    printf("   EMPLOYEE RECORD MANAGEMENT SYSTEM\n");
    printf("===========================================\n\n");

    inputRecords(records, NUM_RECORDS);

    printf("\n===========================================\n");
    printf("   RECORDS BEFORE SORTING\n");
    printf("===========================================\n");
    displayRecords(records, NUM_RECORDS);

    sortRecords(records, NUM_RECORDS);

    printf("\n===========================================\n");
    printf("   RECORDS AFTER SORTING\n");
    printf("   (Primary Key: Name, Secondary Key: Age)\n");
    printf("===========================================\n");
    displayRecords(records,NUM_RECORDS);

    freeMemory(records,NUM_RECORDS);

}

void inputRecords(struct Employee records[], int n)
{
    char tempName[100];
    int tempAge;

    for(int i = 0; i < n; i++)
    {
        printf("\n--- Enter details for Record %d ---\n",i+1);

        printf("Enter Name: ");
        scanf("%s",tempName);

        records[i].name = (char *)malloc((strlen(tempName)+1)*sizeof(char));

        if(records[i].name == NULL)
        {
            printf("Memory allocation failed!\n");
            exit(1);
        }

        strcpy(records[i].name,tempName);

        printf("Enter Age : ");
        scanf("%d", &tempAge);

        records[i].age = (int *)malloc(sizeof(int));
        if(records[i].age == NULL)
        {
            printf("Memory allocation failed!\n");
            exit(1);
        }
        *(records[i].age) = tempAge;

        printf("Entry Salary: ");
        scanf("%f",&records[i].salary);
    }
}

void displayRecords(struct Employee records[],int n)
{
   printf("\n+-----+--------------------+------+------------+\n");
    printf("| No. |       Name         | Age  |   Salary   |\n");
    printf("+-----+--------------------+------+------------+\n");
    
    for (int i = 0; i < n; i++) 
    {
        printf("| %3d | %-18s | %4d | %10.2f |\n", i + 1,records[i].name,*(records[i].age),records[i].salary);
    }
    
    printf("+-----+--------------------+------+------------+\n"); 
}

void sortRecords(struct Employee records[],int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            int nameCompare = strcmp(records[j].name, records[j+1].name);

            if(nameCompare > 0)
            {
                swapRecords(&records[j],&records[j+1]);
            }
            else if(nameCompare == 0)
            {
                if(*(records[j].age) > *(records[j+1].age))
                {
                    swapRecords(&records[j],&records[j+1]);
                }
            }
        }
    }
}

void swapRecords(struct Employee *a, struct Employee *b)
{
    struct Employee temp;

    temp.name = a->name;
    temp.age = a->age;
    temp.salary = a->salary;

    a->name = b->name;
    a->age = b->age;
    a->salary = b->salary;

    b->name = temp.name;
    b->age = temp.age;
    b->salary = temp.salary;
}

void freeMemory(struct Employee records[],int n)
{
    for(int i = 0; i < n; i++)
    {
        free(records[i].name);
        free(records[i].age);
    }
}