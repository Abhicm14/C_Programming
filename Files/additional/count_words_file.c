#include<stdio.h>
#include<stdlib.h>

int is_end(int ch);

void main()
{
    char line[81];
    int i,count = 0;

    FILE *fptr;

    if((fptr = fopen("files/test.txt","r")) == NULL)
    {
        printf("File doesn't exist\n");
        exit(1);
    }

    while((fgets(line,81,fptr)) != NULL)
    {
        for(i = 0; line[i] != '\0'; i++)
        {
            if(is_end(line[i]))
                count++;
        }
    }
    printf("NUmber of words in the file = %d\n",count);
    fclose(fptr);

}

int is_end(int ch)
{
    switch(ch)
    {
        case '\n':
        case '\t':
        case ' ':
        case ',':
        case '.':
        case ':':
        case ';':
        case '-':
            return 1;
    }
    return 0;
}