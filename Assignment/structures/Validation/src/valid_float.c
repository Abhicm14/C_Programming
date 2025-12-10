#include<valid.h>

int valid_float(float *value)
{
    char extra;

    if (scanf("%f", value) != 1)
    {
        // Clear buffer
        while ((extra = getchar()) != '\n' && extra != EOF);
        return 0; 
    }

    
    if (scanf("%c", &extra) == 1 && extra != '\n')
    {
        // Clear buffer
        while ((extra = getchar()) != '\n' && extra != EOF);
        return 0; 
    }

    return 1; 
}

