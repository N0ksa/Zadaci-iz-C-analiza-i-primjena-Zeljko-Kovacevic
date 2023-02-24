#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int inputNumber = 0;
	int count = 0;
	float suma = 0;
	float asredina = 0;
	do
	{
		suma += inputNumber;
		asredina = suma / count;
		count++;
		scanf("%d", &inputNumber);
	} 
	while (inputNumber != 0);
		
	printf("%.2f", asredina);
	
	return 0;
}

