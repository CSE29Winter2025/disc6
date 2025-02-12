#include <stdio.h>

int main() {
    unsigned int num = 1;
    unsigned int mask = 0;

    printf("Size of unsigned int: %d bytes\n", sizeof(num));
    printf("Size of char: %d bytes\n", sizeof(char));

    char *ptr = &num;
    for (int i = 0; i < sizeof(num); i++) {
	// printf("i: %d, addr: %x, contents: %u \n", i, ptr, *ptr);
	printf("i: %d, addr: %x, contents: ", i, ptr);
	
	for (mask = 1 << 7; mask != 0; mask >>=1) {
	    if (*ptr & mask) printf("1");
	    else printf("0");
	}
	printf("\n");
	ptr++;
    }
}

