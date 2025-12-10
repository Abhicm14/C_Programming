#include<stdio.h>

void main()
{
	int arr[5] = {3,5,6,7,9};
	int *p=arr;
	int (*ptr)[5]=arr;

	printf("p = %u, ptr = %u\n",p,ptr);
	printf("*p = %d, *ptr = %u\n",*p,*ptr);
        printf("sizeof(p) = %u, sizeof(*p) = %u\n",sizeof(p),sizeof(*p));
	printf("sizeof(ptr) = %u, sizeof(*ptr) = %u\n",sizeof(ptr),sizeof(*ptr));	
}
