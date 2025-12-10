/* In a town, the percentage of men is 52. The percentage of total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total number of illiterate men and women if the population of the town is
80,000.*/

#include<stdio.h>

void main()
{
	int men = 0.52;
	int literacy = 0.48;
	int lit_men = 0.35;
	int total_popu = 80000;

	int illit_men;
	int illit_wom;

	int total_men,total_wom;

	total_men = 0.52*total_popu;
	total_wom = total_popu - total_men;

	int total_lit_men = 0.35*total_popu;
	int total_lit_wom = (0.48*total_popu)-total_lit_men;

	illit_men = total_men - total_lit_men;
	illit_wom = total_wom - total_lit_wom;

	printf("The total number of illiterate men in the town = %d\n",illit_men);
	printf("The total number of illiterate woman in the town = %d\n",illit_wom);
}
