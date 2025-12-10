#include<main.h>

void dischargePatient() 
{
    int id;  
    
    while(1)
    {
        printf("\nEnter Patient ID to discharge (1-10): ");
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

    if (id == 1 && gen1 == 1) 
    {
        printf("***Patient Details***\n");
        printf("Name : %s\t",name1);
        printf("Age : %d\t",age1);
        printf("Disease : %s\t",disease1);
        name1[10] = 0;
        age1=0;
        disease1[10] =0;
        gen1 = 0; 
        printf("Patient ID 1 discharged.\n"); 
    }
    else if (id == 2 && gen2 == 1) 
    {
        printf("***Patient Details***\n");
        printf("Name : %s\t",name2);
        printf("Age : %d\t",age2);
        printf("Disease : %s\t",disease2);
        name2[10] = 0;
        age2=0;
        disease2[10] =0; 
        gen2 = 0; 
        printf("Patient ID 2 discharged.\n"); 
    }
    else if (id == 3 && gen3 == 1) 
    {
        printf("***Patient Details***\n");
        printf("Name : %s\t",name3);
        printf("Age : %d\t",age3);
        printf("Disease : %s\t",disease3);
        name3[10] = 0;
        age3=0;
        disease3[10] =0;
        gen3 = 0; 
        printf("Patient ID 3 discharged.\n"); 
    }
    else if (id == 4 && gen4 == 1) 
    { 
        printf("***Patient Details***\n");
        printf("Name : %s\t",name4);
        printf("Age : %d\t",age4);
        printf("Disease : %s\t",disease4);
        name4[10] = 0;
        age4=0;
        disease4[10] =0;
        gen4 = 0; 
        printf("Patient ID 4 discharged.\n");
    }
    else if (id == 5 && gen5 == 1) 
    { 
        printf("***Patient Details***\n");
        printf("Name : %s\t",name5);
        printf("Age : %d\t",age5);
        printf("Disease : %s\t",disease5);
        name5[10] = 0;
        age5=0;
        disease5[10] =0;
        gen5 = 0; 
        printf("Patient ID 5 discharged.\n"); 
    }
    else if (id == 6 && icu1 == 1) 
    {
        printf("***Patient Details***\n");
        printf("Name : %s\t",name6);
        printf("Age : %d\t",age6);
        printf("Disease : %s\t",disease6);
        name6[10] = 0;
        age6=0;
        disease6[10] =0; 
        icu1 = 0; 
        printf("Patient ID 6 discharged.\n"); 
    }
    else if (id == 7 && icu2 == 1) 
    { 
        printf("***Patient Details***\n");
        printf("Name : %s\t",name7);
        printf("Age : %d\t",age7);
        printf("Disease : %s\t",disease7);
        name7[10] = 0;
        age7=0;
        disease7[10] =0;
        icu2 = 0; 
        printf("Patient ID 7 discharged.\n"); 
    }
    else if (id == 8 && icu3 == 1) 
    { 
        printf("***Patient Details***\n");
        printf("Name : %s\t",name8);
        printf("Age : %d\t",age8);
        printf("Disease : %s\t",disease8);
        name8[10] = 0;
        age8=0;
        disease8[10] =0;
        icu3 = 0; 
        printf("Patient ID 8 discharged.\n"); 
    }
    else if (id == 9 && icu4 == 1) 
    { 
        printf("***Patient Details***\n");
        printf("Name : %s\t",name9);
        printf("Age : %d\t",age9);
        printf("Disease : %s\t",disease9);
        name9[10] = 0;
        age9=0;
        disease9[10] =0;
        icu4 = 0; 
        printf("Patient ID 9 discharged.\n"); 
    }
    else if (id == 10 && icu5 == 1) 
    { 
        printf("***Patient Details***\n");
        printf("Name : %s\t",name0);
        printf("Age : %d\t",age0);
        printf("Disease : %s\t",disease0);
        name0[10] = 0;
        age0=0;
        disease0[10] =0;
        icu5 = 0; 
        printf("Patient ID 10 discharged.\n"); 
    }
    else 
    {
        printf("Invalid ID or bed already empty!\n");
    }
    
}