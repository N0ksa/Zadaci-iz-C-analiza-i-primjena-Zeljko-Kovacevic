#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int sumaznam(char* niz);

int main()
{
	char niz[100];
	scanf("%[^\n]*c", niz);
	int suma = sumaznam(niz);

	printf("%d", suma);











	return 0;
}
int sumaznam(char* niz)
{	
	int suma = 0;
	int i = 0;
	while (niz[i])
	{
		if (isdigit(niz[i]))
		{	
			suma += niz[i] - '0';
			
		}

		i++;
	}

	return suma;


		
}