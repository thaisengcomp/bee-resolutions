#include <stdio.h>

int main (){

	double A, B;
	scanf("%lf", &A);
	scanf("%lf", &B);
	double SOMA;
	SOMA = (A + B) * (B - A + 1) / 2;
	printf("%.0lf\n", SOMA);

	return 0;
}