#include<stdio.h>

void main()
{
	int m1,m2,m3,m4,total;
	char grade;
	float percentage;

	printf("Enter the marks of 4 subjects : ");
	scanf("%d %d %d %d",&m1,&m2,&m3,&m4);
	
	total = m1+m2+m3+m4;

	percentage = total/4;

	if(percentage >= 85)
		grade = 'A';
	else if(percentage >= 70)
		grade = 'B';
	else if(percentage >= 55)
		grade = 'C';
	else if(percentage >= 40)
		grade = 'D';
	else
		grade = 'E';

	printf("Percentage is %.2f\t Grade is %c\n",percentage,grade);
}
