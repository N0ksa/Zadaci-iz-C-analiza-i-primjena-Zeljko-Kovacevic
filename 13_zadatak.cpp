#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	float broj1, broj2;
	printf("Unesi 2 realna broja i program ce ispisati veci broj: ");
	scanf("%f %f", &broj1, &broj2);
	if (broj1 > broj2)
		printf("%f", broj1);
	else if (broj1 < broj2)
		printf("%f", broj2);
	else
		printf("Brojevi su jednaki");
	return 0;
}