#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define MAX 100

int main()
{
	int niz[MAX];
	int i;
	int input;
	int broj = 0;
	srand(time(NULL));


	printf("Unesi broj: ");
	scanf("%d", &input);
	for (i = 0; i < MAX; i++)
	{	
		niz[i] = rand() % 20 - 20;
		printf("%d", niz[i]);

		printf("\nUnesi broj za niz : ");
		if (input == niz[i])
		{
			broj++;
		}
	}

	printf("Upisani niz sadrzi %d puta vrijednost %d", broj, input);

	return 0;
}
