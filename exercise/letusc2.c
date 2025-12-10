/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters. */

#include<stdio.h>

#define FEET 3280.84
#define INCH 39370.1

void main()
{
	int m,cm,km;
	float feet,inch;

	printf("Enter the distance in kilometer :  ");
	scanf("%d",&km);
	printf("%d km is equal to %d meters\n",km,km*1000);
	printf("%d km is equal to %d centimeters\n",km,km*100000);
	printf("%d km is equal to %.2e inches\n",km,INCH*km);
	printf("%d km is equal to %.2e feets\n",km,FEET*km);

}
