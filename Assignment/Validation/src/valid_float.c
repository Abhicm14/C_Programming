#include"validation.h"

float valid_float(void)
{
    float value;
    char extra;

    // Try to read a float
    if (scanf("%f", &value) != 1)
    {
        while ((extra = getchar()) != '\n' && extra != EOF);
        printf("Invalid Input\n");
        return -1.0f;  // You can choose another sentinel value if needed
    }

    // Check for extra characters after number
    if (scanf("%c", &extra) == 1 && extra != '\n')
    {
        while ((extra = getchar()) != '\n' && extra != EOF);
        printf("Invalid Input\n");
        return -1.0f;
    }

    return value;
}