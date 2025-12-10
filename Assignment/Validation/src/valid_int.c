#include<validation.h>

int valid_int(void)
{
    int choice;
    char extra;

    // Read integer
    if (scanf("%d", &choice) != 1) 
    {
        while ((extra = getchar()) != '\n' && extra != EOF);
        printf("Invalid Input\n");
        return -1;  
    }

    // Check for extra characters after number
    if (scanf("%c", &extra) == 1 && extra != '\n')
    {
        while ((extra = getchar()) != '\n' && extra != EOF);
        printf("Invalid Input\n");
        return -1;
    }

    return choice;
}
