#include"school_gradeing.h"

void calculateaverage(struct student **class, int *count)
{
    int count1;
    int count2 = 0;

    while(count2 < *count)
    {
        float totalsum = 0.0; 
        float average = 0.0;

        for(count1 = 0; count1 < 5; count1++)
        {
            totalsum += (*class)[count2].marks[count1];
        }

        average = (totalsum / 5.0);
        (*class)[count2].average = average;

        count2++;
    }
}