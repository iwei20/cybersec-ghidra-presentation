#include <stdio.h>
#include <unistd.h>

//char flag[22] = "FLAG{FIVE_HEAD_DRAGON}";
char flag[22] = ">C9HI1Y=P0J9K'K*N?@6r";
char dn[36] = "INSPIRED BY LITCTF 2021 SUMMER ROUND";

int main () {
	for (int i = 0; i < 792/2; ++i) {
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
		printf("(Time remaining: %d seconds)                   \r", 612 - i);
		fflush(stdout);
		sleep(0);
	}
	printf("\n%s\n", flag);
	return 0;
}
