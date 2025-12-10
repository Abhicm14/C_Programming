#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct record
{
	char name[20];
	int roll;
	float marks;
}stu1,stu2;

void main()
{
	FILE *fp1,*fp2,*fp3;
	int i,j;
	
	if((fp1 = fopen("files/sectionA.dat","rb")) == NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}	
	if((fp2 = fopen("files/sectionB.dat","rb")) == NULL)
	{
		printf("Erroe in opening file\n");
		exit(1);
	}
	if((fp3 = fopen("merged.dat","wb")) == NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}

	i = fread(&stu1,sizeof(stu1),1,fp1);
	j = fread(&stu2,sizeof(stu2),1,fp2);

	while((i == 1) && (j == 1))
	{
		if(stu1.marks > stu2.marks)
		{
			fwrite(&stu1,sizeof(stu1),1,fp3);
			i = fread(&stu1,sizeof(stu1),1,fp1);
		}
		else
		{
			fwrite(&stu2,sizeof(stu2),1,fp3);
                        j = fread(&stu2,sizeof(stu2),1,fp2);
		}
	}

	while(i == 1)
	{
		fwrite(&stu1, sizeof(stu1),1,fp3);
		i = fread(&stu1, sizeof(stu1),1,fp1);
	}
	while(j == 1)
        {
                fwrite(&stu1, sizeof(stu1),1,fp3);
                j = fread(&stu2, sizeof(stu2),1,fp2);
        }
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}
