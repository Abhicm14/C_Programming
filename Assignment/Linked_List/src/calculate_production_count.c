#include"Eagle.h"

int calculate_production_count(void)
{
    int count = 0;

    int starttime = timeconversion(start);
    int stoptime =  timeconversion(stop);
    int cycle_min = timeconversion(cycle);

    if(cycle_min > 0)
    {
        int duration;

        if(stoptime >= starttime)
        {
            duration = stoptime - starttime;
        }
        else
        {
            duration = starttime - stoptime;
        }
        count = duration / cycle_min;
    }
    return count; 
}