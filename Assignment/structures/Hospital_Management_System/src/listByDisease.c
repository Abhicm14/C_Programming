#include"hospital.h"

void displayPatientsByDisease(struct Patient* patients, int count,char* disease) 
{
    int count1;
    if (count == 0) 
    {
        printf("No patients in the system!\n");
        return;
    }

    printf("\n--- Patients suffering from '%s' ---\n", disease);
    
    int found = 0;
    
    for (count1 = 0; count1 < count; count1++) 
    {
        if (mystrcasecmp(patients[count1].disease, disease) == 0) 
        {
            printf("%d. %s | Age: %d | %c | %s\n",count1+1, patients[count1].name, patients[count1].age,patients[count1].gender, patients[count1].contact);
            found = 1;
        }
    }
    if (!found) 
    {
        printf("No patients found with disease: %s\n", disease);
    }
}