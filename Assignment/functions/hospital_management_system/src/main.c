/*
===============================================================================
Project Name : Hospital Management System
File Name    : main.c
Author       : Abhishek C M
Date         : 12/09/2025
Description  :

    This project implements a basic hospital management system to handle patient
    admissions, discharges, billing, and viewing patient details. The system
    follows a menu-driven approach allowing hospital staff to manage records
    efficiently. It uses modular C design, where each function handles a specific
    task such as admitting or viewing patients. The project emphasizes practical
    use of functions, file structuring, and makefiles to build static and dynamic
    versions of the hospital management executable.
===============================================================================
*/


#include<main.h>

int GENERAL_CHARGE = 1000;
int ICU_CHARGE = 2500;
int DOCTOR_FEE = 500;

// General beds (5)
int gen1 = 0, gen2 = 0, gen3 = 0, gen4 = 0, gen5 = 0;
// ICU beds (5)
int icu1 = 0, icu2 = 0, icu3 = 0, icu4 = 0, icu5 = 0;

char name1[10],name2[10],name3[10],name4[10],name5[10],name6[10],name7[10],name8[10],name9[10],name0[10];

char disease1[10],disease2[10],disease3[10],disease4[10],disease5[10],disease6[10],disease7[10],disease8[10],disease9[10],disease0[10];

int age1,age2,age3,age4,age5,age6,age7,age8,age9,age0;

void main(void)
{
    int choice;
    
    while(1)
    {
        choice = menu();

        switch(choice)
        {
            case 1:
            {
                admitPatient();
                break;
            }
            case 2:
            {
                dischargePatient();
                break;
            }
            case 3:
            {
                viewPatients();
                break;
            }
            case 4:
            {
                calculateBill();
                break;
            }
            case 5:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("Wrong Choice\n");
            }
        }
    }
}