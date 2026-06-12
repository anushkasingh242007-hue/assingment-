#include <stdio.h>
#include <stdlib.h>

int int_pow(int base, int exp) {
	int res = 1;
	while (exp > 0) {
		res *= base;
		exp--;
	}
	return res;
}

int main(void) {
	int n;
	if (printf("Enter number: ") < 0) return 1;
	if (scanf("%d", &n) != 1) return 1;

	if (n < 0) {
		printf("Not Armstrong\n");
		return 0;
	}

	int temp = n, digits = 0;
	if (n == 0) digits = 1;
	while (temp > 0) { digits++; temp /= 10; }

	temp = n;
	int sum = 0;
	while (temp > 0) {
		int d = temp % 10;
		sum += int_pow(d, digits);
		temp /= 10;
	}

	if (sum == n) printf("Armstrong\n"); else printf("Not Armstrong\n");
	return 0;
}
