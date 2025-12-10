#include<valid.h>

int valid_int(int *choice)
{
    int buffer_char; 
    char next_char;

    if(scanf("%d", choice) != 1) 
    {
        while ((buffer_char = getchar()) != '\n' && buffer_char != EOF);
        
        printf("Invalid Input\n");
        return 0;
    }

    if(scanf("%c", &next_char) == 1)
    {
        
        if(next_char != '\n') 
        {
            
            while ((buffer_char = getchar()) != '\n' && buffer_char != EOF);
            
            printf("Invalid Input\n");
            return 0;
        }
    }

    return 1;  
}

