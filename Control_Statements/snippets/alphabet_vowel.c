#include<stdio.h>

void main()
{
	char op;

	printf("Enter an alphabet :");
	scanf("%c",&op);

	switch(op)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			printf("Alphabet is a vowel \n");
			break;
		default:
			printf("Alphabet is a consonant \n");
			break;
	}
}
