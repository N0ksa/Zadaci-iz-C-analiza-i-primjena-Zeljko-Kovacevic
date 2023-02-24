#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()

{
	int karat, brojac;
	scanf("%d", &karat);
	if (karat % 2 == 0)
	{
		printf("Pogreska: Zadani dijamant nije savrsen!");
	}
	else
	{
		for (brojac = 1; brojac <= karat; brojac + 2)
		{
			printf("*");
		}
	}
	

	return 0;
}

