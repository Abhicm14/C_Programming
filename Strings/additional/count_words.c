#include<stdio.h>

void main()
{
	char line[100];
	int count=0;
	int i=0;

	printf("Enter the line of text : ");
	gets(line);

	while(line[i]!='\0')
	{
		if(line[i] == 32)
			count++;
		i++;
	}
	if(line[i] =='\0')
		count++;
	printf("The number of words in line = %d\n",count);
}
