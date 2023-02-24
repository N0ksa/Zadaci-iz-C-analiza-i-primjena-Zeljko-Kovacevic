#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>


#define REDAK 3
#define STUPAC 3

int* mat(float* polje, int redak, int stupac);

int main()
{	
	
	float matrica[REDAK * STUPAC];
	for (int i = 0; i < REDAK * STUPAC; i++)
	{
		scanf("%f", &matrica[i]);
	}



	for (int i = 0; i < REDAK * STUPAC; i++)
	{
		printf(" %2f", matrica[i]);
	}

	printf("\n");

	int* novaMatrica;
	novaMatrica = mat(matrica, REDAK, STUPAC);
	for (int i = 0; i < REDAK * STUPAC; i++)
	{
		printf(" %2d", novaMatrica[i]);
	}











	return 0;
}

int* mat(float* polje, int redak, int stupac)
{
	int* matrica = (int*)malloc(sizeof(int) * redak * stupac);

	for (int i = 0; i < redak; i++)
	{
		for (int j = 0; j < stupac; j++)
		{
			matrica[i * stupac + j] = (int) polje[i * stupac + j];
		}
	}





	return matrica;
}