#include<main.h>

void admitPatient() 
{
    int wardChoice;
    

    while(1)
    {
        printf("\nSelect Ward:\n1. General\n2. ICU\nEnter: ");
        wardChoice = valid_int();
        if(wardChoice == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    if (wardChoice == 1) 
    {
        if (gen1 == 0) 
        { 
            printf("***Patient Details***\n");
            printf("Enter Name : ");
            scanf("%s",name1);

            printf("Enter age : ");
            scanf("%d",&age1);

            printf("Enter Disease : ");
            scanf("%s",disease1);
            
            gen1 = 1; 
            printf("Admitted in General Bed 1 (Patient ID: 1)\n"); 
        }
        else if (gen2 == 0) 
        {
            printf("***Patient Details***\n");
            printf("Enter Name : ");
            scanf("%s",name2);

            printf("Enter age : ");
            scanf("%d",&age2);

            printf("Enter Disease : ");
            scanf("%s",disease2);

            gen2 = 1; 
            printf("Admitted in General Bed 2 (Patient ID: 2)\n"); 
        }
        else if (gen3 == 0) 
        { 
            printf("***Patient Details***\n");
            printf("Enter Name : ");
            scanf("%s",name3);

            printf("Enter age : ");
            scanf("%d",&age3);

            printf("Enter Disease : ");
            scanf("%s",disease3);

            gen3 = 1; 
            printf("Admitted in General Bed 3 (Patient ID: 3)\n"); 
        }
        else if (gen4 == 0) 
        { 
            printf("***Patient Details***\n");
            printf("Enter Name : ");
            scanf("%s",name4);

            printf("Enter age : ");
            scanf("%d",&age4);

            printf("Enter Disease : ");
            scanf("%s",disease4);

            gen4 = 1; 
            printf("Admitted in General Bed 4 (Patient ID: 4)\n"); 
        }
        else if (gen5 == 0) 
        {
            printf("***Patient Details***\n");
            printf("Enter Name : ");
            scanf("%s",name5);

            printf("Enter age : ");
            scanf("%d",&age5);

            printf("Enter Disease : ");
            scanf("%s",disease5);

            gen5 = 1; 
            printf("Admitted in General Bed 5 (Patient ID: 5)\n"); 
        }
        else 
        {
            printf("No General beds available!\n");
        }
    } 
    else if (wardChoice == 2) 
    {
        if (icu1 == 0) 
        { 
            printf("***Patient Details***\n");
            printf("Enter Name : ");
            scanf("%s",name6);

            printf("Enter age : ");
            scanf("%d",&age6);

            printf("Enter Disease : ");
            scanf("%s",disease6);

            icu1 = 1; 
            printf("Admitted in ICU Bed 1 (Patient ID: 6)\n"); 
        }
        else if (icu2 == 0) 
        { 
            printf("***Patient Details***\n");
            printf("Enter Name : ");
            scanf("%s",name7);

            printf("Enter age : ");
            scanf("%d",&age7);

            printf("Enter Disease : ");
            scanf("%s",disease7);

            icu2 = 1; 
            printf("Admitted in ICU Bed 2 (Patient ID: 7)\n"); 
        }
        else if (icu3 == 0) 
        { 
            printf("***Patient Details***\n");
            printf("Enter Name : ");
            scanf("%s",name8);

            printf("Enter age : ");
            scanf("%d",&age8);

            printf("Enter Disease : ");
            scanf("%s",disease8);

            icu3 = 1; 
            printf("Admitted in ICU Bed 3 (Patient ID: 8)\n"); 
        }
        else if (icu4 == 0) 
        { 
            printf("***Patient Details***\n");
            printf("Enter Name : ");
            scanf("%s",name9);

            printf("Enter age : ");
            scanf("%d",&age9);

            printf("Enter Disease : ");
            scanf("%s",disease9);

            icu4 = 1; 
            printf("Admitted in ICU Bed 4 (Patient ID: 9)\n"); 
        }
        else if (icu5 == 0) 
        { 
            printf("***Patient Details***\n");
            printf("Enter Name : ");
            scanf("%s",name0);

            printf("Enter age : ");
            scanf("%d",&age0);

            printf("Enter Disease : ");
            scanf("%s",disease0);

            icu5 = 1; 
            printf("Admitted in ICU Bed 5 (Patient ID: 10)\n"); 
        }
        else
        {
            printf("No ICU beds available!\n");
        }
    } 
    else 
    {
        printf("Invalid ward choice!\n");
    }
}