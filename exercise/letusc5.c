/*The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.*/

#include<stdio.h>

#define PI 3.14159

void main()
{
	float length,breadth,radius;
	float area_rec,area_cir,perimeter_rec,perimeter_cir;
	printf("Enter the length and breadth of the rectangle : ");
	scanf("%f %f",&length,&breadth);
	printf("Enter the radius of the circle : ");
	scanf("%f",&radius);
	area_rec = length*breadth;
	perimeter_rec = 2*(length+breadth);
	area_cir = PI*(radius*radius);
	perimeter_cir = 2*PI*radius;
	printf("Recatangle area  = %.2f and perimeter = %.2f\n",area_rec,perimeter_rec);
        printf("Circle area  = %.2f and perimeter = %.2f\n",area_cir,perimeter_cir);	
}

