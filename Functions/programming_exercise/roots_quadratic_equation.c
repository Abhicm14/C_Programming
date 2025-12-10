#include<stdio.h>
#include<math.h>

int roots_quadratic(int,int,int);
int root_quadratic(int,int,int);

void main()
{
	int a,b,c,x,y,D;

	printf("Enter the a,b and c values of quadratic equation : ");
	scanf("%d %d %d",&a,&b,&c);
	
	D=((b*b)-(4*a*c));

	if(D>0)
	{	
		x=roots_quadratic(a,b,c);
		y=root_quadratic(a,b,c);
		printf("Roots of Quadratic equation is %d and %d\n",x,y);
	}
	else if(D=0)
        {
                x=roots_quadratic(a,b,c);
                y=root_quadratic(a,b,c);
                printf("Roots of Quadratic equation is %d and %d\n",x,y);
        }
	else
	{
		printf("Roots of Quadratic equation is Complex\n");
	}
}

int roots_quadratic(int a,int b,int c)
{
	int D,x;

	D=((b*b)-(4*a*c));
	if(D>0)
		x=(-b+sqrt(D))/(2*a);
	else if(D=0)
		x=(-b)/(2*a);

	return x;
}

int root_quadratic(int a,int b,int c)
{
        int D,y;

        D=((b*b)-(4*a*c));
        if(D>0)
                y=(-b-sqrt(D))/(2*a);
        else if(D=0)
                y=(-b)/(2*a);

        return y;
}
