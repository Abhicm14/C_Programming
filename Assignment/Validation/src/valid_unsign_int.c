#include<validation.h>

unsigned int valid_unsigned_int(void)
{
    unsigned long long temp; // temporarily store input to catch large numbers
    char extra;

    if (scanf("%lld", &temp) != 1) 
    {
        while ((extra = getchar()) != '\n' && extra != EOF);
        printf("Invalid Input\n");
        return (unsigned int)-1;
    }

    // Check for extra characters
    if (scanf("%c", &extra) == 1 && extra != '\n') 
    {
        while ((extra = getchar()) != '\n' && extra != EOF);
        printf("Invalid Input\n");
        return (unsigned int)-1;
    }

    // Check 32-bit unsigned range
    if (temp < 0 || temp > 4294967296LL) 
    {
        printf("Invalid Input: must be 0 to 4294967295\n");
        return (unsigned int)-1;
    }

    return (unsigned int)temp;
}