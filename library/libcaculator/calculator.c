#include<stdio.h>
#include<calc.h>

void main()
{
	int a,b;
	char op='\0';

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
				printf("Addition of %d and %d :  %.2f\n",a,b,add(a,b));
				break;
			}
		case '-':
			{
				printf("Subtraction of %d and %d :  %.2f\n",a,b,subtract(a,b));
				break;
			}
		case '*':
			{
				printf("Multiplication of %d and %d :  %.2f\n",a,b,multiply(a,b));
				break;
			}
		case '/':
			{
				
				printf("Division of %d and %d :  %.2f\n",a,b,divide(a,b));
				break;
			}
		default:
			{
				printf("Wrong Choice\n");
			}

	}
}
