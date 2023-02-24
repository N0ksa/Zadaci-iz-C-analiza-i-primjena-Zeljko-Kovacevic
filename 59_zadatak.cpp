#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

double faktorijel(int n);

int main()

{
	int n;
	scanf("%d", &n);
	double na = faktorijel(n);
	printf("%g", na);








	return 0;
}

double faktorijel(int n)
{
	if (n > 1)
	{
		return n * faktorijel(n - 1);
	}
	else
		return 1;
}