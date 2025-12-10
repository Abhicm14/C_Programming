#include<main.h>

void viewPatients() 
{
    printf("\n--- Bed Status ---\n");

    if(gen1 == 1)
    {
        printf("***Bed 1 Patient Details***\n");
        printf("Name : %s\t",name1);
        printf("Age : %d\t",age1);
        printf("Disease : %s\t",disease1);
        printf("General Bed 1 : Occupied (ID 1)\n");    
    }
    else
    {
        printf("General Bed 1 : Empty\n");

    }

    if(gen2 == 1)
    {
        printf("***Bed 2 Patient Details***\n");
        printf("Name : %s\t",name2);
        printf("Age : %d\t",age2);
        printf("Disease : %s\t",disease2);
        printf("General Bed 2: Occupied (ID 2)\n");
    }
    else
    {
        printf("General Bed 2 : Empty\n");
    }

    if(gen3 == 1)
    {
        printf("***Bed 3 Patient Details***\n");
        printf("Name : %s\t",name3);
        printf("Age : %d\t",age3);
        printf("Disease : %s\t",disease3);
        printf("General Bed 3 : Occupied (ID 3)\n");
    }
    else 
    {
        printf("General Bed 3 : Empty\n");
    }

    if(gen4 == 1)
    {
        printf("***Bed 4 Patient Details***\n");
        printf("Name : %s\t",name4);
        printf("Age : %d\t",age4);
        printf("Disease : %s\t",disease4);
        printf("General Bed 4 : Occupied (ID 4)\n");

    }
    else
    {
        printf("General Bed 4 : Empty\n");
    }

    if(gen5 == 1)
    {
        printf("***Bed 5 Patient Details***\n");
        printf("Name : %s\t",name5);
        printf("Age : %d\t",age5);
        printf("Disease : %s\t",disease5);
        printf("General Bed 5 : Occupied (ID 5)\n");
    }
    else
    {
        printf("General Bed 5 : Empty\n");
    }

    if(icu1 == 1)
    {
        printf("***ICU Bed 1 Patient Details***\n");
        printf("Name : %s\t",name6);
        printf("Age : %d\t",age6);
        printf("Disease : %s\t",disease6);
        printf("ICU Bed 1 : Occupied (ID 6)\n");
    }
    else
    {
        printf("ICU Bed 1 : Empty\n");
    }

    if(icu2 == 1)
    {
        printf("***ICU Bed 2 Patient Details***\n");
        printf("Name : %s\t",name7);
        printf("Age : %d\t",age7);
        printf("Disease : %s\t",disease7);
        printf("ICU Bed 2 : Occupied (ID 7)\n");
    }
    else
    {
        printf("ICU Bed 2 : Empty\n");
    }

    if(icu3 == 1)
    {
        printf("***ICU Bed 3 Patient Details***\n");
        printf("Name : %s\t",name8);
        printf("Age : %d\t",age8);
        printf("Disease : %s\t",disease8);
        printf("ICU Bed 3 : Occupied (ID 8)\n");
    }
    else
    {
        printf("ICU Bed 3 : Empty\n");
    }

    if(icu4 == 1)
    {
        printf("***ICU Bed 4 Patient Details***\n");
        printf("Name : %s\t",name9);
        printf("Age : %d\t",age9);
        printf("Disease : %s\t",disease9);
        printf("ICU Bed 4 : Occupied (ID 9)\n");
    }
    else
    {
        printf("ICU Bed 4 : Empty\n");
    }

    if(icu5 == 1)
    {
        printf("***ICU Bed 5 Patient Details***\n");
        printf("Name : %s\t",name0);
        printf("Age : %d\t",age0);
        printf("Disease : %s\t",disease0);
        printf("ICU Bed 5 : Occupied (ID 10)\n");
    }
    else
    {
        printf("ICU Bed 5 : Empty\n");
    }

}