#include"hospital.h"

int menu()
{
    int choice;

    printf("\n");
    printf("========================================\n");
    printf("   Hospital Management System \n");
    printf("========================================\n");
    printf("1. Add New Patient\n");
    printf("2. Search Patient by Name\n");
    printf("3. List Patients by Disease\n");
    printf("4. Delete Patient\n");
    printf("5. Display All Patients\n");
    printf("6. Exit\n");
    printf("----------------------------------------\n");

    printf("\nEnter your choice : ");
    while (!valid_int(&choice))
    {
        printf("\nEnter your choice : ");
    }

    return choice;
}