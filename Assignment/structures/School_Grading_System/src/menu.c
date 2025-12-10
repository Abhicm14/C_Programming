#include"school_gradeing.h"

int menu()
{
    int choice;

    printf("==========================================\n");
    printf("   SCHOOL GRADING SYSTEM MENU\n");
    printf("==========================================\n");
    printf("1. Add New Student Records\n");
    printf("2. Update Marks of Class\n");
    // printf("3. Save Records to File\n");
    // printf("4. Load Records from File\n");
    printf("3. Display Top 3 Students\n");
    printf("4. Exit Program\n");
    printf("------------------------------------------\n");
    
    printf("Enter your choice (1-6) : ");
    while (!valid_int(&choice))
    {
        printf("Enter your choice : ");
    }

    return choice;
}