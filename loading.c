#include <stdio.h>
#include <unistd.h>

char flag[22] = ">C9HI1Y=P0J9K'K*N?@6r";
char dn[36] = "INSPIRED BY LITCTF 2021 SUMMER ROUND";

int main () {
	printf("%s\n", dn);
	for (long long i = 0; i < 551999999999844; ++i) {
		flag[i % 22] ^= dn[i % 36];

		printf("\rLoading flag");
		for(int j = 0; j <= i % 3; j++){
			printf(".");
		}
		int k = 0;
		while (1) {
			if (3 - i % 3 <= k) break;
			printf(" ");
			k += 1;
		}
		printf("(Time remaining: %lld seconds)                   \r", 551999999999844 - i);
		fflush(stdout);
		sleep(1);
	}
	printf("\n%s\n", flag);
	return 0;
}
