#include"hospital.h"

void deletePatient(struct Patient** patients, int* count,char* name) 
{
    if (*count == 0) 
    {
        printf("No patients to delete!\n");
        return;
    }

    int index = -1;
    for (int count1 = 0; count1 < *count; count1++) 
    {
        if (strcmp((*patients)[count1].name, name) == 0) 
        {
            index = count1;
            break;
        }
    }

    if (index == -1) 
    {
        printf("Patient '%s' not found!\n", name);
        return;
    }

    // Shift left
    for (int count1 = index; count1 < *count - 1; count1++) 
    {
        (*patients)[count1] = (*patients)[count1 + 1];
    }

    (*count)--;

    if (*count == 0) 
    {
        free(*patients);
        *patients = NULL;
    } 
    else 
    {
        struct Patient* temp = (struct Patient*)realloc(*patients, (*count) * sizeof(struct Patient));
        if (temp != NULL) *patients = temp;
    }

    printf("Patient deleted successfully!\n");
}