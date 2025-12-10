/*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degrees. */

#include<stdio.h>

void main()
{
	float fah;
	int celsius;
	printf("Enter the temperature in fahrenheit  : ");
	scanf("%f",&fah);
	celsius = (fah-32)/1.8;
	printf("temperature in celsius is %d\n",celsius);
}	
