#include<main.h>
 
int yellow_light(void)
{
	int time;
	
	while(1)
    {
        printf("Enter the duration of yellow light : ");
        time = valid_int();
        if(time == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }
	return time;
}