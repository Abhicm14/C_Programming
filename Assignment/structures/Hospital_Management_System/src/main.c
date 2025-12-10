#include"hospital.h"

void main()
{
    struct Patient* patients = NULL;
    int totalPatients = 0;

    char name[MAX_NAME];
    char disease[MAX_DISEASE];
    int choice;

    while(1)
    {
        choice = menu();

        switch (choice) 
        {
            case 1:
            {
                addPatient(&patients, &totalPatients);
                break;
            }
            case 2:
            {
                printf("Enter name: ");
                fgets(name, MAX_NAME, stdin);
                removeNewline(name);
                searchPatientByName(patients, totalPatients, name);
                break;
            }
            case 3:
            {
                printf("Enter disease: ");
                fgets(disease, MAX_DISEASE, stdin);
                removeNewline(disease);
                displayPatientsByDisease(patients, totalPatients, disease);
                break;
            }
            case 4:
            {
                printf("Enter name to delete: ");
                fgets(name, MAX_NAME, stdin);
                removeNewline(name);
                deletePatient(&patients, &totalPatients, name);
                break;
            }
            case 5:
            {
                displayAllPatients(patients, totalPatients);
                break;
            }
            case 6:
            {
                freePatients(&patients, &totalPatients);
                printf("\nThank you!\n");
                exit(0);
            }
            default:
            {
                printf("Invalid choice!\n");
            }
        }
    }
    
}
