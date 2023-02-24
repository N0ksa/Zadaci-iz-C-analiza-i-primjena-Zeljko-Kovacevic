#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int broj1, broj2;
	printf("Upisi dva broja i program ce ispisati da li je drugi broj djeljiv s prvim bez ostatka: ");
	scanf("%d %d", &broj1, &broj2);
	

	if (broj2 == 0)
	{
		printf("Drugi broj ne smije biti nula.\nPonovno unesi brojeve.");
	}
	else if (broj1 % broj2 == 0)
	{
		printf("Prvi broj %d je djeljiv s drugim %d bez ostatka", broj1, broj2);
	}
	else
		printf("Prvi broj %d nije djeljiv s drugim %d bez ostatka", broj1, broj2);
}