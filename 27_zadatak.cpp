#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{	
	int input, count;
	scanf("%d", &input);
	if (input <= 2 || input => 21)
	{
		printf("Pokusaj ponovno");

	}
	else
	{
		for (count = 0; count < input; count++)
		{
			int prvibroj = count;
			int drugibroj;
			printf("%d", prvibroj);
			drugibroj = prvibroj + count;
			printf("%d", drugibroj);
		}
	}
}

