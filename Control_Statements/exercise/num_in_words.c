#include<stdio.h>

void main()
{
	long int num,reversednum=0;
	int rem,choice;

	printf("Enter the six digit number : ");
	scanf("%ld",&num);

	while(num>0)
	{
		rem = num%10;
		reversednum = reversednum*10+rem;
		num /=10;
	}

	while(reversednum>0)
	{
		choice = reversednum%10;

		switch(choice)
		{
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
			case 0:
				printf("Zero ");
				break;
			default:
				printf("Wrong ");
				break;
		}
		reversednum /= 10;
	}
	printf("\n");
}
