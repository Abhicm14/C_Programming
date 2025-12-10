#include<stdio.h>
#include<string.h>

void int_to_str(int num,char str[],int base);
void float_to_str(float num,char str[]);

void main()
{
	char str1[10],str2[10],str3[10],str4[10],str5[10];
	int x=45;
	float y=58.5;

	int_to_str(x,str1,16);puts(str1);
	int_to_str(x,str2,10);puts(str2);
	int_to_str(x,str3,8);puts(str3);
	int_to_str(x,str4,2);puts(str4);
	float_to_str(y,str5);puts(str5);
}

void int_to_str(int num,char str[],int b)
{
	int i=0,temp,rem,j;
	while(num>0)
	{
		rem=num%b;
		num/=b;
		if(rem>9 && rem<16)
			str[i++] = rem-10+'A';
		else
			str[i++] = rem+'0';
	}
	str[i]='\0';
	for(i=0, j=strlen(str)-1; i<j; i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}

void float_to_str(float num, char str[])
{
	int i,k;
	float f;
	i=num;

	int_to_str(i,str,10);
	str[strlen(str)+1]='\0';
	str[strlen(str)]='.';
	f=num-i;
	k=f*10000;
	int_to_str(k,str+strlen(str),10);
}
