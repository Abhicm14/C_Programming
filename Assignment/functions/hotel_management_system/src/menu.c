#include <main.h>

int menu(void)
{
	int choice;

	printf(" -------------------------------------\n");
	printf("|  Welcome to the Shri & Son's Hotel  |\n");
	printf(" -------------------------------------\n");

	printf("1. Book Room\n");
	printf("2. Cancel\n");
	printf("3. Check IN\n");
	printf("4. Check OUT\n");
	printf("5. Exit\n");

	while(1)
	{
		printf("\nPlease Select from Above : ");
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
