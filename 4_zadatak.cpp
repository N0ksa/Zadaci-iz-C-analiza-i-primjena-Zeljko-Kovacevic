#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	float a, opseg, povrsina;
	printf("Unesi duljinu stranice jednakostranicnog trokuta: ");
	scanf("%f", &a);
	povrsina = 3 * a;
	opseg = ((sqrt(3) * a * a) / 4));
	printf("\nPovrsina jednakostranicnog trokuta duljine stranice %f iznosi : %f", a, povrsina);
	printf("\nOpseg jednakostranicnog trokuta duljine stranice %f iznosi: %f", a, opseg);




	return 0;
}