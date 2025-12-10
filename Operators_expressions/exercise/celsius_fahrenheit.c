// Enter the temperature in celsius and convert that into Fahrenheit.

#include<stdio.h>

void main()
{
	int c;
	float f;

	printf("Enter the celsius : ");
	scanf("%d",&c);
	f=(c*9/5)+32;
	printf("%d celsius is  %.2f Fahrenheit\n",c,f);
}
