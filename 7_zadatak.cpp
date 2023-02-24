#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	float x, y, modul;
	printf("Unesi kordinate (x i y) tocke:");
	scanf("%f%f",&x, &y);
	modul = sqrt((x * x) + (y * y));
	printf("Udaljenost kordinatne tocke (%f,%f) iznosi: %f", x, y, modul);

	return 0;
}