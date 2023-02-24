#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int samoglasnik(char* niz);

int main()
{

	char niz[100];
	scanf("%[^\n]*c", niz);
	int samoglasnika = samoglasnik(niz);
	printf("%d", samoglasnika);












	return 0;
}


int samoglasnik(char* niz)
{
	int i = 0;
	int samoglasnik = 0;
	while (niz[i])
	{	
		if (tolower (niz[i]) == 'a' || tolower(niz[i]) == 'e' || tolower(niz[i]) == 'i' || tolower(niz[i]) == 'o' || tolower(niz[i]) == 'u')
		{
			samoglasnik++;
		}

		i++;

	}
	return samoglasnik;
}