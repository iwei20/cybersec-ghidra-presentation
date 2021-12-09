#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int poly(int x) {
	return x * x - 22 * x + 124;
}

int main () {
	int n;
	scanf("%d", &n);
	printf("Result is: %d\n", poly(n));
	if (poly(n) == 3) {
		printf("Success!\n");
	} else {
		printf("Failure! Desired result is 3\n");
	}
	return 0;
}
