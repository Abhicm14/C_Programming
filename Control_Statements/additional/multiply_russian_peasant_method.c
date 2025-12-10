/*File Name :
 * Date : 11/07/2025
 * Author Name : 
 * Description : Write a program to multiply two numbers by Russian peasant method. Russian peasant method multiplies any two positive numbers using multiplication by 2, division by 2 and addition. Here the first number is divided by 2(integer division), and the second is multiplied by 2 repatedly until the first number reduces to 1.*/

#include<stdio.h>

void main()
{
	int a,b,x,y,s=0;

	printf("Enter two numbers to be multiplied : ");
	scanf("%d%d",&x,&y);
	a=x;
	b=y;
	while(a>=1)
	{
		if(a%2!=0)
			s=s+b;
		a/=2;
		b*=2;
	}
	printf("%d * %d = %d\n",x,y,s);
}
