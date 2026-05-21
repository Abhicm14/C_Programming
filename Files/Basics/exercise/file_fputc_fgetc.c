#include<stdio.h>

int main()
{
    FILE *fp = NULL;

    fp = fopen("hello.txt","w+");

    if(fp == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    else
    {
        //write characters A to Z into file.
        int index = 0;
        while(index < 26)
        {
            //fputc(character, file_pointer);
            fputc('A'+ index,fp);
            index++;
        }

        rewind(fp);

        //Read and display all characters from a file
        /*
            int ch;
            ch = fgetc(file_pointer);
        */
        int ch = 0;
        while((ch = fgetc(fp)) != EOF)
        {
            printf("%c",ch);
        }
        printf("\n");

        rewind(fp);

        // Count the number of characters in a file
        int count = 0;
        while((ch = fgetc(fp)) != EOF)
        {
            count++;
        }
        printf("Number of characters is  : %d\n",count);

        rewind(fp);

        // Count vowels in a  text file
        int count1 = 0;
        while((ch = fgetc(fp)) != EOF)
        {
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                count1++;
            }
        }
        printf("Number of vowels in file is : %d\n",count1);
    }
    fclose(fp);
    return 0;
}