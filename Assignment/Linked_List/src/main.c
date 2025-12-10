#include"Eagle.h"

int plantid;
char plantlocation[MAX_SIZE];

int machineid;
char machineName[MAX_SIZE];
float start;
float stop;
float cycle;

int main()
{
    int choice;

    struct Eagle *e_tail = NULL;
    struct Plant *p_head = NULL;
    
    while(1)
    {
        system("clear");

        printf("\n");
        printf("=====================================================\n");
        printf("||      EAGLE INDUSTRIAL MONITORING SYSTEM         ||\n");
        printf("=====================================================\n");
        printf("||                                                 ||\n");
        printf("||      [ INITIALIZATION ]                         ||\n");
        printf("||   1. Create Plant Batch (Setup)                 ||\n");
        printf("||                                                 ||\n");
        printf("||      [ EXPANSION ]                              ||\n");
        printf("||   2. Add Single Plant                           ||\n");
        printf("||   3. Add Machine to Plant                       ||\n");
        printf("||                                                 ||\n");
        printf("||      [ MAINTENANCE ]                            ||\n");
        printf("||   4. Delete Plant                               ||\n");
        printf("||   5. Delete Machine                             ||\n");
        printf("||   6. Update Machine Details                     ||\n");
        printf("||                                                 ||\n");
        printf("||      [ ANALYSIS & TOOLS ]                       ||\n");
        printf("||   7. Sort Plants (High -> Low Production)       ||\n");
        printf("||   8. Sort Machines (High -> Low Production)     ||\n");
        printf("||   9. Search Plant (Find by ID)                  ||\n");
        printf("||   10. Search Machine (Find by ID)               ||\n");
        printf("||                                                 ||\n");
        printf("||      [ REPORTING ]                              ||\n");
        printf("||   11. View Status (Reports Menu)                ||\n");
        printf("||   12. Exit System                               ||\n");
        printf("||                                                 ||\n");
        printf("=====================================================\n");

        printf(">> Enter your choice: ");
        while(!valid_int(&choice) || choice < 1 || choice > 12)
        {
            printf("Invalid Choice ! Enter again : ");
        }

        switch(choice)
        {
            case 1:
            {
                create_plants(&p_head);
                break;
            }
            case 2:
            {
                add_plant(&p_head);
                break;
            }
            case 3:
            {
                add_machine(&p_head);
                break;
            }
            case 4:
            {
                delete_plant(&p_head);
                break;
            }
            case 5:
            {
                delete_machine(p_head);
                break;
            }
            case 6:
            {
                update_machine(p_head);
                break;
            }
            case 7:
            {
                sort_plants(p_head);
                break;
            }
            case 8:
            {
                sort_machines_wrapper(p_head);
                break;
            }
            case 9:
            {
                search_plant_by_id(p_head);
                break;
            }
            case 10:
            {
                search_machine_by_id(p_head);
                break;
            }
            case 11:
            {
                show_reports_menu(p_head);
                break;
            }
            case 12:
            {
                system("clear");
                printf("Exiting System... Goodbye!\n");
                exit(0);
            }
        }
    }    
    free(p_head);
    free(e_tail);
    return 0;
}