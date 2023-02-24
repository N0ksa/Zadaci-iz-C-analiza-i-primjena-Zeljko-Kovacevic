#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int duljina(char niz[]);

int main()
{


	char niz[100];
	scanf("%[^\n]*c", niz);
	int dulj = duljina(niz);
	printf("%d", dulj);









	return 0;
}


int duljina(char niz[])
{
	int i = 0;

	while (niz[i])
	{
		i++;
	}


	return i;
}