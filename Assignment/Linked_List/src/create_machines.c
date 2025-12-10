#include "Eagle.h"

void create_machines(struct Plant *p_head, int targetPlantID)
{
    int Nmachines;

    struct Plant *targetPlant = p_head;

    while(targetPlant != NULL) 
    {
        if(targetPlant->id == targetPlantID) 
            break;
        targetPlant = targetPlant->plant_link;
    }

    if(targetPlant == NULL) 
    {
        printf("Error: Plant ID %d not found.\n", targetPlantID);
        return;
    }

    printf("\nEnter the Number of Machines for Plant %d: ", targetPlantID);
    while(!valid_int(&Nmachines) || Nmachines < 0) 
    {
        printf("Enter a number greater than zero: ");
    }

    for(int count = 0; count < Nmachines; count++)
    {
        printf("\n[Machine %d]\n", count + 1);

        int is_unique = 0;
        while (!is_unique)
        {
            printf("Enter Machine ID : ");
            while(!valid_int(&machineid)) 
            {
                printf("Enter Valid ID: ");
            }

            struct Eagle *check = targetPlant->machine_link;
            int found_duplicate = 0;

            if(check != NULL) 
            {
                do
                {
                    if(check->id == machineid) 
                    {
                        printf("Error: Machine ID %d already exists!\n", machineid);
                        found_duplicate = 1;
                        break;
                    }
                    check = check->link;
                }while(check != targetPlant -> machine_link);
            }
            if (found_duplicate == 0) 
            {
                is_unique = 1;
            }
        }

        machine_input();

        if(targetPlant->machine_link == NULL) 
        {
            struct Eagle *newMachine = create_machine_node(machineid, machineName, start, stop,cycle);
            targetPlant->machine_link = newMachine;
        } 
        else 
        {
            
            struct Eagle *head = targetPlant->machine_link;
            struct Eagle *tail = head;

            while (tail->link != head) 
            {
                tail = tail->link;
            }

            tail = append_machine(tail, machineid, machineName, start, stop,cycle);   
        }
    }
}