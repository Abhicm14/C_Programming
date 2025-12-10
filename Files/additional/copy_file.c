#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *src, *dest;
    int c;

    if (argc != 3)
    {
        printf("Usage: %s <source> <destination>\n", argv[0]);
        return 1;
    }
    
    if ((src = fopen(argv[1], "r")) == NULL)
    {
        printf("Can't open source file: %s\n", argv[1]);
        return 1;
    }
    
    if ((dest = fopen(argv[2], "w")) == NULL)
    {
        printf("Can't open destination file: %s\n", argv[2]);
        fclose(src);  // Close already opened file
        return 1;
    }
    
    while ((c = fgetc(src)) != EOF)
    {
        fputc(c, dest);  
    }
    
    fclose(src);
    fclose(dest);
    
    return 0;
}