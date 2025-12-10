#include<stdio.h>

void main()
{
	int i=1;
	int num=2;

	while(i<10)
	{
		if(i==3)
		{
			continue;
			//break;
		}	
		printf("%d\n",i);
		i++;
	}

}
