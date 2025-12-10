#include"school_gradeing.h"

void displaytoppers(struct student **class, int *count)
{
    int count1;
    int count2;
    int limit;

    if(*count == 0)
    {
        printf("No records found. \n");
        return;
    }
    else if(*count < 3)
    {
        limit = *count;
    }
    else
    {
        limit = 3;
    }

    //sorting in descending order
    for(count1 =0; count1 < *count-1; count1++)
    {
        int max = count1;

        for(count2 =0; count2 < *count; count2++)
        {
            if((*class)[count2].average > (*class)[max].average)
            {
                max = count2;
            }
        }

        if(max != count1)
        {
            struct student temp = (*class)[count1];
            (*class)[count1] = (*class)[max];
            (*class)[max] = temp;
        }
    }

    printf("\n==========================================\n");
    printf("    TOP %d PERFORMING STUDENTS   \n",limit);
    printf("==========================================\n");
    printf("Rank | %-20s | %-10s | Average\n", "Name", "Roll No"); 
    printf("--------------------------------------------------\n");
    
    for(count1 = 0; count1 < limit; count1++)
    {
        
        printf("  %d  | %-20s | %-10d | %.2f\n",count1+1,(*class)[count1].name,(*class)[count1].rollno, (*class)[count1].average);
    }
    printf("==================================================\n");
}