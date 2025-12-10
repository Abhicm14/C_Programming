#include<stdio.h>

void main()
{
	int d,m,y;
	char *months [] = { "January", "February","March","April","May","June","July","August","September","October","November", "December"};
	printf ("Enter date (dd/mm/yy) : ");
	scanf("%d/%d/%d",&d,&m,&y);
	printf("Month : %s\n",months[m-1]);
}
