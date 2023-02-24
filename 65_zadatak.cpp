#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void brojevi(int n);

int main()
{
	int n;
	scanf("%d", &n);
	brojevi(n);











	return 0;
}

void brojevi(int n)
{
	if (n > 1)
	{	
		n = n - 1;
		printf("%d ",  n);
		brojevi(n);
	}



}