#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int poly(int x) {
	return x * x - 22 * x + 124;
}

int main () {
	int n;
	printf("Enter the password: ");
	scanf("%d", &n);
	int flgafu[11] = {70, 76, 65, 71, 123, 68, 65, 87, 69, 73, 125};
	if (poly(n) == 3) {
		for(int i = 0; i < 11; i++){
			printf("%c", flgafu[i]);	
		}
		printf("\n");
	} else {
		printf("Wrong password.\n");
	}
	return 0;
}
