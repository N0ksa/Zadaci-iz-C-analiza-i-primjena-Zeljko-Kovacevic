#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input, sum = 0, input2, x = 1;
	scanf("%d", &input);
	for (x; x <= input; x++)
	{
		scanf("%d", &input2);
		sum += input2;
		if (input2 < 0)
		{
			printf("\n%d", sum);
			break.;
		}

	}

	return 0;
}