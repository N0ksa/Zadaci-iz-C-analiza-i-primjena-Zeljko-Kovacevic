#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input, count, count2;
	float suma = 1;
	scanf("%d", &input);
	for (count = 2; count <= input; count = count + 2)
	{	
		if (count != input)
		{
			count2 = count + 1;
			suma = suma + (1.0 / count) + count2;
		}
		else
		{
			suma = suma + (1.0 / count);
		}

		
	}

	printf("\n%.2f", suma);

	return 0;
}

