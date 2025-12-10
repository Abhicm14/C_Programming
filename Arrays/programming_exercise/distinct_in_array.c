//Write a program to check that the elements of an array are distinct.

#include<stdio.h>

void main()
{
	int num;
	int count1;
	int count;
	int size;
	
	printf("Enter the Size of the array : ");
	scanf("%d",&size);

	int arr[size];
	int visited[size];

	printf("Enter the Elements of array : \n");
	for(count=0; count<size; count++)
	{
		printf("arr[%d] : ",count);
		scanf("%d",&arr[count]);
	}

	// Initialize visited array
    	for(count = 0; count < size; count++)
        	visited[count] = 0;

    	for(count = 0; count < size; count++) 
	{
        	if(visited[count])
            		continue;

        	int num = 0;
        	for(count1 = count + 1; count1 < size; count1++) 
		{
            		if(arr[count] == arr[count1]) 
			{
                		num++;
                		visited[count1] = 1; // Mark as counted
            		}
        	}

        	if(num > 0)
            		printf("%d has %d duplicate(s)\n", arr[count], num);
    	}

}
