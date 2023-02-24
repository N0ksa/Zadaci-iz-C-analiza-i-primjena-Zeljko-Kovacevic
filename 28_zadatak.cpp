#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int input, count;
	int n1 = 0;
	int n2 = 1;
	int n3;
	scanf("%d", &input);
	if (input <= 2 || input >= 21)
	{
		printf("Pokusaj ponovno");

	}
	else
	{	
		printf("\n%d %d", n1, n2);
		for (count = 2; count < input; count++)
		{
			n3 = n1 + n2;
			printf(" %d", n3);
			n1 = n2;
			n2 = n3;
		}
	}
}

