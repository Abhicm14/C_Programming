#include<valid.h>

int valid_char(char *ch)
{
    char extra;

    // Read one character (skip leading whitespace with " %c")
    if (scanf(" %c", ch) != 1)
    {
        while ((extra = getchar()) != '\n' && extra != EOF);
        return 0;
    }

    // Check if there's any extra character after it
    if (scanf("%c", &extra) == 1 && extra != '\n')
    {
        while ((extra = getchar()) != '\n' && extra != EOF);
        return 0;
    }

    return 1;  // Success!
}