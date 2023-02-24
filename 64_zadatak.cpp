#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int paran(int polje[], int n);

int main()
{

	int polje[100];
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &polje[i]);
	}

	int parno = paran(polje, n);
	printf("%d", parno);












	return 0;
}
int paran(int polje[], int n)
{	
	int br = 0;

	for (int i = 0; i < n; i++)
	{
		if (polje[i] != 0)
		{
			if (polje[i] % 2 == 0)
			{
				br++;
			}
		}
		
	}

	return br;
}