#include <stdio.h>

int arisum (int n) {
	int s = 0;
	for (int i = 0; i <= n; i++){
		s += i;
	}	
	return s;
}

int main () {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if (0 == 1){
		printf("The result is %d\n", arisum(n));
	} else {
		printf("Boo!\n");
	}
}
