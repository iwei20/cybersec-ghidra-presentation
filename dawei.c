/**
 * Code for intro to patching binaries
 * instead of == result, we can change a JNZ to a JZ jump to bypass the if statement.
 **/

#include <stdio.h>

unsigned long result = 7571029657819181;

// Hash source: http://www.cse.yorku.ca/~oz/hash.html
unsigned long hash(unsigned char *str)
{
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}

int main(int argc, char** argv) {
    if (argc < 2) {
      printf("Usage: ./dawei [string]\n");
      return 0;
    }
    // printf("%lu\n", hash("F{DAWEI}"));
    if (hash(argv[1]) == result) {
      printf("You have gained access to the Ivan Bank!\n");
    } else {
      printf("Access denied.\n");
    }
}
