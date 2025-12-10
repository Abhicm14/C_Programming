#include<stdio.h>

//#define DEF

void main()
{
	int i = 2;
	
	#ifdef DEF
		i*=i;
		printf("%d\t",i);
	#else
		printf("%d\n",i);
	#endif
	
}
