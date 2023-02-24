#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



void analiza(char* niz, int* broj, int* znak);

int main()
{
	char niz[100];
	int broj = 0;
	int znak = 0;
	int* pznak = &znak;
	scanf("%[^\n]*c0,", niz);
	analiza(niz, &broj, pznak);
	printf("%d %d", broj, znak);










	return 0;
}


void analiza(char* niz, int* broj, int* znak)
{	
	int i = 0;

	while (niz[i])
	{
		if (isalpha(niz[i]))
		{
			*broj = *broj + 1;
		}
		else if (isdigit(niz[i]))
		{
			*znak = *znak + 1;
		}
		i++;
	}
}