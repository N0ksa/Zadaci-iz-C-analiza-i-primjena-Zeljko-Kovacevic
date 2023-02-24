#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
# define MAX 100

int main()
{
	int niz[MAX];
	int i;
	int input;
	int broj;
	scanf("Unesi broj: %d", &input);
	for (i = 0; i < MAX, i++)
	{
		scanf("Unesi broj za niz: %d \n", niz[i]);
		if (input == niz[i])
		{
			broj++;
		}
	}

	printf("Upisani niz sadrzi %d puta vrijednost %d", broj, input);

	return 0;
}
