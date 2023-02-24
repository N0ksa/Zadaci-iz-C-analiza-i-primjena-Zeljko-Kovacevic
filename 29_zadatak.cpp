#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int count, count1, input, num;
	scanf("%d", &input);
	for (count = 1; count <= input; count++)
	{
		for (count1 = 2; count1 <= count / 2; count1++)
		{	
			num = 0;
			if (count % count1 == 0)
			{
				num++
					break;
			}
		}
	}
	if (num == 0 && count != 1)
	{
		printf(" %d", num);
	}
}
