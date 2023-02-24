#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



void niz(int a, int b, int d);
int main()
{


	int a, b, d;
	scanf("%d %d %d", &a, &b, &d);
	niz(a, b, d);













	return 0;

}




void niz(int a, int b, int d)
{
	while (a < b)
	{
		a = a + d;
		if (a <= b)
		{
			printf("%d ", a);
		}
	}
}