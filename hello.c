#include<stdint.h>
#include<stdio.h>


// gdb commands to print bytes: x/50(wb)x <name of variable>



int main() {

    uint8_t hello8[] = { 0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x21, 0 };
    uint32_t hello32[] = { 0x48, 0x65, 0x6c, 0x6c, 0x6f, 0x21, 0 };

    printf("%s\n", hello8);
    printf("%s\n", hello32);

}
