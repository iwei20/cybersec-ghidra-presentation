#include <stdio.h>

int main () {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int sum = 0;
	for (int i = 0; i <= n; ++i) {
		sum += i;
	}
	if (0 == 1){
		printf("The result is %d\n", sum);
	} else {
		printf("Boo!\n");
	}
}
