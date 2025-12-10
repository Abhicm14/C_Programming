/*Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D. */

#include<stdio.h>

void main()
{
	int c,d,temp;

	printf("Enter the two numbers : ");
	scanf("%d %d",&c,&d);
	printf("C = %d and D = %d\n",c,d);
	temp = c;
	c=d;
	d=temp;
	printf("C = %d and D = %d\n",c,d);
}
