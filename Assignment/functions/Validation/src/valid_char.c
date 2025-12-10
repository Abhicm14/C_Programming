#include <validation.h>

char valid_char(void)
{
    char input, extra;

    if (scanf(" %c", &input) != 1)
    {
        while ((extra = getchar()) != '\n' && extra != EOF);
        printf("Invalid Input\n");
        return '\0';
    }

    if (scanf("%c", &extra) == 1 && extra != '\n')
    {
        while ((extra = getchar()) != '\n' && extra != EOF);
        printf("Invalid Input\n");
        return '\0';
    }

    return input;
}
