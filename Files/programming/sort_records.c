#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	struct record
	{
		char name[20];
		int roll;
		float marks;
	}student,temp,stu[50];

	FILE *fptr;
	int count,count1,count2 = 0;

	fptr = fopen("files/stu.dat","rb");
	if(fptr == NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}

	while(fread(&student,sizeof(student),1,fptr) == 1)
		stu[count2++] = student;

	for(count = 0; count < count2; count++)
	{
		for(count1 = 0; count1 < count2 - 1 - count; count1++)
		{
			if(strcmp(stu[count1].name,stu[count1+1].name) > 0)
			{
				temp = stu[count1];
				stu[count1] = stu[count1+1];
				stu[count1+1] = temp;
			}
		}	
	}

	printf("\nNAME\t\tROLLNO\t\tMARKS\n\n");
	for(count = 0; count < count2; count++)
	{
		printf("%s\t\t",stu[count].name);
		printf("%d\t\t",stu[count].roll);
		printf("%f\n",stu[count].marks);
	}
	fclose(fptr);

}
