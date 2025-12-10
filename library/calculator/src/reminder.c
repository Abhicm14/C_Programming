#include<cal.h>

int reminder(int a, int b)
{
    if(a == 0 || b == 0)
    {
        printf("Can't Divisble by Zero\n");
        return 0;
    }
    else 
    {
        return (a%b);
    }
}