#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count = 0;
	for (; count < 10; count = count + 1)
	{
		int number = 0;
		for (; number < 10; number++)
		{
			printf("\n%d * %d is %d", count, number, count * number);
		}
	}

	return 0;
}

