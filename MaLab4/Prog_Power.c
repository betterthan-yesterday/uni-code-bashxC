#include <stdio.h>

double power(double base, int n) {
	if (n == 0) return 1;

	return (base * power(base, n-1));
}

int main() {

	double base;
	printf("Please enter the base: ");
	scanf("%lf", &base);

	int exp;
	printf("Please enter a non-negative integer exponent: ");
	scanf("%d", &exp);

	printf("%lf, raised to the power of %d is %lf\n", base, exp, power(base, exp));

	return 0;
}
