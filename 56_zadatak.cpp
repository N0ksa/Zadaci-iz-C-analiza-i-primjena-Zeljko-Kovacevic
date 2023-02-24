#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



float suma(float a, float b);
int main()
{
	float a, b;
	float sum;
	scanf("%f %f", &a, &b);
	sum = suma(a, b);
	printf("%g + %g = %g", a, b, sum);





	return 0;
}

float suma(float a, float b)
{
	float suma;
	suma = a + b;
	return suma;
}