#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


int main()
{	
	char c;
	char s[100];

	FILE* datoteka = fopen("luke.txt", "r");
	if (datoteka == NULL)
	{
		printf("Datoteka se ne moze otoviti");
		exit(1);
	}
	while (fgets(s, 100, datoteka) != NULL)
	{	
		int duzina = strlen(s) - 1;
		s[duzina] = '\0';
		puts(s);
	}



	return 0;
}