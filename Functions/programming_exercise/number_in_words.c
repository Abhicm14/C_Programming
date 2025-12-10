#include <stdio.h>

void printDigitWords(int digit) 
{
	switch(digit) 
	{
		case 0: printf("Zero "); break;
		case 1: printf("One "); break;
		case 2: printf("Two "); break;
		case 3: printf("Three "); break;
		case 4: printf("Four "); break;
		case 5: printf("Five "); break;
		case 6: printf("Six "); break;
		case 7: printf("Seven "); break;
		case 8: printf("Eight "); break;
		case 9: printf("Nine "); break;
		default: break;
	}

}

void numberToWords(int num) 
{
	if (num == 0) 
	{
		return;
	}
	
	numberToWords(num / 10);

	printDigitWords(num % 10);
}

void main() 
{
	long number;
	
	printf("Enter the number : ");
	scanf("%ld",&number);

	if (number == 0) 
	{
		printf("Zero");
	} 
	else 
	{
		numberToWords(number);
	}

	printf("\n");
}

