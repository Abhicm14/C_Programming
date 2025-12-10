#include<stdio.h>

void main()
{
	char ch='A';

	switch(ch)
	{
		case 'A' : 
		case 'B' :
			ch++;
			continue;
		case 'C' :
		case 'D' :
			ch++;
	}
}
