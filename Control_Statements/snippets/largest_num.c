#include<stdio.h>

void main()
{
	int a,b,c,large;

	printf("Enter the three numbers : ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b)
		if(a>c)
			large = a;
		else
			large = c;
	else
		if(b>c)
			large = b;
		else
			large = c;
	printf("Largest number is %d\n",large);
}
