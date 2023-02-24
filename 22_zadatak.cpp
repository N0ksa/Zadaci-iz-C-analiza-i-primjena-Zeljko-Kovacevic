#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input, count;
	float suma = 1;
	scanf("%d", &input);
	for (count = 1; count <= input; count)
	{
		suma += 1 / count;
		printf("%f", suma)
	}
	
	printf("\n.2%f", suma);
	
	return 0;
}

