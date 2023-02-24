#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>



int main()
{
	
	FILE* datoteka = fopen("mojejahte.txt", "r");
	if (datoteka == NULL)
	{
		printf("Datoteka se ne moze otvoriti");
		return 1;
	}

	 fseek(datoteka, 0, SEEK_END);
	 int velicina = ftell(datoteka);
	 printf("%d kilobajta", velicina);
	







	return 0;
}