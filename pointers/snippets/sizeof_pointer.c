#include<stdio.h>

void main()
{
	char a='x', *ptr1 = &a;
	int b=12, *ptr2 = &b;
	float c = 12.4, *ptr3=&c;
	double d=18.3, *ptr4=&d;

	printf("sizeof(p1) = %d , sizeof(*p1) = %d\n",sizeof(ptr1),sizeof(*ptr1));
	printf("sizeof(p2) = %d , sizeof(*p2) = %d\n",sizeof(ptr2),sizeof(*ptr2));
	printf("sizeof(p3) = %d , sizeof(*p3) = %d\n",sizeof(ptr3),sizeof(*ptr3));
	printf("sizeof(p4) = %d , sizeof(*p4) = %d\n",sizeof(ptr4),sizeof(*ptr4));
}
