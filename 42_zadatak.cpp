#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int pretvorba(char recenica[]);
int sumaZnamenaka(char recenica[]);

int main()
{
	char recenica[100 + 1] = { 0 };
	scanf("%[^\n]s", recenica);
	int i = 0;
	int counter = 0;
	int duzina = pretvorba(recenica);
	int suma = sumaZnamenaka(recenica);
	printf("%s\n%d\n%d", recenica, duzina, suma);





	return 0;
}


int pretvorba(char* recenica)
{	
	int i = 0;
	int counter = 0;
	char c;
	while (recenica[i])
	{
		if (islower(recenica[i]))
		{	
			recenica[i] = toupper(recenica[i]);
		}
		else if (isupper(recenica[i]))
		{
			recenica[i] = tolower(recenica[i]);
		}
		if (recenica[i] != ' ')
		{
			counter++;
		}
	

		i++;
	}

	return counter;
}

int sumaZnamenaka(char recenica[])
{
	int sumaZnamenaka = 0;
	int i = 0;
	while (recenica[i])
	{
		sumaZnamenaka += (int)recenica[i];
		i++;
	}

	return sumaZnamenaka;
}