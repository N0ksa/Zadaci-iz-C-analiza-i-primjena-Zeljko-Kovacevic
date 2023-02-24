#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	float brzina1, brzina2;
	printf("Upisi brzinu u km/h: ");
	scanf("%f", &brzina1);
	brzina2 = (brzina1 * 1000) / 3600;
	printf("Brzina %f km/h iznosi: %f m/s", brzina1, brzina2);




	return 0;
}