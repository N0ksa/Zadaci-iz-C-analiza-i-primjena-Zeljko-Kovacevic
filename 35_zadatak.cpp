#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

# define MAX 255

int main()
{
	char recenica[MAX];
	scanf("%[^\n]%*c", &recenica);
	printf("%c", recenica);



	return 0;
}
