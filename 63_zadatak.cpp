#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



int kopiraj(int polje1[], int n, int polje2[], int m);

int main()
{
	int polje1[100];
	int polje2[100];
	int n;
	int m;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &polje1[i]);
	}

	int broj = kopiraj(polje1, n, polje2, m);
	printf("Kopirano je %d elemenata\n", broj);
	if (broj > 0)
	{
		for (int i = 0; i < broj; i++)
		{
			printf("%2d", polje2[i]);
		}
	}






	return 0; 
}

int kopiraj(int polje1[], int n, int polje2[], int m)
{	
	int br = 0;
	int j = 0;
	if (n > m)
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{	
			if (polje1[i] >= 0)
			{	
				polje2[j] = polje1[i];
				br++;
				j++;
			}
			
		}
	}

	return br;
}