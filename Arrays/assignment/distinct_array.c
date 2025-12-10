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
        int arr1[size];

        printf("Enter the Elements of array : \n");
        for(count=0; count<size; count++)
        {
                printf("arr[%d] : ",count);
                scanf("%d",&arr[count]);
        }

        for(count = 0; count < size; count++)
                arr1[count] = 0;

        for(count = 0; count < size; count++)
        {
                if(arr1[count])
                        continue;

                int num = 0;

                for(count1 = count + 1; count1 < size; count1++)
                {
                        if(arr[count] == arr[count1])
                        {
                                num++;
                                arr1[count1] = 1;
                        }
                }

                if(num > 0)
                        printf("%d has repeated %d times\n", arr[count], num+1);
        }

}
