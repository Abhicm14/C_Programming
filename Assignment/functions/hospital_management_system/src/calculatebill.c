#include<main.h>

void calculateBill() 
{
    int id;
    int days; 
    int total = 0;
    
    while(1)
    {
        printf("\nEnter Patient ID (1-10): ");
        id = valid_int();
        if(id == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    while(1)
    {
        printf("Enter Number of Days: ");
        days = valid_int();
        if(days == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    if (id >= 1 && id <= 5) 
    { // General beds
        if ((id == 1 && gen1) || (id == 2 && gen2) || (id == 3 && gen3) || (id == 4 && gen4) || (id == 5 && gen5)) 
        {
            total = (GENERAL_CHARGE * days) + DOCTOR_FEE;
            printf("\n--- BILL SUMMARY ---\n");
            printf("Ward Type   : General\n");
            printf("Room Charge : %d x %d = %d\n", GENERAL_CHARGE, days, GENERAL_CHARGE*days);
            printf("Doctor Fee  : %d\n", DOCTOR_FEE);
            printf("---------------------------\n");
            printf("Total Bill  : %d\n", total);
            printf("---------------------------\n");
        } 
        else 
        {
            printf("Patient not admitted in this ID!\n");
        }
    }
    else if (id >= 6 && id <= 10) 
    { // ICU beds
        if ((id == 6 && icu1) || (id == 7 && icu2) || (id == 8 && icu3) || (id == 9 && icu4) || (id == 10 && icu5)) 
        {
            total = (ICU_CHARGE * days) + DOCTOR_FEE;
            printf("\n--- BILL SUMMARY ---\n");
            printf("Ward Type   : ICU\n");
            printf("Room Charge : %d x %d = %d\n", ICU_CHARGE, days, ICU_CHARGE*days);
            printf("Doctor Fee  : %d\n", DOCTOR_FEE);
            printf("---------------------------\n");
            printf("Total Bill  : %d\n", total);
            printf("---------------------------\n");
        } 
        else 
        {
            printf("Patient not admitted in this ID!\n");
        }
    }
    else 
    {
        printf("Invalid Patient ID!\n");
    }
}