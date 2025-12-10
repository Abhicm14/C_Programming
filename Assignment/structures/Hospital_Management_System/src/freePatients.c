#include"hospital.h"

void freePatients(struct Patient** patients, int* count) 
{
    if (*patients != NULL) 
    {
        free(*patients);
        *patients = NULL;
    }
    *count = 0;
}

