#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int broj1, broj2;
	char radnja;
	printf("Unesi dva cijela broja i zatim racunsku operaciju koju zelis izvesti: ");
	scanf("%d %d %c", &broj1, &broj2, &radnja);
	switch (radnja)
	{
	case '+':
		printf("%d %c %d = %d", broj1, radnja, broj2, broj1 + broj2); break;
	case '-':
		printf("%d %c %d = %d", broj1, radnja, broj2, broj1 - broj2); break;
	case '*':
		printf("%d %c %d = %d", broj1, radnja, broj2, broj1 * broj2); break;
	case '/':
		printf("%d %c %d = %d", broj1, radnja, broj2, broj1 / broj2); break;
	default:
		printf("Krivi upis!");
	}


}