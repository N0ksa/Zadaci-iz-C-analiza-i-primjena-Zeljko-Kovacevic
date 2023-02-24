#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char c = 'A', C = 'a';
	for (; c <= 'Z'; c++)
		printf("\n%c - %d", c, c);

	for (; C <= 'z'; ++C)
		printf("\n%c - %d", C, C);




	return 0;
}

