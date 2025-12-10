/*File Name : 
 * Date : 11/07/2025
 * Author Name : 
 * Write a program to find whether a date entered is valid or not. Assume that dates between years 1850 and 2050 are valid.
*/

#include<stdio.h>

void main()
{
	int d,m,y;
	char ch;
	int flag = 1, isleap = 0;
       	
	printf("Enter the date (dd/mm/yy) : ");
	scanf("%d/%d/%d",&d,&m,&y);
	
	if(y%4==0 && y%100!=0 || y%400==0)
		isleap =1;

	if(y<=1850||y>=2050)
		flag = 0;
	else if(m<1||m>12)
		flag = 0;
	else if(d<1)
		flag = 0;
	else if(m==2)
	{
		if(d>28)
			flag = 0;
		if(d==29&&isleap)
			flag = 1;
	}
	else if(m==4||m==6||m==9||m==11)
	{
		if(d>30)
			flag =0;
	}
	else if(d>31)
		flag =0;

	if(flag == 0)
		printf("%d/%d/%d is a Invalid Date\n",d,m,y);
	else
		printf("%d/%d/%d is a Valid Date\n",d,m,y);
		
}
