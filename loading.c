#include <stdio.h>
#include <unistd.h>

char flag[5] = "bobba";

int main () {
	int s = 5;
	for (int i = 0; i < s; ++i) {
		
		//do something with the flag

		printf("Loading flag");
		for(int j = 0; j <= i % 3; j++){
			printf(".");
		}
		int k = 0;
		while (1) {
			if (3 - i % 3 <= k) break;
			printf(" ");
			k += 1;
		}
		printf("(Time remaining: %d seconds)                   \n", s - i);
		fflush(stdout);
		sleep(1);
	}
	printf("\n%s\n", flag);
	return 0;
}
