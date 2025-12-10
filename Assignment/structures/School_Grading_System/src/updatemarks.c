#include"school_gradeing.h"

void updatemarks(struct student **class,int *count)
{
    int rollno;
    int count2;
    float marks;
    int index;

    if(*count == 0)
    {
        printf("No records Found\n");
        return;
    }

    printf("\nEnter the roll no of student u want to update Marks :");
    while(1)
    {
        if(valid_int(&rollno) && rollno > 100)
        {
            break;
        }
        else
        {
            printf("Invalid Input/Roll no\n");
            continue;
        }
    }

    for(int count1 =0; count1 < *count; count1++)
    {
        if((*class)[count1].rollno == rollno)
        {
            index = count1;
            break;
        }
        else
        {
            printf("Roll no is not found\n");
            return;
        }
    }

    printf("Enter the subject number u want to update : ");
    while(1)
    {
        if(valid_int(&count2) && count2 < 6 && count2 > 0)
        {
            printf("Enter the marks : ");
            while(1)
            {
                if(valid_float(&marks) && marks < 100 && marks > 0)
                {
                    (*class)[index].marks[count2-1] = marks;
                    break;
                }
                else
                {
                    printf("Marks Should Be less than 100 and Greater than 0\n");
                    continue;
                }
            }
            break;
        }
        else
        {
            printf("Invalid Input\n");
            continue;
        }
    }
    printf("Marks Updated Successfully\n");
    return;
}