#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


int main()
{	
	char rijec[100];
	char usporedba[100];
	scanf("%[^\n]", rijec);
	bool ima = false;
	char* adresa;

	FILE* datoteka = fopen("luke.txt", "r");
	while (fgets(usporedba, 100, datoteka) != NULL)
	{
		if ((adresa = strstr(usporedba, rijec)) != NULL)
		{	
			ima = true;
			for (int i = 0; i < (strlen(rijec)); i++)
			{
				printf("%c", *(adresa + i));
			}

			printf(" - %p (adresa u memoriji)\n", adresa);
		}
		
	}
	if (!ima)
	{
		printf("Rijec ne postoji u datoteci !");
	}



	return 0;
}