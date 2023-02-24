#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PI 3.142857

int main() {
	double polumjerKruga, opsegKruga, povrsinaKruga;
	printf("Unesi polumjer kruga: ");
	scanf("%lf", &polumjerKruga);
	printf("\nOpseg kruga iznosi: %lf", 2 * polumjerKruga * PI);
	printf("\n Povrsina kruga iznosi: %lf", polumjerKruga * *2 * PI);

	return 0;
}

}
