/*
    syntax: char *fputs(const char *str, FILE *stream);

    description: The fputs() function writes the string pointed to by str to the stream pointed to by stream,without its terminating null character. 
                 It returns a non-negative value on success, or EOF on error.
*/

#include <stdio.h>

int main() 
{
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) 
    {
        perror("Unable to open file");
        return 1;
    }

    const char *str = "Hello, World!";
    if (fputs(str, file) == EOF) 
    {
        perror("Error writing to file");
        fclose(file);
        return 1;
    }

    fclose(file);
    return 0;
}