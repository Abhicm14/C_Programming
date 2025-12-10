#include<stdio.h>

void main()
{
	int arr[] = {10,11,-1,56,67,5,4};
	int *ptr1,*ptr2;

	ptr1 = arr;

	printf("%d\n",*ptr1);
	printf("%d %d %d\n",(*ptr1)++,*ptr1++,*++ptr1);

	ptr2 = ptr1+3;

	printf("%d\n",*ptr2-3);
	printf("%d\n",*--ptr1+5);
	printf("%d\n",*ptr1+*ptr2);

}
