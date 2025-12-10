#include<stdio.h>

void main()
{
	int arr[] = { 10,11,-1,56,67,5,4};
	int *ptr,*ptr2;
	
	ptr = arr;
	ptr2 = &arr[0]+3;

	printf("%d\n",*ptr);
	printf("%d\n",ptr);
	printf("%d ",*(++ptr));
        printf("%d ",(*ptr)++);
	printf("%d\n",*ptr++);

	ptr2--;

	printf("%d ",(*(ptr2+2))--);
	printf("%d ",*(ptr+2)-2);
	printf("%d\n",*(ptr++ - 2)-1);
}
