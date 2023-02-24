#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input, input2, count, min, max;
	int array[100];
	scanf("%d", &input);
	for (count = 0; count < input; count++)
	{
		scanf("%d", &input2);
		array[count] = input2;
	}
	
	min = max = array[0];
	for (count = 1; count < input; count++)
	{
		if (min > array[count])
		{
			min = array[count];

		}
		if (max < array[count])
		{
			max = array[count];
		}
	}

	printf("\nNajmanji upisani broj je %d, a najveci %d ", min, max);
	return 0;
}

