#include <stdio.h>

int main() {
    unsigned int num = 1;
    char *cp = (char*)&num;
    if (*cp) {
        printf("Little-endian\n");
    } else {
        printf("Big-endian\n");
    }
}

