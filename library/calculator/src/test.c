#include<stdio.h>
#include"cal.h"

void main(void)
{
    int a,b;
	char op='\0';

    printf("==Mini Calculator==\n");
    printf("1.Addition (+)\n");
    printf("2.Subtraction(-)\n");
    printf("3.Multiplication(*)\n");
    printf("4.Quotient(/)\n");
    printf("5.Reminder(%%)\n");


	printf("Enter 1st number: ");
	scanf("%d",&a);

	printf("Enter 2nd number: ");
	scanf("%d",&b);

	printf("Enter Operator : ");
	scanf(" %c", &op);

	switch(op)
	{
		case '+': 
			{
				printf("Addition of %d and %d :  %d\n",a,b,addition(a,b));
				break;
			}
		case '-':
			{
				printf("Subtraction of %d and %d :  %d\n",a,b,subtraction(a,b));
				break;
			}
		case '*':
			{
				printf("Multiplication of %d and %d :  %d\n",a,b,multiplication(a,b));
				break;
			}
		case '/':
			{
				
				printf("Division of %d and %d :  %.2f\n",a,b,quotient(a,b));
				break;
			}
        case '%':
			{
				
				printf("Reminder of %d and %d :  %d\n",a,b,reminder(a,b));
				break;
			}
		default:
			{
				printf("Wrong Choice\n");
			}

	}
}
