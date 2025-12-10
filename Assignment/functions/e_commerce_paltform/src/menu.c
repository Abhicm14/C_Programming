#include<main.h>

int menu(void)
{
    int choice;

    printf("==== E-Commerce Platform ====\n");

    printf("1.Browse products\n");
    printf("2.Place Order\n");
    printf("3.Veiw Order status\n");
    printf("4.Exit\n");

    while(1)
    {
        printf("Enter the Choice : ");
        choice = valid_int();
        if(choice == -1)
        {
            continue;
        }
        else
        {
            break;
        }
    }

    return choice;
}
