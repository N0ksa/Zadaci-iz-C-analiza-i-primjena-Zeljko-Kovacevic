#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int djeljivo(int a, int b, int n);

int main()
{
	int a, b, n;

	scanf("%d %d %d", &a, &b, &n);
	int djelj = djeljivo(a, b, n);
	printf("%d", djelj);









	return 0;
}


int djeljivo(int a, int b, int n)
{
	int br = 0;
	for (a; a <= b; a++)
	{
		if (a % n == 0)
		{
			br++;
		}
	}
	return br;
}