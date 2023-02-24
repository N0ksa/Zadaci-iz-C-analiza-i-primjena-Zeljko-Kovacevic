#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define MAX 5

int main()
{
	float niz[MAX];
	int i;
	float najmanji = 100000;
	float rezultat;
	for (i = 0; i < MAX; i++)
	{
		scanf("%f", &niz[i]);
		if (najmanji > niz[i])
		{
			najmanji = niz[i];
		}
	}

	for (i = 0; i < MAX; i++)
	{
		rezultat = niz[i] / najmanji;
		printf("%.2f podijeljeno s najmanjim brojem u nizu - %.2f je: %.2f\n", niz[i], najmanji, rezultat);
	}


	return 0;
}
