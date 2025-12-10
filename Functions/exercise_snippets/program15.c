#include<stdio.h>

void main()
{
	int i=10,k;
	for( ; ; )
	{
		k=mult(i);
		if(--i<5)
			break;
	}
	printf("k=%d\n",k);
}

mult(int j)
{
	j*=j;
	return(j);
}
