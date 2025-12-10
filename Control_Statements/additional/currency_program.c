/* File Name : Currency_Program
 * Date : 14/07/2025
 * Author Name : 
 * Descrption : a currency program, that tells you how many number of 100, 50, 20, 10, 5, 2 and 1 Rs notes will be needed for a given amount of money.         For example if the total amount is Rs 545 then five 100 Rs notes, two 20 Rs note and one 5 Rs note will be needed. This sort of program can be used in      ATM machines.*/

#include<stdio.h>

void main()
{
	int n,choice,notes;

	printf("Enter the total amount in Rs : ");
	scanf("%d",&n);

	printf("Enter the Value of note from which u want to begin : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		default  : 
			printf("Enter only valid values\n");
		        break;
		case 100 :
			notes=n/100;
			printf("Number of 100 Rs notes = %d\n",notes);
			n=n%100;
		case 50 :
			notes=n/50;
                        printf("Number of 50 Rs notes = %d\n",notes);
                        n=n%50;
		case 20 :
			notes=n/20;
                        printf("Number of 20 Rs notes = %d\n",notes);
                        n=n%20;
		case 10 :
			notes=n/10;
                        printf("Number of 10 Rs notes = %d\n",notes);
                        n=n%10;
		case 5 :
			notes=n/5;
                        printf("Number of 5 Rs notes = %d\n",notes);
                        n=n%5;
		case 2 :
			notes=n/2;
                        printf("Number of 2 Rs notes = %d\n",notes);
                        n=n%2;
		case 1 :
			notes=n/1;
                        printf("Number of 1 Rs notes = %d\n",notes);
				
	}
}
