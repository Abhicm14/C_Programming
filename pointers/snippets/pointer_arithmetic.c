#include<stdio.h>

void main()
{
	int num=5,*ptri=&num;
	char ch='x',*ptrc=&ch;
	float num1=5.5,*ptrf=&num1;

	printf("Value of pi = Address of num = %u\n",ptri);
	printf("Value of pi = Address of ch = %u\n",ptrc);
	printf("Value of pi = Address of num1 = %u\n",ptrf);

	printf("\nValue of num = %d\n",*ptri);
        printf("Value of ch = %c\n",*ptrc);
        printf("Value of num1 = %f\n",*ptrf);

	ptri++;
	ptrc++;
	ptrf++;

	printf("\nNow value of ptri = %u\n",ptri);
	printf("Now value of ptrc = %u\n",ptrc);
	printf("Now value of ptrf = %u\n",ptrf);

	//printf("\nNow value of num = %d\n",*ptri);
        //printf("Now value of ch = %c\n",*ptrc);
        //printf("Now value of num1 = %f\n",*ptrf);
}
