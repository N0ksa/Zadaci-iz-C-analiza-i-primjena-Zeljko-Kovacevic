#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



void zamijeni(char a[], char b[]);

int main()
{
	char a[100];
	char b[100];
	char buffer;
	scanf("%[^\n]*c", a);
	scanf("%c", &buffer);
	scanf("%[^\n]*c", b);

	printf("Prva recenica: %s \nDruga recenica: %s", a, b);

	zamijeni(a,b);

	printf("\nPrva recenica nakon zamijene: %s \nDruga recenica nakon zamijene: %s", a, b);
	









	return 0;
}

void zamijeni(char a[], char b[])
{	
	int i = 0;
	char tmp[100];
	strcpy(tmp, a);
	strcpy(a, b);
	strcpy(b, tmp);


}