#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char slovo(char c);
int main()
{
	char c;
	scanf(" %c", &c);
	char a;
	a = slovo(c);
	printf("%c", a);











}

char slovo(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c = c;
	}
	else
		c = '0';


	return c;
}