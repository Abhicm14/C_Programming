#include"school_gradeing.h"

void addstudent(struct student **class,int *count)
{
    int count1;

    int size = 0;

    printf("\nEnter number of students u wish to add :");
    while(1)
    {
        if(valid_int(&size) && size > 0)
        {
            break;
        }
        else
        {
            printf("Enter number of students :");
            continue;
        }
        
    }

    int total = *count + size;

    struct student *temp = realloc(*class, total * sizeof(struct student));

    if(temp == NULL)
    {
        printf("Memory allocation failed! out of memory.\n");
        return;
    }
    
    *class = temp;

    printf("\nEnter the  %d student details\n",size);

    for(count1 = 0; count1 < size; count1++)
    {
        int current = *count + count1;

        printf("\nEnter the student %d details\n",count1+1);

        printf("Enter Name :");  
        fgets((*class)[current].name, MAX_SIZE, stdin);
        removeNewline((*class)[current].name);

        while (!valid_string((*class)[current].name)) 
        {
            printf("Error! Name must contain only letters and spaces.\n");
            printf("Enter Name :");
            fgets((*class)[current].name, MAX_SIZE, stdin);
            removeNewline((*class)[current].name);
        }

        printf("Enter Roll Number :");
        while(1)
        {
            if(valid_int(&(*class)[current].rollno) && (*class)[current].rollno > 100)
            {
                for(int count2 = 0; count2 < current ; count2++)
                {
                    if((*class)[current].rollno == (*class)[count2].rollno)
                    {
                        printf("Please Enter Unique roll no. This roll nomber is present already\n");
                        printf("Enter Roll Number :");
                        break;;
                    }
                }
                break;
            }
            else
            {
                printf("Invalid! Enter a positive Number.");
            }
        }

        printf("Enter 5 subject marks: \n");
        for(int count1 = 0; count1 < 5; count1++)
        {
            printf("Subject %d: ", count1 + 1);
            while(1) 
            {
                if(valid_float(&(*class)[current].marks[count1]) && (*class)[current].marks[count1] >= 0 && (*class)[current].marks[count1] < 100)
                {
                    break; // Input good, move to next subject
                }
                else 
                {
                    printf("Invalid mark! Enter a positive number for Subject %d: ", count1 + 1);
                }
            }
        }
        printf("\n Student \"%s\" Marks added successfully.\n",(*class)[current].name);
    }
    *count = total;
}

