/*
    syntax of ferror: int ferror(FILE *stream);
        ferror() function checks the error indicator for the given stream and returns a non-zero value if it is set. Otherwise, it returns zero.

    syntax of clearerr: void clearerr(FILE *stream);
        clearerr() function clears the error indicator and end-of-file indicator for the given stream.

    syntax of feof: int feof(FILE *stream);
        feof() function checks the end-of-file indicator for the given stream and returns a non-zero value if it is set. Otherwise, it returns zero.

    
    syntax of perror: void perror(const char *str);
        perror() function produces a message on the standard error output describing the last error encountered during a call to a library function. 
        The argument is a string that is printed before the error message, typically to indicate which function failed.

        Example: perror("fopen") will print a message like "fopen: No such file or directory" if the file cannot be opened.

*/

#include<stdio.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("input.txt","r");

    if( fp == NULL)
    {
        perror("fopen");
        return 1;
    }
    int ch;
    while((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    if(feof(fp))
    {
        printf("\nComplete File is Read\n");
    }

    if(ferror(fp))
    {
        printf("Error occured while reading from the file");
    }

    clearerr(fp);

    if(ferror(fp))
    {
        printf("Error occured while reading from the file");
    }

    fclose(fp);
    return 0;
}