#include<stdio.h>

void main()
{
	int i_arr[5] = {1,2,3,4,5};
	float f_arr[5] = {1.4,2.5,3.7,4.1,5.9};
	char c_arr[5] = {'a','b','c','d','e'};

	printf("Inside main() :  ");
        printf("Size  of f_arr = %u\t",sizeof(f_arr));
        printf("Size of i_arr = %u\t",sizeof(i_arr));
        printf("Size of c_arr = %u\n",sizeof(c_arr));
	func(f_arr,i_arr,c_arr);
}

void func(float f[],int *i,char c[5])
{
	printf("Inside func() : ");
	printf("Size  of f = %d\t",sizeof(f));
	printf("Size of i = %d\t",sizeof(i));
	printf("Size of c = %d\n",sizeof(c));
}
