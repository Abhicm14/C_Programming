#include<stdio.h>
#include<math.h>

void main()
{
	int i,j,arr[200];
	
	for(i=2; i<200; i++)
		arr[i]=1;
	
	for(i=2; i<=sqrt(200); i++)
		for(j=i*2; j<200; j+=i)
			arr[j] = 0;

	for(i=2; i<200; i++)
		if(arr[i] == 1)
			printf("%d\t",i);	
}
