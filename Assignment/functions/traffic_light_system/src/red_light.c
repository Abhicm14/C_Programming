#include<main.h>

int red_light(void)
{
	int time;

	while(1)
    {
        printf("Enter the duration of red light : ");
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
