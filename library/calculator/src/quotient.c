#include<cal.h>

float quotient(int a, int b)
{
    if(a == 0 || b == 0)
    {
        printf("Can't Divisble by Zero\n");
        return 0;
    }
    else 
    {
        return (a/b);
    }
}