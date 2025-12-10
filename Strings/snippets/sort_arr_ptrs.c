#include<stdio.h>
#include<string.h>

#define N 5

void main()
{
	char *arrp[N]={"White","Red","Green","Yellow","Blue"};
	int i,j;
	char *temp;

	printf("Before sorting : \n");
	for(i=0;i<N;i++)
        {
                printf("%s\t",arrp[i]);
        }
        printf("\n");

	for(i=0;i<N;i++)
	{
		for(j=i+1; j<N; j++)
		{
			if(strcmp(arrp[i],arrp[j])>0)
			{
				temp = arrp[i];
				arrp[i]=arrp[j];
				arrp[j]=temp;
			}

		}
	}

	printf("After Sorting : \n");
	for(i=0;i<N;i++)
	{
		printf("%s\t",arrp[i]);
	}
	printf("\n");
}
