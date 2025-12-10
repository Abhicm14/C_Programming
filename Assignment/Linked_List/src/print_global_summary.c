#include "Eagle.h"

void print_global_summary(struct Plant *p_head)
{
    struct Plant *tmp = p_head;
    int grandtotal = 0;

    printf("\n=================================================\n");
    printf("        OVERALL PRODUCTION SUMMARY\n");
    printf("=================================================\n");
          
    while(tmp != NULL)
    {
        int subtotal = 0;
        printf("[+] ");
        printf("PLANT : %d (%s)\n", tmp->id, tmp->loc);

        struct Eagle *m_head = tmp->machine_link;
        
        if (m_head != NULL) 
        {
            struct Eagle *m_ptr = m_head;

            do 
            {
                printf("    - Machine %d (%s): %d Units\n",m_ptr->id, m_ptr->name, m_ptr->product_count);
                subtotal += m_ptr->product_count;
                m_ptr = m_ptr->link;

            } while (m_ptr != m_head);
        }
        else 
        {
            printf("    (No machines in this plant)\n");
        }

        printf("-----------------------------------\n");
        printf("> Subtotal (%d):         %d Units\n", tmp->id, subtotal); 
        grandtotal += subtotal; 
        
        tmp = tmp->plant_link;
    }
    printf("=================================================\n");
    printf("    GRAND TOTAL PRODUCTION:   %d Units\n", grandtotal);
    printf("=================================================\n");
}