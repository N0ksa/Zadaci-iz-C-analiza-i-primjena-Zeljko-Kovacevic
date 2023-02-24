#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int ocjena;
	printf("Unesi ocjenu (0 - 5): ");
	scanf("%d", &ocjena);
	switch (ocjena)
	{
	case 1:
		printf("Nedovoljan"); break;
	case 2:
		printf("Dovoljan"); break;
	case 3:
		printf("Dobar"); break;
	case 4:
		printf("Vrlo dobar"); break;
	case 5:
		printf("Odlican"); break;

	}

	return 0;

	
}