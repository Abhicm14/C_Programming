//Write a program to accept n numbers in array and display the addition of all even numbers and multiplication of all odd numbers.


#include<stdio.h>

void main()
{
        int count;
        int size;
        int evenadd=0;
        int oddmul=1;
        int sum;

        printf("Enter the number of elements u want to enter : ");
        scanf("%d" ,&size);

        int arr[size];

        printf("Enter the Elements of array : \n");
        for(count=0; count<size; count++)
        {
                printf("arr[%d] = ",count);
                scanf("%d",&arr[count]);
        }

        for(count = 0; count<size; count++)
        {
                if(arr[count]%2 == 0)
                        evenadd += arr[count];
		else
                        oddmul *= arr[count];
        }
        printf("Addition of Even numbers  = %d\n",evenadd);
        printf("Multiplication of Odd numbers = %d\n",oddmul);
}
