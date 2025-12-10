#include "hospital.h"

void addPatient(struct Patient** patients, int* count) 
{
    struct Patient* temp = realloc(*patients, (*count + 1) * sizeof(struct Patient));
    
    if(temp == NULL) 
    {
        printf("Memory allocation failed! Out of memory.\n");
        return;
    }
    *patients = temp;

    int current = *count;

    printf("\n--- Add New Patient ---\n");

    //NAME
    printf("Enter Name: ");
    fgets((*patients)[current].name, MAX_NAME, stdin);
    removeNewline((*patients)[current].name);

    while(!valid_string((*patients)[current].name)) 
    {
        printf("Error! Name must contain only letters and spaces.\n");
        printf("Enter Name: ");
        fgets((*patients)[current].name, MAX_NAME, stdin);
        removeNewline((*patients)[current].name);
    }

    // AGE
    printf("Enter Age: ");
    while (!valid_int(&((*patients)[current].age)) || (*patients)[current].age <= 0 || (*patients)[current].age > 150)
    {
        printf("Invalid! Please enter a valid age (1-150): ");
    }

    // GENDER
    printf("Enter Gender (M/F/O): ");
    while(!valid_char(&((*patients)[current].gender)))
    {
        printf("Invalid! Enter only M, F, or O: ");
    }

    // // Convert to uppercase for consistency
    // (*patients)[current].gender = toupper((*patients)[current].gender);
    if((*patients)[current].gender != 'M' && (*patients)[current].gender != 'F' && (*patients)[current].gender != 'O')
    {
        printf("Invalid gender!\n");
    }

    // DISEASE
    printf("Enter Disease: ");
    fgets((*patients)[current].disease, MAX_DISEASE, stdin);
    removeNewline((*patients)[current].disease);

    while(!valid_string((*patients)[current].disease)) 
    {
        printf("Error! Disease name must contain only letters and spaces.\n");
        printf("Enter Disease: ");
        fgets((*patients)[current].disease, MAX_DISEASE, stdin);
        removeNewline((*patients)[current].disease);
    }

    // CONTACT (10 digits)
    printf("Enter Contact (10 digits): ");
    fgets((*patients)[current].contact, MAX_CONTACT, stdin);
    removeNewline((*patients)[current].contact);

    while(!valid_contact((*patients)[current].contact)) 
    {
        printf("Error! Please enter exactly 10 digits only.\n");
        printf("Enter Contact (10 digits): ");
        fgets((*patients)[current].contact, MAX_CONTACT, stdin);
        removeNewline((*patients)[current].contact);
    }

    (*count)++;  // Now increase count after everything is valid

    printf("Patient added successfully!\n\n");
}