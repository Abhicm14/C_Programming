/*
    syantax: int fscanf(FILE *stream, const char *format, ...);
        Description: The fscanf() function reads data from the given stream and stores them according to the parameter format. 
                     The format string contains conversion specifications that determine how the input is interpreted and stored in the provided variables.
        Return Value: On success, the function returns the number of input items successfully matched and assigned

    %[^\n] - This format specifier is used to read a string until a newline character is encountered. 
             It allows you to read an entire line of text, including spaces, without stopping at the first whitespace character.
*/

#include <stdio.h>

int main() 
{
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) 
    {
        perror("Unable to open file");
        return 1;
    }

    char name[50];
    int age;

    // Read data from the file using fscanf
    if (fscanf(file, "%s %d", name, &age) == 2) 
    {
        printf("Name: %s, Age: %d\n", name, age);
    } 
    else 
    {
        printf("Failed to read data from the file.\n");
    }

    fclose(file);
    return 0;
}