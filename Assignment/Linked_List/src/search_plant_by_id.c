#include "Eagle.h"

void search_plant_by_id(struct Plant *p_head)
{
    int plantid;
    int totalMachines = 0;
    int subtotal = 0;
    struct Plant *tmp = p_head;

    printf(">> Enter Plant ID to search : ");
    while(!valid_int(&plantid)) 
    {
        printf("Invalid! Enter Plant ID Again : ");
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
        printf("Error: Plant ID %d not found.\n", plantid);
        return;
    }

    struct Eagle *m_head = tmp->machine_link;

    if (m_head != NULL) 
    {
        struct Eagle *m_ptr = m_head;
        do 
        {
            totalMachines++;
            m_ptr = m_ptr->link;
        } while (m_ptr != m_head);
    }

    printf("\n-------------------------------------------------\n");
    printf("        PLANT PERFORMANCE REPORT\n");
    printf("-------------------------------------------------\n");
    printf("Plant ID       : %d\n", tmp->id);
    printf("Location       : %s\n", tmp->loc);
    printf("Total Machines : %d\n", totalMachines);
    printf("> PRODUCTION BREAKDOWN : \n");

    if (m_head != NULL)
    {
        struct Eagle *m_ptr = m_head;
        int count = 1; 

        do 
        {
            printf("    %d. %s [ID:%d] ...... %d Units\n", count, m_ptr->name, m_ptr->id, m_ptr->product_count);
            subtotal += m_ptr->product_count;
            count++;
            m_ptr = m_ptr->link;

        } while (m_ptr != m_head);
    }
    else
    {
        printf("   (No machines installed)\n");
    }

    printf("-------------------------------------------------\n");
    printf("        TOTAL PLANT OUTPUT:     %d Units\n", subtotal);
    printf("-------------------------------------------------\n");
}