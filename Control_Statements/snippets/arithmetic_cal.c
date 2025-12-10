#include<stdio.h>

void main()
{
	char choice,ch;
	int num1,num2;
	
	printf("Enter the num1:");
	scanf("%d",&num1);
	printf("Enter the num2 :");
        scanf("%d",&num2);
	printf("Enter the operator : ");
	scanf("%c",&ch);
	scanf("%c",&choice);

	switch(choice)
	{
		case '+':
			printf("Addition of %d and %d is %d\n",num1,num2,num1+num2);
			break;
		case '-':
			printf("Subtraction of %d and %d is %d\n",num1,num2,num1-num2);
			break;
		case '*':
			printf("Product of %d and %d is %d\n",num1,num2,num1*num2);
			break;
		case '/':
			printf("Division of %d and %d is %d\n",num1,num2,num1/num2);
			break;
		default:
			printf("Wrong choice\n");
			break;
	}

}
