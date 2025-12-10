#include"Eagle.h"

void show_reports_menu(struct Plant *p_head)
{
    int choice;

    while(1)
    {
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("*           PRODUCTION MONITORING SYSTEM        *\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("1. View Overall Production (All Plants)\n");
        printf("2. View Individual Plant Production\n");
        printf("3. View Individual Machine Details\n");
        printf("4. Return to Main Menu\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        printf("Enter your choice : ");
        while(!valid_int(&choice) || choice < 1 || choice > 4)
        {
            printf("Invalid choice! Enter 1-4 : ");
        }

        switch(choice)
        {
            case 1:
            {
                print_global_summary(p_head);
                break;
            }
            case 2:
            {
                print_plant_report(p_head);
                break;
            }
            case 3:
            {
                print_machine_card(p_head);
                break;
            }
            case 4:
            {
                return;
            }
        }
    }
    
}