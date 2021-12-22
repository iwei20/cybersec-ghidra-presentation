#include <stdio.h>

int arisum (int n) {
	int s = 0;
	for (int i = 0; i <= n; i++) {
		s += i;
	}
	return s;
}

int main () {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The result is %d\n", arisum(n));

	char cstring[5] = "chart";
	for (int i = 0; i < 5; i += 2) {
		printf("%c", cstring[i]);
	}
	printf("\n%s\n", cstring);
}
