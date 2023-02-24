#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



void paran(int n);
int main()
{


	int n;
	scanf("%d", &n);
	paran(n);













	return 0;

}

void paran(int n)
{
	for (int i = 2; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
	}
}