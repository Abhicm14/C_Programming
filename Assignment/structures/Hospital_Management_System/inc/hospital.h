#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<valid.h>

#define MAX_NAME    50
#define MAX_DISEASE 50
#define MAX_CONTACT 12


struct Patient 
{
    char name[MAX_NAME];
    int age;
    char gender;                    // 'M', 'F', 'O'
    char disease[MAX_DISEASE];
    char contact[MAX_CONTACT];
};

// External declarations
extern struct Patient* patients;
extern int totalPatients;

int menu();

int valid_contact(char *contact);
void removeNewline(char* str);

void addPatient(struct Patient** patients, int* count);
void searchPatientByName(struct Patient* patients, int count,char* name);
void displayPatientsByDisease(struct Patient* patients, int count,char* disease);
void deletePatient(struct Patient** patients, int* count,char* name);
void displayAllPatients(struct Patient* patients, int count);
void freePatients(struct Patient** patients, int* count);

