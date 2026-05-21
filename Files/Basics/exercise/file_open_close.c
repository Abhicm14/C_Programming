#include<stdio.h>

int main()
{
    /*
    FILE *fp;
    fp = fopen("filename", "mode");
    fclose(fp);
    */
    FILE *fp = NULL;

    fp = fopen("hello.txt","a");

    if(fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    else
    {
        printf("File is sucessfully Opened\n");

        char data[] = "\nJain college of Engineering Belgavi\n";
        int index = 0;

        while(data[index] != '\0')
        {
            fputc(data[index],fp);
            index++;
        }
        
    }
    fclose(fp);
    return 0;
}