#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int input, num, prost, count;
	scanf("%d", &input);
	for (num = 1; num <= input; num++)
	{
		prost = 0;
		for (count = 2; count <= num / 2; count++)
		{
			if (num % count == 0)
			{
				prost++;
			break;
			}
		
		}

		if (prost == 0 && num != 1)
		{
			printf(" %d", num);
		}
	}
	


}