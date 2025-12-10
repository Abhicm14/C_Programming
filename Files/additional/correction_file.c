#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int is_vowel(int ch);

int main()
{
    char wrong[81], right[120];
    int i, j;

    FILE *fptr1, *fptr2;

    if((fptr1 = fopen("files/wrong.txt", "r")) == NULL)
    {
        printf("File doesn't exist\n");
        exit(1);
    }
    if((fptr2 = fopen("files/right.txt", "w")) == NULL)
    {
        printf("File doesn't exist\n");
        fclose(fptr1);
        exit(1);
    }

    while((fgets(wrong, 81, fptr1)) != NULL)
    {
        i = 0;
        j = 0;

        while(wrong[i] != '\0')
        {
            // Capitalize first letter or letter after ". "
            if(islower(wrong[i]) && (i == 0 || (wrong[i-1] == ' ' && i >= 2 && wrong[i-2] == '.')))
            {
                right[j++] = toupper(wrong[i++]);
            }
            // Convert "a" to "an" before vowels
            // Check: space before 'a', 'a' itself, space after, then vowel
            else if((wrong[i] == 'a' || wrong[i] == 'A') && 
                    (i == 0 || wrong[i-1] == ' ') && 
                    wrong[i+1] == ' ' && 
                    is_vowel(wrong[i+2]))
            {
                right[j++] = wrong[i++];  // Copy 'a'
                right[j++] = 'n';          // Add 'n'
            }
            else
            {
                right[j++] = wrong[i++];
            }
        }
        right[j] = '\0';
        fputs(right, fptr2);
    }

    fclose(fptr1);
    fclose(fptr2);

    return 0;
}

int is_vowel(int ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}