//Program to accept radius of the circle and calculate the area and perimeter of the circle

#include<stdio.h>

#define PI 3.14159

void main()
{
	int radius;
	float peri,area;
	printf("Enter the radius of circle : ");
	scanf("%d",&radius);
	area = (PI*(radius*radius));
	peri = 2*PI*radius;
	printf("Area of the circle is %.2f\n Perimeter of the circle is %.2f\n",area,peri);
}

