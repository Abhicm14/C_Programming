#include<stdio.h>

void main()
{
	int a=5;
	int *ptra;
	int **pptra;

	ptra = &a;
	pptra = &ptra;

	printf("Address of a = %p\n", &a);
	printf("Value of ptra = Address of a = %p\n",ptra);
	printf("Value of *ptra = Value of a = %d\n",*ptra);
	printf("Address of ptra = %p\n",&ptra);
	printf("Value of pptra = Address of ptra = %p\n",pptra);
	printf("Value of *pptra = Value of ptra = %p\n",*pptra);
	printf("Value of **pptra = Value  of a = %d\n",**pptra);
	printf("Address of pptra = %p\n",&pptra);

}
