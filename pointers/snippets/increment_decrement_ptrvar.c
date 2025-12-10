#include<stdio.h>

void main()
{
	int num=5;
	int *ptr;

	ptr = &num;

	printf("Value of ptr = Address of num = %u\n",ptr);
        printf("Value of ptr = %u\n",++ptr);
	printf("Value of ptr = %u\n",ptr++);
  	printf("Value of ptr = %u\n",--ptr);
	printf("Value of ptr = %u\n",ptr--);
	printf("Value of ptr = %u\n",ptr);
	
	printf("Value of ptr = %d\n",++*ptr);
        //printf("Value of ptr = %d\n",ptr*++);
        printf("Value of ptr = %d\n",--*ptr);
        //printf("Value of ptr = %d\n",ptr*--);
        printf("Value of ptr = %d\n",*ptr);	
}
