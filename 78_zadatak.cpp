#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


int main()
{

	char s;
	int frekvencija[26] = { 0 };
	int max = 0;
	int indeks = -1;

	FILE* datoteka = fopen("2.txt", "r");
	if (datoteka == NULL)
	{
		printf("Datoteka se ne moze otvoriti");
		exit(1);
	}

	while ((s = fgetc(datoteka)) != EOF)
	{
		if (isalpha(s))
		{
			if (s >= 'a' && s <= 'z')
			{
				frekvencija[s - 'a']++;
			}
			else if (s >= 'A' && s <= 'Z')
			{
				frekvencija[s - 'A']++;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (frekvencija[i] > max)
		{
			max = frekvencija[i];
			indeks = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		printf("\n %c - %d puta", (i + 'a'), frekvencija[i]);
	}

	for (int i = 0; i < 26; i++)
	{
		if (frekvencija[i] == max)
		{
			printf("\nNajvise se pojavljuje slovo %c - %d puta", (i + 'a'), frekvencija[i]);
		}
	}


	


	return 0;
}