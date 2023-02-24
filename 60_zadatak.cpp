#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

long najveci(long p[], int n);


int main()
{

	int n;
	long p[MAX];

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%ld", &p[i]);
	}


	long max = najveci(p, n);
	printf("%ld", max);


	            



	return 0;
}


long najveci(long p[], int n)
{
	long max = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < p[i])
		{
			max = p[i];
		}
	}

	return max;
}