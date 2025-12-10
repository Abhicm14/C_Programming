/* File Name : cubes_divby3.c
 * Date : 16/07/2025
 * Author Name :
 * Description : Takeing numbr Input from the user and calculating the  cubes of those numbers and printing the number that are divisible by 3
 */

#include<stdio.h>

void main()
{
        int num,i;
        long int cube=0;

        printf("Enter the number  : ");
        scanf("%d",&num);

        for(i=1; i<=num; i++)
        {
                cube = i*i*i;
		
		if(cube%3 ==0)
		{
			printf("%ld ",cube);
		}
		else
		{
			continue;
		}
        }
	printf("\n");
}
