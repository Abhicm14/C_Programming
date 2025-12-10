#include<stdio.h>
//#include<stdlib.h>

int select(void);
float add(float,int);
float sub(float,int);
float mul(float,int);
float div(float,int);

void main()
{
	int i,b;
	float a,r;
	float (*fp[])(float,int)={add,sub,mul,div};
	while(1)
	{
		i=select();
		if(i==5)
			exit(1);
		printf("Enter a float and a integer : ");
		scanf("%f %d",&a,&b);
		r=(*fp[i-1])(a,b);
		printf("Result is %f\n",r);
	}

}

int select(void)
{
	int choice;

	printf("1.Add\n");
	printf("2.Subtract\n");
	printf("3.multiply\n");
	printf("4.Divide\n");
	printf("5.Exit\n");

	printf("Enter your choice : ");
	scanf("%d",&choice);

	return choice;
}

float add(float a, int b)
{
	return a+b;
}

float sub(float a,int b)
{
	return a-b;
}

float mul(float a, int b)
{
	return a*b;
}

float div(float a,int b)
{
	return a/b;
}
