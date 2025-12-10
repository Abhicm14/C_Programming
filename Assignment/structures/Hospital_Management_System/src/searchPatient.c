#include"hospital.h"

void searchPatientByName(struct Patient* patients, int count,char* name) 
{
    int count1;
    if (count == 0) 
    {
        printf("No patients in the system!\n");
        return;
    }

    int found = 0;
    for (count1 = 0; count1 < count; count1++) 
    {
        if (mystrcasecmp(patients[count1].name, name) == 0) 
        {
            printf("\n--- Patient Found ---\n");
            printf("Name    : %s\n", patients[count1].name);
            printf("Age     : %d\n", patients[count1].age);
            printf("Gender  : %c\n", patients[count1].gender);
            printf("Disease : %s\n", patients[count1].disease);
            printf("Contact : %s\n", patients[count1].contact);
            found = 1;
        }
    }
    if (!found) 
    {
        printf("Patient '%s' not found!\n", name);
    }
}