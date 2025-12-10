#include "Eagle.h"

void search_machine_by_id(struct Plant *p_head)
{
    int plantid;
    int machineid;
    struct Plant *tmp = p_head;

    printf(">> Enter Plant ID   : ");
    while(!valid_int(&plantid)) 
    {
        printf("Invalid Plant ID Enter again : ");
    }

    printf(">> Enter Machine ID : ");
    while(!valid_int(&machineid)) 
    {
        printf("Invalid Machine ID Enter again : ");
    }

    
    while(tmp != NULL) 
    {
        if(tmp->id == plantid) 
        {
            break;
        }
        tmp = tmp->plant_link;
    }

    if (tmp == NULL) 
    {
        printf("Error: Plant %d not found.\n", plantid);
        return;
    }

    
    struct Eagle *m_head = tmp->machine_link;
    struct Eagle *m_ptr = m_head;
    int found = 0; 

    if (m_head != NULL) 
    {
        do 
        {
            if(m_ptr->id == machineid) 
            {
                found = 1;
                break; 
            }
            m_ptr = m_ptr->link;
        } while (m_ptr != m_head);
    }

    if (found == 0) 
    {
        printf("Error: Machine %d not found in Plant %d.\n", machineid, plantid);
        return;
    }

    printf("\n-------------------------------------------------\n");
    printf("        MACHINE STATUS CARD\n");
    printf("-------------------------------------------------\n");
    printf("Machine Name   : %s\n", m_ptr->name);
    printf("Machine ID     : %d\n", m_ptr->id);
    printf("Location       : %s (Plant %d)\n", tmp->loc, tmp->id);
    printf("> TIMING DETAILS\n");
    printf("    Start Time : %.2f\n", m_ptr->start);
    printf("    Stop Time  : %.2f\n", m_ptr->stop);
    printf("    Cycle Time : %.2f\n", m_ptr->cycle);
    printf("> PERFORMANCE\n");
    printf("    Total Output   : %d Units\n", m_ptr->product_count);
    printf("-------------------------------------------------\n");   
}