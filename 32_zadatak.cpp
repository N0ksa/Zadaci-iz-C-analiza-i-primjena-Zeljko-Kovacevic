#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int troskovi[13];
	int input;
	int count = 1;
	for (count; count < 13; count++)
	{
		scanf("%d", &input);
		troskovi[1] = input;
		printf(" U %d. mjesecu potrosli ste %d kuna", count, troskovi[count]);
	}
}
