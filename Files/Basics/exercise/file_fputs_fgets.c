#include<stdio.h>
#include<string.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("hello.txt","w+");

    if(fp == NULL)
    {
        perror("Error while opening file");
        return 1;
    }
    else
    {
        //fputs(string, file_pointer);
        //fgets(buffer, size, file_pointer);

        //write five lines into a file using fputs
        fputs("Always check if fopen() returned NULL\n",fp);
        fputs("Always close files using fclose()\n",fp);
        fputs("Use perror() when file operations fail\n",fp);
        fputs("Use Binary mode for structures and arrays\n",fp);

        rewind(fp);
        //Read a file line by line using fgets().
        char buffer[100];
        while (fgets(buffer, sizeof(buffer), fp) != NULL)
        {
            printf("Read : %s",buffer);
        }

        rewind(fp);
        int count = 0;
        //Count the number of lines in a file.
        while (fgets(buffer, sizeof(buffer), fp) != NULL)
        {
            count++;
        }
        printf("\nThere are %d number of lines in file\n ",count);

        rewind(fp);
        
        //Remove newline from a string read using fgets()
        while (fgets(buffer, sizeof(buffer), fp) != NULL)
        {
            buffer[strcspn(buffer, "\n")] = '\0';
            printf("Read : %s",buffer);
        }
    }
    fclose(fp);
    return 0;
}