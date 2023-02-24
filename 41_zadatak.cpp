#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define MAX 50



int main()
{
	char niz1[MAX];
	char niz2[MAX];
	int i = 0;
	int counter1 = 0;
	int counter2 = 0;
	int flag1 = 1;
	int flag2 = 1;



	do
	{
		scanf(" %s", &niz1[i]);
		i++;
		counter1++;
	} while (niz1[i - 1 ] != '*');


	i = 0;
	do
	{
		scanf(" %s", &niz2[i]);
		i++;
		counter2++;
	} while (niz2[i - 1] != '*');


	if (counter1 >= counter2)
	{
		for (int i = 0; i < counter1; i++)
		{
			if (niz1[i] != niz2[i])
			{
				printf("Znakovni nizovi nisu jednaki");
				flag1 = 0;
				break;
			}
		}
	}
	else
	{
		for (int i = 0; i < counter2; i++)
		{
			if (niz1[i] != niz2[i])
			{
				printf("Znakovni nizovi nisu jednaki");
				flag2 = 0;
				break;
			}
		}
	}



	if (flag1 && flag2 == 1)
	{
		printf("Znakovni nizovi su jednaki");
	}





	return 0;
}