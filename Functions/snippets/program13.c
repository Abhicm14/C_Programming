#include<stdio.h>
#include<math.h>

void type(float a, float b, float c);
void area(float a, float b, float c);

void main()
{
	float a,b,c;

	printf("Enter the sides of triangle : ");
	scanf("%f%f%f",&a,&b,&c);
	if(a<b+c && b<c+a && c<a+b)
	{
		type(a,b,c);
		area(a,b,c);
	}
	else
		printf("No triangle possible with these sides\n");
}

void type(float a, float b, float c)
{
	if((a*a)+(b*b)==(c*c)||(b*b)+(c*c) == (a*a)||(c*c)+(a*a) ==(b*b))
		printf("The triangle is right angled triangle\n");
	else if(a==b && b==c)
		printf("The triangle is equilateral\n");
	else if(a==b || b==c|| c==a)
		printf("The triangle is isosceles\n");
	else
		printf("The triangle is scalene\n");
}

void area(float a, float b, float c)
{
	float s, area;
	s=(a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of triangle = %f\n",area);
}
