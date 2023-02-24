#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int broj;
	printf("Upisi cijeli broj i program ce ispisati da li je paran ili neparan: ");
	scanf("%d", &broj);
	if (broj % 2 == 0)
		printf("Broj %d je paran", broj);
	else
		printf("Broj %d je neparan", broj);

	return 0;
}