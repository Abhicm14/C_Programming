/* File Name : Triad Numbers
 * Date : 14/07/2025
 * Author Name : 
 * Description : Program to print triad numbers. Any three numbers will be triad numbers if they satisfy the following conditions-
	1. Each number is a three digit number.
	2. All the digits in the three numbers (total 9 digits) should be different.
	3. Second number should be twice the first number and third number should be thrice the first number.
*/

#include<stdio.h>

void main()
{
	int m,n,p,num;
	int i,k,d1,d2,d3;

	for(num = 100; num<=999/3; num++)
	{
		for(i = num; i <= 3*num;i += num)
		{
			k=i;
			d1 = k%10; k /= 10;
			d2 = k%10; k /= 10;
			d3 = k%10; k /= 10;
			if(d1 == d2 || d2 == d3 || d3 == d1)
				goto nextnum;
		}

		for(m=num; m>0; m /= 10)
		{
			d1 = m%10;
			for(n=num*2; n>0; n /= 10)
			{
				d2 = n%10;
				for(p=num*3; p>0; p/=10)
				{
					d3 = p%10;
					if(d1 == d2 || d2 == d3 || d1 == d3)
						goto nextnum;
				}
			}
		}
		printf("%d %d %d\t",num,num*2,num*3);
		nextnum:
	}
	printf("\n");
}
