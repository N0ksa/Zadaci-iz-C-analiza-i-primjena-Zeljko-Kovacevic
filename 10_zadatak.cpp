#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float broj, apsolutna_vrijednost;
	printf("Unesi broj i program ce ispisati njegovu apsolutnu vrijednost: ");
	scanf("%f", &broj);
	if (broj * (-1) > broj)
	{
		apsolutna_vrijednost = broj * (-1);
		printf("Apsolutna vrijednost broja %.1f je %.1f", broj, apsolutna_vrijednost);
	}

	else
	{
		apsolutna_vrijednost = broj;
		printf("Apsolutna vrijednost broja %.1f je %.1f", broj, apsolutna_vrijednost);
	}

	

	
}