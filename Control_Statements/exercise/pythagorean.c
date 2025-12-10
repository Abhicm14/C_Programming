#include<stdio.h>

void main()
{
	int x,y,z;

	printf("The Pythagorean triplets are : ");

	for(x=1; x<50;x++)
	{
		for(y=x+1; y<50; y++)
		{
			for(z=y+1; z<50; z++)
			{
				if((z*z) == (x*x)+(y*y))
				{
					printf("(%d,%d,%d) ",x,y,z);
				}
			}
		}
	}
	printf("\n");
}
