#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
	float kuna, euro;
	printf("Unesi broj kuna koje zelis pretvoriti u euro: ");
	scanf("%f", &kuna);
	euro = kuna / 7.60;
	printf("\n%f kuna iznos: %f eura", kuna, euro);



	return 0;
}