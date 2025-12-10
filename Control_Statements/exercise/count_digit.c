/* File Name : Count digits
 * Date : 16/07/2025
 * Author Name : 
 * Description : Count the number of digits that are in the input number
 */

#include<stdio.h>

void main()
{
       long int number,rem;
       int digit,count = 0;

       printf("Enter the number : ");
       scanf("%ld",&number);
       
       int num = number;       

       printf("Enter the digit u want to find : ");
       scanf("%d",&digit);

       while(num>0)
       {
	       rem = num%10;

	       if(rem == digit)
	       {
		       count++;
	       }
	       num /= 10;
       }

       if(count>0)
       {
	       printf("Count of %d is %d\n",digit,count);
       }
       else
       {
	       printf("The %d is Not found\n",digit);
       }
}
	       
