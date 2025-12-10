/*If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100. */

#include<stdio.h>

void main()
{
	int kan,eng,maths,sci,soc,sum;
	float percentage;
	printf("Enter the marks of kan  : ");
	scanf("%d",&kan);
	printf("Enter the marks of eng  : ");
        scanf("%d",&eng);
	printf("Enter the marks of maths  : ");
        scanf("%d",&maths);
	printf("Enter the marks of sci  : ");
        scanf("%d",&sci);
	printf("Enter the marks of soc  : ");
        scanf("%d",&soc);
	sum = kan+eng+maths+sci+soc;
	percentage = sum/5;
	printf("The total moarks %d\n percentage is %.2f\n",sum,percentage);
}	
