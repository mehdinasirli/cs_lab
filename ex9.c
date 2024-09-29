#include <stdio.h>

int main() {
	int n, res = 1;
	scanf("%d", &n);

	n = (n < 0 ? -n : n);

	if (n % 10 != 0) res *= n % 10;
	n /= 10;
	if (n % 10 != 0) res *= n % 10;
	n /= 10;
	if (n % 10 != 0) res *= n % 10;

	printf("%d\n", res);
}