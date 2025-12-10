#include<stdio.h>

#define MACRO(x) {if(x==0) printf("Out for a Duck\n");}
//#define MACRO(x) x==0 ? printf("Out for a Duck\n") : printf("\n")

void main()
{
	int runs =12;
	
	if(runs<100)
	{
		MACRO(runs);
	}
	else	
		printf("Scored a Century\n");
}
