#include<pointers.h>

int (*operation)(int, int);

void calculator(void)
{
    int num1;
    int num2;
    int choice;
    int result;


    while(1)
    {
        printf("Enter first integer : ");
        num1  = valid_int();
        if(num1 == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    while(1)
    {
        printf("Enter second integer : ");
        num2  = valid_int();
        if(num2 == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    while(1)
    {
        printf("\nChoose an operation : \n");
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("0. Exit\n");

        
        printf("\nEnter your choice (1-4) : ");
        choice  = valid_int();
        if(choice == -1)
        {
            continue;
        }
        else
        {
            switch(choice)
            {
                case 0:
                {
                    printf("Exiting from the Calculator \n");
                    return;
                }
                case 1:
                {
                    operation = addition;
                    break;
                }
                case 2:
                {
                    operation = subtraction;
                    break;
                }
                case 3:
                {
                    operation = multiplication;
                    break;
                }
                case 4:
                {
                    if (num2 == 0) 
                    {
                        printf("Error: Cannot divide by zero.\n");
                        return;
                    }
                    operation = division;
                    break;
                }
                default:
                {
                    printf("Invalid choice. Please try again.\n");
                    continue;;
                }
            }
            result = (*operation)(num1, num2);
            printf("Result: %d\n", result);
        }
    }
}
