/*
    syntax: rewind(FILE *stream);

    description: The rewind() function sets the file position indicator for the stream pointed to by stream to the beginning of the file. 
                 It also clears the error and EOF indicators for the stream. 
                 The function does not return a value.
*/

#include <stdio.h>

int main() 
{
    FILE *file = fopen("output.txt", "r");
    if (file == NULL) 
    {
        perror("Unable to open file");
        return 1;
    }

    // Read the first line of the file
    char buffer[100];
    if (fgets(buffer, sizeof(buffer), file) != NULL) 
    {
        printf("First line: %s", buffer);
    } 
    else 
    {
        perror("Error reading from file");
        fclose(file);
        return 1;
    }

    // Rewind the file to the beginning
    rewind(file);

    // Read the first line again after rewinding
    if (fgets(buffer, sizeof(buffer), file) != NULL) 
    {
        printf("First line after rewind: %s", buffer);
    } 
    else 
    {
        perror("Error reading from file after rewind");
        fclose(file);
        return 1;
    }

    fclose(file);
    return 0;
}