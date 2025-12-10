#include"array.h"

void concatenate_array(int arr1[],int size1,int arr2[],int size2,int position)
{
        int size;
        int count;

	size = size1+size2;

        int arr[size];

	int count1=0;
	int count2=0;

        for(count=0; count<size; count++)
        {
                if(count1<position)
			arr[count]=arr1[count1++];
		else if(count2 < size2)
			arr[count] =arr2[count2++];
		else
			arr[count] = arr1[count1++];

        }

        printf("After Concatinating of 2 arrays : \n");
        print_array(arr,size);
        printf("\n");
}
