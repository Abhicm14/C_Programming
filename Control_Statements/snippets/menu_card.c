#include<stdio.h>
#include<stdlib.h>

void main()
{
	int choice;

	while(1)
	{
		printf("1.Create Database\n");
		printf("2.Insert Record\n");
		printf("3.Modifiy Record\n");
		printf("4.Delete Record\n");
		printf("5.Display Record\n");
		printf("6.Exit\n");

		printf("Select the choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
			case 1:
				printf("Created Database.........\n");
				break;
			case 2:
				printf("Record Inserted..........\n");
			        break;
			case 3:
				printf("Record Modified..........\n");
				break;
			case 4:
				printf("Record Deleted..........\n");
				break;
			case 5:
				printf("All Record Displayed......\n");
				break;
			case 6: 
				exit(1);
			default :
				printf("Wrong Choice \n");
				break;	
		}
	}
	printf("\n");
}
