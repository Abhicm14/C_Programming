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
	}student;

	FILE *fptr;
	FILE *fptrtmp;

	char name[20];
	unsigned flag = 0;

	fptr = fopen("files/stu.dat","rb");

	if(fptr == NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}

	printf("Enter the name to be deleted : ");
	scanf("%s",name);

	fptrtmp = fopen("files/tempfile.dat","wb");
	while(fread(&student,sizeof(student),1,fptr)== 1)
	{
		if(strcmp(name,student.name) !=0)
			fwrite(&student,sizeof(student),1,fptrtmp);
		else
			flag = 1;
	}

	fclose(fptr);
	fclose(fptrtmp);

	remove("files/stu.dat");
	rename("files/tempfile.dat","stu.dat");

	if(flag == 0)
	{
		printf("Name not found in file\n");
	}
	else
	{
		printf("Record deleted.....\n");
	}
}
