/*
    syntax: int fprintf(FILE *stream, const char *format, ...);

    description: The fprintf() function sends formatted output to a stream. The format string is interpreted in the same way as the format string for printf(), but the argument is a file pointer to a FILE object that identifies an output stream.
    return value: Upon successful return, the total number of characters written is returned. If an output error is encountered, the function returns a negative value.

*/

#include <stdio.h>

int main() 
{
    FILE *fp;
    fp = fopen("output.txt", "w"); // Open a file for writing

    if (fp == NULL) 
    {
        perror("Error opening file");
        return 1;
    }

    // Write formatted data to the file
    fprintf(fp, "Hello, World!\n");
    fprintf(fp, "This is a test of fprintf.\n");
    fprintf(fp, "The value of pi is approximately %.2f\n", 3.14159);

    fclose(fp); // Close the file
    return 0;
}