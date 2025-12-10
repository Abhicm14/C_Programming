#include"hospital.h"

void displayAllPatients(struct Patient* patients, int count) 
{
    if (count == 0) 
    {
        printf("No patients in the system!\n");
        return;
    }

    printf("\n=== All Patients ===\n");
    for (int count1 = 0; count1 < count; count1++) 
    {
        printf("%d. %s | %d yrs | %c | %s | %s\n",count1+1, patients[count1].name, patients[count1].age,patients[count1].gender, patients[count1].disease, patients[count1].contact);
    }
}