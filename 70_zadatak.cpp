#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char* reverse(char* niz);

int main()
{
	char niz[100];
	char* obrnuti;
	scanf("%[^\n]*c", niz);
	obrnuti = reverse(niz);
	printf("%s", obrnuti);










	return 0;
}



char* reverse(char* niz)
{	
	char* obrnuti = (char*)calloc(sizeof(niz) + 1, sizeof(char));
	char * kraj;
	int duzina;
	duzina = strlen(niz) - 1;
	kraj = niz + duzina;

	for (int i = 0; i < duzina + 1; i++)
	{
		obrnuti[i] = *kraj;
		kraj--;

	}

	return obrnuti;
	
}