#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	long int broj;
	int znamenka1, znamenka2, znamenka3;
	printf("Unesi troznamenkasti broj i program ce ispisati da li mu je suma znamenaka jednaka umnosku znamenaka: ");
	scanf("%ld", &broj);
	znamenka1 = broj / 100;
	znamenka2 = (broj / 10) % 10;
	znamenka3 = broj % 10;
	if ((znamenka1 + znamenka2 + znamenka3) == (znamenka1 * znamenka2 * znamenka3))
	{

		printf("Broj %ld ima istu vrijednost suma i umnoska svojih znamenki", broj);
	}
	else
		printf("Broj %ld nema istu vrijednost suma i umnoska svojih znamenki", broj);
	return 0;
}