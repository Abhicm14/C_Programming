/*
    syntax: char *fgets(char *str, int n, FILE *stream);
    description: The fgets() function reads a line from the specified stream and stores it into the string pointed to by str. It stops when either (n-1) characters are read, the newline character is read, or the end-of-file is reached, whichever comes first. The string is then terminated with a null character.
    parameters:
        str: A pointer to an array of chars where the string read is stored.
        n: The maximum number of characters to be read (including the null character).
        stream: A pointer to a FILE object that identifies the stream to read from.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[100];

    FILE *fp = fopen("example.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }

    if (fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        printf("Read line: %s", buffer);
    }
    else
    {
        perror("Error reading from file");
    }

    fclose(fp);
    return 0;
}